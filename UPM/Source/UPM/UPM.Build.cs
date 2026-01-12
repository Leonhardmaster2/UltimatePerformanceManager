// Copyright UPM Team. All Rights Reserved.

using UnrealBuildTool;

public class UPM : ModuleRules
{
	public UPM(ReadOnlyTargetRules Target) : base(Target)
	{
		// UE5.6 recommended PCH settings for optimal compilation
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// Enable IWYU (Include What You Use) for faster compilation in UE5.6+
		bEnforceIWYU = true;

		// UE5.6 optimization: Use unity build for faster compilation
		bUseUnity = true;

		// Enable C++20 features available in UE5.6
		CppStandard = CppStandardVersion.Cpp20;

		PublicIncludePaths.AddRange(
			new string[] {
			}
		);

		PrivateIncludePaths.AddRange(
			new string[] {
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RHI",
				"RenderCore",
				"Slate",
				"SlateCore",
				"UMG",
				"InputCore",
				"EnhancedInput",
				"CommonUI",
				"CommonInput",
				"GameplayTags"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"ApplicationCore",
				"DeveloperSettings",
				"MediaAssets"     // For video backgrounds in menus
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);

		// NVIDIA DLSS and Streamline support (optional - will compile without it)
		// These plugins provide advanced upscaling and frame generation
		if (Target.Type == TargetType.Editor || Target.Type == TargetType.Game)
		{
			// UE5.6 includes improved plugin dependency handling
			// The module will gracefully handle missing plugins at runtime
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					// Uncomment these if the NVIDIA plugins are available in your project:
					// "DLSS",           // NVIDIA DLSS plugin for super resolution
					// "DLSSBlueprint",  // DLSS Blueprint integration
					// "Streamline",     // Streamline plugin for DLSS-G frame generation
					// "StreamlineBlueprint", // Streamline Blueprint integration
				}
			);
		}

		// Platform-specific optimizations for UE5.6
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Windows-specific: Enable DirectX 12 enhanced features
			PublicDefinitions.Add("UPM_PLATFORM_WINDOWS=1");
		}
		else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			PublicDefinitions.Add("UPM_PLATFORM_LINUX=1");
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			PublicDefinitions.Add("UPM_PLATFORM_MAC=1");
		}

		// UE5.6 shader compilation optimization hints
		PublicDefinitions.Add("UPM_UE56_OPTIMIZED=1");
	}
}
