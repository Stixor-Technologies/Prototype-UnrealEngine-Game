// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraphEditor/Public/Graph/Nodes/ComboGraphEdNodeEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphEdNodeEntry() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeEntry_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeBase();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeEntry();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeEntry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraphEditor();
// End Cross Module References
	void UComboGraphEdNodeEntry::StaticRegisterNativesUComboGraphEdNodeEntry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphEdNodeEntry);
	UClass* Z_Construct_UClass_UComboGraphEdNodeEntry_NoRegister()
	{
		return UComboGraphEdNodeEntry::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphEdNodeEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboGraphEdNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Editor Graph Node for entry point in Combat Graphs. Based off UAnimStateEntryNode for state machine graphs in Anim BP. */" },
		{ "IncludePath", "Graph/Nodes/ComboGraphEdNodeEntry.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/ComboGraphEdNodeEntry.h" },
		{ "ToolTip", "Editor Graph Node for entry point in Combat Graphs. Based off UAnimStateEntryNode for state machine graphs in Anim BP." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::NewProp_RuntimeNode_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/ComboGraphEdNodeEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::NewProp_RuntimeNode = { "RuntimeNode", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdNodeEntry, RuntimeNode), Z_Construct_UClass_UComboGraphNodeEntry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::NewProp_RuntimeNode_MetaData), Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::NewProp_RuntimeNode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::NewProp_RuntimeNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphEdNodeEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::ClassParams = {
		&UComboGraphEdNodeEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphEdNodeEntry()
	{
		if (!Z_Registration_Info_UClass_UComboGraphEdNodeEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphEdNodeEntry.OuterSingleton, Z_Construct_UClass_UComboGraphEdNodeEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphEdNodeEntry.OuterSingleton;
	}
	template<> COMBOGRAPHEDITOR_API UClass* StaticClass<UComboGraphEdNodeEntry>()
	{
		return UComboGraphEdNodeEntry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphEdNodeEntry);
	UComboGraphEdNodeEntry::~UComboGraphEdNodeEntry() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphEdNodeEntry, UComboGraphEdNodeEntry::StaticClass, TEXT("UComboGraphEdNodeEntry"), &Z_Registration_Info_UClass_UComboGraphEdNodeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphEdNodeEntry), 1061268031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEntry_h_1486666499(TEXT("/Script/ComboGraphEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
