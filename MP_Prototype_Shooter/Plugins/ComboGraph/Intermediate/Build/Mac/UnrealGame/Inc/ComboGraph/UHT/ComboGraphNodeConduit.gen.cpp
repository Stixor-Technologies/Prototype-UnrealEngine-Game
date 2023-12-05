// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Graph/ComboGraphNodeConduit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphNodeConduit() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeBase();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeConduit();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeConduit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	void UComboGraphNodeConduit::StaticRegisterNativesUComboGraphNodeConduit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphNodeConduit);
	UClass* Z_Construct_UClass_UComboGraphNodeConduit_NoRegister()
	{
		return UComboGraphNodeConduit::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphNodeConduit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphNodeConduit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeConduit_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeConduit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Conduit specific node, doesn't hold any specific logic and used to easily identify them in the graph\n */" },
		{ "IncludePath", "Graph/ComboGraphNodeConduit.h" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeConduit.h" },
		{ "ToolTip", "Conduit specific node, doesn't hold any specific logic and used to easily identify them in the graph" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphNodeConduit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphNodeConduit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphNodeConduit_Statics::ClassParams = {
		&UComboGraphNodeConduit::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeConduit_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphNodeConduit_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphNodeConduit()
	{
		if (!Z_Registration_Info_UClass_UComboGraphNodeConduit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphNodeConduit.OuterSingleton, Z_Construct_UClass_UComboGraphNodeConduit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphNodeConduit.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphNodeConduit>()
	{
		return UComboGraphNodeConduit::StaticClass();
	}
	UComboGraphNodeConduit::UComboGraphNodeConduit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphNodeConduit);
	UComboGraphNodeConduit::~UComboGraphNodeConduit() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeConduit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeConduit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphNodeConduit, UComboGraphNodeConduit::StaticClass, TEXT("UComboGraphNodeConduit"), &Z_Registration_Info_UClass_UComboGraphNodeConduit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphNodeConduit), 1218800887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeConduit_h_733159397(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeConduit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeConduit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
