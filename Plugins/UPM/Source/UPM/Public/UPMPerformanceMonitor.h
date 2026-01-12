// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UPMTypes.h"
#include "UPMPerformanceMonitor.generated.h"

/**
 * UPMPerformanceMonitor - Real-time performance statistics
 *
 * Provides shipping-safe performance metrics including FPS, frame times,
 * thread times, and memory usage. Supports different monitoring modes
 * and optional benchmark recording.
 */
UCLASS(BlueprintType)
class UPM_API UUPMPerformanceMonitor : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UUPMPerformanceMonitor();

	/** Initialize the performance monitor */
	void Initialize();

	/** FTickableGameObject interface */
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual bool IsTickable() const override { return bIsMonitoring; }
	virtual bool IsTickableInEditor() const override { return false; }

	// ==================== MONITORING CONTROL ====================

	/** Enable or disable performance monitoring */
	UFUNCTION(BlueprintCallable, Category = "UPM|Performance")
	void SetMonitoringEnabled(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	bool IsMonitoringEnabled() const { return bIsMonitoring; }

	/** Set the monitoring mode */
	UFUNCTION(BlueprintCallable, Category = "UPM|Performance")
	void SetMonitoringMode(EUPMMonitoringMode Mode);

	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	EUPMMonitoringMode GetMonitoringMode() const { return CurrentMode; }

	// ==================== BASIC METRICS ====================

	/** Get current FPS */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	float GetCurrentFPS() const { return CurrentStats.CurrentFPS; }

	/** Get average FPS over the sample window */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	float GetAverageFPS() const { return CurrentStats.AverageFPS; }

	/** Get minimum FPS in the sample window */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	float GetMinFPS() const { return CurrentStats.MinFPS; }

	/** Get maximum FPS in the sample window */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	float GetMaxFPS() const { return CurrentStats.MaxFPS; }

	/** Get current frame time in milliseconds */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	float GetFrameTimeMs() const { return CurrentStats.FrameTimeMs; }

	// ==================== DETAILED METRICS ====================

	/** Get game thread time in milliseconds */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	float GetGameThreadMs() const { return CurrentStats.GameThreadMs; }

	/** Get render thread time in milliseconds */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	float GetRenderThreadMs() const { return CurrentStats.RenderThreadMs; }

	/** Get GPU time in milliseconds (if available) */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	float GetGPUTimeMs() const { return CurrentStats.GPUTimeMs; }

	/** Get used physical memory in MB */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	int64 GetUsedMemoryMB() const { return CurrentStats.UsedPhysicalMemoryMB; }

	/** Get available physical memory in MB */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	int64 GetAvailableMemoryMB() const { return CurrentStats.AvailablePhysicalMemoryMB; }

	/** Get all current performance stats */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	FUPMPerformanceStats GetCurrentStats() const { return CurrentStats; }

	// ==================== BENCHMARK ====================

	/** Start a benchmark recording for specified duration */
	UFUNCTION(BlueprintCallable, Category = "UPM|Benchmark")
	void StartBenchmark(float Duration = 10.0f);

	/** Stop the benchmark early */
	UFUNCTION(BlueprintCallable, Category = "UPM|Benchmark")
	void StopBenchmark();

	/** Check if benchmark is running */
	UFUNCTION(BlueprintPure, Category = "UPM|Benchmark")
	bool IsBenchmarkRunning() const { return bIsBenchmarking; }

	/** Get benchmark results (valid after benchmark completes) */
	UFUNCTION(BlueprintPure, Category = "UPM|Benchmark")
	FUPMBenchmarkResults GetBenchmarkResults() const { return BenchmarkResults; }

	// ==================== SETTINGS ====================

	/** Set the sample history size (default 300 = ~5 seconds at 60fps) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Performance")
	void SetSampleHistorySize(int32 Size);

	/** Get the FPS history for graphing */
	UFUNCTION(BlueprintPure, Category = "UPM|Performance")
	TArray<float> GetFPSHistory() const { return FPSHistory; }

	// ==================== DELEGATES ====================

	/** Called every frame when monitoring (for UI updates) */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Events")
	FOnFPSUpdated OnFPSUpdated;

	/** Called when benchmark completes */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Events")
	FOnBenchmarkComplete OnBenchmarkComplete;

protected:
	/** Update basic metrics (FPS, frame time) */
	void UpdateBasicMetrics(float DeltaTime);

	/** Update detailed metrics (thread times, memory) */
	void UpdateDetailedMetrics();

	/** Update benchmark recording */
	void UpdateBenchmark(float DeltaTime);

	/** Calculate percentiles from sample data */
	void CalculatePercentiles();

	/** Calculate recommended quality level based on benchmark */
	int32 CalculateRecommendedQuality() const;

private:
	/** Current monitoring mode */
	EUPMMonitoringMode CurrentMode = EUPMMonitoringMode::Disabled;

	/** Whether monitoring is active */
	bool bIsMonitoring = false;

	/** Current performance stats */
	FUPMPerformanceStats CurrentStats;

	/** FPS sample history for rolling calculations */
	TArray<float> FPSHistory;

	/** Maximum history size */
	int32 MaxHistorySize = 300;

	/** Benchmark state */
	bool bIsBenchmarking = false;
	float BenchmarkDuration = 0.0f;
	float BenchmarkElapsed = 0.0f;
	TArray<float> BenchmarkSamples;
	FUPMBenchmarkResults BenchmarkResults;

	/** Frame counter for update throttling */
	int32 DetailedUpdateCounter = 0;
	static constexpr int32 DetailedUpdateInterval = 10; // Update detailed stats every N frames
};
