// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryMethod/BloqueOro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueOro() {}

// Begin Cross Module References
FACTORYMETHOD_API UClass* Z_Construct_UClass_ABloque();
FACTORYMETHOD_API UClass* Z_Construct_UClass_ABloqueOro();
FACTORYMETHOD_API UClass* Z_Construct_UClass_ABloqueOro_NoRegister();
UPackage* Z_Construct_UPackage__Script_FactoryMethod();
// End Cross Module References

// Begin Class ABloqueOro
void ABloqueOro::StaticRegisterNativesABloqueOro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueOro);
UClass* Z_Construct_UClass_ABloqueOro_NoRegister()
{
	return ABloqueOro::StaticClass();
}
struct Z_Construct_UClass_ABloqueOro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueOro.h" },
		{ "ModuleRelativePath", "BloqueOro.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueOro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueOro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_FactoryMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueOro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueOro_Statics::ClassParams = {
	&ABloqueOro::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueOro_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueOro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueOro()
{
	if (!Z_Registration_Info_UClass_ABloqueOro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueOro.OuterSingleton, Z_Construct_UClass_ABloqueOro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueOro.OuterSingleton;
}
template<> FACTORYMETHOD_API UClass* StaticClass<ABloqueOro>()
{
	return ABloqueOro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueOro);
ABloqueOro::~ABloqueOro() {}
// End Class ABloqueOro

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_FactoryMethod_Source_FactoryMethod_BloqueOro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueOro, ABloqueOro::StaticClass, TEXT("ABloqueOro"), &Z_Registration_Info_UClass_ABloqueOro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueOro), 619434625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_FactoryMethod_Source_FactoryMethod_BloqueOro_h_2324824376(TEXT("/Script/FactoryMethod"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_FactoryMethod_Source_FactoryMethod_BloqueOro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_FactoryMethod_Source_FactoryMethod_BloqueOro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
