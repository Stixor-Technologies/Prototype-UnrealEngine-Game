// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Utils/ComboGraphBlueprintLibrary.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphBlueprintLibrary() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphBlueprintLibrary();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphBlueprintLibrary_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphGameplayTasksComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	DEFINE_FUNCTION(UComboGraphBlueprintLibrary::execSimulateComboInput)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UInputAction,Z_Param_InputAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComboGraphBlueprintLibrary::SimulateComboInput(Z_Param_Actor,Z_Param_InputAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphBlueprintLibrary::execHasCueParamsObjectsPathsFromContext)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UComboGraphBlueprintLibrary::HasCueParamsObjectsPathsFromContext(Z_Param_Out_EffectContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphBlueprintLibrary::execGetCueParamsObjectsPathsFromContext)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoftObjectPath>*)Z_Param__Result=UComboGraphBlueprintLibrary::GetCueParamsObjectsPathsFromContext(Z_Param_Out_EffectContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphBlueprintLibrary::execHasCueParamsObjectsFromContext)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UComboGraphBlueprintLibrary::HasCueParamsObjectsFromContext(Z_Param_Out_EffectContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphBlueprintLibrary::execGetCueParamsObjectsFromContext)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UComboGraphBlueprintLibrary::GetCueParamsObjectsFromContext(Z_Param_Out_EffectContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphBlueprintLibrary::execGetComboGraphGameplayTasksComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraphGameplayTasksComponent**)Z_Param__Result=UComboGraphBlueprintLibrary::GetComboGraphGameplayTasksComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphBlueprintLibrary::execSendGameplayEventToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComboGraphBlueprintLibrary::SendGameplayEventToActor(Z_Param_Actor,Z_Param_EventTag,Z_Param_Payload);
		P_NATIVE_END;
	}
	void UComboGraphBlueprintLibrary::StaticRegisterNativesUComboGraphBlueprintLibrary()
	{
		UClass* Class = UComboGraphBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetComboGraphGameplayTasksComponent", &UComboGraphBlueprintLibrary::execGetComboGraphGameplayTasksComponent },
			{ "GetCueParamsObjectsFromContext", &UComboGraphBlueprintLibrary::execGetCueParamsObjectsFromContext },
			{ "GetCueParamsObjectsPathsFromContext", &UComboGraphBlueprintLibrary::execGetCueParamsObjectsPathsFromContext },
			{ "HasCueParamsObjectsFromContext", &UComboGraphBlueprintLibrary::execHasCueParamsObjectsFromContext },
			{ "HasCueParamsObjectsPathsFromContext", &UComboGraphBlueprintLibrary::execHasCueParamsObjectsPathsFromContext },
			{ "SendGameplayEventToActor", &UComboGraphBlueprintLibrary::execSendGameplayEventToActor },
			{ "SimulateComboInput", &UComboGraphBlueprintLibrary::execSimulateComboInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics
	{
		struct ComboGraphBlueprintLibrary_eventGetComboGraphGameplayTasksComponent_Parms
		{
			const AActor* Actor;
			UComboGraphGameplayTasksComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventGetComboGraphGameplayTasksComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventGetComboGraphGameplayTasksComponent_Parms, ReturnValue), Z_Construct_UClass_UComboGraphGameplayTasksComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Components" },
		{ "Comment", "/** Searches the passed in actor for a Combo Graph gameplay tasks component, will use component search */" },
		{ "ModuleRelativePath", "Public/Utils/ComboGraphBlueprintLibrary.h" },
		{ "ToolTip", "Searches the passed in actor for a Combo Graph gameplay tasks component, will use component search" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBlueprintLibrary, nullptr, "GetComboGraphGameplayTasksComponent", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::ComboGraphBlueprintLibrary_eventGetComboGraphGameplayTasksComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::ComboGraphBlueprintLibrary_eventGetComboGraphGameplayTasksComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics
	{
		struct ComboGraphBlueprintLibrary_eventGetCueParamsObjectsFromContext_Parms
		{
			FGameplayEffectContextHandle EffectContext;
			TArray<UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventGetCueParamsObjectsFromContext_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::NewProp_EffectContext_MetaData), Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::NewProp_EffectContext_MetaData) }; // 3768813396
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventGetCueParamsObjectsFromContext_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Effect Context" },
		{ "Comment", "/** Extracts Cue Params resolved Objects (set in a combo graph node) from Gameplay Effect Context */" },
		{ "ModuleRelativePath", "Public/Utils/ComboGraphBlueprintLibrary.h" },
		{ "ToolTip", "Extracts Cue Params resolved Objects (set in a combo graph node) from Gameplay Effect Context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBlueprintLibrary, nullptr, "GetCueParamsObjectsFromContext", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::ComboGraphBlueprintLibrary_eventGetCueParamsObjectsFromContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::ComboGraphBlueprintLibrary_eventGetCueParamsObjectsFromContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct ComboGraphBlueprintLibrary_eventGetCueParamsObjectsPathsFromContext_Parms
		{
			FGameplayEffectContextHandle EffectContext;
			TArray<FSoftObjectPath> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventGetCueParamsObjectsPathsFromContext_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext_MetaData), Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext_MetaData) }; // 3768813396
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventGetCueParamsObjectsPathsFromContext_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Effect Context" },
		{ "Comment", "/** Extracts Cue Params Soft Object Paths (set in a combo graph node) from Gameplay Effect Context */" },
		{ "ModuleRelativePath", "Public/Utils/ComboGraphBlueprintLibrary.h" },
		{ "ToolTip", "Extracts Cue Params Soft Object Paths (set in a combo graph node) from Gameplay Effect Context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBlueprintLibrary, nullptr, "GetCueParamsObjectsPathsFromContext", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::ComboGraphBlueprintLibrary_eventGetCueParamsObjectsPathsFromContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::ComboGraphBlueprintLibrary_eventGetCueParamsObjectsPathsFromContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics
	{
		struct ComboGraphBlueprintLibrary_eventHasCueParamsObjectsFromContext_Parms
		{
			FGameplayEffectContextHandle EffectContext;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventHasCueParamsObjectsFromContext_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::NewProp_EffectContext_MetaData), Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::NewProp_EffectContext_MetaData) }; // 3768813396
	void Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComboGraphBlueprintLibrary_eventHasCueParamsObjectsFromContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboGraphBlueprintLibrary_eventHasCueParamsObjectsFromContext_Parms), &Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Effect Context" },
		{ "Comment", "/** Checks if Gameplay Effect Context has any Cue Params resolved Objects (set in a combo graph node) */" },
		{ "ModuleRelativePath", "Public/Utils/ComboGraphBlueprintLibrary.h" },
		{ "ToolTip", "Checks if Gameplay Effect Context has any Cue Params resolved Objects (set in a combo graph node)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBlueprintLibrary, nullptr, "HasCueParamsObjectsFromContext", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::ComboGraphBlueprintLibrary_eventHasCueParamsObjectsFromContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::ComboGraphBlueprintLibrary_eventHasCueParamsObjectsFromContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics
	{
		struct ComboGraphBlueprintLibrary_eventHasCueParamsObjectsPathsFromContext_Parms
		{
			FGameplayEffectContextHandle EffectContext;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventHasCueParamsObjectsPathsFromContext_Parms, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext_MetaData), Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext_MetaData) }; // 3768813396
	void Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComboGraphBlueprintLibrary_eventHasCueParamsObjectsPathsFromContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboGraphBlueprintLibrary_eventHasCueParamsObjectsPathsFromContext_Parms), &Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Effect Context" },
		{ "Comment", "/** Checks if Gameplay Effect Context has any Cue Params Soft Object Paths (set in a combo graph node) */" },
		{ "ModuleRelativePath", "Public/Utils/ComboGraphBlueprintLibrary.h" },
		{ "ToolTip", "Checks if Gameplay Effect Context has any Cue Params Soft Object Paths (set in a combo graph node)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBlueprintLibrary, nullptr, "HasCueParamsObjectsPathsFromContext", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::ComboGraphBlueprintLibrary_eventHasCueParamsObjectsPathsFromContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::ComboGraphBlueprintLibrary_eventHasCueParamsObjectsPathsFromContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics
	{
		struct ComboGraphBlueprintLibrary_eventSendGameplayEventToActor_Parms
		{
			AActor* Actor;
			FGameplayTag EventTag;
			FGameplayEventData Payload;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventSendGameplayEventToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventSendGameplayEventToActor_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventSendGameplayEventToActor_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Ability" },
		{ "Comment", "/**\n\x09 * This function is functionally the same as SendGameplayEventToActor (from Ability System Blueprint Library),\n\x09 * except it can be used on actors that do not implement IAbilitySystemInterface. In ue5, this custom version\n\x09 * won't be necessary anymore.\n\x09 *\n\x09 * This function can be used to trigger an ability on the actor in question with useful payload data.\n\x09 * NOTE: GetAbilitySystemComponent is called on the actor to find a good component, and if the component isn't\n\x09 * found, the event will not be sent.\n\x09 */" },
		{ "DisplayName", "Send Gameplay Event to Actor (Combo Graph)" },
		{ "ModuleRelativePath", "Public/Utils/ComboGraphBlueprintLibrary.h" },
		{ "ToolTip", "This function is functionally the same as SendGameplayEventToActor (from Ability System Blueprint Library),\nexcept it can be used on actors that do not implement IAbilitySystemInterface. In ue5, this custom version\nwon't be necessary anymore.\n\nThis function can be used to trigger an ability on the actor in question with useful payload data.\nNOTE: GetAbilitySystemComponent is called on the actor to find a good component, and if the component isn't\nfound, the event will not be sent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBlueprintLibrary, nullptr, "SendGameplayEventToActor", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::ComboGraphBlueprintLibrary_eventSendGameplayEventToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::ComboGraphBlueprintLibrary_eventSendGameplayEventToActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics
	{
		struct ComboGraphBlueprintLibrary_eventSimulateComboInput_Parms
		{
			AActor* Actor;
			UInputAction* InputAction;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventSimulateComboInput_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphBlueprintLibrary_eventSimulateComboInput_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::NewProp_InputAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/**\n\x09 * Simulate user input for the passed in actor running a combo graph.\n\x09 *\n\x09 * This will send a gameplay event with relevant gameplay event data.\n\x09 */" },
		{ "DisplayName", "Simulate Combo Input (Combo Graph)" },
		{ "ModuleRelativePath", "Public/Utils/ComboGraphBlueprintLibrary.h" },
		{ "ToolTip", "Simulate user input for the passed in actor running a combo graph.\n\nThis will send a gameplay event with relevant gameplay event data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphBlueprintLibrary, nullptr, "SimulateComboInput", nullptr, nullptr, Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::ComboGraphBlueprintLibrary_eventSimulateComboInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::ComboGraphBlueprintLibrary_eventSimulateComboInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphBlueprintLibrary);
	UClass* Z_Construct_UClass_UComboGraphBlueprintLibrary_NoRegister()
	{
		return UComboGraphBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetComboGraphGameplayTasksComponent, "GetComboGraphGameplayTasksComponent" }, // 274191542
		{ &Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsFromContext, "GetCueParamsObjectsFromContext" }, // 3294114885
		{ &Z_Construct_UFunction_UComboGraphBlueprintLibrary_GetCueParamsObjectsPathsFromContext, "GetCueParamsObjectsPathsFromContext" }, // 257505887
		{ &Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsFromContext, "HasCueParamsObjectsFromContext" }, // 807213186
		{ &Z_Construct_UFunction_UComboGraphBlueprintLibrary_HasCueParamsObjectsPathsFromContext, "HasCueParamsObjectsPathsFromContext" }, // 2015019533
		{ &Z_Construct_UFunction_UComboGraphBlueprintLibrary_SendGameplayEventToActor, "SendGameplayEventToActor" }, // 3014943159
		{ &Z_Construct_UFunction_UComboGraphBlueprintLibrary_SimulateComboInput, "SimulateComboInput" }, // 2382039341
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Utils/ComboGraphBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Utils/ComboGraphBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::ClassParams = {
		&UComboGraphBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UComboGraphBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphBlueprintLibrary.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphBlueprintLibrary>()
	{
		return UComboGraphBlueprintLibrary::StaticClass();
	}
	UComboGraphBlueprintLibrary::UComboGraphBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphBlueprintLibrary);
	UComboGraphBlueprintLibrary::~UComboGraphBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphBlueprintLibrary, UComboGraphBlueprintLibrary::StaticClass, TEXT("UComboGraphBlueprintLibrary"), &Z_Registration_Info_UClass_UComboGraphBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphBlueprintLibrary), 1667879600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_1449855504(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
