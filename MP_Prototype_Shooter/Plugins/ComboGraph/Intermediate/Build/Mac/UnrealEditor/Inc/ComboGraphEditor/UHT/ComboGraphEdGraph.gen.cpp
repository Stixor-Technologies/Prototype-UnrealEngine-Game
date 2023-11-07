// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraphEditor/Public/Graph/ComboGraphEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphEdGraph() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphEdge_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeBase_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdGraph();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdGraph_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeBase_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeEdge_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeEntry_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_ComboGraphEditor();
// End Cross Module References
	void UComboGraphEdGraph::StaticRegisterNativesUComboGraphEdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphEdGraph);
	UClass* Z_Construct_UClass_UComboGraphEdGraph_NoRegister()
	{
		return UComboGraphEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntryNode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeMap_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NodeMap;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EdgeMap_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EdgeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EdgeMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/ComboGraphEdGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EntryNode_MetaData[] = {
		{ "Comment", "/** Entry node within the state machine */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdGraph.h" },
		{ "ToolTip", "Entry node within the state machine" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdGraph, EntryNode), Z_Construct_UClass_UComboGraphEdNodeEntry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EntryNode_MetaData), Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EntryNode_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_NodeMap_ValueProp = { "NodeMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UComboGraphEdNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_NodeMap_Key_KeyProp = { "NodeMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_NodeMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdGraph.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_NodeMap = { "NodeMap", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdGraph, NodeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_NodeMap_MetaData), Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_NodeMap_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EdgeMap_ValueProp = { "EdgeMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UComboGraphEdNodeEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EdgeMap_Key_KeyProp = { "EdgeMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboGraphEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EdgeMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdGraph.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EdgeMap = { "EdgeMap", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdGraph, EdgeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EdgeMap_MetaData), Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EdgeMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphEdGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EntryNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_NodeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_NodeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_NodeMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EdgeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EdgeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdGraph_Statics::NewProp_EdgeMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphEdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphEdGraph_Statics::ClassParams = {
		&UComboGraphEdGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraphEdGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphEdGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphEdGraph()
	{
		if (!Z_Registration_Info_UClass_UComboGraphEdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphEdGraph.OuterSingleton, Z_Construct_UClass_UComboGraphEdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphEdGraph.OuterSingleton;
	}
	template<> COMBOGRAPHEDITOR_API UClass* StaticClass<UComboGraphEdGraph>()
	{
		return UComboGraphEdGraph::StaticClass();
	}
	UComboGraphEdGraph::UComboGraphEdGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphEdGraph);
	UComboGraphEdGraph::~UComboGraphEdGraph() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphEdGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphEdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphEdGraph, UComboGraphEdGraph::StaticClass, TEXT("UComboGraphEdGraph"), &Z_Registration_Info_UClass_UComboGraphEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphEdGraph), 3767200166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphEdGraph_h_2656116249(TEXT("/Script/ComboGraphEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphEdGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
