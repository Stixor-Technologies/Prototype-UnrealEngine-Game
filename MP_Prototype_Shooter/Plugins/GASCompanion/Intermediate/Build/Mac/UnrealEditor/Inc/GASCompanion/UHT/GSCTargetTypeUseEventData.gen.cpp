// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/TargetTypes/GSCTargetTypeUseEventData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCTargetTypeUseEventData() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTargetType();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTargetTypeUseEventData();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTargetTypeUseEventData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCTargetTypeUseEventData::StaticRegisterNativesUGSCTargetTypeUseEventData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCTargetTypeUseEventData);
	UClass* Z_Construct_UClass_UGSCTargetTypeUseEventData_NoRegister()
	{
		return UGSCTargetTypeUseEventData::StaticClass();
	}
	struct Z_Construct_UClass_UGSCTargetTypeUseEventData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCTargetTypeUseEventData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGSCTargetType,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTargetTypeUseEventData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTargetTypeUseEventData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Trivial target type that pulls the target out of the event data */" },
		{ "IncludePath", "Abilities/TargetTypes/GSCTargetTypeUseEventData.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Abilities/TargetTypes/GSCTargetTypeUseEventData.h" },
		{ "ToolTip", "Trivial target type that pulls the target out of the event data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCTargetTypeUseEventData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCTargetTypeUseEventData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCTargetTypeUseEventData_Statics::ClassParams = {
		&UGSCTargetTypeUseEventData::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTargetTypeUseEventData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCTargetTypeUseEventData_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSCTargetTypeUseEventData()
	{
		if (!Z_Registration_Info_UClass_UGSCTargetTypeUseEventData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCTargetTypeUseEventData.OuterSingleton, Z_Construct_UClass_UGSCTargetTypeUseEventData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCTargetTypeUseEventData.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCTargetTypeUseEventData>()
	{
		return UGSCTargetTypeUseEventData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCTargetTypeUseEventData);
	UGSCTargetTypeUseEventData::~UGSCTargetTypeUseEventData() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseEventData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseEventData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCTargetTypeUseEventData, UGSCTargetTypeUseEventData::StaticClass, TEXT("UGSCTargetTypeUseEventData"), &Z_Registration_Info_UClass_UGSCTargetTypeUseEventData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCTargetTypeUseEventData), 1557999308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseEventData_h_2638272060(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseEventData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_TargetTypes_GSCTargetTypeUseEventData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
