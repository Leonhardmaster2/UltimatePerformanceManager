// Copyright UPM Team. All Rights Reserved.

#include "UPMInputRebindingManager.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "PlayerMappableInputConfig.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/InputSettings.h"
#include "Framework/Application/SlateApplication.h"

void UUPMInputRebindingManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Initialize blocked keys (keys that shouldn't be rebindable)
	BlockedKeys.Add(EKeys::Escape);
	BlockedKeys.Add(EKeys::Console);
	BlockedKeys.Add(EKeys::Tilde);

	// Try to load saved bindings
	LoadBindings();
}

void UUPMInputRebindingManager::Deinitialize()
{
	// Save bindings on shutdown if there are changes
	if (bHasUnsavedChanges)
	{
		SaveBindings();
	}

	Super::Deinitialize();
}

UUPMInputRebindingManager* UUPMInputRebindingManager::Get(const UObject* WorldContextObject, int32 PlayerIndex)
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

	ULocalPlayer* LocalPlayer = GameInstance->GetLocalPlayerByIndex(PlayerIndex);
	if (!LocalPlayer)
	{
		return nullptr;
	}

	return LocalPlayer->GetSubsystem<UUPMInputRebindingManager>();
}

TArray<FUPMInputBindingInfo> UUPMInputRebindingManager::GetAllBindings() const
{
	TArray<FUPMInputBindingInfo> Result;
	CurrentBindings.GenerateValueArray(Result);
	return Result;
}

TArray<FUPMInputBindingInfo> UUPMInputRebindingManager::GetBindingsByCategory(const FText& CategoryName) const
{
	TArray<FUPMInputBindingInfo> Result;

	for (const auto& Pair : CurrentBindings)
	{
		if (Pair.Value.CategoryName.EqualTo(CategoryName))
		{
			Result.Add(Pair.Value);
		}
	}

	return Result;
}

FUPMInputBindingInfo UUPMInputRebindingManager::GetBindingInfo(FName ActionName) const
{
	if (const FUPMInputBindingInfo* Info = CurrentBindings.Find(ActionName))
	{
		return *Info;
	}
	return FUPMInputBindingInfo();
}

TArray<FText> UUPMInputRebindingManager::GetAllCategories() const
{
	TArray<FText> Categories;

	for (const auto& Pair : CurrentBindings)
	{
		bool bFound = false;
		for (const FText& Cat : Categories)
		{
			if (Cat.EqualTo(Pair.Value.CategoryName))
			{
				bFound = true;
				break;
			}
		}
		if (!bFound)
		{
			Categories.Add(Pair.Value.CategoryName);
		}
	}

	return Categories;
}

void UUPMInputRebindingManager::StartRebinding(FName ActionName, bool bIsPrimary, bool bIsGamepad)
{
	if (!CurrentBindings.Contains(ActionName))
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: Unknown action '%s' for rebinding"), *ActionName.ToString());
		return;
	}

	const FUPMInputBindingInfo& Info = CurrentBindings[ActionName];
	if (!Info.bIsRebindable)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: Action '%s' is not rebindable"), *ActionName.ToString());
		return;
	}

	bIsRebinding = true;
	RebindingActionName = ActionName;
	bRebindingPrimary = bIsPrimary;
	bRebindingGamepad = bIsGamepad;

	OnRebindStarted.Broadcast(ActionName);

	UE_LOG(LogTemp, Log, TEXT("UPM: Started rebinding for action '%s'"), *ActionName.ToString());
}

void UUPMInputRebindingManager::CancelRebinding()
{
	if (bIsRebinding)
	{
		bIsRebinding = false;
		RebindingActionName = NAME_None;
		OnRebindCancelled.Broadcast();
	}
}

bool UUPMInputRebindingManager::SetBinding(FName ActionName, FKey NewKey, bool bIsPrimary, bool bIsGamepad)
{
	if (!CurrentBindings.Contains(ActionName))
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: Unknown action '%s'"), *ActionName.ToString());
		return false;
	}

	// Check for blocked keys
	if (BlockedKeys.Contains(NewKey))
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: Key '%s' is blocked from rebinding"), *NewKey.ToString());
		return false;
	}

	// Check for conflicts
	if (!bAllowDuplicateBindings)
	{
		FName ConflictingAction;
		if (HasKeyConflict(NewKey, ConflictingAction) && ConflictingAction != ActionName)
		{
			// Clear the conflicting binding
			ClearBinding(ConflictingAction, true, bIsGamepad);
			ClearBinding(ConflictingAction, false, bIsGamepad);
		}
	}

	// Update the binding
	FUPMInputBindingInfo& Info = CurrentBindings[ActionName];

	if (bIsGamepad)
	{
		Info.GamepadKey = NewKey;
	}
	else if (bIsPrimary)
	{
		Info.PrimaryKey = NewKey;
	}
	else
	{
		Info.SecondaryKey = NewKey;
	}

	bHasUnsavedChanges = true;

	// Apply to Enhanced Input system
	ApplyBindings();

	return true;
}

void UUPMInputRebindingManager::ClearBinding(FName ActionName, bool bIsPrimary, bool bIsGamepad)
{
	if (FUPMInputBindingInfo* Info = CurrentBindings.Find(ActionName))
	{
		if (bIsGamepad)
		{
			Info->GamepadKey = EKeys::Invalid;
		}
		else if (bIsPrimary)
		{
			Info->PrimaryKey = EKeys::Invalid;
		}
		else
		{
			Info->SecondaryKey = EKeys::Invalid;
		}

		bHasUnsavedChanges = true;
	}
}

bool UUPMInputRebindingManager::HasKeyConflict(FKey Key, FName& OutConflictingAction) const
{
	if (!Key.IsValid())
	{
		return false;
	}

	for (const auto& Pair : CurrentBindings)
	{
		const FUPMInputBindingInfo& Info = Pair.Value;

		if (Info.PrimaryKey == Key || Info.SecondaryKey == Key || Info.GamepadKey == Key)
		{
			OutConflictingAction = Pair.Key;
			return true;
		}
	}

	return false;
}

TArray<FName> UUPMInputRebindingManager::GetActionsUsingKey(FKey Key) const
{
	TArray<FName> Actions;

	for (const auto& Pair : CurrentBindings)
	{
		const FUPMInputBindingInfo& Info = Pair.Value;

		if (Info.PrimaryKey == Key || Info.SecondaryKey == Key || Info.GamepadKey == Key)
		{
			Actions.Add(Pair.Key);
		}
	}

	return Actions;
}

bool UUPMInputRebindingManager::SaveBindings(const FString& ProfileName)
{
	// Save to config file
	FString ConfigPath = FPaths::ProjectSavedDir() / TEXT("Config") / TEXT("InputBindings_") + ProfileName + TEXT(".ini");

	GConfig->EmptySection(TEXT("InputBindings"), *ConfigPath);

	for (const auto& Pair : CurrentBindings)
	{
		FString Section = TEXT("InputBindings");
		FString KeyBase = Pair.Key.ToString();

		GConfig->SetString(*Section, *(KeyBase + TEXT("_Primary")), *Pair.Value.PrimaryKey.ToString(), *ConfigPath);
		GConfig->SetString(*Section, *(KeyBase + TEXT("_Secondary")), *Pair.Value.SecondaryKey.ToString(), *ConfigPath);
		GConfig->SetString(*Section, *(KeyBase + TEXT("_Gamepad")), *Pair.Value.GamepadKey.ToString(), *ConfigPath);
	}

	GConfig->Flush(false, ConfigPath);
	bHasUnsavedChanges = false;

	UE_LOG(LogTemp, Log, TEXT("UPM: Saved input bindings to profile '%s'"), *ProfileName);
	return true;
}

bool UUPMInputRebindingManager::LoadBindings(const FString& ProfileName)
{
	FString ConfigPath = FPaths::ProjectSavedDir() / TEXT("Config") / TEXT("InputBindings_") + ProfileName + TEXT(".ini");

	if (!FPaths::FileExists(ConfigPath))
	{
		return false;
	}

	for (auto& Pair : CurrentBindings)
	{
		FString Section = TEXT("InputBindings");
		FString KeyBase = Pair.Key.ToString();

		FString PrimaryStr, SecondaryStr, GamepadStr;

		if (GConfig->GetString(*Section, *(KeyBase + TEXT("_Primary")), PrimaryStr, *ConfigPath))
		{
			Pair.Value.PrimaryKey = FKey(*PrimaryStr);
		}
		if (GConfig->GetString(*Section, *(KeyBase + TEXT("_Secondary")), SecondaryStr, *ConfigPath))
		{
			Pair.Value.SecondaryKey = FKey(*SecondaryStr);
		}
		if (GConfig->GetString(*Section, *(KeyBase + TEXT("_Gamepad")), GamepadStr, *ConfigPath))
		{
			Pair.Value.GamepadKey = FKey(*GamepadStr);
		}
	}

	ApplyBindings();
	bHasUnsavedChanges = false;

	UE_LOG(LogTemp, Log, TEXT("UPM: Loaded input bindings from profile '%s'"), *ProfileName);
	return true;
}

void UUPMInputRebindingManager::ResetToDefaults()
{
	CurrentBindings = DefaultBindings;
	ApplyBindings();
	bHasUnsavedChanges = true;

	UE_LOG(LogTemp, Log, TEXT("UPM: Reset all input bindings to defaults"));
}

void UUPMInputRebindingManager::ResetActionToDefault(FName ActionName)
{
	if (const FUPMInputBindingInfo* DefaultInfo = DefaultBindings.Find(ActionName))
	{
		CurrentBindings.Add(ActionName, *DefaultInfo);
		ApplyBindings();
		bHasUnsavedChanges = true;
	}
}

void UUPMInputRebindingManager::RegisterMappingContext(UInputMappingContext* MappingContext, const FText& CategoryName)
{
	if (!MappingContext)
	{
		return;
	}

	RegisteredContexts.Add(MappingContext, CategoryName);
	CacheDefaultBindings(MappingContext);
	BuildBindingInfo();

	UE_LOG(LogTemp, Log, TEXT("UPM: Registered mapping context '%s' with category '%s'"),
		*MappingContext->GetName(), *CategoryName.ToString());
}

void UUPMInputRebindingManager::RegisterPlayerMappableConfig(UPlayerMappableInputConfig* Config)
{
	if (!Config)
	{
		return;
	}

	// Get mapping contexts from the config
	TArray<UInputMappingContext*> Contexts = Config->GetMappingContexts();
	for (UInputMappingContext* Context : Contexts)
	{
		RegisterMappingContext(Context, Config->GetDisplayName());
	}
}

void UUPMInputRebindingManager::ApplyBindings()
{
	UEnhancedInputLocalPlayerSubsystem* Subsystem = GetEnhancedInputSubsystem();
	if (!Subsystem)
	{
		return;
	}

	// For each registered context, update the mappings
	for (const auto& ContextPair : RegisteredContexts)
	{
		UInputMappingContext* Context = ContextPair.Key;
		if (!Context)
		{
			continue;
		}

		// Get all mappings in this context
		const TArray<FEnhancedActionKeyMapping>& Mappings = Context->GetMappings();

		for (int32 i = 0; i < Mappings.Num(); ++i)
		{
			const FEnhancedActionKeyMapping& Mapping = Mappings[i];
			if (!Mapping.Action)
			{
				continue;
			}

			FName ActionName = Mapping.Action->GetFName();
			if (const FUPMInputBindingInfo* BindingInfo = CurrentBindings.Find(ActionName))
			{
				// The Enhanced Input system doesn't support direct runtime rebinding in the same way
				// We would need to use UEnhancedInputUserSettings or modify the mappings directly
				// For now, this is a placeholder that shows the architecture
			}
		}
	}
}

FText UUPMInputRebindingManager::GetKeyDisplayName(FKey Key)
{
	if (!Key.IsValid())
	{
		return NSLOCTEXT("UPM", "UnboundKey", "Unbound");
	}

	return Key.GetDisplayName();
}

bool UUPMInputRebindingManager::IsGamepadKey(FKey Key)
{
	return Key.IsGamepadKey();
}

bool UUPMInputRebindingManager::IsModifierKey(FKey Key)
{
	return Key == EKeys::LeftShift || Key == EKeys::RightShift ||
		Key == EKeys::LeftControl || Key == EKeys::RightControl ||
		Key == EKeys::LeftAlt || Key == EKeys::RightAlt ||
		Key == EKeys::LeftCommand || Key == EKeys::RightCommand;
}

void UUPMInputRebindingManager::ProcessKeyForRebinding(FKey Key)
{
	if (!bIsRebinding)
	{
		return;
	}

	// Check if escape was pressed to cancel
	if (Key == EKeys::Escape)
	{
		CancelRebinding();
		return;
	}

	// Validate key type matches what we're looking for
	bool bKeyIsGamepad = IsGamepadKey(Key);
	if (bKeyIsGamepad != bRebindingGamepad)
	{
		return;
	}

	// Try to set the binding
	if (SetBinding(RebindingActionName, Key, bRebindingPrimary, bRebindingGamepad))
	{
		FName CompletedAction = RebindingActionName;
		bIsRebinding = false;
		RebindingActionName = NAME_None;
		OnRebindComplete.Broadcast(CompletedAction, Key);
	}
}

bool UUPMInputRebindingManager::HandleKeyDown(FKey Key)
{
	if (bIsRebinding)
	{
		ProcessKeyForRebinding(Key);
		return true; // Consume the input
	}
	return false;
}

void UUPMInputRebindingManager::CacheDefaultBindings(UInputMappingContext* Context)
{
	if (!Context)
	{
		return;
	}

	const FText& CategoryName = RegisteredContexts.FindRef(Context);
	const TArray<FEnhancedActionKeyMapping>& Mappings = Context->GetMappings();

	for (const FEnhancedActionKeyMapping& Mapping : Mappings)
	{
		if (!Mapping.Action)
		{
			continue;
		}

		FName ActionName = Mapping.Action->GetFName();

		// Create or update binding info
		FUPMInputBindingInfo& Info = DefaultBindings.FindOrAdd(ActionName);
		Info.ActionName = ActionName;
		Info.MappingContext = Context->GetFName();
		Info.DisplayName = FText::FromName(ActionName);
		Info.CategoryName = CategoryName;
		Info.bIsRebindable = true;

		// Determine if this is a gamepad or keyboard/mouse mapping
		if (IsGamepadKey(Mapping.Key))
		{
			Info.GamepadKey = Mapping.Key;
		}
		else
		{
			// Assign to primary if empty, otherwise secondary
			if (!Info.PrimaryKey.IsValid())
			{
				Info.PrimaryKey = Mapping.Key;
			}
			else if (!Info.SecondaryKey.IsValid())
			{
				Info.SecondaryKey = Mapping.Key;
			}
		}
	}
}

UEnhancedInputLocalPlayerSubsystem* UUPMInputRebindingManager::GetEnhancedInputSubsystem() const
{
	ULocalPlayer* LocalPlayer = GetLocalPlayer();
	if (LocalPlayer)
	{
		return LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	}
	return nullptr;
}

void UUPMInputRebindingManager::BuildBindingInfo()
{
	// Copy defaults to current if not already set
	for (const auto& Pair : DefaultBindings)
	{
		if (!CurrentBindings.Contains(Pair.Key))
		{
			CurrentBindings.Add(Pair.Key, Pair.Value);
		}
	}
}
