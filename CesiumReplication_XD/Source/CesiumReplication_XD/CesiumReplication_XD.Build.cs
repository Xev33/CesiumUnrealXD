// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CesiumReplication_XD : ModuleRules
{
	public CesiumReplication_XD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
