// Copyright UPM Team. All Rights Reserved.

#include "UPMBlueprintLibrary.h"
#include "UPMCore.h"
#include "UPMGraphicsManager.h"
#include "UPMPerformanceMonitor.h"

// ==================== GRAPHICS - OVERALL ====================

void UUPMBlueprintLibrary::SetOverallQuality(const UObject* WorldContextObject, int32 Quality)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetOverallQuality(Quality);
		}
	}
}

int32 UUPMBlueprintLibrary::GetOverallQuality(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			return GM->GetOverallQuality();
		}
	}
	return 2; // Default to High
}

// ==================== GRAPHICS - INDIVIDUAL ====================

void UUPMBlueprintLibrary::SetTextureQuality(const UObject* WorldContextObject, int32 Quality)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetTextureQuality(Quality);
		}
	}
}

void UUPMBlueprintLibrary::SetShadowQuality(const UObject* WorldContextObject, int32 Quality)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetShadowQuality(Quality);
		}
	}
}

void UUPMBlueprintLibrary::SetViewDistanceQuality(const UObject* WorldContextObject, int32 Quality)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetViewDistanceQuality(Quality);
		}
	}
}

void UUPMBlueprintLibrary::SetAntiAliasingQuality(const UObject* WorldContextObject, int32 Quality)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetAntiAliasingQuality(Quality);
		}
	}
}

void UUPMBlueprintLibrary::SetPostProcessQuality(const UObject* WorldContextObject, int32 Quality)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetPostProcessQuality(Quality);
		}
	}
}

void UUPMBlueprintLibrary::SetEffectsQuality(const UObject* WorldContextObject, int32 Quality)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetEffectsQuality(Quality);
		}
	}
}

// ==================== DISPLAY ====================

void UUPMBlueprintLibrary::SetResolution(const UObject* WorldContextObject, int32 Width, int32 Height)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetScreenResolution(FIntPoint(Width, Height));
		}
	}
}

FIntPoint UUPMBlueprintLibrary::GetCurrentResolution(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			return GM->GetScreenResolution();
		}
	}
	return FIntPoint(1920, 1080);
}

TArray<FIntPoint> UUPMBlueprintLibrary::GetSupportedResolutions(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			return GM->GetSupportedResolutions();
		}
	}
	return TArray<FIntPoint>();
}

void UUPMBlueprintLibrary::SetFullscreenMode(const UObject* WorldContextObject, EWindowMode::Type Mode)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetFullscreenMode(Mode);
		}
	}
}

void UUPMBlueprintLibrary::SetVSync(const UObject* WorldContextObject, bool bEnabled)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetVSyncEnabled(bEnabled);
		}
	}
}

void UUPMBlueprintLibrary::SetFrameRateLimit(const UObject* WorldContextObject, float Limit)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetFrameRateLimit(Limit);
		}
	}
}

void UUPMBlueprintLibrary::SetResolutionScale(const UObject* WorldContextObject, float Percentage)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			GM->SetResolutionScale(Percentage);
		}
	}
}

// ==================== SETTINGS MANAGEMENT ====================

void UUPMBlueprintLibrary::ApplyGraphicsSettings(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		Core->ApplyAllSettings();
	}
}

void UUPMBlueprintLibrary::SaveGraphicsSettings(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		Core->SaveAllSettings();
	}
}

void UUPMBlueprintLibrary::LoadGraphicsSettings(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		Core->LoadAllSettings();
	}
}

void UUPMBlueprintLibrary::ResetToDefaults(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		Core->ResetToDefaults();
	}
}

FUPMQualityPreset UUPMBlueprintLibrary::GetCurrentQualitySettings(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			return GM->GetCurrentSettingsAsPreset();
		}
	}
	return FUPMQualityPreset();
}

// ==================== PERFORMANCE MONITORING ====================

float UUPMBlueprintLibrary::GetCurrentFPS(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor())
		{
			return PM->GetCurrentFPS();
		}
	}
	return 0.0f;
}

float UUPMBlueprintLibrary::GetAverageFPS(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor())
		{
			return PM->GetAverageFPS();
		}
	}
	return 0.0f;
}

float UUPMBlueprintLibrary::GetFrameTimeMs(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor())
		{
			return PM->GetFrameTimeMs();
		}
	}
	return 0.0f;
}

FUPMPerformanceStats UUPMBlueprintLibrary::GetPerformanceStats(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor())
		{
			return PM->GetCurrentStats();
		}
	}
	return FUPMPerformanceStats();
}

void UUPMBlueprintLibrary::EnablePerformanceMonitoring(const UObject* WorldContextObject, bool bEnable)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor())
		{
			PM->SetMonitoringEnabled(bEnable);
		}
	}
}

void UUPMBlueprintLibrary::SetMonitoringMode(const UObject* WorldContextObject, EUPMMonitoringMode Mode)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor())
		{
			PM->SetMonitoringMode(Mode);
		}
	}
}

// ==================== BENCHMARK ====================

void UUPMBlueprintLibrary::StartBenchmark(const UObject* WorldContextObject, float Duration)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor())
		{
			PM->StartBenchmark(Duration);
		}
	}
}

FUPMBenchmarkResults UUPMBlueprintLibrary::GetBenchmarkResults(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor())
		{
			return PM->GetBenchmarkResults();
		}
	}
	return FUPMBenchmarkResults();
}

// ==================== AUTO-DETECTION ====================

void UUPMBlueprintLibrary::AutoDetectQualitySettings(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		Core->AutoDetectSettings();
	}
}

FUPMQualityPreset UUPMBlueprintLibrary::GetRecommendedSettings(const UObject* WorldContextObject)
{
	if (UUPMCore* Core = UUPMCore::Get(WorldContextObject))
	{
		if (UUPMGraphicsManager* GM = Core->GetGraphicsManager())
		{
			// Run auto-detect and return the result
			GM->AutoDetectQuality();
			return GM->GetCurrentSettingsAsPreset();
		}
	}
	return FUPMQualityPreset();
}
