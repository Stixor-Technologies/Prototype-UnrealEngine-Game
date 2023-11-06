// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Graph/ComboGraphNodeBlueprints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphNodeBlueprints() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeMontageBlueprint();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeMontageBlueprint_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeSequenceBlueprint();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	void UComboGraphNodeMontageBlueprint::StaticRegisterNativesUComboGraphNodeMontageBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphNodeMontageBlueprint);
	UClass* Z_Construct_UClass_UComboGraphNodeMontageBlueprint_NoRegister()
	{
		return UComboGraphNodeMontageBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphNodeMontageBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphNodeMontageBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeMontageBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeMontageBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Combo Graph NodeMontageBlueprint is essentially a simple UObject Blueprint with default node created when first opened.\n *\n * The combo graph factory should pick this for you automatically\n */" },
		{ "IncludePath", "Graph/ComboGraphNodeBlueprints.h" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBlueprints.h" },
		{ "ToolTip", "A Combo Graph NodeMontageBlueprint is essentially a simple UObject Blueprint with default node created when first opened.\n\nThe combo graph factory should pick this for you automatically" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphNodeMontageBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphNodeMontageBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphNodeMontageBlueprint_Statics::ClassParams = {
		&UComboGraphNodeMontageBlueprint::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeMontageBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphNodeMontageBlueprint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphNodeMontageBlueprint()
	{
		if (!Z_Registration_Info_UClass_UComboGraphNodeMontageBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphNodeMontageBlueprint.OuterSingleton, Z_Construct_UClass_UComboGraphNodeMontageBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphNodeMontageBlueprint.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphNodeMontageBlueprint>()
	{
		return UComboGraphNodeMontageBlueprint::StaticClass();
	}
	UComboGraphNodeMontageBlueprint::UComboGraphNodeMontageBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphNodeMontageBlueprint);
	UComboGraphNodeMontageBlueprint::~UComboGraphNodeMontageBlueprint() {}
	void UComboGraphNodeSequenceBlueprint::StaticRegisterNativesUComboGraphNodeSequenceBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphNodeSequenceBlueprint);
	UClass* Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_NoRegister()
	{
		return UComboGraphNodeSequenceBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Combo Graph NodeSequenceBlueprint is essentially a simple UObject Blueprint with default node created when first opened.\n *\n * The combo graph factory should pick this for you automatically\n */" },
		{ "IncludePath", "Graph/ComboGraphNodeBlueprints.h" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBlueprints.h" },
		{ "ToolTip", "A Combo Graph NodeSequenceBlueprint is essentially a simple UObject Blueprint with default node created when first opened.\n\nThe combo graph factory should pick this for you automatically" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphNodeSequenceBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_Statics::ClassParams = {
		&UComboGraphNodeSequenceBlueprint::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphNodeSequenceBlueprint()
	{
		if (!Z_Registration_Info_UClass_UComboGraphNodeSequenceBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphNodeSequenceBlueprint.OuterSingleton, Z_Construct_UClass_UComboGraphNodeSequenceBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphNodeSequenceBlueprint.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphNodeSequenceBlueprint>()
	{
		return UComboGraphNodeSequenceBlueprint::StaticClass();
	}
	UComboGraphNodeSequenceBlueprint::UComboGraphNodeSequenceBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphNodeSequenceBlueprint);
	UComboGraphNodeSequenceBlueprint::~UComboGraphNodeSequenceBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBlueprints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBlueprints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphNodeMontageBlueprint, UComboGraphNodeMontageBlueprint::StaticClass, TEXT("UComboGraphNodeMontageBlueprint"), &Z_Registration_Info_UClass_UComboGraphNodeMontageBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphNodeMontageBlueprint), 301856057U) },
		{ Z_Construct_UClass_UComboGraphNodeSequenceBlueprint, UComboGraphNodeSequenceBlueprint::StaticClass, TEXT("UComboGraphNodeSequenceBlueprint"), &Z_Registration_Info_UClass_UComboGraphNodeSequenceBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphNodeSequenceBlueprint), 2854083165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBlueprints_h_3563678565(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBlueprints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBlueprints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
