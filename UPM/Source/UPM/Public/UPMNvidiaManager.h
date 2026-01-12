// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UPMTypes.h"
#include "UPMNvidiaManager.generated.h"

/**
 * UPMNvidiaManager - Handles NVIDIA-specific features
 *
 * Manages:
 * - DLSS (Deep Learning Super Sampling)
 * - DLSS-G (Frame Generation)
 * - NVIDIA Reflex (Low Latency)
 * - Hardware capability detection
 *
 * This manager provides a unified interface for NVIDIA technologies,
 * automatically detecting if the required plugins are available and
 * hardware supports the features.
 */
UCLASS(BlueprintType)
class UPM_API UUPMNvidiaManager : public UObject
{
	GENERATED_BODY()

public:
	/** Initialize the NVIDIA manager */
	void Initialize();

	// ==================== CAPABILITY DETECTION ====================

	/** Get NVIDIA hardware capabilities */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA")
	FUPMNvidiaCapabilities GetNvidiaCapabilities() const { return Capabilities; }

	/** Check if this is an NVIDIA GPU */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA")
	bool IsNvidiaGPU() const { return Capabilities.bIsNvidiaGPU; }

	/** Check if DLSS is supported on this hardware */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA")
	bool IsDLSSSupported() const { return Capabilities.bDLSSSupported; }

	/** Check if DLSS Frame Generation is supported */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA")
	bool IsFrameGenerationSupported() const { return Capabilities.bDLSSGSupported; }

	/** Check if NVIDIA Reflex is supported */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA")
	bool IsReflexSupported() const { return Capabilities.bReflexSupported; }

	/** Check if the DLSS plugin is loaded */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA")
	bool IsDLSSPluginLoaded() const { return bDLSSPluginLoaded; }

	/** Check if the Streamline plugin is loaded (for DLSS-G) */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA")
	bool IsStreamlinePluginLoaded() const { return bStreamlinePluginLoaded; }

	// ==================== DLSS ====================

	/** Set DLSS mode */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA|DLSS")
	void SetDLSSMode(EUPMDLSSMode Mode);

	/** Get current DLSS mode */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|DLSS")
	EUPMDLSSMode GetDLSSMode() const { return CurrentDLSSMode; }

	/** Check if DLSS is currently enabled */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|DLSS")
	bool IsDLSSEnabled() const { return CurrentDLSSMode != EUPMDLSSMode::Off; }

	/** Set DLSS sharpness (0.0 - 1.0) */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA|DLSS")
	void SetDLSSSharpness(float Sharpness);

	/** Get current DLSS sharpness */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|DLSS")
	float GetDLSSSharpness() const { return DLSSSharpness; }

	/** Get the optimal resolution scale for current DLSS mode */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|DLSS")
	float GetOptimalResolutionScale() const;

	/** Get recommended DLSS mode based on target framerate */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|DLSS")
	EUPMDLSSMode GetRecommendedDLSSMode(float TargetFPS = 60.0f) const;

	/** Get available DLSS modes for current hardware */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA|DLSS")
	TArray<EUPMDLSSMode> GetAvailableDLSSModes() const;

	// ==================== FRAME GENERATION ====================

	/** Set Frame Generation mode */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA|FrameGen")
	void SetFrameGenerationMode(EUPMFrameGenMode Mode);

	/** Get current Frame Generation mode */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|FrameGen")
	EUPMFrameGenMode GetFrameGenerationMode() const { return CurrentFrameGenMode; }

	/** Check if Frame Generation is currently enabled */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|FrameGen")
	bool IsFrameGenerationEnabled() const;

	/** Get the frame generation multiplier (typically 2x when enabled) */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|FrameGen")
	float GetFrameGenerationMultiplier() const;

	// ==================== NVIDIA REFLEX ====================

	/** Set Reflex (Low Latency) mode */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA|Reflex")
	void SetReflexMode(EUPMReflexMode Mode);

	/** Get current Reflex mode */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|Reflex")
	EUPMReflexMode GetReflexMode() const { return CurrentReflexMode; }

	/** Check if Reflex is currently enabled */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|Reflex")
	bool IsReflexEnabled() const { return CurrentReflexMode != EUPMReflexMode::Off; }

	/** Get current render latency in milliseconds */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|Reflex")
	float GetRenderLatencyMs() const;

	/** Get current game latency in milliseconds */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|Reflex")
	float GetGameLatencyMs() const;

	/** Get total system latency in milliseconds */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|Reflex")
	float GetTotalLatencyMs() const;

	// ==================== UNIFIED SUPER RESOLUTION ====================

	/** Set super resolution mode (unified interface for DLSS/FSR/XeSS) */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA|SuperRes")
	void SetSuperResolutionMode(EUPMSuperResolutionMode Mode);

	/** Get current super resolution mode */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|SuperRes")
	EUPMSuperResolutionMode GetSuperResolutionMode() const { return CurrentSuperResMode; }

	/** Get available super resolution modes */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA|SuperRes")
	TArray<EUPMSuperResolutionMode> GetAvailableSuperResolutionModes() const;

	// ==================== ANTI-ALIASING ====================

	/** Set anti-aliasing method */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA|AA")
	void SetAntiAliasingMethod(EUPMAntiAliasingMethod Method);

	/** Get current anti-aliasing method */
	UFUNCTION(BlueprintPure, Category = "UPM|NVIDIA|AA")
	EUPMAntiAliasingMethod GetAntiAliasingMethod() const { return CurrentAAMethod; }

	/** Get available anti-aliasing methods */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA|AA")
	TArray<EUPMAntiAliasingMethod> GetAvailableAAMethods() const;

	// ==================== UTILITY ====================

	/** Apply all current NVIDIA settings */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA")
	void ApplySettings();

	/** Reset all NVIDIA settings to defaults */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA")
	void ResetToDefaults();

	/** Refresh hardware capabilities (call if GPU changes detected) */
	UFUNCTION(BlueprintCallable, Category = "UPM|NVIDIA")
	void RefreshCapabilities();

protected:
	/** Detect NVIDIA hardware capabilities */
	void DetectCapabilities();

	/** Check if DLSS plugin is available */
	void CheckDLSSPlugin();

	/** Check if Streamline plugin is available */
	void CheckStreamlinePlugin();

	/** Apply DLSS settings via console commands */
	void ApplyDLSSSettings();

	/** Apply Frame Generation settings */
	void ApplyFrameGenSettings();

	/** Apply Reflex settings */
	void ApplyReflexSettings();

	/** Convert DLSS mode to resolution scale */
	float DLSSModeToResolutionScale(EUPMDLSSMode Mode) const;

	// Cached capabilities
	FUPMNvidiaCapabilities Capabilities;

	// Plugin state
	bool bDLSSPluginLoaded = false;
	bool bStreamlinePluginLoaded = false;
	bool bNISPluginLoaded = false;

	// Current settings
	EUPMDLSSMode CurrentDLSSMode = EUPMDLSSMode::Off;
	EUPMFrameGenMode CurrentFrameGenMode = EUPMFrameGenMode::Off;
	EUPMReflexMode CurrentReflexMode = EUPMReflexMode::Off;
	EUPMSuperResolutionMode CurrentSuperResMode = EUPMSuperResolutionMode::Off;
	EUPMAntiAliasingMethod CurrentAAMethod = EUPMAntiAliasingMethod::TAA;
	float DLSSSharpness = 0.5f;
};
