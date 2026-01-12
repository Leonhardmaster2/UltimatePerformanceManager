// Copyright UPM Team. All Rights Reserved.

#include "UI/UPMLoadingScreenWidget.h"
#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Components/CanvasPanel.h"
#include "Engine/Texture2D.h"
#include "Kismet/KismetMathLibrary.h"

UUPMLoadingScreenWidget::UUPMLoadingScreenWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UUPMLoadingScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Load default configuration if set
	if (DefaultConfig.IsValid())
	{
		LoadConfiguration(DefaultConfig.LoadSynchronous());
	}

	// Start with fade in
	CurrentFadeAlpha = 0.0f;
	SetRenderOpacity(0.0f);
}

void UUPMLoadingScreenWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!bIsVisible)
	{
		return;
	}

	UpdateSpinner(InDeltaTime);
	UpdateTipRotation(InDeltaTime);
	UpdateFade(InDeltaTime);
}

void UUPMLoadingScreenWidget::LoadConfiguration(UUPMLoadingScreenConfig* Config)
{
	if (!Config)
	{
		return;
	}

	CurrentConfig = Config;

	// Load theme override if specified
	if (Config->ThemeOverride.IsValid())
	{
		SetTheme(Config->ThemeOverride.LoadSynchronous());
	}

	RefreshUI();

	// Set up progress bar colors
	if (ProgressBar)
	{
		ProgressBar->SetFillColorAndOpacity(Config->ProgressBarFillColor);
	}

	// Show initial background
	if (Config->bRandomizeBackground)
	{
		ShowRandomBackground();
	}
	else if (Config->BackgroundImages.Num() > 0 && Config->BackgroundImages[0].IsValid())
	{
		SetBackgroundImage(Config->BackgroundImages[0].LoadSynchronous());
	}

	// Show initial tip
	if (Config->bShowTips && Config->LoadingTips.Num() > 0)
	{
		ShowRandomTip();
	}
}

void UUPMLoadingScreenWidget::SetTheme(UUPMUIThemeData* Theme)
{
	CurrentTheme = Theme;

	// Apply theme colors
	if (Theme && ProgressBar)
	{
		ProgressBar->SetFillColorAndOpacity(Theme->PrimaryColor);
	}
}

void UUPMLoadingScreenWidget::StartLoading()
{
	bIsVisible = true;
	bLoadingComplete = false;
	bIsFadingOut = false;
	CurrentProgress = 0.0f;
	DisplayStartTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
	TipRotationTimer = 0.0f;
	CurrentFadeAlpha = 0.0f;

	SetVisibility(ESlateVisibility::Visible);
	SetProgress(0.0f);
}

void UUPMLoadingScreenWidget::SetProgress(float Progress)
{
	CurrentProgress = FMath::Clamp(Progress, 0.0f, 1.0f);

	if (ProgressBar && CurrentConfig && CurrentConfig->bShowProgressBar)
	{
		ProgressBar->SetPercent(CurrentProgress);
	}

	if (ProgressText && CurrentConfig && CurrentConfig->bShowPercentage)
	{
		int32 Percentage = FMath::RoundToInt(CurrentProgress * 100.0f);
		ProgressText->SetText(FText::FromString(FString::Printf(TEXT("%d%%"), Percentage)));
	}
}

void UUPMLoadingScreenWidget::SetStatusText(const FText& Text)
{
	if (StatusText)
	{
		StatusText->SetText(Text);
	}
}

void UUPMLoadingScreenWidget::FinishLoading()
{
	bLoadingComplete = true;
	SetProgress(1.0f);

	// Check if we can hide immediately or need to wait
	if (IsReadyToHide())
	{
		bIsFadingOut = true;
		OnLoadingComplete.Broadcast();
	}
}

bool UUPMLoadingScreenWidget::IsReadyToHide() const
{
	if (!bLoadingComplete)
	{
		return false;
	}

	float MinDisplayTime = CurrentConfig ? CurrentConfig->MinimumDisplayTime : 0.0f;
	float CurrentTime = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
	float ElapsedTime = CurrentTime - DisplayStartTime;

	return ElapsedTime >= MinDisplayTime;
}

void UUPMLoadingScreenWidget::ForceHide()
{
	bIsFadingOut = true;
	CurrentFadeAlpha = 0.0f;
	SetRenderOpacity(0.0f);
	SetVisibility(ESlateVisibility::Hidden);
	bIsVisible = false;
}

void UUPMLoadingScreenWidget::ShowNextTip()
{
	if (!CurrentConfig || CurrentConfig->LoadingTips.Num() == 0)
	{
		return;
	}

	CurrentTipIndex = (CurrentTipIndex + 1) % CurrentConfig->LoadingTips.Num();
	SetTip(CurrentConfig->LoadingTips[CurrentTipIndex]);
}

void UUPMLoadingScreenWidget::ShowRandomTip()
{
	if (!CurrentConfig || CurrentConfig->LoadingTips.Num() == 0)
	{
		return;
	}

	// Weight-based random selection
	float TotalWeight = 0.0f;
	for (const FUPMLoadingTip& Tip : CurrentConfig->LoadingTips)
	{
		TotalWeight += Tip.Weight;
	}

	float RandomValue = FMath::FRand() * TotalWeight;
	float CurrentWeight = 0.0f;

	for (int32 i = 0; i < CurrentConfig->LoadingTips.Num(); ++i)
	{
		CurrentWeight += CurrentConfig->LoadingTips[i].Weight;
		if (RandomValue <= CurrentWeight)
		{
			CurrentTipIndex = i;
			SetTip(CurrentConfig->LoadingTips[i]);
			return;
		}
	}

	// Fallback to first tip
	SetTip(CurrentConfig->LoadingTips[0]);
}

void UUPMLoadingScreenWidget::SetTip(const FUPMLoadingTip& Tip)
{
	if (TipText)
	{
		TipText->SetText(Tip.TipText);
	}

	if (TipImage)
	{
		if (Tip.TipImage.IsValid())
		{
			TipImage->SetBrushFromTexture(Tip.TipImage.LoadSynchronous());
			TipImage->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			TipImage->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void UUPMLoadingScreenWidget::SetBackgroundImage(UTexture2D* Image)
{
	if (BackgroundImage && Image)
	{
		BackgroundImage->SetBrushFromTexture(Image);
	}
}

void UUPMLoadingScreenWidget::ShowRandomBackground()
{
	if (!CurrentConfig || CurrentConfig->BackgroundImages.Num() == 0)
	{
		return;
	}

	int32 RandomIndex = FMath::RandRange(0, CurrentConfig->BackgroundImages.Num() - 1);

	if (CurrentConfig->BackgroundImages[RandomIndex].IsValid())
	{
		SetBackgroundImage(CurrentConfig->BackgroundImages[RandomIndex].LoadSynchronous());
	}
}

void UUPMLoadingScreenWidget::UpdateSpinner(float DeltaTime)
{
	if (!SpinnerImage || !CurrentConfig || !CurrentConfig->bShowSpinner)
	{
		return;
	}

	SpinnerRotation += CurrentConfig->SpinnerRotationSpeed * DeltaTime;
	SpinnerRotation = FMath::Fmod(SpinnerRotation, 360.0f);

	SpinnerImage->SetRenderTransformAngle(SpinnerRotation);
}

void UUPMLoadingScreenWidget::UpdateTipRotation(float DeltaTime)
{
	if (!CurrentConfig || !CurrentConfig->bShowTips || CurrentConfig->LoadingTips.Num() <= 1)
	{
		return;
	}

	TipRotationTimer += DeltaTime;

	if (TipRotationTimer >= CurrentConfig->TipRotationInterval)
	{
		TipRotationTimer = 0.0f;
		ShowNextTip();
	}
}

void UUPMLoadingScreenWidget::UpdateFade(float DeltaTime)
{
	float FadeDuration = CurrentConfig ? CurrentConfig->BackgroundFadeDuration : 0.3f;

	if (bIsFadingOut)
	{
		// Fade out
		CurrentFadeAlpha = FMath::Max(0.0f, CurrentFadeAlpha - DeltaTime / FadeDuration);
		SetRenderOpacity(CurrentFadeAlpha);

		if (CurrentFadeAlpha <= 0.0f)
		{
			SetVisibility(ESlateVisibility::Hidden);
			bIsVisible = false;
		}
	}
	else
	{
		// Fade in
		CurrentFadeAlpha = FMath::Min(1.0f, CurrentFadeAlpha + DeltaTime / FadeDuration);
		SetRenderOpacity(CurrentFadeAlpha);
	}

	// Check if we should start fading out
	if (bLoadingComplete && !bIsFadingOut && IsReadyToHide())
	{
		bIsFadingOut = true;
		OnLoadingComplete.Broadcast();
	}
}

void UUPMLoadingScreenWidget::RefreshUI()
{
	if (!CurrentConfig)
	{
		return;
	}

	// Progress bar visibility
	if (ProgressBar)
	{
		ProgressBar->SetVisibility(CurrentConfig->bShowProgressBar ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}

	// Percentage text visibility
	if (ProgressText)
	{
		ProgressText->SetVisibility(CurrentConfig->bShowPercentage ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}

	// Tip visibility
	if (TipText)
	{
		TipText->SetVisibility(CurrentConfig->bShowTips ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}

	// Spinner visibility and setup
	if (SpinnerImage)
	{
		SpinnerImage->SetVisibility(CurrentConfig->bShowSpinner ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);

		if (CurrentConfig->SpinnerImage.IsValid())
		{
			SpinnerImage->SetBrushFromTexture(CurrentConfig->SpinnerImage.LoadSynchronous());
		}

		// Set spinner size
		SpinnerImage->SetDesiredSizeOverride(FVector2D(CurrentConfig->SpinnerSize, CurrentConfig->SpinnerSize));
	}
}
