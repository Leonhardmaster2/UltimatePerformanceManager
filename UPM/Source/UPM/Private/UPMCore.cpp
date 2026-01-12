// Copyright UPM Team. All Rights Reserved.

#include "UPMCore.h"
#include "UPMGraphicsManager.h"
#include "UPMPerformanceMonitor.h"
#include "UPMSaveLoad.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"

void UUPMCore::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	InitializeManagers();

	// Load saved settings on startup
	LoadAllSettings();
}

void UUPMCore::Deinitialize()
{
	// Save settings before shutdown
	SaveAllSettings();

	Super::Deinitialize();
}

UUPMCore* UUPMCore::Get(const UObject* WorldContextObject)
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

	return GameInstance->GetSubsystem<UUPMCore>();
}

void UUPMCore::InitializeManagers()
{
	// Create Graphics Manager
	GraphicsManager = NewObject<UUPMGraphicsManager>(this);
	if (GraphicsManager)
	{
		GraphicsManager->Initialize();
	}

	// Create Performance Monitor
	PerformanceMonitor = NewObject<UUPMPerformanceMonitor>(this);
	if (PerformanceMonitor)
	{
		PerformanceMonitor->Initialize();
	}
}

void UUPMCore::ApplyAllSettings()
{
	if (GraphicsManager)
	{
		GraphicsManager->ApplySettings();
	}

	OnSettingsApplied.Broadcast();
}

void UUPMCore::ResetToDefaults()
{
	if (GraphicsManager)
	{
		GraphicsManager->ResetToDefaults();
	}

	ApplyAllSettings();
}

void UUPMCore::AutoDetectSettings()
{
	if (GraphicsManager)
	{
		GraphicsManager->AutoDetectQuality();
		ApplyAllSettings();
	}
}

void UUPMCore::SaveAllSettings()
{
	UUPMSaveLoad::SaveAllSettings(this);
	bHasUnsavedChanges = false;
}

void UUPMCore::LoadAllSettings()
{
	UUPMSaveLoad::LoadAllSettings(this);
	ApplyAllSettings();
	bHasUnsavedChanges = false; // Loading resets the unsaved state
}

void UUPMCore::MarkSettingsChanged()
{
	bHasUnsavedChanges = true;
	OnSettingsChanged.Broadcast(GraphicsManager ? GraphicsManager->GetCurrentSettingsAsPreset() : FUPMQualityPreset());
}
