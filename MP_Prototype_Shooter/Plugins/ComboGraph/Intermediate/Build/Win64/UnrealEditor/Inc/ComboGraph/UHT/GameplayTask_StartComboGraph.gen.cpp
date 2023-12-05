// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Abilities/Tasks/GameplayTask_StartComboGraph.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_StartComboGraph() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNativeAbility_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UGameplayTask_StartComboGraph();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UGameplayTask_StartComboGraph_NoRegister();
	COMBOGRAPH_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics
	{
		struct GameplayTask_StartComboGraph_eventComboGraphTaskEventDelegate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_StartComboGraph_eventComboGraphTaskEventDelegate_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_StartComboGraph_eventComboGraphTaskEventDelegate_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_StartComboGraph, nullptr, "ComboGraphTaskEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::GameplayTask_StartComboGraph_eventComboGraphTaskEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::GameplayTask_StartComboGraph_eventComboGraphTaskEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGameplayTask_StartComboGraph::FComboGraphTaskEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphTaskEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData)
{
	struct GameplayTask_StartComboGraph_eventComboGraphTaskEventDelegate_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
	GameplayTask_StartComboGraph_eventComboGraphTaskEventDelegate_Parms Parms;
	Parms.EventTag=EventTag;
	Parms.EventData=EventData;
	ComboGraphTaskEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGameplayTask_StartComboGraph::execTaskStartComboGraph)
	{
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner);
		P_GET_OBJECT(UComboGraph,Z_Param_ComboGraph);
		P_GET_OBJECT(UInputAction,Z_Param_InitialInput);
		P_GET_UBOOL(Z_Param_bBroadcastInternalEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayTask_StartComboGraph**)Z_Param__Result=UGameplayTask_StartComboGraph::TaskStartComboGraph(Z_Param_TaskOwner,Z_Param_ComboGraph,Z_Param_InitialInput,Z_Param_bBroadcastInternalEvents);
		P_NATIVE_END;
	}
	void UGameplayTask_StartComboGraph::StaticRegisterNativesUGameplayTask_StartComboGraph()
	{
		UClass* Class = UGameplayTask_StartComboGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TaskStartComboGraph", &UGameplayTask_StartComboGraph::execTaskStartComboGraph },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics
	{
		struct GameplayTask_StartComboGraph_eventTaskStartComboGraph_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
			UComboGraph* ComboGraph;
			UInputAction* InitialInput;
			bool bBroadcastInternalEvents;
			UGameplayTask_StartComboGraph* ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner;
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
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_StartComboGraph_eventTaskStartComboGraph_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_ComboGraph = { "ComboGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_StartComboGraph_eventTaskStartComboGraph_Parms, ComboGraph), Z_Construct_UClass_UComboGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_InitialInput = { "InitialInput", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_StartComboGraph_eventTaskStartComboGraph_Parms, InitialInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_bBroadcastInternalEvents_SetBit(void* Obj)
	{
		((GameplayTask_StartComboGraph_eventTaskStartComboGraph_Parms*)Obj)->bBroadcastInternalEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_bBroadcastInternalEvents = { "bBroadcastInternalEvents", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayTask_StartComboGraph_eventTaskStartComboGraph_Parms), &Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_bBroadcastInternalEvents_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_StartComboGraph_eventTaskStartComboGraph_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_StartComboGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_TaskOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_ComboGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_InitialInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_bBroadcastInternalEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bBroadcastInternalEvents, InitialInput" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "GameplayTasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* This Gameplay Task is meant to be used to start / activate a Combo Graph Asset from outside a Gameplay Ability and regular GAS route.\n\x09*\n\x09* @param TaskOwner Gameplay Task Owner for the task (such as ComboGraphSystemComponent)\n\x09* @param ComboGraph The Combo Graph asset to start / activate\n\x09* @param InitialInput Initial Input Action to pass in to combo graph (only relevant with Conduit immediately following entry node). Without conduit, will be ignored.\n\x09* @param bBroadcastInternalEvents Whether to broadcast internal gameplay events with EventReceived delegate (including Combo Being and End events)\n\x09*/" },
#endif
		{ "CPP_Default_bBroadcastInternalEvents", "false" },
		{ "DefaultToSelf", "TaskOwner" },
		{ "DisplayName", "Start Combo Graph for Gameplay Task" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Gameplay Task is meant to be used to start / activate a Combo Graph Asset from outside a Gameplay Ability and regular GAS route.\n\n@param TaskOwner Gameplay Task Owner for the task (such as ComboGraphSystemComponent)\n@param ComboGraph The Combo Graph asset to start / activate\n@param InitialInput Initial Input Action to pass in to combo graph (only relevant with Conduit immediately following entry node). Without conduit, will be ignored.\n@param bBroadcastInternalEvents Whether to broadcast internal gameplay events with EventReceived delegate (including Combo Being and End events)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_StartComboGraph, nullptr, "TaskStartComboGraph", nullptr, nullptr, Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::GameplayTask_StartComboGraph_eventTaskStartComboGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::GameplayTask_StartComboGraph_eventTaskStartComboGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask_StartComboGraph);
	UClass* Z_Construct_UClass_UGameplayTask_StartComboGraph_NoRegister()
	{
		return UGameplayTask_StartComboGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActivationSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivationSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActivationFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivationFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGraphEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGraphEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAbility_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature, "ComboGraphTaskEventDelegate__DelegateSignature" }, // 1048488650
		{ &Z_Construct_UFunction_UGameplayTask_StartComboGraph_TaskStartComboGraph, "TaskStartComboGraph" }, // 3302225822
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Convenience task for running combo graphs assets.\n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/GameplayTask_StartComboGraph.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience task for running combo graphs assets." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event called when ability was successfully activated */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when ability was successfully activated" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationSuccess = { "OnActivationSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_StartComboGraph, OnActivationSuccess), Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationSuccess_MetaData), Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationSuccess_MetaData) }; // 1048488650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationFailed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event called when ability failed to activate */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when ability failed to activate" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationFailed = { "OnActivationFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_StartComboGraph, OnActivationFailed), Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationFailed_MetaData), Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationFailed_MetaData) }; // 1048488650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnGraphEnd_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event called when ability (and combo graph) ends */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when ability (and combo graph) ends" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnGraphEnd = { "OnGraphEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_StartComboGraph, OnGraphEnd), Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnGraphEnd_MetaData), Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnGraphEnd_MetaData) }; // 1048488650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_EventReceived_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event called when the owner receives a gameplay event combo graph is listening to */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when the owner receives a gameplay event combo graph is listening to" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_StartComboGraph, EventReceived), Z_Construct_UDelegateFunction_UGameplayTask_StartComboGraph_ComboGraphTaskEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_EventReceived_MetaData), Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_EventReceived_MetaData) }; // 1048488650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedGraph_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached Graph when activating the task for an actor (task param) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached Graph when activating the task for an actor (task param)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedGraph = { "CachedGraph", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_StartComboGraph, CachedGraph), Z_Construct_UClass_UComboGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedGraph_MetaData), Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_InitialInput_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached Graph when activating the task for an actor (task param) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached Graph when activating the task for an actor (task param)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_InitialInput = { "InitialInput", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_StartComboGraph, InitialInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_InitialInput_MetaData), Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_InitialInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/GameplayTask_StartComboGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedAbility = { "CachedAbility", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_StartComboGraph, CachedAbility), Z_Construct_UClass_UComboGraphNativeAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedAbility_MetaData), Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedAbility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnActivationFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_OnGraphEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_EventReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_InitialInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::NewProp_CachedAbility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_StartComboGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::ClassParams = {
		&UGameplayTask_StartComboGraph::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameplayTask_StartComboGraph()
	{
		if (!Z_Registration_Info_UClass_UGameplayTask_StartComboGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask_StartComboGraph.OuterSingleton, Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTask_StartComboGraph.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UGameplayTask_StartComboGraph>()
	{
		return UGameplayTask_StartComboGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_StartComboGraph);
	UGameplayTask_StartComboGraph::~UGameplayTask_StartComboGraph() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask_StartComboGraph, UGameplayTask_StartComboGraph::StaticClass, TEXT("UGameplayTask_StartComboGraph"), &Z_Registration_Info_UClass_UGameplayTask_StartComboGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask_StartComboGraph), 447747654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_746609506(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
