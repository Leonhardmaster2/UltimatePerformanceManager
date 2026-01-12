// Copyright UPM Team. All Rights Reserved.

#include "UPMNvidiaManager.h"
#include "RHI.h"
#include "DynamicRHI.h"
#include "Misc/ConfigCacheIni.h"
#include "HAL/IConsoleManager.h"
#include "Modules/ModuleManager.h"

// Console variable references for DLSS (if plugin is loaded)
static TAutoConsoleVariable<int32> CVarDLSSEnable(
	TEXT("r.NGX.DLSS.Enable"),
	0,
	TEXT("Enable NVIDIA DLSS"),
	ECVF_RenderThreadSafe
);

void UUPMNvidiaManager::Initialize()
{
	// Check for plugins
	CheckDLSSPlugin();
	CheckStreamlinePlugin();

	// Detect hardware capabilities
	DetectCapabilities();

	UE_LOG(LogTemp, Log, TEXT("UPM NVIDIA Manager initialized - GPU: %s, DLSS: %s, FrameGen: %s, Reflex: %s"),
		*Capabilities.GPUName,
		Capabilities.bDLSSSupported ? TEXT("Supported") : TEXT("Not Supported"),
		Capabilities.bDLSSGSupported ? TEXT("Supported") : TEXT("Not Supported"),
		Capabilities.bReflexSupported ? TEXT("Supported") : TEXT("Not Supported"));
}

void UUPMNvidiaManager::DetectCapabilities()
{
	Capabilities = FUPMNvidiaCapabilities();

	// Get GPU name from RHI
	Capabilities.GPUName = GRHIAdapterName;

	// Check if NVIDIA GPU
	Capabilities.bIsNvidiaGPU = Capabilities.GPUName.Contains(TEXT("NVIDIA")) ||
		Capabilities.GPUName.Contains(TEXT("GeForce")) ||
		Capabilities.GPUName.Contains(TEXT("Quadro")) ||
		Capabilities.GPUName.Contains(TEXT("RTX")) ||
		Capabilities.GPUName.Contains(TEXT("GTX"));

	if (!Capabilities.bIsNvidiaGPU)
	{
		return;
	}

	// Check for RTX series (required for DLSS)
	bool bIsRTXCard = Capabilities.GPUName.Contains(TEXT("RTX"));

	// Check for GTX 16/20 series (partial DLSS support)
	bool bIsGTX16Series = Capabilities.GPUName.Contains(TEXT("GTX 16"));

	// DLSS requires RTX or GTX 16 series
	if (bDLSSPluginLoaded && (bIsRTXCard || bIsGTX16Series))
	{
		Capabilities.bDLSSSupported = true;

		// Try to query actual DLSS support via console command
		IConsoleVariable* DLSSSupported = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Available"));
		if (DLSSSupported)
		{
			Capabilities.bDLSSSupported = DLSSSupported->GetInt() > 0;
		}
	}

	// Frame Generation requires RTX 40 series or newer
	bool bIsRTX40Series = Capabilities.GPUName.Contains(TEXT("RTX 40")) ||
		Capabilities.GPUName.Contains(TEXT("RTX 50")); // Future proofing

	if (bStreamlinePluginLoaded && bIsRTX40Series)
	{
		Capabilities.bDLSSGSupported = true;

		// Check actual support via Streamline
		IConsoleVariable* DLSSGSupported = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Streamline.DLSSG.Available"));
		if (DLSSGSupported)
		{
			Capabilities.bDLSSGSupported = DLSSGSupported->GetInt() > 0;
		}
	}

	// Reflex is supported on most NVIDIA GPUs (GTX 900 series and newer)
	Capabilities.bReflexSupported = Capabilities.bIsNvidiaGPU;

	// Ray tracing requires RTX
	Capabilities.bRayTracingSupported = bIsRTXCard && GRHISupportsRayTracing;
}

void UUPMNvidiaManager::CheckDLSSPlugin()
{
	// Check if DLSS plugin module is loaded
	bDLSSPluginLoaded = FModuleManager::Get().IsModuleLoaded(TEXT("DLSS")) ||
		FModuleManager::Get().IsModuleLoaded(TEXT("DLSSBlueprint"));

	// Also check for NGX DLSS plugin
	if (!bDLSSPluginLoaded)
	{
		bDLSSPluginLoaded = FModuleManager::Get().IsModuleLoaded(TEXT("NGXDLSS"));
	}

	// Check via console variable existence
	if (!bDLSSPluginLoaded)
	{
		bDLSSPluginLoaded = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Enable")) != nullptr;
	}
}

void UUPMNvidiaManager::CheckStreamlinePlugin()
{
	// Check if Streamline plugin is loaded (used for DLSS-G/Frame Generation)
	bStreamlinePluginLoaded = FModuleManager::Get().IsModuleLoaded(TEXT("Streamline")) ||
		FModuleManager::Get().IsModuleLoaded(TEXT("StreamlineBlueprint"));

	// Check via console variable
	if (!bStreamlinePluginLoaded)
	{
		bStreamlinePluginLoaded = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Streamline.Enable")) != nullptr;
	}
}

void UUPMNvidiaManager::SetDLSSMode(EUPMDLSSMode Mode)
{
	if (!Capabilities.bDLSSSupported && Mode != EUPMDLSSMode::Off)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: DLSS not supported on this hardware"));
		return;
	}

	CurrentDLSSMode = Mode;
	ApplyDLSSSettings();
}

void UUPMNvidiaManager::SetDLSSSharpness(float Sharpness)
{
	DLSSSharpness = FMath::Clamp(Sharpness, 0.0f, 1.0f);

	if (IsDLSSEnabled())
	{
		ApplyDLSSSettings();
	}
}

float UUPMNvidiaManager::GetOptimalResolutionScale() const
{
	return DLSSModeToResolutionScale(CurrentDLSSMode);
}

EUPMDLSSMode UUPMNvidiaManager::GetRecommendedDLSSMode(float TargetFPS) const
{
	if (!Capabilities.bDLSSSupported)
	{
		return EUPMDLSSMode::Off;
	}

	// This would ideally use actual performance data
	// For now, return sensible defaults based on target FPS
	if (TargetFPS >= 120.0f)
	{
		return EUPMDLSSMode::Performance;
	}
	else if (TargetFPS >= 60.0f)
	{
		return EUPMDLSSMode::Balanced;
	}
	else
	{
		return EUPMDLSSMode::Quality;
	}
}

TArray<EUPMDLSSMode> UUPMNvidiaManager::GetAvailableDLSSModes() const
{
	TArray<EUPMDLSSMode> Modes;
	Modes.Add(EUPMDLSSMode::Off);

	if (Capabilities.bDLSSSupported)
	{
		Modes.Add(EUPMDLSSMode::DLAA);
		Modes.Add(EUPMDLSSMode::UltraQuality);
		Modes.Add(EUPMDLSSMode::Quality);
		Modes.Add(EUPMDLSSMode::Balanced);
		Modes.Add(EUPMDLSSMode::Performance);
		Modes.Add(EUPMDLSSMode::UltraPerformance);
	}

	return Modes;
}

void UUPMNvidiaManager::SetFrameGenerationMode(EUPMFrameGenMode Mode)
{
	if (!Capabilities.bDLSSGSupported && Mode != EUPMFrameGenMode::Off)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: Frame Generation not supported on this hardware"));
		return;
	}

	CurrentFrameGenMode = Mode;
	ApplyFrameGenSettings();
}

bool UUPMNvidiaManager::IsFrameGenerationEnabled() const
{
	if (CurrentFrameGenMode == EUPMFrameGenMode::Off)
	{
		return false;
	}

	if (CurrentFrameGenMode == EUPMFrameGenMode::Auto)
	{
		return Capabilities.bDLSSGSupported;
	}

	return true;
}

float UUPMNvidiaManager::GetFrameGenerationMultiplier() const
{
	return IsFrameGenerationEnabled() ? 2.0f : 1.0f;
}

void UUPMNvidiaManager::SetReflexMode(EUPMReflexMode Mode)
{
	if (!Capabilities.bReflexSupported && Mode != EUPMReflexMode::Off)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: Reflex not supported on this hardware"));
		return;
	}

	CurrentReflexMode = Mode;
	ApplyReflexSettings();
}

float UUPMNvidiaManager::GetRenderLatencyMs() const
{
	// Query render latency via Reflex stats
	IConsoleVariable* LatencyVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Reflex.RenderLatency"));
	if (LatencyVar)
	{
		return LatencyVar->GetFloat();
	}
	return 0.0f;
}

float UUPMNvidiaManager::GetGameLatencyMs() const
{
	IConsoleVariable* LatencyVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Reflex.GameLatency"));
	if (LatencyVar)
	{
		return LatencyVar->GetFloat();
	}
	return 0.0f;
}

float UUPMNvidiaManager::GetTotalLatencyMs() const
{
	return GetRenderLatencyMs() + GetGameLatencyMs();
}

void UUPMNvidiaManager::SetSuperResolutionMode(EUPMSuperResolutionMode Mode)
{
	CurrentSuperResMode = Mode;

	// Convert to DLSS mode if DLSS is available
	if (Capabilities.bDLSSSupported)
	{
		switch (Mode)
		{
		case EUPMSuperResolutionMode::Off:
			SetDLSSMode(EUPMDLSSMode::Off);
			break;
		case EUPMSuperResolutionMode::Native:
			SetDLSSMode(EUPMDLSSMode::DLAA);
			break;
		case EUPMSuperResolutionMode::UltraQuality:
			SetDLSSMode(EUPMDLSSMode::UltraQuality);
			break;
		case EUPMSuperResolutionMode::Quality:
			SetDLSSMode(EUPMDLSSMode::Quality);
			break;
		case EUPMSuperResolutionMode::Balanced:
			SetDLSSMode(EUPMDLSSMode::Balanced);
			break;
		case EUPMSuperResolutionMode::Performance:
			SetDLSSMode(EUPMDLSSMode::Performance);
			break;
		case EUPMSuperResolutionMode::UltraPerformance:
			SetDLSSMode(EUPMDLSSMode::UltraPerformance);
			break;
		}
	}
}

TArray<EUPMSuperResolutionMode> UUPMNvidiaManager::GetAvailableSuperResolutionModes() const
{
	TArray<EUPMSuperResolutionMode> Modes;
	Modes.Add(EUPMSuperResolutionMode::Off);

	if (Capabilities.bDLSSSupported)
	{
		Modes.Add(EUPMSuperResolutionMode::Native);
		Modes.Add(EUPMSuperResolutionMode::UltraQuality);
		Modes.Add(EUPMSuperResolutionMode::Quality);
		Modes.Add(EUPMSuperResolutionMode::Balanced);
		Modes.Add(EUPMSuperResolutionMode::Performance);
		Modes.Add(EUPMSuperResolutionMode::UltraPerformance);
	}

	return Modes;
}

void UUPMNvidiaManager::SetAntiAliasingMethod(EUPMAntiAliasingMethod Method)
{
	// Check if method is available
	if (Method == EUPMAntiAliasingMethod::DLSS && !Capabilities.bDLSSSupported)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: DLSS AA not available, falling back to TAA"));
		Method = EUPMAntiAliasingMethod::TAA;
	}

	CurrentAAMethod = Method;

	// Apply via console commands
	IConsoleVariable* AAMethod = IConsoleManager::Get().FindConsoleVariable(TEXT("r.AntiAliasingMethod"));
	if (AAMethod)
	{
		switch (Method)
		{
		case EUPMAntiAliasingMethod::None:
			AAMethod->Set(0);
			break;
		case EUPMAntiAliasingMethod::FXAA:
			AAMethod->Set(1);
			break;
		case EUPMAntiAliasingMethod::TAA:
			AAMethod->Set(2);
			break;
		case EUPMAntiAliasingMethod::TSR:
			AAMethod->Set(4); // TSR
			break;
		case EUPMAntiAliasingMethod::DLSS:
			// DLSS handles its own AA
			AAMethod->Set(2); // Use TAA as base
			SetDLSSMode(EUPMDLSSMode::DLAA);
			break;
		default:
			AAMethod->Set(2); // Default to TAA
			break;
		}
	}
}

TArray<EUPMAntiAliasingMethod> UUPMNvidiaManager::GetAvailableAAMethods() const
{
	TArray<EUPMAntiAliasingMethod> Methods;
	Methods.Add(EUPMAntiAliasingMethod::None);
	Methods.Add(EUPMAntiAliasingMethod::FXAA);
	Methods.Add(EUPMAntiAliasingMethod::TAA);
	Methods.Add(EUPMAntiAliasingMethod::TSR);

	if (Capabilities.bDLSSSupported)
	{
		Methods.Add(EUPMAntiAliasingMethod::DLSS);
	}

	return Methods;
}

void UUPMNvidiaManager::ApplySettings()
{
	ApplyDLSSSettings();
	ApplyFrameGenSettings();
	ApplyReflexSettings();
}

void UUPMNvidiaManager::ResetToDefaults()
{
	CurrentDLSSMode = EUPMDLSSMode::Off;
	CurrentFrameGenMode = EUPMFrameGenMode::Off;
	CurrentReflexMode = EUPMReflexMode::Off;
	CurrentSuperResMode = EUPMSuperResolutionMode::Off;
	CurrentAAMethod = EUPMAntiAliasingMethod::TAA;
	DLSSSharpness = 0.5f;

	ApplySettings();
}

void UUPMNvidiaManager::RefreshCapabilities()
{
	CheckDLSSPlugin();
	CheckStreamlinePlugin();
	DetectCapabilities();
}

void UUPMNvidiaManager::ApplyDLSSSettings()
{
	if (!bDLSSPluginLoaded)
	{
		return;
	}

	// Enable/disable DLSS
	IConsoleVariable* DLSSEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Enable"));
	if (DLSSEnable)
	{
		DLSSEnable->Set(CurrentDLSSMode != EUPMDLSSMode::Off ? 1 : 0);
	}

	// Set DLSS quality mode
	IConsoleVariable* DLSSQuality = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Quality"));
	if (DLSSQuality && CurrentDLSSMode != EUPMDLSSMode::Off)
	{
		// Map our enum to DLSS quality values
		// -2: Ultra Performance, -1: Performance, 0: Balanced, 1: Quality, 2: Ultra Quality
		int32 QualityValue = 0;
		switch (CurrentDLSSMode)
		{
		case EUPMDLSSMode::DLAA:
			QualityValue = 3; // DLAA mode
			break;
		case EUPMDLSSMode::UltraQuality:
			QualityValue = 2;
			break;
		case EUPMDLSSMode::Quality:
			QualityValue = 1;
			break;
		case EUPMDLSSMode::Balanced:
			QualityValue = 0;
			break;
		case EUPMDLSSMode::Performance:
			QualityValue = -1;
			break;
		case EUPMDLSSMode::UltraPerformance:
			QualityValue = -2;
			break;
		default:
			break;
		}
		DLSSQuality->Set(QualityValue);
	}

	// Set sharpness
	IConsoleVariable* DLSSSharpnessVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Sharpness"));
	if (DLSSSharpnessVar)
	{
		DLSSSharpnessVar->Set(DLSSSharpness);
	}

	UE_LOG(LogTemp, Log, TEXT("UPM: Applied DLSS settings - Mode: %d, Sharpness: %.2f"),
		static_cast<int32>(CurrentDLSSMode), DLSSSharpness);
}

void UUPMNvidiaManager::ApplyFrameGenSettings()
{
	if (!bStreamlinePluginLoaded)
	{
		return;
	}

	bool bEnable = IsFrameGenerationEnabled();

	// Enable Streamline
	IConsoleVariable* StreamlineEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Streamline.Enable"));
	if (StreamlineEnable)
	{
		StreamlineEnable->Set(bEnable ? 1 : 0);
	}

	// Enable DLSS-G specifically
	IConsoleVariable* DLSSGEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Streamline.DLSSG.Enable"));
	if (DLSSGEnable)
	{
		DLSSGEnable->Set(bEnable ? 1 : 0);
	}

	UE_LOG(LogTemp, Log, TEXT("UPM: Frame Generation %s"), bEnable ? TEXT("Enabled") : TEXT("Disabled"));
}

void UUPMNvidiaManager::ApplyReflexSettings()
{
	// Set Reflex mode
	IConsoleVariable* ReflexMode = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Reflex.Enable"));
	if (ReflexMode)
	{
		int32 ModeValue = 0;
		switch (CurrentReflexMode)
		{
		case EUPMReflexMode::Off:
			ModeValue = 0;
			break;
		case EUPMReflexMode::On:
			ModeValue = 1;
			break;
		case EUPMReflexMode::OnPlusBoost:
			ModeValue = 2;
			break;
		}
		ReflexMode->Set(ModeValue);
	}

	UE_LOG(LogTemp, Log, TEXT("UPM: Reflex mode set to %d"), static_cast<int32>(CurrentReflexMode));
}

float UUPMNvidiaManager::DLSSModeToResolutionScale(EUPMDLSSMode Mode) const
{
	switch (Mode)
	{
	case EUPMDLSSMode::Off:
	case EUPMDLSSMode::DLAA:
		return 100.0f;
	case EUPMDLSSMode::UltraQuality:
		return 77.0f;  // ~1.3x
	case EUPMDLSSMode::Quality:
		return 67.0f;  // ~1.5x
	case EUPMDLSSMode::Balanced:
		return 58.0f;  // ~1.7x
	case EUPMDLSSMode::Performance:
		return 50.0f;  // 2x
	case EUPMDLSSMode::UltraPerformance:
		return 33.0f;  // 3x
	default:
		return 100.0f;
	}
}
