// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanionEditor/Public/CreationMenu/GSCCreationMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCCreationMenu() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCCreationMenu();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCCreationMenu_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanionEditor();
// End Cross Module References
	void UGSCCreationMenu::StaticRegisterNativesUGSCCreationMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCCreationMenu);
	UClass* Z_Construct_UClass_UGSCCreationMenu_NoRegister()
	{
		return UGSCCreationMenu::StaticClass();
	}
	struct Z_Construct_UClass_UGSCCreationMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCCreationMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCreationMenu_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCreationMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreationMenu/GSCCreationMenu.h" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCCreationMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCCreationMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCCreationMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCCreationMenu_Statics::ClassParams = {
		&UGSCCreationMenu::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCreationMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCCreationMenu_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSCCreationMenu()
	{
		if (!Z_Registration_Info_UClass_UGSCCreationMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCCreationMenu.OuterSingleton, Z_Construct_UClass_UGSCCreationMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCCreationMenu.OuterSingleton;
	}
	template<> GASCOMPANIONEDITOR_API UClass* StaticClass<UGSCCreationMenu>()
	{
		return UGSCCreationMenu::StaticClass();
	}
	UGSCCreationMenu::UGSCCreationMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCCreationMenu);
	UGSCCreationMenu::~UGSCCreationMenu() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCCreationMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCCreationMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCCreationMenu, UGSCCreationMenu::StaticClass, TEXT("UGSCCreationMenu"), &Z_Registration_Info_UClass_UGSCCreationMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCCreationMenu), 64234993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCCreationMenu_h_3367875697(TEXT("/Script/GASCompanionEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCCreationMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCCreationMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
