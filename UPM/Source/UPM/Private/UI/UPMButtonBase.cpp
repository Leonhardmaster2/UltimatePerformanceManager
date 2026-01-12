// Copyright UPM Team. All Rights Reserved.

#include "UI/UPMButtonBase.h"
#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Texture2D.h"

UUPMButtonBase::UUPMButtonBase()
{
	// Default colors
	CurrentColors.Normal = FLinearColor(0.1f, 0.1f, 0.15f, 0.9f);
	CurrentColors.Hovered = FLinearColor(0.15f, 0.15f, 0.25f, 0.95f);
	CurrentColors.Pressed = FLinearColor(0.05f, 0.05f, 0.1f, 1.0f);
	CurrentColors.Disabled = FLinearColor(0.1f, 0.1f, 0.1f, 0.5f);
	CurrentColors.Selected = FLinearColor(0.2f, 0.3f, 0.5f, 0.95f);
}

void UUPMButtonBase::NativeConstruct()
{
	Super::NativeConstruct();

	// Initialize text if bound
	if (TextBlock && !ButtonText.IsEmpty())
	{
		TextBlock->SetText(ButtonText);
	}

	// Initialize icon visibility
	if (IconImage)
	{
		IconImage->SetVisibility(bShowIcon ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}

	UpdateVisualState();
}

void UUPMButtonBase::SetButtonText(const FText& Text)
{
	ButtonText = Text;

	if (TextBlock)
	{
		TextBlock->SetText(Text);
	}
}

void UUPMButtonBase::SetButtonIcon(UTexture2D* Icon)
{
	if (IconImage && Icon)
	{
		IconImage->SetBrushFromTexture(Icon);
		bShowIcon = true;
		IconImage->SetVisibility(ESlateVisibility::Visible);
	}
}

void UUPMButtonBase::SetShowIcon(bool bShow)
{
	bShowIcon = bShow;

	if (IconImage)
	{
		IconImage->SetVisibility(bShow ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}
}

void UUPMButtonBase::ApplyTheme(UUPMUIThemeData* Theme)
{
	if (!Theme)
	{
		return;
	}

	CurrentColors = Theme->PrimaryButtonColors;
	CurrentTextStyle = Theme->ButtonTextStyle;
	HoverScale = Theme->ButtonHoverScale;
	AnimationDuration = Theme->TransitionDuration;

	// Apply sounds
	if (Theme->UISounds.ButtonHover.IsValid())
	{
		HoverSound = Theme->UISounds.ButtonHover.LoadSynchronous();
	}
	if (Theme->UISounds.ButtonClick.IsValid())
	{
		ClickSound = Theme->UISounds.ButtonClick.LoadSynchronous();
	}

	UpdateVisualState();
}

void UUPMButtonBase::SetButtonColors(const FUPMButtonColors& Colors)
{
	CurrentColors = Colors;
	UpdateVisualState();
}

void UUPMButtonBase::SetTextStyle(const FUPMTextStyle& Style)
{
	CurrentTextStyle = Style;

	if (TextBlock)
	{
		TextBlock->SetFont(Style.Font);
		TextBlock->SetColorAndOpacity(FSlateColor(Style.Color));
	}
}

void UUPMButtonBase::NativeOnHovered()
{
	Super::NativeOnHovered();
	PlayUISound(HoverSound);
	UpdateVisualState();
}

void UUPMButtonBase::NativeOnUnhovered()
{
	Super::NativeOnUnhovered();
	UpdateVisualState();
}

void UUPMButtonBase::NativeOnPressed()
{
	Super::NativeOnPressed();
	PlayUISound(ClickSound);
	UpdateVisualState();
}

void UUPMButtonBase::NativeOnReleased()
{
	Super::NativeOnReleased();
	UpdateVisualState();
}

void UUPMButtonBase::NativeOnSelected(bool bBroadcast)
{
	Super::NativeOnSelected(bBroadcast);
	UpdateVisualState();
}

void UUPMButtonBase::NativeOnDeselected(bool bBroadcast)
{
	Super::NativeOnDeselected(bBroadcast);
	UpdateVisualState();
}

void UUPMButtonBase::NativeOnCurrentTextStyleChanged()
{
	Super::NativeOnCurrentTextStyleChanged();
	UpdateVisualState();
}

void UUPMButtonBase::PlayUISound(USoundBase* Sound)
{
	if (Sound)
	{
		UGameplayStatics::PlaySound2D(this, Sound);
	}
}

void UUPMButtonBase::UpdateVisualState_Implementation()
{
	// Default implementation - subclasses can override
	// This would typically update background color, apply animations, etc.

	if (!GetIsEnabled())
	{
		// Apply disabled state
		SetColorAndOpacity(FLinearColor(CurrentColors.Disabled.R, CurrentColors.Disabled.G, CurrentColors.Disabled.B, CurrentColors.Disabled.A));
	}
	else if (IsPressed())
	{
		// Apply pressed state
		SetRenderScale(FVector2D(0.98f, 0.98f));
	}
	else if (IsHovered())
	{
		// Apply hovered state
		SetRenderScale(FVector2D(HoverScale, HoverScale));
	}
	else if (GetSelected())
	{
		// Apply selected state
		SetRenderScale(FVector2D(1.0f, 1.0f));
	}
	else
	{
		// Apply normal state
		SetRenderScale(FVector2D(1.0f, 1.0f));
		SetColorAndOpacity(FLinearColor::White);
	}
}
