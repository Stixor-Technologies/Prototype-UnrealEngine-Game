// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraphEditor/Public/Graph/Nodes/ComboGraphEdNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphEdNodeBase() {}
// Cross Module References
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeBase();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_ComboGraphEditor();
// End Cross Module References
	void UComboGraphEdNodeBase::StaticRegisterNativesUComboGraphEdNodeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphEdNodeBase);
	UClass* Z_Construct_UClass_UComboGraphEdNodeBase_NoRegister()
	{
		return UComboGraphEdNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphEdNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphEdNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdNodeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Shared Base class for all Editor Graph nodes */" },
		{ "IncludePath", "Graph/Nodes/ComboGraphEdNodeBase.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/ComboGraphEdNodeBase.h" },
		{ "ToolTip", "Shared Base class for all Editor Graph nodes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphEdNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphEdNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphEdNodeBase_Statics::ClassParams = {
		&UComboGraphEdNodeBase::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphEdNodeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphEdNodeBase()
	{
		if (!Z_Registration_Info_UClass_UComboGraphEdNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphEdNodeBase.OuterSingleton, Z_Construct_UClass_UComboGraphEdNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphEdNodeBase.OuterSingleton;
	}
	template<> COMBOGRAPHEDITOR_API UClass* StaticClass<UComboGraphEdNodeBase>()
	{
		return UComboGraphEdNodeBase::StaticClass();
	}
	UComboGraphEdNodeBase::UComboGraphEdNodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphEdNodeBase);
	UComboGraphEdNodeBase::~UComboGraphEdNodeBase() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphEdNodeBase, UComboGraphEdNodeBase::StaticClass, TEXT("UComboGraphEdNodeBase"), &Z_Registration_Info_UClass_UComboGraphEdNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphEdNodeBase), 3352131449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeBase_h_3681398461(TEXT("/Script/ComboGraphEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
