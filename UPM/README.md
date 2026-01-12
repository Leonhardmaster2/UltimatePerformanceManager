# UPM - Ultimate Performance Manager

## Complete Documentation v1.0

A comprehensive Unreal Engine 5.6+ plugin providing shipping-safe graphics settings, real-time performance monitoring, extended player settings, and menu-ready components for game settings menus.

---

## Table of Contents

1. [Overview](#1-overview)
2. [Architecture](#2-architecture)
3. [Installation](#3-installation)
4. [Quick Start Guide](#4-quick-start-guide)
5. [Core Systems In-Depth](#5-core-systems-in-depth)
6. [Complete API Reference](#6-complete-api-reference)
7. [Blueprint Integration](#7-blueprint-integration)
8. [C++ Integration](#8-c-integration)
9. [Settings Menu Implementation](#9-settings-menu-implementation)
10. [Save/Load System](#10-saveload-system)
11. [Performance Monitoring](#11-performance-monitoring)
12. [Unsaved Changes Tracking](#12-unsaved-changes-tracking)
13. [Known Limitations](#13-known-limitations)
14. [Troubleshooting](#14-troubleshooting)
15. [Best Practices](#15-best-practices)

---

## 1. Overview

### What is UPM?

UPM (Ultimate Performance Manager) is a complete settings management solution for Unreal Engine games. It provides:

- **Graphics Settings**: Full scalability control (textures, shadows, effects, etc.)
- **Display Settings**: Resolution, fullscreen mode, VSync, frame rate limiting
- **Extended Settings**: FOV, sensitivity, audio volumes, accessibility options
- **Performance Monitoring**: Real-time FPS, frame times, memory usage, benchmarking
- **Save/Load System**: Automatic persistence with version migration support
- **Unsaved Changes Tracking**: Know when users have pending changes to save

### Key Features

| Feature | Description |
|---------|-------------|
| Shipping-Safe | All APIs work in packaged builds |
| Blueprint-Ready | Full Blueprint exposure for all functions |
| Auto-Persistence | Settings save/load automatically |
| Performance Monitoring | Real-time stats with minimal overhead |
| Benchmarking | Built-in benchmark system with quality recommendations |
| Accessibility | Colorblind modes, subtitles, HUD scaling |
| Unsaved Changes | Track when settings need saving |

---

## 2. Architecture

### System Hierarchy

```
UPMCore (GameInstanceSubsystem)
├── UPMGraphicsManager (UObject)
│   └── Wraps UGameUserSettings for scalability
├── UPMPerformanceMonitor (UObject + FTickableGameObject)
│   └── Real-time performance tracking
└── [Per-Player via LocalPlayerSubsystem]
    └── UPMExtendedSettings
        └── FOV, sensitivity, audio, accessibility

UPMSaveLoad (Static Utility)
└── Handles persistence via USaveGame

UPMBlueprintLibrary (Static Functions)
└── Convenience wrappers for Blueprints
```

### Class Overview

| Class | Type | Lifetime | Purpose |
|-------|------|----------|---------|
| `UUPMCore` | GameInstanceSubsystem | Game Instance | Central coordinator, persists across levels |
| `UUPMGraphicsManager` | UObject | Owned by Core | Scalability/display settings |
| `UUPMPerformanceMonitor` | UObject | Owned by Core | FPS/performance tracking |
| `UUPMExtendedSettings` | LocalPlayerSubsystem | Per LocalPlayer | Player-specific settings |
| `UUPMSaveLoad` | Static | N/A | Save/load operations |
| `UUPMSettingsData` | USaveGame | Per save slot | Serialized settings data |
| `UUPMBlueprintLibrary` | Static | N/A | Blueprint convenience functions |

### Data Flow

```
User Input (UI)
       │
       ▼
UPMBlueprintLibrary (or direct calls)
       │
       ├─► UPMCore::MarkSettingsChanged()
       │         │
       │         ▼
       │   bHasUnsavedChanges = true
       │   OnSettingsChanged.Broadcast()
       │
       ▼
UPMGraphicsManager / UPMExtendedSettings
       │
       ├─► UGameUserSettings (engine scalability)
       └─► Runtime components (FOV, post-process, etc.)

       │
       ▼ (on ApplySettings)
UGameUserSettings::ApplySettings()
OnSettingsApplied.Broadcast()

       │
       ▼ (on SaveAllSettings)
UPMSaveLoad::SaveAllSettings()
       │
       ├─► USaveGame serialization
       └─► UGameUserSettings::SaveSettings()
       │
       ▼
bHasUnsavedChanges = false
```

---

## 3. Installation

### Step 1: Copy Plugin
Copy the `UPM` folder to your project's `Plugins` directory:
```
YourProject/
├── Content/
├── Source/
└── Plugins/
    └── UPM/           <-- Copy here
        ├── Source/
        ├── UPM.uplugin
        └── README.md
```

### Step 2: Regenerate Project Files
- Close the editor
- Right-click your `.uproject` file
- Select "Generate Visual Studio project files"

### Step 3: Build
Open the solution and build (F5 in VS, or Ctrl+Shift+B)

### Step 4: Enable Plugin (if needed)
The plugin should auto-enable. If not:
1. Open Editor → Edit → Plugins
2. Search "UPM"
3. Enable and restart

### Verification
In the editor Output Log, you should see:
```
LogUPM: UPM Plugin loaded successfully
```

---

## 4. Quick Start Guide

### Blueprint Quick Start

**Get FPS:**
```
Get Current FPS (WorldContext) → Float
```

**Set Quality to Ultra:**
```
Set Overall Quality (WorldContext, Quality: 3)
Apply Graphics Settings (WorldContext)
Save Graphics Settings (WorldContext)
```

**Check for Unsaved Changes:**
```
Get UPM Core (WorldContext) → Has Unsaved Changes → Boolean
```

### C++ Quick Start

```cpp
#include "UPMCore.h"
#include "UPMGraphicsManager.h"

void AMyActor::SetGraphicsToUltra()
{
    if (UUPMCore* Core = UUPMCore::Get(this))
    {
        // Set quality
        Core->GetGraphicsManager()->SetOverallQuality(3);

        // Apply changes
        Core->ApplyAllSettings();

        // Save to disk
        Core->SaveAllSettings();

        // Check unsaved status
        bool bNeedsSave = Core->HasUnsavedChanges();
    }
}
```

---

## 5. Core Systems In-Depth

### 5.1 UPMCore

The central hub for all UPM functionality. As a `GameInstanceSubsystem`, it:
- Initializes automatically when the game starts
- Persists across level loads
- Cleans up automatically on game exit

**Accessing UPMCore:**

```cpp
// From any UObject with world context
UUPMCore* Core = UUPMCore::Get(this);

// From GameInstance directly
UUPMCore* Core = GameInstance->GetSubsystem<UUPMCore>();
```

**Key Properties:**
| Property | Type | Description |
|----------|------|-------------|
| `GraphicsManager` | UUPMGraphicsManager* | Scalability/display settings |
| `PerformanceMonitor` | UUPMPerformanceMonitor* | Performance tracking |
| `bHasUnsavedChanges` | bool | True if settings modified since last save |

**Delegates:**
| Delegate | Signature | When Fired |
|----------|-----------|------------|
| `OnSettingsChanged` | `FOnSettingsChanged(FUPMQualityPreset)` | Any setting modified |
| `OnSettingsApplied` | `FOnSettingsApplied()` | After ApplyAllSettings() |

### 5.2 UPMGraphicsManager

Wraps `UGameUserSettings` to provide a clean API for graphics settings.

**Quality Levels:**
| Value | Name | Use Case |
|-------|------|----------|
| 0 | Low | Integrated graphics, older hardware |
| 1 | Medium | Entry-level dedicated GPU |
| 2 | High | Mid-range hardware (default) |
| 3 | Ultra | High-end hardware |
| 4 | Cinematic | Top-tier hardware, screenshots |

**Important Concepts:**

1. **Pending Changes**: Settings are staged until `ApplySettings()` is called
2. **HasPendingChanges()**: True if changes staged but not applied
3. **HasUnsavedChanges()**: True if changes not saved to disk (via UPMCore)

### 5.3 UPMExtendedSettings

Per-player settings that aren't in `UGameUserSettings`:

**Categories:**
- Camera: FOV, shake, head bob
- Mouse: Sensitivity, inversion, smoothing
- Controller: Sensitivity, deadzone, vibration, aim assist
- Post-Process: Motion blur, gamma, brightness, effects
- Audio: Volume channels
- Accessibility: Subtitles, colorblind, HUD scale

**Accessing:**
```cpp
ULocalPlayer* LP = GetWorld()->GetFirstLocalPlayerFromController();
UUPMExtendedSettings* Ext = LP->GetSubsystem<UUPMExtendedSettings>();
```

### 5.4 UPMPerformanceMonitor

Real-time performance statistics with optional benchmarking.

**Monitoring Modes:**
| Mode | Overhead | Metrics |
|------|----------|---------|
| Disabled | None | None |
| Basic | Minimal | FPS, frame time |
| Detailed | Low | + thread times, memory |
| Benchmark | Medium | All + recording |

**Usage Pattern:**
```cpp
UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor();
PM->SetMonitoringMode(EUPMMonitoringMode::Basic);

// In tick or timer
float FPS = PM->GetCurrentFPS();
float AvgFPS = PM->GetAverageFPS();
```

---

## 6. Complete API Reference

### 6.1 Graphics Manager API

#### Quality Settings (0-4 scale)

| Function | Description |
|----------|-------------|
| `SetOverallQuality(int32)` | Sets all quality settings at once |
| `GetOverallQuality()` | Returns -1 if mixed, 0-4 otherwise |
| `SetViewDistanceQuality(int32)` | Draw distance for objects |
| `SetAntiAliasingQuality(int32)` | AA quality (affects method used) |
| `SetShadowQuality(int32)` | Shadow resolution and cascades |
| `SetGlobalIlluminationQuality(int32)` | GI method and quality |
| `SetReflectionQuality(int32)` | SSR/RT reflections |
| `SetPostProcessQuality(int32)` | Post-process effects |
| `SetTextureQuality(int32)` | Texture resolution/streaming |
| `SetEffectsQuality(int32)` | Particle/VFX quality |
| `SetFoliageQuality(int32)` | Foliage density/LOD |
| `SetShadingQuality(int32)` | Shader complexity |

#### Display Settings

| Function | Parameters | Description |
|----------|------------|-------------|
| `SetScreenResolution` | `FIntPoint` | Set resolution (e.g., 1920x1080) |
| `GetScreenResolution` | - | Current resolution |
| `GetSupportedResolutions` | - | Array of valid resolutions |
| `SetFullscreenMode` | `EWindowMode::Type` | Windowed/Borderless/Fullscreen |
| `GetFullscreenMode` | - | Current window mode |
| `SetVSyncEnabled` | `bool` | Enable/disable VSync |
| `GetVSyncEnabled` | - | VSync state |
| `SetFrameRateLimit` | `float` | FPS cap (0 = unlimited) |
| `GetFrameRateLimit` | - | Current FPS limit |
| `SetResolutionScale` | `float` (25-100) | Render resolution % |
| `GetResolutionScale` | - | Current scale |

#### Utility

| Function | Description |
|----------|-------------|
| `ApplySettings()` | Apply pending changes to engine |
| `SaveSettings()` | Save to GameUserSettings.ini |
| `ResetToDefaults()` | Reset all to engine defaults |
| `AutoDetectQuality()` | Run benchmark, set optimal |
| `HasPendingChanges()` | True if unapplied changes exist |

### 6.2 Extended Settings API

#### Camera Settings

| Function | Range | Default | Description |
|----------|-------|---------|-------------|
| `SetFieldOfView` | 60-120 | 90 | Camera FOV in degrees |
| `GetFieldOfView` | - | - | Current FOV |
| `SetCameraShakeScale` | 0-2 | 1.0 | Shake intensity multiplier |
| `GetCameraShakeScale` | - | - | Current shake scale |
| `SetHeadBobEnabled` | bool | true | Enable head bob effect |
| `GetHeadBobEnabled` | - | - | Head bob state |
| `SetHeadBobIntensity` | 0-2 | 1.0 | Head bob strength |

#### Mouse Input

| Function | Range | Default | Description |
|----------|-------|---------|-------------|
| `SetMouseSensitivity` | 0.1-5.0 | 1.0 | Overall sensitivity |
| `SetMouseSensitivityX` | 0.1-5.0 | 1.0 | Horizontal only |
| `SetMouseSensitivityY` | 0.1-5.0 | 1.0 | Vertical only |
| `SetInvertMouseY` | bool | false | Invert Y axis |
| `SetInvertMouseX` | bool | false | Invert X axis |
| `SetMouseSmoothingEnabled` | bool | false | Enable smoothing |
| `SetMouseAccelerationEnabled` | bool | false | Enable acceleration |

#### Controller Input

| Function | Range | Default | Description |
|----------|-------|---------|-------------|
| `SetControllerSensitivity` | 0.1-5.0 | 1.0 | Overall sensitivity |
| `SetControllerSensitivityX` | 0.1-5.0 | 1.0 | Horizontal only |
| `SetControllerSensitivityY` | 0.1-5.0 | 1.0 | Vertical only |
| `SetInvertControllerY` | bool | false | Invert Y axis |
| `SetInvertControllerX` | bool | false | Invert X axis |
| `SetControllerDeadzoneInner` | 0-0.5 | 0.2 | Inner deadzone radius |
| `SetControllerDeadzoneOuter` | 0.5-1.0 | 0.9 | Outer deadzone radius |
| `SetAimSensitivityMultiplier` | 0.1-2.0 | 0.7 | ADS sensitivity scale |

#### Controller Features

| Function | Range | Default | Description |
|----------|-------|---------|-------------|
| `SetVibrationEnabled` | bool | true | Enable haptic feedback |
| `SetVibrationIntensity` | 0-1 | 1.0 | Vibration strength |
| `SetAimAssistEnabled` | bool | true | Enable aim assist |
| `SetAimAssistStrength` | 0-1 | 0.5 | Aim assist strength |

#### Post-Process Effects

| Function | Range | Default | Description |
|----------|-------|---------|-------------|
| `SetMotionBlurEnabled` | bool | true | Enable motion blur |
| `SetMotionBlurIntensity` | 0-1 | 0.5 | Motion blur amount |
| `SetGamma` | 1.0-3.0 | 2.2 | Display gamma |
| `SetBrightness` | 0.5-1.5 | 1.0 | Brightness multiplier |
| `SetContrast` | 0.5-1.5 | 1.0 | Contrast multiplier |
| `SetVignetteIntensity` | 0-1 | 0.4 | Vignette strength |
| `SetChromaticAberrationIntensity` | 0-5 | 0.0 | CA amount |
| `SetFilmGrainIntensity` | 0-1 | 0.0 | Film grain amount |
| `SetDepthOfFieldEnabled` | bool | true | Enable DOF |
| `SetLensFlareEnabled` | bool | true | Enable lens flares |
| `SetBloomIntensity` | 0-2 | 0.5 | Bloom strength |

#### Audio Volumes

| Function | Range | Default | Description |
|----------|-------|---------|-------------|
| `SetMasterVolume` | 0-1 | 1.0 | Master volume |
| `SetMusicVolume` | 0-1 | 1.0 | Music volume |
| `SetSFXVolume` | 0-1 | 1.0 | Sound effects |
| `SetVoiceVolume` | 0-1 | 1.0 | Voice/dialogue |
| `SetAmbientVolume` | 0-1 | 1.0 | Ambient sounds |
| `SetUIVolume` | 0-1 | 1.0 | UI sounds |

#### Accessibility

| Function | Range/Type | Default | Description |
|----------|------------|---------|-------------|
| `SetSubtitlesEnabled` | bool | false | Show subtitles |
| `SetSubtitleSize` | EUPMSubtitleSize | Medium | Small/Medium/Large/ExtraLarge |
| `SetSubtitleBackground` | bool | true | Show background |
| `SetColorblindMode` | EUPMColorblindMode | None | None/Protanopia/Deuteranopia/Tritanopia |
| `SetColorblindStrength` | 0-1 | 1.0 | Filter intensity |
| `SetHUDScale` | 0.5-2.0 | 1.0 | HUD size multiplier |
| `SetHighContrastMode` | bool | false | High contrast UI |
| `SetReduceScreenShake` | bool | false | Minimize shake |

### 6.3 Performance Monitor API

#### Core Metrics

| Function | Return | Description |
|----------|--------|-------------|
| `GetCurrentFPS()` | float | Instantaneous FPS |
| `GetAverageFPS()` | float | Rolling average FPS |
| `GetMinFPS()` | float | Minimum in sample window |
| `GetMaxFPS()` | float | Maximum in sample window |
| `GetFrameTimeMs()` | float | Frame time in ms |

#### Detailed Metrics

| Function | Return | Description |
|----------|--------|-------------|
| `GetGameThreadMs()` | float | Game thread time |
| `GetRenderThreadMs()` | float | Render thread time |
| `GetGPUTimeMs()` | float | GPU frame time |
| `GetUsedMemoryMB()` | int64 | Used physical RAM |
| `GetAvailableMemoryMB()` | int64 | Available physical RAM |

#### Benchmarking

| Function | Description |
|----------|-------------|
| `StartBenchmark(float Duration)` | Begin recording (default 10s) |
| `StopBenchmark()` | Stop early |
| `IsBenchmarkRunning()` | Check if active |
| `GetBenchmarkResults()` | Get FUPMBenchmarkResults |

---

## 7. Blueprint Integration

### Available Blueprint Nodes

All UPMBlueprintLibrary functions are available as Blueprint nodes:

**Category: UPM|Graphics**
- Set Overall Quality
- Get Overall Quality
- Set Texture Quality
- Set Shadow Quality
- Set View Distance Quality
- Set Anti-Aliasing Quality
- Set Post Process Quality
- Set Effects Quality
- Apply Graphics Settings
- Save Graphics Settings
- Load Graphics Settings
- Reset To Defaults
- Auto Detect Quality Settings

**Category: UPM|Display**
- Set Resolution
- Get Current Resolution
- Get Supported Resolutions
- Set Fullscreen Mode
- Set VSync
- Set Frame Rate Limit
- Set Resolution Scale

**Category: UPM|Performance**
- Get Current FPS
- Get Average FPS
- Get Frame Time Ms
- Get Performance Stats
- Enable Performance Monitoring
- Set Monitoring Mode

**Category: UPM|Benchmark**
- Start Benchmark
- Get Benchmark Results

### Blueprint Example: Settings Menu

```
Event Construct:
  ├─► Get UPM Core (Self)
  ├─► Get Graphics Manager
  ├─► Get Overall Quality → Set Slider Value (QualitySlider)
  └─► Get VSync Enabled → Set Checked State (VSyncCheckbox)

On Quality Slider Changed:
  ├─► Set Overall Quality (Self, NewValue)
  └─► [Optionally show "unsaved" indicator]

On Apply Button Clicked:
  ├─► Apply Graphics Settings (Self)
  └─► Save Graphics Settings (Self)

On Cancel Button Clicked:
  └─► Load Graphics Settings (Self)  // Revert changes
```

---

## 8. C++ Integration

### Header Includes

```cpp
// Core access
#include "UPMCore.h"

// Graphics settings
#include "UPMGraphicsManager.h"

// Performance monitoring
#include "UPMPerformanceMonitor.h"

// Extended settings (per-player)
#include "UPMExtendedSettings.h"

// Save/Load utilities
#include "UPMSaveLoad.h"

// Type definitions
#include "UPMTypes.h"
```

### Common Patterns

**Getting UPMCore:**
```cpp
// From Actor
UUPMCore* Core = UUPMCore::Get(this);

// From PlayerController
UUPMCore* Core = UUPMCore::Get(GetWorld());

// Null check (subsystem may not exist in editor)
if (UUPMCore* Core = UUPMCore::Get(this))
{
    // Safe to use
}
```

**Batch Settings Update:**
```cpp
void UMySettingsManager::ApplyQualityPreset(int32 Level)
{
    UUPMCore* Core = UUPMCore::Get(this);
    if (!Core) return;

    UUPMGraphicsManager* GM = Core->GetGraphicsManager();

    // Make multiple changes
    GM->SetOverallQuality(Level);
    GM->SetVSyncEnabled(Level >= 2);
    GM->SetFrameRateLimit(Level == 0 ? 30.0f : 0.0f);

    // Apply all at once
    Core->ApplyAllSettings();

    // Save
    Core->SaveAllSettings();
}
```

**Listening for Changes:**
```cpp
void UMyWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (UUPMCore* Core = UUPMCore::Get(this))
    {
        Core->OnSettingsChanged.AddDynamic(this, &UMyWidget::OnSettingsChanged);
        Core->OnSettingsApplied.AddDynamic(this, &UMyWidget::OnSettingsApplied);
    }
}

void UMyWidget::OnSettingsChanged(FUPMQualityPreset NewSettings)
{
    // Update UI to reflect changes
    RefreshUI();
}

void UMyWidget::OnSettingsApplied()
{
    // Settings were applied
    ShowNotification("Settings Applied!");
}
```

---

## 9. Settings Menu Implementation

### Recommended UI Structure

```
Settings Menu (UserWidget)
├── Tab: Graphics
│   ├── Quality Preset Dropdown (Low/Medium/High/Ultra/Cinematic)
│   ├── Individual Settings (collapsible)
│   │   ├── Textures Slider
│   │   ├── Shadows Slider
│   │   ├── Effects Slider
│   │   └── ...
│   └── Display Settings
│       ├── Resolution Dropdown
│       ├── Window Mode Dropdown
│       ├── VSync Checkbox
│       └── Frame Rate Limit Slider
├── Tab: Gameplay
│   ├── FOV Slider
│   ├── Mouse Sensitivity Slider
│   ├── Controller Sensitivity Slider
│   └── Invert Y Checkbox
├── Tab: Audio
│   ├── Master Volume Slider
│   ├── Music Volume Slider
│   ├── SFX Volume Slider
│   └── Voice Volume Slider
├── Tab: Accessibility
│   ├── Subtitles Checkbox
│   ├── Subtitle Size Dropdown
│   ├── Colorblind Mode Dropdown
│   └── HUD Scale Slider
└── Buttons
    ├── Apply (calls ApplyAllSettings + SaveAllSettings)
    ├── Cancel (calls LoadAllSettings)
    └── Reset to Defaults (calls ResetToDefaults)
```

### Handling Unsaved Changes

```cpp
// When user tries to close settings menu
void USettingsMenu::OnCloseRequested()
{
    UUPMCore* Core = UUPMCore::Get(this);
    if (Core && Core->HasUnsavedChanges())
    {
        // Show confirmation dialog
        ShowDialog("You have unsaved changes. Save before closing?",
            [this, Core]() { // Yes
                Core->SaveAllSettings();
                CloseMenu();
            },
            [this, Core]() { // No
                Core->LoadAllSettings(); // Revert
                CloseMenu();
            },
            [this]() { // Cancel
                // Stay in menu
            }
        );
    }
    else
    {
        CloseMenu();
    }
}
```

### Resolution Dropdown Population

```cpp
void USettingsMenu::PopulateResolutionDropdown()
{
    ResolutionDropdown->ClearOptions();

    UUPMCore* Core = UUPMCore::Get(this);
    if (!Core) return;

    TArray<FIntPoint> Resolutions = Core->GetGraphicsManager()->GetSupportedResolutions();
    FIntPoint Current = Core->GetGraphicsManager()->GetScreenResolution();

    int32 CurrentIndex = 0;
    for (int32 i = 0; i < Resolutions.Num(); i++)
    {
        FString Option = FString::Printf(TEXT("%d x %d"),
            Resolutions[i].X, Resolutions[i].Y);
        ResolutionDropdown->AddOption(Option);

        if (Resolutions[i] == Current)
        {
            CurrentIndex = i;
        }
    }

    ResolutionDropdown->SetSelectedIndex(CurrentIndex);
}
```

---

## 10. Save/Load System

### How It Works

UPM uses a dual-save strategy:

1. **UGameUserSettings** (Engine)
   - Scalability settings
   - Resolution, fullscreen mode
   - Saved to: `GameUserSettings.ini`

2. **USaveGame** (UPM)
   - Extended settings (FOV, sensitivity, etc.)
   - Performance monitor preferences
   - Saved to: `SaveGames/UPMSettings.sav`

### Save Slot Management

```cpp
// Default slot
UUPMSaveLoad::SaveAllSettings(this); // Uses "UPMSettings"

// Custom slot (e.g., per-profile)
UUPMSaveLoad::SaveAllSettings(this, TEXT("Profile1Settings"));

// Check if save exists
bool bExists = UUPMSaveLoad::DoesSettingsSaveExist(TEXT("Profile1Settings"));

// Delete save
UUPMSaveLoad::DeleteSettingsSave(TEXT("Profile1Settings"));
```

### Version Migration

The `UUPMSettingsData` class includes a `SaveVersion` field for future migrations:

```cpp
// In UPMSettingsData constructor
SaveVersion = 1;

// Future migration example (in UPMSaveLoad)
if (LoadedData->SaveVersion < 2)
{
    // Migrate from v1 to v2
    LoadedData->NewField = DefaultValue;
    LoadedData->SaveVersion = 2;
}
```

---

## 11. Performance Monitoring

### Enabling Monitoring

```cpp
UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor();

// Basic mode (minimal overhead)
PM->SetMonitoringMode(EUPMMonitoringMode::Basic);

// Or detailed mode
PM->SetMonitoringMode(EUPMMonitoringMode::Detailed);
```

### Displaying FPS

**Simple (Blueprint):**
```
Event Tick
  └─► Get Current FPS → Format Text → Set Text
```

**Efficient (C++, event-driven):**
```cpp
void UMyWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (UUPMCore* Core = UUPMCore::Get(this))
    {
        Core->GetPerformanceMonitor()->OnFPSUpdated.AddDynamic(
            this, &UMyWidget::UpdateFPSDisplay);
    }
}

void UMyWidget::UpdateFPSDisplay(float CurrentFPS)
{
    FPSText->SetText(FText::AsNumber(FMath::RoundToInt(CurrentFPS)));
}
```

### Running Benchmarks

```cpp
void UBenchmarkUI::StartBenchmark()
{
    UUPMPerformanceMonitor* PM = Core->GetPerformanceMonitor();

    // Bind completion callback
    PM->OnBenchmarkComplete.AddDynamic(this, &UBenchmarkUI::OnBenchmarkComplete);

    // Start 30-second benchmark
    PM->StartBenchmark(30.0f);

    ShowProgress("Benchmarking...");
}

void UBenchmarkUI::OnBenchmarkComplete(FUPMBenchmarkResults Results)
{
    HideProgress();

    // Display results
    ShowResults(FString::Printf(TEXT(
        "Average FPS: %.1f\n"
        "Min FPS: %.1f\n"
        "Max FPS: %.1f\n"
        "1%% Low: %.1f\n"
        "Recommended Quality: %d"),
        Results.AverageFPS,
        Results.MinFPS,
        Results.MaxFPS,
        Results.FPS_1Percentile,
        Results.RecommendedQualityLevel
    ));

    // Optionally auto-apply recommended settings
    Core->GetGraphicsManager()->SetOverallQuality(Results.RecommendedQualityLevel);
}
```

---

## 12. Unsaved Changes Tracking

### How It Works

UPM automatically tracks when settings are modified:

1. **Any setter call** → `MarkSettingsChanged()` → `bHasUnsavedChanges = true`
2. **SaveAllSettings()** → `bHasUnsavedChanges = false`
3. **LoadAllSettings()** → `bHasUnsavedChanges = false`

### Using in UI

**Show "unsaved" indicator:**
```cpp
void USettingsMenu::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (UUPMCore* Core = UUPMCore::Get(this))
    {
        UnsavedIndicator->SetVisibility(
            Core->HasUnsavedChanges()
                ? ESlateVisibility::Visible
                : ESlateVisibility::Collapsed
        );
    }
}
```

**Or bind to delegate:**
```cpp
Core->OnSettingsChanged.AddDynamic(this, &USettingsMenu::OnAnySettingChanged);

void USettingsMenu::OnAnySettingChanged(FUPMQualityPreset)
{
    UnsavedIndicator->SetVisibility(ESlateVisibility::Visible);
}
```

### Extended Settings Tracking

Extended settings also track unsaved state independently:

```cpp
UUPMExtendedSettings* Ext = LocalPlayer->GetSubsystem<UUPMExtendedSettings>();
bool bExtendedUnsaved = Ext->HasUnsavedExtendedChanges();
```

---

## 13. Known Limitations

### PIE (Play In Editor) Limitations

The following do **NOT** work in PIE:

| Feature | Reason | Workaround |
|---------|--------|------------|
| Fullscreen mode | Editor owns window | Test in Standalone |
| Resolution changes | Embedded viewport | Test in Standalone |
| Some display settings | Editor override | Test in Standalone |

**To test properly:**
1. Click dropdown arrow next to "Play"
2. Select "Standalone Game"
3. Or package the game

### Audio Volume Limitations

Audio volumes require project setup:
- Create SoundClass assets (SC_Master, SC_Music, etc.)
- Create SoundMix asset
- Implement volume application in `ApplyAudioSettings()`

### Colorblind Mode Limitations

Colorblind modes require:
- Custom post-process material
- Integration with your rendering pipeline

### Camera Shake (UE 5.6+)

`CameraShakeScale` was removed from `APlayerCameraManager`. Use the stored value when calling camera shake functions:

```cpp
float Scale = ExtSettings->GetCameraShakeScale();
PlayerController->ClientStartCameraShake(ShakeClass, Scale);
```

---

## 14. Troubleshooting

### Settings Not Applying

**Symptom:** Changed settings but no visible effect

**Solutions:**
1. Ensure `ApplySettings()` or `ApplyAllSettings()` is called
2. For display settings, test in Standalone mode
3. Check that settings are within valid ranges

### Settings Not Saving

**Symptom:** Settings reset after restart

**Solutions:**
1. Ensure `SaveAllSettings()` is called
2. Check save directory permissions
3. Verify save slot name is valid (no special characters)
4. Check Output Log for save errors

### FPS Counter Shows 0

**Symptom:** Performance monitor returns 0

**Solutions:**
1. Enable monitoring: `SetMonitoringEnabled(true)`
2. Set mode: `SetMonitoringMode(EUPMMonitoringMode::Basic)`
3. Ensure not in editor-only code path

### Post-Process Effects Not Working

**Symptom:** Gamma/brightness/effects not applying

**Solutions:**
1. Ensure pawn is possessed
2. Check post-process component priority
3. Verify level PP volumes aren't overriding
4. Call `ApplyAllExtendedSettings()` after level load

### Compile Errors

**Error:** `UPMCore` not found

**Solution:** Add to Build.cs:
```csharp
PublicDependencyModuleNames.Add("UPM");
```

---

## 15. Best Practices

### Performance

1. **Don't poll HasUnsavedChanges()** - Use delegates instead
2. **Use Basic monitoring mode** in shipping builds
3. **Batch setting changes** before calling Apply
4. **Don't call Save on every change** - Only on Apply/Exit

### UX

1. **Show unsaved indicator** when changes pending
2. **Confirm on exit** if unsaved changes exist
3. **Provide Apply/Cancel buttons** for atomic changes
4. **Auto-apply non-destructive settings** (like volume)
5. **Warn before destructive actions** (Reset to Defaults)

### Code Organization

1. **Use UPMBlueprintLibrary** for simple operations
2. **Cache UPMCore reference** if used frequently
3. **Unbind delegates** in NativeDestruct/EndPlay
4. **Handle null gracefully** (subsystem may not exist in editor)

### Testing

1. **Always test display settings in Standalone**
2. **Test save/load across sessions**
3. **Verify settings persist after crashes**
4. **Test with fresh save (delete old saves)**

---

## Appendix A: Enums

### EUPMSubtitleSize
```cpp
enum class EUPMSubtitleSize : uint8
{
    Small,
    Medium,
    Large,
    ExtraLarge
};
```

### EUPMColorblindMode
```cpp
enum class EUPMColorblindMode : uint8
{
    None,
    Protanopia,    // Red-blind
    Deuteranopia,  // Green-blind
    Tritanopia     // Blue-blind
};
```

### EUPMMonitoringMode
```cpp
enum class EUPMMonitoringMode : uint8
{
    Disabled,   // No overhead
    Basic,      // FPS + frame time
    Detailed,   // + thread times, memory
    Benchmark   // Recording mode
};
```

---

## Appendix B: Structs

### FUPMQualityPreset
Contains all scalability and display settings for easy preset management.

### FUPMPerformanceStats
Real-time performance metrics snapshot.

### FUPMBenchmarkResults
Benchmark recording results with recommendations.

---

## Version History

### v1.0.0 (Initial Release)
- Full graphics scalability support via UGameUserSettings
- Extended settings system (FOV, sensitivity, audio, accessibility)
- Performance monitoring with benchmarking
- Save/load system with USaveGame
- Unsaved changes tracking
- Complete Blueprint exposure
- UE 5.6 compatibility fixes

---

## License

Copyright UPM Team. All Rights Reserved.

---

## Support

For issues and feature requests, please contact the UPM Team or file an issue in your project's issue tracker.
