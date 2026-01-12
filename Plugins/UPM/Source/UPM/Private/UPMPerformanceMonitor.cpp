// Copyright UPM Team. All Rights Reserved.

#include "UPMPerformanceMonitor.h"
#include "HAL/PlatformMemory.h"
#include "HAL/PlatformTime.h"
#include "RHI.h"

DECLARE_STATS_GROUP(TEXT("UPM"), STATGROUP_UPM, STATCAT_Advanced);

UUPMPerformanceMonitor::UUPMPerformanceMonitor()
{
	FPSHistory.Reserve(MaxHistorySize);
}

void UUPMPerformanceMonitor::Initialize()
{
	// Start with basic monitoring enabled by default
	SetMonitoringMode(EUPMMonitoringMode::Basic);
}

TStatId UUPMPerformanceMonitor::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UUPMPerformanceMonitor, STATGROUP_UPM);
}

void UUPMPerformanceMonitor::Tick(float DeltaTime)
{
	if (!bIsMonitoring)
	{
		return;
	}

	// Always update basic metrics
	UpdateBasicMetrics(DeltaTime);

	// Update detailed metrics less frequently
	if (CurrentMode == EUPMMonitoringMode::Detailed || CurrentMode == EUPMMonitoringMode::Benchmark)
	{
		DetailedUpdateCounter++;
		if (DetailedUpdateCounter >= DetailedUpdateInterval)
		{
			UpdateDetailedMetrics();
			DetailedUpdateCounter = 0;
		}
	}

	// Update benchmark if running
	if (bIsBenchmarking)
	{
		UpdateBenchmark(DeltaTime);
	}

	// Broadcast FPS update
	OnFPSUpdated.Broadcast(CurrentStats.CurrentFPS);
}

void UUPMPerformanceMonitor::SetMonitoringEnabled(bool bEnabled)
{
	bIsMonitoring = bEnabled;

	if (!bEnabled)
	{
		// Clear history when disabling
		FPSHistory.Empty();
		CurrentStats = FUPMPerformanceStats();
	}
}

void UUPMPerformanceMonitor::SetMonitoringMode(EUPMMonitoringMode Mode)
{
	CurrentMode = Mode;
	bIsMonitoring = (Mode != EUPMMonitoringMode::Disabled);

	if (Mode == EUPMMonitoringMode::Benchmark && !bIsBenchmarking)
	{
		// Automatically start benchmark when switching to benchmark mode
		StartBenchmark(10.0f);
	}
}

void UUPMPerformanceMonitor::UpdateBasicMetrics(float DeltaTime)
{
	// Calculate current FPS
	if (DeltaTime > 0.0f)
	{
		CurrentStats.CurrentFPS = 1.0f / DeltaTime;
		CurrentStats.FrameTimeMs = DeltaTime * 1000.0f;
	}

	// Add to history
	FPSHistory.Add(CurrentStats.CurrentFPS);
	if (FPSHistory.Num() > MaxHistorySize)
	{
		FPSHistory.RemoveAt(0);
	}

	// Calculate rolling statistics
	if (FPSHistory.Num() > 0)
	{
		float Sum = 0.0f;
		float Min = FPSHistory[0];
		float Max = FPSHistory[0];

		for (float FPS : FPSHistory)
		{
			Sum += FPS;
			Min = FMath::Min(Min, FPS);
			Max = FMath::Max(Max, FPS);
		}

		CurrentStats.AverageFPS = Sum / FPSHistory.Num();
		CurrentStats.MinFPS = Min;
		CurrentStats.MaxFPS = Max;
	}
}

void UUPMPerformanceMonitor::UpdateDetailedMetrics()
{
	// Get thread timing (these are global extern variables in UE)
	extern RENDERCORE_API uint32 GGameThreadTime;
	extern RENDERCORE_API uint32 GRenderThreadTime;
	extern RENDERCORE_API uint32 GGPUFrameTime;

	CurrentStats.GameThreadMs = FPlatformTime::ToMilliseconds(GGameThreadTime);
	CurrentStats.RenderThreadMs = FPlatformTime::ToMilliseconds(GRenderThreadTime);
	CurrentStats.GPUTimeMs = FPlatformTime::ToMilliseconds(GGPUFrameTime);

	// Get memory stats
	FPlatformMemoryStats MemStats = FPlatformMemory::GetStats();
	CurrentStats.UsedPhysicalMemoryMB = (MemStats.TotalPhysical - MemStats.AvailablePhysical) / (1024 * 1024);
	CurrentStats.AvailablePhysicalMemoryMB = MemStats.AvailablePhysical / (1024 * 1024);
}

void UUPMPerformanceMonitor::StartBenchmark(float Duration)
{
	bIsBenchmarking = true;
	BenchmarkDuration = Duration;
	BenchmarkElapsed = 0.0f;
	BenchmarkSamples.Empty();
	BenchmarkSamples.Reserve(static_cast<int32>(Duration * 120)); // Assume up to 120fps

	// Ensure monitoring is enabled
	if (!bIsMonitoring)
	{
		SetMonitoringEnabled(true);
	}
}

void UUPMPerformanceMonitor::StopBenchmark()
{
	if (!bIsBenchmarking)
	{
		return;
	}

	bIsBenchmarking = false;

	// Calculate results
	if (BenchmarkSamples.Num() > 0)
	{
		// Sort samples for percentile calculations
		TArray<float> SortedSamples = BenchmarkSamples;
		SortedSamples.Sort();

		float Sum = 0.0f;
		float Min = SortedSamples[0];
		float Max = SortedSamples.Last();

		for (float FPS : SortedSamples)
		{
			Sum += FPS;
		}

		BenchmarkResults.AverageFPS = Sum / SortedSamples.Num();
		BenchmarkResults.MinFPS = Min;
		BenchmarkResults.MaxFPS = Max;
		BenchmarkResults.TotalFrames = SortedSamples.Num();
		BenchmarkResults.Duration = BenchmarkElapsed;
		BenchmarkResults.AverageFrameTimeMs = 1000.0f / BenchmarkResults.AverageFPS;

		// Calculate 1% and 0.1% lows
		int32 Index_1Percent = FMath::Max(0, SortedSamples.Num() / 100);
		int32 Index_01Percent = FMath::Max(0, SortedSamples.Num() / 1000);

		BenchmarkResults.FPS_1Percentile = SortedSamples[Index_1Percent];
		BenchmarkResults.FPS_01Percentile = SortedSamples[Index_01Percent];

		// Calculate recommended quality
		BenchmarkResults.RecommendedQualityLevel = CalculateRecommendedQuality();
	}

	// Broadcast results
	OnBenchmarkComplete.Broadcast(BenchmarkResults);
}

void UUPMPerformanceMonitor::UpdateBenchmark(float DeltaTime)
{
	BenchmarkElapsed += DeltaTime;
	BenchmarkSamples.Add(CurrentStats.CurrentFPS);

	if (BenchmarkElapsed >= BenchmarkDuration)
	{
		StopBenchmark();
	}
}

void UUPMPerformanceMonitor::SetSampleHistorySize(int32 Size)
{
	MaxHistorySize = FMath::Max(10, Size);

	// Trim existing history if necessary
	while (FPSHistory.Num() > MaxHistorySize)
	{
		FPSHistory.RemoveAt(0);
	}
}

int32 UUPMPerformanceMonitor::CalculateRecommendedQuality() const
{
	// Recommend quality based on average FPS
	// Target: 60fps for each quality level with some headroom

	float AvgFPS = BenchmarkResults.AverageFPS;

	if (AvgFPS >= 144.0f)
	{
		return 4; // Cinematic
	}
	else if (AvgFPS >= 90.0f)
	{
		return 3; // Ultra
	}
	else if (AvgFPS >= 60.0f)
	{
		return 2; // High
	}
	else if (AvgFPS >= 45.0f)
	{
		return 1; // Medium
	}
	else
	{
		return 0; // Low
	}
}

void UUPMPerformanceMonitor::CalculatePercentiles()
{
	if (FPSHistory.Num() < 10)
	{
		return;
	}

	TArray<float> SortedHistory = FPSHistory;
	SortedHistory.Sort();

	int32 Index_1Percent = FMath::Max(0, SortedHistory.Num() / 100);
	int32 Index_01Percent = FMath::Max(0, SortedHistory.Num() / 1000);

	CurrentStats.FPS_1Percentile = SortedHistory[Index_1Percent];
	CurrentStats.FPS_01Percentile = SortedHistory[Index_01Percent];
}
