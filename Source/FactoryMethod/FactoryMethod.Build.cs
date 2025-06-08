// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FactoryMethod : ModuleRules
{
	public FactoryMethod(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
