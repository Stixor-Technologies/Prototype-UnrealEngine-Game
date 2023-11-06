// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanionEditor/Public/CreationMenu/GSCGameplayEffectCreationMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGameplayEffectCreationMenu() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_NoRegister();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCGameplayEffectCreationMenu();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCGameplayEffectCreationMenu_NoRegister();
	GASCOMPANIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData();
	UPackage* Z_Construct_UPackage__Script_GASCompanionEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameplayEffectCreationData;
class UScriptStruct* FGSCGameplayEffectCreationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectCreationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameplayEffectCreationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData, (UObject*)Z_Construct_UPackage__Script_GASCompanionEditor(), TEXT("GSCGameplayEffectCreationData"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameplayEffectCreationData.OuterSingleton;
}
template<> GASCOMPANIONEDITOR_API UScriptStruct* StaticStruct<FGSCGameplayEffectCreationData>()
{
	return FGSCGameplayEffectCreationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MenuPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TooltipText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayEffectCreationMenu.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameplayEffectCreationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_MenuPath_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/** Where to show this in the menu. Use \"|\" for sub categories. E.g, \"Status|Hard|Stun|Root\". */" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayEffectCreationMenu.h" },
		{ "ToolTip", "Where to show this in the menu. Use \"|\" for sub categories. E.g, \"Status|Hard|Stun|Root\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_MenuPath = { "MenuPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectCreationData, MenuPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_MenuPath_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_MenuPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_BaseName_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/** The default BaseName of the new asset. E.g \"Damage\" -> GE_Damage */" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayEffectCreationMenu.h" },
		{ "ToolTip", "The default BaseName of the new asset. E.g \"Damage\" -> GE_Damage" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectCreationData, BaseName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_BaseName_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_BaseName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "DisplayName", "Gameplay Effect Template" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayEffectCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectCreationData, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_ParentClass_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_ParentClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_AssetPrefix_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayEffectCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_AssetPrefix = { "AssetPrefix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectCreationData, AssetPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_AssetPrefix_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_AssetPrefix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_TooltipText_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayEffectCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_TooltipText = { "TooltipText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectCreationData, TooltipText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_TooltipText_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_TooltipText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_MenuPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_BaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_AssetPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewProp_TooltipText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
		nullptr,
		&NewStructOps,
		"GSCGameplayEffectCreationData",
		Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::PropPointers),
		sizeof(FGSCGameplayEffectCreationData),
		alignof(FGSCGameplayEffectCreationData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectCreationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameplayEffectCreationData.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameplayEffectCreationData.InnerSingleton;
	}
	void UGSCGameplayEffectCreationMenu::StaticRegisterNativesUGSCGameplayEffectCreationMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCGameplayEffectCreationMenu);
	UClass* Z_Construct_UClass_UGSCGameplayEffectCreationMenu_NoRegister()
	{
		return UGSCGameplayEffectCreationMenu::StaticClass();
	}
	struct Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreationMenu/GSCGameplayEffectCreationMenu.h" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayEffectCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData, METADATA_PARAMS(0, nullptr) }; // 1980846165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::NewProp_Definitions_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayEffectCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGameplayEffectCreationMenu, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::NewProp_Definitions_MetaData), Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::NewProp_Definitions_MetaData) }; // 1980846165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::NewProp_Definitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::NewProp_Definitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGameplayEffectCreationMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::ClassParams = {
		&UGSCGameplayEffectCreationMenu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::PropPointers),
		0,
		0x001002A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCGameplayEffectCreationMenu()
	{
		if (!Z_Registration_Info_UClass_UGSCGameplayEffectCreationMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCGameplayEffectCreationMenu.OuterSingleton, Z_Construct_UClass_UGSCGameplayEffectCreationMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCGameplayEffectCreationMenu.OuterSingleton;
	}
	template<> GASCOMPANIONEDITOR_API UClass* StaticClass<UGSCGameplayEffectCreationMenu>()
	{
		return UGSCGameplayEffectCreationMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGameplayEffectCreationMenu);
	UGSCGameplayEffectCreationMenu::~UGSCGameplayEffectCreationMenu() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayEffectCreationMenu_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayEffectCreationMenu_h_Statics::ScriptStructInfo[] = {
		{ FGSCGameplayEffectCreationData::StaticStruct, Z_Construct_UScriptStruct_FGSCGameplayEffectCreationData_Statics::NewStructOps, TEXT("GSCGameplayEffectCreationData"), &Z_Registration_Info_UScriptStruct_GSCGameplayEffectCreationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameplayEffectCreationData), 1980846165U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayEffectCreationMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCGameplayEffectCreationMenu, UGSCGameplayEffectCreationMenu::StaticClass, TEXT("UGSCGameplayEffectCreationMenu"), &Z_Registration_Info_UClass_UGSCGameplayEffectCreationMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCGameplayEffectCreationMenu), 3146980157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayEffectCreationMenu_h_672154587(TEXT("/Script/GASCompanionEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayEffectCreationMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayEffectCreationMenu_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayEffectCreationMenu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayEffectCreationMenu_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
