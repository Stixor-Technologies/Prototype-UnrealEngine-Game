// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ComboGraph/Public/ComboGraphRuntimeTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphAbilityTask_PlayMontage() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_NoRegister();
	COMBOGRAPH_API UFunction* Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics
	{
		struct _Script_ComboGraph_eventComboGraphPlayMontageEventDelegate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ComboGraph_eventComboGraphPlayMontageEventDelegate_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ComboGraph_eventComboGraphPlayMontageEventDelegate_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ComboGraph, nullptr, "ComboGraphPlayMontageEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::_Script_ComboGraph_eventComboGraphPlayMontageEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::_Script_ComboGraph_eventComboGraphPlayMontageEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FComboGraphPlayMontageEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphPlayMontageEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData)
{
	struct _Script_ComboGraph_eventComboGraphPlayMontageEventDelegate_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
	_Script_ComboGraph_eventComboGraphPlayMontageEventDelegate_Parms Parms;
	Parms.EventTag=EventTag;
	Parms.EventData=EventData;
	ComboGraphPlayMontageEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphMontageNotifyAutoSetupData;
class UScriptStruct* FComboGraphMontageNotifyAutoSetupData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphMontageNotifyAutoSetupData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphMontageNotifyAutoSetupData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("ComboGraphMontageNotifyAutoSetupData"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphMontageNotifyAutoSetupData.OuterSingleton;
}
template<> COMBOGRAPH_API UScriptStruct* StaticStruct<FComboGraphMontageNotifyAutoSetupData>()
{
	return FComboGraphMontageNotifyAutoSetupData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedNotify_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedNotify;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphMontageNotifyAutoSetupData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::NewProp_CachedNotify_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::NewProp_CachedNotify = { "CachedNotify", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphMontageNotifyAutoSetupData, CachedNotify), Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::NewProp_CachedNotify_MetaData), Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::NewProp_CachedNotify_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::NewProp_CachedNotify,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		&NewStructOps,
		"ComboGraphMontageNotifyAutoSetupData",
		Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::PropPointers),
		sizeof(FComboGraphMontageNotifyAutoSetupData),
		alignof(FComboGraphMontageNotifyAutoSetupData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphMontageNotifyAutoSetupData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphMontageNotifyAutoSetupData.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphMontageNotifyAutoSetupData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphRegisteredNotifyData;
class UScriptStruct* FComboGraphRegisteredNotifyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphRegisteredNotifyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphRegisteredNotifyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("ComboGraphRegisteredNotifyData"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphRegisteredNotifyData.OuterSingleton;
}
template<> COMBOGRAPH_API UScriptStruct* StaticStruct<FComboGraphRegisteredNotifyData>()
{
	return FComboGraphRegisteredNotifyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds information about a registered Anim Notify State with state whether begin / end has been triggered */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds information about a registered Anim Notify State with state whether begin / end has been triggered" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphRegisteredNotifyData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		&NewStructOps,
		"ComboGraphRegisteredNotifyData",
		nullptr,
		0,
		sizeof(FComboGraphRegisteredNotifyData),
		alignof(FComboGraphRegisteredNotifyData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphRegisteredNotifyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphRegisteredNotifyData.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphRegisteredNotifyData.InnerSingleton;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_PlayMontage::execPlayComboGraphMontage)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_TMAP(TSoftClassPtr<UAnimNotifyState> ,FComboGraphNotifyStateAutoSetup,Z_Param_NotifiesAutoSetup);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_EventTags);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
		P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraphAbilityTask_PlayMontage**)Z_Param__Result=UComboGraphAbilityTask_PlayMontage::PlayComboGraphMontage(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_NotifiesAutoSetup,Z_Param_EventTags,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphAbilityTask_PlayMontage::execUnbindAllDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAllDelegate();
		P_NATIVE_END;
	}
	void UComboGraphAbilityTask_PlayMontage::StaticRegisterNativesUComboGraphAbilityTask_PlayMontage()
	{
		UClass* Class = UComboGraphAbilityTask_PlayMontage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayComboGraphMontage", &UComboGraphAbilityTask_PlayMontage::execPlayComboGraphMontage },
			{ "UnbindAllDelegate", &UComboGraphAbilityTask_PlayMontage::execUnbindAllDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics
	{
		struct ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UAnimMontage* MontageToPlay;
			TMap<TSoftClassPtr<UAnimNotifyState> ,FComboGraphNotifyStateAutoSetup> NotifiesAutoSetup;
			FGameplayTagContainer EventTags;
			float Rate;
			FName StartSection;
			bool bStopWhenAbilityEnds;
			float AnimRootMotionTranslationScale;
			UComboGraphAbilityTask_PlayMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifiesAutoSetup_ValueProp;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NotifiesAutoSetup_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_NotifiesAutoSetup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_NotifiesAutoSetup_ValueProp = { "NotifiesAutoSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup, METADATA_PARAMS(0, nullptr) }; // 3709733393
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_NotifiesAutoSetup_Key_KeyProp = { "NotifiesAutoSetup_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_NotifiesAutoSetup = { "NotifiesAutoSetup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms, NotifiesAutoSetup), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3709733393
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms, Rate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms), &Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms, ReturnValue), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_NotifiesAutoSetup_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_NotifiesAutoSetup_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_NotifiesAutoSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_EventTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_StartSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_bStopWhenAbilityEnds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Combo Graph|Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty),\n\x09* the EventReceived delegate will fire with a tag and event data.\n\x09*\n\x09* If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped\n\x09* when the ability is explicitly cancelled.\n\x09*\n\x09* On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\n\x09* OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\x09*\n\x09* @param OwningAbility\n\x09* @param TaskInstanceName Set to override the name of this task, for later querying\n\x09* @param MontageToPlay The montage to play on the character\n\x09* @param NotifiesAutoSetup Map of anim notify states and auto setup definitions\n\x09* @param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback\n\x09* @param Rate Change to play the montage faster or slower\n\x09* @param StartSection Change to montage section to play during montage\n\x09* @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n\x09* @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n\x09*/" },
#endif
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty),\nthe EventReceived delegate will fire with a tag and event data.\n\nIf StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped\nwhen the ability is explicitly cancelled.\n\nOn normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\nOnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\n@param OwningAbility\n@param TaskInstanceName Set to override the name of this task, for later querying\n@param MontageToPlay The montage to play on the character\n@param NotifiesAutoSetup Map of anim notify states and auto setup definitions\n@param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback\n@param Rate Change to play the montage faster or slower\n@param StartSection Change to montage section to play during montage\n@param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n@param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage, nullptr, "PlayComboGraphMontage", nullptr, nullptr, Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::ComboGraphAbilityTask_PlayMontage_eventPlayComboGraphMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_UnbindAllDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_UnbindAllDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Unbinds all animation delegate on this Ability Task (except OnCanceled)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unbinds all animation delegate on this Ability Task (except OnCanceled)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_UnbindAllDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage, nullptr, "UnbindAllDelegate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_UnbindAllDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_UnbindAllDelegate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_UnbindAllDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_UnbindAllDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphAbilityTask_PlayMontage);
	UClass* Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_NoRegister()
	{
		return UComboGraphAbilityTask_PlayMontage::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[];
#endif
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyStateAutoSetups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyStateAutoSetups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NotifyStateAutoSetups;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifiesAutoSetup_ValueProp;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NotifiesAutoSetup_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifiesAutoSetup_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NotifiesAutoSetup;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredNotifyStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredNotifyStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredNotifyStates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredNotifyData_ValueProp;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_RegisteredNotifyData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredNotifyData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredNotifyData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_PlayComboGraphMontage, "PlayComboGraphMontage" }, // 4154146520
		{ &Z_Construct_UFunction_UComboGraphAbilityTask_PlayMontage_UnbindAllDelegate, "UnbindAllDelegate" }, // 200354296
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This task is a variation of PlayMontageAndWaitForEvent that combines PlayMontageAndWait and WaitForEvent into one task.\n*\n* The added functionality here is that it is a ticking task to optionally trigger AnimNotifyStates Begin and End event, without having\n* them actually registered in the Animation Asset (Sequence or Montage)\n*/" },
#endif
		{ "IncludePath", "Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This task is a variation of PlayMontageAndWaitForEvent that combines PlayMontageAndWait and WaitForEvent into one task.\n\nThe added functionality here is that it is a ticking task to optionally trigger AnimNotifyStates Begin and End event, without having\nthem actually registered in the Animation Asset (Sequence or Montage)" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCompleted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The montage completely finished playing */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The montage completely finished playing" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, OnCompleted), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCompleted_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCompleted_MetaData) }; // 3808303462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnBlendOut_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The montage started blending out */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The montage started blending out" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, OnBlendOut), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnBlendOut_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnBlendOut_MetaData) }; // 3808303462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnInterrupted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The montage was interrupted */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The montage was interrupted" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, OnInterrupted), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnInterrupted_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnInterrupted_MetaData) }; // 3808303462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCancelled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability task was explicitly cancelled by another ability */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability task was explicitly cancelled by another ability" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, OnCancelled), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCancelled_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCancelled_MetaData) }; // 3808303462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventReceived_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One of the triggering gameplay events happened */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One of the triggering gameplay events happened" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, EventReceived), Z_Construct_UDelegateFunction_ComboGraph_ComboGraphPlayMontageEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventReceived_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventReceived_MetaData) }; // 3808303462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_MontageToPlay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Montage that is playing */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage that is playing" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_MontageToPlay_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_MontageToPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_CachedAnimInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached Anim Instance we get from ActorInfo */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached Anim Instance we get from ActorInfo" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_CachedAnimInstance = { "CachedAnimInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, CachedAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_CachedAnimInstance_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_CachedAnimInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of tags to match against gameplay events */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of tags to match against gameplay events" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventTags_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_Rate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Playback rate */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback rate" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, Rate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_Rate_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_Rate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_StartSection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Section to start montage from */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Section to start montage from" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, StartSection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_StartSection_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_StartSection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_AnimRootMotionTranslationScale_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifies how root motion movement to apply */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies how root motion movement to apply" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, AnimRootMotionTranslationScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_AnimRootMotionTranslationScale_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_AnimRootMotionTranslationScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_bStopWhenAbilityEnds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rather montage should be aborted if ability ends */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rather montage should be aborted if ability ends" },
#endif
	};
#endif
	void Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((UComboGraphAbilityTask_PlayMontage*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraphAbilityTask_PlayMontage), &Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_bStopWhenAbilityEnds_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_bStopWhenAbilityEnds_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifyStateAutoSetups_Inner = { "NotifyStateAutoSetups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup, METADATA_PARAMS(0, nullptr) }; // 3709733393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifyStateAutoSetups_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached list of notify auto setups, passed in during task creation */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached list of notify auto setups, passed in during task creation" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifyStateAutoSetups = { "NotifyStateAutoSetups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, NotifyStateAutoSetups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifyStateAutoSetups_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifyStateAutoSetups_MetaData) }; // 3709733393
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifiesAutoSetup_ValueProp = { "NotifiesAutoSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup, METADATA_PARAMS(0, nullptr) }; // 3709733393
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifiesAutoSetup_Key_KeyProp = { "NotifiesAutoSetup_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifiesAutoSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifiesAutoSetup = { "NotifiesAutoSetup", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, NotifiesAutoSetup), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifiesAutoSetup_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifiesAutoSetup_MetaData) }; // 3709733393
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyStates_Inner = { "RegisteredNotifyStates", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyStates_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached list of Anim Notify States to consider notifying during tick*/" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached list of Anim Notify States to consider notifying during tick" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyStates = { "RegisteredNotifyStates", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, RegisteredNotifyStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyStates_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyStates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyData_ValueProp = { "RegisteredNotifyData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData, METADATA_PARAMS(0, nullptr) }; // 104702743
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyData_Key_KeyProp = { "RegisteredNotifyData_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyData = { "RegisteredNotifyData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphAbilityTask_PlayMontage, RegisteredNotifyData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyData_MetaData), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyData_MetaData) }; // 104702743
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnInterrupted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_OnCancelled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_CachedAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_EventTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_StartSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_bStopWhenAbilityEnds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifyStateAutoSetups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifyStateAutoSetups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifiesAutoSetup_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifiesAutoSetup_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_NotifiesAutoSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::NewProp_RegisteredNotifyData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphAbilityTask_PlayMontage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::ClassParams = {
		&UComboGraphAbilityTask_PlayMontage::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage()
	{
		if (!Z_Registration_Info_UClass_UComboGraphAbilityTask_PlayMontage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphAbilityTask_PlayMontage.OuterSingleton, Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphAbilityTask_PlayMontage.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphAbilityTask_PlayMontage>()
	{
		return UComboGraphAbilityTask_PlayMontage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphAbilityTask_PlayMontage);
	UComboGraphAbilityTask_PlayMontage::~UComboGraphAbilityTask_PlayMontage() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_Statics::ScriptStructInfo[] = {
		{ FComboGraphMontageNotifyAutoSetupData::StaticStruct, Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics::NewStructOps, TEXT("ComboGraphMontageNotifyAutoSetupData"), &Z_Registration_Info_UScriptStruct_ComboGraphMontageNotifyAutoSetupData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphMontageNotifyAutoSetupData), 3464489801U) },
		{ FComboGraphRegisteredNotifyData::StaticStruct, Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData_Statics::NewStructOps, TEXT("ComboGraphRegisteredNotifyData"), &Z_Registration_Info_UScriptStruct_ComboGraphRegisteredNotifyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphRegisteredNotifyData), 104702743U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage, UComboGraphAbilityTask_PlayMontage::StaticClass, TEXT("UComboGraphAbilityTask_PlayMontage"), &Z_Registration_Info_UClass_UComboGraphAbilityTask_PlayMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphAbilityTask_PlayMontage), 2870327670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_3644539762(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
