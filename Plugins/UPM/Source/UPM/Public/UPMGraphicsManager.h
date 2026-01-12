// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UPMTypes.h"
#include "UPMGraphicsManager.generated.h"

/**
 * UPMGraphicsManager - Handles all graphics and scalability settings
 *
 * This class provides shipping-safe APIs for managing graphics quality settings
 * using UGameUserSettings. All settings work in packaged builds.
 */
UCLASS(BlueprintType)
class UPM_API UUPMGraphicsManager : public UObject
{
	GENERATED_BODY()

public:
	/** Initialize the graphics manager */
	void Initialize();

	// ==================== OVERALL QUALITY ====================

	/** Sets the overall scalability level (0-4: Low to Cinematic) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetOverallQuality(int32 Quality);

	/** Gets the current overall quality level */
	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetOverallQuality() const;

	// ==================== INDIVIDUAL QUALITY SETTINGS ====================

	/** Sets view distance quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetViewDistanceQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetViewDistanceQuality() const;

	/** Sets anti-aliasing quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetAntiAliasingQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetAntiAliasingQuality() const;

	/** Sets shadow quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetShadowQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetShadowQuality() const;

	/** Sets global illumination quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetGlobalIlluminationQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetGlobalIlluminationQuality() const;

	/** Sets reflection quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetReflectionQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetReflectionQuality() const;

	/** Sets post-processing quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetPostProcessQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetPostProcessQuality() const;

	/** Sets texture quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetTextureQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetTextureQuality() const;

	/** Sets visual effects quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetEffectsQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetEffectsQuality() const;

	/** Sets foliage quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetFoliageQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetFoliageQuality() const;

	/** Sets shading quality (0-4) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SetShadingQuality(int32 Quality);

	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	int32 GetShadingQuality() const;

	// ==================== DISPLAY SETTINGS ====================

	/** Sets the screen resolution */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display")
	void SetScreenResolution(FIntPoint Resolution);

	UFUNCTION(BlueprintPure, Category = "UPM|Display")
	FIntPoint GetScreenResolution() const;

	/** Gets all supported fullscreen resolutions */
	UFUNCTION(BlueprintPure, Category = "UPM|Display")
	TArray<FIntPoint> GetSupportedResolutions() const;

	/** Sets the fullscreen mode */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display")
	void SetFullscreenMode(EWindowMode::Type Mode);

	UFUNCTION(BlueprintPure, Category = "UPM|Display")
	EWindowMode::Type GetFullscreenMode() const;

	/** Sets VSync enabled/disabled */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display")
	void SetVSyncEnabled(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "UPM|Display")
	bool GetVSyncEnabled() const;

	/** Sets the frame rate limit (0 = unlimited) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display")
	void SetFrameRateLimit(float Limit);

	UFUNCTION(BlueprintPure, Category = "UPM|Display")
	float GetFrameRateLimit() const;

	/** Sets the resolution scale (0-100%) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display")
	void SetResolutionScale(float Percentage);

	UFUNCTION(BlueprintPure, Category = "UPM|Display")
	float GetResolutionScale() const;

	// ==================== PRESET MANAGEMENT ====================

	/** Gets a preset by quality level (0=Low, 1=Medium, 2=High, 3=Ultra, 4=Cinematic) */
	UFUNCTION(BlueprintPure, Category = "UPM|Presets")
	FUPMQualityPreset GetPresetByLevel(int32 Level) const;

	/** Applies a quality preset */
	UFUNCTION(BlueprintCallable, Category = "UPM|Presets")
	void ApplyPreset(const FUPMQualityPreset& Preset);

	/** Gets the current settings as a preset */
	UFUNCTION(BlueprintPure, Category = "UPM|Presets")
	FUPMQualityPreset GetCurrentSettingsAsPreset() const;

	// ==================== UTILITY ====================

	/** Apply all pending settings changes */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void ApplySettings();

	/** Save settings to disk */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void SaveSettings();

	/** Reset to engine defaults */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void ResetToDefaults();

	/** Auto-detect optimal quality based on hardware */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics")
	void AutoDetectQuality();

	/** Check if settings have been modified but not applied */
	UFUNCTION(BlueprintPure, Category = "UPM|Graphics")
	bool HasPendingChanges() const { return bHasPendingChanges; }

protected:
	/** Helper to get game user settings */
	UGameUserSettings* GetGameUserSettings() const;

	/** Mark that we have pending changes */
	void MarkPendingChanges() { bHasPendingChanges = true; }

private:
	/** Whether we have changes that need to be applied */
	bool bHasPendingChanges = false;

	/** Clamp quality value to valid range */
	static int32 ClampQuality(int32 Quality) { return FMath::Clamp(Quality, 0, 4); }
};
