// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "UPMTypes.h"
#include "UPMExtendedSettings.generated.h"

class UPostProcessComponent;
class APlayerCameraManager;

/**
 * UPMExtendedSettings - Handles settings not available through UGameUserSettings
 *
 * This LocalPlayerSubsystem manages per-player settings like FOV, input sensitivity,
 * audio volumes, and post-process effects. It automatically re-applies settings
 * on level load and pawn possession.
 */
UCLASS()
class UPM_API UUPMExtendedSettings : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// ==================== FIELD OF VIEW ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Camera")
	void SetFieldOfView(float NewFOV);

	UFUNCTION(BlueprintPure, Category = "UPM|Camera")
	float GetFieldOfView() const { return StoredFOV; }

	// ==================== INPUT SENSITIVITY - MOUSE ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetMouseSensitivity(float Sensitivity);

	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	float GetMouseSensitivity() const { return StoredMouseSensitivity; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetMouseSensitivityX(float Sensitivity);

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetMouseSensitivityY(float Sensitivity);

	// ==================== INPUT SENSITIVITY - CONTROLLER ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetControllerSensitivity(float Sensitivity);

	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	float GetControllerSensitivity() const { return StoredControllerSensitivity; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetControllerSensitivityX(float Sensitivity);

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetControllerSensitivityY(float Sensitivity);

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetAimSensitivityMultiplier(float Multiplier);

	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	float GetAimSensitivityMultiplier() const { return StoredAimSensitivityMultiplier; }

	// ==================== AXIS INVERSION ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetInvertMouseY(bool bInvert);

	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	bool GetInvertMouseY() const { return bStoredInvertMouseY; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetInvertMouseX(bool bInvert);

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetInvertControllerY(bool bInvert);

	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	bool GetInvertControllerY() const { return bStoredInvertControllerY; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetInvertControllerX(bool bInvert);

	// ==================== CONTROLLER SETTINGS ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
	void SetControllerDeadzoneInner(float Deadzone);

	UFUNCTION(BlueprintPure, Category = "UPM|Controller")
	float GetControllerDeadzoneInner() const { return StoredDeadzoneInner; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
	void SetControllerDeadzoneOuter(float Deadzone);

	UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
	void SetVibrationEnabled(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "UPM|Controller")
	bool GetVibrationEnabled() const { return bStoredVibrationEnabled; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
	void SetVibrationIntensity(float Intensity);

	UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
	void SetAimAssistEnabled(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "UPM|Controller")
	bool GetAimAssistEnabled() const { return bStoredAimAssistEnabled; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
	void SetAimAssistStrength(float Strength);

	// ==================== MOUSE SETTINGS ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetMouseSmoothingEnabled(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	bool GetMouseSmoothingEnabled() const { return bStoredMouseSmoothing; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetMouseAccelerationEnabled(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	bool GetMouseAccelerationEnabled() const { return bStoredMouseAcceleration; }

	// ==================== CAMERA EFFECTS ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Camera")
	void SetCameraShakeScale(float Scale);

	UFUNCTION(BlueprintPure, Category = "UPM|Camera")
	float GetCameraShakeScale() const { return StoredCameraShake; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Camera")
	void SetHeadBobEnabled(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "UPM|Camera")
	bool GetHeadBobEnabled() const { return bStoredHeadBobEnabled; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Camera")
	void SetHeadBobIntensity(float Intensity);

	// ==================== POST PROCESS EFFECTS ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetMotionBlurEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetMotionBlurIntensity(float Intensity);

	UFUNCTION(BlueprintPure, Category = "UPM|PostProcess")
	float GetMotionBlurIntensity() const { return StoredMotionBlur; }

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetGamma(float NewGamma);

	UFUNCTION(BlueprintPure, Category = "UPM|PostProcess")
	float GetGamma() const { return StoredGamma; }

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetBrightness(float NewBrightness);

	UFUNCTION(BlueprintPure, Category = "UPM|PostProcess")
	float GetBrightness() const { return StoredBrightness; }

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetContrast(float NewContrast);

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetVignetteIntensity(float Intensity);

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetChromaticAberrationIntensity(float Intensity);

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetFilmGrainIntensity(float Intensity);

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetDepthOfFieldEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetLensFlareEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
	void SetBloomIntensity(float Intensity);

	// ==================== AUDIO ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
	void SetMasterVolume(float Volume);

	UFUNCTION(BlueprintPure, Category = "UPM|Audio")
	float GetMasterVolume() const { return StoredMasterVolume; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
	void SetMusicVolume(float Volume);

	UFUNCTION(BlueprintPure, Category = "UPM|Audio")
	float GetMusicVolume() const { return StoredMusicVolume; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
	void SetSFXVolume(float Volume);

	UFUNCTION(BlueprintPure, Category = "UPM|Audio")
	float GetSFXVolume() const { return StoredSFXVolume; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
	void SetVoiceVolume(float Volume);

	UFUNCTION(BlueprintPure, Category = "UPM|Audio")
	float GetVoiceVolume() const { return StoredVoiceVolume; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
	void SetAmbientVolume(float Volume);

	UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
	void SetUIVolume(float Volume);

	// ==================== ACCESSIBILITY ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
	void SetSubtitlesEnabled(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "UPM|Accessibility")
	bool GetSubtitlesEnabled() const { return bStoredSubtitlesEnabled; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
	void SetSubtitleSize(EUPMSubtitleSize Size);

	UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
	void SetSubtitleBackground(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
	void SetColorblindMode(EUPMColorblindMode Mode);

	UFUNCTION(BlueprintPure, Category = "UPM|Accessibility")
	EUPMColorblindMode GetColorblindMode() const { return StoredColorblindMode; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
	void SetColorblindStrength(float Strength);

	UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
	void SetHUDScale(float Scale);

	UFUNCTION(BlueprintPure, Category = "UPM|Accessibility")
	float GetHUDScale() const { return StoredHUDScale; }

	UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
	void SetHighContrastMode(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
	void SetReduceScreenShake(bool bEnabled);

	// ==================== UTILITY ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
	void ApplyAllExtendedSettings();

	UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
	void ResetExtendedToDefaults();

	UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
	void ResetInputToDefaults();

	UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
	void ResetAudioToDefaults();

	UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
	void ResetVisualToDefaults();

protected:
	// Event handlers
	UFUNCTION()
	void OnPawnChanged(APawn* OldPawn, APawn* NewPawn);

	// Apply functions
	void ApplyFOVToCamera();
	void ApplyInputSettings();
	void ApplyPostProcessSettings();
	void ApplyAudioSettings();
	void ApplyAccessibilitySettings();

	// Helper to get or create runtime post-process component
	UPostProcessComponent* GetRuntimePostProcess();

	// Cached references
	UPROPERTY()
	TObjectPtr<APlayerCameraManager> CachedCameraManager;

	UPROPERTY()
	TObjectPtr<UPostProcessComponent> RuntimePostProcess;

	// ===== STORED VALUES =====

	// Camera
	float StoredFOV = 90.0f;
	float StoredCameraShake = 1.0f;
	bool bStoredHeadBobEnabled = true;
	float StoredHeadBobIntensity = 1.0f;

	// Input - Mouse
	float StoredMouseSensitivity = 1.0f;
	float StoredMouseSensitivityX = 1.0f;
	float StoredMouseSensitivityY = 1.0f;
	bool bStoredInvertMouseY = false;
	bool bStoredInvertMouseX = false;
	bool bStoredMouseSmoothing = false;
	bool bStoredMouseAcceleration = false;

	// Input - Controller
	float StoredControllerSensitivity = 1.0f;
	float StoredControllerSensitivityX = 1.0f;
	float StoredControllerSensitivityY = 1.0f;
	bool bStoredInvertControllerY = false;
	bool bStoredInvertControllerX = false;
	float StoredDeadzoneInner = 0.2f;
	float StoredDeadzoneOuter = 0.9f;
	bool bStoredVibrationEnabled = true;
	float StoredVibrationIntensity = 1.0f;
	bool bStoredAimAssistEnabled = true;
	float StoredAimAssistStrength = 0.5f;
	float StoredAimSensitivityMultiplier = 0.7f;

	// Post Process
	float StoredMotionBlur = 0.5f;
	bool bStoredMotionBlurEnabled = true;
	float StoredGamma = 2.2f;
	float StoredBrightness = 1.0f;
	float StoredContrast = 1.0f;
	float StoredVignette = 0.4f;
	float StoredChromaticAberration = 0.0f;
	float StoredFilmGrain = 0.0f;
	bool bStoredDepthOfFieldEnabled = true;
	bool bStoredLensFlareEnabled = true;
	float StoredBloomIntensity = 0.5f;

	// Audio
	float StoredMasterVolume = 1.0f;
	float StoredMusicVolume = 1.0f;
	float StoredSFXVolume = 1.0f;
	float StoredVoiceVolume = 1.0f;
	float StoredAmbientVolume = 1.0f;
	float StoredUIVolume = 1.0f;

	// Accessibility
	bool bStoredSubtitlesEnabled = false;
	EUPMSubtitleSize StoredSubtitleSize = EUPMSubtitleSize::Medium;
	bool bStoredSubtitleBackground = true;
	EUPMColorblindMode StoredColorblindMode = EUPMColorblindMode::None;
	float StoredColorblindStrength = 1.0f;
	float StoredHUDScale = 1.0f;
	bool bStoredHighContrastMode = false;
	bool bStoredReduceScreenShake = false;
};
