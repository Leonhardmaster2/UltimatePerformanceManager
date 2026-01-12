// Copyright UPM Team. All Rights Reserved.

#include "UI/UPMConfirmationDialogWidget.h"
#include "UI/UPMButtonBase.h"
#include "UPMUITypes.h"
#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Components/BackgroundBlur.h"
#include "Engine/Texture2D.h"

UUPMConfirmationDialogWidget::UUPMConfirmationDialogWidget()
{
	bAutoActivate = false;
	bIsBackHandler = true;
	bIsBackActionDisplayedInActionBar = false;
	CurrentType = EUPMDialogType::YesNo;
}

void UUPMConfirmationDialogWidget::NativeConstruct()
{
	Super::NativeConstruct();
	BindButtons();

	// Initially hidden
	SetVisibility(ESlateVisibility::Collapsed);

	// Setup background blur
	if (BackgroundBlurWidget)
	{
		BackgroundBlurWidget->SetBlurStrength(BackgroundBlurStrength);
	}

	// Setup background darken
	if (BackgroundDarkenImage)
	{
		BackgroundDarkenImage->SetColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, BackgroundDarkenAmount));
	}
}

void UUPMConfirmationDialogWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

UWidget* UUPMConfirmationDialogWidget::NativeGetDesiredFocusTarget() const
{
	// Focus the No/Cancel button by default (safer option)
	if (Button2 && Button2->GetVisibility() == ESlateVisibility::Visible)
	{
		return Button2;
	}
	if (Button1 && Button1->GetVisibility() == ESlateVisibility::Visible)
	{
		return Button1;
	}

	return Super::NativeGetDesiredFocusTarget();
}

bool UUPMConfirmationDialogWidget::NativeOnHandleBackAction()
{
	// Cancel the dialog on back
	CloseDialog(EUPMDialogResult::Cancel);
	return true;
}

void UUPMConfirmationDialogWidget::ShowDialog(const FText& Title, const FText& Message, EUPMDialogType Type)
{
	ShowDialogWithIcon(Title, Message, Type, EUPMDialogIcon::None);
}

void UUPMConfirmationDialogWidget::ShowCustomDialog(const FText& Title, const FText& Message, const TArray<FText>& ButtonLabels)
{
	CurrentType = EUPMDialogType::Custom;

	if (TitleText)
	{
		TitleText->SetText(Title);
	}

	if (MessageText)
	{
		MessageText->SetText(Message);
	}

	// Configure custom buttons
	if (Button1 && ButtonLabels.Num() > 0)
	{
		Button1->SetButtonText(ButtonLabels[0]);
		Button1->SetVisibility(ESlateVisibility::Visible);
	}
	else if (Button1)
	{
		Button1->SetVisibility(ESlateVisibility::Collapsed);
	}

	if (Button2 && ButtonLabels.Num() > 1)
	{
		Button2->SetButtonText(ButtonLabels[1]);
		Button2->SetVisibility(ESlateVisibility::Visible);
	}
	else if (Button2)
	{
		Button2->SetVisibility(ESlateVisibility::Collapsed);
	}

	if (Button3 && ButtonLabels.Num() > 2)
	{
		Button3->SetButtonText(ButtonLabels[2]);
		Button3->SetVisibility(ESlateVisibility::Visible);
	}
	else if (Button3)
	{
		Button3->SetVisibility(ESlateVisibility::Collapsed);
	}

	// Hide icon
	if (IconImage)
	{
		IconImage->SetVisibility(ESlateVisibility::Collapsed);
	}

	// Show dialog
	SetVisibility(ESlateVisibility::Visible);
	ActivateWidget();
}

void UUPMConfirmationDialogWidget::ShowDialogWithIcon(const FText& Title, const FText& Message, EUPMDialogType Type, EUPMDialogIcon Icon)
{
	CurrentType = Type;

	if (TitleText)
	{
		TitleText->SetText(Title);
	}

	if (MessageText)
	{
		MessageText->SetText(Message);
	}

	ConfigureButtons(Type);
	ConfigureIcon(Icon);

	// Show dialog
	SetVisibility(ESlateVisibility::Visible);
	ActivateWidget();
}

void UUPMConfirmationDialogWidget::CloseDialog(EUPMDialogResult Result)
{
	DeactivateWidget();
	SetVisibility(ESlateVisibility::Collapsed);

	// Broadcast delegates
	OnDialogClosed.Broadcast(Result);

	if (Result == EUPMDialogResult::Yes || Result == EUPMDialogResult::Ok)
	{
		OnDialogConfirmed.Broadcast();
	}
	else if (Result == EUPMDialogResult::No || Result == EUPMDialogResult::Cancel)
	{
		OnDialogCancelled.Broadcast();
	}
}

void UUPMConfirmationDialogWidget::SetTheme(UUPMUIThemeData* Theme)
{
	CurrentTheme = Theme;

	// Apply theme to buttons
	if (Button1)
	{
		Button1->ApplyTheme(Theme);
	}
	if (Button2)
	{
		Button2->ApplyTheme(Theme);
	}
	if (Button3)
	{
		Button3->ApplyTheme(Theme);
	}

	// Apply theme to text
	if (TitleText && Theme)
	{
		TitleText->SetFont(Theme->HeaderTextStyle.Font);
		TitleText->SetColorAndOpacity(FSlateColor(Theme->HeaderTextStyle.Color));
	}

	if (MessageText && Theme)
	{
		MessageText->SetFont(Theme->BodyTextStyle.Font);
		MessageText->SetColorAndOpacity(FSlateColor(Theme->BodyTextStyle.Color));
	}

	// Apply theme background
	if (BackgroundBlurWidget && Theme)
	{
		BackgroundBlurWidget->SetBlurStrength(Theme->BackgroundBlur);
	}

	if (BackgroundDarkenImage && Theme)
	{
		BackgroundDarkenImage->SetColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, Theme->BackgroundDarken));
	}
}

void UUPMConfirmationDialogWidget::SetButtonLabels(const FText& YesLabel, const FText& NoLabel, const FText& CancelLabel)
{
	if (Button1)
	{
		Button1->SetButtonText(YesLabel);
	}
	if (Button2)
	{
		Button2->SetButtonText(NoLabel);
	}
	if (Button3 && !CancelLabel.IsEmpty())
	{
		Button3->SetButtonText(CancelLabel);
	}
}

void UUPMConfirmationDialogWidget::SetCustomIcon(UTexture2D* IconTexture)
{
	if (IconImage)
	{
		if (IconTexture)
		{
			IconImage->SetBrushFromTexture(IconTexture);
			IconImage->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			IconImage->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void UUPMConfirmationDialogWidget::ConfigureButtons_Implementation(EUPMDialogType Type)
{
	switch (Type)
	{
	case EUPMDialogType::YesNo:
		if (Button1)
		{
			Button1->SetButtonText(DefaultYesLabel);
			Button1->SetVisibility(ESlateVisibility::Visible);
		}
		if (Button2)
		{
			Button2->SetButtonText(DefaultNoLabel);
			Button2->SetVisibility(ESlateVisibility::Visible);
		}
		if (Button3)
		{
			Button3->SetVisibility(ESlateVisibility::Collapsed);
		}
		break;

	case EUPMDialogType::YesNoCancel:
		if (Button1)
		{
			Button1->SetButtonText(DefaultYesLabel);
			Button1->SetVisibility(ESlateVisibility::Visible);
		}
		if (Button2)
		{
			Button2->SetButtonText(DefaultNoLabel);
			Button2->SetVisibility(ESlateVisibility::Visible);
		}
		if (Button3)
		{
			Button3->SetButtonText(DefaultCancelLabel);
			Button3->SetVisibility(ESlateVisibility::Visible);
		}
		break;

	case EUPMDialogType::OkCancel:
		if (Button1)
		{
			Button1->SetButtonText(DefaultOkLabel);
			Button1->SetVisibility(ESlateVisibility::Visible);
		}
		if (Button2)
		{
			Button2->SetButtonText(DefaultCancelLabel);
			Button2->SetVisibility(ESlateVisibility::Visible);
		}
		if (Button3)
		{
			Button3->SetVisibility(ESlateVisibility::Collapsed);
		}
		break;

	case EUPMDialogType::Ok:
		if (Button1)
		{
			Button1->SetButtonText(DefaultOkLabel);
			Button1->SetVisibility(ESlateVisibility::Visible);
		}
		if (Button2)
		{
			Button2->SetVisibility(ESlateVisibility::Collapsed);
		}
		if (Button3)
		{
			Button3->SetVisibility(ESlateVisibility::Collapsed);
		}
		break;

	case EUPMDialogType::Custom:
		// Custom buttons are handled in ShowCustomDialog
		break;
	}
}

void UUPMConfirmationDialogWidget::ConfigureIcon_Implementation(EUPMDialogIcon Icon)
{
	if (!IconImage)
	{
		return;
	}

	TSoftObjectPtr<UTexture2D>* IconTexturePtr = nullptr;

	switch (Icon)
	{
	case EUPMDialogIcon::None:
		IconImage->SetVisibility(ESlateVisibility::Collapsed);
		return;

	case EUPMDialogIcon::Question:
		IconTexturePtr = &QuestionIcon;
		break;

	case EUPMDialogIcon::Warning:
		IconTexturePtr = &WarningIcon;
		break;

	case EUPMDialogIcon::Error:
		IconTexturePtr = &ErrorIcon;
		break;

	case EUPMDialogIcon::Info:
		IconTexturePtr = &InfoIcon;
		break;

	case EUPMDialogIcon::Success:
		IconTexturePtr = &SuccessIcon;
		break;

	case EUPMDialogIcon::Custom:
		// Custom icon is set via SetCustomIcon
		return;
	}

	if (IconTexturePtr && IconTexturePtr->IsValid())
	{
		IconImage->SetBrushFromTexture(IconTexturePtr->LoadSynchronous());
		IconImage->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		IconImage->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UUPMConfirmationDialogWidget::BindButtons()
{
	if (Button1)
	{
		Button1->OnClicked().AddWeakLambda(this, [this]()
		{
			switch (CurrentType)
			{
			case EUPMDialogType::YesNo:
			case EUPMDialogType::YesNoCancel:
				CloseDialog(EUPMDialogResult::Yes);
				break;
			case EUPMDialogType::OkCancel:
			case EUPMDialogType::Ok:
				CloseDialog(EUPMDialogResult::Ok);
				break;
			case EUPMDialogType::Custom:
				CloseDialog(EUPMDialogResult::Custom1);
				break;
			}
		});
	}

	if (Button2)
	{
		Button2->OnClicked().AddWeakLambda(this, [this]()
		{
			switch (CurrentType)
			{
			case EUPMDialogType::YesNo:
			case EUPMDialogType::YesNoCancel:
				CloseDialog(EUPMDialogResult::No);
				break;
			case EUPMDialogType::OkCancel:
				CloseDialog(EUPMDialogResult::Cancel);
				break;
			case EUPMDialogType::Custom:
				CloseDialog(EUPMDialogResult::Custom2);
				break;
			default:
				CloseDialog(EUPMDialogResult::Cancel);
				break;
			}
		});
	}

	if (Button3)
	{
		Button3->OnClicked().AddWeakLambda(this, [this]()
		{
			if (CurrentType == EUPMDialogType::Custom)
			{
				CloseDialog(EUPMDialogResult::Custom3);
			}
			else
			{
				CloseDialog(EUPMDialogResult::Cancel);
			}
		});
	}
}
