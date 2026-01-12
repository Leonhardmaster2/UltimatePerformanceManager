// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UPMConfirmationDialogWidget.generated.h"

class UUPMButtonBase;
class UCommonTextBlock;
class UImage;
class UBackgroundBlur;
class UUPMUIThemeData;

/**
 * Confirmation Dialog Type
 */
UENUM(BlueprintType)
enum class EUPMDialogType : uint8
{
	YesNo,
	YesNoCancel,
	OkCancel,
	Ok,
	Custom
};

/**
 * Dialog Result
 */
UENUM(BlueprintType)
enum class EUPMDialogResult : uint8
{
	Yes,
	No,
	Ok,
	Cancel,
	Custom1,
	Custom2,
	Custom3
};

/**
 * Dialog Icon Type
 */
UENUM(BlueprintType)
enum class EUPMDialogIcon : uint8
{
	None,
	Question,
	Warning,
	Error,
	Info,
	Success,
	Custom
};

/**
 * UPMConfirmationDialogWidget - Reusable confirmation/dialog popup
 *
 * Features:
 * - Multiple dialog types (Yes/No, Ok/Cancel, etc.)
 * - Customizable title, message, and buttons
 * - Icon support
 * - Background blur/darken
 * - Themeable styling
 * - Modal behavior
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class UPM_API UUPMConfirmationDialogWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UUPMConfirmationDialogWidget();

	// ==================== DISPLAY ====================

	/** Show a simple confirmation dialog */
	UFUNCTION(BlueprintCallable, Category = "UPM|Dialog")
	void ShowDialog(const FText& Title, const FText& Message, EUPMDialogType Type = EUPMDialogType::YesNo);

	/** Show dialog with custom buttons */
	UFUNCTION(BlueprintCallable, Category = "UPM|Dialog")
	void ShowCustomDialog(const FText& Title, const FText& Message, const TArray<FText>& ButtonLabels);

	/** Show dialog with icon */
	UFUNCTION(BlueprintCallable, Category = "UPM|Dialog")
	void ShowDialogWithIcon(const FText& Title, const FText& Message, EUPMDialogType Type, EUPMDialogIcon Icon);

	/** Close the dialog */
	UFUNCTION(BlueprintCallable, Category = "UPM|Dialog")
	void CloseDialog(EUPMDialogResult Result = EUPMDialogResult::Cancel);

	// ==================== CONFIGURATION ====================

	/** Set the theme */
	UFUNCTION(BlueprintCallable, Category = "UPM|Dialog")
	void SetTheme(UUPMUIThemeData* Theme);

	/** Set button labels */
	UFUNCTION(BlueprintCallable, Category = "UPM|Dialog")
	void SetButtonLabels(const FText& YesLabel, const FText& NoLabel, const FText& CancelLabel = FText::GetEmpty());

	/** Set custom icon */
	UFUNCTION(BlueprintCallable, Category = "UPM|Dialog")
	void SetCustomIcon(UTexture2D* IconTexture);

	// ==================== DELEGATES ====================

	/** Delegate broadcast when dialog is closed with a result */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogClosed, EUPMDialogResult, Result);
	UPROPERTY(BlueprintAssignable, Category = "UPM|Dialog")
	FOnDialogClosed OnDialogClosed;

	/** Delegate broadcast when Yes/Ok is pressed */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogConfirmed);
	UPROPERTY(BlueprintAssignable, Category = "UPM|Dialog")
	FOnDialogConfirmed OnDialogConfirmed;

	/** Delegate broadcast when No/Cancel is pressed */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogCancelled);
	UPROPERTY(BlueprintAssignable, Category = "UPM|Dialog")
	FOnDialogCancelled OnDialogCancelled;

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;
	virtual bool NativeOnHandleBackAction() override;

	/** Configure buttons for dialog type */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Dialog")
	void ConfigureButtons(EUPMDialogType Type);

	/** Set icon based on type */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Dialog")
	void ConfigureIcon(EUPMDialogIcon Icon);

	// Widget bindings
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> TitleText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> MessageText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> IconImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UBackgroundBlur> BackgroundBlurWidget;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> BackgroundDarkenImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> Button1;  // Yes/Ok/Custom1

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> Button2;  // No/Custom2

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> Button3;  // Cancel/Custom3

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSubclassOf<UUPMButtonBase> ButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	float BackgroundBlurStrength = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	float BackgroundDarkenAmount = 0.5f;

	// Default button labels
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	FText DefaultYesLabel = NSLOCTEXT("UPM", "Yes", "Yes");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	FText DefaultNoLabel = NSLOCTEXT("UPM", "No", "No");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	FText DefaultOkLabel = NSLOCTEXT("UPM", "Ok", "OK");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	FText DefaultCancelLabel = NSLOCTEXT("UPM", "Cancel", "Cancel");

	// Icon textures
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Icons")
	TSoftObjectPtr<UTexture2D> QuestionIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Icons")
	TSoftObjectPtr<UTexture2D> WarningIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Icons")
	TSoftObjectPtr<UTexture2D> ErrorIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Icons")
	TSoftObjectPtr<UTexture2D> InfoIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Icons")
	TSoftObjectPtr<UTexture2D> SuccessIcon;

	UPROPERTY()
	TObjectPtr<UUPMUIThemeData> CurrentTheme;

	UPROPERTY()
	EUPMDialogType CurrentType;

private:
	void BindButtons();
};
