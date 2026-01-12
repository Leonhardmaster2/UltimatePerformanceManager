// Copyright UPM Team. All Rights Reserved.

using UnrealBuildTool;

public class UPM : ModuleRules
{
	public UPM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

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
				"DeveloperSettings"
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);

		// NVIDIA DLSS support (optional - will compile without it)
		if (Target.Type == TargetType.Editor || Target.Type == TargetType.Game)
		{
			// Check if DLSS plugin is available
			// The module will handle missing plugin gracefully at runtime
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					// "DLSS",           // Uncomment if DLSS plugin is available
					// "DLSSBlueprint",  // Uncomment if DLSS Blueprint support is available
					// "Streamline",     // Uncomment if Streamline plugin is available (for DLSS-G)
				}
			);
		}
	}
}
