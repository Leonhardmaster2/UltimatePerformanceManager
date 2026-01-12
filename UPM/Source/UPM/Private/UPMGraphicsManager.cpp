// Copyright UPM Team. All Rights Reserved.

#include "UPMGraphicsManager.h"
#include "UPMCore.h"
#include "GameFramework/GameUserSettings.h"
#include "Kismet/KismetSystemLibrary.h"

void UUPMGraphicsManager::Initialize()
{
	// Ensure game user settings are loaded
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->LoadSettings();
	}
}

UGameUserSettings* UUPMGraphicsManager::GetGameUserSettings() const
{
	return GEngine ? GEngine->GetGameUserSettings() : nullptr;
}

// ==================== OVERALL QUALITY ====================

void UUPMGraphicsManager::SetOverallQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetOverallScalabilityLevel(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetOverallQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetOverallScalabilityLevel() : 3;
}

// ==================== INDIVIDUAL QUALITY SETTINGS ====================

void UUPMGraphicsManager::SetViewDistanceQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetViewDistanceQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetViewDistanceQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetViewDistanceQuality() : 3;
}

void UUPMGraphicsManager::SetAntiAliasingQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetAntiAliasingQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetAntiAliasingQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetAntiAliasingQuality() : 3;
}

void UUPMGraphicsManager::SetShadowQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetShadowQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetShadowQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetShadowQuality() : 3;
}

void UUPMGraphicsManager::SetGlobalIlluminationQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetGlobalIlluminationQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetGlobalIlluminationQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetGlobalIlluminationQuality() : 3;
}

void UUPMGraphicsManager::SetReflectionQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetReflectionQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetReflectionQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetReflectionQuality() : 3;
}

void UUPMGraphicsManager::SetPostProcessQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetPostProcessingQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetPostProcessQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetPostProcessingQuality() : 3;
}

void UUPMGraphicsManager::SetTextureQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetTextureQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetTextureQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetTextureQuality() : 3;
}

void UUPMGraphicsManager::SetEffectsQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetVisualEffectQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetEffectsQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetVisualEffectQuality() : 3;
}

void UUPMGraphicsManager::SetFoliageQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetFoliageQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetFoliageQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetFoliageQuality() : 3;
}

void UUPMGraphicsManager::SetShadingQuality(int32 Quality)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetShadingQuality(ClampQuality(Quality));
		MarkPendingChanges();
	}
}

int32 UUPMGraphicsManager::GetShadingQuality() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetShadingQuality() : 3;
}

// ==================== DISPLAY SETTINGS ====================

void UUPMGraphicsManager::SetScreenResolution(FIntPoint Resolution)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetScreenResolution(Resolution);
		MarkPendingChanges();
	}
}

FIntPoint UUPMGraphicsManager::GetScreenResolution() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetScreenResolution() : FIntPoint(1920, 1080);
}

TArray<FIntPoint> UUPMGraphicsManager::GetSupportedResolutions() const
{
	TArray<FIntPoint> Resolutions;
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		FScreenResolutionArray ResolutionArray;
		if (RHIGetAvailableResolutions(ResolutionArray, true))
		{
			for (const FScreenResolutionRHI& Resolution : ResolutionArray)
			{
				Resolutions.Add(FIntPoint(Resolution.Width, Resolution.Height));
			}
		}
	}
	return Resolutions;
}

void UUPMGraphicsManager::SetFullscreenMode(EWindowMode::Type Mode)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetFullscreenMode(Mode);
		MarkPendingChanges();
	}
}

EWindowMode::Type UUPMGraphicsManager::GetFullscreenMode() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetFullscreenMode() : EWindowMode::Windowed;
}

void UUPMGraphicsManager::SetVSyncEnabled(bool bEnabled)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetVSyncEnabled(bEnabled);
		MarkPendingChanges();
	}
}

bool UUPMGraphicsManager::GetVSyncEnabled() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->IsVSyncEnabled() : true;
}

void UUPMGraphicsManager::SetFrameRateLimit(float Limit)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetFrameRateLimit(FMath::Max(0.0f, Limit));
		MarkPendingChanges();
	}
}

float UUPMGraphicsManager::GetFrameRateLimit() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	return Settings ? Settings->GetFrameRateLimit() : 0.0f;
}

void UUPMGraphicsManager::SetResolutionScale(float Percentage)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		// Minimum 25% to prevent unusable resolutions, maximum 100%
		Settings->SetResolutionScaleValueEx(FMath::Clamp(Percentage, 25.0f, 100.0f));
		MarkPendingChanges();
	}
}

float UUPMGraphicsManager::GetResolutionScale() const
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		float CurrentScaleNormalized, CurrentScaleValue, MinScaleValue, MaxScaleValue;
		Settings->GetResolutionScaleInformationEx(CurrentScaleNormalized, CurrentScaleValue, MinScaleValue, MaxScaleValue);
		return CurrentScaleValue;
	}
	return 100.0f;
}

// ==================== PRESET MANAGEMENT ====================

FUPMQualityPreset UUPMGraphicsManager::GetPresetByLevel(int32 Level) const
{
	FUPMQualityPreset Preset;
	Level = ClampQuality(Level);

	static const FString PresetNames[] = { TEXT("Low"), TEXT("Medium"), TEXT("High"), TEXT("Ultra"), TEXT("Cinematic") };
	Preset.PresetName = PresetNames[Level];
	Preset.OverallQuality = Level;
	Preset.ViewDistance = Level;
	Preset.AntiAliasing = Level;
	Preset.Shadows = Level;
	Preset.GlobalIllumination = Level;
	Preset.Reflections = Level;
	Preset.PostProcess = Level;
	Preset.Textures = Level;
	Preset.Effects = Level;
	Preset.Foliage = Level;
	Preset.Shading = Level;
	Preset.ResolutionScale = 100.0f;
	Preset.bVSync = true;
	Preset.FrameRateLimit = 0.0f;

	return Preset;
}

void UUPMGraphicsManager::ApplyPreset(const FUPMQualityPreset& Preset)
{
	SetViewDistanceQuality(Preset.ViewDistance);
	SetAntiAliasingQuality(Preset.AntiAliasing);
	SetShadowQuality(Preset.Shadows);
	SetGlobalIlluminationQuality(Preset.GlobalIllumination);
	SetReflectionQuality(Preset.Reflections);
	SetPostProcessQuality(Preset.PostProcess);
	SetTextureQuality(Preset.Textures);
	SetEffectsQuality(Preset.Effects);
	SetFoliageQuality(Preset.Foliage);
	SetShadingQuality(Preset.Shading);
	SetResolutionScale(Preset.ResolutionScale);
	SetVSyncEnabled(Preset.bVSync);
	SetFrameRateLimit(Preset.FrameRateLimit);
}

FUPMQualityPreset UUPMGraphicsManager::GetCurrentSettingsAsPreset() const
{
	FUPMQualityPreset Preset;
	Preset.PresetName = TEXT("Custom");
	Preset.OverallQuality = GetOverallQuality();
	Preset.ViewDistance = GetViewDistanceQuality();
	Preset.AntiAliasing = GetAntiAliasingQuality();
	Preset.Shadows = GetShadowQuality();
	Preset.GlobalIllumination = GetGlobalIlluminationQuality();
	Preset.Reflections = GetReflectionQuality();
	Preset.PostProcess = GetPostProcessQuality();
	Preset.Textures = GetTextureQuality();
	Preset.Effects = GetEffectsQuality();
	Preset.Foliage = GetFoliageQuality();
	Preset.Shading = GetShadingQuality();
	Preset.ResolutionScale = GetResolutionScale();
	Preset.bVSync = GetVSyncEnabled();
	Preset.FrameRateLimit = GetFrameRateLimit();
	return Preset;
}

// ==================== UTILITY ====================

void UUPMGraphicsManager::ApplySettings()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->ApplySettings(false);
		bHasPendingChanges = false;
	}
}

void UUPMGraphicsManager::SaveSettings()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SaveSettings();
	}
}

void UUPMGraphicsManager::ResetToDefaults()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->SetToDefaults();
		MarkPendingChanges();
	}
}

void UUPMGraphicsManager::AutoDetectQuality()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (Settings)
	{
		Settings->RunHardwareBenchmark();
		Settings->ApplyHardwareBenchmarkResults();
		MarkPendingChanges();
	}
}

UUPMCore* UUPMGraphicsManager::GetOwningCore() const
{
	return Cast<UUPMCore>(GetOuter());
}

void UUPMGraphicsManager::MarkPendingChanges()
{
	bHasPendingChanges = true;

	// Notify the owning UPMCore that settings have changed
	if (UUPMCore* Core = GetOwningCore())
	{
		Core->MarkSettingsChanged();
	}
}
