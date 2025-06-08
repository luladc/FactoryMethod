// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryMethod/FactoryMethodGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryMethodGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FACTORYMETHOD_API UClass* Z_Construct_UClass_AFactoryMethodGameMode();
FACTORYMETHOD_API UClass* Z_Construct_UClass_AFactoryMethodGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FactoryMethod();
// End Cross Module References

// Begin Class AFactoryMethodGameMode
void AFactoryMethodGameMode::StaticRegisterNativesAFactoryMethodGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFactoryMethodGameMode);
UClass* Z_Construct_UClass_AFactoryMethodGameMode_NoRegister()
{
	return AFactoryMethodGameMode::StaticClass();
}
struct Z_Construct_UClass_AFactoryMethodGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FactoryMethodGameMode.h" },
		{ "ModuleRelativePath", "FactoryMethodGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryMethodGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFactoryMethodGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FactoryMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryMethodGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFactoryMethodGameMode_Statics::ClassParams = {
	&AFactoryMethodGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryMethodGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFactoryMethodGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFactoryMethodGameMode()
{
	if (!Z_Registration_Info_UClass_AFactoryMethodGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFactoryMethodGameMode.OuterSingleton, Z_Construct_UClass_AFactoryMethodGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFactoryMethodGameMode.OuterSingleton;
}
template<> FACTORYMETHOD_API UClass* StaticClass<AFactoryMethodGameMode>()
{
	return AFactoryMethodGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryMethodGameMode);
AFactoryMethodGameMode::~AFactoryMethodGameMode() {}
// End Class AFactoryMethodGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_FactoryMethod_Source_FactoryMethod_FactoryMethodGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFactoryMethodGameMode, AFactoryMethodGameMode::StaticClass, TEXT("AFactoryMethodGameMode"), &Z_Registration_Info_UClass_AFactoryMethodGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFactoryMethodGameMode), 1756323645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_FactoryMethod_Source_FactoryMethod_FactoryMethodGameMode_h_1220236114(TEXT("/Script/FactoryMethod"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_FactoryMethod_Source_FactoryMethod_FactoryMethodGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_FactoryMethod_Source_FactoryMethod_FactoryMethodGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
