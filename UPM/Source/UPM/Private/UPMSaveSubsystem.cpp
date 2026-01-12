// Copyright UPM Team. All Rights Reserved.

#include "UPMSaveSubsystem.h"
#include "UPMGameSaveData.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "TimerManager.h"
#include "HAL/FileManager.h"
#include "Misc/Paths.h"

void UUPMSaveSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Initialize session timing
	SessionStartTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
	LastPlayTimeUpdate = SessionStartTime;

	// Refresh slot cache
	RefreshSlotCache();

	// Start auto-save timer if enabled
	if (bAutoSaveEnabled && GetWorld())
	{
		GetWorld()->GetTimerManager().SetTimer(
			AutoSaveTimerHandle,
			this,
			&UUPMSaveSubsystem::OnAutoSaveTimer,
			AutoSaveInterval,
			true
		);
	}
}

void UUPMSaveSubsystem::Deinitialize()
{
	// Clear timer
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(AutoSaveTimerHandle);
	}

	Super::Deinitialize();
}

UUPMSaveSubsystem* UUPMSaveSubsystem::Get(const UObject* WorldContextObject)
{
	if (!WorldContextObject)
	{
		return nullptr;
	}

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		return nullptr;
	}

	UGameInstance* GameInstance = World->GetGameInstance();
	if (!GameInstance)
	{
		return nullptr;
	}

	return GameInstance->GetSubsystem<UUPMSaveSubsystem>();
}

bool UUPMSaveSubsystem::SaveGame(const FString& SlotName, const FString& DisplayName, bool bAsync)
{
	if (bOperationInProgress)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: Save operation already in progress"));
		return false;
	}

	return SaveGameInternal(SlotName, EUPMSaveSlotType::Manual, DisplayName.IsEmpty() ? SlotName : DisplayName);
}

bool UUPMSaveSubsystem::LoadGame(const FString& SlotName, bool bAsync)
{
	if (bOperationInProgress)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: Load operation already in progress"));
		return false;
	}

	return LoadGameInternal(SlotName);
}

bool UUPMSaveSubsystem::QuickSave()
{
	return SaveGameInternal(QuickSaveSlotName, EUPMSaveSlotType::QuickSave, TEXT("Quick Save"));
}

bool UUPMSaveSubsystem::QuickLoad()
{
	return LoadGameInternal(QuickSaveSlotName);
}

void UUPMSaveSubsystem::SetAutoSaveEnabled(bool bEnabled)
{
	bAutoSaveEnabled = bEnabled;

	if (GetWorld())
	{
		if (bEnabled && !AutoSaveTimerHandle.IsValid())
		{
			GetWorld()->GetTimerManager().SetTimer(
				AutoSaveTimerHandle,
				this,
				&UUPMSaveSubsystem::OnAutoSaveTimer,
				AutoSaveInterval,
				true
			);
		}
		else if (!bEnabled && AutoSaveTimerHandle.IsValid())
		{
			GetWorld()->GetTimerManager().ClearTimer(AutoSaveTimerHandle);
		}
	}
}

void UUPMSaveSubsystem::SetAutoSaveInterval(float IntervalSeconds)
{
	AutoSaveInterval = FMath::Max(30.0f, IntervalSeconds); // Minimum 30 seconds

	// Restart timer with new interval if active
	if (bAutoSaveEnabled && GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(AutoSaveTimerHandle);
		GetWorld()->GetTimerManager().SetTimer(
			AutoSaveTimerHandle,
			this,
			&UUPMSaveSubsystem::OnAutoSaveTimer,
			AutoSaveInterval,
			true
		);
	}
}

void UUPMSaveSubsystem::TriggerAutoSave()
{
	if (!bAutoSaveEnabled)
	{
		return;
	}

	FString AutoSlotName = GetNextAutoSaveSlotName();
	SaveGameInternal(AutoSlotName, EUPMSaveSlotType::AutoSave, TEXT("Auto Save"));
	OnAutoSaveTriggered.Broadcast(AutoSlotName);
}

void UUPMSaveSubsystem::SetMaxAutoSaveSlots(int32 MaxSlots)
{
	MaxAutoSaveSlots = FMath::Max(1, MaxSlots);
}

TArray<FUPMSaveSlotInfo> UUPMSaveSubsystem::GetAllSaveSlots() const
{
	TArray<FUPMSaveSlotInfo> Result;
	SlotInfoCache.GenerateValueArray(Result);

	// Sort by save time (newest first)
	Result.Sort([](const FUPMSaveSlotInfo& A, const FUPMSaveSlotInfo& B)
	{
		return A.SaveTime > B.SaveTime;
	});

	return Result;
}

FUPMSaveSlotInfo UUPMSaveSubsystem::GetSaveSlotInfo(const FString& SlotName) const
{
	if (const FUPMSaveSlotInfo* Info = SlotInfoCache.Find(SlotName))
	{
		return *Info;
	}
	return FUPMSaveSlotInfo();
}

bool UUPMSaveSubsystem::DoesSaveSlotExist(const FString& SlotName) const
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}

bool UUPMSaveSubsystem::DeleteSaveSlot(const FString& SlotName)
{
	if (!DoesSaveSlotExist(SlotName))
	{
		return false;
	}

	bool bSuccess = UGameplayStatics::DeleteGameInSlot(SlotName, 0);

	if (bSuccess)
	{
		SlotInfoCache.Remove(SlotName);

		// Delete thumbnail if exists
		FString ThumbnailPath = FPaths::ProjectSavedDir() / TEXT("SaveGames") / SlotName + TEXT(".png");
		IFileManager::Get().Delete(*ThumbnailPath);

		if (CurrentSlotName == SlotName)
		{
			CurrentSlotName.Empty();
			CurrentSaveData = nullptr;
		}
	}

	return bSuccess;
}

bool UUPMSaveSubsystem::CopySaveSlot(const FString& SourceSlot, const FString& DestSlot)
{
	if (!DoesSaveSlotExist(SourceSlot) || SourceSlot == DestSlot)
	{
		return false;
	}

	// Load source
	USaveGame* SourceData = UGameplayStatics::LoadGameFromSlot(SourceSlot, 0);
	if (!SourceData)
	{
		return false;
	}

	// Save to destination
	bool bSuccess = UGameplayStatics::SaveGameToSlot(SourceData, DestSlot, 0);

	if (bSuccess)
	{
		// Update cache
		if (FUPMSaveSlotInfo* SourceInfo = SlotInfoCache.Find(SourceSlot))
		{
			FUPMSaveSlotInfo NewInfo = *SourceInfo;
			NewInfo.SlotName = DestSlot;
			NewInfo.SaveTime = FDateTime::Now();
			SlotInfoCache.Add(DestSlot, NewInfo);
		}
	}

	return bSuccess;
}

bool UUPMSaveSubsystem::RenameSaveSlot(const FString& SlotName, const FString& NewDisplayName)
{
	if (FUPMSaveSlotInfo* Info = SlotInfoCache.Find(SlotName))
	{
		Info->DisplayName = NewDisplayName;

		// Re-save to persist the change
		if (UUPMGameSaveData* SaveData = Cast<UUPMGameSaveData>(UGameplayStatics::LoadGameFromSlot(SlotName, 0)))
		{
			SaveData->SlotInfo.DisplayName = NewDisplayName;
			return UGameplayStatics::SaveGameToSlot(SaveData, SlotName, 0);
		}
	}
	return false;
}

FUPMSaveSlotInfo UUPMSaveSubsystem::GetMostRecentSave() const
{
	FUPMSaveSlotInfo MostRecent;
	FDateTime MostRecentTime = FDateTime::MinValue();

	for (const auto& Pair : SlotInfoCache)
	{
		if (Pair.Value.SaveTime > MostRecentTime)
		{
			MostRecentTime = Pair.Value.SaveTime;
			MostRecent = Pair.Value;
		}
	}

	return MostRecent;
}

FString UUPMSaveSubsystem::GenerateUniqueSlotName(const FString& Prefix) const
{
	int32 Index = 1;
	FString SlotName;

	do
	{
		SlotName = FString::Printf(TEXT("%s_%03d"), *Prefix, Index++);
	}
	while (DoesSaveSlotExist(SlotName) && Index < 1000);

	return SlotName;
}

float UUPMSaveSubsystem::GetSessionPlayTime() const
{
	if (GetWorld())
	{
		return GetWorld()->GetTimeSeconds() - SessionStartTime;
	}
	return 0.0f;
}

void UUPMSaveSubsystem::ResetPlayTime()
{
	TotalPlayTime = 0.0f;
	SessionStartTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
}

void UUPMSaveSubsystem::SetCustomSaveData(const FString& Key, const FString& Value)
{
	CustomSaveData.Add(Key, Value);
}

FString UUPMSaveSubsystem::GetCustomSaveData(const FString& Key) const
{
	if (const FString* Value = CustomSaveData.Find(Key))
	{
		return *Value;
	}
	return FString();
}

void UUPMSaveSubsystem::RemoveCustomSaveData(const FString& Key)
{
	CustomSaveData.Remove(Key);
}

void UUPMSaveSubsystem::ClearCustomSaveData()
{
	CustomSaveData.Empty();
}

void UUPMSaveSubsystem::OnAutoSaveTimer()
{
	TriggerAutoSave();
}

bool UUPMSaveSubsystem::SaveGameInternal(const FString& SlotName, EUPMSaveSlotType SlotType, const FString& DisplayName)
{
	bOperationInProgress = true;

	// Update play time before saving
	UpdatePlayTime();

	// Create or get save data
	UUPMGameSaveData* SaveData = CurrentSaveData ? CurrentSaveData : NewObject<UUPMGameSaveData>(this);

	// Populate metadata
	SaveData->SlotInfo.SlotName = SlotName;
	SaveData->SlotInfo.DisplayName = DisplayName;
	SaveData->SlotInfo.SlotType = SlotType;
	SaveData->SlotInfo.SaveTime = FDateTime::Now();
	SaveData->SlotInfo.PlayTime = TotalPlayTime + GetSessionPlayTime();
	SaveData->SlotInfo.SaveVersion = SaveData->SaveVersion;
	SaveData->RealWorldSaveTime = FDateTime::Now();
	SaveData->PlayTimeSeconds = SaveData->SlotInfo.PlayTime;

	// Get current level
	if (GetWorld())
	{
		SaveData->CurrentLevelName = GetWorld()->GetMapName();
		SaveData->CurrentLevelName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
		SaveData->SlotInfo.LevelName = SaveData->CurrentLevelName;
	}

	// Get player state
	if (APlayerController* PC = GetWorld() ? GetWorld()->GetFirstPlayerController() : nullptr)
	{
		if (APawn* Pawn = PC->GetPawn())
		{
			SaveData->PlayerTransform = Pawn->GetActorTransform();
			SaveData->PlayerVelocity = Pawn->GetVelocity();
		}
		SaveData->ControlRotation = PC->GetControlRotation();
	}

	// Copy custom data
	for (const auto& Pair : CustomSaveData)
	{
		SaveData->CustomStringData.Add(Pair.Key, Pair.Value);
	}

	// Save the game
	bool bSuccess = UGameplayStatics::SaveGameToSlot(SaveData, SlotName, 0);

	if (bSuccess)
	{
		CurrentSaveData = SaveData;
		CurrentSlotName = SlotName;
		SlotInfoCache.Add(SlotName, SaveData->SlotInfo);

		// Capture screenshot
		if (bCaptureScreenshots)
		{
			CaptureScreenshotForSave(SlotName);
		}

		UE_LOG(LogTemp, Log, TEXT("UPM: Game saved to slot '%s'"), *SlotName);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UPM: Failed to save game to slot '%s'"), *SlotName);
	}

	bOperationInProgress = false;
	OnSaveComplete.Broadcast(SlotName, bSuccess);

	return bSuccess;
}

bool UUPMSaveSubsystem::LoadGameInternal(const FString& SlotName)
{
	bOperationInProgress = true;

	if (!DoesSaveSlotExist(SlotName))
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: Save slot '%s' does not exist"), *SlotName);
		bOperationInProgress = false;
		OnLoadComplete.Broadcast(SlotName, false);
		return false;
	}

	UUPMGameSaveData* LoadedData = Cast<UUPMGameSaveData>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!LoadedData)
	{
		UE_LOG(LogTemp, Error, TEXT("UPM: Failed to load save data from slot '%s'"), *SlotName);
		bOperationInProgress = false;
		OnLoadComplete.Broadcast(SlotName, false);
		return false;
	}

	CurrentSaveData = LoadedData;
	CurrentSlotName = SlotName;
	TotalPlayTime = LoadedData->PlayTimeSeconds;

	// Reset session start time
	SessionStartTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;

	// Restore custom data
	CustomSaveData.Empty();
	for (const auto& Pair : LoadedData->CustomStringData)
	{
		CustomSaveData.Add(Pair.Key, Pair.Value);
	}

	UE_LOG(LogTemp, Log, TEXT("UPM: Game loaded from slot '%s'"), *SlotName);

	bOperationInProgress = false;
	OnLoadComplete.Broadcast(SlotName, true);

	return true;
}

void UUPMSaveSubsystem::RefreshSlotCache()
{
	SlotInfoCache.Empty();

	// Find all save files
	FString SaveDir = FPaths::ProjectSavedDir() / TEXT("SaveGames");
	TArray<FString> SaveFiles;
	IFileManager::Get().FindFiles(SaveFiles, *SaveDir, TEXT("*.sav"));

	for (const FString& File : SaveFiles)
	{
		FString SlotName = FPaths::GetBaseFilename(File);

		if (UUPMGameSaveData* SaveData = Cast<UUPMGameSaveData>(UGameplayStatics::LoadGameFromSlot(SlotName, 0)))
		{
			SlotInfoCache.Add(SlotName, SaveData->SlotInfo);
		}
	}
}

void UUPMSaveSubsystem::CaptureScreenshotForSave(const FString& SlotName)
{
	// Request screenshot
	FString ScreenshotPath = FPaths::ProjectSavedDir() / TEXT("SaveGames") / SlotName + TEXT(".png");

	FScreenshotRequest::RequestScreenshot(ScreenshotPath, false, false);

	// Update slot info with thumbnail path
	if (FUPMSaveSlotInfo* Info = SlotInfoCache.Find(SlotName))
	{
		Info->ThumbnailPath = ScreenshotPath;
	}
}

FString UUPMSaveSubsystem::GetNextAutoSaveSlotName()
{
	CurrentAutoSaveIndex = (CurrentAutoSaveIndex % MaxAutoSaveSlots) + 1;
	return FString::Printf(TEXT("AutoSave_%02d"), CurrentAutoSaveIndex);
}

void UUPMSaveSubsystem::UpdatePlayTime()
{
	if (GetWorld())
	{
		float CurrentTime = GetWorld()->GetTimeSeconds();
		float Delta = CurrentTime - LastPlayTimeUpdate;
		TotalPlayTime += Delta;
		LastPlayTimeUpdate = CurrentTime;
	}
}
