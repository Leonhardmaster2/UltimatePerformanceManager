// Copyright UPM Team. All Rights Reserved.

#include "UPMSaveLoad.h"
#include "UPMCore.h"
#include "UPMGraphicsManager.h"
#include "UPMExtendedSettings.h"
#include "UPMPerformanceMonitor.h"
#include "UPMSettingsData.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/GameUserSettings.h"

const FString UUPMSaveLoad::DefaultSaveSlotName = TEXT("UPMSettings");
const int32 UUPMSaveLoad::DefaultUserIndex = 0;

FString UUPMSaveLoad::GetSaveSlotName(const FString& SlotName)
{
	return SlotName.IsEmpty() ? DefaultSaveSlotName : SlotName;
}

bool UUPMSaveLoad::DoesSettingsSaveExist(const FString& SlotName)
{
	return UGameplayStatics::DoesSaveGameExist(GetSaveSlotName(SlotName), DefaultUserIndex);
}

bool UUPMSaveLoad::DeleteSettingsSave(const FString& SlotName)
{
	return UGameplayStatics::DeleteGameInSlot(GetSaveSlotName(SlotName), DefaultUserIndex);
}

bool UUPMSaveLoad::SaveAllSettings(const UObject* WorldContextObject, const FString& SlotName)
{
	if (!WorldContextObject)
	{
		return false;
	}

	// Create settings data with current values
	UUPMSettingsData* SettingsData = CreateSettingsData(WorldContextObject);
	if (!SettingsData)
	{
		return false;
	}

	// Save to file
	bool bSuccess = UGameplayStatics::SaveGameToSlot(SettingsData, GetSaveSlotName(SlotName), DefaultUserIndex);

	// Also save GameUserSettings for engine scalability
	if (GEngine)
	{
		if (UGameUserSettings* GameSettings = GEngine->GetGameUserSettings())
		{
			GameSettings->SaveSettings();
		}
	}

	return bSuccess;
}

bool UUPMSaveLoad::LoadAllSettings(const UObject* WorldContextObject, const FString& SlotName)
{
	if (!WorldContextObject)
	{
		return false;
	}

	FString ActualSlotName = GetSaveSlotName(SlotName);

	// Check if save exists
	if (!UGameplayStatics::DoesSaveGameExist(ActualSlotName, DefaultUserIndex))
	{
		return false;
	}

	// Load from file
	UUPMSettingsData* SettingsData = Cast<UUPMSettingsData>(
		UGameplayStatics::LoadGameFromSlot(ActualSlotName, DefaultUserIndex));

	if (!SettingsData)
	{
		return false;
	}

	// Apply loaded settings
	ApplySettingsData(WorldContextObject, SettingsData);

	return true;
}

UUPMSettingsData* UUPMSaveLoad::CreateSettingsData(const UObject* WorldContextObject)
{
	UUPMSettingsData* SettingsData = NewObject<UUPMSettingsData>();
	if (!SettingsData)
	{
		return nullptr;
	}

	// Get UPMCore for graphics and performance settings
	UUPMCore* Core = UUPMCore::Get(WorldContextObject);
	if (Core)
	{
		// Save graphics settings
		if (UUPMGraphicsManager* GraphicsManager = Core->GetGraphicsManager())
		{
			SettingsData->CurrentQualitySettings = GraphicsManager->GetCurrentSettingsAsPreset();
			SettingsData->Resolution = GraphicsManager->GetScreenResolution();
			SettingsData->WindowMode = GraphicsManager->GetFullscreenMode();
			SettingsData->ResolutionScale = GraphicsManager->GetResolutionScale();
		}

		// Save performance monitor settings
		if (UUPMPerformanceMonitor* PerfMonitor = Core->GetPerformanceMonitor())
		{
			SettingsData->MonitoringMode = PerfMonitor->GetMonitoringMode();
			SettingsData->bShowFPSCounter = PerfMonitor->IsMonitoringEnabled();
		}
	}

	// Get extended settings from local player
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (World)
	{
		if (ULocalPlayer* LocalPlayer = World->GetFirstLocalPlayerFromController())
		{
			if (UUPMExtendedSettings* ExtendedSettings = LocalPlayer->GetSubsystem<UUPMExtendedSettings>())
			{
				SaveExtendedSettings(ExtendedSettings, SettingsData);
			}
		}
	}

	return SettingsData;
}

void UUPMSaveLoad::ApplySettingsData(const UObject* WorldContextObject, UUPMSettingsData* SettingsData)
{
	if (!SettingsData)
	{
		return;
	}

	// Apply to UPMCore systems
	UUPMCore* Core = UUPMCore::Get(WorldContextObject);
	if (Core)
	{
		// Apply graphics settings
		if (UUPMGraphicsManager* GraphicsManager = Core->GetGraphicsManager())
		{
			GraphicsManager->ApplyPreset(SettingsData->CurrentQualitySettings);
			GraphicsManager->SetScreenResolution(SettingsData->Resolution);
			GraphicsManager->SetFullscreenMode(SettingsData->WindowMode);
			GraphicsManager->SetResolutionScale(SettingsData->ResolutionScale);
			GraphicsManager->ApplySettings();
		}

		// Apply performance monitor settings
		if (UUPMPerformanceMonitor* PerfMonitor = Core->GetPerformanceMonitor())
		{
			PerfMonitor->SetMonitoringMode(SettingsData->MonitoringMode);
		}
	}

	// Apply extended settings to local player
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (World)
	{
		if (ULocalPlayer* LocalPlayer = World->GetFirstLocalPlayerFromController())
		{
			if (UUPMExtendedSettings* ExtendedSettings = LocalPlayer->GetSubsystem<UUPMExtendedSettings>())
			{
				LoadExtendedSettings(ExtendedSettings, SettingsData);
				ExtendedSettings->ApplyAllExtendedSettings();
			}
		}
	}
}

void UUPMSaveLoad::SaveExtendedSettings(UUPMExtendedSettings* ExtendedSettings, UUPMSettingsData* SettingsData)
{
	if (!ExtendedSettings || !SettingsData)
	{
		return;
	}

	// Camera
	SettingsData->FieldOfView = ExtendedSettings->GetFieldOfView();
	SettingsData->CameraShakeScale = ExtendedSettings->GetCameraShakeScale();
	SettingsData->bHeadBobEnabled = ExtendedSettings->GetHeadBobEnabled();

	// Mouse Input
	SettingsData->MouseSensitivity = ExtendedSettings->GetMouseSensitivity();
	SettingsData->bInvertMouseY = ExtendedSettings->GetInvertMouseY();
	SettingsData->bMouseSmoothing = ExtendedSettings->GetMouseSmoothingEnabled();
	SettingsData->bMouseAcceleration = ExtendedSettings->GetMouseAccelerationEnabled();

	// Controller Input
	SettingsData->ControllerSensitivity = ExtendedSettings->GetControllerSensitivity();
	SettingsData->bInvertControllerY = ExtendedSettings->GetInvertControllerY();
	SettingsData->DeadzoneInner = ExtendedSettings->GetControllerDeadzoneInner();
	SettingsData->AimSensitivityMultiplier = ExtendedSettings->GetAimSensitivityMultiplier();

	// Controller Features
	SettingsData->bVibrationEnabled = ExtendedSettings->GetVibrationEnabled();
	SettingsData->bAimAssistEnabled = ExtendedSettings->GetAimAssistEnabled();

	// Post Process
	SettingsData->MotionBlurIntensity = ExtendedSettings->GetMotionBlurIntensity();
	SettingsData->Gamma = ExtendedSettings->GetGamma();
	SettingsData->Brightness = ExtendedSettings->GetBrightness();

	// Audio
	SettingsData->MasterVolume = ExtendedSettings->GetMasterVolume();
	SettingsData->MusicVolume = ExtendedSettings->GetMusicVolume();
	SettingsData->SFXVolume = ExtendedSettings->GetSFXVolume();
	SettingsData->VoiceVolume = ExtendedSettings->GetVoiceVolume();

	// Accessibility
	SettingsData->bSubtitlesEnabled = ExtendedSettings->GetSubtitlesEnabled();
	SettingsData->ColorblindMode = ExtendedSettings->GetColorblindMode();
	SettingsData->HUDScale = ExtendedSettings->GetHUDScale();
}

void UUPMSaveLoad::LoadExtendedSettings(UUPMExtendedSettings* ExtendedSettings, UUPMSettingsData* SettingsData)
{
	if (!ExtendedSettings || !SettingsData)
	{
		return;
	}

	// Camera
	ExtendedSettings->SetFieldOfView(SettingsData->FieldOfView);
	ExtendedSettings->SetCameraShakeScale(SettingsData->CameraShakeScale);
	ExtendedSettings->SetHeadBobEnabled(SettingsData->bHeadBobEnabled);
	ExtendedSettings->SetHeadBobIntensity(SettingsData->HeadBobIntensity);

	// Mouse Input
	ExtendedSettings->SetMouseSensitivity(SettingsData->MouseSensitivity);
	ExtendedSettings->SetMouseSensitivityX(SettingsData->MouseSensitivityX);
	ExtendedSettings->SetMouseSensitivityY(SettingsData->MouseSensitivityY);
	ExtendedSettings->SetInvertMouseY(SettingsData->bInvertMouseY);
	ExtendedSettings->SetInvertMouseX(SettingsData->bInvertMouseX);
	ExtendedSettings->SetMouseSmoothingEnabled(SettingsData->bMouseSmoothing);
	ExtendedSettings->SetMouseAccelerationEnabled(SettingsData->bMouseAcceleration);

	// Controller Input
	ExtendedSettings->SetControllerSensitivity(SettingsData->ControllerSensitivity);
	ExtendedSettings->SetControllerSensitivityX(SettingsData->ControllerSensitivityX);
	ExtendedSettings->SetControllerSensitivityY(SettingsData->ControllerSensitivityY);
	ExtendedSettings->SetInvertControllerY(SettingsData->bInvertControllerY);
	ExtendedSettings->SetInvertControllerX(SettingsData->bInvertControllerX);
	ExtendedSettings->SetControllerDeadzoneInner(SettingsData->DeadzoneInner);
	ExtendedSettings->SetControllerDeadzoneOuter(SettingsData->DeadzoneOuter);
	ExtendedSettings->SetAimSensitivityMultiplier(SettingsData->AimSensitivityMultiplier);

	// Controller Features
	ExtendedSettings->SetVibrationEnabled(SettingsData->bVibrationEnabled);
	ExtendedSettings->SetVibrationIntensity(SettingsData->VibrationIntensity);
	ExtendedSettings->SetAimAssistEnabled(SettingsData->bAimAssistEnabled);
	ExtendedSettings->SetAimAssistStrength(SettingsData->AimAssistStrength);

	// Post Process
	ExtendedSettings->SetMotionBlurEnabled(SettingsData->bMotionBlurEnabled);
	ExtendedSettings->SetMotionBlurIntensity(SettingsData->MotionBlurIntensity);
	ExtendedSettings->SetGamma(SettingsData->Gamma);
	ExtendedSettings->SetBrightness(SettingsData->Brightness);
	ExtendedSettings->SetContrast(SettingsData->Contrast);
	ExtendedSettings->SetVignetteIntensity(SettingsData->VignetteIntensity);
	ExtendedSettings->SetChromaticAberrationIntensity(SettingsData->ChromaticAberration);
	ExtendedSettings->SetFilmGrainIntensity(SettingsData->FilmGrain);
	ExtendedSettings->SetDepthOfFieldEnabled(SettingsData->bDepthOfFieldEnabled);
	ExtendedSettings->SetLensFlareEnabled(SettingsData->bLensFlareEnabled);
	ExtendedSettings->SetBloomIntensity(SettingsData->BloomIntensity);

	// Audio
	ExtendedSettings->SetMasterVolume(SettingsData->MasterVolume);
	ExtendedSettings->SetMusicVolume(SettingsData->MusicVolume);
	ExtendedSettings->SetSFXVolume(SettingsData->SFXVolume);
	ExtendedSettings->SetVoiceVolume(SettingsData->VoiceVolume);
	ExtendedSettings->SetAmbientVolume(SettingsData->AmbientVolume);
	ExtendedSettings->SetUIVolume(SettingsData->UIVolume);

	// Accessibility
	ExtendedSettings->SetSubtitlesEnabled(SettingsData->bSubtitlesEnabled);
	ExtendedSettings->SetSubtitleSize(SettingsData->SubtitleSize);
	ExtendedSettings->SetSubtitleBackground(SettingsData->bSubtitleBackground);
	ExtendedSettings->SetColorblindMode(SettingsData->ColorblindMode);
	ExtendedSettings->SetColorblindStrength(SettingsData->ColorblindStrength);
	ExtendedSettings->SetHUDScale(SettingsData->HUDScale);
	ExtendedSettings->SetHighContrastMode(SettingsData->bHighContrastMode);
	ExtendedSettings->SetReduceScreenShake(SettingsData->bReduceScreenShake);
}
