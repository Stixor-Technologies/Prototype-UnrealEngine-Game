// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraphEditor/Public/AssetTypes/ComboGraphFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphFactory() {}
// Cross Module References
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphFactory();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphFactory_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ComboGraphEditor();
// End Cross Module References
	void UComboGraphFactory::StaticRegisterNativesUComboGraphFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphFactory);
	UClass* Z_Construct_UClass_UComboGraphFactory_NoRegister()
	{
		return UComboGraphFactory::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AssetTypes/ComboGraphFactory.h" },
		{ "ModuleRelativePath", "Public/AssetTypes/ComboGraphFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphFactory_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Category", "GameplayAbilitiesFactory" },
		{ "Comment", "// The type of blueprint that will be created\n" },
		{ "ModuleRelativePath", "Public/AssetTypes/ComboGraphFactory.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComboGraphFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphFactory_Statics::NewProp_BlueprintType_MetaData), Z_Construct_UClass_UComboGraphFactory_Statics::NewProp_BlueprintType_MetaData) }; // 2003724569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphFactory_Statics::NewProp_BlueprintType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphFactory_Statics::ClassParams = {
		&UComboGraphFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraphFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphFactory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphFactory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphFactory()
	{
		if (!Z_Registration_Info_UClass_UComboGraphFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphFactory.OuterSingleton, Z_Construct_UClass_UComboGraphFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphFactory.OuterSingleton;
	}
	template<> COMBOGRAPHEDITOR_API UClass* StaticClass<UComboGraphFactory>()
	{
		return UComboGraphFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphFactory);
	UComboGraphFactory::~UComboGraphFactory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_AssetTypes_ComboGraphFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_AssetTypes_ComboGraphFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphFactory, UComboGraphFactory::StaticClass, TEXT("UComboGraphFactory"), &Z_Registration_Info_UClass_UComboGraphFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphFactory), 2852046347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_AssetTypes_ComboGraphFactory_h_1238605075(TEXT("/Script/ComboGraphEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_AssetTypes_ComboGraphFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_AssetTypes_ComboGraphFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
