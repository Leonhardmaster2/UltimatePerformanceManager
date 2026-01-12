// Copyright UPM Team. All Rights Reserved.

#include "UPMExtendedSettings.h"
#include "Camera/PlayerCameraManager.h"
#include "Components/PostProcessComponent.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"

void UUPMExtendedSettings::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Bind to pawn possession changes
	if (ULocalPlayer* LP = GetLocalPlayer())
	{
		if (APlayerController* PC = LP->GetPlayerController(GetWorld()))
		{
			PC->OnPossessedPawnChanged.AddDynamic(this, &UUPMExtendedSettings::OnPawnChanged);
		}
	}
}

void UUPMExtendedSettings::Deinitialize()
{
	// Unbind delegates
	if (ULocalPlayer* LP = GetLocalPlayer())
	{
		if (APlayerController* PC = LP->GetPlayerController(GetWorld()))
		{
			PC->OnPossessedPawnChanged.RemoveDynamic(this, &UUPMExtendedSettings::OnPawnChanged);
		}
	}

	Super::Deinitialize();
}

void UUPMExtendedSettings::OnPawnChanged(APawn* OldPawn, APawn* NewPawn)
{
	// Re-apply all settings when pawn changes
	RuntimePostProcess = nullptr; // Clear cached reference
	CachedCameraManager = nullptr;
	ApplyAllExtendedSettings();
}

// ==================== FIELD OF VIEW ====================

void UUPMExtendedSettings::SetFieldOfView(float NewFOV)
{
	StoredFOV = FMath::Clamp(NewFOV, 60.0f, 120.0f);
	ApplyFOVToCamera();
}

void UUPMExtendedSettings::ApplyFOVToCamera()
{
	ULocalPlayer* LP = GetLocalPlayer();
	if (!LP) return;

	APlayerController* PC = LP->GetPlayerController(GetWorld());
	if (!PC) return;

	// Method 1: PlayerCameraManager (recommended)
	if (APlayerCameraManager* CamManager = PC->PlayerCameraManager)
	{
		CamManager->SetFOV(StoredFOV);
		CamManager->DefaultFOV = StoredFOV;
		CachedCameraManager = CamManager;
	}

	// Method 2: Direct CameraComponent (fallback)
	if (APawn* Pawn = PC->GetPawn())
	{
		if (UCameraComponent* Cam = Pawn->FindComponentByClass<UCameraComponent>())
		{
			Cam->SetFieldOfView(StoredFOV);
		}
	}
}

// ==================== INPUT SENSITIVITY - MOUSE ====================

void UUPMExtendedSettings::SetMouseSensitivity(float Sensitivity)
{
	StoredMouseSensitivity = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	StoredMouseSensitivityX = StoredMouseSensitivity;
	StoredMouseSensitivityY = StoredMouseSensitivity;
	ApplyInputSettings();
}

void UUPMExtendedSettings::SetMouseSensitivityX(float Sensitivity)
{
	StoredMouseSensitivityX = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	ApplyInputSettings();
}

void UUPMExtendedSettings::SetMouseSensitivityY(float Sensitivity)
{
	StoredMouseSensitivityY = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	ApplyInputSettings();
}

// ==================== INPUT SENSITIVITY - CONTROLLER ====================

void UUPMExtendedSettings::SetControllerSensitivity(float Sensitivity)
{
	StoredControllerSensitivity = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	StoredControllerSensitivityX = StoredControllerSensitivity;
	StoredControllerSensitivityY = StoredControllerSensitivity;
	ApplyInputSettings();
}

void UUPMExtendedSettings::SetControllerSensitivityX(float Sensitivity)
{
	StoredControllerSensitivityX = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	ApplyInputSettings();
}

void UUPMExtendedSettings::SetControllerSensitivityY(float Sensitivity)
{
	StoredControllerSensitivityY = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	ApplyInputSettings();
}

void UUPMExtendedSettings::SetAimSensitivityMultiplier(float Multiplier)
{
	StoredAimSensitivityMultiplier = FMath::Clamp(Multiplier, 0.1f, 2.0f);
}

// ==================== AXIS INVERSION ====================

void UUPMExtendedSettings::SetInvertMouseY(bool bInvert)
{
	bStoredInvertMouseY = bInvert;
	ApplyInputSettings();
}

void UUPMExtendedSettings::SetInvertMouseX(bool bInvert)
{
	bStoredInvertMouseX = bInvert;
	ApplyInputSettings();
}

void UUPMExtendedSettings::SetInvertControllerY(bool bInvert)
{
	bStoredInvertControllerY = bInvert;
	ApplyInputSettings();
}

void UUPMExtendedSettings::SetInvertControllerX(bool bInvert)
{
	bStoredInvertControllerX = bInvert;
	ApplyInputSettings();
}

// ==================== CONTROLLER SETTINGS ====================

void UUPMExtendedSettings::SetControllerDeadzoneInner(float Deadzone)
{
	StoredDeadzoneInner = FMath::Clamp(Deadzone, 0.0f, 0.5f);
}

void UUPMExtendedSettings::SetControllerDeadzoneOuter(float Deadzone)
{
	StoredDeadzoneOuter = FMath::Clamp(Deadzone, 0.5f, 1.0f);
}

void UUPMExtendedSettings::SetVibrationEnabled(bool bEnabled)
{
	bStoredVibrationEnabled = bEnabled;
	ApplyInputSettings();
}

void UUPMExtendedSettings::SetVibrationIntensity(float Intensity)
{
	StoredVibrationIntensity = FMath::Clamp(Intensity, 0.0f, 1.0f);
}

void UUPMExtendedSettings::SetAimAssistEnabled(bool bEnabled)
{
	bStoredAimAssistEnabled = bEnabled;
}

void UUPMExtendedSettings::SetAimAssistStrength(float Strength)
{
	StoredAimAssistStrength = FMath::Clamp(Strength, 0.0f, 1.0f);
}

// ==================== MOUSE SETTINGS ====================

void UUPMExtendedSettings::SetMouseSmoothingEnabled(bool bEnabled)
{
	bStoredMouseSmoothing = bEnabled;
}

void UUPMExtendedSettings::SetMouseAccelerationEnabled(bool bEnabled)
{
	bStoredMouseAcceleration = bEnabled;
}

// ==================== CAMERA EFFECTS ====================

void UUPMExtendedSettings::SetCameraShakeScale(float Scale)
{
	StoredCameraShake = FMath::Clamp(Scale, 0.0f, 2.0f);

	ULocalPlayer* LP = GetLocalPlayer();
	if (!LP) return;

	APlayerController* PC = LP->GetPlayerController(GetWorld());
	if (PC && PC->PlayerCameraManager)
	{
		PC->PlayerCameraManager->CameraShakeScale = bStoredReduceScreenShake ? 0.0f : StoredCameraShake;
	}
}

void UUPMExtendedSettings::SetHeadBobEnabled(bool bEnabled)
{
	bStoredHeadBobEnabled = bEnabled;
}

void UUPMExtendedSettings::SetHeadBobIntensity(float Intensity)
{
	StoredHeadBobIntensity = FMath::Clamp(Intensity, 0.0f, 2.0f);
}

// ==================== POST PROCESS EFFECTS ====================

void UUPMExtendedSettings::SetMotionBlurEnabled(bool bEnabled)
{
	bStoredMotionBlurEnabled = bEnabled;
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetMotionBlurIntensity(float Intensity)
{
	StoredMotionBlur = FMath::Clamp(Intensity, 0.0f, 1.0f);
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetGamma(float NewGamma)
{
	StoredGamma = FMath::Clamp(NewGamma, 1.0f, 3.0f);
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetBrightness(float NewBrightness)
{
	StoredBrightness = FMath::Clamp(NewBrightness, 0.5f, 1.5f);
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetContrast(float NewContrast)
{
	StoredContrast = FMath::Clamp(NewContrast, 0.5f, 1.5f);
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetVignetteIntensity(float Intensity)
{
	StoredVignette = FMath::Clamp(Intensity, 0.0f, 1.0f);
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetChromaticAberrationIntensity(float Intensity)
{
	StoredChromaticAberration = FMath::Clamp(Intensity, 0.0f, 5.0f);
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetFilmGrainIntensity(float Intensity)
{
	StoredFilmGrain = FMath::Clamp(Intensity, 0.0f, 1.0f);
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetDepthOfFieldEnabled(bool bEnabled)
{
	bStoredDepthOfFieldEnabled = bEnabled;
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetLensFlareEnabled(bool bEnabled)
{
	bStoredLensFlareEnabled = bEnabled;
	ApplyPostProcessSettings();
}

void UUPMExtendedSettings::SetBloomIntensity(float Intensity)
{
	StoredBloomIntensity = FMath::Clamp(Intensity, 0.0f, 2.0f);
	ApplyPostProcessSettings();
}

// ==================== AUDIO ====================

void UUPMExtendedSettings::SetMasterVolume(float Volume)
{
	StoredMasterVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
}

void UUPMExtendedSettings::SetMusicVolume(float Volume)
{
	StoredMusicVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
}

void UUPMExtendedSettings::SetSFXVolume(float Volume)
{
	StoredSFXVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
}

void UUPMExtendedSettings::SetVoiceVolume(float Volume)
{
	StoredVoiceVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
}

void UUPMExtendedSettings::SetAmbientVolume(float Volume)
{
	StoredAmbientVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
}

void UUPMExtendedSettings::SetUIVolume(float Volume)
{
	StoredUIVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
}

// ==================== ACCESSIBILITY ====================

void UUPMExtendedSettings::SetSubtitlesEnabled(bool bEnabled)
{
	bStoredSubtitlesEnabled = bEnabled;
	ApplyAccessibilitySettings();
}

void UUPMExtendedSettings::SetSubtitleSize(EUPMSubtitleSize Size)
{
	StoredSubtitleSize = Size;
	ApplyAccessibilitySettings();
}

void UUPMExtendedSettings::SetSubtitleBackground(bool bEnabled)
{
	bStoredSubtitleBackground = bEnabled;
	ApplyAccessibilitySettings();
}

void UUPMExtendedSettings::SetColorblindMode(EUPMColorblindMode Mode)
{
	StoredColorblindMode = Mode;
	ApplyAccessibilitySettings();
}

void UUPMExtendedSettings::SetColorblindStrength(float Strength)
{
	StoredColorblindStrength = FMath::Clamp(Strength, 0.0f, 1.0f);
	ApplyAccessibilitySettings();
}

void UUPMExtendedSettings::SetHUDScale(float Scale)
{
	StoredHUDScale = FMath::Clamp(Scale, 0.5f, 2.0f);
	ApplyAccessibilitySettings();
}

void UUPMExtendedSettings::SetHighContrastMode(bool bEnabled)
{
	bStoredHighContrastMode = bEnabled;
	ApplyAccessibilitySettings();
}

void UUPMExtendedSettings::SetReduceScreenShake(bool bEnabled)
{
	bStoredReduceScreenShake = bEnabled;
	SetCameraShakeScale(StoredCameraShake); // Re-apply with new setting
}

// ==================== APPLY FUNCTIONS ====================

void UUPMExtendedSettings::ApplyInputSettings()
{
	ULocalPlayer* LP = GetLocalPlayer();
	if (!LP) return;

	APlayerController* PC = LP->GetPlayerController(GetWorld());
	if (!PC) return;

	// Apply mouse sensitivity and inversion using InputYawScale/InputPitchScale
	// Note: For Enhanced Input System, custom modifiers should be used instead
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	PC->InputYawScale_DEPRECATED = StoredMouseSensitivityX * (bStoredInvertMouseX ? -1.0f : 1.0f);
	PC->InputPitchScale_DEPRECATED = StoredMouseSensitivityY * (bStoredInvertMouseY ? -1.0f : 1.0f);
	PRAGMA_ENABLE_DEPRECATION_WARNINGS

	// Controller vibration
	PC->SetDisableHaptics(!bStoredVibrationEnabled);
}

UPostProcessComponent* UUPMExtendedSettings::GetRuntimePostProcess()
{
	if (RuntimePostProcess)
	{
		return RuntimePostProcess;
	}

	ULocalPlayer* LP = GetLocalPlayer();
	if (!LP) return nullptr;

	APlayerController* PC = LP->GetPlayerController(GetWorld());
	if (!PC || !PC->GetPawn()) return nullptr;

	// Find existing or create new
	RuntimePostProcess = PC->GetPawn()->FindComponentByClass<UPostProcessComponent>();
	if (!RuntimePostProcess)
	{
		RuntimePostProcess = NewObject<UPostProcessComponent>(PC->GetPawn());
		if (RuntimePostProcess)
		{
			RuntimePostProcess->RegisterComponent();
			RuntimePostProcess->bUnbound = true; // Affects entire screen
			RuntimePostProcess->Priority = 100;  // High priority to override level PP
		}
	}

	return RuntimePostProcess;
}

void UUPMExtendedSettings::ApplyPostProcessSettings()
{
	UPostProcessComponent* PP = GetRuntimePostProcess();
	if (!PP) return;

	// Motion Blur
	PP->Settings.bOverride_MotionBlurAmount = true;
	PP->Settings.MotionBlurAmount = bStoredMotionBlurEnabled ? StoredMotionBlur : 0.0f;

	// Vignette
	PP->Settings.bOverride_VignetteIntensity = true;
	PP->Settings.VignetteIntensity = StoredVignette;

	// Chromatic Aberration
	PP->Settings.bOverride_SceneFringeIntensity = true;
	PP->Settings.SceneFringeIntensity = StoredChromaticAberration;

	// Film Grain
	PP->Settings.bOverride_FilmGrainIntensity = true;
	PP->Settings.FilmGrainIntensity = StoredFilmGrain;

	// Bloom
	PP->Settings.bOverride_BloomIntensity = true;
	PP->Settings.BloomIntensity = StoredBloomIntensity;

	// Depth of Field (simple on/off via focal distance)
	PP->Settings.bOverride_DepthOfFieldFocalDistance = true;
	PP->Settings.DepthOfFieldFocalDistance = bStoredDepthOfFieldEnabled ? 0.0f : 10000000.0f;

	// Brightness/Contrast via Color Grading
	PP->Settings.bOverride_ColorGain = true;
	PP->Settings.ColorGain = FVector4(StoredBrightness, StoredBrightness, StoredBrightness, 1.0f);

	PP->Settings.bOverride_ColorContrast = true;
	PP->Settings.ColorContrast = FVector4(StoredContrast, StoredContrast, StoredContrast, 1.0f);

	// Gamma (via color gamma)
	PP->Settings.bOverride_ColorGamma = true;
	float GammaValue = StoredGamma / 2.2f; // Normalize around default
	PP->Settings.ColorGamma = FVector4(GammaValue, GammaValue, GammaValue, 1.0f);
}

void UUPMExtendedSettings::ApplyAudioSettings()
{
	// Audio volumes typically use Sound Classes and Sound Mixes
	// This requires project-specific setup with SoundClass assets
	// The implementation here provides the framework - actual audio mixing
	// depends on how the game's audio system is configured

	// Games should create these assets:
	// - SC_Master, SC_Music, SC_SFX, SC_Voice, SC_Ambient, SC_UI (SoundClass)
	// - UPM_SoundMix (SoundMix)
	// Then use UGameplayStatics::SetSoundMixClassOverride to apply volumes
}

void UUPMExtendedSettings::ApplyAccessibilitySettings()
{
	// Accessibility settings like subtitles and colorblind modes require
	// game-specific UI systems and post-process materials
	// This provides the settings storage - implementation depends on game systems
}

// ==================== UTILITY ====================

void UUPMExtendedSettings::ApplyAllExtendedSettings()
{
	ApplyFOVToCamera();
	ApplyInputSettings();
	ApplyPostProcessSettings();
	ApplyAudioSettings();
	ApplyAccessibilitySettings();
	SetCameraShakeScale(StoredCameraShake);
}

void UUPMExtendedSettings::ResetExtendedToDefaults()
{
	ResetInputToDefaults();
	ResetAudioToDefaults();
	ResetVisualToDefaults();
	ApplyAllExtendedSettings();
}

void UUPMExtendedSettings::ResetInputToDefaults()
{
	StoredMouseSensitivity = 1.0f;
	StoredMouseSensitivityX = 1.0f;
	StoredMouseSensitivityY = 1.0f;
	bStoredInvertMouseY = false;
	bStoredInvertMouseX = false;
	bStoredMouseSmoothing = false;
	bStoredMouseAcceleration = false;

	StoredControllerSensitivity = 1.0f;
	StoredControllerSensitivityX = 1.0f;
	StoredControllerSensitivityY = 1.0f;
	bStoredInvertControllerY = false;
	bStoredInvertControllerX = false;
	StoredDeadzoneInner = 0.2f;
	StoredDeadzoneOuter = 0.9f;
	bStoredVibrationEnabled = true;
	StoredVibrationIntensity = 1.0f;
	bStoredAimAssistEnabled = true;
	StoredAimAssistStrength = 0.5f;
	StoredAimSensitivityMultiplier = 0.7f;
}

void UUPMExtendedSettings::ResetAudioToDefaults()
{
	StoredMasterVolume = 1.0f;
	StoredMusicVolume = 1.0f;
	StoredSFXVolume = 1.0f;
	StoredVoiceVolume = 1.0f;
	StoredAmbientVolume = 1.0f;
	StoredUIVolume = 1.0f;
}

void UUPMExtendedSettings::ResetVisualToDefaults()
{
	StoredFOV = 90.0f;
	StoredCameraShake = 1.0f;
	bStoredHeadBobEnabled = true;
	StoredHeadBobIntensity = 1.0f;

	StoredMotionBlur = 0.5f;
	bStoredMotionBlurEnabled = true;
	StoredGamma = 2.2f;
	StoredBrightness = 1.0f;
	StoredContrast = 1.0f;
	StoredVignette = 0.4f;
	StoredChromaticAberration = 0.0f;
	StoredFilmGrain = 0.0f;
	bStoredDepthOfFieldEnabled = true;
	bStoredLensFlareEnabled = true;
	StoredBloomIntensity = 0.5f;

	bStoredSubtitlesEnabled = false;
	StoredSubtitleSize = EUPMSubtitleSize::Medium;
	bStoredSubtitleBackground = true;
	StoredColorblindMode = EUPMColorblindMode::None;
	StoredColorblindStrength = 1.0f;
	StoredHUDScale = 1.0f;
	bStoredHighContrastMode = false;
	bStoredReduceScreenShake = false;
}
