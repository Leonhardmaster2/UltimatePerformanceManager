// Copyright UPM Team. All Rights Reserved.

#include "UI/UPMPauseMenuWidget.h"
#include "UI/UPMButtonBase.h"
#include "UPMSaveSubsystem.h"
#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Components/VerticalBox.h"
#include "Components/BackgroundBlur.h"
#include "Components/Overlay.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Texture2D.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "TimerManager.h"

UUPMPauseMenuWidget::UUPMPauseMenuWidget()
{
	bAutoActivate = false;
	bIsBackHandler = true;
	bIsBackActionDisplayedInActionBar = false;
}

void UUPMPauseMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Load default configuration if set
	if (DefaultConfig.IsValid())
	{
		LoadConfiguration(DefaultConfig.LoadSynchronous());
	}

	// Hide confirmation overlay initially
	if (ConfirmationOverlay)
	{
		ConfirmationOverlay->SetVisibility(ESlateVisibility::Collapsed);
	}

	// Bind confirmation buttons
	if (ConfirmYesButton)
	{
		ConfirmYesButton->OnClicked().AddWeakLambda(this, [this]()
		{
			HandleConfirmationResult(true, PendingConfirmAction);
		});
	}

	if (ConfirmNoButton)
	{
		ConfirmNoButton->OnClicked().AddWeakLambda(this, [this]()
		{
			HandleConfirmationResult(false, PendingConfirmAction);
		});
	}

	UpdateButtonStates();
}

void UUPMPauseMenuWidget::NativeDestruct()
{
	// Ensure game is unpaused when widget is destroyed
	if (bIsGamePaused)
	{
		ApplyPauseState(false);
	}

	Super::NativeDestruct();
}

UWidget* UUPMPauseMenuWidget::NativeGetDesiredFocusTarget() const
{
	// Focus the first enabled button
	for (UUPMButtonBase* Button : MenuButtons)
	{
		if (Button && Button->GetIsEnabled())
		{
			return Button;
		}
	}

	return Super::NativeGetDesiredFocusTarget();
}

bool UUPMPauseMenuWidget::NativeOnHandleBackAction()
{
	// If confirmation is showing, cancel it
	if (ConfirmationOverlay && ConfirmationOverlay->GetVisibility() == ESlateVisibility::Visible)
	{
		HandleConfirmationResult(false, PendingConfirmAction);
		return true;
	}

	// Otherwise, resume the game
	OnResumePressed();
	return true;
}

void UUPMPauseMenuWidget::LoadConfiguration(UUPMPauseMenuConfig* Config)
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
	GenerateMenuButtons();
}

void UUPMPauseMenuWidget::SetTheme(UUPMUIThemeData* Theme)
{
	CurrentTheme = Theme;

	// Apply theme to existing buttons
	for (UUPMButtonBase* Button : MenuButtons)
	{
		if (Button)
		{
			Button->ApplyTheme(Theme);
		}
	}

	// Apply theme to confirmation buttons
	if (ConfirmYesButton && Theme)
	{
		ConfirmYesButton->ApplyTheme(Theme);
	}
	if (ConfirmNoButton && Theme)
	{
		ConfirmNoButton->ApplyTheme(Theme);
	}

	// Apply background blur/darken from theme
	if (BackgroundBlurWidget && Theme)
	{
		BackgroundBlurWidget->SetBlurStrength(Theme->BackgroundBlur);
	}

	if (BackgroundDarkenImage && Theme)
	{
		BackgroundDarkenImage->SetColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, Theme->BackgroundDarken));
	}

	// Apply text styles
	if (TitleText && Theme)
	{
		TitleText->SetFont(Theme->TitleTextStyle.Font);
		TitleText->SetColorAndOpacity(FSlateColor(Theme->TitleTextStyle.Color));
	}
}

void UUPMPauseMenuWidget::TogglePause()
{
	if (IsVisible())
	{
		HidePauseMenu();
	}
	else
	{
		ShowPauseMenu();
	}
}

void UUPMPauseMenuWidget::ShowPauseMenu()
{
	SetVisibility(ESlateVisibility::Visible);
	ActivateWidget();

	// Apply pause if configured
	if (CurrentConfig && CurrentConfig->bPauseGame)
	{
		ApplyPauseState(true);
	}

	// Update button states
	UpdateButtonStates();

	// Play button animations if configured
	if (CurrentConfig && CurrentConfig->bAnimateButtons)
	{
		PlayButtonAnimations();
	}

	OnPauseMenuShown.Broadcast();
}

void UUPMPauseMenuWidget::HidePauseMenu()
{
	DeactivateWidget();
	SetVisibility(ESlateVisibility::Collapsed);

	// Unpause if we paused the game
	if (bIsGamePaused)
	{
		ApplyPauseState(false);
	}

	OnPauseMenuHidden.Broadcast();
}

void UUPMPauseMenuWidget::OnResumePressed_Implementation()
{
	if (CurrentConfig && CurrentConfig->bCloseOnResume)
	{
		HidePauseMenu();
	}
}

void UUPMPauseMenuWidget::OnSettingsPressed_Implementation()
{
	// Override in Blueprint to show settings menu
}

void UUPMPauseMenuWidget::OnSaveGamePressed_Implementation()
{
	// Quick save the game
	if (UUPMSaveSubsystem* SaveSubsystem = UUPMSaveSubsystem::Get(this))
	{
		SaveSubsystem->QuickSave();
	}
}

void UUPMPauseMenuWidget::OnLoadGamePressed_Implementation()
{
	// Override in Blueprint to show load game screen
}

void UUPMPauseMenuWidget::OnMainMenuPressed_Implementation()
{
	// Check if confirmation is required
	if (CurrentConfig && CurrentConfig->bConfirmMainMenu)
	{
		ShowConfirmation(CurrentConfig->MainMenuConfirmMessage, EUPMPauseMenuAction::MainMenu);
	}
	else
	{
		HandleConfirmationResult(true, EUPMPauseMenuAction::MainMenu);
	}
}

void UUPMPauseMenuWidget::OnRestartCheckpointPressed_Implementation()
{
	// Override in Blueprint to restart from checkpoint
}

void UUPMPauseMenuWidget::OnRestartLevelPressed_Implementation()
{
	// Restart current level
	UWorld* World = GetWorld();
	if (World)
	{
		// Unpause first
		ApplyPauseState(false);

		FString CurrentLevel = World->GetMapName();
		UGameplayStatics::OpenLevel(World, FName(*CurrentLevel));
	}
}

void UUPMPauseMenuWidget::OnPhotoModePressed_Implementation()
{
	// Override in Blueprint to open photo mode
}

void UUPMPauseMenuWidget::OnQuitPressed_Implementation()
{
	// Check if confirmation is required
	if (CurrentConfig && CurrentConfig->bConfirmQuit)
	{
		ShowConfirmation(CurrentConfig->QuitConfirmMessage, EUPMPauseMenuAction::Quit);
	}
	else
	{
		HandleConfirmationResult(true, EUPMPauseMenuAction::Quit);
	}
}

void UUPMPauseMenuWidget::OnCustomButtonPressed_Implementation(FName ActionName)
{
	// Override in Blueprint to handle custom actions
}

void UUPMPauseMenuWidget::ShowConfirmation_Implementation(FText Message, EUPMPauseMenuAction Action)
{
	PendingConfirmAction = Action;

	if (ConfirmationText)
	{
		ConfirmationText->SetText(Message);
	}

	if (ConfirmationOverlay)
	{
		ConfirmationOverlay->SetVisibility(ESlateVisibility::Visible);
	}

	// Focus confirm button
	if (ConfirmNoButton)
	{
		ConfirmNoButton->SetFocus();
	}
}

void UUPMPauseMenuWidget::HandleConfirmationResult(bool bConfirmed, EUPMPauseMenuAction Action)
{
	// Hide confirmation overlay
	if (ConfirmationOverlay)
	{
		ConfirmationOverlay->SetVisibility(ESlateVisibility::Collapsed);
	}

	if (!bConfirmed)
	{
		return;
	}

	// Execute the confirmed action
	switch (Action)
	{
	case EUPMPauseMenuAction::MainMenu:
		{
			// Unpause first
			ApplyPauseState(false);

			// Broadcast delegate
			OnReturnToMainMenu.Broadcast();

			// Load main menu level
			if (CurrentConfig)
			{
				UGameplayStatics::OpenLevel(this, CurrentConfig->MainMenuLevelName);
			}
		}
		break;

	case EUPMPauseMenuAction::Quit:
		{
			UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);
		}
		break;

	default:
		break;
	}
}

void UUPMPauseMenuWidget::GenerateMenuButtons_Implementation()
{
	if (!ButtonContainer || !CurrentConfig)
	{
		return;
	}

	// Clear existing buttons
	ButtonContainer->ClearChildren();
	MenuButtons.Empty();

	// Sort buttons by order
	TArray<FUPMPauseButtonConfig> SortedButtons = CurrentConfig->MenuButtons;
	SortedButtons.Sort([](const FUPMPauseButtonConfig& A, const FUPMPauseButtonConfig& B)
	{
		return A.SortOrder < B.SortOrder;
	});

	// Create buttons
	for (const FUPMPauseButtonConfig& ButtonConfig : SortedButtons)
	{
		UUPMButtonBase* NewButton = CreateMenuButton(ButtonConfig);
		if (NewButton)
		{
			ButtonContainer->AddChild(NewButton);
			MenuButtons.Add(NewButton);
		}
	}
}

UUPMButtonBase* UUPMPauseMenuWidget::CreateMenuButton_Implementation(const FUPMPauseButtonConfig& ButtonConfig)
{
	if (!ButtonClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: ButtonClass not set for pause menu"));
		return nullptr;
	}

	UUPMButtonBase* NewButton = CreateWidget<UUPMButtonBase>(this, ButtonClass);
	if (!NewButton)
	{
		return nullptr;
	}

	// Configure button
	NewButton->SetButtonText(ButtonConfig.ButtonText);
	NewButton->SetIsEnabled(ButtonConfig.bEnabled);

	// Set icon if specified
	if (ButtonConfig.Icon.IsValid())
	{
		NewButton->SetButtonIcon(ButtonConfig.Icon.LoadSynchronous());
	}

	// Apply theme if available
	if (CurrentTheme)
	{
		NewButton->ApplyTheme(CurrentTheme);
	}

	// Bind click event
	EUPMPauseMenuAction Action = ButtonConfig.Action;
	FName CustomActionName = ButtonConfig.CustomActionName;
	bool bShowConfirmation = ButtonConfig.bShowConfirmation;
	FText ConfirmationMessage = ButtonConfig.ConfirmationMessage;

	NewButton->OnClicked().AddWeakLambda(this, [this, Action, CustomActionName, bShowConfirmation, ConfirmationMessage]()
	{
		// Check if this button requires custom confirmation
		if (bShowConfirmation && !ConfirmationMessage.IsEmpty())
		{
			ShowConfirmation(ConfirmationMessage, Action);
		}
		else
		{
			HandleButtonClicked(Action, CustomActionName);
		}
	});

	return NewButton;
}

void UUPMPauseMenuWidget::HandleButtonClicked(EUPMPauseMenuAction Action, FName CustomActionName)
{
	switch (Action)
	{
	case EUPMPauseMenuAction::Resume:
		OnResumePressed();
		break;
	case EUPMPauseMenuAction::Settings:
		OnSettingsPressed();
		break;
	case EUPMPauseMenuAction::SaveGame:
		OnSaveGamePressed();
		break;
	case EUPMPauseMenuAction::LoadGame:
		OnLoadGamePressed();
		break;
	case EUPMPauseMenuAction::MainMenu:
		OnMainMenuPressed();
		break;
	case EUPMPauseMenuAction::RestartCheckpoint:
		OnRestartCheckpointPressed();
		break;
	case EUPMPauseMenuAction::RestartLevel:
		OnRestartLevelPressed();
		break;
	case EUPMPauseMenuAction::Photo:
		OnPhotoModePressed();
		break;
	case EUPMPauseMenuAction::Quit:
		OnQuitPressed();
		break;
	case EUPMPauseMenuAction::Custom:
		OnCustomButtonPressed(CustomActionName);
		break;
	}
}

void UUPMPauseMenuWidget::ApplyPauseState(bool bPause)
{
	bIsGamePaused = bPause;

	if (APlayerController* PC = GetOwningPlayer())
	{
		PC->SetPause(bPause);

		// Update input mode
		if (bPause)
		{
			PC->SetInputMode(FInputModeUIOnly());
			PC->SetShowMouseCursor(true);
		}
		else
		{
			PC->SetInputMode(FInputModeGameOnly());
			PC->SetShowMouseCursor(false);
		}
	}
}

void UUPMPauseMenuWidget::RefreshUI()
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

	// Configure background blur
	if (BackgroundBlurWidget)
	{
		if (CurrentConfig->bBlurBackground)
		{
			BackgroundBlurWidget->SetVisibility(ESlateVisibility::Visible);
			BackgroundBlurWidget->SetBlurStrength(CurrentConfig->BackgroundBlurStrength);
		}
		else
		{
			BackgroundBlurWidget->SetVisibility(ESlateVisibility::Collapsed);
		}
	}

	// Configure background darken
	if (BackgroundDarkenImage)
	{
		if (CurrentConfig->bDarkenBackground)
		{
			BackgroundDarkenImage->SetVisibility(ESlateVisibility::Visible);
			BackgroundDarkenImage->SetColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, CurrentConfig->BackgroundDarkenAmount));
		}
		else
		{
			BackgroundDarkenImage->SetVisibility(ESlateVisibility::Collapsed);
		}
	}

	// Set background overlay if specified
	if (BackgroundOverlayImage && CurrentConfig->BackgroundOverlay.IsValid())
	{
		BackgroundOverlayImage->SetBrushFromTexture(CurrentConfig->BackgroundOverlay.LoadSynchronous());
		BackgroundOverlayImage->SetVisibility(ESlateVisibility::Visible);
	}
	else if (BackgroundOverlayImage)
	{
		BackgroundOverlayImage->SetVisibility(ESlateVisibility::Collapsed);
	}

	// Update game time visibility
	if (GameTimeText)
	{
		GameTimeText->SetVisibility(CurrentConfig->bShowGameTime ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}

	// Update objective visibility
	if (ObjectiveText)
	{
		ObjectiveText->SetVisibility(CurrentConfig->bShowCurrentObjective ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}
}

void UUPMPauseMenuWidget::UpdateButtonStates()
{
	if (!CurrentConfig)
	{
		return;
	}

	// Check for save existence
	bool bHasSave = false;
	if (UUPMSaveSubsystem* SaveSubsystem = UUPMSaveSubsystem::Get(this))
	{
		FUPMSaveSlotInfo MostRecent = SaveSubsystem->GetMostRecentSave();
		bHasSave = MostRecent.IsValid();
	}

	// Update button states based on requirements
	int32 ButtonIndex = 0;
	for (const FUPMPauseButtonConfig& ButtonConfig : CurrentConfig->MenuButtons)
	{
		if (ButtonConfig.SortOrder >= 0 && ButtonIndex < MenuButtons.Num())
		{
			UUPMButtonBase* Button = MenuButtons[ButtonIndex];
			if (Button && ButtonConfig.bRequiresSaveExists)
			{
				Button->SetIsEnabled(bHasSave);
			}
		}
		ButtonIndex++;
	}
}

void UUPMPauseMenuWidget::PlayButtonAnimations()
{
	if (!CurrentConfig)
	{
		return;
	}

	float Delay = 0.0f;
	for (UUPMButtonBase* Button : MenuButtons)
	{
		if (Button)
		{
			// Set initial state (hidden/scaled down)
			Button->SetRenderOpacity(0.0f);
			Button->SetRenderScale(FVector2D(0.9f, 0.9f));

			// Animate in with stagger
			FTimerHandle TimerHandle;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateWeakLambda(Button, [Button]()
			{
				// Animate to final state
				Button->SetRenderOpacity(1.0f);
				Button->SetRenderScale(FVector2D(1.0f, 1.0f));
			}), Delay, false);

			Delay += CurrentConfig->ButtonStaggerDelay;
		}
	}
}
