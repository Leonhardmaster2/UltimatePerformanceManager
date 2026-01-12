// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UPMTypes.generated.h"

/**
 * Subtitle size options for accessibility
 */
UENUM(BlueprintType)
enum class EUPMSubtitleSize : uint8
{
	Small,
	Medium,
	Large,
	ExtraLarge
};

/**
 * Colorblind mode options for accessibility
 */
UENUM(BlueprintType)
enum class EUPMColorblindMode : uint8
{
	None,
	Protanopia,    // Red-blind
	Deuteranopia,  // Green-blind
	Tritanopia     // Blue-blind
};

/**
 * Performance monitoring modes
 */
UENUM(BlueprintType)
enum class EUPMMonitoringMode : uint8
{
	Disabled,   // No monitoring overhead
	Basic,      // FPS and frame time only
	Detailed,   // All available metrics
	Benchmark   // Recording mode for benchmarks
};

/**
 * Quality preset struct containing all scalability settings
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMQualityPreset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality")
	FString PresetName = TEXT("Custom");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 OverallQuality = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 ViewDistance = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 AntiAliasing = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 Shadows = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 GlobalIllumination = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 Reflections = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 PostProcess = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 Textures = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 Effects = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 Foliage = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0", ClampMax = "4"))
	int32 Shading = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0.0", ClampMax = "100.0"))
	float ResolutionScale = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality")
	bool bVSync = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "0.0"))
	float FrameRateLimit = 0.0f; // 0 = unlimited
};

/**
 * Performance statistics struct
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMPerformanceStats
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float CurrentFPS = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float AverageFPS = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float MinFPS = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float MaxFPS = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float FrameTimeMs = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float GameThreadMs = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float RenderThreadMs = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float GPUTimeMs = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	int64 UsedPhysicalMemoryMB = 0;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	int64 AvailablePhysicalMemoryMB = 0;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float FPS_1Percentile = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Performance")
	float FPS_01Percentile = 0.0f;
};

/**
 * Benchmark results struct
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMBenchmarkResults
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Benchmark")
	float AverageFPS = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Benchmark")
	float MinFPS = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Benchmark")
	float MaxFPS = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Benchmark")
	float FPS_1Percentile = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Benchmark")
	float FPS_01Percentile = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Benchmark")
	float AverageFrameTimeMs = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Benchmark")
	float Duration = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Benchmark")
	int32 TotalFrames = 0;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|Benchmark")
	int32 RecommendedQualityLevel = 3;
};

// Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingsChanged, FUPMQualityPreset, NewSettings);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFPSUpdated, float, CurrentFPS);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBenchmarkComplete, FUPMBenchmarkResults, Results);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSettingsApplied);
