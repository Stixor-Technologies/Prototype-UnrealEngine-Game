// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/TargetTypes/GSCTargetTypeUseOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCTargetTypeUseOwner() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTargetType();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTargetTypeUseOwner();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTargetTypeUseOwner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCTargetTypeUseOwner::StaticRegisterNativesUGSCTargetTypeUseOwner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCTargetTypeUseOwner);
	UClass* Z_Construct_UClass_UGSCTargetTypeUseOwner_NoRegister()
	{
		return UGSCTargetTypeUseOwner::StaticClass();
	}
	struct Z_Construct_UClass_UGSCTargetTypeUseOwner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCTargetTypeUseOwner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGSCTargetType,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTargetTypeUseOwner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTargetTypeUseOwner_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trivial target type that uses the owner */" },
#endif
		{ "IncludePath", "Abilities/TargetTypes/GSCTargetTypeUseOwner.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Abilities/TargetTypes/GSCTargetTypeUseOwner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trivial target type that uses the owner" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCTargetTypeUseOwner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCTargetTypeUseOwner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCTargetTypeUseOwner_Statics::ClassParams = {
		&UGSCTargetTypeUseOwner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTargetTypeUseOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCTargetTypeUseOwner_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSCTargetTypeUseOwner()
	{
		if (!Z_Registration_Info_UClass_UGSCTargetTypeUseOwner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCTargetTypeUseOwner.OuterSingleton, Z_Construct_UClass_UGSCTargetTypeUseOwner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCTargetTypeUseOwner.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCTargetTypeUseOwner>()
	{
		return UGSCTargetTypeUseOwner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCTargetTypeUseOwner);
	UGSCTargetTypeUseOwner::~UGSCTargetTypeUseOwner() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseOwner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseOwner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCTargetTypeUseOwner, UGSCTargetTypeUseOwner::StaticClass, TEXT("UGSCTargetTypeUseOwner"), &Z_Registration_Info_UClass_UGSCTargetTypeUseOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCTargetTypeUseOwner), 190116380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseOwner_h_2666596710(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseOwner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseOwner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
