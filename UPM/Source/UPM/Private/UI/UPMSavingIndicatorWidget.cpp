// Copyright UPM Team. All Rights Reserved.

#include "UI/UPMSavingIndicatorWidget.h"
#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Components/CanvasPanelSlot.h"
#include "Animation/WidgetAnimation.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Texture2D.h"
#include "Sound/SoundBase.h"
#include "TimerManager.h"
#include "Blueprint/WidgetLayoutLibrary.h"

UUPMSavingIndicatorWidget::UUPMSavingIndicatorWidget()
{
	bAutoActivate = false;
	SetVisibility(ESlateVisibility::Collapsed);
}

void UUPMSavingIndicatorWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Load default configuration if set
	if (DefaultConfig.IsValid())
	{
		LoadConfiguration(DefaultConfig.LoadSynchronous());
	}

	// Initialize as hidden
	SetVisibility(ESlateVisibility::Collapsed);
}

void UUPMSavingIndicatorWidget::NativeDestruct()
{
	CancelPendingHide();
	Super::NativeDestruct();
}

void UUPMSavingIndicatorWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	// Update spinner rotation if saving
	if (bIsSaving && SpinnerImage && CurrentConfig)
	{
		SpinnerRotation += CurrentConfig->SpinnerRotationSpeed * InDeltaTime;
		if (SpinnerRotation >= 360.0f)
		{
			SpinnerRotation -= 360.0f;
		}

		SpinnerImage->SetRenderTransformAngle(SpinnerRotation);
	}
}

void UUPMSavingIndicatorWidget::LoadConfiguration(UUPMSavingIndicatorConfig* Config)
{
	if (!Config)
	{
		return;
	}

	CurrentConfig = Config;
	ApplyPosition();
	UpdateVisuals();
}

void UUPMSavingIndicatorWidget::ShowSaving(bool bIsAutoSave)
{
	if (!CurrentConfig)
	{
		return;
	}

	CancelPendingHide();

	bIsShowing = true;
	bIsSaving = true;
	bShowSuccess = false;
	bShowFailure = false;
	CurrentProgress = 0.0f;
	ShowStartTime = GetWorld()->GetTimeSeconds();

	// Set text
	if (StatusText)
	{
		StatusText->SetText(bIsAutoSave ? CurrentConfig->AutoSavingText : CurrentConfig->SavingText);
	}

	// Set icon
	if (IconImage && CurrentConfig->SavingIcon.IsValid())
	{
		IconImage->SetBrushFromTexture(CurrentConfig->SavingIcon.LoadSynchronous());
		IconImage->SetVisibility(ESlateVisibility::Visible);
	}

	// Show/hide spinner based on style
	if (SpinnerImage)
	{
		bool bShowSpinner = (CurrentConfig->Style == EUPMSavingIndicatorStyle::Spinner ||
		                     CurrentConfig->Style == EUPMSavingIndicatorStyle::Custom);
		SpinnerImage->SetVisibility(bShowSpinner ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);

		if (bShowSpinner && CurrentConfig->SpinnerImage.IsValid())
		{
			SpinnerImage->SetBrushFromTexture(CurrentConfig->SpinnerImage.LoadSynchronous());
		}
	}

	// Show/hide progress bar
	if (SaveProgressBar)
	{
		bool bShowProgress = (CurrentConfig->Style == EUPMSavingIndicatorStyle::ProgressBar ||
		                      CurrentConfig->Style == EUPMSavingIndicatorStyle::IconWithProgress) &&
		                     CurrentConfig->bShowProgress;
		SaveProgressBar->SetVisibility(bShowProgress ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
		SaveProgressBar->SetPercent(0.0f);
	}

	// Apply progress bar colors
	if (SaveProgressBar)
	{
		SaveProgressBar->SetFillColorAndOpacity(CurrentConfig->ProgressFillColor);
	}

	// Show widget
	SetVisibility(ESlateVisibility::HitTestInvisible);
	ActivateWidget();

	// Play fade in animation
	PlayFadeAnimation(true);

	// Play sound
	if (CurrentConfig->SavingSound.IsValid())
	{
		UGameplayStatics::PlaySound2D(this, CurrentConfig->SavingSound.LoadSynchronous());
	}

	OnSaveIndicatorShown.Broadcast();
}

void UUPMSavingIndicatorWidget::UpdateProgress(float Progress)
{
	CurrentProgress = FMath::Clamp(Progress, 0.0f, 1.0f);

	if (SaveProgressBar)
	{
		SaveProgressBar->SetPercent(CurrentProgress);
	}
}

void UUPMSavingIndicatorWidget::ShowSuccess()
{
	if (!CurrentConfig)
	{
		return;
	}

	bIsSaving = false;
	bShowSuccess = true;
	bShowFailure = false;
	CurrentProgress = 1.0f;

	// Update text
	if (StatusText)
	{
		StatusText->SetText(CurrentConfig->SaveCompleteText);
	}

	// Update icon
	if (IconImage && CurrentConfig->SuccessIcon.IsValid())
	{
		IconImage->SetBrushFromTexture(CurrentConfig->SuccessIcon.LoadSynchronous());
	}

	// Hide spinner
	if (SpinnerImage)
	{
		SpinnerImage->SetVisibility(ESlateVisibility::Collapsed);
	}

	// Update progress bar color
	if (SaveProgressBar)
	{
		SaveProgressBar->SetPercent(1.0f);
		SaveProgressBar->SetFillColorAndOpacity(CurrentConfig->SuccessColor);
	}

	// Play success sound
	if (CurrentConfig->SuccessSound.IsValid())
	{
		UGameplayStatics::PlaySound2D(this, CurrentConfig->SuccessSound.LoadSynchronous());
	}

	// Calculate display time ensuring minimum is met
	float ElapsedTime = GetWorld()->GetTimeSeconds() - ShowStartTime;
	float RemainingMinTime = FMath::Max(0.0f, CurrentConfig->MinimumDisplayTime - ElapsedTime);
	float DisplayTime = RemainingMinTime + CurrentConfig->SuccessDisplayDuration;

	ScheduleAutoHide(DisplayTime);
}

void UUPMSavingIndicatorWidget::ShowFailure(const FText& ErrorMessage)
{
	if (!CurrentConfig)
	{
		return;
	}

	bIsSaving = false;
	bShowSuccess = false;
	bShowFailure = true;

	// Update text
	if (StatusText)
	{
		if (!ErrorMessage.IsEmpty())
		{
			StatusText->SetText(ErrorMessage);
		}
		else
		{
			StatusText->SetText(CurrentConfig->SaveFailedText);
		}
	}

	// Update icon
	if (IconImage && CurrentConfig->FailureIcon.IsValid())
	{
		IconImage->SetBrushFromTexture(CurrentConfig->FailureIcon.LoadSynchronous());
	}

	// Hide spinner
	if (SpinnerImage)
	{
		SpinnerImage->SetVisibility(ESlateVisibility::Collapsed);
	}

	// Update progress bar color
	if (SaveProgressBar)
	{
		SaveProgressBar->SetFillColorAndOpacity(CurrentConfig->FailureColor);
	}

	// Play failure sound
	if (CurrentConfig->FailureSound.IsValid())
	{
		UGameplayStatics::PlaySound2D(this, CurrentConfig->FailureSound.LoadSynchronous());
	}

	// Calculate display time ensuring minimum is met
	float ElapsedTime = GetWorld()->GetTimeSeconds() - ShowStartTime;
	float RemainingMinTime = FMath::Max(0.0f, CurrentConfig->MinimumDisplayTime - ElapsedTime);
	float DisplayTime = RemainingMinTime + CurrentConfig->FailureDisplayDuration;

	ScheduleAutoHide(DisplayTime);
}

void UUPMSavingIndicatorWidget::HideIndicator()
{
	CancelPendingHide();

	// Play fade out animation
	PlayFadeAnimation(false);

	// After fade, hide completely
	FTimerHandle HideFinalHandle;
	float FadeOutTime = CurrentConfig ? CurrentConfig->FadeOutDuration : 0.3f;
	GetWorld()->GetTimerManager().SetTimer(HideFinalHandle, FTimerDelegate::CreateWeakLambda(this, [this]()
	{
		bIsShowing = false;
		bIsSaving = false;
		bShowSuccess = false;
		bShowFailure = false;
		SetVisibility(ESlateVisibility::Collapsed);
		DeactivateWidget();
		OnSaveIndicatorHidden.Broadcast();
	}), FadeOutTime, false);
}

void UUPMSavingIndicatorWidget::ApplyPosition_Implementation()
{
	if (!CurrentConfig)
	{
		return;
	}

	// Position is typically handled in the widget blueprint via anchors/alignment
	// This function allows for runtime repositioning

	UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Slot);
	if (!CanvasSlot)
	{
		return;
	}

	FMargin Margin = CurrentConfig->ScreenMargin;

	switch (CurrentConfig->Position)
	{
	case EUPMSavingIndicatorPosition::TopLeft:
		CanvasSlot->SetAnchors(FAnchors(0.0f, 0.0f, 0.0f, 0.0f));
		CanvasSlot->SetAlignment(FVector2D(0.0f, 0.0f));
		CanvasSlot->SetPosition(FVector2D(Margin.Left, Margin.Top));
		break;

	case EUPMSavingIndicatorPosition::TopRight:
		CanvasSlot->SetAnchors(FAnchors(1.0f, 0.0f, 1.0f, 0.0f));
		CanvasSlot->SetAlignment(FVector2D(1.0f, 0.0f));
		CanvasSlot->SetPosition(FVector2D(-Margin.Right, Margin.Top));
		break;

	case EUPMSavingIndicatorPosition::BottomLeft:
		CanvasSlot->SetAnchors(FAnchors(0.0f, 1.0f, 0.0f, 1.0f));
		CanvasSlot->SetAlignment(FVector2D(0.0f, 1.0f));
		CanvasSlot->SetPosition(FVector2D(Margin.Left, -Margin.Bottom));
		break;

	case EUPMSavingIndicatorPosition::BottomRight:
		CanvasSlot->SetAnchors(FAnchors(1.0f, 1.0f, 1.0f, 1.0f));
		CanvasSlot->SetAlignment(FVector2D(1.0f, 1.0f));
		CanvasSlot->SetPosition(FVector2D(-Margin.Right, -Margin.Bottom));
		break;

	case EUPMSavingIndicatorPosition::Center:
		CanvasSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
		CanvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
		CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
		break;

	case EUPMSavingIndicatorPosition::Custom:
		CanvasSlot->SetAnchors(FAnchors(CurrentConfig->CustomPosition.X, CurrentConfig->CustomPosition.Y,
		                                CurrentConfig->CustomPosition.X, CurrentConfig->CustomPosition.Y));
		CanvasSlot->SetAlignment(CurrentConfig->CustomPosition);
		CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
		break;
	}
}

void UUPMSavingIndicatorWidget::UpdateVisuals_Implementation()
{
	if (!CurrentConfig)
	{
		return;
	}

	// Apply icon size
	if (IconImage)
	{
		IconImage->SetDesiredSizeOverride(FVector2D(CurrentConfig->IconSize, CurrentConfig->IconSize));
	}

	// Apply progress bar sizing
	if (SaveProgressBar)
	{
		// Set progress bar colors
		SaveProgressBar->SetFillColorAndOpacity(CurrentConfig->ProgressFillColor);
	}

	// Apply background darken
	if (BackgroundImage)
	{
		if (CurrentConfig->bDarkenBackground)
		{
			BackgroundImage->SetVisibility(ESlateVisibility::Visible);
			BackgroundImage->SetColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, CurrentConfig->BackgroundDarkenAmount));
		}
		else
		{
			BackgroundImage->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void UUPMSavingIndicatorWidget::PlayFadeAnimation(bool bFadeIn)
{
	if (bFadeIn && FadeInAnimation)
	{
		PlayAnimation(FadeInAnimation);
	}
	else if (!bFadeIn && FadeOutAnimation)
	{
		PlayAnimation(FadeOutAnimation);
	}
	else
	{
		// Fallback: manual opacity change
		float TargetOpacity = bFadeIn ? 1.0f : 0.0f;
		SetRenderOpacity(TargetOpacity);
	}
}

void UUPMSavingIndicatorWidget::ScheduleAutoHide(float Delay)
{
	CancelPendingHide();

	GetWorld()->GetTimerManager().SetTimer(HideTimerHandle, FTimerDelegate::CreateWeakLambda(this, [this]()
	{
		HideIndicator();
	}), Delay, false);
}

void UUPMSavingIndicatorWidget::CancelPendingHide()
{
	if (HideTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(HideTimerHandle);
	}
}
