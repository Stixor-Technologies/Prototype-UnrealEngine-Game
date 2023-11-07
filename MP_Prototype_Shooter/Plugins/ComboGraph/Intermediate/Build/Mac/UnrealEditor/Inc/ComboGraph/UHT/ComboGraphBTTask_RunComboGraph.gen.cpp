// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphBTTask_RunComboGraph() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphBTTask_RunComboGraph();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UGameplayTask_StartComboGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	DEFINE_FUNCTION(UComboGraphBTTask_RunComboGraph::execHandleActivationFailed)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_GameplayEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleActivationFailed(Z_Param_GameplayTag,Z_Param_GameplayEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphBTTask_RunComboGraph::execHandleEventReceived)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_GameplayEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEventReceived(Z_Param_GameplayTag,Z_Param_GameplayEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphBTTask_RunComboGraph::execHandleGraphEnd)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_GameplayEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGraphEnd(Z_Param_GameplayTag,Z_Param_GameplayEventData);
		P_NATIVE_END;
	}
	void UComboGraphBTTask_RunComboGraph::StaticRegisterNativesUComboGraphBTTask_RunComboGraph()
	{
		UClass* Class = UComboGraphBTTask_RunComboGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleActivationFailed", &UComboGraphBTTask_RunComboGraph::execHandleActivationFailed },
			{ "HandleEventReceived", &UComboGraphBTTask_RunComboGraph::execHandleEventReceived },
			{ "HandleGraphEnd", &UComboGraphBTTask_RunComboGraph::execHandleGraphEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics
	{
		struct ComboGraphBTTask_RunComboGraph_eventHandleActivationFailed_Parms
		{
			FGameplayTag GameplayTag;
			FGameplayEventData GameplayEventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBTTask_RunComboGraph_eventHandleActivationFailed_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::NewProp_GameplayEventData = { "GameplayEventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBTTask_RunComboGraph_eventHandleActivationFailed_Parms, GameplayEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::NewProp_GameplayEventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBTTask_RunComboGraph, nullptr, "HandleActivationFailed", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::ComboGraphBTTask_RunComboGraph_eventHandleActivationFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::ComboGraphBTTask_RunComboGraph_eventHandleActivationFailed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics
	{
		struct ComboGraphBTTask_RunComboGraph_eventHandleEventReceived_Parms
		{
			FGameplayTag GameplayTag;
			FGameplayEventData GameplayEventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBTTask_RunComboGraph_eventHandleEventReceived_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::NewProp_GameplayEventData = { "GameplayEventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBTTask_RunComboGraph_eventHandleEventReceived_Parms, GameplayEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::NewProp_GameplayEventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBTTask_RunComboGraph, nullptr, "HandleEventReceived", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::ComboGraphBTTask_RunComboGraph_eventHandleEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::ComboGraphBTTask_RunComboGraph_eventHandleEventReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics
	{
		struct ComboGraphBTTask_RunComboGraph_eventHandleGraphEnd_Parms
		{
			FGameplayTag GameplayTag;
			FGameplayEventData GameplayEventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBTTask_RunComboGraph_eventHandleGraphEnd_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::NewProp_GameplayEventData = { "GameplayEventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBTTask_RunComboGraph_eventHandleGraphEnd_Parms, GameplayEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::NewProp_GameplayEventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBTTask_RunComboGraph, nullptr, "HandleGraphEnd", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::ComboGraphBTTask_RunComboGraph_eventHandleGraphEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::ComboGraphBTTask_RunComboGraph_eventHandleGraphEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphBTTask_RunComboGraph);
	UClass* Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_NoRegister()
	{
		return UComboGraphBTTask_RunComboGraph::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboGraphAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboGraphAsset;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwnerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedOwnerComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleActivationFailed, "HandleActivationFailed" }, // 4103508528
		{ &Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleEventReceived, "HandleEventReceived" }, // 13912493
		{ &Z_Construct_UFunction_UComboGraphBTTask_RunComboGraph_HandleGraphEnd, "HandleGraphEnd" }, // 3327979871
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::Class_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/**\n * Run indicated ComboGraph Asset on Pawn Controlled by BT\n */" },
		{ "DisplayName", "Run Combo Graph" },
		{ "IncludePath", "BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Run indicated ComboGraph Asset on Pawn Controlled by BT" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ComboGraphAsset_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling */" },
		{ "ModuleRelativePath", "Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
		{ "ToolTip", "Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ComboGraphAsset = { "ComboGraphAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphBTTask_RunComboGraph, ComboGraphAsset), Z_Construct_UClass_UComboGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ComboGraphAsset_MetaData), Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ComboGraphAsset_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Stack of Input Actions to process and simulate inputs when the underlying gameplay task receives ComboBegin event, and schedule for execution on the next frame */" },
		{ "ModuleRelativePath", "Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
		{ "ToolTip", "Stack of Input Actions to process and simulate inputs when the underlying gameplay task receives ComboBegin event, and schedule for execution on the next frame" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphBTTask_RunComboGraph, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Inputs_MetaData), Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Inputs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Task_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphBTTask_RunComboGraph, Task), Z_Construct_UClass_UGameplayTask_StartComboGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Task_MetaData), Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Task_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_CachedOwnerComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_CachedOwnerComp = { "CachedOwnerComp", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphBTTask_RunComboGraph, CachedOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_CachedOwnerComp_MetaData), Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_CachedOwnerComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ControlledPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/ComboGraphBTTask_RunComboGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphBTTask_RunComboGraph, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ControlledPawn_MetaData), Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ControlledPawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ComboGraphAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_CachedOwnerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::NewProp_ControlledPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphBTTask_RunComboGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::ClassParams = {
		&UComboGraphBTTask_RunComboGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphBTTask_RunComboGraph()
	{
		if (!Z_Registration_Info_UClass_UComboGraphBTTask_RunComboGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphBTTask_RunComboGraph.OuterSingleton, Z_Construct_UClass_UComboGraphBTTask_RunComboGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphBTTask_RunComboGraph.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphBTTask_RunComboGraph>()
	{
		return UComboGraphBTTask_RunComboGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphBTTask_RunComboGraph);
	UComboGraphBTTask_RunComboGraph::~UComboGraphBTTask_RunComboGraph() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_BehaviorTree_ComboGraphBTTask_RunComboGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_BehaviorTree_ComboGraphBTTask_RunComboGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphBTTask_RunComboGraph, UComboGraphBTTask_RunComboGraph::StaticClass, TEXT("UComboGraphBTTask_RunComboGraph"), &Z_Registration_Info_UClass_UComboGraphBTTask_RunComboGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphBTTask_RunComboGraph), 179787690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_BehaviorTree_ComboGraphBTTask_RunComboGraph_h_810469687(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_BehaviorTree_ComboGraphBTTask_RunComboGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_BehaviorTree_ComboGraphBTTask_RunComboGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
