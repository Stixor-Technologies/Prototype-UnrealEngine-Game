// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraphEditor/Public/Graph/Nodes/ComboGraphEdNodeConduit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphEdNodeConduit() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeBase_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeBase();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeConduit();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeConduit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraphEditor();
// End Cross Module References
	void UComboGraphEdNodeConduit::StaticRegisterNativesUComboGraphEdNodeConduit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphEdNodeConduit);
	UClass* Z_Construct_UClass_UComboGraphEdNodeConduit_NoRegister()
	{
		return UComboGraphEdNodeConduit::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphEdNodeConduit_Statics
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
	UObject* (*const Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboGraphEdNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Editor Graph Node for conduit nodes in Combat Graphs. Based off UAnimStateConduitNode for state machine graphs in Anim BP. */" },
#endif
		{ "IncludePath", "Graph/Nodes/ComboGraphEdNodeConduit.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/ComboGraphEdNodeConduit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor Graph Node for conduit nodes in Combat Graphs. Based off UAnimStateConduitNode for state machine graphs in Anim BP." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::NewProp_RuntimeNode_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/ComboGraphEdNodeConduit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::NewProp_RuntimeNode = { "RuntimeNode", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdNodeConduit, RuntimeNode), Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::NewProp_RuntimeNode_MetaData), Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::NewProp_RuntimeNode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::NewProp_RuntimeNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphEdNodeConduit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::ClassParams = {
		&UComboGraphEdNodeConduit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphEdNodeConduit()
	{
		if (!Z_Registration_Info_UClass_UComboGraphEdNodeConduit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphEdNodeConduit.OuterSingleton, Z_Construct_UClass_UComboGraphEdNodeConduit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphEdNodeConduit.OuterSingleton;
	}
	template<> COMBOGRAPHEDITOR_API UClass* StaticClass<UComboGraphEdNodeConduit>()
	{
		return UComboGraphEdNodeConduit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphEdNodeConduit);
	UComboGraphEdNodeConduit::~UComboGraphEdNodeConduit() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeConduit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeConduit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphEdNodeConduit, UComboGraphEdNodeConduit::StaticClass, TEXT("UComboGraphEdNodeConduit"), &Z_Registration_Info_UClass_UComboGraphEdNodeConduit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphEdNodeConduit), 3839664065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeConduit_h_1157975716(TEXT("/Script/ComboGraphEditor"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeConduit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_Nodes_ComboGraphEdNodeConduit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
