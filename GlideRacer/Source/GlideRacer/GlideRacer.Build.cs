// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GlideRacer : ModuleRules
{
	public GlideRacer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.Add("/Users/Shared/Epic Games/UE_5.5/Engine/Source/Runtime/Core/Public");

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
	}
}
