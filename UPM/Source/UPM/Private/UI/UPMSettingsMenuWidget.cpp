// Copyright UPM Team. All Rights Reserved.

#include "UI/UPMSettingsMenuWidget.h"
#include "UI/UPMButtonBase.h"
#include "UPMCore.h"
#include "UPMGraphicsManager.h"
#include "UPMExtendedSettings.h"
#include "UPMNvidiaManager.h"
#include "CommonTextBlock.h"
#include "Components/WidgetSwitcher.h"
#include "Components/VerticalBox.h"
#include "Components/ScrollBox.h"

UUPMSettingsMenuWidget::UUPMSettingsMenuWidget()
{
	bAutoActivate = true;
}

void UUPMSettingsMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Load default configuration if set
	if (DefaultConfig.IsValid())
	{
		LoadConfiguration(DefaultConfig.LoadSynchronous());
	}

	// Bind button events
	if (ApplyButton)
	{
		ApplyButton->OnClicked().AddUObject(this, &UUPMSettingsMenuWidget::HandleApplyClicked);
	}

	if (ResetButton)
	{
		ResetButton->OnClicked().AddUObject(this, &UUPMSettingsMenuWidget::HandleResetClicked);
	}

	if (BackButton)
	{
		BackButton->OnClicked().AddUObject(this, &UUPMSettingsMenuWidget::HandleBackClicked);
	}
}

UWidget* UUPMSettingsMenuWidget::NativeGetDesiredFocusTarget() const
{
	// Focus first category tab
	for (const auto& Pair : CategoryTabs)
	{
		if (Pair.Value)
		{
			return Pair.Value;
		}
	}

	return Super::NativeGetDesiredFocusTarget();
}

bool UUPMSettingsMenuWidget::NativeOnHandleBackAction()
{
	HandleBackClicked();
	return true;
}

void UUPMSettingsMenuWidget::LoadConfiguration(UUPMSettingsMenuConfig* Config)
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
	GenerateCategoryTabs();

	// Show first category by default
	if (Config->Categories.Num() > 0)
	{
		ShowCategory(Config->Categories[0].CategoryID);
	}
}

void UUPMSettingsMenuWidget::SetTheme(UUPMUIThemeData* Theme)
{
	CurrentTheme = Theme;

	// Apply theme to buttons
	if (ApplyButton)
	{
		ApplyButton->ApplyTheme(Theme);
	}
	if (ResetButton)
	{
		ResetButton->ApplyTheme(Theme);
	}
	if (BackButton)
	{
		BackButton->ApplyTheme(Theme);
	}

	// Apply to category tabs
	for (auto& Pair : CategoryTabs)
	{
		if (Pair.Value)
		{
			Pair.Value->ApplyTheme(Theme);
		}
	}
}

void UUPMSettingsMenuWidget::ShowCategory(FName CategoryID)
{
	if (CategoryID == CurrentCategoryID)
	{
		return;
	}

	CurrentCategoryID = CategoryID;

	// Update tab selection
	for (auto& Pair : CategoryTabs)
	{
		if (Pair.Value)
		{
			Pair.Value->SetIsSelected(Pair.Key == CategoryID);
		}
	}

	// Get or create container
	UVerticalBox* Container = GetOrCreateCategoryContainer(CategoryID);

	// Switch to the container
	if (ContentSwitcher && Container)
	{
		ContentSwitcher->SetActiveWidget(Container);
	}

	// Populate if empty
	if (Container && Container->GetChildrenCount() == 0)
	{
		// Populate based on category
		if (CategoryID == FName("Graphics"))
		{
			PopulateGraphicsSettings(Container);
		}
		else if (CategoryID == FName("Display"))
		{
			PopulateDisplaySettings(Container);
		}
		else if (CategoryID == FName("Audio"))
		{
			PopulateAudioSettings(Container);
		}
		else if (CategoryID == FName("Input") || CategoryID == FName("Controls"))
		{
			PopulateInputSettings(Container);
		}
		else if (CategoryID == FName("Accessibility"))
		{
			PopulateAccessibilitySettings(Container);
		}
		else if (CategoryID == FName("NVIDIA") || CategoryID == FName("Performance"))
		{
			PopulateNvidiaSettings(Container);
		}
	}
}

void UUPMSettingsMenuWidget::ApplySettings()
{
	// Apply through UPM Core
	if (UUPMCore* Core = UUPMCore::Get(this))
	{
		Core->ApplyAllSettings();
		Core->SaveAllSettings();
	}

	bHasUnsavedChanges = false;
}

void UUPMSettingsMenuWidget::ResetToDefaults()
{
	// Reset through UPM Core
	if (UUPMCore* Core = UUPMCore::Get(this))
	{
		Core->ResetToDefaults();
	}

	bHasUnsavedChanges = true;
}

void UUPMSettingsMenuWidget::ResetCategoryToDefaults()
{
	// Reset specific category based on CurrentCategoryID
	// Implementation would call appropriate reset function on each subsystem
	MarkSettingsChanged();
}

void UUPMSettingsMenuWidget::RevertChanges()
{
	// Reload settings from disk
	if (UUPMCore* Core = UUPMCore::Get(this))
	{
		Core->LoadAllSettings();
	}

	bHasUnsavedChanges = false;
}

void UUPMSettingsMenuWidget::CloseMenu()
{
	if (bHasUnsavedChanges && CurrentConfig && CurrentConfig->bWarnOnUnsavedChanges)
	{
		ShowUnsavedChangesWarning();
	}
	else
	{
		DeactivateWidget();
	}
}

bool UUPMSettingsMenuWidget::HasUnsavedChanges() const
{
	if (UUPMCore* Core = UUPMCore::Get(this))
	{
		return Core->HasUnsavedChanges() || bHasUnsavedChanges;
	}
	return bHasUnsavedChanges;
}

void UUPMSettingsMenuWidget::MarkSettingsChanged()
{
	bHasUnsavedChanges = true;

	if (UUPMCore* Core = UUPMCore::Get(this))
	{
		Core->MarkSettingsChanged();
	}
}

void UUPMSettingsMenuWidget::PopulateGraphicsSettings_Implementation(UVerticalBox* Container)
{
	// Default implementation - override in Blueprint for custom layouts
	// This would create sliders/dropdowns for quality settings
}

void UUPMSettingsMenuWidget::PopulateDisplaySettings_Implementation(UVerticalBox* Container)
{
	// Default implementation - override in Blueprint
	// Resolution, fullscreen mode, etc.
}

void UUPMSettingsMenuWidget::PopulateAudioSettings_Implementation(UVerticalBox* Container)
{
	// Default implementation - override in Blueprint
	// Volume sliders for each channel
}

void UUPMSettingsMenuWidget::PopulateInputSettings_Implementation(UVerticalBox* Container)
{
	// Default implementation - override in Blueprint
	// Sensitivity sliders, inversion toggles, rebinding
}

void UUPMSettingsMenuWidget::PopulateAccessibilitySettings_Implementation(UVerticalBox* Container)
{
	// Default implementation - override in Blueprint
	// Subtitles, colorblind modes, etc.
}

void UUPMSettingsMenuWidget::PopulateNvidiaSettings_Implementation(UVerticalBox* Container)
{
	// Default implementation - override in Blueprint
	// DLSS, Frame Gen, Reflex settings
}

void UUPMSettingsMenuWidget::GenerateCategoryTabs_Implementation()
{
	if (!CategoryTabContainer || !CurrentConfig || !TabButtonClass)
	{
		return;
	}

	// Clear existing tabs
	CategoryTabContainer->ClearChildren();
	CategoryTabs.Empty();

	// Sort categories
	TArray<FUPMSettingsCategoryConfig> SortedCategories = CurrentConfig->Categories;
	SortedCategories.Sort([](const FUPMSettingsCategoryConfig& A, const FUPMSettingsCategoryConfig& B)
	{
		return A.SortOrder < B.SortOrder;
	});

	// Create tabs
	for (const FUPMSettingsCategoryConfig& Category : SortedCategories)
	{
		// Check visibility settings
		if (Category.CategoryID == FName("Graphics") && !CurrentConfig->bShowGraphicsSettings)
		{
			continue;
		}
		if (Category.CategoryID == FName("Display") && !CurrentConfig->bShowDisplaySettings)
		{
			continue;
		}
		if (Category.CategoryID == FName("Audio") && !CurrentConfig->bShowAudioSettings)
		{
			continue;
		}
		if ((Category.CategoryID == FName("Input") || Category.CategoryID == FName("Controls")) && !CurrentConfig->bShowInputSettings)
		{
			continue;
		}
		if (Category.CategoryID == FName("Accessibility") && !CurrentConfig->bShowAccessibilitySettings)
		{
			continue;
		}
		if ((Category.CategoryID == FName("NVIDIA") || Category.CategoryID == FName("Performance")) && !CurrentConfig->bShowNvidiaSettings)
		{
			continue;
		}

		// Create tab button
		UUPMButtonBase* TabButton = CreateWidget<UUPMButtonBase>(this, TabButtonClass);
		if (TabButton)
		{
			TabButton->SetButtonText(Category.CategoryName);

			if (Category.CategoryIcon.IsValid())
			{
				TabButton->SetButtonIcon(Category.CategoryIcon.LoadSynchronous());
			}

			if (CurrentTheme)
			{
				TabButton->ApplyTheme(CurrentTheme);
			}

			// Bind click
			FName CategoryID = Category.CategoryID;
			TabButton->OnClicked().AddWeakLambda(this, [this, CategoryID]()
			{
				HandleCategoryClicked(CategoryID);
			});

			CategoryTabContainer->AddChild(TabButton);
			CategoryTabs.Add(Category.CategoryID, TabButton);
		}
	}
}

UVerticalBox* UUPMSettingsMenuWidget::GetOrCreateCategoryContainer(FName CategoryID)
{
	// Check if already exists
	if (UVerticalBox** ExistingContainer = CategoryContainers.Find(CategoryID))
	{
		return *ExistingContainer;
	}

	// Create new container
	UVerticalBox* NewContainer = NewObject<UVerticalBox>(this);

	// Add to switcher
	if (ContentSwitcher)
	{
		ContentSwitcher->AddChild(NewContainer);
	}

	CategoryContainers.Add(CategoryID, NewContainer);
	return NewContainer;
}

void UUPMSettingsMenuWidget::HandleCategoryClicked(FName CategoryID)
{
	ShowCategory(CategoryID);
}

void UUPMSettingsMenuWidget::HandleApplyClicked()
{
	ApplySettings();
}

void UUPMSettingsMenuWidget::HandleResetClicked()
{
	if (CurrentConfig && CurrentConfig->bConfirmOnReset)
	{
		// Show confirmation dialog
		// For now, just reset
		ResetToDefaults();
	}
	else
	{
		ResetToDefaults();
	}
}

void UUPMSettingsMenuWidget::HandleBackClicked()
{
	CloseMenu();
}

void UUPMSettingsMenuWidget::ShowUnsavedChangesWarning_Implementation()
{
	// Default implementation - override in Blueprint to show a proper dialog
	// For now, just wait for confirmation
	bWaitingForDiscardConfirmation = true;
}

void UUPMSettingsMenuWidget::ConfirmDiscardChanges()
{
	bWaitingForDiscardConfirmation = false;
	RevertChanges();
	DeactivateWidget();
}

void UUPMSettingsMenuWidget::RefreshUI()
{
	if (!CurrentConfig)
	{
		return;
	}

	// Set title
	if (TitleText)
	{
		TitleText->SetText(CurrentConfig->MenuTitle);
	}

	// Button visibility
	if (ApplyButton)
	{
		ApplyButton->SetVisibility(CurrentConfig->bShowApplyButton ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}

	if (ResetButton)
	{
		ResetButton->SetVisibility(CurrentConfig->bShowResetButton ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}
}
