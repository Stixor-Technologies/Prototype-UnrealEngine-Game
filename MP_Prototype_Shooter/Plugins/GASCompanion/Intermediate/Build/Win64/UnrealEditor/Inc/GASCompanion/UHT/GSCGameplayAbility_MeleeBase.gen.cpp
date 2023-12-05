// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/GSCGameplayAbility_MeleeBase.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGameplayAbility_MeleeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCComboManagerComponent_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameplayAbility();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameplayAbility_MeleeBase();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	DEFINE_FUNCTION(UGSCGameplayAbility_MeleeBase::execGetNextComboMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetNextComboMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCGameplayAbility_MeleeBase::execOnEventReceived)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventReceived(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCGameplayAbility_MeleeBase::execOnMontageCompleted)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageCompleted(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCGameplayAbility_MeleeBase::execOnMontageCancelled)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageCancelled(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	void UGSCGameplayAbility_MeleeBase::StaticRegisterNativesUGSCGameplayAbility_MeleeBase()
	{
		UClass* Class = UGSCGameplayAbility_MeleeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextComboMontage", &UGSCGameplayAbility_MeleeBase::execGetNextComboMontage },
			{ "OnEventReceived", &UGSCGameplayAbility_MeleeBase::execOnEventReceived },
			{ "OnMontageCancelled", &UGSCGameplayAbility_MeleeBase::execOnMontageCancelled },
			{ "OnMontageCompleted", &UGSCGameplayAbility_MeleeBase::execOnMontageCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics
	{
		struct GSCGameplayAbility_MeleeBase_eventGetNextComboMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_MeleeBase_eventGetNextComboMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Ability|Melee" },
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCGameplayAbility_MeleeBase, nullptr, "GetNextComboMontage", nullptr, nullptr, Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::GSCGameplayAbility_MeleeBase_eventGetNextComboMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::GSCGameplayAbility_MeleeBase_eventGetNextComboMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics
	{
		struct GSCGameplayAbility_MeleeBase_eventOnEventReceived_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData EventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_MeleeBase_eventOnEventReceived_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_MeleeBase_eventOnEventReceived_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCGameplayAbility_MeleeBase, nullptr, "OnEventReceived", nullptr, nullptr, Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::GSCGameplayAbility_MeleeBase_eventOnEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::GSCGameplayAbility_MeleeBase_eventOnEventReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics
	{
		struct GSCGameplayAbility_MeleeBase_eventOnMontageCancelled_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData EventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_MeleeBase_eventOnMontageCancelled_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_MeleeBase_eventOnMontageCancelled_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCGameplayAbility_MeleeBase, nullptr, "OnMontageCancelled", nullptr, nullptr, Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::GSCGameplayAbility_MeleeBase_eventOnMontageCancelled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::GSCGameplayAbility_MeleeBase_eventOnMontageCancelled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics
	{
		struct GSCGameplayAbility_MeleeBase_eventOnMontageCompleted_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData EventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_MeleeBase_eventOnMontageCompleted_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_MeleeBase_eventOnMontageCompleted_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCGameplayAbility_MeleeBase, nullptr, "OnMontageCompleted", nullptr, nullptr, Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::GSCGameplayAbility_MeleeBase_eventOnMontageCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::GSCGameplayAbility_MeleeBase_eventOnMontageCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCGameplayAbility_MeleeBase);
	UClass* Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_NoRegister()
	{
		return UGSCGameplayAbility_MeleeBase::StaticClass();
	}
	struct Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboManagerComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Montages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Montages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitForEventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaitForEventTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGSCGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_GetNextComboMontage, "GetNextComboMontage" }, // 518352224
		{ &Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnEventReceived, "OnEventReceived" }, // 1098358451
		{ &Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCancelled, "OnMontageCancelled" }, // 1890294631
		{ &Z_Construct_UFunction_UGSCGameplayAbility_MeleeBase_OnMontageCompleted, "OnMontageCompleted" }, // 1185196200
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Abilities/GSCGameplayAbility_MeleeBase.h" },
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility_MeleeBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_ComboManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_ComboManagerComponent = { "ComboManagerComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGameplayAbility_MeleeBase, ComboManagerComponent), Z_Construct_UClass_UGSCComboManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_ComboManagerComponent_MetaData), Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_ComboManagerComponent_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Montages_Inner = { "Montages", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Montages_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of animation montages you want to cycle through when activating this ability */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility_MeleeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of animation montages you want to cycle through when activating this ability" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGameplayAbility_MeleeBase, Montages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Montages_MetaData), Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Montages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Rate_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Change to play the montage faster or slower */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility_MeleeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change to play the montage faster or slower" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGameplayAbility_MeleeBase, Rate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Rate_MetaData), Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Rate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Any gameplay events matching this tag will activate the OnEventReceived callback and apply the gameplay effect containers for this ability */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility_MeleeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any gameplay events matching this tag will activate the OnEventReceived callback and apply the gameplay effect containers for this ability" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag = { "WaitForEventTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGameplayAbility_MeleeBase, WaitForEventTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag_MetaData), Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_ComboManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Montages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Montages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGameplayAbility_MeleeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::ClassParams = {
		&UGSCGameplayAbility_MeleeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCGameplayAbility_MeleeBase()
	{
		if (!Z_Registration_Info_UClass_UGSCGameplayAbility_MeleeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCGameplayAbility_MeleeBase.OuterSingleton, Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCGameplayAbility_MeleeBase.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCGameplayAbility_MeleeBase>()
	{
		return UGSCGameplayAbility_MeleeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGameplayAbility_MeleeBase);
	UGSCGameplayAbility_MeleeBase::~UGSCGameplayAbility_MeleeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCGameplayAbility_MeleeBase, UGSCGameplayAbility_MeleeBase::StaticClass, TEXT("UGSCGameplayAbility_MeleeBase"), &Z_Registration_Info_UClass_UGSCGameplayAbility_MeleeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCGameplayAbility_MeleeBase), 2169585290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_287658127(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
