// Copyright UPM Team. All Rights Reserved.

#include "UPMExtendedSettings.h"
#include "UPMCore.h"
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
	MarkExtendedSettingsChanged();
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
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetMouseSensitivityX(float Sensitivity)
{
	StoredMouseSensitivityX = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetMouseSensitivityY(float Sensitivity)
{
	StoredMouseSensitivityY = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

// ==================== INPUT SENSITIVITY - CONTROLLER ====================

void UUPMExtendedSettings::SetControllerSensitivity(float Sensitivity)
{
	StoredControllerSensitivity = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	StoredControllerSensitivityX = StoredControllerSensitivity;
	StoredControllerSensitivityY = StoredControllerSensitivity;
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetControllerSensitivityX(float Sensitivity)
{
	StoredControllerSensitivityX = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetControllerSensitivityY(float Sensitivity)
{
	StoredControllerSensitivityY = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetAimSensitivityMultiplier(float Multiplier)
{
	StoredAimSensitivityMultiplier = FMath::Clamp(Multiplier, 0.1f, 2.0f);
	MarkExtendedSettingsChanged();
}

// ==================== AXIS INVERSION ====================

void UUPMExtendedSettings::SetInvertMouseY(bool bInvert)
{
	bStoredInvertMouseY = bInvert;
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetInvertMouseX(bool bInvert)
{
	bStoredInvertMouseX = bInvert;
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetInvertControllerY(bool bInvert)
{
	bStoredInvertControllerY = bInvert;
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetInvertControllerX(bool bInvert)
{
	bStoredInvertControllerX = bInvert;
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

// ==================== CONTROLLER SETTINGS ====================

void UUPMExtendedSettings::SetControllerDeadzoneInner(float Deadzone)
{
	StoredDeadzoneInner = FMath::Clamp(Deadzone, 0.0f, 0.5f);
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetControllerDeadzoneOuter(float Deadzone)
{
	StoredDeadzoneOuter = FMath::Clamp(Deadzone, 0.5f, 1.0f);
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetVibrationEnabled(bool bEnabled)
{
	bStoredVibrationEnabled = bEnabled;
	ApplyInputSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetVibrationIntensity(float Intensity)
{
	StoredVibrationIntensity = FMath::Clamp(Intensity, 0.0f, 1.0f);
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetAimAssistEnabled(bool bEnabled)
{
	bStoredAimAssistEnabled = bEnabled;
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetAimAssistStrength(float Strength)
{
	StoredAimAssistStrength = FMath::Clamp(Strength, 0.0f, 1.0f);
	MarkExtendedSettingsChanged();
}

// ==================== MOUSE SETTINGS ====================

void UUPMExtendedSettings::SetMouseSmoothingEnabled(bool bEnabled)
{
	bStoredMouseSmoothing = bEnabled;
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetMouseAccelerationEnabled(bool bEnabled)
{
	bStoredMouseAcceleration = bEnabled;
	MarkExtendedSettingsChanged();
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
		// UE 5.6+: CameraShakeScale was removed from APlayerCameraManager
		// Camera shake intensity should now be controlled per-shake when calling ClientStartCameraShake
		// or through custom CameraModifier classes. The stored value can be retrieved via GetCameraShakeScale()
		// and applied when playing camera shakes in game code.
	}

	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetHeadBobEnabled(bool bEnabled)
{
	bStoredHeadBobEnabled = bEnabled;
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetHeadBobIntensity(float Intensity)
{
	StoredHeadBobIntensity = FMath::Clamp(Intensity, 0.0f, 2.0f);
	MarkExtendedSettingsChanged();
}

// ==================== POST PROCESS EFFECTS ====================

void UUPMExtendedSettings::SetMotionBlurEnabled(bool bEnabled)
{
	bStoredMotionBlurEnabled = bEnabled;
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetMotionBlurIntensity(float Intensity)
{
	StoredMotionBlur = FMath::Clamp(Intensity, 0.0f, 1.0f);
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetGamma(float NewGamma)
{
	StoredGamma = FMath::Clamp(NewGamma, 1.0f, 3.0f);
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetBrightness(float NewBrightness)
{
	StoredBrightness = FMath::Clamp(NewBrightness, 0.5f, 1.5f);
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetContrast(float NewContrast)
{
	StoredContrast = FMath::Clamp(NewContrast, 0.5f, 1.5f);
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetVignetteIntensity(float Intensity)
{
	StoredVignette = FMath::Clamp(Intensity, 0.0f, 1.0f);
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetChromaticAberrationIntensity(float Intensity)
{
	StoredChromaticAberration = FMath::Clamp(Intensity, 0.0f, 5.0f);
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetFilmGrainIntensity(float Intensity)
{
	StoredFilmGrain = FMath::Clamp(Intensity, 0.0f, 1.0f);
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetDepthOfFieldEnabled(bool bEnabled)
{
	bStoredDepthOfFieldEnabled = bEnabled;
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetLensFlareEnabled(bool bEnabled)
{
	bStoredLensFlareEnabled = bEnabled;
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetBloomIntensity(float Intensity)
{
	StoredBloomIntensity = FMath::Clamp(Intensity, 0.0f, 2.0f);
	ApplyPostProcessSettings();
	MarkExtendedSettingsChanged();
}

// ==================== AUDIO ====================

void UUPMExtendedSettings::SetMasterVolume(float Volume)
{
	StoredMasterVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetMusicVolume(float Volume)
{
	StoredMusicVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetSFXVolume(float Volume)
{
	StoredSFXVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetVoiceVolume(float Volume)
{
	StoredVoiceVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetAmbientVolume(float Volume)
{
	StoredAmbientVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetUIVolume(float Volume)
{
	StoredUIVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
	ApplyAudioSettings();
	MarkExtendedSettingsChanged();
}

// ==================== ACCESSIBILITY ====================

void UUPMExtendedSettings::SetSubtitlesEnabled(bool bEnabled)
{
	bStoredSubtitlesEnabled = bEnabled;
	ApplyAccessibilitySettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetSubtitleSize(EUPMSubtitleSize Size)
{
	StoredSubtitleSize = Size;
	ApplyAccessibilitySettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetSubtitleBackground(bool bEnabled)
{
	bStoredSubtitleBackground = bEnabled;
	ApplyAccessibilitySettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetColorblindMode(EUPMColorblindMode Mode)
{
	StoredColorblindMode = Mode;
	ApplyAccessibilitySettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetColorblindStrength(float Strength)
{
	StoredColorblindStrength = FMath::Clamp(Strength, 0.0f, 1.0f);
	ApplyAccessibilitySettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetHUDScale(float Scale)
{
	StoredHUDScale = FMath::Clamp(Scale, 0.5f, 2.0f);
	ApplyAccessibilitySettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetHighContrastMode(bool bEnabled)
{
	bStoredHighContrastMode = bEnabled;
	ApplyAccessibilitySettings();
	MarkExtendedSettingsChanged();
}

void UUPMExtendedSettings::SetReduceScreenShake(bool bEnabled)
{
	bStoredReduceScreenShake = bEnabled;
	SetCameraShakeScale(StoredCameraShake); // Re-apply with new setting
	MarkExtendedSettingsChanged();
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

void UUPMExtendedSettings::MarkExtendedSettingsChanged()
{
	bHasUnsavedChanges = true;

	// Also notify the global UPMCore if available
	if (UWorld* World = GetWorld())
	{
		if (UUPMCore* Core = UUPMCore::Get(World))
		{
			Core->MarkSettingsChanged();
		}
	}
}
