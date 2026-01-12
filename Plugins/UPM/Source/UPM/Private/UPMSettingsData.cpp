// Copyright UPM Team. All Rights Reserved.

#include "UPMSettingsData.h"

UUPMSettingsData::UUPMSettingsData()
{
	// Initialize quality preset with default values
	CurrentQualitySettings.PresetName = TEXT("High");
	CurrentQualitySettings.OverallQuality = 2;
	CurrentQualitySettings.ViewDistance = 2;
	CurrentQualitySettings.AntiAliasing = 2;
	CurrentQualitySettings.Shadows = 2;
	CurrentQualitySettings.GlobalIllumination = 2;
	CurrentQualitySettings.Reflections = 2;
	CurrentQualitySettings.PostProcess = 2;
	CurrentQualitySettings.Textures = 2;
	CurrentQualitySettings.Effects = 2;
	CurrentQualitySettings.Foliage = 2;
	CurrentQualitySettings.Shading = 2;
	CurrentQualitySettings.ResolutionScale = 100.0f;
	CurrentQualitySettings.bVSync = true;
	CurrentQualitySettings.FrameRateLimit = 0.0f;
}
