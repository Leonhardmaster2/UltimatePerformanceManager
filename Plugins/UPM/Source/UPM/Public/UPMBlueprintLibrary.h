// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UPMTypes.h"
#include "UPMBlueprintLibrary.generated.h"

/**
 * UPMBlueprintLibrary - Static Blueprint-callable functions for all UPM functionality
 *
 * Provides convenient access to UPM features without needing to manually
 * get subsystem references in Blueprints.
 */
UCLASS()
class UPM_API UUPMBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// ==================== GRAPHICS - OVERALL ====================

	/** Sets the overall scalability level (0=Low, 1=Medium, 2=High, 3=Ultra, 4=Cinematic) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void SetOverallQuality(const UObject* WorldContextObject, int32 Quality);

	/** Gets the current overall quality level */
	UFUNCTION(BlueprintPure, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static int32 GetOverallQuality(const UObject* WorldContextObject);

	// ==================== GRAPHICS - INDIVIDUAL ====================

	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void SetTextureQuality(const UObject* WorldContextObject, int32 Quality);

	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void SetShadowQuality(const UObject* WorldContextObject, int32 Quality);

	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void SetViewDistanceQuality(const UObject* WorldContextObject, int32 Quality);

	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void SetAntiAliasingQuality(const UObject* WorldContextObject, int32 Quality);

	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void SetPostProcessQuality(const UObject* WorldContextObject, int32 Quality);

	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void SetEffectsQuality(const UObject* WorldContextObject, int32 Quality);

	// ==================== DISPLAY ====================

	/** Sets the screen resolution */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display", meta = (WorldContext = "WorldContextObject"))
	static void SetResolution(const UObject* WorldContextObject, int32 Width, int32 Height);

	/** Gets the current resolution */
	UFUNCTION(BlueprintPure, Category = "UPM|Display", meta = (WorldContext = "WorldContextObject"))
	static FIntPoint GetCurrentResolution(const UObject* WorldContextObject);

	/** Gets all supported fullscreen resolutions */
	UFUNCTION(BlueprintPure, Category = "UPM|Display", meta = (WorldContext = "WorldContextObject"))
	static TArray<FIntPoint> GetSupportedResolutions(const UObject* WorldContextObject);

	/** Sets the fullscreen mode */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display", meta = (WorldContext = "WorldContextObject"))
	static void SetFullscreenMode(const UObject* WorldContextObject, EWindowMode::Type Mode);

	/** Sets VSync enabled/disabled */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display", meta = (WorldContext = "WorldContextObject"))
	static void SetVSync(const UObject* WorldContextObject, bool bEnabled);

	/** Sets the frame rate limit (0 = unlimited) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display", meta = (WorldContext = "WorldContextObject"))
	static void SetFrameRateLimit(const UObject* WorldContextObject, float Limit);

	/** Sets the resolution scale percentage */
	UFUNCTION(BlueprintCallable, Category = "UPM|Display", meta = (WorldContext = "WorldContextObject"))
	static void SetResolutionScale(const UObject* WorldContextObject, float Percentage);

	// ==================== SETTINGS MANAGEMENT ====================

	/** Apply all pending graphics settings changes */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void ApplyGraphicsSettings(const UObject* WorldContextObject);

	/** Save all settings to disk */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void SaveGraphicsSettings(const UObject* WorldContextObject);

	/** Load all settings from disk */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void LoadGraphicsSettings(const UObject* WorldContextObject);

	/** Reset all settings to defaults */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void ResetToDefaults(const UObject* WorldContextObject);

	/** Get the current settings as a preset struct */
	UFUNCTION(BlueprintPure, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static FUPMQualityPreset GetCurrentQualitySettings(const UObject* WorldContextObject);

	// ==================== PERFORMANCE MONITORING ====================

	/** Get current FPS */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance", meta = (WorldContext = "WorldContextObject"))
	static float GetCurrentFPS(const UObject* WorldContextObject);

	/** Get average FPS */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance", meta = (WorldContext = "WorldContextObject"))
	static float GetAverageFPS(const UObject* WorldContextObject);

	/** Get current frame time in milliseconds */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance", meta = (WorldContext = "WorldContextObject"))
	static float GetFrameTimeMs(const UObject* WorldContextObject);

	/** Get all current performance stats */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance", meta = (WorldContext = "WorldContextObject"))
	static FUPMPerformanceStats GetPerformanceStats(const UObject* WorldContextObject);

	/** Enable or disable performance monitoring */
	UFUNCTION(BlueprintCallable, Category = "UPM|Performance", meta = (WorldContext = "WorldContextObject"))
	static void EnablePerformanceMonitoring(const UObject* WorldContextObject, bool bEnable);

	/** Set the performance monitoring mode */
	UFUNCTION(BlueprintCallable, Category = "UPM|Performance", meta = (WorldContext = "WorldContextObject"))
	static void SetMonitoringMode(const UObject* WorldContextObject, EUPMMonitoringMode Mode);

	// ==================== BENCHMARK ====================

	/** Start a benchmark recording */
	UFUNCTION(BlueprintCallable, Category = "UPM|Benchmark", meta = (WorldContext = "WorldContextObject"))
	static void StartBenchmark(const UObject* WorldContextObject, float Duration = 10.0f);

	/** Get benchmark results */
	UFUNCTION(BlueprintPure, Category = "UPM|Benchmark", meta = (WorldContext = "WorldContextObject"))
	static FUPMBenchmarkResults GetBenchmarkResults(const UObject* WorldContextObject);

	// ==================== AUTO-DETECTION ====================

	/** Auto-detect optimal quality settings based on hardware */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static void AutoDetectQualitySettings(const UObject* WorldContextObject);

	/** Run a hardware benchmark and get recommended settings */
	UFUNCTION(BlueprintCallable, Category = "UPM|Graphics", meta = (WorldContext = "WorldContextObject"))
	static FUPMQualityPreset GetRecommendedSettings(const UObject* WorldContextObject);
};
