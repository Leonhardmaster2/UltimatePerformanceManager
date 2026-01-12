// Copyright UPM Team. All Rights Reserved.

#include "UI/UPMMainMenuWidget.h"
#include "UI/UPMButtonBase.h"
#include "UPMSaveSubsystem.h"
#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Components/VerticalBox.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Texture2D.h"
#include "Sound/SoundBase.h"

UUPMMainMenuWidget::UUPMMainMenuWidget()
{
	bAutoActivate = true;
}

void UUPMMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Load default configuration if set
	if (DefaultConfig.IsValid())
	{
		LoadConfiguration(DefaultConfig.LoadSynchronous());
	}

	UpdateContinueButtonVisibility();
}

void UUPMMainMenuWidget::NativeDestruct()
{
	StopMenuMusic();
	Super::NativeDestruct();
}

UWidget* UUPMMainMenuWidget::NativeGetDesiredFocusTarget() const
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

void UUPMMainMenuWidget::LoadConfiguration(UUPMMainMenuConfig* Config)
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

	// Start music if configured
	if (Config->MenuMusic.IsValid())
	{
		PlayMenuMusic();
	}
}

void UUPMMainMenuWidget::SetTheme(UUPMUIThemeData* Theme)
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

	// Apply theme colors to background
	if (BackgroundImage && Theme)
	{
		BackgroundImage->SetColorAndOpacity(Theme->BackgroundColor);
	}

	// Apply text styles
	if (TitleText && Theme)
	{
		TitleText->SetFont(Theme->TitleTextStyle.Font);
		TitleText->SetColorAndOpacity(FSlateColor(Theme->TitleTextStyle.Color));
	}

	if (SubtitleText && Theme)
	{
		SubtitleText->SetFont(Theme->HeaderTextStyle.Font);
		SubtitleText->SetColorAndOpacity(FSlateColor(Theme->HeaderTextStyle.Color));
	}
}

void UUPMMainMenuWidget::OnContinuePressed_Implementation()
{
	// Load most recent save
	if (UUPMSaveSubsystem* SaveSubsystem = UUPMSaveSubsystem::Get(this))
	{
		FUPMSaveSlotInfo MostRecent = SaveSubsystem->GetMostRecentSave();
		if (MostRecent.IsValid())
		{
			SaveSubsystem->LoadGame(MostRecent.SlotName);
		}
	}
}

void UUPMMainMenuWidget::OnNewGamePressed_Implementation()
{
	// Override in Blueprint to start new game
}

void UUPMMainMenuWidget::OnLoadGamePressed_Implementation()
{
	// Override in Blueprint to show load game screen
}

void UUPMMainMenuWidget::OnSettingsPressed_Implementation()
{
	// Override in Blueprint to show settings menu
}

void UUPMMainMenuWidget::OnQuitPressed_Implementation()
{
	// Request quit
	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);
}

void UUPMMainMenuWidget::OnCustomButtonPressed_Implementation(FName ActionName)
{
	// Override in Blueprint to handle custom actions
}

void UUPMMainMenuWidget::PlayMenuMusic()
{
	if (!CurrentConfig || !CurrentConfig->MenuMusic.IsValid())
	{
		return;
	}

	USoundBase* Music = CurrentConfig->MenuMusic.LoadSynchronous();
	if (!Music)
	{
		return;
	}

	if (!MusicComponent)
	{
		MusicComponent = UGameplayStatics::SpawnSound2D(this, Music, 1.0f, 1.0f, 0.0f, nullptr, false, false);
	}

	if (MusicComponent)
	{
		MusicComponent->FadeIn(CurrentConfig->MusicFadeInDuration);
	}
}

void UUPMMainMenuWidget::StopMenuMusic()
{
	if (MusicComponent)
	{
		MusicComponent->FadeOut(1.0f, 0.0f);
	}
}

void UUPMMainMenuWidget::SetMusicVolume(float Volume)
{
	if (MusicComponent)
	{
		MusicComponent->SetVolumeMultiplier(FMath::Clamp(Volume, 0.0f, 1.0f));
	}
}

void UUPMMainMenuWidget::UpdateContinueButtonVisibility()
{
	bool bHasSave = HasSaveForContinue();

	// Find and update the continue button
	for (UUPMButtonBase* Button : MenuButtons)
	{
		// This assumes continue button has specific ActionName
		// A more robust solution would store the action name with the button
	}
}

bool UUPMMainMenuWidget::HasSaveForContinue() const
{
	if (UUPMSaveSubsystem* SaveSubsystem = UUPMSaveSubsystem::Get(this))
	{
		FUPMSaveSlotInfo MostRecent = SaveSubsystem->GetMostRecentSave();
		return MostRecent.IsValid();
	}
	return false;
}

void UUPMMainMenuWidget::GenerateMenuButtons_Implementation()
{
	if (!ButtonContainer || !CurrentConfig)
	{
		return;
	}

	// Clear existing buttons
	ButtonContainer->ClearChildren();
	MenuButtons.Empty();

	// Sort buttons by order
	TArray<FUPMMenuButtonConfig> SortedButtons = CurrentConfig->MenuButtons;
	SortedButtons.Sort([](const FUPMMenuButtonConfig& A, const FUPMMenuButtonConfig& B)
	{
		return A.SortOrder < B.SortOrder;
	});

	// Create buttons
	for (const FUPMMenuButtonConfig& ButtonConfig : SortedButtons)
	{
		UUPMButtonBase* NewButton = CreateMenuButton(ButtonConfig);
		if (NewButton)
		{
			ButtonContainer->AddChild(NewButton);
			MenuButtons.Add(NewButton);
		}
	}
}

UUPMButtonBase* UUPMMainMenuWidget::CreateMenuButton_Implementation(const FUPMMenuButtonConfig& ButtonConfig)
{
	if (!ButtonClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPM: ButtonClass not set for main menu"));
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
	FName ActionName = ButtonConfig.ActionName;
	NewButton->OnClicked().AddWeakLambda(this, [this, ActionName]()
	{
		HandleButtonClicked(ActionName);
	});

	return NewButton;
}

void UUPMMainMenuWidget::HandleButtonClicked(FName ActionName)
{
	// Route to appropriate handler based on action name
	if (ActionName == FName("Continue"))
	{
		OnContinuePressed();
	}
	else if (ActionName == FName("NewGame"))
	{
		OnNewGamePressed();
	}
	else if (ActionName == FName("LoadGame"))
	{
		OnLoadGamePressed();
	}
	else if (ActionName == FName("Settings"))
	{
		OnSettingsPressed();
	}
	else if (ActionName == FName("Quit") || ActionName == FName("Exit"))
	{
		OnQuitPressed();
	}
	else
	{
		OnCustomButtonPressed(ActionName);
	}
}

void UUPMMainMenuWidget::RefreshUI()
{
	if (!CurrentConfig)
	{
		return;
	}

	// Set title
	if (TitleText)
	{
		TitleText->SetText(CurrentConfig->GameTitle);
	}

	// Set subtitle
	if (SubtitleText)
	{
		SubtitleText->SetText(CurrentConfig->GameSubtitle);
	}

	// Set logo
	if (LogoImage && CurrentConfig->GameLogo.IsValid())
	{
		LogoImage->SetBrushFromTexture(CurrentConfig->GameLogo.LoadSynchronous());
		LogoImage->SetVisibility(ESlateVisibility::Visible);
	}
	else if (LogoImage)
	{
		LogoImage->SetVisibility(ESlateVisibility::Collapsed);
	}

	// Set background
	if (BackgroundImage && CurrentConfig->BackgroundImage.IsValid())
	{
		BackgroundImage->SetBrushFromTexture(CurrentConfig->BackgroundImage.LoadSynchronous());
	}

	// Set version text
	if (VersionText)
	{
		VersionText->SetText(CurrentConfig->VersionText);
	}

	// Set copyright text
	if (CopyrightText)
	{
		CopyrightText->SetText(CurrentConfig->CopyrightText);
	}
}
