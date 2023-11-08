// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphAbilityTask_StartGraph() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilityTask_StartGraph();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeConduit_NoRegister();
	COMBOGRAPH_API UFunction* Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics
	{
		struct _Script_ComboGraph_eventComboGraphAbilityTaskDelegate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ComboGraph_eventComboGraphAbilityTaskDelegate_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ComboGraph_eventComboGraphAbilityTaskDelegate_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ComboGraph, nullptr, "ComboGraphAbilityTaskDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::_Script_ComboGraph_eventComboGraphAbilityTaskDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::_Script_ComboGraph_eventComboGraphAbilityTaskDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FComboGraphAbilityTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphAbilityTaskDelegate, FGameplayTag EventTag, FGameplayEventData EventData)
{
	struct _Script_ComboGraph_eventComboGraphAbilityTaskDelegate_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
	_Script_ComboGraph_eventComboGraphAbilityTaskDelegate_Parms Parms;
	Parms.EventTag=EventTag;
	Parms.EventData=EventData;
	ComboGraphAbilityTaskDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execOnServerSyncAdvanceNextNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerSyncAdvanceNextNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execHandleEventReceived)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEventReceived(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execOnMontageInterrupted)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageInterrupted(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execOnMontageCancelled)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageCancelled(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execOnMontageBlendOut)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendOut(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execOnMontageCompleted)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageCompleted(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execOnEventInputReceived)
	{
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventInputReceived(Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execGetPreviousNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraphNodeAnimBase**)Z_Param__Result=P_THIS->GetPreviousNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execGetCurrentNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraphNodeAnimBase**)Z_Param__Result=P_THIS->GetCurrentNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_StartGraph::execCreateStartComboGraph)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(UComboGraph,Z_Param_ComboGraph);
		P_GET_OBJECT(UInputAction,Z_Param_InitialInput);
		P_GET_UBOOL(Z_Param_bBroadcastInternalEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraphAbilityTask_StartGraph**)Z_Param__Result=UComboGraphAbilityTask_StartGraph::CreateStartComboGraph(Z_Param_OwningAbility,Z_Param_ComboGraph,Z_Param_InitialInput,Z_Param_bBroadcastInternalEvents);
		P_NATIVE_END;
	}
	void UComboGraphAbilityTask_StartGraph::StaticRegisterNativesUComboGraphAbilityTask_StartGraph()
	{
		UClass* Class = UComboGraphAbilityTask_StartGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateStartComboGraph", &UComboGraphAbilityTask_StartGraph::execCreateStartComboGraph },
			{ "GetCurrentNode", &UComboGraphAbilityTask_StartGraph::execGetCurrentNode },
			{ "GetPreviousNode", &UComboGraphAbilityTask_StartGraph::execGetPreviousNode },
			{ "HandleEventReceived", &UComboGraphAbilityTask_StartGraph::execHandleEventReceived },
			{ "OnEventInputReceived", &UComboGraphAbilityTask_StartGraph::execOnEventInputReceived },
			{ "OnMontageBlendOut", &UComboGraphAbilityTask_StartGraph::execOnMontageBlendOut },
			{ "OnMontageCancelled", &UComboGraphAbilityTask_StartGraph::execOnMontageCancelled },
			{ "OnMontageCompleted", &UComboGraphAbilityTask_StartGraph::execOnMontageCompleted },
			{ "OnMontageInterrupted", &UComboGraphAbilityTask_StartGraph::execOnMontageInterrupted },
			{ "OnServerSyncAdvanceNextNode", &UComboGraphAbilityTask_StartGraph::execOnServerSyncAdvanceNextNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics
	{
		struct ComboGraphAbilityTask_StartGraph_eventCreateStartComboGraph_Parms
		{
			UGameplayAbility* OwningAbility;
			UComboGraph* ComboGraph;
			UInputAction* InitialInput;
			bool bBroadcastInternalEvents;
			UComboGraphAbilityTask_StartGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboGraph;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialInput;
		static void NewProp_bBroadcastInternalEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBroadcastInternalEvents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventCreateStartComboGraph_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_ComboGraph = { "ComboGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventCreateStartComboGraph_Parms, ComboGraph), Z_Construct_UClass_UComboGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_InitialInput = { "InitialInput", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventCreateStartComboGraph_Parms, InitialInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_bBroadcastInternalEvents_SetBit(void* Obj)
	{
		((ComboGraphAbilityTask_StartGraph_eventCreateStartComboGraph_Parms*)Obj)->bBroadcastInternalEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_bBroadcastInternalEvents = { "bBroadcastInternalEvents", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboGraphAbilityTask_StartGraph_eventCreateStartComboGraph_Parms), &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_bBroadcastInternalEvents_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventCreateStartComboGraph_Parms, ReturnValue), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_ComboGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_InitialInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_bBroadcastInternalEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bBroadcastInternalEvents, InitialInput" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Combo Graph|Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This task is meant to be used to start / activate a Combo Graph Asset from within a Gameplay Ability.\n\x09*\n\x09* @param OwningAbility\n\x09* @param ComboGraph The Combo Graph asset to start / activate\n\x09* @param InitialInput Initial Input Action to pass in to combo graph (only relevant with Conduit immediately following entry node). Without conduit, will be ignored.\n\x09* @param bBroadcastInternalEvents Whether to broadcast internal gameplay events with EventReceived delegate (including Combo Being and End events)\n\x09*/" },
#endif
		{ "CPP_Default_bBroadcastInternalEvents", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Start Combo Graph for Ability Task" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This task is meant to be used to start / activate a Combo Graph Asset from within a Gameplay Ability.\n\n@param OwningAbility\n@param ComboGraph The Combo Graph asset to start / activate\n@param InitialInput Initial Input Action to pass in to combo graph (only relevant with Conduit immediately following entry node). Without conduit, will be ignored.\n@param bBroadcastInternalEvents Whether to broadcast internal gameplay events with EventReceived delegate (including Combo Being and End events)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "CreateStartComboGraph", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::ComboGraphAbilityTask_StartGraph_eventCreateStartComboGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::ComboGraphAbilityTask_StartGraph_eventCreateStartComboGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics
	{
		struct ComboGraphAbilityTask_StartGraph_eventGetCurrentNode_Parms
		{
			UComboGraphNodeAnimBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventGetCurrentNode_Parms, ReturnValue), Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the currently active node for the task */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the currently active node for the task" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "GetCurrentNode", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::ComboGraphAbilityTask_StartGraph_eventGetCurrentNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::ComboGraphAbilityTask_StartGraph_eventGetCurrentNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics
	{
		struct ComboGraphAbilityTask_StartGraph_eventGetPreviousNode_Parms
		{
			UComboGraphNodeAnimBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventGetPreviousNode_Parms, ReturnValue), Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the node that was active just before the current one */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the node that was active just before the current one" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "GetPreviousNode", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::ComboGraphAbilityTask_StartGraph_eventGetPreviousNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::ComboGraphAbilityTask_StartGraph_eventGetPreviousNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics
	{
		struct ComboGraphAbilityTask_StartGraph_eventHandleEventReceived_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventHandleEventReceived_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventHandleEventReceived_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "HandleEventReceived", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::ComboGraphAbilityTask_StartGraph_eventHandleEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::ComboGraphAbilityTask_StartGraph_eventHandleEventReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics
	{
		struct ComboGraphAbilityTask_StartGraph_eventOnEventInputReceived_Parms
		{
			FGameplayEventData EventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventOnEventInputReceived_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "OnEventInputReceived", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::ComboGraphAbilityTask_StartGraph_eventOnEventInputReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::ComboGraphAbilityTask_StartGraph_eventOnEventInputReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics
	{
		struct ComboGraphAbilityTask_StartGraph_eventOnMontageBlendOut_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventOnMontageBlendOut_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventOnMontageBlendOut_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "OnMontageBlendOut", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::ComboGraphAbilityTask_StartGraph_eventOnMontageBlendOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::ComboGraphAbilityTask_StartGraph_eventOnMontageBlendOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics
	{
		struct ComboGraphAbilityTask_StartGraph_eventOnMontageCancelled_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventOnMontageCancelled_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventOnMontageCancelled_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "OnMontageCancelled", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::ComboGraphAbilityTask_StartGraph_eventOnMontageCancelled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::ComboGraphAbilityTask_StartGraph_eventOnMontageCancelled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics
	{
		struct ComboGraphAbilityTask_StartGraph_eventOnMontageCompleted_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventOnMontageCompleted_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventOnMontageCompleted_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "OnMontageCompleted", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::ComboGraphAbilityTask_StartGraph_eventOnMontageCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::ComboGraphAbilityTask_StartGraph_eventOnMontageCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics
	{
		struct ComboGraphAbilityTask_StartGraph_eventOnMontageInterrupted_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventOnMontageInterrupted_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_StartGraph_eventOnMontageInterrupted_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "OnMontageInterrupted", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::ComboGraphAbilityTask_StartGraph_eventOnMontageInterrupted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::ComboGraphAbilityTask_StartGraph_eventOnMontageInterrupted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnServerSyncAdvanceNextNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnServerSyncAdvanceNextNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnServerSyncAdvanceNextNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, nullptr, "OnServerSyncAdvanceNextNode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnServerSyncAdvanceNextNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnServerSyncAdvanceNextNode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnServerSyncAdvanceNextNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnServerSyncAdvanceNextNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphAbilityTask_StartGraph);
	UClass* Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_NoRegister()
	{
		return UComboGraphAbilityTask_StartGraph::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGraphStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGraphStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGraphEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGraphEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RunningGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RunningTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConduitNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConduitNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueuedNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_CreateStartComboGraph, "CreateStartComboGraph" }, // 2286233262
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetCurrentNode, "GetCurrentNode" }, // 350909752
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_GetPreviousNode, "GetPreviousNode" }, // 3567351534
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_HandleEventReceived, "HandleEventReceived" }, // 4056520406
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnEventInputReceived, "OnEventInputReceived" }, // 3698497220
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageBlendOut, "OnMontageBlendOut" }, // 2597933720
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCancelled, "OnMontageCancelled" }, // 214952893
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageCompleted, "OnMontageCompleted" }, // 659520652
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnMontageInterrupted, "OnMontageInterrupted" }, // 2456224957
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_StartGraph_OnServerSyncAdvanceNextNode, "OnServerSyncAdvanceNextNode" }, // 3488898206
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This task is meant to be used to start / activate a Combo Graph Asset from within a Gameplay Ability\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This task is meant to be used to start / activate a Combo Graph Asset from within a Gameplay Ability" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphStart_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event invoked when the combat graph is started. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event invoked when the combat graph is started." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphStart = { "OnGraphStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, OnGraphStart), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphStart_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphStart_MetaData) }; // 1762542490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphEnd_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event invoked when the combat graph ends (usually when a montage completes, meaning no further input registered, thus should end the ability) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event invoked when the combat graph ends (usually when a montage completes, meaning no further input registered, thus should end the ability)" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphEnd = { "OnGraphEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, OnGraphEnd), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphEnd_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphEnd_MetaData) }; // 1762542490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_EventReceived_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event triggered when a combo graph node is listening for specific tags (either via EventTags or from Cues / Effects Containers) and owning avatar actor is receiving those events */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when a combo graph node is listening for specific tags (either via EventTags or from Cues / Effects Containers) and owning avatar actor is receiving those events" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, EventReceived), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphAbilityTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_EventReceived_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_EventReceived_MetaData) }; // 1762542490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningGraph_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached Graph when activating the task for an actor (task param) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached Graph when activating the task for an actor (task param)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningGraph = { "RunningGraph", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, RunningGraph), Z_Construct_UClass_UComboGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningGraph_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InitialInput_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached Graph when activating the task for an actor (task param) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached Graph when activating the task for an actor (task param)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InitialInput = { "InitialInput", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, InitialInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InitialInput_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InitialInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningTask_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Currently running montage task */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently running montage task" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningTask = { "RunningTask", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, RunningTask), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningTask_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningTask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_CurrentNode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to active current node in the graph */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to active current node in the graph" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_CurrentNode = { "CurrentNode", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, CurrentNode), Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_CurrentNode_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_CurrentNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_ConduitNode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to conduit node immediately following entry node (if it exists) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to conduit node immediately following entry node (if it exists)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_ConduitNode = { "ConduitNode", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, ConduitNode), Z_Construct_UClass_UComboGraphNodeConduit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_ConduitNode_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_ConduitNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InputComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The owner pawn input component. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The owner pawn input component." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, InputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InputComponent_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InputComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_QueuedNode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to next node to go through on combo transition. Set in OnInputPressed for EventReceived to know which node to go next, based on input. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to next node to go through on combo transition. Set in OnInputPressed for EventReceived to know which node to go next, based on input." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_QueuedNode = { "QueuedNode", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, QueuedNode), Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_QueuedNode_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_QueuedNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_PreviousNode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to prev node we are transitioning from. Set in ServerSync when we receive the end combo event to transition to next node. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to prev node we are transitioning from. Set in ServerSync when we receive the end combo event to transition to next node." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_PreviousNode = { "PreviousNode", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_StartGraph, PreviousNode), Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_PreviousNode_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_PreviousNode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_OnGraphEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_EventReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InitialInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_RunningTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_CurrentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_ConduitNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_InputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_QueuedNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::NewProp_PreviousNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphAbilityTask_StartGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::ClassParams = {
		&UComboGraphAbilityTask_StartGraph::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphAbilityTask_StartGraph()
	{
		if (!Z_Registration_Info_UClass_UComboGraphAbilityTask_StartGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphAbilityTask_StartGraph.OuterSingleton, Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphAbilityTask_StartGraph.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphAbilityTask_StartGraph>()
	{
		return UComboGraphAbilityTask_StartGraph::StaticClass();
	}
	UComboGraphAbilityTask_StartGraph::UComboGraphAbilityTask_StartGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphAbilityTask_StartGraph);
	UComboGraphAbilityTask_StartGraph::~UComboGraphAbilityTask_StartGraph() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphAbilityTask_StartGraph, UComboGraphAbilityTask_StartGraph::StaticClass, TEXT("UComboGraphAbilityTask_StartGraph"), &Z_Registration_Info_UClass_UComboGraphAbilityTask_StartGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphAbilityTask_StartGraph), 3715090596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_3375673473(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
