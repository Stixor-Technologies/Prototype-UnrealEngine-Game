// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Abilities/Tasks/ComboGraphAbilityTask_NetworkSyncPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphAbilityTask_NetworkSyncPoint() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_NoRegister();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType();
	COMBOGRAPH_API UFunction* Z_Construct_UDelegateFunction_ComboGraph_ComboGraphNetworkSyncDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ComboGraph_ComboGraphNetworkSyncDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ComboGraph_ComboGraphNetworkSyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_NetworkSyncPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ComboGraph_ComboGraphNetworkSyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ComboGraph, nullptr, "ComboGraphNetworkSyncDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphNetworkSyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphNetworkSyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ComboGraph_ComboGraphNetworkSyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ComboGraph_ComboGraphNetworkSyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FComboGraphNetworkSyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphNetworkSyncDelegate)
{
	ComboGraphNetworkSyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphAbilityTaskNetSyncType;
	static UEnum* EComboGraphAbilityTaskNetSyncType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphAbilityTaskNetSyncType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphAbilityTaskNetSyncType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EComboGraphAbilityTaskNetSyncType"));
		}
		return Z_Registration_Info_UEnum_EComboGraphAbilityTaskNetSyncType.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphAbilityTaskNetSyncType>()
	{
		return EComboGraphAbilityTaskNetSyncType_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType_Statics::Enumerators[] = {
		{ "EComboGraphAbilityTaskNetSyncType::BothWait", (int64)EComboGraphAbilityTaskNetSyncType::BothWait },
		{ "EComboGraphAbilityTaskNetSyncType::OnlyServerWait", (int64)EComboGraphAbilityTaskNetSyncType::OnlyServerWait },
		{ "EComboGraphAbilityTaskNetSyncType::OnlyClientWait", (int64)EComboGraphAbilityTaskNetSyncType::OnlyClientWait },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType_Statics::Enum_MetaDataParams[] = {
		{ "BothWait.Comment", "/** Both client and server wait until the other signals */" },
		{ "BothWait.Name", "EComboGraphAbilityTaskNetSyncType::BothWait" },
		{ "BothWait.ToolTip", "Both client and server wait until the other signals" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_NetworkSyncPoint.h" },
		{ "OnlyClientWait.Comment", "/** Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client. */" },
		{ "OnlyClientWait.Name", "EComboGraphAbilityTaskNetSyncType::OnlyClientWait" },
		{ "OnlyClientWait.ToolTip", "Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client." },
		{ "OnlyServerWait.Comment", "/** Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server. */" },
		{ "OnlyServerWait.Name", "EComboGraphAbilityTaskNetSyncType::OnlyServerWait" },
		{ "OnlyServerWait.ToolTip", "Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EComboGraphAbilityTaskNetSyncType",
		"EComboGraphAbilityTaskNetSyncType",
		Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphAbilityTaskNetSyncType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphAbilityTaskNetSyncType.InnerSingleton, Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphAbilityTaskNetSyncType.InnerSingleton;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_NetworkSyncPoint::execWaitNetSync)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_ENUM(EComboGraphAbilityTaskNetSyncType,Z_Param_SyncType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraphAbilityTask_NetworkSyncPoint**)Z_Param__Result=UComboGraphAbilityTask_NetworkSyncPoint::WaitNetSync(Z_Param_OwningAbility,EComboGraphAbilityTaskNetSyncType(Z_Param_SyncType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_NetworkSyncPoint::execOnSignalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSignalCallback();
		P_NATIVE_END;
	}
	void UComboGraphAbilityTask_NetworkSyncPoint::StaticRegisterNativesUComboGraphAbilityTask_NetworkSyncPoint()
	{
		UClass* Class = UComboGraphAbilityTask_NetworkSyncPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSignalCallback", &UComboGraphAbilityTask_NetworkSyncPoint::execOnSignalCallback },
			{ "WaitNetSync", &UComboGraphAbilityTask_NetworkSyncPoint::execWaitNetSync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_NetworkSyncPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint, nullptr, "OnSignalCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_OnSignalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_OnSignalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics
	{
		struct ComboGraphAbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms
		{
			UGameplayAbility* OwningAbility;
			EComboGraphAbilityTaskNetSyncType SyncType;
			UComboGraphAbilityTask_NetworkSyncPoint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SyncType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SyncType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_SyncType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_SyncType = { "SyncType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms, SyncType), Z_Construct_UEnum_ComboGraph_EComboGraphAbilityTaskNetSyncType, METADATA_PARAMS(0, nullptr) }; // 3494738704
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms, ReturnValue), Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_SyncType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_SyncType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 *\x09\n\x09 *\x09Synchronize execution flow between Client and Server. Depending on SyncType, the Client and Server will wait for the other to reach this node or another WaitNetSync node in the ability before continuing execution.  \n\x09 *\x09\n\x09 *\x09""BothWait - Both Client and Server will wait until the other reaches the node. (Whoever gets their first, waits for the other before continueing).\n\x09 *\x09OnlyServerWait - Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server.\n\x09 *\x09OnlyClientWait - Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client.\n\x09 *\x09\n\x09 *\x09Note that this is \"ability instance wide\". These sync points never affect sync points in other abilities. \n\x09 *\x09\n\x09 *\x09In most cases you will have both client and server execution paths connected to the same WaitNetSync node. However it is possible to use separate nodes\n\x09 *\x09""for cleanliness of the graph. The \"signal\" is \"ability instance wide\".\n\x09 *\x09\n\x09 */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_NetworkSyncPoint.h" },
		{ "ToolTip", "Synchronize execution flow between Client and Server. Depending on SyncType, the Client and Server will wait for the other to reach this node or another WaitNetSync node in the ability before continuing execution.\n\nBothWait - Both Client and Server will wait until the other reaches the node. (Whoever gets their first, waits for the other before continueing).\nOnlyServerWait - Only server will wait for the client signal. Client will signal and immediately continue without waiting to hear from Server.\nOnlyClientWait - Only client will wait for the server signal. Server will signal and immediately continue without waiting to hear from Client.\n\nNote that this is \"ability instance wide\". These sync points never affect sync points in other abilities.\n\nIn most cases you will have both client and server execution paths connected to the same WaitNetSync node. However it is possible to use separate nodes\nfor cleanliness of the graph. The \"signal\" is \"ability instance wide\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint, nullptr, "WaitNetSync", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::ComboGraphAbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::ComboGraphAbilityTask_NetworkSyncPoint_eventWaitNetSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphAbilityTask_NetworkSyncPoint);
	UClass* Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_NoRegister()
	{
		return UComboGraphAbilityTask_NetworkSyncPoint::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics
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
	UObject* (*const Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_OnSignalCallback, "OnSignalCallback" }, // 3466337056
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_NetworkSyncPoint_WaitNetSync, "WaitNetSync" }, // 3577536441
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Task for providing a generic sync point for client server (one can wait for a signal from the other)\n *\n * Forked from engine to fix an issue with 5.1.0 that will likely get patched in 5.1.1\n *\n * See https://github.com/EpicGames/UnrealEngine/commit/49b4d85a967a1093f188334d9b1be65805ec00e8\n */" },
		{ "IncludePath", "Abilities/Tasks/ComboGraphAbilityTask_NetworkSyncPoint.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_NetworkSyncPoint.h" },
		{ "ToolTip", "Task for providing a generic sync point for client server (one can wait for a signal from the other)\n\nForked from engine to fix an issue with 5.1.0 that will likely get patched in 5.1.1\n\nSee https://github.com/EpicGames/UnrealEngine/commit/49b4d85a967a1093f188334d9b1be65805ec00e8" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_NetworkSyncPoint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync = { "OnSync", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_NetworkSyncPoint, OnSync), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphNetworkSyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync_MetaData) }; // 323618029
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::NewProp_OnSync,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphAbilityTask_NetworkSyncPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::ClassParams = {
		&UComboGraphAbilityTask_NetworkSyncPoint::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint()
	{
		if (!Z_Registration_Info_UClass_UComboGraphAbilityTask_NetworkSyncPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphAbilityTask_NetworkSyncPoint.OuterSingleton, Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphAbilityTask_NetworkSyncPoint.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphAbilityTask_NetworkSyncPoint>()
	{
		return UComboGraphAbilityTask_NetworkSyncPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphAbilityTask_NetworkSyncPoint);
	UComboGraphAbilityTask_NetworkSyncPoint::~UComboGraphAbilityTask_NetworkSyncPoint() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_Statics::EnumInfo[] = {
		{ EComboGraphAbilityTaskNetSyncType_StaticEnum, TEXT("EComboGraphAbilityTaskNetSyncType"), &Z_Registration_Info_UEnum_EComboGraphAbilityTaskNetSyncType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3494738704U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint, UComboGraphAbilityTask_NetworkSyncPoint::StaticClass, TEXT("UComboGraphAbilityTask_NetworkSyncPoint"), &Z_Registration_Info_UClass_UComboGraphAbilityTask_NetworkSyncPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphAbilityTask_NetworkSyncPoint), 3695521940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_2525435246(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
