// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Components/GSCAbilityInputBindingComponent.h"
#include "GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAbilityInputBindingComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilityInputBindingComponent();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilityInputBindingComponent_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCPlayerControlsComponent();
	GASCOMPANION_API UEnum* Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAbilityInputBinding();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAbilityInputBinding;
class UScriptStruct* FGSCAbilityInputBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAbilityInputBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAbilityInputBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAbilityInputBinding, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCAbilityInputBinding"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAbilityInputBinding.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCAbilityInputBinding>()
{
	return FGSCAbilityInputBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAbilityInputBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAbilityInputBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAbilityInputBinding>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAbilityInputBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCAbilityInputBinding",
		nullptr,
		0,
		sizeof(FGSCAbilityInputBinding),
		alignof(FGSCAbilityInputBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCAbilityInputBinding_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAbilityInputBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAbilityInputBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAbilityInputBinding.InnerSingleton, Z_Construct_UScriptStruct_FGSCAbilityInputBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAbilityInputBinding.InnerSingleton;
	}
	DEFINE_FUNCTION(UGSCAbilityInputBindingComponent::execGetBoundInputActionForAbility)
	{
		P_GET_OBJECT_REF(UGameplayAbility,Z_Param_Out_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputAction**)Z_Param__Result=P_THIS->GetBoundInputActionForAbility(Z_Param_Out_Ability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCAbilityInputBindingComponent::execClearAbilityBindings)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InputAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAbilityBindings(Z_Param_InputAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCAbilityInputBindingComponent::execClearInputBinding)
	{
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_AbilityHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInputBinding(Z_Param_AbilityHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCAbilityInputBindingComponent::execSetInputBinding)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InputAction);
		P_GET_ENUM(EGSCAbilityTriggerEvent,Z_Param_TriggerEvent);
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_AbilityHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputBinding(Z_Param_InputAction,EGSCAbilityTriggerEvent(Z_Param_TriggerEvent),Z_Param_AbilityHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCAbilityInputBindingComponent::execClientBindInput)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InInputAction);
		P_GET_ENUM(EGSCAbilityTriggerEvent,Z_Param_InTriggerEvent);
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_InAbilityHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientBindInput_Implementation(Z_Param_InInputAction,EGSCAbilityTriggerEvent(Z_Param_InTriggerEvent),Z_Param_InAbilityHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCAbilityInputBindingComponent::execGiveAbilityWithInput)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_GET_OBJECT(UInputAction,Z_Param_InputAction);
		P_GET_ENUM(EGSCAbilityTriggerEvent,Z_Param_TriggerEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAbilitySpecHandle*)Z_Param__Result=P_THIS->GiveAbilityWithInput(Z_Param_Ability,Z_Param_Level,Z_Param_InputAction,EGSCAbilityTriggerEvent(Z_Param_TriggerEvent));
		P_NATIVE_END;
	}
	struct GSCAbilityInputBindingComponent_eventClientBindInput_Parms
	{
		UInputAction* InInputAction;
		EGSCAbilityTriggerEvent InTriggerEvent;
		FGameplayAbilitySpecHandle InAbilityHandle;
	};
	static FName NAME_UGSCAbilityInputBindingComponent_ClientBindInput = FName(TEXT("ClientBindInput"));
	void UGSCAbilityInputBindingComponent::ClientBindInput(UInputAction* InInputAction, const EGSCAbilityTriggerEvent InTriggerEvent, FGameplayAbilitySpecHandle const& InAbilityHandle)
	{
		GSCAbilityInputBindingComponent_eventClientBindInput_Parms Parms;
		Parms.InInputAction=InInputAction;
		Parms.InTriggerEvent=InTriggerEvent;
		Parms.InAbilityHandle=InAbilityHandle;
		ProcessEvent(FindFunctionChecked(NAME_UGSCAbilityInputBindingComponent_ClientBindInput),&Parms);
	}
	void UGSCAbilityInputBindingComponent::StaticRegisterNativesUGSCAbilityInputBindingComponent()
	{
		UClass* Class = UGSCAbilityInputBindingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAbilityBindings", &UGSCAbilityInputBindingComponent::execClearAbilityBindings },
			{ "ClearInputBinding", &UGSCAbilityInputBindingComponent::execClearInputBinding },
			{ "ClientBindInput", &UGSCAbilityInputBindingComponent::execClientBindInput },
			{ "GetBoundInputActionForAbility", &UGSCAbilityInputBindingComponent::execGetBoundInputActionForAbility },
			{ "GiveAbilityWithInput", &UGSCAbilityInputBindingComponent::execGiveAbilityWithInput },
			{ "SetInputBinding", &UGSCAbilityInputBindingComponent::execSetInputBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics
	{
		struct GSCAbilityInputBindingComponent_eventClearAbilityBindings_Parms
		{
			UInputAction* InputAction;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventClearAbilityBindings_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::NewProp_InputAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given an Enhanced Input Action, clears up input binding delegates (On Pressed and Released) and resets any abilities' (that were bound to that action) InputId to none. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given an Enhanced Input Action, clears up input binding delegates (On Pressed and Released) and resets any abilities' (that were bound to that action) InputId to none." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilityInputBindingComponent, nullptr, "ClearAbilityBindings", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::GSCAbilityInputBindingComponent_eventClearAbilityBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::GSCAbilityInputBindingComponent_eventClearAbilityBindings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics
	{
		struct GSCAbilityInputBindingComponent_eventClearInputBinding_Parms
		{
			FGameplayAbilitySpecHandle AbilityHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventClearInputBinding_Parms, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::NewProp_AbilityHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Given a Gameplay Ability Spec handle (handle returned when granting abilities manually with GSCAbilitySystemComponent), clears up and reset the previously registered binding for that ability.  */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a Gameplay Ability Spec handle (handle returned when granting abilities manually with GSCAbilitySystemComponent), clears up and reset the previously registered binding for that ability." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilityInputBindingComponent, nullptr, "ClearInputBinding", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::GSCAbilityInputBindingComponent_eventClearInputBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::GSCAbilityInputBindingComponent_eventClearInputBinding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InTriggerEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAbilityHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAbilityHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InInputAction = { "InInputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventClientBindInput_Parms, InInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InTriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InTriggerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InTriggerEvent = { "InTriggerEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventClientBindInput_Parms, InTriggerEvent), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InTriggerEvent_MetaData), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InTriggerEvent_MetaData) }; // 2362312655
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InAbilityHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InAbilityHandle = { "InAbilityHandle", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventClientBindInput_Parms, InAbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InAbilityHandle_MetaData), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InAbilityHandle_MetaData) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InTriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InTriggerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::NewProp_InAbilityHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Client RPC helper to associate an Input Action to an Ability Handle previously granted via ASC->GiveAbility() on Server, and setup the binding on client */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client RPC helper to associate an Input Action to an Ability Handle previously granted via ASC->GiveAbility() on Server, and setup the binding on client" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilityInputBindingComponent, nullptr, "ClientBindInput", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::PropPointers), sizeof(GSCAbilityInputBindingComponent_eventClientBindInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCAbilityInputBindingComponent_eventClientBindInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics
	{
		struct GSCAbilityInputBindingComponent_eventGetBoundInputActionForAbility_Parms
		{
			const UGameplayAbility* Ability;
			UInputAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventGetBoundInputActionForAbility_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::NewProp_Ability_MetaData), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::NewProp_Ability_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventGetBoundInputActionForAbility_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Given a Gameplay Ability, returns the bound InputAction from mapped abilities (previously bound abilities) that matches the Ability Spec InputID.\n\x09 *\n\x09 * Designed to be called from within a Gameplay Ability event graph, passing self reference for the Gameplay Ability parameter.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a Gameplay Ability, returns the bound InputAction from mapped abilities (previously bound abilities) that matches the Ability Spec InputID.\n\nDesigned to be called from within a Gameplay Ability event graph, passing self reference for the Gameplay Ability parameter." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilityInputBindingComponent, nullptr, "GetBoundInputActionForAbility", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::GSCAbilityInputBindingComponent_eventGetBoundInputActionForAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::GSCAbilityInputBindingComponent_eventGetBoundInputActionForAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics
	{
		struct GSCAbilityInputBindingComponent_eventGiveAbilityWithInput_Parms
		{
			const TSubclassOf<UGameplayAbility>  Ability;
			int32 Level;
			UInputAction* InputAction;
			EGSCAbilityTriggerEvent TriggerEvent;
			FGameplayAbilitySpecHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventGiveAbilityWithInput_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Ability_MetaData), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Ability_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventGiveAbilityWithInput_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Level_MetaData), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Level_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventGiveAbilityWithInput_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_TriggerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventGiveAbilityWithInput_Parms, TriggerEvent), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_TriggerEvent_MetaData), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_TriggerEvent_MetaData) }; // 2362312655
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventGiveAbilityWithInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_TriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_TriggerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Grants a given Gameplay Ability to the Owner ASC, with an optional Input Action / Trigger Event to setup the ability binding.\n\x09 *\n\x09 * Simply calls ASC->GiveAbility() (on Server) and binds the input on client.\n\x09 *\n\x09 * This method is meant to run on Authority (must be called from server).\n\x09 *\n\x09 * During Pawn initialization, if you'd like to grant a list of abilities manually with this method, the typical place to do so is:\n\x09 *\n\x09 * - For non Player State pawns: On Pawn OnPossessed event\n\x09 * - For Player State pawns: OnInitAbilityActorInfo on Authority\n\x09 * \n\x09 * Doing so, you ensure both ASC and InputComponent are available to both grant the ability, and setup the ability input binding.\n\x09 *\n\x09 * @param Ability The Gameplay Ability class to grant\n\x09 * @param Level Level to grant the ability at\n\x09 * @param InputAction An optional Input Action to bind the ability to (optional: can be null)\n\x09 * @param TriggerEvent When an Input Action is defined, which determine the Input Action event to use to try activation (default should be On Started)\n\x09 * \n\x09 * @return The Gameplay Ability Spec handle that can be used to remove the Ability later on, and / or clear input binding.\n\x09 */" },
#endif
		{ "CPP_Default_InputAction", "None" },
		{ "CPP_Default_Level", "1" },
		{ "CPP_Default_TriggerEvent", "Started" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grants a given Gameplay Ability to the Owner ASC, with an optional Input Action / Trigger Event to setup the ability binding.\n\nSimply calls ASC->GiveAbility() (on Server) and binds the input on client.\n\nThis method is meant to run on Authority (must be called from server).\n\nDuring Pawn initialization, if you'd like to grant a list of abilities manually with this method, the typical place to do so is:\n\n- For non Player State pawns: On Pawn OnPossessed event\n- For Player State pawns: OnInitAbilityActorInfo on Authority\n\nDoing so, you ensure both ASC and InputComponent are available to both grant the ability, and setup the ability input binding.\n\n@param Ability The Gameplay Ability class to grant\n@param Level Level to grant the ability at\n@param InputAction An optional Input Action to bind the ability to (optional: can be null)\n@param TriggerEvent When an Input Action is defined, which determine the Input Action event to use to try activation (default should be On Started)\n\n@return The Gameplay Ability Spec handle that can be used to remove the Ability later on, and / or clear input binding." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilityInputBindingComponent, nullptr, "GiveAbilityWithInput", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::GSCAbilityInputBindingComponent_eventGiveAbilityWithInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::GSCAbilityInputBindingComponent_eventGiveAbilityWithInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics
	{
		struct GSCAbilityInputBindingComponent_eventSetInputBinding_Parms
		{
			UInputAction* InputAction;
			EGSCAbilityTriggerEvent TriggerEvent;
			FGameplayAbilitySpecHandle AbilityHandle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventSetInputBinding_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventSetInputBinding_Parms, TriggerEvent), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, METADATA_PARAMS(0, nullptr) }; // 2362312655
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilityInputBindingComponent_eventSetInputBinding_Parms, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_TriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_TriggerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::NewProp_AbilityHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates the Ability Input Binding Component registered bindings or create a new one for the passed in Ability Handle.\n\x09 *\n\x09 * @param InputAction The Enhanced InputAction to bind to\n\x09 * @param TriggerEvent The trigger type to use for the ability pressed handle. The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button.\n\x09 * @param AbilityHandle The Gameplay Ability Spec handle to setup binding for (handle returned when granting abilities manually with GSCAbilitySystemComponent)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the Ability Input Binding Component registered bindings or create a new one for the passed in Ability Handle.\n\n@param InputAction The Enhanced InputAction to bind to\n@param TriggerEvent The trigger type to use for the ability pressed handle. The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button.\n@param AbilityHandle The Gameplay Ability Spec handle to setup binding for (handle returned when granting abilities manually with GSCAbilitySystemComponent)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilityInputBindingComponent, nullptr, "SetInputBinding", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::GSCAbilityInputBindingComponent_eventSetInputBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::GSCAbilityInputBindingComponent_eventSetInputBinding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAbilityInputBindingComponent);
	UClass* Z_Construct_UClass_UGSCAbilityInputBindingComponent_NoRegister()
	{
		return UGSCAbilityInputBindingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInputConfirm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetInputConfirm;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetConfirmTriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetConfirmTriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetConfirmTriggerEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInputCancel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetInputCancel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetCancelTriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCancelTriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetCancelTriggerEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MappedAbilities_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MappedAbilities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MappedAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGSCPlayerControlsComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearAbilityBindings, "ClearAbilityBindings" }, // 3916298284
		{ &Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClearInputBinding, "ClearInputBinding" }, // 745252124
		{ &Z_Construct_UFunction_UGSCAbilityInputBindingComponent_ClientBindInput, "ClientBindInput" }, // 2848376554
		{ &Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GetBoundInputActionForAbility, "GetBoundInputActionForAbility" }, // 2283424727
		{ &Z_Construct_UFunction_UGSCAbilityInputBindingComponent_GiveAbilityWithInput, "GiveAbilityWithInput" }, // 2482568369
		{ &Z_Construct_UFunction_UGSCAbilityInputBindingComponent_SetInputBinding, "SetInputBinding" }, // 569185040
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GASCompanion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Modular pawn component that hooks up enhanced input to the ability system input logic\n *\n * Extends from GSCPlayerControlsComponent, so if your Pawn is dealing with Abilities use this component instead.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/GSCAbilityInputBindingComponent.h" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modular pawn component that hooks up enhanced input to the ability system input logic\n\nExtends from GSCPlayerControlsComponent, so if your Pawn is dealing with Abilities use this component instead." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputConfirm_MetaData[] = {
		{ "Category", "Player Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input action to handle Target Confirm for ASC */" },
#endif
		{ "DisplayAfter", "InputPriority" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input action to handle Target Confirm for ASC" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputConfirm = { "TargetInputConfirm", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityInputBindingComponent, TargetInputConfirm), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputConfirm_MetaData), Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputConfirm_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetConfirmTriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetConfirmTriggerEvent_MetaData[] = {
		{ "Category", "Player Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The EnhancedInput Trigger Event type to use for the target confirm input.\n\x09 *\n\x09 * ---\n\x09 *\n\x09 * The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button,\n\x09 * and Triggered for continuous actions that happen every frame while holding an input\n\x09 *\n\x09 * Warning: The Triggered value should only be used for Input Actions that you know only trigger once. If your action\n\x09 * triggered event happens on every tick, this might lead to issues with abilities. When in doubt, use the default Started value.\n\x09 */" },
#endif
		{ "DisplayAfter", "InputPriority" },
		{ "EditCondition", "TargetInputConfirm != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The EnhancedInput Trigger Event type to use for the target confirm input.\n\n---\n\nThe most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button,\nand Triggered for continuous actions that happen every frame while holding an input\n\nWarning: The Triggered value should only be used for Input Actions that you know only trigger once. If your action\ntriggered event happens on every tick, this might lead to issues with abilities. When in doubt, use the default Started value." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetConfirmTriggerEvent = { "TargetConfirmTriggerEvent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityInputBindingComponent, TargetConfirmTriggerEvent), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetConfirmTriggerEvent_MetaData), Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetConfirmTriggerEvent_MetaData) }; // 2362312655
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputCancel_MetaData[] = {
		{ "Category", "Player Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input action to handle Target Cancel for ASC */" },
#endif
		{ "DisplayAfter", "InputPriority" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input action to handle Target Cancel for ASC" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputCancel = { "TargetInputCancel", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityInputBindingComponent, TargetInputCancel), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputCancel_MetaData), Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputCancel_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetCancelTriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetCancelTriggerEvent_MetaData[] = {
		{ "Category", "Player Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The EnhancedInput Trigger Event type to use for the target cancel input.\n\x09 *\n\x09 * ---\n\x09 *\n\x09 * The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button,\n\x09 * and Triggered for continuous actions that happen every frame while holding an input\n\x09 *\n\x09 * Warning: The Triggered value should only be used for Input Actions that you know only trigger once. If your action\n\x09 * triggered event happens on every tick, this might lead to issues with abilities. When in doubt, use the default Started value.\n\x09 */" },
#endif
		{ "DisplayAfter", "InputPriority" },
		{ "EditCondition", "TargetInputCancel != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The EnhancedInput Trigger Event type to use for the target cancel input.\n\n---\n\nThe most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button,\nand Triggered for continuous actions that happen every frame while holding an input\n\nWarning: The Triggered value should only be used for Input Actions that you know only trigger once. If your action\ntriggered event happens on every tick, this might lead to issues with abilities. When in doubt, use the default Started value." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetCancelTriggerEvent = { "TargetCancelTriggerEvent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityInputBindingComponent, TargetCancelTriggerEvent), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetCancelTriggerEvent_MetaData), Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetCancelTriggerEvent_MetaData) }; // 2362312655
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_AbilityComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityInputBindingComponent, AbilityComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_AbilityComponent_MetaData), Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_AbilityComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_ValueProp = { "MappedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGSCAbilityInputBinding, METADATA_PARAMS(0, nullptr) }; // 3760108072
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_Key_KeyProp = { "MappedAbilities_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GSCAbilityInputBindingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_MappedAbilities = { "MappedAbilities", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityInputBindingComponent, MappedAbilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_MetaData), Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_MetaData) }; // 3760108072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputConfirm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetConfirmTriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetConfirmTriggerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetInputCancel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetCancelTriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_TargetCancelTriggerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_AbilityComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_MappedAbilities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::NewProp_MappedAbilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAbilityInputBindingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::ClassParams = {
		&UGSCAbilityInputBindingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCAbilityInputBindingComponent()
	{
		if (!Z_Registration_Info_UClass_UGSCAbilityInputBindingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAbilityInputBindingComponent.OuterSingleton, Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAbilityInputBindingComponent.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCAbilityInputBindingComponent>()
	{
		return UGSCAbilityInputBindingComponent::StaticClass();
	}
	UGSCAbilityInputBindingComponent::UGSCAbilityInputBindingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAbilityInputBindingComponent);
	UGSCAbilityInputBindingComponent::~UGSCAbilityInputBindingComponent() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_Statics::ScriptStructInfo[] = {
		{ FGSCAbilityInputBinding::StaticStruct, Z_Construct_UScriptStruct_FGSCAbilityInputBinding_Statics::NewStructOps, TEXT("GSCAbilityInputBinding"), &Z_Registration_Info_UScriptStruct_GSCAbilityInputBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAbilityInputBinding), 3760108072U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAbilityInputBindingComponent, UGSCAbilityInputBindingComponent::StaticClass, TEXT("UGSCAbilityInputBindingComponent"), &Z_Registration_Info_UClass_UGSCAbilityInputBindingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAbilityInputBindingComponent), 2630049894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_2392007033(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
