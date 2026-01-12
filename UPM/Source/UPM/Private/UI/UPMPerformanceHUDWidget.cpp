// Copyright UPM Team. All Rights Reserved.

#include "UI/UPMPerformanceHUDWidget.h"
#include "UPMPerformanceMonitor.h"
#include "UPMCore.h"
#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Components/VerticalBox.h"
#include "Components/CanvasPanelSlot.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"
#include "Kismet/GameplayStatics.h"

UUPMPerformanceHUDWidget::UUPMPerformanceHUDWidget()
{
}

void UUPMPerformanceHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Load default configuration if set
	if (DefaultConfig.IsValid())
	{
		LoadConfiguration(DefaultConfig.LoadSynchronous());
	}

	// Get performance monitor reference
	if (UUPMCore* Core = UUPMCore::Get(this))
	{
		PerformanceMonitor = Core->GetPerformanceMonitor();
	}

	// Apply initial configuration
	ConfigureVisibleElements();
	ApplyPosition();
}

void UUPMPerformanceHUDWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UUPMPerformanceHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (CurrentMode == EUPMHUDDisplayMode::Disabled)
	{
		return;
	}

	// Throttle updates based on configuration
	float UpdateInterval = CurrentConfig ? CurrentConfig->UpdateInterval : 0.1f;
	TimeSinceLastUpdate += InDeltaTime;

	if (TimeSinceLastUpdate >= UpdateInterval)
	{
		TimeSinceLastUpdate = 0.0f;
		UpdateStats();
	}
}

void UUPMPerformanceHUDWidget::LoadConfiguration(UUPMPerformanceHUDConfig* Config)
{
	if (!Config)
	{
		return;
	}

	CurrentConfig = Config;
	CurrentMode = Config->DefaultMode;

	// Apply background
	if (BackgroundImage)
	{
		if (Config->bShowBackground)
		{
			BackgroundImage->SetVisibility(ESlateVisibility::HitTestInvisible);
			BackgroundImage->SetColorAndOpacity(Config->BackgroundColor);
		}
		else
		{
			BackgroundImage->SetVisibility(ESlateVisibility::Collapsed);
		}
	}

	ConfigureVisibleElements();
	ApplyPosition();
}

void UUPMPerformanceHUDWidget::SetDisplayMode(EUPMHUDDisplayMode Mode)
{
	CurrentMode = Mode;

	if (Mode == EUPMHUDDisplayMode::Disabled)
	{
		SetVisibility(ESlateVisibility::Collapsed);
	}
	else
	{
		SetVisibility(ESlateVisibility::HitTestInvisible);
		ConfigureVisibleElements();
	}
}

void UUPMPerformanceHUDWidget::CycleDisplayMode()
{
	int32 ModeValue = static_cast<int32>(CurrentMode);
	ModeValue = (ModeValue + 1) % static_cast<int32>(EUPMHUDDisplayMode::Custom);
	SetDisplayMode(static_cast<EUPMHUDDisplayMode>(ModeValue));
}

void UUPMPerformanceHUDWidget::ToggleVisibility()
{
	if (GetVisibility() == ESlateVisibility::Collapsed)
	{
		SetVisibility(ESlateVisibility::HitTestInvisible);
	}
	else
	{
		SetVisibility(ESlateVisibility::Collapsed);
	}
}

FLinearColor UUPMPerformanceHUDWidget::GetFPSColor() const
{
	if (!CurrentConfig)
	{
		return FLinearColor::White;
	}

	if (CachedFPS >= CurrentConfig->GoodFPSThreshold)
	{
		return CurrentConfig->GoodColor;
	}
	else if (CachedFPS >= CurrentConfig->WarningFPSThreshold)
	{
		return CurrentConfig->WarningColor;
	}
	else
	{
		return CurrentConfig->BadColor;
	}
}

void UUPMPerformanceHUDWidget::UpdateStats_Implementation()
{
	// Get stats from performance monitor if available
	if (PerformanceMonitor.IsValid())
	{
		CachedFPS = PerformanceMonitor->GetCurrentFPS();
		CachedFrameTime = PerformanceMonitor->GetFrameTime();
		CachedGPUTime = PerformanceMonitor->GetGPUFrameTime();
		CachedGameThreadTime = PerformanceMonitor->GetGameThreadTime();
		CachedRenderThreadTime = PerformanceMonitor->GetRenderThreadTime();
		CachedMemoryUsed = PerformanceMonitor->GetUsedMemoryMB() * 1024 * 1024;
	}
	else
	{
		// Fallback to basic FPS calculation
		if (GEngine && GEngine->GameViewport)
		{
			extern ENGINE_API float GAverageFPS;
			CachedFPS = GAverageFPS;
			CachedFrameTime = CachedFPS > 0.0f ? 1000.0f / CachedFPS : 0.0f;
		}
	}

	// Update FPS text with color
	if (FPSText)
	{
		FPSText->SetText(FormatFPS(CachedFPS));
		FPSText->SetColorAndOpacity(FSlateColor(GetFPSColor()));
	}

	// Update frame time
	if (FrameTimeText)
	{
		FrameTimeText->SetText(FormatTime(CachedFrameTime));
	}

	// Update GPU time
	if (GPUTimeText)
	{
		GPUTimeText->SetText(FText::Format(NSLOCTEXT("UPM", "GPUTime", "GPU: {0}"), FormatTime(CachedGPUTime)));
	}

	// Update game thread time
	if (GameThreadText)
	{
		GameThreadText->SetText(FText::Format(NSLOCTEXT("UPM", "GameThread", "Game: {0}"), FormatTime(CachedGameThreadTime)));
	}

	// Update render thread time
	if (RenderThreadText)
	{
		RenderThreadText->SetText(FText::Format(NSLOCTEXT("UPM", "RenderThread", "Render: {0}"), FormatTime(CachedRenderThreadTime)));
	}

	// Update memory
	if (MemoryText)
	{
		MemoryText->SetText(FText::Format(NSLOCTEXT("UPM", "Memory", "Mem: {0}"), FormatMemory(CachedMemoryUsed)));
	}

	// Update average FPS
	if (AverageFPSText && PerformanceMonitor.IsValid())
	{
		float AvgFPS = PerformanceMonitor->GetAverageFPS();
		AverageFPSText->SetText(FText::Format(NSLOCTEXT("UPM", "AvgFPS", "Avg: {0}"), FormatFPS(AvgFPS)));
	}

	// Update min/max FPS
	if (MinMaxFPSText && PerformanceMonitor.IsValid())
	{
		float MinFPS = PerformanceMonitor->GetMinFPS();
		float MaxFPS = PerformanceMonitor->GetMaxFPS();
		MinMaxFPSText->SetText(FText::Format(NSLOCTEXT("UPM", "MinMaxFPS", "Min: {0} Max: {1}"),
			FText::AsNumber(FMath::RoundToInt(MinFPS)),
			FText::AsNumber(FMath::RoundToInt(MaxFPS))));
	}

	// Update percentiles
	if (PercentilesText && PerformanceMonitor.IsValid())
	{
		float P1 = PerformanceMonitor->GetFPS1Percent();
		float P01 = PerformanceMonitor->GetFPS01Percent();
		PercentilesText->SetText(FText::Format(NSLOCTEXT("UPM", "Percentiles", "1%: {0} 0.1%: {1}"),
			FText::AsNumber(FMath::RoundToInt(P1)),
			FText::AsNumber(FMath::RoundToInt(P01))));
	}
}

void UUPMPerformanceHUDWidget::ApplyPosition_Implementation()
{
	if (!CurrentConfig)
	{
		return;
	}

	UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Slot);
	if (!CanvasSlot)
	{
		return;
	}

	FMargin Margin = CurrentConfig->ScreenMargin;

	switch (CurrentConfig->Position)
	{
	case EUPMHUDPosition::TopLeft:
		CanvasSlot->SetAnchors(FAnchors(0.0f, 0.0f, 0.0f, 0.0f));
		CanvasSlot->SetAlignment(FVector2D(0.0f, 0.0f));
		CanvasSlot->SetPosition(FVector2D(Margin.Left, Margin.Top));
		break;

	case EUPMHUDPosition::TopRight:
		CanvasSlot->SetAnchors(FAnchors(1.0f, 0.0f, 1.0f, 0.0f));
		CanvasSlot->SetAlignment(FVector2D(1.0f, 0.0f));
		CanvasSlot->SetPosition(FVector2D(-Margin.Right, Margin.Top));
		break;

	case EUPMHUDPosition::BottomLeft:
		CanvasSlot->SetAnchors(FAnchors(0.0f, 1.0f, 0.0f, 1.0f));
		CanvasSlot->SetAlignment(FVector2D(0.0f, 1.0f));
		CanvasSlot->SetPosition(FVector2D(Margin.Left, -Margin.Bottom));
		break;

	case EUPMHUDPosition::BottomRight:
		CanvasSlot->SetAnchors(FAnchors(1.0f, 1.0f, 1.0f, 1.0f));
		CanvasSlot->SetAlignment(FVector2D(1.0f, 1.0f));
		CanvasSlot->SetPosition(FVector2D(-Margin.Right, -Margin.Bottom));
		break;

	case EUPMHUDPosition::Custom:
		// Custom position is set manually in blueprint
		break;
	}
}

void UUPMPerformanceHUDWidget::ConfigureVisibleElements_Implementation()
{
	if (!CurrentConfig)
	{
		return;
	}

	auto SetVisibilityForMode = [this](UWidget* Widget, bool bBasic, bool bDetailed, bool bFull)
	{
		if (!Widget)
		{
			return;
		}

		bool bShow = false;
		switch (CurrentMode)
		{
		case EUPMHUDDisplayMode::Disabled:
			bShow = false;
			break;
		case EUPMHUDDisplayMode::FPSOnly:
			bShow = false; // Only FPS is shown, handled separately
			break;
		case EUPMHUDDisplayMode::Basic:
			bShow = bBasic;
			break;
		case EUPMHUDDisplayMode::Detailed:
			bShow = bDetailed;
			break;
		case EUPMHUDDisplayMode::Full:
			bShow = bFull;
			break;
		case EUPMHUDDisplayMode::Custom:
			bShow = true; // Custom mode shows based on config
			break;
		}

		Widget->SetVisibility(bShow ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	};

	// FPS is always shown except when disabled
	if (FPSText)
	{
		FPSText->SetVisibility(CurrentMode != EUPMHUDDisplayMode::Disabled ?
			ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	}

	// Frame time: Basic and up
	SetVisibilityForMode(FrameTimeText, CurrentConfig->bShowFrameTime, true, true);

	// GPU/Thread times: Detailed and up
	SetVisibilityForMode(GPUTimeText, false, CurrentConfig->bShowGPUTime, true);
	SetVisibilityForMode(GameThreadText, false, CurrentConfig->bShowGameThreadTime, true);
	SetVisibilityForMode(RenderThreadText, false, CurrentConfig->bShowRenderThreadTime, true);

	// Memory: Detailed and up
	SetVisibilityForMode(MemoryText, false, CurrentConfig->bShowMemoryUsage, true);
	SetVisibilityForMode(VRAMText, false, CurrentConfig->bShowVRAMUsage, true);

	// Advanced stats: Full only
	SetVisibilityForMode(AverageFPSText, false, false, CurrentConfig->bShowAverageFPS);
	SetVisibilityForMode(MinMaxFPSText, false, false, CurrentConfig->bShowMinMaxFPS);
	SetVisibilityForMode(PercentilesText, false, false, CurrentConfig->bShowPercentiles);
}

FText UUPMPerformanceHUDWidget::FormatFPS(float FPS) const
{
	return FText::Format(NSLOCTEXT("UPM", "FPSFormat", "{0} FPS"), FText::AsNumber(FMath::RoundToInt(FPS)));
}

FText UUPMPerformanceHUDWidget::FormatTime(float TimeMs) const
{
	return FText::Format(NSLOCTEXT("UPM", "TimeFormat", "{0} ms"),
		FText::AsNumber(TimeMs, &FNumberFormattingOptions::DefaultWithGrouping().SetMaximumFractionalDigits(2)));
}

FText UUPMPerformanceHUDWidget::FormatMemory(int64 Bytes) const
{
	if (Bytes >= 1024 * 1024 * 1024) // GB
	{
		float GB = static_cast<float>(Bytes) / (1024.0f * 1024.0f * 1024.0f);
		return FText::Format(NSLOCTEXT("UPM", "MemoryGB", "{0} GB"),
			FText::AsNumber(GB, &FNumberFormattingOptions::DefaultWithGrouping().SetMaximumFractionalDigits(1)));
	}
	else // MB
	{
		float MB = static_cast<float>(Bytes) / (1024.0f * 1024.0f);
		return FText::Format(NSLOCTEXT("UPM", "MemoryMB", "{0} MB"),
			FText::AsNumber(FMath::RoundToInt(MB)));
	}
}
