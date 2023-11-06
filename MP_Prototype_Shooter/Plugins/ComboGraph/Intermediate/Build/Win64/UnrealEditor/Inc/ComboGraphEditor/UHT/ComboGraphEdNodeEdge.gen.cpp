// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraphEditor/Public/Graph/Nodes/ComboGraphEdNodeEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphEdNodeEdge() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphEdge_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeBase();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeEdge();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeEdge_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraphEditor();
// End Cross Module References
	void UComboGraphEdNodeEdge::StaticRegisterNativesUComboGraphEdNodeEdge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphEdNodeEdge);
	UClass* Z_Construct_UClass_UComboGraphEdNodeEdge_NoRegister()
	{
		return UComboGraphEdNodeEdge::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphEdNodeEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboGraphOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboGraphOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeEdge_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeEdge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboGraphEdNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/ComboGraphEdNodeEdge.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/ComboGraphEdNodeEdge.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_ComboGraphOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Nodes/ComboGraphEdNodeEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_ComboGraphOwner = { "ComboGraphOwner", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdNodeEdge, ComboGraphOwner), Z_Construct_UClass_UComboGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_ComboGraphOwner_MetaData), Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_ComboGraphOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_RuntimeEdge_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/ComboGraphEdNodeEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_RuntimeEdge = { "RuntimeEdge", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdNodeEdge, RuntimeEdge), Z_Construct_UClass_UComboGraphEdge_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_RuntimeEdge_MetaData), Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_RuntimeEdge_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_ComboGraphOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::NewProp_RuntimeEdge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphEdNodeEdge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::ClassParams = {
		&UComboGraphEdNodeEdge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphEdNodeEdge()
	{
		if (!Z_Registration_Info_UClass_UComboGraphEdNodeEdge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphEdNodeEdge.OuterSingleton, Z_Construct_UClass_UComboGraphEdNodeEdge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphEdNodeEdge.OuterSingleton;
	}
	template<> COMBOGRAPHEDITOR_API UClass* StaticClass<UComboGraphEdNodeEdge>()
	{
		return UComboGraphEdNodeEdge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphEdNodeEdge);
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEdge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEdge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphEdNodeEdge, UComboGraphEdNodeEdge::StaticClass, TEXT("UComboGraphEdNodeEdge"), &Z_Registration_Info_UClass_UComboGraphEdNodeEdge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphEdNodeEdge), 4205023875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEdge_h_2630517435(TEXT("/Script/ComboGraphEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeEdge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
