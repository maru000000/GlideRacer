// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GlideRacer : ModuleRules
{
	public GlideRacer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"ChaosVehicles",
			"PhysicsCore" ,
			"NavigationSystem" ,
			"AIModule" ,
			"Niagara" ,
			"UMG"
		});

        PrivateDependencyModuleNames.AddRange(new string[] {
			"GameplayTags" ,
			"GameplayTasks",
			"GameplayAbilities"
		});

        PublicIncludePaths.AddRange(new string[] { "GlideRacer" });
    }
}
