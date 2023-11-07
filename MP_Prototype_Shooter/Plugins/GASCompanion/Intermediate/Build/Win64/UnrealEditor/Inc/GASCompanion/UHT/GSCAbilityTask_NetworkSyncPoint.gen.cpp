// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/Tasks/GSCAbilityTask_NetworkSyncPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAbilityTask_NetworkSyncPoint() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_NoRegister();
	GASCOMPANION_API UEnum* Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCNetworkSyncDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCNetworkSyncDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCNetworkSyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GSCAbilityTask_NetworkSyncPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCNetworkSyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCNetworkSyncDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCNetworkSyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCNetworkSyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCNetworkSyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCNetworkSyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCNetworkSyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSCNetworkSyncDelegate)
{
	GSCNetworkSyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGSCAbilityTaskNetSyncType;
	static UEnum* EGSCAbilityTaskNetSyncType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGSCAbilityTaskNetSyncType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGSCAbilityTaskNetSyncType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("EGSCAbilityTaskNetSyncType"));
		}
		return Z_Registration_Info_UEnum_EGSCAbilityTaskNetSyncType.OuterSingleton;
	}
	template<> GASCOMPANION_API UEnum* StaticEnum<EGSCAbilityTaskNetSyncType>()
	{
		return EGSCAbilityTaskNetSyncType_StaticEnum();
	}
	struct Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType_Statics::Enumerators[] = {
		{ "EGSCAbilityTaskNetSyncType::BothWait", (int64)EGSCAbilityTaskNetSyncType::BothWait },
		{ "EGSCAbilityTaskNetSyncType::OnlyServerWait", (int64)EGSCAbilityTaskNetSyncType::OnlyServerWait },
		{ "EGSCAbilityTaskNetSyncType::OnlyClientWait", (int64)EGSCAbilityTaskNetSyncType::OnlyClientWait },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType_Statics::Enum_MetaDataParams[] = {
		{ "BothWait.Comment", "/** Both client and server wait until the other signals */" },
		{ "BothWait.Name", "EGSCAbilityTaskNetSyncType::BothWait" },
		{ "BothWait.ToolTip", "Both client and server wait until the other signals" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GSCAbilityTask_NetworkSyncPoint.h" },
		{ "OnlyClientWait.Comment", "/** Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client. */" },
		{ "OnlyClientWait.Name", "EGSCAbilityTaskNetSyncType::OnlyClientWait" },
		{ "OnlyClientWait.ToolTip", "Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client." },
		{ "OnlyServerWait.Comment", "/** Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server. */" },
		{ "OnlyServerWait.Name", "EGSCAbilityTaskNetSyncType::OnlyServerWait" },
		{ "OnlyServerWait.ToolTip", "Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		"EGSCAbilityTaskNetSyncType",
		"EGSCAbilityTaskNetSyncType",
		Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType()
	{
		if (!Z_Registration_Info_UEnum_EGSCAbilityTaskNetSyncType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGSCAbilityTaskNetSyncType.InnerSingleton, Z_Construct_UEnum_GASCompanion_EGSCAbilityTaskNetSyncType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGSCAbilityTaskNetSyncType.InnerSingleton;
	}
	DEFINE_FUNCTION(UGSCAbilityTask_NetworkSyncPoint::execOnSignalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSignalCallback();
		P_NATIVE_END;
	}
	void UGSCAbilityTask_NetworkSyncPoint::StaticRegisterNativesUGSCAbilityTask_NetworkSyncPoint()
	{
		UClass* Class = UGSCAbilityTask_NetworkSyncPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSignalCallback", &UGSCAbilityTask_NetworkSyncPoint::execOnSignalCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GSCAbilityTask_NetworkSyncPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint, nullptr, "OnSignalCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSCAbilityTask_NetworkSyncPoint_OnSignalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAbilityTask_NetworkSyncPoint);
	UClass* Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_NoRegister()
	{
		return UGSCAbilityTask_NetworkSyncPoint::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSync_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSync;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCAbilityTask_NetworkSyncPoint_OnSignalCallback, "OnSignalCallback" }, // 4052118937
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Task for providing a generic sync point for client server (one can wait for a signal from the other) */" },
		{ "IncludePath", "Abilities/Tasks/GSCAbilityTask_NetworkSyncPoint.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GSCAbilityTask_NetworkSyncPoint.h" },
		{ "ToolTip", "Task for providing a generic sync point for client server (one can wait for a signal from the other)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GSCAbilityTask_NetworkSyncPoint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync = { "OnSync", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityTask_NetworkSyncPoint, OnSync), Z_Construct_UDelegateFunction_GASCompanion_GSCNetworkSyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync_MetaData), Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync_MetaData) }; // 2429192929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAbilityTask_NetworkSyncPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::ClassParams = {
		&UGSCAbilityTask_NetworkSyncPoint::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint()
	{
		if (!Z_Registration_Info_UClass_UGSCAbilityTask_NetworkSyncPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAbilityTask_NetworkSyncPoint.OuterSingleton, Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAbilityTask_NetworkSyncPoint.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCAbilityTask_NetworkSyncPoint>()
	{
		return UGSCAbilityTask_NetworkSyncPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAbilityTask_NetworkSyncPoint);
	UGSCAbilityTask_NetworkSyncPoint::~UGSCAbilityTask_NetworkSyncPoint() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCAbilityTask_NetworkSyncPoint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCAbilityTask_NetworkSyncPoint_h_Statics::EnumInfo[] = {
		{ EGSCAbilityTaskNetSyncType_StaticEnum, TEXT("EGSCAbilityTaskNetSyncType"), &Z_Registration_Info_UEnum_EGSCAbilityTaskNetSyncType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2086199899U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCAbilityTask_NetworkSyncPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAbilityTask_NetworkSyncPoint, UGSCAbilityTask_NetworkSyncPoint::StaticClass, TEXT("UGSCAbilityTask_NetworkSyncPoint"), &Z_Registration_Info_UClass_UGSCAbilityTask_NetworkSyncPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAbilityTask_NetworkSyncPoint), 3750307903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCAbilityTask_NetworkSyncPoint_h_1439315280(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCAbilityTask_NetworkSyncPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCAbilityTask_NetworkSyncPoint_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCAbilityTask_NetworkSyncPoint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCAbilityTask_NetworkSyncPoint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
