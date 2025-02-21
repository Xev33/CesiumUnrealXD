// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeCombinator/LandscapeCombinatorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeCombinatorGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LANDSCAPECOMBINATOR_API UClass* Z_Construct_UClass_ALandscapeCombinatorGameMode();
LANDSCAPECOMBINATOR_API UClass* Z_Construct_UClass_ALandscapeCombinatorGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_LandscapeCombinator();
// End Cross Module References

// Begin Class ALandscapeCombinatorGameMode
void ALandscapeCombinatorGameMode::StaticRegisterNativesALandscapeCombinatorGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeCombinatorGameMode);
UClass* Z_Construct_UClass_ALandscapeCombinatorGameMode_NoRegister()
{
	return ALandscapeCombinatorGameMode::StaticClass();
}
struct Z_Construct_UClass_ALandscapeCombinatorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LandscapeCombinatorGameMode.h" },
		{ "ModuleRelativePath", "LandscapeCombinatorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeCombinatorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALandscapeCombinatorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LandscapeCombinator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeCombinatorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeCombinatorGameMode_Statics::ClassParams = {
	&ALandscapeCombinatorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeCombinatorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscapeCombinatorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALandscapeCombinatorGameMode()
{
	if (!Z_Registration_Info_UClass_ALandscapeCombinatorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeCombinatorGameMode.OuterSingleton, Z_Construct_UClass_ALandscapeCombinatorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandscapeCombinatorGameMode.OuterSingleton;
}
template<> LANDSCAPECOMBINATOR_API UClass* StaticClass<ALandscapeCombinatorGameMode>()
{
	return ALandscapeCombinatorGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeCombinatorGameMode);
ALandscapeCombinatorGameMode::~ALandscapeCombinatorGameMode() {}
// End Class ALandscapeCombinatorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Xavier_DAVID_Documents_Unreal_Projects_LandscapeCombinator_Source_LandscapeCombinator_LandscapeCombinatorGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeCombinatorGameMode, ALandscapeCombinatorGameMode::StaticClass, TEXT("ALandscapeCombinatorGameMode"), &Z_Registration_Info_UClass_ALandscapeCombinatorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeCombinatorGameMode), 1685374956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xavier_DAVID_Documents_Unreal_Projects_LandscapeCombinator_Source_LandscapeCombinator_LandscapeCombinatorGameMode_h_3071678354(TEXT("/Script/LandscapeCombinator"),
	Z_CompiledInDeferFile_FID_Users_Xavier_DAVID_Documents_Unreal_Projects_LandscapeCombinator_Source_LandscapeCombinator_LandscapeCombinatorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Xavier_DAVID_Documents_Unreal_Projects_LandscapeCombinator_Source_LandscapeCombinator_LandscapeCombinatorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
