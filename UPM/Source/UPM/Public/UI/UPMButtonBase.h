// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "UPMUITypes.h"
#include "UPMButtonBase.generated.h"

class UCommonTextBlock;
class UImage;

/**
 * UPMButtonBase - Base button class using CommonUI
 *
 * Features:
 * - Themeable styling from data assets
 * - Sound effects on interaction
 * - Icon support
 * - Animated transitions
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class UPM_API UUPMButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()

public:
	UUPMButtonBase();

	// ==================== BUTTON SETUP ====================

	/** Set button text */
	UFUNCTION(BlueprintCallable, Category = "UPM|Button")
	void SetButtonText(const FText& Text);

	/** Get button text */
	UFUNCTION(BlueprintPure, Category = "UPM|Button")
	FText GetButtonText() const { return ButtonText; }

	/** Set button icon */
	UFUNCTION(BlueprintCallable, Category = "UPM|Button")
	void SetButtonIcon(UTexture2D* Icon);

	/** Set whether to show the icon */
	UFUNCTION(BlueprintCallable, Category = "UPM|Button")
	void SetShowIcon(bool bShow);

	// ==================== THEMING ====================

	/** Apply theme from data asset */
	UFUNCTION(BlueprintCallable, Category = "UPM|Button")
	void ApplyTheme(UUPMUIThemeData* Theme);

	/** Set custom button colors */
	UFUNCTION(BlueprintCallable, Category = "UPM|Button")
	void SetButtonColors(const FUPMButtonColors& Colors);

	/** Set custom text style */
	UFUNCTION(BlueprintCallable, Category = "UPM|Button")
	void SetTextStyle(const FUPMTextStyle& Style);

	// ==================== SOUNDS ====================

	/** Set hover sound */
	UFUNCTION(BlueprintCallable, Category = "UPM|Button")
	void SetHoverSound(USoundBase* Sound) { HoverSound = Sound; }

	/** Set click sound */
	UFUNCTION(BlueprintCallable, Category = "UPM|Button")
	void SetClickSound(USoundBase* Sound) { ClickSound = Sound; }

protected:
	virtual void NativeConstruct() override;
	virtual void NativeOnHovered() override;
	virtual void NativeOnUnhovered() override;
	virtual void NativeOnPressed() override;
	virtual void NativeOnReleased() override;
	virtual void NativeOnSelected(bool bBroadcast) override;
	virtual void NativeOnDeselected(bool bBroadcast) override;
	virtual void NativeOnCurrentTextStyleChanged() override;

	/** Play UI sound */
	void PlayUISound(USoundBase* Sound);

	/** Update visual state based on current button state */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Button")
	void UpdateVisualState();

	// Widget bindings (override in Blueprint/C++)
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> TextBlock;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> IconImage;

	// Button configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	FText ButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	bool bShowIcon = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	TSoftObjectPtr<UTexture2D> ButtonIcon;

	// Theme data
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme")
	FUPMButtonColors CurrentColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme")
	FUPMTextStyle CurrentTextStyle;

	// Sound effects
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TObjectPtr<USoundBase> HoverSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TObjectPtr<USoundBase> ClickSound;

	// Animation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	float HoverScale = 1.05f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	float AnimationDuration = 0.15f;
};
