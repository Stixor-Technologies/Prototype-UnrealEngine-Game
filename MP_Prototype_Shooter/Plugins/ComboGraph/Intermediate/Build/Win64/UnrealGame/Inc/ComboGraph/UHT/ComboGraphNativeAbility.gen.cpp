// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Abilities/ComboGraphNativeAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphNativeAbility() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNativeAbility();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNativeAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	DEFINE_FUNCTION(UComboGraphNativeAbility::execHandleOnGraphEnd)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnGraphEnd(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNativeAbility::execHandleEventReceived)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEventReceived(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	void UComboGraphNativeAbility::StaticRegisterNativesUComboGraphNativeAbility()
	{
		UClass* Class = UComboGraphNativeAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleEventReceived", &UComboGraphNativeAbility::execHandleEventReceived },
			{ "HandleOnGraphEnd", &UComboGraphNativeAbility::execHandleOnGraphEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics
	{
		struct ComboGraphNativeAbility_eventHandleEventReceived_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNativeAbility_eventHandleEventReceived_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNativeAbility_eventHandleEventReceived_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/ComboGraphNativeAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNativeAbility, nullptr, "HandleEventReceived", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::ComboGraphNativeAbility_eventHandleEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::ComboGraphNativeAbility_eventHandleEventReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics
	{
		struct ComboGraphNativeAbility_eventHandleOnGraphEnd_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNativeAbility_eventHandleOnGraphEnd_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNativeAbility_eventHandleOnGraphEnd_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/ComboGraphNativeAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNativeAbility, nullptr, "HandleOnGraphEnd", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::ComboGraphNativeAbility_eventHandleOnGraphEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::ComboGraphNativeAbility_eventHandleOnGraphEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphNativeAbility);
	UClass* Z_Construct_UClass_UComboGraphNativeAbility_NoRegister()
	{
		return UComboGraphNativeAbility::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphNativeAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Task;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphNativeAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNativeAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphNativeAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphNativeAbility_HandleEventReceived, "HandleEventReceived" }, // 2334965216
		{ &Z_Construct_UFunction_UComboGraphNativeAbility_HandleOnGraphEnd, "HandleOnGraphEnd" }, // 1305925281
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNativeAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNativeAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Internal native Gameplay Ability to run Combo Graph passed in from Gameplay Event Data.\n */" },
		{ "IncludePath", "Abilities/ComboGraphNativeAbility.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Abilities/ComboGraphNativeAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Internal native Gameplay Ability to run Combo Graph passed in from Gameplay Event Data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNativeAbility_Statics::NewProp_Task_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/ComboGraphNativeAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphNativeAbility_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNativeAbility, Task), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNativeAbility_Statics::NewProp_Task_MetaData), Z_Construct_UClass_UComboGraphNativeAbility_Statics::NewProp_Task_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphNativeAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNativeAbility_Statics::NewProp_Task,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphNativeAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphNativeAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphNativeAbility_Statics::ClassParams = {
		&UComboGraphNativeAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboGraphNativeAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNativeAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNativeAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphNativeAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNativeAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphNativeAbility()
	{
		if (!Z_Registration_Info_UClass_UComboGraphNativeAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphNativeAbility.OuterSingleton, Z_Construct_UClass_UComboGraphNativeAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphNativeAbility.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphNativeAbility>()
	{
		return UComboGraphNativeAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphNativeAbility);
	UComboGraphNativeAbility::~UComboGraphNativeAbility() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphNativeAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphNativeAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphNativeAbility, UComboGraphNativeAbility::StaticClass, TEXT("UComboGraphNativeAbility"), &Z_Registration_Info_UClass_UComboGraphNativeAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphNativeAbility), 3402652165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphNativeAbility_h_1861572883(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphNativeAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphNativeAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
