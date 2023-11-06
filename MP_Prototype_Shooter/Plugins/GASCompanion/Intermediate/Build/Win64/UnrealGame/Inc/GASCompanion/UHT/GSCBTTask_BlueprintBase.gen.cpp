// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/AI/GSCBTTask_BlueprintBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCBTTask_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCBTTask_BlueprintBase();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCBTTask_BlueprintBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	struct GSCBTTask_BlueprintBase_eventK2_GetStaticDescription_Parms
	{
		FString ReturnValue;
	};
	static FName NAME_UGSCBTTask_BlueprintBase_K2_GetStaticDescription = FName(TEXT("K2_GetStaticDescription"));
	FString UGSCBTTask_BlueprintBase::K2_GetStaticDescription() const
	{
		GSCBTTask_BlueprintBase_eventK2_GetStaticDescription_Parms Parms;
		const_cast<UGSCBTTask_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGSCBTTask_BlueprintBase_K2_GetStaticDescription),&Parms);
		return Parms.ReturnValue;
	}
	void UGSCBTTask_BlueprintBase::StaticRegisterNativesUGSCBTTask_BlueprintBase()
	{
	}
	struct Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCBTTask_BlueprintBase_eventK2_GetStaticDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|AI" },
		{ "Comment", "/**\n\x09 * Overrides Task GetStaticDescription()\n\x09 * Should return string containing description of this node with all setup values\n\x09 *\n\x09 * @return string containing description of this node with all setup values\n\x09 */" },
		{ "DisplayName", "Get Static Description" },
		{ "ModuleRelativePath", "Public/AI/GSCBTTask_BlueprintBase.h" },
		{ "ScriptName", "GetStaticDescription" },
		{ "ToolTip", "Overrides Task GetStaticDescription()\nShould return string containing description of this node with all setup values\n\n@return string containing description of this node with all setup values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCBTTask_BlueprintBase, nullptr, "K2_GetStaticDescription", nullptr, nullptr, Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::PropPointers), sizeof(GSCBTTask_BlueprintBase_eventK2_GetStaticDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCBTTask_BlueprintBase_eventK2_GetStaticDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCBTTask_BlueprintBase);
	UClass* Z_Construct_UClass_UGSCBTTask_BlueprintBase_NoRegister()
	{
		return UGSCBTTask_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCBTTask_BlueprintBase_K2_GetStaticDescription, "K2_GetStaticDescription" }, // 2730261466
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The only difference with UBTTask_BlueprintBase is that GetStaticDescription can be overriden in Blueprints.\n */" },
		{ "IncludePath", "AI/GSCBTTask_BlueprintBase.h" },
		{ "ModuleRelativePath", "Public/AI/GSCBTTask_BlueprintBase.h" },
		{ "ToolTip", "The only difference with UBTTask_BlueprintBase is that GetStaticDescription can be overriden in Blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCBTTask_BlueprintBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::ClassParams = {
		&UGSCBTTask_BlueprintBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSCBTTask_BlueprintBase()
	{
		if (!Z_Registration_Info_UClass_UGSCBTTask_BlueprintBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCBTTask_BlueprintBase.OuterSingleton, Z_Construct_UClass_UGSCBTTask_BlueprintBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCBTTask_BlueprintBase.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCBTTask_BlueprintBase>()
	{
		return UGSCBTTask_BlueprintBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCBTTask_BlueprintBase);
	UGSCBTTask_BlueprintBase::~UGSCBTTask_BlueprintBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_AI_GSCBTTask_BlueprintBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_AI_GSCBTTask_BlueprintBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCBTTask_BlueprintBase, UGSCBTTask_BlueprintBase::StaticClass, TEXT("UGSCBTTask_BlueprintBase"), &Z_Registration_Info_UClass_UGSCBTTask_BlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCBTTask_BlueprintBase), 2571542189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_AI_GSCBTTask_BlueprintBase_h_4103550245(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_AI_GSCBTTask_BlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_AI_GSCBTTask_BlueprintBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
