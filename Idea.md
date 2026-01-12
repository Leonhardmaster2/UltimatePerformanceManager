# UPM - Ultimate Performance Manager
## Unreal Engine Plugin Design Document

---

## 1. Overview

**Plugin Name:** UPM (Ultimate Performance Manager)  
**Engine Version:** UE 5.3+  
**Type:** Runtime Plugin (Editor + Shipping)  
**Primary Language:** C++ with full Blueprint exposure

UPM provides a shipping-safe graphics settings system, real-time performance monitoring, and menu-ready components for game settings menus.

---

## 2. Plugin Structure

```
Plugins/
└── UPM/
    ├── UPM.uplugin
    ├── Source/
    │   └── UPM/
    │       ├── UPM.Build.cs
    │       ├── Public/
    │       │   ├── UPMCore.h
    │       │   ├── UPMGraphicsManager.h
    │       │   ├── UPMExtendedSettings.h
    │       │   ├── UPMPerformanceMonitor.h
    │       │   ├── UPMSettingsData.h
    │       │   ├── UPMSaveLoad.h
    │       │   └── UPMBlueprintLibrary.h
    │       └── Private/
    │           ├── UPMModule.cpp
    │           ├── UPMCore.cpp
    │           ├── UPMGraphicsManager.cpp
    │           ├── UPMExtendedSettings.cpp
    │           ├── UPMPerformanceMonitor.cpp
    │           ├── UPMSettingsData.cpp
    │           ├── UPMSaveLoad.cpp
    │           └── UPMBlueprintLibrary.cpp
    └── Content/
        └── (Optional demo widgets)
```

---

## 3. Module Dependencies

**UPM.Build.cs required modules:**
- `Core`
- `CoreUObject`
- `Engine`
- `RHI` (for GPU stats)
- `RenderCore`
- `Slate` / `SlateCore` (if providing UI components)
- `UMG` (if providing ready-made widgets)

---

## 4. Core Systems

### 4.1 UPMCore (Singleton Subsystem)

**Type:** `UGameInstanceSubsystem`

This is the central access point for all UPM functionality. Using a GameInstanceSubsystem ensures it persists across level loads and is accessible globally.

**Responsibilities:**
- Initialize and hold references to all UPM managers
- Provide single access point via `GetUPMCore()`
- Handle initialization order
- Coordinate between graphics settings and performance monitoring

**Key Functions:**
- `Initialize()` — Called automatically on game start
- `GetGraphicsManager()` — Returns the graphics manager instance
- `GetExtendedSettings()` — Returns the extended settings subsystem (FOV, motion blur, etc.)
- `GetPerformanceMonitor()` — Returns the performance monitor instance
- `ApplyAllSettings()` — Applies all current settings (including extended)
- `ResetToDefaults()` — Resets everything to engine defaults
- `AutoDetectSettings()` — Runs hardware benchmark and sets appropriate quality

---

### 4.2 UPMGraphicsManager

**Type:** `UObject` (owned by UPMCore)

Handles all graphics and scalability settings using **shipping-safe APIs only**.

#### 4.2.1 Scalability Settings (via `UGameUserSettings`)

These use the built-in scalability system which is fully functional in packaged builds.

| Setting | API Method | Range |
|---------|-----------|-------|
| **Overall Quality** | `SetOverallScalabilityLevel()` | 0-4 (Low to Cinematic) |
| **View Distance** | `SetViewDistanceQuality()` | 0-4 |
| **Anti-Aliasing** | `SetAntiAliasingQuality()` | 0-4 |
| **Shadow Quality** | `SetShadowQuality()` | 0-4 |
| **Global Illumination** | `SetGlobalIlluminationQuality()` | 0-4 |
| **Reflection Quality** | `SetReflectionQuality()` | 0-4 |
| **Post Process** | `SetPostProcessingQuality()` | 0-4 |
| **Texture Quality** | `SetTextureQuality()` | 0-4 |
| **Effects Quality** | `SetVisualEffectQuality()` | 0-4 |
| **Foliage Quality** | `SetFoliageQuality()` | 0-4 |
| **Shading Quality** | `SetShadingQuality()` | 0-4 |

**Implementation Notes:**
- All these use `GEngine->GetGameUserSettings()` 
- After changing, call `ApplySettings(false)` then `SaveSettings()`
- These modify the `Scalability.ini` values internally

#### 4.2.2 Display Settings

| Setting | API Method | Notes |
|---------|-----------|-------|
| **Resolution** | `SetScreenResolution(FIntPoint)` | Use `GetSupportedFullscreenResolutions()` to get valid options |
| **Fullscreen Mode** | `SetFullscreenMode(EWindowMode)` | Fullscreen, WindowedFullscreen, Windowed |
| **VSync** | `SetVSyncEnabled(bool)` | Works in shipping |
| **Frame Rate Limit** | `SetFrameRateLimit(float)` | 0 = unlimited |
| **Resolution Scale** | `SetResolutionScaleValueEx(float)` | 0-100 percentage |
| **Dynamic Resolution** | Custom implementation | See section 4.2.4 |

#### 4.2.3 Advanced Settings (Shipping-Safe)

For settings not exposed via `UGameUserSettings`, use **material parameter collections**, **post-process volumes**, or **game-specific CVars registered as shipping-safe**.

**Motion Blur Intensity:**
```cpp
// Option A: Control via Post Process Settings at runtime
PostProcessComponent->Settings.MotionBlurAmount = Value;

// Option B: Material Parameter Collection for custom effects
```

**Gamma/Brightness:**
```cpp
// Use GEngine->DisplayGamma (limited)
// OR create a post-process material with a brightness parameter
```

**Field of View:**
```cpp
// Set on PlayerCameraManager or CameraComponent directly
PlayerController->PlayerCameraManager->SetFOV(NewFOV);
```

#### 4.2.4 Dynamic Resolution (Custom Implementation)

Since `r.DynamicRes` commands don't work in shipping, implement a custom solution:

1. Create a `UPMDynamicResolution` component
2. Monitor frame time via `FApp::GetDeltaTime()`
3. Adjust `SetResolutionScaleValueEx()` based on performance
4. Configurable target frame rate, min/max scale, adjustment speed

#### 4.2.5 Quality Presets

Create preset structs that bundle all settings:

```cpp
USTRUCT(BlueprintType)
struct FUPMQualityPreset
{
    GENERATED_BODY()
    
    FString PresetName;
    int32 OverallQuality;      // 0-4
    int32 ViewDistance;        // 0-4
    int32 AntiAliasing;        // 0-4
    int32 Shadows;             // 0-4
    int32 Textures;            // 0-4
    int32 Effects;             // 0-4
    int32 PostProcess;         // 0-4
    float ResolutionScale;     // 0-100
    bool bVSync;
    float FrameRateLimit;
};
```

Built-in presets: Low, Medium, High, Ultra, Cinematic, Custom

---

### 4.3 UPMExtendedSettings (Subsystem)

**Type:** `ULocalPlayerSubsystem`

Handles settings that **don't work** through `UGameUserSettings` and require direct application to game objects. Using `ULocalPlayerSubsystem` ensures per-player access and easy Blueprint retrieval via `GetSubsystem`.

#### 4.3.1 Why This Exists

The following settings have no shipping-safe engine API:
- **Field of View** — Must be set on CameraComponent or PlayerCameraManager directly
- **Input Sensitivity** — Mouse, controller, aim sensitivity
- **Invert Axis** — Y-axis, X-axis inversion
- **Controller Settings** — Deadzone, vibration, aim assist
- **Motion Blur** — Requires PostProcessComponent manipulation
- **Gamma/Brightness** — Engine gamma is limited; needs post-process
- **Camera Shake Scale** — Direct property on PlayerCameraManager
- **Chromatic Aberration** — PostProcess setting
- **Film Grain** — PostProcess setting
- **Vignette** — PostProcess setting
- **Head Bob** — Custom implementation per-game
- **Audio Volumes** — Sound class volumes (Master, SFX, Music, Voice)
- **Accessibility** — Subtitles, colorblind modes, HUD scale

#### 4.3.2 Core Concept

The subsystem:
1. Stores desired values internally
2. Applies them to the correct game objects when requested
3. Re-applies automatically on level load / pawn possession
4. Persists via the UPM save system

#### 4.3.3 Class Definition

```cpp
UCLASS()
class UPM_API UUPMExtendedSettings : public ULocalPlayerSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // ==================== FIELD OF VIEW ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|Camera")
    void SetFieldOfView(float NewFOV);

    UFUNCTION(BlueprintPure, Category = "UPM|Camera")
    float GetFieldOfView() const;

    // ==================== INPUT SENSITIVITY ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetMouseSensitivity(float Sensitivity);

    UFUNCTION(BlueprintPure, Category = "UPM|Input")
    float GetMouseSensitivity() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetMouseSensitivityX(float Sensitivity);

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetMouseSensitivityY(float Sensitivity);

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetControllerSensitivity(float Sensitivity);

    UFUNCTION(BlueprintPure, Category = "UPM|Input")
    float GetControllerSensitivity() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetControllerSensitivityX(float Sensitivity);

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetControllerSensitivityY(float Sensitivity);

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetAimSensitivityMultiplier(float Multiplier); // For ADS

    UFUNCTION(BlueprintPure, Category = "UPM|Input")
    float GetAimSensitivityMultiplier() const;

    // ==================== AXIS INVERSION ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetInvertMouseY(bool bInvert);

    UFUNCTION(BlueprintPure, Category = "UPM|Input")
    bool GetInvertMouseY() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetInvertMouseX(bool bInvert);

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetInvertControllerY(bool bInvert);

    UFUNCTION(BlueprintPure, Category = "UPM|Input")
    bool GetInvertControllerY() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetInvertControllerX(bool bInvert);

    // ==================== CONTROLLER SETTINGS ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
    void SetControllerDeadzoneInner(float Deadzone); // 0.0 - 0.5

    UFUNCTION(BlueprintPure, Category = "UPM|Controller")
    float GetControllerDeadzoneInner() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
    void SetControllerDeadzoneOuter(float Deadzone); // 0.5 - 1.0

    UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
    void SetVibrationEnabled(bool bEnabled);

    UFUNCTION(BlueprintPure, Category = "UPM|Controller")
    bool GetVibrationEnabled() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
    void SetVibrationIntensity(float Intensity); // 0.0 - 1.0

    UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
    void SetAimAssistEnabled(bool bEnabled);

    UFUNCTION(BlueprintPure, Category = "UPM|Controller")
    bool GetAimAssistEnabled() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Controller")
    void SetAimAssistStrength(float Strength); // 0.0 - 1.0

    // ==================== MOUSE SETTINGS ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetMouseSmoothingEnabled(bool bEnabled);

    UFUNCTION(BlueprintPure, Category = "UPM|Input")
    bool GetMouseSmoothingEnabled() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Input")
    void SetMouseAccelerationEnabled(bool bEnabled);

    UFUNCTION(BlueprintPure, Category = "UPM|Input")
    bool GetMouseAccelerationEnabled() const;

    // ==================== CAMERA EFFECTS ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|Camera")
    void SetCameraShakeScale(float Scale); // 0.0 = off, 1.0 = default

    UFUNCTION(BlueprintPure, Category = "UPM|Camera")
    float GetCameraShakeScale() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Camera")
    void SetHeadBobEnabled(bool bEnabled);

    UFUNCTION(BlueprintPure, Category = "UPM|Camera")
    bool GetHeadBobEnabled() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Camera")
    void SetHeadBobIntensity(float Intensity); // 0.0 - 1.0

    // ==================== POST PROCESS EFFECTS ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetMotionBlurEnabled(bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetMotionBlurIntensity(float Intensity); // 0.0 - 1.0

    UFUNCTION(BlueprintPure, Category = "UPM|PostProcess")
    float GetMotionBlurIntensity() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetGamma(float NewGamma); // Default 2.2

    UFUNCTION(BlueprintPure, Category = "UPM|PostProcess")
    float GetGamma() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetBrightness(float NewBrightness); // 0.5 - 1.5, default 1.0

    UFUNCTION(BlueprintPure, Category = "UPM|PostProcess")
    float GetBrightness() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetContrast(float NewContrast); // 0.5 - 1.5, default 1.0

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetVignetteIntensity(float Intensity);

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetChromaticAberrationIntensity(float Intensity);

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetFilmGrainIntensity(float Intensity);

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetDepthOfFieldEnabled(bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetLensFlareEnabled(bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = "UPM|PostProcess")
    void SetBloomIntensity(float Intensity);

    // ==================== AUDIO ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
    void SetMasterVolume(float Volume); // 0.0 - 1.0

    UFUNCTION(BlueprintPure, Category = "UPM|Audio")
    float GetMasterVolume() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
    void SetMusicVolume(float Volume);

    UFUNCTION(BlueprintPure, Category = "UPM|Audio")
    float GetMusicVolume() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
    void SetSFXVolume(float Volume);

    UFUNCTION(BlueprintPure, Category = "UPM|Audio")
    float GetSFXVolume() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
    void SetVoiceVolume(float Volume); // Dialogue

    UFUNCTION(BlueprintPure, Category = "UPM|Audio")
    float GetVoiceVolume() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
    void SetAmbientVolume(float Volume);

    UFUNCTION(BlueprintCallable, Category = "UPM|Audio")
    void SetUIVolume(float Volume); // Menu sounds

    // ==================== ACCESSIBILITY ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
    void SetSubtitlesEnabled(bool bEnabled);

    UFUNCTION(BlueprintPure, Category = "UPM|Accessibility")
    bool GetSubtitlesEnabled() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
    void SetSubtitleSize(EUPMSubtitleSize Size); // Small, Medium, Large, ExtraLarge

    UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
    void SetSubtitleBackground(bool bEnabled); // Black background for readability

    UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
    void SetColorblindMode(EUPMColorblindMode Mode); // None, Protanopia, Deuteranopia, Tritanopia

    UFUNCTION(BlueprintPure, Category = "UPM|Accessibility")
    EUPMColorblindMode GetColorblindMode() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
    void SetColorblindStrength(float Strength); // 0.0 - 1.0

    UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
    void SetHUDScale(float Scale); // 0.5 - 2.0, default 1.0

    UFUNCTION(BlueprintPure, Category = "UPM|Accessibility")
    float GetHUDScale() const;

    UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
    void SetHighContrastMode(bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = "UPM|Accessibility")
    void SetReduceScreenShake(bool bEnabled); // Reduces all screen effects

    // ==================== UTILITY ====================
    UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
    void ApplyAllExtendedSettings();

    UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
    void ResetExtendedToDefaults();

    UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
    void ResetInputToDefaults();

    UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
    void ResetAudioToDefaults();

    UFUNCTION(BlueprintCallable, Category = "UPM|Extended")
    void ResetVisualToDefaults();

protected:
    // Event handlers
    void OnPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
    // Apply functions
    void ApplyFOVToCamera();
    void ApplyInputSettings();
    void ApplyPostProcessSettings();
    void ApplyAudioSettings();
    void ApplyAccessibilitySettings();

    // Cached references
    UPROPERTY()
    APlayerCameraManager* CachedCameraManager;

    UPROPERTY()
    UPostProcessComponent* RuntimePostProcess;

    // ===== STORED VALUES =====
    
    // Camera
    float StoredFOV = 90.0f;
    float StoredCameraShake = 1.0f;
    bool bStoredHeadBobEnabled = true;
    float StoredHeadBobIntensity = 1.0f;

    // Input - Mouse
    float StoredMouseSensitivity = 1.0f;
    float StoredMouseSensitivityX = 1.0f;
    float StoredMouseSensitivityY = 1.0f;
    bool bStoredInvertMouseY = false;
    bool bStoredInvertMouseX = false;
    bool bStoredMouseSmoothing = false;
    bool bStoredMouseAcceleration = false;

    // Input - Controller
    float StoredControllerSensitivity = 1.0f;
    float StoredControllerSensitivityX = 1.0f;
    float StoredControllerSensitivityY = 1.0f;
    bool bStoredInvertControllerY = false;
    bool bStoredInvertControllerX = false;
    float StoredDeadzoneInner = 0.2f;
    float StoredDeadzoneOuter = 0.9f;
    bool bStoredVibrationEnabled = true;
    float StoredVibrationIntensity = 1.0f;
    bool bStoredAimAssistEnabled = true;
    float StoredAimAssistStrength = 0.5f;
    float StoredAimSensitivityMultiplier = 0.7f;

    // Post Process
    float StoredMotionBlur = 0.5f;
    bool bStoredMotionBlurEnabled = true;
    float StoredGamma = 2.2f;
    float StoredBrightness = 1.0f;
    float StoredContrast = 1.0f;
    float StoredVignette = 0.4f;
    float StoredChromaticAberration = 0.0f;
    float StoredFilmGrain = 0.0f;
    bool bStoredDepthOfFieldEnabled = true;
    bool bStoredLensFlareEnabled = true;
    float StoredBloomIntensity = 0.5f;

    // Audio
    float StoredMasterVolume = 1.0f;
    float StoredMusicVolume = 1.0f;
    float StoredSFXVolume = 1.0f;
    float StoredVoiceVolume = 1.0f;
    float StoredAmbientVolume = 1.0f;
    float StoredUIVolume = 1.0f;

    // Accessibility
    bool bStoredSubtitlesEnabled = false;
    EUPMSubtitleSize StoredSubtitleSize = EUPMSubtitleSize::Medium;
    bool bStoredSubtitleBackground = true;
    EUPMColorblindMode StoredColorblindMode = EUPMColorblindMode::None;
    float StoredColorblindStrength = 1.0f;
    float StoredHUDScale = 1.0f;
    bool bStoredHighContrastMode = false;
    bool bStoredReduceScreenShake = false;
};
```

#### 4.3.4 Enums

```cpp
UENUM(BlueprintType)
enum class EUPMSubtitleSize : uint8
{
    Small,
    Medium,
    Large,
    ExtraLarge
};

UENUM(BlueprintType)
enum class EUPMColorblindMode : uint8
{
    None,
    Protanopia,    // Red-blind
    Deuteranopia,  // Green-blind
    Tritanopia     // Blue-blind
};
```

#### 4.3.5 Input Sensitivity Implementation

```cpp
void UUPMExtendedSettings::SetMouseSensitivity(float Sensitivity)
{
    StoredMouseSensitivity = FMath::Clamp(Sensitivity, 0.1f, 5.0f);
    StoredMouseSensitivityX = StoredMouseSensitivity;
    StoredMouseSensitivityY = StoredMouseSensitivity;
    ApplyInputSettings();
}

void UUPMExtendedSettings::ApplyInputSettings()
{
    APlayerController* PC = GetLocalPlayer()->GetPlayerController(GetWorld());
    if (!PC) return;

    // Apply mouse sensitivity via InputComponent scale
    // OR via a custom PlayerController function you expose
    
    // Method 1: InputYawScale / InputPitchScale (if using old input system)
    PC->InputYawScale = StoredMouseSensitivityX * (bStoredInvertMouseX ? -1.0f : 1.0f);
    PC->InputPitchScale = StoredMouseSensitivityY * (bStoredInvertMouseY ? -1.0f : 1.0f);

    // Method 2: For Enhanced Input System, modify Input Modifiers at runtime
    // This requires custom implementation - see section 4.3.6

    // Controller vibration
    if (bStoredVibrationEnabled)
    {
        PC->SetVibrationEnabled(true);
        // Note: Intensity must be applied per-rumble call in your game code
    }
    else
    {
        PC->SetVibrationEnabled(false);
    }
}
```

#### 4.3.6 Enhanced Input System Sensitivity

For UE5's Enhanced Input System, sensitivity requires modifying Input Modifiers:

```cpp
// Option A: Create a custom scalar modifier that reads from UPMExtendedSettings
UCLASS()
class UPM_API UUPMSensitivityModifier : public UInputModifier
{
    GENERATED_BODY()

protected:
    virtual FInputActionValue ModifyRaw_Implementation(
        const UEnhancedPlayerInput* PlayerInput,
        FInputActionValue CurrentValue,
        float DeltaTime) override
    {
        // Get sensitivity from UPMExtendedSettings
        UUPMExtendedSettings* Settings = /* get subsystem */;
        float Multiplier = Settings->GetMouseSensitivity();
        
        FVector ModifiedValue = CurrentValue.Get<FVector>() * Multiplier;
        return FInputActionValue(ModifiedValue);
    }
};

// Option B: Dynamically add/modify modifiers on the Input Mapping Context
// This is more complex but allows runtime changes without custom modifiers
```

#### 4.3.7 Audio Volume Implementation

```cpp
void UUPMExtendedSettings::ApplyAudioSettings()
{
    // Audio volumes use Sound Classes and Sound Mixes
    // Requires setup: Create SoundClass assets (Master, Music, SFX, Voice, Ambient, UI)
    // And a SoundMix that can be controlled at runtime

    UWorld* World = GetWorld();
    if (!World) return;

    // Method: Set Sound Mix Class Override
    if (USoundMix* UPMSoundMix = LoadObject<USoundMix>(nullptr, TEXT("/UPM/Audio/UPM_SoundMix")))
    {
        // Push the mix
        UGameplayStatics::PushSoundMixModifier(World, UPMSoundMix);
        
        // Set class volumes
        if (USoundClass* MasterClass = LoadObject<USoundClass>(nullptr, TEXT("/UPM/Audio/SC_Master")))
        {
            UGameplayStatics::SetSoundMixClassOverride(
                World, UPMSoundMix, MasterClass, StoredMasterVolume, 1.0f, 0.0f, true);
        }
        
        if (USoundClass* MusicClass = LoadObject<USoundClass>(nullptr, TEXT("/UPM/Audio/SC_Music")))
        {
            UGameplayStatics::SetSoundMixClassOverride(
                World, UPMSoundMix, MusicClass, StoredMusicVolume, 1.0f, 0.0f, true);
        }
        
        // Repeat for SFX, Voice, Ambient, UI...
    }
}
```

**Required Audio Setup:**
1. Create SoundClass assets: `SC_Master`, `SC_Music`, `SC_SFX`, `SC_Voice`, `SC_Ambient`, `SC_UI`
2. Create a SoundMix asset: `UPM_SoundMix`
3. Assign your game's audio to appropriate SoundClasses
4. UPM controls volumes via SoundMix class overrides

#### 4.3.8 Colorblind Mode Implementation

```cpp
void UUPMExtendedSettings::ApplyColorblindSettings()
{
    // Colorblind simulation uses Post Process Material
    // Create a post-process material with colorblind matrix transforms
    
    UPostProcessComponent* PP = GetRuntimePostProcess();
    if (!PP) return;

    if (StoredColorblindMode == EUPMColorblindMode::None)
    {
        // Remove colorblind material from blendables
        PP->Settings.WeightedBlendables.Array.RemoveAll([](FWeightedBlendable& Blendable)
        {
            return Blendable.Object && Blendable.Object->GetName().Contains("Colorblind");
        });
    }
    else
    {
        // Load appropriate colorblind material
        FString MaterialPath;
        switch (StoredColorblindMode)
        {
            case EUPMColorblindMode::Protanopia:
                MaterialPath = TEXT("/UPM/Materials/PP_Colorblind_Protanopia");
                break;
            case EUPMColorblindMode::Deuteranopia:
                MaterialPath = TEXT("/UPM/Materials/PP_Colorblind_Deuteranopia");
                break;
            case EUPMColorblindMode::Tritanopia:
                MaterialPath = TEXT("/UPM/Materials/PP_Colorblind_Tritanopia");
                break;
        }
        
        if (UMaterialInterface* ColorblindMat = LoadObject<UMaterialInterface>(nullptr, *MaterialPath))
        {
            // Set as blendable with strength
            PP->Settings.WeightedBlendables.Array.Add(
                FWeightedBlendable(StoredColorblindStrength, ColorblindMat));
        }
    }
}
```

#### 4.3.9 FOV Implementation Details

```cpp
void UUPMExtendedSettings::SetFieldOfView(float NewFOV)
{
    StoredFOV = FMath::Clamp(NewFOV, 60.0f, 120.0f);
    ApplyFOVToCamera();
}

void UUPMExtendedSettings::ApplyFOVToCamera()
{
    APlayerController* PC = GetLocalPlayer()->GetPlayerController(GetWorld());
    if (!PC) return;

    // Method 1: PlayerCameraManager (recommended)
    if (APlayerCameraManager* CamManager = PC->PlayerCameraManager)
    {
        CamManager->SetFOV(StoredFOV);
        CamManager->DefaultFOV = StoredFOV;
    }

    // Method 2: Direct CameraComponent (fallback)
    if (APawn* Pawn = PC->GetPawn())
    {
        if (UCameraComponent* Cam = Pawn->FindComponentByClass<UCameraComponent>())
        {
            Cam->SetFieldOfView(StoredFOV);
        }
    }
}
```

#### 4.3.10 Auto-Apply on Level Load

```cpp
void UUPMExtendedSettings::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // Bind to pawn possession
    if (APlayerController* PC = GetLocalPlayer()->GetPlayerController(GetWorld()))
    {
        PC->OnPossessedPawnChanged.AddDynamic(this, &UUPMExtendedSettings::OnPawnChanged);
    }

    // Bind to world/level changes
    FWorldDelegates::OnPostWorldInitialization.AddUObject(
        this, &UUPMExtendedSettings::OnWorldInitialized);
    
    // Load and apply saved settings
    LoadFromSaveData();
    ApplyAllExtendedSettings();
}

void UUPMExtendedSettings::OnPawnChanged(APawn* OldPawn, APawn* NewPawn)
{
    // Re-apply all settings to new pawn/camera
    ApplyAllExtendedSettings();
}
```

#### 4.3.11 Runtime PostProcess Component

```cpp
UPostProcessComponent* UUPMExtendedSettings::GetRuntimePostProcess()
{
    if (RuntimePostProcess)
        return RuntimePostProcess;

    APlayerController* PC = GetLocalPlayer()->GetPlayerController(GetWorld());
    if (!PC || !PC->GetPawn()) return nullptr;

    // Find existing or create new
    RuntimePostProcess = PC->GetPawn()->FindComponentByClass<UPostProcessComponent>();
    if (!RuntimePostProcess)
    {
        RuntimePostProcess = NewObject<UPostProcessComponent>(PC->GetPawn());
        RuntimePostProcess->RegisterComponent();
        RuntimePostProcess->bUnbound = true; // Affects entire screen
        RuntimePostProcess->Priority = 100;  // High priority to override level PP
    }

    return RuntimePostProcess;
}

void UUPMExtendedSettings::ApplyPostProcessSettings()
{
    UPostProcessComponent* PP = GetRuntimePostProcess();
    if (!PP) return;

    // Motion Blur
    PP->Settings.bOverride_MotionBlurAmount = true;
    PP->Settings.MotionBlurAmount = bStoredMotionBlurEnabled ? StoredMotionBlur : 0.0f;

    // Vignette
    PP->Settings.bOverride_VignetteIntensity = true;
    PP->Settings.VignetteIntensity = StoredVignette;

    // Chromatic Aberration
    PP->Settings.bOverride_SceneFringeIntensity = true;
    PP->Settings.SceneFringeIntensity = StoredChromaticAberration;

    // Film Grain
    PP->Settings.bOverride_FilmGrainIntensity = true;
    PP->Settings.FilmGrainIntensity = StoredFilmGrain;

    // Bloom
    PP->Settings.bOverride_BloomIntensity = true;
    PP->Settings.BloomIntensity = StoredBloomIntensity;

    // Depth of Field (simple on/off via focal distance)
    PP->Settings.bOverride_DepthOfFieldFocalDistance = true;
    PP->Settings.DepthOfFieldFocalDistance = bStoredDepthOfFieldEnabled ? 0.0f : 10000000.0f;

    // Brightness/Contrast via Color Grading
    PP->Settings.bOverride_ColorGain = true;
    PP->Settings.ColorGain = FVector4(StoredBrightness, StoredBrightness, StoredBrightness, 1.0f);

    PP->Settings.bOverride_ColorContrast = true;
    PP->Settings.ColorContrast = FVector4(StoredContrast, StoredContrast, StoredContrast, 1.0f);

    // Gamma (via toe)
    PP->Settings.bOverride_ColorGammaShadows = true;
    PP->Settings.ColorGammaShadows = FVector4(StoredGamma, StoredGamma, StoredGamma, 1.0f);
}
```

#### 4.3.12 Integration with Save System

`UPMSaveLoad` calls into this subsystem:

```cpp
// On Save - all extended settings saved to USaveGame
SaveData->FieldOfView = ExtendedSettings->GetFieldOfView();
SaveData->MouseSensitivity = ExtendedSettings->GetMouseSensitivity();
SaveData->InvertMouseY = ExtendedSettings->GetInvertMouseY();
SaveData->ControllerSensitivity = ExtendedSettings->GetControllerSensitivity();
SaveData->VibrationEnabled = ExtendedSettings->GetVibrationEnabled();
SaveData->MotionBlurIntensity = ExtendedSettings->GetMotionBlurIntensity();
SaveData->MasterVolume = ExtendedSettings->GetMasterVolume();
SaveData->MusicVolume = ExtendedSettings->GetMusicVolume();
// ... etc

// On Load
ExtendedSettings->SetFieldOfView(SaveData->FieldOfView);
ExtendedSettings->SetMouseSensitivity(SaveData->MouseSensitivity);
ExtendedSettings->SetInvertMouseY(SaveData->InvertMouseY);
// ... etc
ExtendedSettings->ApplyAllExtendedSettings();
```

#### 4.3.13 Getters for UI Binding (Important)

All settings have getters so your UI can query current values:

```cpp
// Blueprint usage for a settings menu:
// 1. On menu open, get current values to populate sliders/checkboxes
float CurrentFOV = GetSubsystem<UUPMExtendedSettings>()->GetFieldOfView();
float CurrentSensitivity = GetSubsystem<UUPMExtendedSettings>()->GetMouseSensitivity();
bool bCurrentInvertY = GetSubsystem<UUPMExtendedSettings>()->GetInvertMouseY();

// 2. Populate UI widgets with these values

// 3. On slider/checkbox change, call setters
GetSubsystem<UUPMExtendedSettings>()->SetFieldOfView(NewSliderValue);
```

---

### 4.4 UPMPerformanceMonitor

**Type:** `UActorComponent` (attachable) or `UObject` (for global access)

Provides real-time performance statistics without using `stat` commands.

#### 4.3.1 Available Metrics (Shipping-Safe)

| Metric | How to Obtain |
|--------|--------------|
| **FPS** | `1.0f / DeltaTime` or `FApp::GetDeltaTime()` |
| **Frame Time (ms)** | `DeltaTime * 1000.0f` |
| **Game Thread Time** | `FPlatformTime::ToMilliseconds(GGameThreadTime)` |
| **Render Thread Time** | `FPlatformTime::ToMilliseconds(GRenderThreadTime)` |
| **GPU Time** | `FPlatformTime::ToMilliseconds(GGPUFrameTime)` — requires `GRHISupportsGPUTimestampBubblesRemoval` check |
| **Draw Calls** | `GNumDrawCallsRHI` (may be 0 in shipping, test!) |
| **Triangles Rendered** | `GNumPrimitivesDrawnRHI` (may be 0 in shipping, test!) |
| **Memory Used** | `FPlatformMemory::GetStats()` |
| **Texture Memory** | Limited access in shipping |

#### 4.3.2 Stat Tracking System

```cpp
USTRUCT(BlueprintType)
struct FUPMPerformanceStats
{
    GENERATED_BODY()
    
    float CurrentFPS;
    float AverageFPS;          // Rolling average
    float MinFPS;              // In sample window
    float MaxFPS;              // In sample window
    float FrameTimeMs;
    float GameThreadMs;
    float RenderThreadMs;
    float GPUTimeMs;           // If available
    int64 UsedPhysicalMemoryMB;
    int64 AvailablePhysicalMemoryMB;
    
    // Percentiles (optional, for detailed analysis)
    float FPS_1Percentile;     // 1% low
    float FPS_01Percentile;    // 0.1% low
};
```

#### 4.3.3 Monitoring Modes

- **Disabled** — No overhead
- **Basic** — FPS and frame time only (minimal overhead)
- **Detailed** — All available metrics
- **Benchmark** — Records samples for a duration, calculates percentiles

#### 4.3.4 Performance History

Store last N samples (configurable, default 300 = 5 seconds at 60fps) for:
- Graph visualization
- Average/min/max calculations
- Stutter detection

---

### 4.5 UPMSettingsData

**Type:** `USaveGame`

Stores all user settings for persistence.

```cpp
UCLASS()
class UPMSettingsData : public USaveGame
{
    GENERATED_BODY()

public:
    // Version for migration
    UPROPERTY()
    int32 SaveVersion = 1;
    
    // ==================== GRAPHICS (Scalability) ====================
    UPROPERTY()
    FUPMQualityPreset CurrentSettings;
    
    // ==================== DISPLAY ====================
    UPROPERTY()
    FIntPoint Resolution;
    
    UPROPERTY()
    TEnumAsByte<EWindowMode::Type> WindowMode;
    
    UPROPERTY()
    float ResolutionScale = 100.0f;

    // ==================== CAMERA ====================
    UPROPERTY()
    float FieldOfView = 90.0f;
    
    UPROPERTY()
    float CameraShakeScale = 1.0f;
    
    UPROPERTY()
    bool bHeadBobEnabled = true;
    
    UPROPERTY()
    float HeadBobIntensity = 1.0f;

    // ==================== INPUT - MOUSE ====================
    UPROPERTY()
    float MouseSensitivity = 1.0f;
    
    UPROPERTY()
    float MouseSensitivityX = 1.0f;
    
    UPROPERTY()
    float MouseSensitivityY = 1.0f;
    
    UPROPERTY()
    bool bInvertMouseY = false;
    
    UPROPERTY()
    bool bInvertMouseX = false;
    
    UPROPERTY()
    bool bMouseSmoothing = false;
    
    UPROPERTY()
    bool bMouseAcceleration = false;

    // ==================== INPUT - CONTROLLER ====================
    UPROPERTY()
    float ControllerSensitivity = 1.0f;
    
    UPROPERTY()
    float ControllerSensitivityX = 1.0f;
    
    UPROPERTY()
    float ControllerSensitivityY = 1.0f;
    
    UPROPERTY()
    bool bInvertControllerY = false;
    
    UPROPERTY()
    bool bInvertControllerX = false;
    
    UPROPERTY()
    float DeadzoneInner = 0.2f;
    
    UPROPERTY()
    float DeadzoneOuter = 0.9f;
    
    UPROPERTY()
    float AimSensitivityMultiplier = 0.7f;

    // ==================== CONTROLLER FEATURES ====================
    UPROPERTY()
    bool bVibrationEnabled = true;
    
    UPROPERTY()
    float VibrationIntensity = 1.0f;
    
    UPROPERTY()
    bool bAimAssistEnabled = true;
    
    UPROPERTY()
    float AimAssistStrength = 0.5f;

    // ==================== POST PROCESS ====================
    UPROPERTY()
    bool bMotionBlurEnabled = true;
    
    UPROPERTY()
    float MotionBlurIntensity = 0.5f;
    
    UPROPERTY()
    float Gamma = 2.2f;
    
    UPROPERTY()
    float Brightness = 1.0f;
    
    UPROPERTY()
    float Contrast = 1.0f;
    
    UPROPERTY()
    float VignetteIntensity = 0.4f;
    
    UPROPERTY()
    float ChromaticAberration = 0.0f;
    
    UPROPERTY()
    float FilmGrain = 0.0f;
    
    UPROPERTY()
    bool bDepthOfFieldEnabled = true;
    
    UPROPERTY()
    bool bLensFlareEnabled = true;
    
    UPROPERTY()
    float BloomIntensity = 0.5f;

    // ==================== AUDIO ====================
    UPROPERTY()
    float MasterVolume = 1.0f;
    
    UPROPERTY()
    float MusicVolume = 1.0f;
    
    UPROPERTY()
    float SFXVolume = 1.0f;
    
    UPROPERTY()
    float VoiceVolume = 1.0f;
    
    UPROPERTY()
    float AmbientVolume = 1.0f;
    
    UPROPERTY()
    float UIVolume = 1.0f;

    // ==================== ACCESSIBILITY ====================
    UPROPERTY()
    bool bSubtitlesEnabled = false;
    
    UPROPERTY()
    EUPMSubtitleSize SubtitleSize = EUPMSubtitleSize::Medium;
    
    UPROPERTY()
    bool bSubtitleBackground = true;
    
    UPROPERTY()
    EUPMColorblindMode ColorblindMode = EUPMColorblindMode::None;
    
    UPROPERTY()
    float ColorblindStrength = 1.0f;
    
    UPROPERTY()
    float HUDScale = 1.0f;
    
    UPROPERTY()
    bool bHighContrastMode = false;
    
    UPROPERTY()
    bool bReduceScreenShake = false;

    // ==================== PERFORMANCE MONITOR ====================
    UPROPERTY()
    bool bShowFPSCounter = false;
    
    UPROPERTY()
    EUPMMonitoringMode MonitoringMode = EUPMMonitoringMode::Disabled;
    
    // ==================== MISC ====================
    UPROPERTY()
    int32 PreferredMonitor = 0;
};
```

---

### 4.6 UPMSaveLoad

**Type:** Utility class with static functions

Handles saving/loading settings.

**Dual Save Strategy:**
1. **USaveGame** — For UPM-specific data (custom settings, FOV, gamma)
2. **UGameUserSettings** — For engine scalability (auto-saves to GameUserSettings.ini)

This ensures maximum compatibility and that engine-level settings are respected by the engine's own systems.

**Functions:**
- `SaveAllSettings()` — Saves both USaveGame and calls `GameUserSettings->SaveSettings()`
- `LoadAllSettings()` — Loads and applies both
- `DoesSettingsSaveExist()` — Check if user has saved settings
- `DeleteSettingsSave()` — Reset to defaults

**File Locations (Packaged Build):**
- Windows: `%LOCALAPPDATA%/[ProjectName]/Saved/SaveGames/UPMSettings.sav`
- GameUserSettings: `%LOCALAPPDATA%/[ProjectName]/Saved/Config/Windows/GameUserSettings.ini`

---

## 5. Blueprint Exposure

### 5.1 UPMBlueprintLibrary

**Type:** `UBlueprintFunctionLibrary`

Provides static Blueprint-callable functions for all functionality.

#### Graphics Functions:
```
SetOverallQuality(int32 Quality)
SetTextureQuality(int32 Quality)
SetShadowQuality(int32 Quality)
SetViewDistanceQuality(int32 Quality)
... (all scalability settings)

SetResolution(int32 Width, int32 Height)
SetFullscreenMode(EWindowMode Mode)
SetVSync(bool bEnabled)
SetFrameRateLimit(float Limit)
SetResolutionScale(float Percentage)

ApplyGraphicsSettings()
SaveGraphicsSettings()
LoadGraphicsSettings()
ResetToDefaults()

GetSupportedResolutions() -> TArray<FIntPoint>
GetCurrentResolution() -> FIntPoint
GetCurrentQualitySettings() -> FUPMQualityPreset
```

#### Extended Settings Functions (via Subsystem):
```
// Access: GetSubsystem<UUPMExtendedSettings>() then call:

// --- CAMERA ---
SetFieldOfView(float FOV)                    | GetFieldOfView() -> float
SetCameraShakeScale(float Scale)             | GetCameraShakeScale() -> float
SetHeadBobEnabled(bool bEnabled)             | GetHeadBobEnabled() -> bool
SetHeadBobIntensity(float Intensity)

// --- MOUSE INPUT ---
SetMouseSensitivity(float Sensitivity)       | GetMouseSensitivity() -> float
SetMouseSensitivityX(float Sensitivity)
SetMouseSensitivityY(float Sensitivity)
SetInvertMouseY(bool bInvert)                | GetInvertMouseY() -> bool
SetInvertMouseX(bool bInvert)
SetMouseSmoothingEnabled(bool bEnabled)      | GetMouseSmoothingEnabled() -> bool
SetMouseAccelerationEnabled(bool bEnabled)   | GetMouseAccelerationEnabled() -> bool

// --- CONTROLLER INPUT ---
SetControllerSensitivity(float Sensitivity)  | GetControllerSensitivity() -> float
SetControllerSensitivityX(float Sensitivity)
SetControllerSensitivityY(float Sensitivity)
SetInvertControllerY(bool bInvert)           | GetInvertControllerY() -> bool
SetInvertControllerX(bool bInvert)
SetControllerDeadzoneInner(float Deadzone)   | GetControllerDeadzoneInner() -> float
SetControllerDeadzoneOuter(float Deadzone)
SetAimSensitivityMultiplier(float Mult)      | GetAimSensitivityMultiplier() -> float

// --- CONTROLLER FEATURES ---
SetVibrationEnabled(bool bEnabled)           | GetVibrationEnabled() -> bool
SetVibrationIntensity(float Intensity)
SetAimAssistEnabled(bool bEnabled)           | GetAimAssistEnabled() -> bool
SetAimAssistStrength(float Strength)

// --- POST PROCESS ---
SetMotionBlurEnabled(bool bEnabled)
SetMotionBlurIntensity(float Intensity)      | GetMotionBlurIntensity() -> float
SetGamma(float Gamma)                        | GetGamma() -> float
SetBrightness(float Brightness)              | GetBrightness() -> float
SetContrast(float Contrast)
SetVignetteIntensity(float Intensity)
SetChromaticAberrationIntensity(float Intensity)
SetFilmGrainIntensity(float Intensity)
SetDepthOfFieldEnabled(bool bEnabled)
SetLensFlareEnabled(bool bEnabled)
SetBloomIntensity(float Intensity)

// --- AUDIO ---
SetMasterVolume(float Volume)                | GetMasterVolume() -> float
SetMusicVolume(float Volume)                 | GetMusicVolume() -> float
SetSFXVolume(float Volume)                   | GetSFXVolume() -> float
SetVoiceVolume(float Volume)                 | GetVoiceVolume() -> float
SetAmbientVolume(float Volume)
SetUIVolume(float Volume)

// --- ACCESSIBILITY ---
SetSubtitlesEnabled(bool bEnabled)           | GetSubtitlesEnabled() -> bool
SetSubtitleSize(EUPMSubtitleSize Size)
SetSubtitleBackground(bool bEnabled)
SetColorblindMode(EUPMColorblindMode Mode)   | GetColorblindMode() -> EUPMColorblindMode
SetColorblindStrength(float Strength)
SetHUDScale(float Scale)                     | GetHUDScale() -> float
SetHighContrastMode(bool bEnabled)
SetReduceScreenShake(bool bEnabled)

// --- UTILITY ---
ApplyAllExtendedSettings()
ResetExtendedToDefaults()
ResetInputToDefaults()
ResetAudioToDefaults()
ResetVisualToDefaults()
```

#### Performance Functions:
```
GetCurrentFPS() -> float
GetAverageFPS() -> float
GetFrameTimeMs() -> float
GetPerformanceStats() -> FUPMPerformanceStats
EnablePerformanceMonitoring(bool bEnable)
SetMonitoringMode(EUPMMonitoringMode Mode)
StartBenchmark(float Duration)
GetBenchmarkResults() -> FUPMBenchmarkResults
```

#### Auto-Detection:
```
AutoDetectQualitySettings() -> FUPMQualityPreset
RunHardwareBenchmark(float Duration) -> FUPMBenchmarkResults
GetRecommendedSettings() -> FUPMQualityPreset
```

### 5.2 Blueprint Events/Delegates

```cpp
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingsChanged, FUPMQualityPreset, NewSettings);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFPSUpdated, float, CurrentFPS);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBenchmarkComplete, FUPMBenchmarkResults, Results);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSettingsApplied);
```

---

## 6. Shipping Build Considerations

### 6.1 What Works ✓

- All `UGameUserSettings` getters and setters
- `Scalability::SetQualityLevels()` and related functions
- `USaveGame` system
- `FApp::GetDeltaTime()` and frame timing
- `FPlatformMemory::GetStats()`
- Global frame time variables (`GGameThreadTime`, etc.)
- Direct property modification on components
- Material Parameter Collections

### 6.2 What Does NOT Work ✗

- `Execute Console Command` nodes
- `stat` commands (stat fps, stat unit, etc.)
- Most `r.` commands via string execution
- `GNumDrawCallsRHI` may return 0
- Some RHI statistics are editor-only

### 6.3 Conditional Compilation

Use `#if !UE_BUILD_SHIPPING` for editor-only features:

```cpp
#if !UE_BUILD_SHIPPING
    // Debug-only stat gathering
    DrawCalls = GNumDrawCallsRHI;
#endif
```

### 6.4 Testing Checklist

Before shipping, test in a **Development** and **Shipping** build:

**Graphics (Scalability):**
- [ ] All quality presets apply correctly (Low → Cinematic)
- [ ] Individual quality settings work (shadows, textures, etc.)
- [ ] Settings persist after restart
- [ ] Resolution changes work
- [ ] Fullscreen/windowed modes switch correctly
- [ ] VSync toggles correctly
- [ ] Frame rate limit applies

**Extended Settings - Camera:**
- [ ] FOV changes apply immediately
- [ ] FOV persists after level load
- [ ] FOV persists after pawn respawn
- [ ] Camera shake scale works
- [ ] Head bob toggle works (if implemented in game)

**Extended Settings - Input:**
- [ ] Mouse sensitivity affects look speed
- [ ] X/Y sensitivity work independently
- [ ] Invert Y works for mouse
- [ ] Invert Y works for controller
- [ ] Controller sensitivity works
- [ ] Controller deadzone feels correct
- [ ] Aim sensitivity multiplier works (ADS)
- [ ] Vibration toggle works
- [ ] Vibration intensity scales correctly
- [ ] Aim assist toggle works (if implemented)

**Extended Settings - Post Process:**
- [ ] Motion blur on/off works
- [ ] Motion blur intensity scales
- [ ] Gamma changes visible
- [ ] Brightness changes visible
- [ ] Film grain on/off works
- [ ] Vignette intensity works
- [ ] Chromatic aberration works
- [ ] Bloom intensity works

**Extended Settings - Audio:**
- [ ] Master volume affects all audio
- [ ] Music volume independent
- [ ] SFX volume independent
- [ ] Voice/dialogue volume independent
- [ ] Volumes persist after restart

**Extended Settings - Accessibility:**
- [ ] Subtitles toggle works (if implemented)
- [ ] Colorblind modes apply (if implemented)
- [ ] HUD scale changes UI size

**Performance Monitor:**
- [ ] FPS counter shows accurate values
- [ ] Frame time displays correctly
- [ ] No crashes on stats query
- [ ] Memory usage available (or gracefully hidden)

**Save/Load:**
- [ ] All settings save correctly
- [ ] All settings load on game start
- [ ] Reset to defaults works
- [ ] Save file created in correct location

---

## 7. Optional Features

### 7.1 Benchmark System

A built-in benchmark that:
1. Forces a specific quality level temporarily
2. Renders a standardized scene or uses current gameplay
3. Records FPS samples over time
4. Calculates average, 1% low, 0.1% low
5. Recommends quality preset based on results

### 7.2 VRAM Estimation

Create a rough VRAM usage estimator based on:
- Texture quality setting
- Resolution
- Known texture pool sizes

Display warning if estimated usage exceeds detected VRAM.

### 7.3 Preset Export/Import

Allow users to export their settings to a JSON file and import on another machine.

### 7.4 Per-Map Quality Overrides

Optional system to automatically adjust quality based on map complexity (defined by developer).

### 7.5 Ready-Made UI Widgets

Include optional UMG widgets:
- Settings panel (vertical box with all settings)
- FPS counter (corner widget)
- Performance graph (optional detailed view)

---

## 8. Implementation Priority

### Phase 1: Core (MVP)
1. Plugin structure and module setup
2. UPMCore subsystem
3. Basic graphics settings (scalability only)
4. Save/Load system
5. Blueprint library basics

### Phase 2: Extended Settings & Display
1. UPMExtendedSettings subsystem (FOV, motion blur, gamma, etc.)
2. Resolution/fullscreen management
3. Auto-apply on level load / pawn possession
4. Integration with save system

### Phase 3: Performance Monitoring
1. FPS monitoring
2. Frame time tracking
3. Performance stats struct
4. Optional performance graph data

### Phase 4: Polish
1. Auto-detection / hardware benchmark
2. Quality presets
3. All Blueprint exposure
4. Delegates/events

### Phase 5: Optional
1. Benchmark system
2. UI widgets
3. Advanced features (VRAM estimation, preset export)

---

## 9. API Quick Reference

### Most Common Usage (Blueprint)

```
// ===== GRAPHICS (Scalability) =====
Set Overall Quality (3)  // High
Apply Graphics Settings
Save Graphics Settings

// ===== EXTENDED SETTINGS (via Subsystem) =====
// FOV
Get Subsystem (UUPMExtendedSettings) → Set Field Of View (100.0)

// Mouse Sensitivity
Get Subsystem (UUPMExtendedSettings) → Set Mouse Sensitivity (1.5)
Get Subsystem (UUPMExtendedSettings) → Set Invert Mouse Y (true)

// Controller
Get Subsystem (UUPMExtendedSettings) → Set Controller Sensitivity (0.8)
Get Subsystem (UUPMExtendedSettings) → Set Vibration Enabled (false)
Get Subsystem (UUPMExtendedSettings) → Set Aim Assist Strength (0.7)

// Visual Effects
Get Subsystem (UUPMExtendedSettings) → Set Motion Blur Enabled (false)
Get Subsystem (UUPMExtendedSettings) → Set Gamma (2.4)

// Audio
Get Subsystem (UUPMExtendedSettings) → Set Master Volume (0.8)
Get Subsystem (UUPMExtendedSettings) → Set Music Volume (0.5)

// Accessibility
Get Subsystem (UUPMExtendedSettings) → Set Subtitles Enabled (true)
Get Subsystem (UUPMExtendedSettings) → Set Colorblind Mode (Deuteranopia)
Get Subsystem (UUPMExtendedSettings) → Set HUD Scale (1.2)

// ===== PERFORMANCE =====
Get Current FPS -> Print

// ===== RESOLUTION =====
Get Supported Resolutions -> [Array of resolutions]
Set Resolution (1920, 1080)
Set Fullscreen Mode (Fullscreen)
Apply Graphics Settings
```

### Most Common Usage (C++)

```cpp
// ===== Get the core =====
UUPMCore* UPM = UUPMCore::Get(GetWorld());

// ===== Scalability settings =====
UPM->GetGraphicsManager()->SetOverallQuality(3);
UPM->GetGraphicsManager()->Apply();
UPM->GetGraphicsManager()->Save();

// ===== Extended settings (FOV, input, audio, etc.) =====
UUPMExtendedSettings* Extended = GetLocalPlayer()->GetSubsystem<UUPMExtendedSettings>();

// Camera
Extended->SetFieldOfView(100.0f);
Extended->SetCameraShakeScale(0.5f);

// Mouse
Extended->SetMouseSensitivity(1.5f);
Extended->SetInvertMouseY(true);

// Controller
Extended->SetControllerSensitivity(0.8f);
Extended->SetControllerDeadzoneInner(0.15f);
Extended->SetVibrationEnabled(true);
Extended->SetAimAssistStrength(0.7f);

// Post Process
Extended->SetMotionBlurEnabled(false);
Extended->SetGamma(2.4f);
Extended->SetBrightness(1.1f);

// Audio
Extended->SetMasterVolume(0.8f);
Extended->SetMusicVolume(0.5f);
Extended->SetSFXVolume(1.0f);

// Accessibility
Extended->SetSubtitlesEnabled(true);
Extended->SetColorblindMode(EUPMColorblindMode::Deuteranopia);
Extended->SetHUDScale(1.2f);

// Apply all at once
Extended->ApplyAllExtendedSettings();

// ===== Performance monitoring =====
float FPS = UPM->GetPerformanceMonitor()->GetCurrentFPS();
```

### Settings Menu Pattern (Blueprint)

```
// On Menu Open - populate UI with current values:
FOV_Slider.SetValue(GetSubsystem(UPMExtendedSettings).GetFieldOfView())
Sensitivity_Slider.SetValue(GetSubsystem(UPMExtendedSettings).GetMouseSensitivity())
InvertY_Checkbox.SetChecked(GetSubsystem(UPMExtendedSettings).GetInvertMouseY())
MasterVolume_Slider.SetValue(GetSubsystem(UPMExtendedSettings).GetMasterVolume())

// On Slider/Checkbox Changed - apply immediately or on "Apply" button:
GetSubsystem(UPMExtendedSettings).SetFieldOfView(FOV_Slider.GetValue())
GetSubsystem(UPMExtendedSettings).SetMouseSensitivity(Sensitivity_Slider.GetValue())
// etc...

// On "Apply" button:
GetSubsystem(UPMExtendedSettings).ApplyAllExtendedSettings()
UPMSaveLoad::SaveAllSettings()

// On "Reset to Defaults" button:
GetSubsystem(UPMExtendedSettings).ResetExtendedToDefaults()
// Refresh UI sliders with new default values
```

---

## 10. Setup Requirements

### 10.1 Audio System Setup

For audio volume controls to work, your project needs:

1. **Create Sound Classes** (in Content Browser → Audio → Sound Class):
   - `SC_Master` — Parent of all others
   - `SC_Music` — For music tracks
   - `SC_SFX` — For sound effects
   - `SC_Voice` — For dialogue/voice
   - `SC_Ambient` — For ambient sounds
   - `SC_UI` — For menu/UI sounds

2. **Create Sound Mix** (Audio → Sound Mix):
   - `UPM_SoundMix` — Used by UPM to control volumes

3. **Assign all audio assets** to appropriate Sound Classes in their properties

4. **Update paths** in `UUPMExtendedSettings::ApplyAudioSettings()` to match your asset paths

### 10.2 Colorblind Materials (Optional)

If using colorblind modes:

1. **Create Post-Process Materials**:
   - `PP_Colorblind_Protanopia`
   - `PP_Colorblind_Deuteranopia`
   - `PP_Colorblind_Tritanopia`

2. Each material applies a color matrix transformation. Standard matrices available online.

### 10.3 Enhanced Input System (UE5)

If using Enhanced Input for sensitivity:

1. Either create `UUPMSensitivityModifier` (custom Input Modifier)
2. Or use the legacy `InputYawScale`/`InputPitchScale` approach
3. Document provides both options in Section 4.3.5-4.3.6

### 10.4 Project Settings

Ensure these are configured:
- **Game User Settings Class** — Can be default or custom subclass
- **Save Game Slot Name** — UPM uses "UPMSettings" by default

---

## 11. Notes

- Always call `ApplySettings(false)` before `SaveSettings()` on UGameUserSettings
- Resolution changes may require confirmation timer (revert if not confirmed)
- Some settings require level reload to fully apply (texture streaming)
- Test on minimum spec hardware, not just development machines
- Consider adding "Apply" and "Revert" flow for settings changes

---

*Document Version: 1.0*  
*Target Engine: Unreal Engine 5.3+*