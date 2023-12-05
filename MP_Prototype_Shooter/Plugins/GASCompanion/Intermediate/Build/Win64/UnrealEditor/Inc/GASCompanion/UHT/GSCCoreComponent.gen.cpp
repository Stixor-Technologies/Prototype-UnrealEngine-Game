// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Components/GSCCoreComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCCoreComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAttributeSetBase_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCCoreComponent();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCCoreComponent_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameplayAbility_NoRegister();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnDeath__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfoCore__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameplayEffectExecuteData;
class UScriptStruct* FGSCGameplayEffectExecuteData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectExecuteData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameplayEffectExecuteData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameplayEffectExecuteData"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameplayEffectExecuteData.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameplayEffectExecuteData>()
{
	return FGSCGameplayEffectExecuteData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMinimumValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Structure passed down to Actors Blueprint with PostGameplayEffectExecute Event */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure passed down to Actors Blueprint with PostGameplayEffectExecute Event" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameplayEffectExecuteData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "AttributeSetPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The owner AttributeSet from which the event was invoked */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The owner AttributeSet from which the event was invoked" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectExecuteData, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "AttributeSetPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The owner AbilitySystemComponent for this AttributeSet */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The owner AbilitySystemComponent for this AttributeSet" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectExecuteData, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_DeltaValue_MetaData[] = {
		{ "Category", "AttributeSetPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Calculated DeltaValue from OldValue to NewValue */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculated DeltaValue from OldValue to NewValue" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectExecuteData, DeltaValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_DeltaValue_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_DeltaValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue_MetaData[] = {
		{ "Category", "AttributeSetPayload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The configured Clamp MinimumValue for this Attribute, if defined */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The configured Clamp MinimumValue for this Attribute, if defined" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue = { "ClampMinimumValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectExecuteData, ClampMinimumValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_DeltaValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameplayEffectExecuteData",
		Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::PropPointers),
		sizeof(FGSCGameplayEffectExecuteData),
		alignof(FGSCGameplayEffectExecuteData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectExecuteData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameplayEffectExecuteData.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameplayEffectExecuteData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnDeath__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDeath__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnDeath_DelegateWrapper(const FMulticastScriptDelegate& GSCOnDeath)
{
	GSCOnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfoCore__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfoCore__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfoCore__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnInitAbilityActorInfoCore__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfoCore__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfoCore__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfoCore__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfoCore__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnInitAbilityActorInfoCore_DelegateWrapper(const FMulticastScriptDelegate& GSCOnInitAbilityActorInfoCore)
{
	GSCOnInitAbilityActorInfoCore.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnDefaultAttributeChange_Parms
		{
			float DeltaValue;
			FGameplayTagContainer EventTags;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnDefaultAttributeChange_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnDefaultAttributeChange_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_DeltaValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnDefaultAttributeChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnDefaultAttributeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnDefaultAttributeChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnDefaultAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnDefaultAttributeChange, float DeltaValue, const FGameplayTagContainer EventTags)
{
	struct _Script_GASCompanion_eventGSCOnDefaultAttributeChange_Parms
	{
		float DeltaValue;
		FGameplayTagContainer EventTags;
	};
	_Script_GASCompanion_eventGSCOnDefaultAttributeChange_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	GSCOnDefaultAttributeChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnAttributeChange_Parms
		{
			FGameplayAttribute Attribute;
			float DeltaValue;
			FGameplayTagContainer EventTags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnAttributeChange_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnAttributeChange_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::NewProp_DeltaValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnAttributeChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAttributeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAttributeChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAttributeChange, FGameplayAttribute Attribute, float DeltaValue, const FGameplayTagContainer EventTags)
{
	struct _Script_GASCompanion_eventGSCOnAttributeChange_Parms
	{
		FGameplayAttribute Attribute;
		float DeltaValue;
		FGameplayTagContainer EventTags;
	};
	_Script_GASCompanion_eventGSCOnAttributeChange_Parms Parms;
	Parms.Attribute=Attribute;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	GSCOnAttributeChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnPreAttributeChange_Parms
		{
			UGSCAttributeSetBase* AttributeSet;
			FGameplayAttribute Attribute;
			float NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnPreAttributeChange_Parms, AttributeSet), Z_Construct_UClass_UGSCAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnPreAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnPreAttributeChange_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnPreAttributeChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnPreAttributeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnPreAttributeChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnPreAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnPreAttributeChange, UGSCAttributeSetBase* AttributeSet, FGameplayAttribute Attribute, float NewValue)
{
	struct _Script_GASCompanion_eventGSCOnPreAttributeChange_Parms
	{
		UGSCAttributeSetBase* AttributeSet;
		FGameplayAttribute Attribute;
		float NewValue;
	};
	_Script_GASCompanion_eventGSCOnPreAttributeChange_Parms Parms;
	Parms.AttributeSet=AttributeSet;
	Parms.Attribute=Attribute;
	Parms.NewValue=NewValue;
	GSCOnPreAttributeChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms
		{
			FGameplayAttribute Attribute;
			AActor* SourceActor;
			AActor* TargetActor;
			FGameplayTagContainer SourceTags;
			FGSCGameplayEffectExecuteData Payload;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms, Payload), Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload_MetaData) }; // 3641644268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnPostGameplayEffectExecute__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnPostGameplayEffectExecute_DelegateWrapper(const FMulticastScriptDelegate& GSCOnPostGameplayEffectExecute, FGameplayAttribute Attribute, AActor* SourceActor, AActor* TargetActor, FGameplayTagContainer const& SourceTags, const FGSCGameplayEffectExecuteData Payload)
{
	struct _Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms
	{
		FGameplayAttribute Attribute;
		AActor* SourceActor;
		AActor* TargetActor;
		FGameplayTagContainer SourceTags;
		FGSCGameplayEffectExecuteData Payload;
	};
	_Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms Parms;
	Parms.Attribute=Attribute;
	Parms.SourceActor=SourceActor;
	Parms.TargetActor=TargetActor;
	Parms.SourceTags=SourceTags;
	Parms.Payload=Payload;
	GSCOnPostGameplayEffectExecute.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnAbilityActivated_Parms
		{
			const UGameplayAbility* Ability;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnAbilityActivated_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnAbilityActivated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAbilityActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAbilityActivated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnAbilityActivated_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityActivated, const UGameplayAbility* Ability)
{
	struct _Script_GASCompanion_eventGSCOnAbilityActivated_Parms
	{
		const UGameplayAbility* Ability;
	};
	_Script_GASCompanion_eventGSCOnAbilityActivated_Parms Parms;
	Parms.Ability=Ability;
	GSCOnAbilityActivated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnAbilityEnded_Parms
		{
			const UGameplayAbility* Ability;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnAbilityEnded_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnAbilityEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAbilityEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAbilityEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnAbilityEnded_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityEnded, const UGameplayAbility* Ability)
{
	struct _Script_GASCompanion_eventGSCOnAbilityEnded_Parms
	{
		const UGameplayAbility* Ability;
	};
	_Script_GASCompanion_eventGSCOnAbilityEnded_Parms Parms;
	Parms.Ability=Ability;
	GSCOnAbilityEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnAbilityFailed_Parms
		{
			const UGameplayAbility* Ability;
			FGameplayTagContainer ReasonTags;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReasonTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReasonTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnAbilityFailed_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags = { "ReasonTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnAbilityFailed_Parms, ReasonTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnAbilityFailed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAbilityFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAbilityFailed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnAbilityFailed_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityFailed, const UGameplayAbility* Ability, FGameplayTagContainer const& ReasonTags)
{
	struct _Script_GASCompanion_eventGSCOnAbilityFailed_Parms
	{
		const UGameplayAbility* Ability;
		FGameplayTagContainer ReasonTags;
	};
	_Script_GASCompanion_eventGSCOnAbilityFailed_Parms Parms;
	Parms.Ability=Ability;
	Parms.ReasonTags=ReasonTags;
	GSCOnAbilityFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms
		{
			FGameplayTagContainer AssetTags;
			FGameplayTagContainer GrantedTags;
			FActiveGameplayEffectHandle ActiveHandle;
			int32 NewStackCount;
			int32 OldStackCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldStackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms, NewStackCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms, OldStackCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_NewStackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_OldStackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnGameplayEffectStackChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnGameplayEffectStackChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectStackChange, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 OldStackCount)
{
	struct _Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms
	{
		FGameplayTagContainer AssetTags;
		FGameplayTagContainer GrantedTags;
		FActiveGameplayEffectHandle ActiveHandle;
		int32 NewStackCount;
		int32 OldStackCount;
	};
	_Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms Parms;
	Parms.AssetTags=AssetTags;
	Parms.GrantedTags=GrantedTags;
	Parms.ActiveHandle=ActiveHandle;
	Parms.NewStackCount=NewStackCount;
	Parms.OldStackCount=OldStackCount;
	GSCOnGameplayEffectStackChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms
		{
			FGameplayTagContainer AssetTags;
			FGameplayTagContainer GrantedTags;
			FActiveGameplayEffectHandle ActiveHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_ActiveHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnGameplayEffectAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnGameplayEffectAdded_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectAdded, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle)
{
	struct _Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms
	{
		FGameplayTagContainer AssetTags;
		FGameplayTagContainer GrantedTags;
		FActiveGameplayEffectHandle ActiveHandle;
	};
	_Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms Parms;
	Parms.AssetTags=AssetTags;
	Parms.GrantedTags=GrantedTags;
	Parms.ActiveHandle=ActiveHandle;
	GSCOnGameplayEffectAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms
		{
			FGameplayTagContainer AssetTags;
			FGameplayTagContainer GrantedTags;
			FActiveGameplayEffectHandle ActiveHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_ActiveHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnGameplayEffectRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnGameplayEffectRemoved_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectRemoved, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle)
{
	struct _Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms
	{
		FGameplayTagContainer AssetTags;
		FGameplayTagContainer GrantedTags;
		FActiveGameplayEffectHandle ActiveHandle;
	};
	_Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms Parms;
	Parms.AssetTags=AssetTags;
	Parms.GrantedTags=GrantedTags;
	Parms.ActiveHandle=ActiveHandle;
	GSCOnGameplayEffectRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnGameplayTagStackChange_Parms
		{
			FGameplayTag GameplayTag;
			int32 NewTagCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewTagCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayTagStackChange_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::NewProp_NewTagCount = { "NewTagCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayTagStackChange_Parms, NewTagCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::NewProp_NewTagCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnGameplayTagStackChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayTagStackChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayTagStackChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnGameplayTagStackChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayTagStackChange, FGameplayTag GameplayTag, int32 NewTagCount)
{
	struct _Script_GASCompanion_eventGSCOnGameplayTagStackChange_Parms
	{
		FGameplayTag GameplayTag;
		int32 NewTagCount;
	};
	_Script_GASCompanion_eventGSCOnGameplayTagStackChange_Parms Parms;
	Parms.GameplayTag=GameplayTag;
	Parms.NewTagCount=NewTagCount;
	GSCOnGameplayTagStackChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnAbilityCommit_Parms
		{
			UGameplayAbility* Ability;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnAbilityCommit_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnAbilityCommit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAbilityCommit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnAbilityCommit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnAbilityCommit_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityCommit, UGameplayAbility* Ability)
{
	struct _Script_GASCompanion_eventGSCOnAbilityCommit_Parms
	{
		UGameplayAbility* Ability;
	};
	_Script_GASCompanion_eventGSCOnAbilityCommit_Parms Parms;
	Parms.Ability=Ability;
	GSCOnAbilityCommit.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnCooldownChanged_Parms
		{
			UGameplayAbility* Ability;
			FGameplayTagContainer CooldownTags;
			float TimeRemaining;
			float Duration;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnCooldownChanged_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnCooldownChanged_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags_MetaData) }; // 405371792
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnCooldownChanged_Parms, TimeRemaining), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnCooldownChanged_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnCooldownChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnCooldownChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnCooldownChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& GSCOnCooldownChanged, UGameplayAbility* Ability, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration)
{
	struct _Script_GASCompanion_eventGSCOnCooldownChanged_Parms
	{
		UGameplayAbility* Ability;
		FGameplayTagContainer CooldownTags;
		float TimeRemaining;
		float Duration;
	};
	_Script_GASCompanion_eventGSCOnCooldownChanged_Parms Parms;
	Parms.Ability=Ability;
	Parms.CooldownTags=CooldownTags;
	Parms.TimeRemaining=TimeRemaining;
	Parms.Duration=Duration;
	GSCOnCooldownChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnCooldownEnd_Parms
		{
			UGameplayAbility* Ability;
			FGameplayTag CooldownTag;
			float Duration;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnCooldownEnd_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnCooldownEnd_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnCooldownEnd_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnCooldownEnd__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnCooldownEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnCooldownEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnCooldownEnd_DelegateWrapper(const FMulticastScriptDelegate& GSCOnCooldownEnd, UGameplayAbility* Ability, FGameplayTag CooldownTag, float Duration)
{
	struct _Script_GASCompanion_eventGSCOnCooldownEnd_Parms
	{
		UGameplayAbility* Ability;
		FGameplayTag CooldownTag;
		float Duration;
	};
	_Script_GASCompanion_eventGSCOnCooldownEnd_Parms Parms;
	Parms.Ability=Ability;
	Parms.CooldownTag=CooldownTag;
	Parms.Duration=Duration;
	GSCOnCooldownEnd.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnDamage_Parms
		{
			float DamageAmount;
			AActor* SourceCharacter;
			FGameplayTagContainer DamageTags;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnDamage_Parms, SourceCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::NewProp_DamageTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::NewProp_DamageTags = { "DamageTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnDamage_Parms, DamageTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::NewProp_DamageTags_MetaData), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::NewProp_DamageTags_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::NewProp_SourceCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::NewProp_DamageTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnDamage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnDamage_DelegateWrapper(const FMulticastScriptDelegate& GSCOnDamage, float DamageAmount, AActor* SourceCharacter, FGameplayTagContainer const& DamageTags)
{
	struct _Script_GASCompanion_eventGSCOnDamage_Parms
	{
		float DamageAmount;
		AActor* SourceCharacter;
		FGameplayTagContainer DamageTags;
	};
	_Script_GASCompanion_eventGSCOnDamage_Parms Parms;
	Parms.DamageAmount=DamageAmount;
	Parms.SourceCharacter=SourceCharacter;
	Parms.DamageTags=DamageTags;
	GSCOnDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics
	{
		struct _Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms
		{
			FGameplayTagContainer AssetTags;
			FGameplayTagContainer GrantedTags;
			FActiveGameplayEffectHandle ActiveHandle;
			float NewStartTime;
			float NewDuration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_NewStartTime = { "NewStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms, NewStartTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms, NewDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_NewStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnGameplayEffectTimeChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::_Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnGameplayEffectTimeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectTimeChange, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration)
{
	struct _Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms
	{
		FGameplayTagContainer AssetTags;
		FGameplayTagContainer GrantedTags;
		FActiveGameplayEffectHandle ActiveHandle;
		float NewStartTime;
		float NewDuration;
	};
	_Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms Parms;
	Parms.AssetTags=AssetTags;
	Parms.GrantedTags=GrantedTags;
	Parms.ActiveHandle=ActiveHandle;
	Parms.NewStartTime=NewStartTime;
	Parms.NewDuration=NewDuration;
	GSCOnGameplayEffectTimeChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGSCCoreComponent::execAdjustAttributeForMaxChange)
	{
		P_GET_OBJECT_REF(UGSCAttributeSetBase,Z_Param_Out_AttributeSet);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_AffectedAttributeProperty);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_MaxAttribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAttributeForMaxChange(Z_Param_Out_AttributeSet,Z_Param_AffectedAttributeProperty,Z_Param_MaxAttribute,Z_Param_NewMaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execClampAttributeValue)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClampAttributeValue(Z_Param_Attribute,Z_Param_MinValue,Z_Param_MaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execSetAttributeValue)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttributeValue(Z_Param_Attribute,Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execActivateAbilityByTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
		P_GET_OBJECT_REF(UGSCGameplayAbility,Z_Param_Out_ActivatedAbility);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateAbilityByTags(Z_Param_AbilityTags,Z_Param_Out_ActivatedAbility,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execActivateAbilityByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_OBJECT_REF(UGSCGameplayAbility,Z_Param_Out_ActivatedAbility);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateAbilityByClass(Z_Param_AbilityClass,Z_Param_Out_ActivatedAbility,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetActiveAbilitiesByTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GameplayTagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGameplayAbility*>*)Z_Param__Result=P_THIS->GetActiveAbilitiesByTags(Z_Param_GameplayTagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetActiveAbilitiesByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGameplayAbility*>*)Z_Param__Result=P_THIS->GetActiveAbilitiesByClass(Z_Param_AbilityToSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execIsUsingAbilityByTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAbilityByTags(Z_Param_AbilityTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execIsUsingAbilityByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAbilityByClass(Z_Param_AbilityClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execHasMatchingGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchingGameplayTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execHasAnyMatchingGameplayTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyMatchingGameplayTags(Z_Param_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execClearAbilities)
	{
		P_GET_TARRAY(TSubclassOf<UGameplayAbility> ,Z_Param_Abilities);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAbilities(Z_Param_Abilities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execClearAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAbility(Z_Param_Ability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGrantAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrantAbility(Z_Param_Ability,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetCurrentAttributeValue)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentAttributeValue(Z_Param_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetAttributeValue)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCCoreComponent::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	void UGSCCoreComponent::StaticRegisterNativesUGSCCoreComponent()
	{
		UClass* Class = UGSCCoreComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbilityByClass", &UGSCCoreComponent::execActivateAbilityByClass },
			{ "ActivateAbilityByTags", &UGSCCoreComponent::execActivateAbilityByTags },
			{ "AdjustAttributeForMaxChange", &UGSCCoreComponent::execAdjustAttributeForMaxChange },
			{ "ClampAttributeValue", &UGSCCoreComponent::execClampAttributeValue },
			{ "ClearAbilities", &UGSCCoreComponent::execClearAbilities },
			{ "ClearAbility", &UGSCCoreComponent::execClearAbility },
			{ "Die", &UGSCCoreComponent::execDie },
			{ "GetActiveAbilitiesByClass", &UGSCCoreComponent::execGetActiveAbilitiesByClass },
			{ "GetActiveAbilitiesByTags", &UGSCCoreComponent::execGetActiveAbilitiesByTags },
			{ "GetAttributeValue", &UGSCCoreComponent::execGetAttributeValue },
			{ "GetCurrentAttributeValue", &UGSCCoreComponent::execGetCurrentAttributeValue },
			{ "GetHealth", &UGSCCoreComponent::execGetHealth },
			{ "GetMana", &UGSCCoreComponent::execGetMana },
			{ "GetMaxHealth", &UGSCCoreComponent::execGetMaxHealth },
			{ "GetMaxMana", &UGSCCoreComponent::execGetMaxMana },
			{ "GetMaxStamina", &UGSCCoreComponent::execGetMaxStamina },
			{ "GetStamina", &UGSCCoreComponent::execGetStamina },
			{ "GrantAbility", &UGSCCoreComponent::execGrantAbility },
			{ "HasAnyMatchingGameplayTags", &UGSCCoreComponent::execHasAnyMatchingGameplayTags },
			{ "HasMatchingGameplayTag", &UGSCCoreComponent::execHasMatchingGameplayTag },
			{ "IsAlive", &UGSCCoreComponent::execIsAlive },
			{ "IsUsingAbilityByClass", &UGSCCoreComponent::execIsUsingAbilityByClass },
			{ "IsUsingAbilityByTags", &UGSCCoreComponent::execIsUsingAbilityByTags },
			{ "SetAttributeValue", &UGSCCoreComponent::execSetAttributeValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics
	{
		struct GSCCoreComponent_eventActivateAbilityByClass_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityClass;
			UGSCGameplayAbility* ActivatedAbility;
			bool bAllowRemoteActivation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventActivateAbilityByClass_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_ActivatedAbility = { "ActivatedAbility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventActivateAbilityByClass_Parms, ActivatedAbility), Z_Construct_UClass_UGSCGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((GSCCoreComponent_eventActivateAbilityByClass_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCCoreComponent_eventActivateAbilityByClass_Parms), &Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSCCoreComponent_eventActivateAbilityByClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCCoreComponent_eventActivateAbilityByClass_Parms), &Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_ActivatedAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_bAllowRemoteActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Attempts to activate the ability that is passed in. This will check costs and requirements before doing so.\n\x09*\n\x09* Returns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\x09*\n\x09* @param AbilityClass Gameplay Ability Class to activate\n\x09* @param ActivatedAbility The Gameplay Ability that was triggered on success (only returned if it is a GSCGameplayAbility)\n\x09* @param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.\n\x09* @return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\x09*/" },
#endif
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to activate the ability that is passed in. This will check costs and requirements before doing so.\n\nReturns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\n@param AbilityClass Gameplay Ability Class to activate\n@param ActivatedAbility The Gameplay Ability that was triggered on success (only returned if it is a GSCGameplayAbility)\n@param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.\n@return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "ActivateAbilityByClass", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::GSCCoreComponent_eventActivateAbilityByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::GSCCoreComponent_eventActivateAbilityByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics
	{
		struct GSCCoreComponent_eventActivateAbilityByTags_Parms
		{
			FGameplayTagContainer AbilityTags;
			UGSCGameplayAbility* ActivatedAbility;
			bool bAllowRemoteActivation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRemoteActivation_MetaData[];
#endif
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_AbilityTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventActivateAbilityByTags_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_AbilityTags_MetaData), Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_AbilityTags_MetaData) }; // 405371792
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_ActivatedAbility = { "ActivatedAbility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventActivateAbilityByTags_Parms, ActivatedAbility), Z_Construct_UClass_UGSCGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_bAllowRemoteActivation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((GSCCoreComponent_eventActivateAbilityByTags_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCCoreComponent_eventActivateAbilityByTags_Parms), &Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_bAllowRemoteActivation_MetaData), Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_bAllowRemoteActivation_MetaData) };
	void Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSCCoreComponent_eventActivateAbilityByTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCCoreComponent_eventActivateAbilityByTags_Parms), &Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_AbilityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_ActivatedAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_bAllowRemoteActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Attempts to activate a **single** gameplay ability that matches the given tag and DoesAbilitySatisfyTagRequirements().\n\x09*\n\x09* It differs from GAS ASC TryActivateAbilitiesByTag which tries to activate *every* ability, whereas this version will pick a\n\x09* random one and attempt to activate it.\n\x09*\n\x09* Returns true if the ability attempts to activate, and the reference to the Activated Ability if any.\n\x09*\n\x09* @param AbilityTags Set of Gameplay Tags to search for\n\x09* @param ActivatedAbility The Gameplay Ability that was triggered on success (only returned if it is a GSCGameplayAbility)\n\x09* @param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.\n\x09* @return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\x09*/" },
#endif
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to activate a **single** gameplay ability that matches the given tag and DoesAbilitySatisfyTagRequirements().\n\nIt differs from GAS ASC TryActivateAbilitiesByTag which tries to activate *every* ability, whereas this version will pick a\nrandom one and attempt to activate it.\n\nReturns true if the ability attempts to activate, and the reference to the Activated Ability if any.\n\n@param AbilityTags Set of Gameplay Tags to search for\n@param ActivatedAbility The Gameplay Ability that was triggered on success (only returned if it is a GSCGameplayAbility)\n@param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.\n@return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "ActivateAbilityByTags", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::GSCCoreComponent_eventActivateAbilityByTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::GSCCoreComponent_eventActivateAbilityByTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics
	{
		struct GSCCoreComponent_eventAdjustAttributeForMaxChange_Parms
		{
			UGSCAttributeSetBase* AttributeSet;
			FGameplayAttribute AffectedAttributeProperty;
			FGameplayAttribute MaxAttribute;
			float NewMaxValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedAttributeProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedAttributeProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAttribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0010000008080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventAdjustAttributeForMaxChange_Parms, AttributeSet), Z_Construct_UClass_UGSCAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty = { "AffectedAttributeProperty", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventAdjustAttributeForMaxChange_Parms, AffectedAttributeProperty), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty_MetaData), Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty_MetaData) }; // 359123813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute = { "MaxAttribute", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventAdjustAttributeForMaxChange_Parms, MaxAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute_MetaData), Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute_MetaData) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_NewMaxValue = { "NewMaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventAdjustAttributeForMaxChange_Parms, NewMaxValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_NewMaxValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes.\n\x09* (e.g. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before)\n\x09*\n\x09* @param AttributeSet The AttributeSet owner for the affected attributes\n\x09* @param AffectedAttributeProperty The affected Attribute property\n\x09* @param MaxAttribute The related MaxAttribute\n\x09* @param NewMaxValue The new value for the MaxAttribute\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes.\n(e.g. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before)\n\n@param AttributeSet The AttributeSet owner for the affected attributes\n@param AffectedAttributeProperty The affected Attribute property\n@param MaxAttribute The related MaxAttribute\n@param NewMaxValue The new value for the MaxAttribute" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "AdjustAttributeForMaxChange", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::GSCCoreComponent_eventAdjustAttributeForMaxChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::GSCCoreComponent_eventAdjustAttributeForMaxChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics
	{
		struct GSCCoreComponent_eventClampAttributeValue_Parms
		{
			FGameplayAttribute Attribute;
			float MinValue;
			float MaxValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventClampAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventClampAttributeValue_Parms, MinValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventClampAttributeValue_Parms, MaxValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::NewProp_MaxValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clamps the Attribute from MinValue to MaxValue */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamps the Attribute from MinValue to MaxValue" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "ClampAttributeValue", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::GSCCoreComponent_eventClampAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::GSCCoreComponent_eventClampAttributeValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics
	{
		struct GSCCoreComponent_eventClearAbilities_Parms
		{
			TArray<TSubclassOf<UGameplayAbility> > Abilities;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventClearAbilities_Parms, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::NewProp_Abilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Remove an set of abilities from the Actor's Ability System Component\n\x09*\n\x09* @param Abilities Array of Ability Class to remove\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove an set of abilities from the Actor's Ability System Component\n\n@param Abilities Array of Ability Class to remove" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "ClearAbilities", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::GSCCoreComponent_eventClearAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::GSCCoreComponent_eventClearAbilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics
	{
		struct GSCCoreComponent_eventClearAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  Ability;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventClearAbility_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Remove an ability from the Actor's Ability System Component\n\x09*\n\x09* @param Ability The Gameplay Ability Class to remove\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove an ability from the Actor's Ability System Component\n\n@param Ability The Gameplay Ability Class to remove" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "ClearAbility", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::GSCCoreComponent_eventClearAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::GSCCoreComponent_eventClearAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_ClearAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_ClearAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_Die_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_Die_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Triggers death events for the owner actor\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers death events for the owner actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_Die_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics
	{
		struct GSCCoreComponent_eventGetActiveAbilitiesByClass_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityToSearch;
			TArray<UGameplayAbility*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToSearch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::NewProp_AbilityToSearch = { "AbilityToSearch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetActiveAbilitiesByClass_Parms, AbilityToSearch), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetActiveAbilitiesByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::NewProp_AbilityToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns a list of currently active ability instances that match the given class\n\x09*\n\x09* @param AbilityToSearch The Gameplay Ability Class to search for\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of currently active ability instances that match the given class\n\n@param AbilityToSearch The Gameplay Ability Class to search for" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetActiveAbilitiesByClass", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::GSCCoreComponent_eventGetActiveAbilitiesByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::GSCCoreComponent_eventGetActiveAbilitiesByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics
	{
		struct GSCCoreComponent_eventGetActiveAbilitiesByTags_Parms
		{
			FGameplayTagContainer GameplayTagContainer;
			TArray<UGameplayAbility*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagContainer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::NewProp_GameplayTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::NewProp_GameplayTagContainer = { "GameplayTagContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetActiveAbilitiesByTags_Parms, GameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::NewProp_GameplayTagContainer_MetaData), Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::NewProp_GameplayTagContainer_MetaData) }; // 405371792
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetActiveAbilitiesByTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::NewProp_GameplayTagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns a list of currently active ability instances that match the given tags\n\x09*\n\x09* This only returns if the ability is currently running\n\x09*\n\x09* @param GameplayTagContainer The Ability Tags to search for\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of currently active ability instances that match the given tags\n\nThis only returns if the ability is currently running\n\n@param GameplayTagContainer The Ability Tags to search for" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetActiveAbilitiesByTags", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::GSCCoreComponent_eventGetActiveAbilitiesByTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::GSCCoreComponent_eventGetActiveAbilitiesByTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics
	{
		struct GSCCoreComponent_eventGetAttributeValue_Parms
		{
			FGameplayAttribute Attribute;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current value of an attribute (base value). That is, the value of the attribute with no stateful modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current value of an attribute (base value). That is, the value of the attribute with no stateful modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetAttributeValue", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::GSCCoreComponent_eventGetAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::GSCCoreComponent_eventGetAttributeValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics
	{
		struct GSCCoreComponent_eventGetCurrentAttributeValue_Parms
		{
			FGameplayAttribute Attribute;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetCurrentAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetCurrentAttributeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns current (final) value of an attribute */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current (final) value of an attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetCurrentAttributeValue", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::GSCCoreComponent_eventGetCurrentAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::GSCCoreComponent_eventGetCurrentAttributeValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics
	{
		struct GSCCoreComponent_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::GSCCoreComponent_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::GSCCoreComponent_eventGetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics
	{
		struct GSCCoreComponent_eventGetMana_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetMana", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::GSCCoreComponent_eventGetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::GSCCoreComponent_eventGetMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics
	{
		struct GSCCoreComponent_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::GSCCoreComponent_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::GSCCoreComponent_eventGetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics
	{
		struct GSCCoreComponent_eventGetMaxMana_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetMaxMana", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::GSCCoreComponent_eventGetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::GSCCoreComponent_eventGetMaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics
	{
		struct GSCCoreComponent_eventGetMaxStamina_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::GSCCoreComponent_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::GSCCoreComponent_eventGetMaxStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics
	{
		struct GSCCoreComponent_eventGetStamina_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::GSCCoreComponent_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::GSCCoreComponent_eventGetStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics
	{
		struct GSCCoreComponent_eventGrantAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  Ability;
			int32 Level;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGrantAbility_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventGrantAbility_Parms, Level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Grants the Actor with the given ability, making it available for activation\n\x09*\n\x09* @param Ability The Gameplay Ability to give to the character\n\x09* @param Level The Gameplay Ability Level (defaults to 1)\n\x09*/" },
#endif
		{ "CPP_Default_Level", "1" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grants the Actor with the given ability, making it available for activation\n\n@param Ability The Gameplay Ability to give to the character\n@param Level The Gameplay Ability Level (defaults to 1)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "GrantAbility", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::GSCCoreComponent_eventGrantAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::GSCCoreComponent_eventGrantAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_GrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_GrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics
	{
		struct GSCCoreComponent_eventHasAnyMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData), Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData) }; // 405371792
	void Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSCCoreComponent_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCCoreComponent_eventHasAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns true if Actor's AbilitySystemComponent has any of the matching tags (expands to include parents of asset tags)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if Actor's AbilitySystemComponent has any of the matching tags (expands to include parents of asset tags)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "HasAnyMatchingGameplayTags", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::GSCCoreComponent_eventHasAnyMatchingGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::GSCCoreComponent_eventHasAnyMatchingGameplayTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics
	{
		struct GSCCoreComponent_eventHasMatchingGameplayTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck_MetaData), Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSCCoreComponent_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCCoreComponent_eventHasMatchingGameplayTag_Parms), &Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns true if Actor's AbilitySystemComponent has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if Actor's AbilitySystemComponent has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "HasMatchingGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::GSCCoreComponent_eventHasMatchingGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::GSCCoreComponent_eventHasMatchingGameplayTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics
	{
		struct GSCCoreComponent_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSCCoreComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCCoreComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether or not the Actor is considered alive (Health > 0) */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether or not the Actor is considered alive (Health > 0)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::GSCCoreComponent_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::GSCCoreComponent_eventIsAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics
	{
		struct GSCCoreComponent_eventIsUsingAbilityByClass_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventIsUsingAbilityByClass_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSCCoreComponent_eventIsUsingAbilityByClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCCoreComponent_eventIsUsingAbilityByClass_Parms), &Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether one of the actors's active abilities are matching the provided Ability Class */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether one of the actors's active abilities are matching the provided Ability Class" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "IsUsingAbilityByClass", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::GSCCoreComponent_eventIsUsingAbilityByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::GSCCoreComponent_eventIsUsingAbilityByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics
	{
		struct GSCCoreComponent_eventIsUsingAbilityByTags_Parms
		{
			FGameplayTagContainer AbilityTags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventIsUsingAbilityByTags_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	void Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSCCoreComponent_eventIsUsingAbilityByTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCCoreComponent_eventIsUsingAbilityByTags_Parms), &Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::NewProp_AbilityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether one of the character's active abilities are matching the provided tags */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether one of the character's active abilities are matching the provided tags" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "IsUsingAbilityByTags", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::GSCCoreComponent_eventIsUsingAbilityByTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::GSCCoreComponent_eventIsUsingAbilityByTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics
	{
		struct GSCCoreComponent_eventSetAttributeValue_Parms
		{
			FGameplayAttribute Attribute;
			float NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventSetAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCCoreComponent_eventSetAttributeValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the base value of an attribute. Existing active modifiers are NOT cleared and will act upon the new base value. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the base value of an attribute. Existing active modifiers are NOT cleared and will act upon the new base value." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCCoreComponent, nullptr, "SetAttributeValue", nullptr, nullptr, Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::GSCCoreComponent_eventSetAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::GSCCoreComponent_eventSetAttributeValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCCoreComponent);
	UClass* Z_Construct_UClass_UGSCCoreComponent_NoRegister()
	{
		return UGSCCoreComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGSCCoreComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInitAbilityActorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitAbilityActorInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDamage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostGameplayEffectExecute_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostGameplayEffectExecute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreAttributeChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreAttributeChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityActivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectStackChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectStackChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectTimeChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectTimeChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayTagChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayTagChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCommit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCommit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCCoreComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCCoreComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByClass, "ActivateAbilityByClass" }, // 3031039762
		{ &Z_Construct_UFunction_UGSCCoreComponent_ActivateAbilityByTags, "ActivateAbilityByTags" }, // 3629576302
		{ &Z_Construct_UFunction_UGSCCoreComponent_AdjustAttributeForMaxChange, "AdjustAttributeForMaxChange" }, // 2988635203
		{ &Z_Construct_UFunction_UGSCCoreComponent_ClampAttributeValue, "ClampAttributeValue" }, // 3710437273
		{ &Z_Construct_UFunction_UGSCCoreComponent_ClearAbilities, "ClearAbilities" }, // 3868541858
		{ &Z_Construct_UFunction_UGSCCoreComponent_ClearAbility, "ClearAbility" }, // 146916008
		{ &Z_Construct_UFunction_UGSCCoreComponent_Die, "Die" }, // 2607462604
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByClass, "GetActiveAbilitiesByClass" }, // 3868844175
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetActiveAbilitiesByTags, "GetActiveAbilitiesByTags" }, // 2613891398
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetAttributeValue, "GetAttributeValue" }, // 854562949
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetCurrentAttributeValue, "GetCurrentAttributeValue" }, // 3962981198
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetHealth, "GetHealth" }, // 3836010293
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetMana, "GetMana" }, // 140256694
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetMaxHealth, "GetMaxHealth" }, // 2886715405
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetMaxMana, "GetMaxMana" }, // 1689141965
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetMaxStamina, "GetMaxStamina" }, // 3073371763
		{ &Z_Construct_UFunction_UGSCCoreComponent_GetStamina, "GetStamina" }, // 3754077723
		{ &Z_Construct_UFunction_UGSCCoreComponent_GrantAbility, "GrantAbility" }, // 1075197977
		{ &Z_Construct_UFunction_UGSCCoreComponent_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 4162335555
		{ &Z_Construct_UFunction_UGSCCoreComponent_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 1000315891
		{ &Z_Construct_UFunction_UGSCCoreComponent_IsAlive, "IsAlive" }, // 2680929876
		{ &Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByClass, "IsUsingAbilityByClass" }, // 1958811298
		{ &Z_Construct_UFunction_UGSCCoreComponent_IsUsingAbilityByTags, "IsUsingAbilityByTags" }, // 1236695084
		{ &Z_Construct_UFunction_UGSCCoreComponent_SetAttributeValue, "SetAttributeValue" }, // 3500163655
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "GASCompanion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This Actor Component provides abstraction towards Ability System Component.\n * \n * For PlayerStates characters, the Ability System Component is not directly accessible as the owner actor in this case is actually the Player State.\n *\n * Provides commonly shared functionality and API / Events for all Actors that have an Ability System Component (abstracting away Owner / Avatar actor setup for ASC)\n */" },
#endif
		{ "IncludePath", "Components/GSCCoreComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Actor Component provides abstraction towards Ability System Component.\n\nFor PlayerStates characters, the Ability System Component is not directly accessible as the owner actor in this case is actually the Player State.\n\nProvides commonly shared functionality and API / Events for all Actors that have an Ability System Component (abstracting away Owner / Avatar actor setup for ASC)" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerActor_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerPawn_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerCharacter_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent = { "OwnerAbilitySystemComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OwnerAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnInitAbilityActorInfo_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called just after InitAbilityActorInfo on ASC, once abilities and attributes have been granted.\n\x09 *\n\x09 * This will happen multiple times for both client / server:\n\x09 *\n\x09 * - Once for Server after component initialization\n\x09 * - Once for Server after replication of owning actor (Possessed by for Player State)\n\x09 * - Once for Client after component initialization\n\x09 * - Once for Client after replication of owning actor (Once more for Player State OnRep_PlayerState)\n\x09 *\n\x09 * Also depends on whether ASC lives on Pawns or Player States.\n\x09 *\n\x09 * Note: This event is also exposed on GSCAbilitySystemComponent itself, but Pawns using ASC on PlayerState might want\n\x09 * to have the ability to react to this event from Pawns too.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called just after InitAbilityActorInfo on ASC, once abilities and attributes have been granted.\n\nThis will happen multiple times for both client / server:\n\n- Once for Server after component initialization\n- Once for Server after replication of owning actor (Possessed by for Player State)\n- Once for Client after component initialization\n- Once for Client after replication of owning actor (Once more for Player State OnRep_PlayerState)\n\nAlso depends on whether ASC lives on Pawns or Player States.\n\nNote: This event is also exposed on GSCAbilitySystemComponent itself, but Pawns using ASC on PlayerState might want\nto have the ability to react to this event from Pawns too." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnInitAbilityActorInfo = { "OnInitAbilityActorInfo", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnInitAbilityActorInfo), Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfoCore__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnInitAbilityActorInfo_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnInitAbilityActorInfo_MetaData) }; // 1991811488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDamage_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Called when character takes damage, which may have killed them\n\x09*\n\x09* @param DamageAmount Amount of damage that was done, not clamped based on current health\n\x09* @param SourceCharacter The actual actor that did the damage\n\x09* @param DamageTags The gameplay tags of the event that did the damage\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when character takes damage, which may have killed them\n\n@param DamageAmount Amount of damage that was done, not clamped based on current health\n@param SourceCharacter The actual actor that did the damage\n@param DamageTags The gameplay tags of the event that did the damage" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDamage = { "OnDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnDamage), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDamage_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDamage_MetaData) }; // 2535857836
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnHealthChange_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Called when health is changed, either from healing or from being damaged\n    * For damage this is called in addition to OnDamaged/OnDeath\n    *\n    * @param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown\n    * @param EventTags The gameplay tags of the event that changed mana\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when health is changed, either from healing or from being damaged\nFor damage this is called in addition to OnDamaged/OnDeath\n\n@param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnHealthChange = { "OnHealthChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnHealthChange), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnHealthChange_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnHealthChange_MetaData) }; // 1290474871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnStaminaChange_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Called when stamina is changed, either from regen  or from being used as a cost\n    *\n    * @param DeltaValue Change in stamina value, positive for heal, negative for cost. If 0 the delta is unknown\n    * @param EventTags The gameplay tags of the event that changed mana\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when stamina is changed, either from regen  or from being used as a cost\n\n@param DeltaValue Change in stamina value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnStaminaChange = { "OnStaminaChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnStaminaChange), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnStaminaChange_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnStaminaChange_MetaData) }; // 1290474871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnManaChange_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Called when mana is changed, either from healing or from being used as a cost\n    *\n    * @param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown\n    * @param EventTags The gameplay tags of the event that changed mana\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when mana is changed, either from healing or from being used as a cost\n\n@param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnManaChange = { "OnManaChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnManaChange), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDefaultAttributeChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnManaChange_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnManaChange_MetaData) }; // 1290474871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAttributeChange_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Called when any of the attributes owned by this character are changed\n    *\n    * @param Attribute The Attribute that was changed\n    * @param DeltaValue It it was an additive operation, returns the modifier value.\n    *                   Or if it was a change coming from damage meta attribute (for health),\n    *                   returns the damage done.\n    * @param EventTags The gameplay tags of the event that changed this attribute\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when any of the attributes owned by this character are changed\n\n@param Attribute The Attribute that was changed\n@param DeltaValue It it was an additive operation, returns the modifier value.\n                  Or if it was a change coming from damage meta attribute (for health),\n                  returns the damage done.\n@param EventTags The gameplay tags of the event that changed this attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAttributeChange = { "OnAttributeChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnAttributeChange), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAttributeChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAttributeChange_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAttributeChange_MetaData) }; // 2032576476
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDeath_MetaData[] = {
		{ "Category", "GAS Companion|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Called when character dies\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when character dies" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnDeath), Z_Construct_UDelegateFunction_GASCompanion_GSCOnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDeath_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDeath_MetaData) }; // 221673038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute_MetaData[] = {
		{ "Category", "GAS Companion|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* PostGameplayEffectExecute event fired off from native AttributeSets, define here\n\x09* any attribute change specific management you are not doing in c++ (like clamp)\n\x09*\n\x09* Only triggers after changes to the BaseValue of an Attribute from a GameplayEffect.\n\x09*\n\x09* @param Attribute The affected GameplayAttribute\n\x09* @param SourceActor The instigator Actor that started the whole chain (in case of damage, that would be the damage causer)\n\x09* @param TargetActor The owner Actor to which the Attribute change is applied\n\x09* @param SourceTags The aggregated SourceTags for this EffectSpec\n\x09* @param Payload Payload information with the original AttributeSet, the owning AbilitySystemComponent, calculated DeltaValue and the ClampMinimumValue from config if defined\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PostGameplayEffectExecute event fired off from native AttributeSets, define here\nany attribute change specific management you are not doing in c++ (like clamp)\n\nOnly triggers after changes to the BaseValue of an Attribute from a GameplayEffect.\n\n@param Attribute The affected GameplayAttribute\n@param SourceActor The instigator Actor that started the whole chain (in case of damage, that would be the damage causer)\n@param TargetActor The owner Actor to which the Attribute change is applied\n@param SourceTags The aggregated SourceTags for this EffectSpec\n@param Payload Payload information with the original AttributeSet, the owning AbilitySystemComponent, calculated DeltaValue and the ClampMinimumValue from config if defined" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute = { "OnPostGameplayEffectExecute", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnPostGameplayEffectExecute), Z_Construct_UDelegateFunction_GASCompanion_GSCOnPostGameplayEffectExecute__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute_MetaData) }; // 1518032256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPreAttributeChange_MetaData[] = {
		{ "Category", "GAS Companion|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* PreAttributeChange event fired off from native AttributeSets, react here to\n\x09* changes of Attributes CurrentValue before the modification to the BaseValue\n\x09* happens.\n\x09*\n\x09* Called just before any modification happens to an attribute, whether using\n\x09* Attribute setters or using GameplayEffect.\n\x09*\n\x09* @param AttributeSet The AttributeSet that started the change\n\x09* @param Attribute The affected GameplayAttribute\n\x09* @param NewValue The new value\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PreAttributeChange event fired off from native AttributeSets, react here to\nchanges of Attributes CurrentValue before the modification to the BaseValue\nhappens.\n\nCalled just before any modification happens to an attribute, whether using\nAttribute setters or using GameplayEffect.\n\n@param AttributeSet The AttributeSet that started the change\n@param Attribute The affected GameplayAttribute\n@param NewValue The new value" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPreAttributeChange = { "OnPreAttributeChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnPreAttributeChange), Z_Construct_UDelegateFunction_GASCompanion_GSCOnPreAttributeChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPreAttributeChange_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPreAttributeChange_MetaData) }; // 3435965457
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityActivated_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Called when an ability is activated for the owner actor\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an ability is activated for the owner actor" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityActivated = { "OnAbilityActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnAbilityActivated), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityActivated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityActivated_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityActivated_MetaData) }; // 3864007693
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityEnded_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Called when an ability is ended for the owner actor.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an ability is ended for the owner actor." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityEnded = { "OnAbilityEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnAbilityEnded), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityEnded_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityEnded_MetaData) }; // 2966627211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityFailed_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Called when an ability failed to activated for the owner actor, passes along the failed ability\n    * and a tag explaining why.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an ability failed to activated for the owner actor, passes along the failed ability\nand a tag explaining why." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityFailed = { "OnAbilityFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnAbilityFailed), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityFailed_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityFailed_MetaData) }; // 3130866105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectStackChange_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Called when a GameplayEffect is added or removed.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a GameplayEffect is added or removed." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectStackChange = { "OnGameplayEffectStackChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnGameplayEffectStackChange), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectStackChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectStackChange_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectStackChange_MetaData) }; // 3516169475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Called when a GameplayEffect duration is changed (for instance when duration is refreshed)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a GameplayEffect duration is changed (for instance when duration is refreshed)" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange = { "OnGameplayEffectTimeChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnGameplayEffectTimeChange), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectTimeChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange_MetaData) }; // 3957273723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectAdded_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Called when a GameplayEffect is added.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a GameplayEffect is added." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectAdded = { "OnGameplayEffectAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnGameplayEffectAdded), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectAdded_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectAdded_MetaData) }; // 2574336319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectRemoved_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Called when a GameplayEffect is removed.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a GameplayEffect is removed." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectRemoved = { "OnGameplayEffectRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnGameplayEffectRemoved), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayEffectRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectRemoved_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectRemoved_MetaData) }; // 2754649874
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayTagChange_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events) */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events)" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayTagChange = { "OnGameplayTagChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnGameplayTagChange), Z_Construct_UDelegateFunction_GASCompanion_GSCOnGameplayTagStackChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayTagChange_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayTagChange_MetaData) }; // 107090605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityCommit_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called whenever an ability is committed (cost / cooldown are applied) */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called whenever an ability is committed (cost / cooldown are applied)" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityCommit = { "OnAbilityCommit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnAbilityCommit), Z_Construct_UDelegateFunction_GASCompanion_GSCOnAbilityCommit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityCommit_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityCommit_MetaData) }; // 3137415555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownStart_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when an ability with a valid cooldown is committed and cooldown is applied */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an ability with a valid cooldown is committed and cooldown is applied" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownStart = { "OnCooldownStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnCooldownStart), Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownStart_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownStart_MetaData) }; // 3501139877
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownEnd_MetaData[] = {
		{ "Category", "GAS Companion|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when a cooldown gameplay tag is removed, meaning cooldown expired */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a cooldown gameplay tag is removed, meaning cooldown expired" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownEnd = { "OnCooldownEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCCoreComponent, OnCooldownEnd), Z_Construct_UDelegateFunction_GASCompanion_GSCOnCooldownEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownEnd_MetaData), Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownEnd_MetaData) }; // 1318112535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCCoreComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnInitAbilityActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnHealthChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnStaminaChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnManaChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAttributeChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnPreAttributeChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectStackChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayEffectRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnGameplayTagChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnAbilityCommit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCCoreComponent_Statics::NewProp_OnCooldownEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCCoreComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCCoreComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCCoreComponent_Statics::ClassParams = {
		&UGSCCoreComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCCoreComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCCoreComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCCoreComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCCoreComponent()
	{
		if (!Z_Registration_Info_UClass_UGSCCoreComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCCoreComponent.OuterSingleton, Z_Construct_UClass_UGSCCoreComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCCoreComponent.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCCoreComponent>()
	{
		return UGSCCoreComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCCoreComponent);
	UGSCCoreComponent::~UGSCCoreComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_Statics::ScriptStructInfo[] = {
		{ FGSCGameplayEffectExecuteData::StaticStruct, Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics::NewStructOps, TEXT("GSCGameplayEffectExecuteData"), &Z_Registration_Info_UScriptStruct_GSCGameplayEffectExecuteData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameplayEffectExecuteData), 3641644268U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCCoreComponent, UGSCCoreComponent::StaticClass, TEXT("UGSCCoreComponent"), &Z_Registration_Info_UClass_UGSCCoreComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCCoreComponent), 1176343813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_448776491(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
