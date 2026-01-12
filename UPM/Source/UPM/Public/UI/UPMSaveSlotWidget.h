// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UPMSaveSlotWidget.generated.h"

class UUPMButtonBase;
class UCommonTextBlock;
class UImage;
class UVerticalBox;
class UScrollBox;
class UUPMUIThemeData;
struct FUPMSaveSlotInfo;

/**
 * Save Slot Widget Mode
 */
UENUM(BlueprintType)
enum class EUPMSaveSlotMode : uint8
{
	Save,
	Load
};

/**
 * Save Slot Item Data
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMSaveSlotItemData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	FString SlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	FDateTime SaveTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	FTimespan PlayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	FString LevelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	TSoftObjectPtr<UTexture2D> Thumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	bool bIsEmpty = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	bool bIsAutoSave = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot")
	bool bIsQuickSave = false;
};

/**
 * Save Slot Menu Configuration Data Asset
 */
UCLASS(BlueprintType)
class UPM_API UUPMSaveSlotMenuConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// ==================== GENERAL ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|General")
	FText SaveMenuTitle = NSLOCTEXT("UPM", "SaveGameTitle", "Save Game");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|General")
	FText LoadMenuTitle = NSLOCTEXT("UPM", "LoadGameTitle", "Load Game");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|General")
	int32 MaxSaveSlots = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|General")
	bool bShowAutoSaves = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|General")
	bool bShowQuickSaves = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|General")
	bool bAllowNewSlot = true;

	// ==================== DISPLAY ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Display")
	bool bShowThumbnails = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Display")
	FVector2D ThumbnailSize = FVector2D(160.0f, 90.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Display")
	bool bShowPlayTime = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Display")
	bool bShowLevelName = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Display")
	bool bShowSaveDate = true;

	// ==================== CONFIRMATION ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Confirmation")
	bool bConfirmOverwrite = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Confirmation")
	FText OverwriteConfirmMessage = NSLOCTEXT("UPM", "OverwriteConfirm", "Overwrite existing save?");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Confirmation")
	bool bConfirmDelete = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Confirmation")
	FText DeleteConfirmMessage = NSLOCTEXT("UPM", "DeleteConfirm", "Delete this save?");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Confirmation")
	bool bConfirmLoad = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Confirmation")
	FText LoadConfirmMessage = NSLOCTEXT("UPM", "LoadConfirm", "Load this save? Unsaved progress will be lost.");

	// ==================== EMPTY SLOT ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|EmptySlot")
	FText EmptySlotText = NSLOCTEXT("UPM", "EmptySlot", "Empty Slot");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|EmptySlot")
	FText NewSaveText = NSLOCTEXT("UPM", "NewSave", "New Save");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|EmptySlot")
	TSoftObjectPtr<UTexture2D> EmptySlotThumbnail;

	// ==================== THEME ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SaveSlot|Theme")
	TSoftObjectPtr<UUPMUIThemeData> ThemeOverride;
};

/**
 * UPMSaveSlotWidget - Save/Load game slot selection screen
 *
 * Features:
 * - Configurable via UPMSaveSlotMenuConfig data asset
 * - Save and Load modes
 * - Thumbnail display
 * - Save slot metadata (date, playtime, level)
 * - Overwrite/Delete confirmation
 * - Empty slot creation
 * - Themeable styling
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class UPM_API UUPMSaveSlotWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UUPMSaveSlotWidget();

	// ==================== CONFIGURATION ====================

	/** Load configuration from data asset */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void LoadConfiguration(UUPMSaveSlotMenuConfig* Config);

	/** Get current configuration */
	UFUNCTION(BlueprintPure, Category = "UPM|SaveSlot")
	UUPMSaveSlotMenuConfig* GetConfiguration() const { return CurrentConfig; }

	/** Set theme */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void SetTheme(UUPMUIThemeData* Theme);

	// ==================== MODE ====================

	/** Set the widget mode (Save or Load) */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void SetMode(EUPMSaveSlotMode Mode);

	/** Get current mode */
	UFUNCTION(BlueprintPure, Category = "UPM|SaveSlot")
	EUPMSaveSlotMode GetMode() const { return CurrentMode; }

	/** Open as save menu */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void OpenForSave();

	/** Open as load menu */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void OpenForLoad();

	// ==================== SLOTS ====================

	/** Refresh the list of save slots */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void RefreshSlots();

	/** Get all available slots */
	UFUNCTION(BlueprintPure, Category = "UPM|SaveSlot")
	TArray<FUPMSaveSlotItemData> GetSlots() const { return SaveSlots; }

	/** Get selected slot */
	UFUNCTION(BlueprintPure, Category = "UPM|SaveSlot")
	FUPMSaveSlotItemData GetSelectedSlot() const;

	// ==================== ACTIONS ====================

	/** Save to selected slot */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void SaveToSelectedSlot();

	/** Load from selected slot */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void LoadFromSelectedSlot();

	/** Delete selected slot */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void DeleteSelectedSlot();

	/** Close the menu */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveSlot")
	void CloseMenu();

	// ==================== DELEGATES ====================

	/** Delegate broadcast when a slot is selected */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotSelected, const FUPMSaveSlotItemData&, SlotData);
	UPROPERTY(BlueprintAssignable, Category = "UPM|SaveSlot")
	FOnSlotSelected OnSlotSelected;

	/** Delegate broadcast when save is complete */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSaveComplete, bool, bSuccess, const FString&, SlotName);
	UPROPERTY(BlueprintAssignable, Category = "UPM|SaveSlot")
	FOnSaveComplete OnSaveComplete;

	/** Delegate broadcast when load is complete */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadComplete, bool, bSuccess, const FString&, SlotName);
	UPROPERTY(BlueprintAssignable, Category = "UPM|SaveSlot")
	FOnLoadComplete OnLoadComplete;

	/** Delegate broadcast when a slot is deleted */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotDeleted, const FString&, SlotName);
	UPROPERTY(BlueprintAssignable, Category = "UPM|SaveSlot")
	FOnSlotDeleted OnSlotDeleted;

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;
	virtual bool NativeOnHandleBackAction() override;

	/** Generate slot widgets */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|SaveSlot")
	void GenerateSlotWidgets();

	/** Create a single slot widget */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|SaveSlot")
	UUserWidget* CreateSlotWidget(const FUPMSaveSlotItemData& SlotData, int32 SlotIndex);

	/** Handle slot clicked */
	UFUNCTION()
	void HandleSlotClicked(int32 SlotIndex);

	/** Handle slot double clicked */
	UFUNCTION()
	void HandleSlotDoubleClicked(int32 SlotIndex);

	/** Show confirmation dialog */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|SaveSlot")
	void ShowConfirmation(const FText& Message, int32 PendingSlotIndex, bool bIsSave);

	/** Handle confirmation result */
	UFUNCTION()
	void HandleConfirmationResult(bool bConfirmed);

	// Widget bindings
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> TitleText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UScrollBox> SlotScrollBox;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UVerticalBox> SlotContainer;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> ActionButton;  // Save/Load button

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> DeleteButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> BackButton;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSoftObjectPtr<UUPMSaveSlotMenuConfig> DefaultConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSubclassOf<UUserWidget> SlotWidgetClass;

	UPROPERTY()
	TObjectPtr<UUPMSaveSlotMenuConfig> CurrentConfig;

	UPROPERTY()
	TObjectPtr<UUPMUIThemeData> CurrentTheme;

	// State
	UPROPERTY()
	EUPMSaveSlotMode CurrentMode = EUPMSaveSlotMode::Load;

	UPROPERTY()
	TArray<FUPMSaveSlotItemData> SaveSlots;

	UPROPERTY()
	int32 SelectedSlotIndex = -1;

	UPROPERTY()
	int32 PendingActionSlotIndex = -1;

	UPROPERTY()
	bool bPendingActionIsSave = false;

	// Generated widgets
	UPROPERTY()
	TArray<TObjectPtr<UUserWidget>> SlotWidgets;
};
