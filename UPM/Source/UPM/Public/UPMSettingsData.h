// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "UPMTypes.h"
#include "UPMSettingsData.generated.h"

/**
 * UPMSettingsData - Save game class for all UPM settings
 *
 * Stores all user settings including graphics, extended settings,
 * and performance monitor preferences for persistence.
 */
UCLASS()
class UPM_API UUPMSettingsData : public USaveGame
{
	GENERATED_BODY()

public:
	UUPMSettingsData();

	// ==================== VERSION ====================

	/** Save version for migration support */
	UPROPERTY()
	int32 SaveVersion = 1;

	// ==================== GRAPHICS (Scalability) ====================

	UPROPERTY()
	FUPMQualityPreset CurrentQualitySettings;

	// ==================== DISPLAY ====================

	UPROPERTY()
	FIntPoint Resolution = FIntPoint(1920, 1080);

	UPROPERTY()
	TEnumAsByte<EWindowMode::Type> WindowMode = EWindowMode::Fullscreen;

	UPROPERTY()
	float ResolutionScale = 100.0f;

	// ==================== CAMERA ====================

	UPROPERTY()
	float FieldOfView = 90.0f;

	UPROPERTY()
	float CameraShakeScale = 1.0f;

	UPROPERTY()
	bool bHeadBobEnabled = true;

	UPROPERTY()
	float HeadBobIntensity = 1.0f;

	// ==================== INPUT - MOUSE ====================

	UPROPERTY()
	float MouseSensitivity = 1.0f;

	UPROPERTY()
	float MouseSensitivityX = 1.0f;

	UPROPERTY()
	float MouseSensitivityY = 1.0f;

	UPROPERTY()
	bool bInvertMouseY = false;

	UPROPERTY()
	bool bInvertMouseX = false;

	UPROPERTY()
	bool bMouseSmoothing = false;

	UPROPERTY()
	bool bMouseAcceleration = false;

	// ==================== INPUT - CONTROLLER ====================

	UPROPERTY()
	float ControllerSensitivity = 1.0f;

	UPROPERTY()
	float ControllerSensitivityX = 1.0f;

	UPROPERTY()
	float ControllerSensitivityY = 1.0f;

	UPROPERTY()
	bool bInvertControllerY = false;

	UPROPERTY()
	bool bInvertControllerX = false;

	UPROPERTY()
	float DeadzoneInner = 0.2f;

	UPROPERTY()
	float DeadzoneOuter = 0.9f;

	UPROPERTY()
	float AimSensitivityMultiplier = 0.7f;

	// ==================== CONTROLLER FEATURES ====================

	UPROPERTY()
	bool bVibrationEnabled = true;

	UPROPERTY()
	float VibrationIntensity = 1.0f;

	UPROPERTY()
	bool bAimAssistEnabled = true;

	UPROPERTY()
	float AimAssistStrength = 0.5f;

	// ==================== POST PROCESS ====================

	UPROPERTY()
	bool bMotionBlurEnabled = true;

	UPROPERTY()
	float MotionBlurIntensity = 0.5f;

	UPROPERTY()
	float Gamma = 2.2f;

	UPROPERTY()
	float Brightness = 1.0f;

	UPROPERTY()
	float Contrast = 1.0f;

	UPROPERTY()
	float VignetteIntensity = 0.4f;

	UPROPERTY()
	float ChromaticAberration = 0.0f;

	UPROPERTY()
	float FilmGrain = 0.0f;

	UPROPERTY()
	bool bDepthOfFieldEnabled = true;

	UPROPERTY()
	bool bLensFlareEnabled = true;

	UPROPERTY()
	float BloomIntensity = 0.5f;

	// ==================== AUDIO ====================

	UPROPERTY()
	float MasterVolume = 1.0f;

	UPROPERTY()
	float MusicVolume = 1.0f;

	UPROPERTY()
	float SFXVolume = 1.0f;

	UPROPERTY()
	float VoiceVolume = 1.0f;

	UPROPERTY()
	float AmbientVolume = 1.0f;

	UPROPERTY()
	float UIVolume = 1.0f;

	// ==================== ACCESSIBILITY ====================

	UPROPERTY()
	bool bSubtitlesEnabled = false;

	UPROPERTY()
	EUPMSubtitleSize SubtitleSize = EUPMSubtitleSize::Medium;

	UPROPERTY()
	bool bSubtitleBackground = true;

	UPROPERTY()
	EUPMColorblindMode ColorblindMode = EUPMColorblindMode::None;

	UPROPERTY()
	float ColorblindStrength = 1.0f;

	UPROPERTY()
	float HUDScale = 1.0f;

	UPROPERTY()
	bool bHighContrastMode = false;

	UPROPERTY()
	bool bReduceScreenShake = false;

	// ==================== PERFORMANCE MONITOR ====================

	UPROPERTY()
	bool bShowFPSCounter = false;

	UPROPERTY()
	EUPMMonitoringMode MonitoringMode = EUPMMonitoringMode::Disabled;

	// ==================== MISC ====================

	UPROPERTY()
	int32 PreferredMonitor = 0;
};
