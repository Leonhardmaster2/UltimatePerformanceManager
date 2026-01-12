// Copyright UPM Team. All Rights Reserved.

#include "UI/UPMSaveSlotWidget.h"
#include "UI/UPMButtonBase.h"
#include "UPMSaveSubsystem.h"
#include "UPMUITypes.h"
#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Components/VerticalBox.h"
#include "Components/ScrollBox.h"
#include "Engine/Texture2D.h"
#include "Blueprint/UserWidget.h"

UUPMSaveSlotWidget::UUPMSaveSlotWidget()
{
	bAutoActivate = false;
	bIsBackHandler = true;
	bIsBackActionDisplayedInActionBar = false;
}

void UUPMSaveSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Load default configuration if set
	if (DefaultConfig.IsValid())
	{
		LoadConfiguration(DefaultConfig.LoadSynchronous());
	}

	// Bind action buttons
	if (ActionButton)
	{
		ActionButton->OnClicked().AddWeakLambda(this, [this]()
		{
			if (CurrentMode == EUPMSaveSlotMode::Save)
			{
				SaveToSelectedSlot();
			}
			else
			{
				LoadFromSelectedSlot();
			}
		});
	}

	if (DeleteButton)
	{
		DeleteButton->OnClicked().AddWeakLambda(this, [this]()
		{
			DeleteSelectedSlot();
		});
	}

	if (BackButton)
	{
		BackButton->OnClicked().AddWeakLambda(this, [this]()
		{
			CloseMenu();
		});
	}

	// Initially hidden
	SetVisibility(ESlateVisibility::Collapsed);
}

void UUPMSaveSlotWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

UWidget* UUPMSaveSlotWidget::NativeGetDesiredFocusTarget() const
{
	// Focus first slot if available
	if (SlotWidgets.Num() > 0 && SlotWidgets[0])
	{
		return SlotWidgets[0];
	}

	if (BackButton)
	{
		return BackButton;
	}

	return Super::NativeGetDesiredFocusTarget();
}

bool UUPMSaveSlotWidget::NativeOnHandleBackAction()
{
	CloseMenu();
	return true;
}

void UUPMSaveSlotWidget::LoadConfiguration(UUPMSaveSlotMenuConfig* Config)
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
}

void UUPMSaveSlotWidget::SetTheme(UUPMUIThemeData* Theme)
{
	CurrentTheme = Theme;

	// Apply theme to buttons
	if (ActionButton)
	{
		ActionButton->ApplyTheme(Theme);
	}
	if (DeleteButton)
	{
		DeleteButton->ApplyTheme(Theme);
	}
	if (BackButton)
	{
		BackButton->ApplyTheme(Theme);
	}

	// Apply theme to title
	if (TitleText && Theme)
	{
		TitleText->SetFont(Theme->TitleTextStyle.Font);
		TitleText->SetColorAndOpacity(FSlateColor(Theme->TitleTextStyle.Color));
	}
}

void UUPMSaveSlotWidget::SetMode(EUPMSaveSlotMode Mode)
{
	CurrentMode = Mode;

	// Update title
	if (TitleText && CurrentConfig)
	{
		TitleText->SetText(Mode == EUPMSaveSlotMode::Save ?
			CurrentConfig->SaveMenuTitle : CurrentConfig->LoadMenuTitle);
	}

	// Update action button text
	if (ActionButton)
	{
		ActionButton->SetButtonText(Mode == EUPMSaveSlotMode::Save ?
			NSLOCTEXT("UPM", "Save", "Save") : NSLOCTEXT("UPM", "Load", "Load"));
	}

	RefreshSlots();
}

void UUPMSaveSlotWidget::OpenForSave()
{
	SetMode(EUPMSaveSlotMode::Save);
	SetVisibility(ESlateVisibility::Visible);
	ActivateWidget();
}

void UUPMSaveSlotWidget::OpenForLoad()
{
	SetMode(EUPMSaveSlotMode::Load);
	SetVisibility(ESlateVisibility::Visible);
	ActivateWidget();
}

void UUPMSaveSlotWidget::RefreshSlots()
{
	SaveSlots.Empty();

	UUPMSaveSubsystem* SaveSubsystem = UUPMSaveSubsystem::Get(this);
	if (!SaveSubsystem)
	{
		return;
	}

	// Get all save slots
	TArray<FUPMSaveSlotInfo> AllSlots = SaveSubsystem->GetAllSaveSlots();

	// Convert to our item data format
	for (const FUPMSaveSlotInfo& SlotInfo : AllSlots)
	{
		FUPMSaveSlotItemData ItemData;
		ItemData.SlotName = SlotInfo.SlotName;
		ItemData.DisplayName = FText::FromString(SlotInfo.DisplayName);
		ItemData.SaveTime = SlotInfo.SaveTime;
		ItemData.PlayTime = SlotInfo.TotalPlayTime;
		ItemData.LevelName = SlotInfo.LevelName;
		ItemData.bIsEmpty = false;
		ItemData.bIsAutoSave = SlotInfo.SlotName.StartsWith(TEXT("AutoSave"));
		ItemData.bIsQuickSave = SlotInfo.SlotName.StartsWith(TEXT("QuickSave"));

		// Filter based on config
		if (!CurrentConfig)
		{
			SaveSlots.Add(ItemData);
		}
		else if ((ItemData.bIsAutoSave && CurrentConfig->bShowAutoSaves) ||
		         (ItemData.bIsQuickSave && CurrentConfig->bShowQuickSaves) ||
		         (!ItemData.bIsAutoSave && !ItemData.bIsQuickSave))
		{
			SaveSlots.Add(ItemData);
		}
	}

	// Add empty slots for save mode
	if (CurrentMode == EUPMSaveSlotMode::Save && CurrentConfig && CurrentConfig->bAllowNewSlot)
	{
		int32 EmptySlotsToAdd = CurrentConfig->MaxSaveSlots - SaveSlots.Num();
		for (int32 i = 0; i < EmptySlotsToAdd && i < CurrentConfig->MaxSaveSlots; ++i)
		{
			FUPMSaveSlotItemData EmptySlot;
			EmptySlot.SlotName = FString::Printf(TEXT("Slot_%d"), SaveSlots.Num() + 1);
			EmptySlot.DisplayName = CurrentConfig->EmptySlotText;
			EmptySlot.bIsEmpty = true;
			SaveSlots.Add(EmptySlot);
		}
	}

	// Sort by save time (most recent first)
	SaveSlots.Sort([](const FUPMSaveSlotItemData& A, const FUPMSaveSlotItemData& B)
	{
		if (A.bIsEmpty && !B.bIsEmpty) return false;
		if (!A.bIsEmpty && B.bIsEmpty) return true;
		return A.SaveTime > B.SaveTime;
	});

	GenerateSlotWidgets();
}

FUPMSaveSlotItemData UUPMSaveSlotWidget::GetSelectedSlot() const
{
	if (SelectedSlotIndex >= 0 && SelectedSlotIndex < SaveSlots.Num())
	{
		return SaveSlots[SelectedSlotIndex];
	}
	return FUPMSaveSlotItemData();
}

void UUPMSaveSlotWidget::SaveToSelectedSlot()
{
	if (SelectedSlotIndex < 0 || SelectedSlotIndex >= SaveSlots.Num())
	{
		return;
	}

	const FUPMSaveSlotItemData& SlotData = SaveSlots[SelectedSlotIndex];

	// Check for overwrite confirmation
	if (!SlotData.bIsEmpty && CurrentConfig && CurrentConfig->bConfirmOverwrite)
	{
		ShowConfirmation(CurrentConfig->OverwriteConfirmMessage, SelectedSlotIndex, true);
		return;
	}

	// Perform save
	UUPMSaveSubsystem* SaveSubsystem = UUPMSaveSubsystem::Get(this);
	if (SaveSubsystem)
	{
		bool bSuccess = SaveSubsystem->SaveGame(SlotData.SlotName);
		OnSaveComplete.Broadcast(bSuccess, SlotData.SlotName);

		if (bSuccess)
		{
			RefreshSlots();
		}
	}
}

void UUPMSaveSlotWidget::LoadFromSelectedSlot()
{
	if (SelectedSlotIndex < 0 || SelectedSlotIndex >= SaveSlots.Num())
	{
		return;
	}

	const FUPMSaveSlotItemData& SlotData = SaveSlots[SelectedSlotIndex];

	if (SlotData.bIsEmpty)
	{
		return; // Can't load empty slot
	}

	// Check for load confirmation
	if (CurrentConfig && CurrentConfig->bConfirmLoad)
	{
		ShowConfirmation(CurrentConfig->LoadConfirmMessage, SelectedSlotIndex, false);
		return;
	}

	// Perform load
	UUPMSaveSubsystem* SaveSubsystem = UUPMSaveSubsystem::Get(this);
	if (SaveSubsystem)
	{
		bool bSuccess = SaveSubsystem->LoadGame(SlotData.SlotName);
		OnLoadComplete.Broadcast(bSuccess, SlotData.SlotName);

		if (bSuccess)
		{
			CloseMenu();
		}
	}
}

void UUPMSaveSlotWidget::DeleteSelectedSlot()
{
	if (SelectedSlotIndex < 0 || SelectedSlotIndex >= SaveSlots.Num())
	{
		return;
	}

	const FUPMSaveSlotItemData& SlotData = SaveSlots[SelectedSlotIndex];

	if (SlotData.bIsEmpty)
	{
		return; // Can't delete empty slot
	}

	// Check for delete confirmation
	if (CurrentConfig && CurrentConfig->bConfirmDelete)
	{
		ShowConfirmation(CurrentConfig->DeleteConfirmMessage, SelectedSlotIndex, false);
		return;
	}

	// Perform delete
	UUPMSaveSubsystem* SaveSubsystem = UUPMSaveSubsystem::Get(this);
	if (SaveSubsystem)
	{
		SaveSubsystem->DeleteSave(SlotData.SlotName);
		OnSlotDeleted.Broadcast(SlotData.SlotName);
		RefreshSlots();
	}
}

void UUPMSaveSlotWidget::CloseMenu()
{
	DeactivateWidget();
	SetVisibility(ESlateVisibility::Collapsed);
	SelectedSlotIndex = -1;
}

void UUPMSaveSlotWidget::GenerateSlotWidgets_Implementation()
{
	if (!SlotContainer)
	{
		return;
	}

	// Clear existing widgets
	SlotContainer->ClearChildren();
	SlotWidgets.Empty();

	// Create widgets for each slot
	for (int32 i = 0; i < SaveSlots.Num(); ++i)
	{
		UUserWidget* SlotWidget = CreateSlotWidget(SaveSlots[i], i);
		if (SlotWidget)
		{
			SlotContainer->AddChild(SlotWidget);
			SlotWidgets.Add(SlotWidget);
		}
	}

	// Update action button state
	if (ActionButton)
	{
		ActionButton->SetIsEnabled(SelectedSlotIndex >= 0);
	}
	if (DeleteButton)
	{
		bool bCanDelete = SelectedSlotIndex >= 0 && SelectedSlotIndex < SaveSlots.Num() &&
		                  !SaveSlots[SelectedSlotIndex].bIsEmpty;
		DeleteButton->SetIsEnabled(bCanDelete);
	}
}

UUserWidget* UUPMSaveSlotWidget::CreateSlotWidget_Implementation(const FUPMSaveSlotItemData& SlotData, int32 SlotIndex)
{
	// Override in Blueprint to create custom slot widgets
	// This is a base implementation that creates a simple button

	if (!ButtonClass)
	{
		return nullptr;
	}

	// For simplicity, we use the button base class here
	// In a real implementation, you'd use SlotWidgetClass
	return nullptr;
}

void UUPMSaveSlotWidget::HandleSlotClicked(int32 SlotIndex)
{
	SelectedSlotIndex = SlotIndex;

	if (SlotIndex >= 0 && SlotIndex < SaveSlots.Num())
	{
		OnSlotSelected.Broadcast(SaveSlots[SlotIndex]);
	}

	// Update button states
	if (ActionButton)
	{
		bool bCanAct = SelectedSlotIndex >= 0;
		if (CurrentMode == EUPMSaveSlotMode::Load && SaveSlots[SlotIndex].bIsEmpty)
		{
			bCanAct = false;
		}
		ActionButton->SetIsEnabled(bCanAct);
	}

	if (DeleteButton)
	{
		bool bCanDelete = SelectedSlotIndex >= 0 && SelectedSlotIndex < SaveSlots.Num() &&
		                  !SaveSlots[SelectedSlotIndex].bIsEmpty;
		DeleteButton->SetIsEnabled(bCanDelete);
	}
}

void UUPMSaveSlotWidget::HandleSlotDoubleClicked(int32 SlotIndex)
{
	SelectedSlotIndex = SlotIndex;

	if (CurrentMode == EUPMSaveSlotMode::Save)
	{
		SaveToSelectedSlot();
	}
	else
	{
		LoadFromSelectedSlot();
	}
}

void UUPMSaveSlotWidget::ShowConfirmation_Implementation(const FText& Message, int32 PendingSlotIndex, bool bIsSave)
{
	PendingActionSlotIndex = PendingSlotIndex;
	bPendingActionIsSave = bIsSave;

	// Override in Blueprint to show actual confirmation dialog
	// For now, just execute the action
	HandleConfirmationResult(true);
}

void UUPMSaveSlotWidget::HandleConfirmationResult(bool bConfirmed)
{
	if (!bConfirmed || PendingActionSlotIndex < 0)
	{
		PendingActionSlotIndex = -1;
		return;
	}

	int32 SlotIndex = PendingActionSlotIndex;
	PendingActionSlotIndex = -1;

	if (SlotIndex < 0 || SlotIndex >= SaveSlots.Num())
	{
		return;
	}

	const FUPMSaveSlotItemData& SlotData = SaveSlots[SlotIndex];
	UUPMSaveSubsystem* SaveSubsystem = UUPMSaveSubsystem::Get(this);

	if (!SaveSubsystem)
	{
		return;
	}

	if (bPendingActionIsSave)
	{
		bool bSuccess = SaveSubsystem->SaveGame(SlotData.SlotName);
		OnSaveComplete.Broadcast(bSuccess, SlotData.SlotName);
		if (bSuccess)
		{
			RefreshSlots();
		}
	}
	else
	{
		bool bSuccess = SaveSubsystem->LoadGame(SlotData.SlotName);
		OnLoadComplete.Broadcast(bSuccess, SlotData.SlotName);
		if (bSuccess)
		{
			CloseMenu();
		}
	}
}
