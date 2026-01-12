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
 * DLSS mode options
 */
UENUM(BlueprintType)
enum class EUPMDLSSMode : uint8
{
	Off,
	DLAA,           // Deep Learning Anti-Aliasing (native resolution)
	UltraQuality,   // Highest quality upscaling
	Quality,        // Balanced quality/performance
	Balanced,       // Balance between Quality and Performance
	Performance,    // High performance, lower quality
	UltraPerformance // Maximum performance
};

/**
 * Super Resolution mode (unified for DLSS/FSR/XeSS)
 */
UENUM(BlueprintType)
enum class EUPMSuperResolutionMode : uint8
{
	Off,
	Native,         // DLAA equivalent - native resolution
	UltraQuality,
	Quality,
	Balanced,
	Performance,
	UltraPerformance
};

/**
 * Frame Generation mode
 */
UENUM(BlueprintType)
enum class EUPMFrameGenMode : uint8
{
	Off,
	On,
	Auto    // Enable based on hardware detection
};

/**
 * Reflex/Low Latency mode
 */
UENUM(BlueprintType)
enum class EUPMReflexMode : uint8
{
	Off,
	On,
	OnPlusBoost     // On with GPU boost
};

/**
 * Save slot type for categorization
 */
UENUM(BlueprintType)
enum class EUPMSaveSlotType : uint8
{
	Manual,         // Player-initiated save
	AutoSave,       // Automatic checkpoint save
	QuickSave,      // Quick save slot
	ProfileSave     // Settings/profile only
};

/**
 * Anti-Aliasing method selection
 */
UENUM(BlueprintType)
enum class EUPMAntiAliasingMethod : uint8
{
	None,
	FXAA,
	TAA,
	TSR,            // Temporal Super Resolution
	DLSS,           // NVIDIA DLSS
	FSR,            // AMD FSR (if available)
	XeSS            // Intel XeSS (if available)
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Quality", meta = (ClampMin = "25.0", ClampMax = "100.0"))
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

/**
 * Save slot metadata
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMSaveSlotInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Save")
	FString SlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Save")
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Save")
	EUPMSaveSlotType SlotType = EUPMSaveSlotType::Manual;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Save")
	FDateTime SaveTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Save")
	FString LevelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Save")
	float PlayTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Save")
	int32 SaveVersion = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Save")
	FString ThumbnailPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Save")
	TMap<FString, FString> CustomMetadata;

	bool IsValid() const { return !SlotName.IsEmpty(); }
};

/**
 * Input action binding info for rebinding
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMInputBindingInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Input")
	FName ActionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Input")
	FName MappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Input")
	FKey PrimaryKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Input")
	FKey SecondaryKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Input")
	FKey GamepadKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Input")
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Input")
	FText CategoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPM|Input")
	bool bIsRebindable = true;
};

/**
 * NVIDIA GPU capabilities
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMNvidiaCapabilities
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "UPM|NVIDIA")
	bool bIsNvidiaGPU = false;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|NVIDIA")
	bool bDLSSSupported = false;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|NVIDIA")
	bool bDLSSGSupported = false;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|NVIDIA")
	bool bReflexSupported = false;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|NVIDIA")
	bool bRayTracingSupported = false;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|NVIDIA")
	FString GPUName;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|NVIDIA")
	int32 DriverVersionMajor = 0;

	UPROPERTY(BlueprintReadOnly, Category = "UPM|NVIDIA")
	int32 DriverVersionMinor = 0;
};

// Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingsChanged, FUPMQualityPreset, NewSettings);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFPSUpdated, float, CurrentFPS);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBenchmarkComplete, FUPMBenchmarkResults, Results);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSettingsApplied);

// Save system delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSaveGameComplete, const FString&, SlotName, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadGameComplete, const FString&, SlotName, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAutoSaveTriggered, const FString&, SlotName);

// Input rebinding delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputRebindComplete, FName, ActionName, FKey, NewKey);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputRebindStarted, FName, ActionName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInputRebindCancelled);
