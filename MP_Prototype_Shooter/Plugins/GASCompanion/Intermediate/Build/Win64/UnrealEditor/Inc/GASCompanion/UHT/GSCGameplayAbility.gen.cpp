// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/GSCGameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "GASCompanion/Public/Abilities/GSCTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGameplayAbility() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameplayAbility();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameplayAbility_NoRegister();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_OnAbilityEnded__DelegateSignature();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectContainer();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GASCompanion_OnAbilityEnded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_OnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_OnAbilityEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "OnAbilityEnded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_OnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_OnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_OnAbilityEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_OnAbilityEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAbilityEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityEnded)
{
	OnAbilityEnded.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UGSCGameplayAbility::execApplyEffectContainer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag);
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainer(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCGameplayAbility::execApplyEffectContainerSpec)
	{
		P_GET_STRUCT_REF(FGSCGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainerSpec(Z_Param_Out_ContainerSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCGameplayAbility::execMakeEffectContainerSpec)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag);
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGSCGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpec(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCGameplayAbility::execMakeEffectContainerSpecFromContainer)
	{
		P_GET_STRUCT_REF(FGSCGameplayEffectContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGSCGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpecFromContainer(Z_Param_Out_Container,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
		P_NATIVE_END;
	}
	void UGSCGameplayAbility::StaticRegisterNativesUGSCGameplayAbility()
	{
		UClass* Class = UGSCGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffectContainer", &UGSCGameplayAbility::execApplyEffectContainer },
			{ "ApplyEffectContainerSpec", &UGSCGameplayAbility::execApplyEffectContainerSpec },
			{ "MakeEffectContainerSpec", &UGSCGameplayAbility::execMakeEffectContainerSpec },
			{ "MakeEffectContainerSpecFromContainer", &UGSCGameplayAbility::execMakeEffectContainerSpecFromContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics
	{
		struct GSCGameplayAbility_eventApplyEffectContainer_Parms
		{
			FGameplayTag ContainerTag;
			FGameplayEventData EventData;
			int32 OverrideGameplayLevel;
			TArray<FActiveGameplayEffectHandle> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_ContainerTag = { "ContainerTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventApplyEffectContainer_Parms, ContainerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventApplyEffectContainer_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData_MetaData), Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData_MetaData) }; // 3848146833
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventApplyEffectContainer_Parms, OverrideGameplayLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventApplyEffectContainer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_ContainerTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_OverrideGameplayLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies a gameplay effect container, by creating and then applying the spec */" },
#endif
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a gameplay effect container, by creating and then applying the spec" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCGameplayAbility, nullptr, "ApplyEffectContainer", nullptr, nullptr, Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::GSCGameplayAbility_eventApplyEffectContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::GSCGameplayAbility_eventApplyEffectContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics
	{
		struct GSCGameplayAbility_eventApplyEffectContainerSpec_Parms
		{
			FGSCGameplayEffectContainerSpec ContainerSpec;
			TArray<FActiveGameplayEffectHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventApplyEffectContainerSpec_Parms, ContainerSpec), Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData), Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData) }; // 2872509900
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventApplyEffectContainerSpec_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies a gameplay effect container spec that was previously created */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a gameplay effect container spec that was previously created" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCGameplayAbility, nullptr, "ApplyEffectContainerSpec", nullptr, nullptr, Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::GSCGameplayAbility_eventApplyEffectContainerSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::GSCGameplayAbility_eventApplyEffectContainerSpec_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics
	{
		struct GSCGameplayAbility_eventMakeEffectContainerSpec_Parms
		{
			FGameplayTag ContainerTag;
			FGameplayEventData EventData;
			int32 OverrideGameplayLevel;
			FGSCGameplayEffectContainerSpec ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ContainerTag = { "ContainerTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventMakeEffectContainerSpec_Parms, ContainerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventMakeEffectContainerSpec_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData_MetaData), Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData_MetaData) }; // 3848146833
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventMakeEffectContainerSpec_Parms, OverrideGameplayLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventMakeEffectContainerSpec_Parms, ReturnValue), Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec, METADATA_PARAMS(0, nullptr) }; // 2872509900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ContainerTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_OverrideGameplayLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap */" },
#endif
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCGameplayAbility, nullptr, "MakeEffectContainerSpec", nullptr, nullptr, Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::GSCGameplayAbility_eventMakeEffectContainerSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::GSCGameplayAbility_eventMakeEffectContainerSpec_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics
	{
		struct GSCGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms
		{
			FGSCGameplayEffectContainer Container;
			FGameplayEventData EventData;
			int32 OverrideGameplayLevel;
			FGSCGameplayEffectContainerSpec ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, Container), Z_Construct_UScriptStruct_FGSCGameplayEffectContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container_MetaData), Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container_MetaData) }; // 1057264585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData_MetaData), Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData_MetaData) }; // 3848146833
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, OverrideGameplayLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec, METADATA_PARAMS(0, nullptr) }; // 2872509900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_OverrideGameplayLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Make gameplay effect container spec to be applied later, using the passed in container */" },
#endif
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make gameplay effect container spec to be applied later, using the passed in container" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCGameplayAbility, nullptr, "MakeEffectContainerSpecFromContainer", nullptr, nullptr, Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::GSCGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::GSCGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCGameplayAbility);
	UClass* Z_Construct_UClass_UGSCGameplayAbility_NoRegister()
	{
		return UGSCGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGSCGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooselyCheckAbilityCost_MetaData[];
#endif
		static void NewProp_bLooselyCheckAbilityCost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooselyCheckAbilityCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateOnGranted_MetaData[];
#endif
		static void NewProp_bActivateOnGranted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateOnGranted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAbilityQueue_MetaData[];
#endif
		static void NewProp_bEnableAbilityQueue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAbilityQueue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContainerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EffectContainerMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityEnded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainer, "ApplyEffectContainer" }, // 1198040042
		{ &Z_Construct_UFunction_UGSCGameplayAbility_ApplyEffectContainerSpec, "ApplyEffectContainerSpec" }, // 4209184544
		{ &Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpec, "MakeEffectContainerSpec" }, // 2640815243
		{ &Z_Construct_UFunction_UGSCGameplayAbility_MakeEffectContainerSpecFromContainer, "MakeEffectContainerSpecFromContainer" }, // 1240941966
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameplayAbility Parent class that is recommended to use with GAS Companion.\n *\n * Added functionality compared to regular UGameplayAbility includes:\n *\n * - GameplayEffect containers: https://github.com/tranek/GASDocumentation#concepts-ge-containers\n * - Ability Queue System support: If you intend to use Ability Queueing, you should rely on this class for your Abilities\n * - Loosely Check for Cost: If you'd like your abilities to activate regardless of cost attribute going into negative values,\n * and only checking if cost attribute is not below or equal to 0 already.\n * - End delegate: A blueprint assignable delegate is exposed which is triggered on ability end. Particularly useful for AI Behavior Tree tasks.\n * - Activate On Granted: Support for \"Passive\" abilities, an ability that automatically activates and run continuously (eg. not calling EndAbility).\n */" },
#endif
		{ "IncludePath", "Abilities/GSCGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayAbility Parent class that is recommended to use with GAS Companion.\n\nAdded functionality compared to regular UGameplayAbility includes:\n\n- GameplayEffect containers: https://github.com/tranek/GASDocumentation#concepts-ge-containers\n- Ability Queue System support: If you intend to use Ability Queueing, you should rely on this class for your Abilities\n- Loosely Check for Cost: If you'd like your abilities to activate regardless of cost attribute going into negative values,\nand only checking if cost attribute is not below or equal to 0 already.\n- End delegate: A blueprint assignable delegate is exposed which is triggered on ability end. Particularly useful for AI Behavior Tree tasks.\n- Activate On Granted: Support for \"Passive\" abilities, an ability that automatically activates and run continuously (eg. not calling EndAbility)." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bLooselyCheckAbilityCost_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** if true, the ability can be activated even it the cost is going into negative values, preventing activation only if cost is below or equal to 0 already */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if true, the ability can be activated even it the cost is going into negative values, preventing activation only if cost is below or equal to 0 already" },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bLooselyCheckAbilityCost_SetBit(void* Obj)
	{
		((UGSCGameplayAbility*)Obj)->bLooselyCheckAbilityCost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bLooselyCheckAbilityCost = { "bLooselyCheckAbilityCost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCGameplayAbility), &Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bLooselyCheckAbilityCost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bLooselyCheckAbilityCost_MetaData), Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bLooselyCheckAbilityCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bActivateOnGranted_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, the ability will be automatically activated as soon as it is granted.\n\x09 *\n\x09 * You can either implement one-off Abilities that are meant to be activated right away when granted,\n\x09 * or \"Passive Abilities\" with this, an ability that automatically activates and run continuously (eg. not calling EndAbility)\n\x09 *\n\x09 * In both case, GameplayAbilities configured to be activated on granted will only activate on server and typically have\n\x09 * a Net Execution Policy of Server Only.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the ability will be automatically activated as soon as it is granted.\n\nYou can either implement one-off Abilities that are meant to be activated right away when granted,\nor \"Passive Abilities\" with this, an ability that automatically activates and run continuously (eg. not calling EndAbility)\n\nIn both case, GameplayAbilities configured to be activated on granted will only activate on server and typically have\na Net Execution Policy of Server Only." },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bActivateOnGranted_SetBit(void* Obj)
	{
		((UGSCGameplayAbility*)Obj)->bActivateOnGranted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bActivateOnGranted = { "bActivateOnGranted", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCGameplayAbility), &Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bActivateOnGranted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bActivateOnGranted_MetaData), Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bActivateOnGranted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bEnableAbilityQueue_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable other abilities to be queued and activated when this ability ends.\n\x09 *\n\x09 * It is recommended to leave this variable to false, and instead use the AbilityQueueNotifyState (AbilityQueueWindow)\n\x09 * within montages to further tune when the Queue System is opened and closed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable other abilities to be queued and activated when this ability ends.\n\nIt is recommended to leave this variable to false, and instead use the AbilityQueueNotifyState (AbilityQueueWindow)\nwithin montages to further tune when the Queue System is opened and closed." },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bEnableAbilityQueue_SetBit(void* Obj)
	{
		((UGSCGameplayAbility*)Obj)->bEnableAbilityQueue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bEnableAbilityQueue = { "bEnableAbilityQueue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCGameplayAbility), &Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bEnableAbilityQueue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bEnableAbilityQueue_MetaData), Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bEnableAbilityQueue_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_EffectContainerMap_ValueProp = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGSCGameplayEffectContainer, METADATA_PARAMS(0, nullptr) }; // 1057264585
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_EffectContainerMap_Key_KeyProp = { "EffectContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_EffectContainerMap_MetaData[] = {
		{ "Category", "GameplayEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map of gameplay tags to gameplay effect containers */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of gameplay tags to gameplay effect containers" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_EffectContainerMap = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGameplayAbility, EffectContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_EffectContainerMap_MetaData), Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_EffectContainerMap_MetaData) }; // 2083603574 1057264585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_OnAbilityEnded_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when the ability ends.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the ability ends." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_OnAbilityEnded = { "OnAbilityEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGameplayAbility, OnAbilityEnded), Z_Construct_UDelegateFunction_GASCompanion_OnAbilityEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_OnAbilityEnded_MetaData), Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_OnAbilityEnded_MetaData) }; // 897371333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bLooselyCheckAbilityCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bActivateOnGranted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_bEnableAbilityQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_EffectContainerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_EffectContainerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_EffectContainerMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbility_Statics::NewProp_OnAbilityEnded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCGameplayAbility_Statics::ClassParams = {
		&UGSCGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UGSCGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCGameplayAbility.OuterSingleton, Z_Construct_UClass_UGSCGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCGameplayAbility.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCGameplayAbility>()
	{
		return UGSCGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGameplayAbility);
	UGSCGameplayAbility::~UGSCGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCGameplayAbility, UGSCGameplayAbility::StaticClass, TEXT("UGSCGameplayAbility"), &Z_Registration_Info_UClass_UGSCGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCGameplayAbility), 4017966996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_1624195283(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
