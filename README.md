# UPM - Ultimate Performance Manager

A comprehensive Unreal Engine 5.3+ plugin providing shipping-safe graphics settings, real-time performance monitoring, and menu-ready components for game settings menus.

## Features

- **Shipping-Safe Graphics Settings**: All settings work in packaged builds using official UE APIs
- **Extended Settings System**: FOV, input sensitivity, audio volumes, post-process effects, and accessibility options
- **Real-Time Performance Monitoring**: FPS, frame times, thread times, and memory usage
- **Benchmark System**: Record performance data and get quality recommendations
- **Full Blueprint Support**: Every feature accessible from Blueprints
- **Automatic Settings Persistence**: Save and load all settings using USaveGame

## Installation

1. Copy the `Plugins/UPM` folder to your project's `Plugins` directory
2. Regenerate project files
3. Enable the plugin in your project settings (should be auto-enabled)

## Quick Start

### Blueprint Usage

```
// Set overall quality (0-4: Low to Cinematic)
Set Overall Quality (3)
Apply Graphics Settings
Save Graphics Settings

// Access extended settings
Get Subsystem (UUPMExtendedSettings) → Set Field Of View (100.0)
Get Subsystem (UUPMExtendedSettings) → Set Mouse Sensitivity (1.5)
Get Subsystem (UUPMExtendedSettings) → Set Master Volume (0.8)

// Performance monitoring
Get Current FPS → Print
```

### C++ Usage

```cpp
// Get the core
UUPMCore* UPM = UUPMCore::Get(GetWorld());

// Graphics settings
UPM->GetGraphicsManager()->SetOverallQuality(3);
UPM->GetGraphicsManager()->ApplySettings();

// Extended settings
UUPMExtendedSettings* Extended = GetLocalPlayer()->GetSubsystem<UUPMExtendedSettings>();
Extended->SetFieldOfView(100.0f);
Extended->SetMouseSensitivity(1.5f);
Extended->SetMasterVolume(0.8f);

// Performance monitoring
float FPS = UPM->GetPerformanceMonitor()->GetCurrentFPS();
```

## Plugin Structure

```
Plugins/UPM/
├── UPM.uplugin
├── Source/UPM/
│   ├── UPM.Build.cs
│   ├── Public/
│   │   ├── UPM.h                    // Module header
│   │   ├── UPMTypes.h               // Enums and structs
│   │   ├── UPMCore.h                // Central subsystem
│   │   ├── UPMGraphicsManager.h     // Scalability settings
│   │   ├── UPMExtendedSettings.h    // FOV, input, audio, etc.
│   │   ├── UPMPerformanceMonitor.h  // FPS and performance stats
│   │   ├── UPMSettingsData.h        // Save game class
│   │   ├── UPMSaveLoad.h            // Save/load utilities
│   │   └── UPMBlueprintLibrary.h    // Blueprint function library
│   └── Private/
│       └── [Implementation files]
└── Content/
    └── (Optional demo widgets)
```

## Core Systems

### UPMCore (GameInstanceSubsystem)
Central access point for all UPM functionality. Persists across level loads.

### UPMGraphicsManager
Handles all scalability settings using shipping-safe APIs:
- Overall Quality, View Distance, Anti-Aliasing, Shadows
- Global Illumination, Reflections, Post Process, Textures
- Effects, Foliage, Shading, Resolution Scale
- VSync, Frame Rate Limit, Fullscreen Mode

### UPMExtendedSettings (LocalPlayerSubsystem)
Per-player settings that require direct application:
- **Camera**: FOV, Camera Shake, Head Bob
- **Input**: Mouse/Controller Sensitivity, Axis Inversion, Deadzones
- **Controller**: Vibration, Aim Assist
- **Post Process**: Motion Blur, Gamma, Brightness, Contrast, Bloom, etc.
- **Audio**: Master, Music, SFX, Voice, Ambient, UI Volumes
- **Accessibility**: Subtitles, Colorblind Modes, HUD Scale

### UPMPerformanceMonitor
Real-time performance statistics:
- Current/Average/Min/Max FPS
- Frame Time, Game Thread, Render Thread, GPU Time
- Memory Usage
- Benchmark mode with percentile calculations

## Audio Setup (Required for Volume Controls)

Create these Sound Class assets in your project:
- `SC_Master`, `SC_Music`, `SC_SFX`, `SC_Voice`, `SC_Ambient`, `SC_UI`

Create a Sound Mix:
- `UPM_SoundMix`

Assign your audio assets to appropriate Sound Classes.

## Requirements

- Unreal Engine 5.3+
- C++ project (or Blueprint-only with plugin)

## License

MIT License - See LICENSE file for details.
