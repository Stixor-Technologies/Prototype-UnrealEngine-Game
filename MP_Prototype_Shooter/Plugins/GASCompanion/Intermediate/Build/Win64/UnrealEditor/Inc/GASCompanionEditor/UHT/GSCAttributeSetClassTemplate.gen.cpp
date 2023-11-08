// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanionEditor/Public/Templates/GSCAttributeSetClassTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAttributeSetClassTemplate() {}
// Cross Module References
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UPluginClassTemplate();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanionEditor();
// End Cross Module References
	void UGSCAttributeSetClassTemplate::StaticRegisterNativesUGSCAttributeSetClassTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAttributeSetClassTemplate);
	UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate_NoRegister()
	{
		return UGSCAttributeSetClassTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPluginClassTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Templates/GSCAttributeSetClassTemplate.h" },
		{ "ModuleRelativePath", "Public/Templates/GSCAttributeSetClassTemplate.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAttributeSetClassTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::ClassParams = {
		&UGSCAttributeSetClassTemplate::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSCAttributeSetClassTemplate()
	{
		if (!Z_Registration_Info_UClass_UGSCAttributeSetClassTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAttributeSetClassTemplate.OuterSingleton, Z_Construct_UClass_UGSCAttributeSetClassTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAttributeSetClassTemplate.OuterSingleton;
	}
	template<> GASCOMPANIONEDITOR_API UClass* StaticClass<UGSCAttributeSetClassTemplate>()
	{
		return UGSCAttributeSetClassTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAttributeSetClassTemplate);
	UGSCAttributeSetClassTemplate::~UGSCAttributeSetClassTemplate() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Templates_GSCAttributeSetClassTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Templates_GSCAttributeSetClassTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAttributeSetClassTemplate, UGSCAttributeSetClassTemplate::StaticClass, TEXT("UGSCAttributeSetClassTemplate"), &Z_Registration_Info_UClass_UGSCAttributeSetClassTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAttributeSetClassTemplate), 1639173837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Templates_GSCAttributeSetClassTemplate_h_3289735133(TEXT("/Script/GASCompanionEditor"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Templates_GSCAttributeSetClassTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Templates_GSCAttributeSetClassTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
