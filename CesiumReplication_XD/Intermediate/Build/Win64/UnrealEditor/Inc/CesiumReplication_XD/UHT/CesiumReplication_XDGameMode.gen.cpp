// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CesiumReplication_XD/CesiumReplication_XDGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCesiumReplication_XDGameMode() {}

// Begin Cross Module References
CESIUMREPLICATION_XD_API UClass* Z_Construct_UClass_ACesiumReplication_XDGameMode();
CESIUMREPLICATION_XD_API UClass* Z_Construct_UClass_ACesiumReplication_XDGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CesiumReplication_XD();
// End Cross Module References

// Begin Class ACesiumReplication_XDGameMode
void ACesiumReplication_XDGameMode::StaticRegisterNativesACesiumReplication_XDGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACesiumReplication_XDGameMode);
UClass* Z_Construct_UClass_ACesiumReplication_XDGameMode_NoRegister()
{
	return ACesiumReplication_XDGameMode::StaticClass();
}
struct Z_Construct_UClass_ACesiumReplication_XDGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CesiumReplication_XDGameMode.h" },
		{ "ModuleRelativePath", "CesiumReplication_XDGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACesiumReplication_XDGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACesiumReplication_XDGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CesiumReplication_XD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACesiumReplication_XDGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACesiumReplication_XDGameMode_Statics::ClassParams = {
	&ACesiumReplication_XDGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACesiumReplication_XDGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACesiumReplication_XDGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACesiumReplication_XDGameMode()
{
	if (!Z_Registration_Info_UClass_ACesiumReplication_XDGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACesiumReplication_XDGameMode.OuterSingleton, Z_Construct_UClass_ACesiumReplication_XDGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACesiumReplication_XDGameMode.OuterSingleton;
}
template<> CESIUMREPLICATION_XD_API UClass* StaticClass<ACesiumReplication_XDGameMode>()
{
	return ACesiumReplication_XDGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACesiumReplication_XDGameMode);
ACesiumReplication_XDGameMode::~ACesiumReplication_XDGameMode() {}
// End Class ACesiumReplication_XDGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_documents_ProjetPerso_CesiumUnrealXD_CesiumReplication_XD_Source_CesiumReplication_XD_CesiumReplication_XDGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACesiumReplication_XDGameMode, ACesiumReplication_XDGameMode::StaticClass, TEXT("ACesiumReplication_XDGameMode"), &Z_Registration_Info_UClass_ACesiumReplication_XDGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACesiumReplication_XDGameMode), 1624067347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_documents_ProjetPerso_CesiumUnrealXD_CesiumReplication_XD_Source_CesiumReplication_XD_CesiumReplication_XDGameMode_h_1371926784(TEXT("/Script/CesiumReplication_XD"),
	Z_CompiledInDeferFile_FID_Mes_documents_ProjetPerso_CesiumUnrealXD_CesiumReplication_XD_Source_CesiumReplication_XD_CesiumReplication_XDGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_documents_ProjetPerso_CesiumUnrealXD_CesiumReplication_XD_Source_CesiumReplication_XD_CesiumReplication_XDGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
