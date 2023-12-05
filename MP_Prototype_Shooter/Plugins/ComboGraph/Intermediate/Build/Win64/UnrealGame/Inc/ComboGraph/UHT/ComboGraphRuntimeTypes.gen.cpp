// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/ComboGraphRuntimeTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphRuntimeTypes() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphTargetType();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphTargetType_NoRegister();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphIconType();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphIconType;
	static UEnum* EComboGraphIconType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphIconType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphIconType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EComboGraphIconType, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EComboGraphIconType"));
		}
		return Z_Registration_Info_UEnum_EComboGraphIconType.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphIconType>()
	{
		return EComboGraphIconType_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EComboGraphIconType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EComboGraphIconType_Statics::Enumerators[] = {
		{ "EComboGraphIconType::PS4", (int64)EComboGraphIconType::PS4 },
		{ "EComboGraphIconType::PS5", (int64)EComboGraphIconType::PS5 },
		{ "EComboGraphIconType::XboxOne", (int64)EComboGraphIconType::XboxOne },
		{ "EComboGraphIconType::XboxSeries", (int64)EComboGraphIconType::XboxSeries },
		{ "EComboGraphIconType::Keyboard", (int64)EComboGraphIconType::Keyboard },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EComboGraphIconType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Keyboard.Name", "EComboGraphIconType::Keyboard" },
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
		{ "PS4.Name", "EComboGraphIconType::PS4" },
		{ "PS5.Name", "EComboGraphIconType::PS5" },
		{ "XboxOne.Name", "EComboGraphIconType::XboxOne" },
		{ "XboxSeries.Name", "EComboGraphIconType::XboxSeries" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EComboGraphIconType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EComboGraphIconType",
		"EComboGraphIconType",
		Z_Construct_UEnum_ComboGraph_EComboGraphIconType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphIconType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphIconType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EComboGraphIconType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphIconType()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphIconType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphIconType.InnerSingleton, Z_Construct_UEnum_ComboGraph_EComboGraphIconType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphIconType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphTransitionBehavior;
	static UEnum* EComboGraphTransitionBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphTransitionBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphTransitionBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EComboGraphTransitionBehavior"));
		}
		return Z_Registration_Info_UEnum_EComboGraphTransitionBehavior.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphTransitionBehavior>()
	{
		return EComboGraphTransitionBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior_Statics::Enumerators[] = {
		{ "EComboGraphTransitionBehavior::Immediately", (int64)EComboGraphTransitionBehavior::Immediately },
		{ "EComboGraphTransitionBehavior::OnAnimNotifyClass", (int64)EComboGraphTransitionBehavior::OnAnimNotifyClass },
		{ "EComboGraphTransitionBehavior::OnAnimNotifyName", (int64)EComboGraphTransitionBehavior::OnAnimNotifyName },
		{ "EComboGraphTransitionBehavior::OnComboWindowEnd", (int64)EComboGraphTransitionBehavior::OnComboWindowEnd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Immediately.Comment", "/** Trigger combo transition immediately, as soon as input trigger is registered */" },
		{ "Immediately.DisplayName", "Transition Immediately" },
		{ "Immediately.Name", "EComboGraphTransitionBehavior::Immediately" },
		{ "Immediately.ToolTip", "Trigger combo transition immediately, as soon as input trigger is registered" },
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
		{ "OnAnimNotifyClass.Comment", "/**\n\x09 * Trigger combo transition based on a specific Anim Notify.\n\x09 *\n\x09 * By the time an input trigger is received, combo transition will happen when the animation\n\x09 * reaches this notify state or immediately if animation current time frame is passed the notify state.\n\x09 */" },
		{ "OnAnimNotifyClass.DisplayName", "Transition on a specific Anim Notify frame" },
		{ "OnAnimNotifyClass.Name", "EComboGraphTransitionBehavior::OnAnimNotifyClass" },
		{ "OnAnimNotifyClass.ToolTip", "Trigger combo transition based on a specific Anim Notify.\n\nBy the time an input trigger is received, combo transition will happen when the animation\nreaches this notify state or immediately if animation current time frame is passed the notify state." },
		{ "OnAnimNotifyName.Comment", "/**\n\x09 * Trigger combo transition based on an Anim Notify Name (skeleton notify).\n\x09 *\n\x09 * By the time an input trigger is received, combo transition will happen when the animation\n\x09 * reaches this notify state or immediately if animation current time frame is passed the notify state.\n\x09 */" },
		{ "OnAnimNotifyName.DisplayName", "Transition on a specific Skeleton Notify frame" },
		{ "OnAnimNotifyName.Name", "EComboGraphTransitionBehavior::OnAnimNotifyName" },
		{ "OnAnimNotifyName.ToolTip", "Trigger combo transition based on an Anim Notify Name (skeleton notify).\n\nBy the time an input trigger is received, combo transition will happen when the animation\nreaches this notify state or immediately if animation current time frame is passed the notify state." },
		{ "OnComboWindowEnd.Comment", "/** Trigger combo transition when combo window notify state ends */" },
		{ "OnComboWindowEnd.DisplayName", "Wait for Combo Window End" },
		{ "OnComboWindowEnd.Name", "EComboGraphTransitionBehavior::OnComboWindowEnd" },
		{ "OnComboWindowEnd.ToolTip", "Trigger combo transition when combo window notify state ends" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EComboGraphTransitionBehavior",
		"EComboGraphTransitionBehavior",
		Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphTransitionBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphTransitionBehavior.InnerSingleton, Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphTransitionBehavior.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphTransitionInputEvent;
	static UEnum* EComboGraphTransitionInputEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphTransitionInputEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphTransitionInputEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EComboGraphTransitionInputEvent"));
		}
		return Z_Registration_Info_UEnum_EComboGraphTransitionInputEvent.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphTransitionInputEvent>()
	{
		return EComboGraphTransitionInputEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent_Statics::Enumerators[] = {
		{ "EComboGraphTransitionInputEvent::Started", (int64)EComboGraphTransitionInputEvent::Started },
		{ "EComboGraphTransitionInputEvent::Triggered", (int64)EComboGraphTransitionInputEvent::Triggered },
		{ "EComboGraphTransitionInputEvent::Canceled", (int64)EComboGraphTransitionInputEvent::Canceled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Canceled.Comment", "/**\n\x09 * Triggered when input action has been canceled (eg. not fulfilling the trigger configuration). For instance, an hold and release trigger where hold time threshold has not been satisfied.\n\x09 */" },
		{ "Canceled.DisplayName", "Activate on Action Canceled" },
		{ "Canceled.Name", "EComboGraphTransitionInputEvent::Canceled" },
		{ "Canceled.ToolTip", "Triggered when input action has been canceled (eg. not fulfilling the trigger configuration). For instance, an hold and release trigger where hold time threshold has not been satisfied." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enum listing all possible ability activation input trigger event. */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
		{ "Started.Comment", "/**\n\x09 * The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button.\n\x09 *\n\x09 * This is the event to use for Input Action with default configuration (no triggers) or at least one trigger with the \"Down\" value.\n\x09 */" },
		{ "Started.DisplayName", "Activate on Action Started" },
		{ "Started.Name", "EComboGraphTransitionInputEvent::Started" },
		{ "Started.ToolTip", "The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button.\n\nThis is the event to use for Input Action with default configuration (no triggers) or at least one trigger with the \"Down\" value." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum listing all possible ability activation input trigger event." },
#endif
		{ "Triggered.Comment", "/**\n\x09 * Triggered for continuous actions after one or more processing ticks.\n\x09 *\n\x09 * For action triggers that are triggered every frame, only the first trigger happening within a combo window will be considered.\n\x09 */" },
		{ "Triggered.DisplayName", "Activate on Action Triggered" },
		{ "Triggered.Name", "EComboGraphTransitionInputEvent::Triggered" },
		{ "Triggered.ToolTip", "Triggered for continuous actions after one or more processing ticks.\n\nFor action triggers that are triggered every frame, only the first trigger happening within a combo window will be considered." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EComboGraphTransitionInputEvent",
		"EComboGraphTransitionInputEvent",
		Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphTransitionInputEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphTransitionInputEvent.InnerSingleton, Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphTransitionInputEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphNotifyStateAutoSetup;
class UScriptStruct* FComboGraphNotifyStateAutoSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphNotifyStateAutoSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphNotifyStateAutoSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("ComboGraphNotifyStateAutoSetup"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphNotifyStateAutoSetup.OuterSingleton;
}
template<> COMBOGRAPH_API UScriptStruct* StaticStruct<FComboGraphNotifyStateAutoSetup>()
{
	return FComboGraphNotifyStateAutoSetup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphNotifyStateAutoSetup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_StartPercent_MetaData[] = {
		{ "Category", "Auto Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** At which point in the animation sequence or montage this notifier should start (ex. for 1s sequence length, a value of 0.25 notify begin would trigger at 0.25s)*/" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "At which point in the animation sequence or montage this notifier should start (ex. for 1s sequence length, a value of 0.25 notify begin would trigger at 0.25s)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_StartPercent = { "StartPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphNotifyStateAutoSetup, StartPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_StartPercent_MetaData), Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_StartPercent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_EndPercent_MetaData[] = {
		{ "Category", "Auto Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** At which point in the animation sequence or montage this notifier should end (ex. for 1s sequence length, a value of 0.75 notify begin would trigger at 0.75s)*/" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "At which point in the animation sequence or montage this notifier should end (ex. for 1s sequence length, a value of 0.75 notify begin would trigger at 0.75s)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_EndPercent = { "EndPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphNotifyStateAutoSetup, EndPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_EndPercent_MetaData), Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_EndPercent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_StartPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewProp_EndPercent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		&NewStructOps,
		"ComboGraphNotifyStateAutoSetup",
		Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::PropPointers),
		sizeof(FComboGraphNotifyStateAutoSetup),
		alignof(FComboGraphNotifyStateAutoSetup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphNotifyStateAutoSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphNotifyStateAutoSetup.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphNotifyStateAutoSetup.InnerSingleton;
	}
	DEFINE_FUNCTION(UComboGraphTargetType::execGetTargets)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetingActor);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHitResults);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargets_Implementation(Z_Param_TargetingActor,Z_Param_EventData,Z_Param_Out_OutHitResults,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	struct ComboGraphTargetType_eventGetTargets_Parms
	{
		AActor* TargetingActor;
		FGameplayEventData EventData;
		TArray<FHitResult> OutHitResults;
		TArray<AActor*> OutActors;
	};
	static FName NAME_UComboGraphTargetType_GetTargets = FName(TEXT("GetTargets"));
	void UComboGraphTargetType::GetTargets(AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const
	{
		ComboGraphTargetType_eventGetTargets_Parms Parms;
		Parms.TargetingActor=TargetingActor;
		Parms.EventData=EventData;
		Parms.OutHitResults=OutHitResults;
		Parms.OutActors=OutActors;
		const_cast<UComboGraphTargetType*>(this)->ProcessEvent(FindFunctionChecked(NAME_UComboGraphTargetType_GetTargets),&Parms);
		OutHitResults=Parms.OutHitResults;
		OutActors=Parms.OutActors;
	}
	void UComboGraphTargetType::StaticRegisterNativesUComboGraphTargetType()
	{
		UClass* Class = UComboGraphTargetType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargets", &UComboGraphTargetType::execGetTargets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_TargetingActor = { "TargetingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphTargetType_eventGetTargets_Parms, TargetingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphTargetType_eventGetTargets_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphTargetType_eventGetTargets_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphTargetType_eventGetTargets_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_TargetingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_OutHitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called to determine targets to apply gameplay effects to */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to determine targets to apply gameplay effects to" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphTargetType, nullptr, "GetTargets", nullptr, nullptr, Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::PropPointers), sizeof(ComboGraphTargetType_eventGetTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::PropPointers) < 2048);
	static_assert(sizeof(ComboGraphTargetType_eventGetTargets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphTargetType_GetTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphTargetType_GetTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphTargetType);
	UClass* Z_Construct_UClass_UComboGraphTargetType_NoRegister()
	{
		return UComboGraphTargetType::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphTargetType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphTargetType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphTargetType_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphTargetType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphTargetType_GetTargets, "GetTargets" }, // 3389782942
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphTargetType_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphTargetType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class that is used to determine targeting for abilities\n *\n * It is meant to be blueprinted to run target logic\n *\n * This does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\n *\n * This can be used as a basis for a game-specific targeting blueprint. If your targeting is more complicated\n * you may need to instance into the world once or as a pooled actor\n */" },
#endif
		{ "IncludePath", "ComboGraphRuntimeTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
		{ "ShowWorldContextPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class that is used to determine targeting for abilities\n\nIt is meant to be blueprinted to run target logic\n\nThis does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\n\nThis can be used as a basis for a game-specific targeting blueprint. If your targeting is more complicated\nyou may need to instance into the world once or as a pooled actor" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphTargetType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphTargetType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphTargetType_Statics::ClassParams = {
		&UComboGraphTargetType::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphTargetType_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphTargetType_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphTargetType()
	{
		if (!Z_Registration_Info_UClass_UComboGraphTargetType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphTargetType.OuterSingleton, Z_Construct_UClass_UComboGraphTargetType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphTargetType.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphTargetType>()
	{
		return UComboGraphTargetType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphTargetType);
	UComboGraphTargetType::~UComboGraphTargetType() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphCueSourceObjectType;
	static UEnum* EComboGraphCueSourceObjectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphCueSourceObjectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphCueSourceObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EComboGraphCueSourceObjectType"));
		}
		return Z_Registration_Info_UEnum_EComboGraphCueSourceObjectType.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphCueSourceObjectType>()
	{
		return EComboGraphCueSourceObjectType_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType_Statics::Enumerators[] = {
		{ "EComboGraphCueSourceObjectType::None", (int64)EComboGraphCueSourceObjectType::None },
		{ "EComboGraphCueSourceObjectType::Niagara", (int64)EComboGraphCueSourceObjectType::Niagara },
		{ "EComboGraphCueSourceObjectType::Cascade", (int64)EComboGraphCueSourceObjectType::Cascade },
		{ "EComboGraphCueSourceObjectType::Sound", (int64)EComboGraphCueSourceObjectType::Sound },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cascade.DisplayName", "Use Cascade Particle System" },
		{ "Cascade.Name", "EComboGraphCueSourceObjectType::Cascade" },
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
		{ "Niagara.DisplayName", "Use Niagara Particle System" },
		{ "Niagara.Name", "EComboGraphCueSourceObjectType::Niagara" },
		{ "None.Name", "EComboGraphCueSourceObjectType::None" },
		{ "Sound.DisplayName", "Use Sound Effect" },
		{ "Sound.Name", "EComboGraphCueSourceObjectType::Sound" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EComboGraphCueSourceObjectType",
		"EComboGraphCueSourceObjectType",
		Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphCueSourceObjectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphCueSourceObjectType.InnerSingleton, Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphCueSourceObjectType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainer;
class UScriptStruct* FComboGraphGameplayEffectContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("ComboGraphGameplayEffectContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainer.OuterSingleton;
}
template<> COMBOGRAPH_API UScriptStruct* StaticStruct<FComboGraphGameplayEffectContainer>()
{
	return FComboGraphGameplayEffectContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetGameplayEffectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSetByCallerMagnitude_MetaData[];
#endif
		static void NewProp_bUseSetByCallerMagnitude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSetByCallerMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerDataTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetByCallerDataTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SetByCallerMagnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct defining a list of gameplay effects, a tag, and targeting info\n *\n * These containers are defined statically in blueprints or assets and then turn into Specs at runtime\n */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct defining a list of gameplay effects, a tag, and targeting info\n\nThese containers are defined statically in blueprints or assets and then turn into Specs at runtime" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphGameplayEffectContainer>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphGameplayEffectContainer, TargetGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_SetBit(void* Obj)
	{
		((FComboGraphGameplayEffectContainer*)Obj)->bUseSetByCallerMagnitude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude = { "bUseSetByCallerMagnitude", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComboGraphGameplayEffectContainer), &Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_MetaData), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer, meta = (EditCondition = \"bUseSetByCallerMagnitude\"))\n// FGameplayTag SetByCallerDataTag;\n//\n// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer, meta = (EditCondition = \"bUseSetByCallerMagnitude\"))\n// float SetByCallerMagnitude = 1.0f;\n" },
#endif
		{ "EditCondition", "bUseSetByCallerMagnitude" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer, meta = (EditCondition = \"bUseSetByCallerMagnitude\"))\nFGameplayTag SetByCallerDataTag;\n\nUPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer, meta = (EditCondition = \"bUseSetByCallerMagnitude\"))\nfloat SetByCallerMagnitude = 1.0f;" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag = { "SetByCallerDataTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphGameplayEffectContainer, SetByCallerDataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag_MetaData), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
		{ "EditCondition", "bUseSetByCallerMagnitude" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude = { "SetByCallerMagnitude", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphGameplayEffectContainer, SetByCallerMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude_MetaData), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		&NewStructOps,
		"ComboGraphGameplayEffectContainer",
		Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::PropPointers),
		sizeof(FComboGraphGameplayEffectContainer),
		alignof(FComboGraphGameplayEffectContainer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainer.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainerSpec;
class UScriptStruct* FComboGraphGameplayEffectContainerSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainerSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainerSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("ComboGraphGameplayEffectContainerSpec"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainerSpec.OuterSingleton;
}
template<> COMBOGRAPH_API UScriptStruct* StaticStruct<FComboGraphGameplayEffectContainerSpec>()
{
	return FComboGraphGameplayEffectContainerSpec::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGameplayEffectSpecs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectSpecs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectSpecs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A \"processed\" version of GSCGameplayEffectContainer that can be passed around and eventually applied */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A \"processed\" version of GSCGameplayEffectContainer that can be passed around and eventually applied" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphGameplayEffectContainerSpec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Computed target data */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computed target data" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphGameplayEffectContainerSpec, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData) }; // 3419327209
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphGameplayEffectContainerSpec, TargetGameplayEffectSpecs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		&NewStructOps,
		"ComboGraphGameplayEffectContainerSpec",
		Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::PropPointers),
		sizeof(FComboGraphGameplayEffectContainerSpec),
		alignof(FComboGraphGameplayEffectContainerSpec),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainerSpec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainerSpec.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainerSpec.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphDamageSystemContainer;
class UScriptStruct* FComboGraphDamageSystemContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphDamageSystemContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphDamageSystemContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("ComboGraphDamageSystemContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphDamageSystemContainer.OuterSingleton;
}
template<> COMBOGRAPH_API UScriptStruct* StaticStruct<FComboGraphDamageSystemContainer>()
{
	return FComboGraphDamageSystemContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Unreal's Damage System Container fallback.\n *\n * Struct defining a list of gameplay effects, a tag, and targeting info\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unreal's Damage System Container fallback.\n\nStruct defining a list of gameplay effects, a tag, and targeting info" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphDamageSystemContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of Damage to pass down to ApplyPointDamage */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of Damage to pass down to ApplyPointDamage" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphDamageSystemContainer, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_BaseDamage_MetaData), Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_BaseDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage Type to use with ApplyPointDamage */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage Type to use with ApplyPointDamage" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphDamageSystemContainer, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_DamageTypeClass_MetaData), Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_DamageTypeClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewProp_DamageTypeClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		&NewStructOps,
		"ComboGraphDamageSystemContainer",
		Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::PropPointers),
		sizeof(FComboGraphDamageSystemContainer),
		alignof(FComboGraphDamageSystemContainer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphDamageSystemContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphDamageSystemContainer.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphDamageSystemContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics::EnumInfo[] = {
		{ EComboGraphIconType_StaticEnum, TEXT("EComboGraphIconType"), &Z_Registration_Info_UEnum_EComboGraphIconType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3757666852U) },
		{ EComboGraphTransitionBehavior_StaticEnum, TEXT("EComboGraphTransitionBehavior"), &Z_Registration_Info_UEnum_EComboGraphTransitionBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4237330386U) },
		{ EComboGraphTransitionInputEvent_StaticEnum, TEXT("EComboGraphTransitionInputEvent"), &Z_Registration_Info_UEnum_EComboGraphTransitionInputEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3997112597U) },
		{ EComboGraphCueSourceObjectType_StaticEnum, TEXT("EComboGraphCueSourceObjectType"), &Z_Registration_Info_UEnum_EComboGraphCueSourceObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 324283642U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics::ScriptStructInfo[] = {
		{ FComboGraphNotifyStateAutoSetup::StaticStruct, Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics::NewStructOps, TEXT("ComboGraphNotifyStateAutoSetup"), &Z_Registration_Info_UScriptStruct_ComboGraphNotifyStateAutoSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphNotifyStateAutoSetup), 3709733393U) },
		{ FComboGraphGameplayEffectContainer::StaticStruct, Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics::NewStructOps, TEXT("ComboGraphGameplayEffectContainer"), &Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphGameplayEffectContainer), 2720316512U) },
		{ FComboGraphGameplayEffectContainerSpec::StaticStruct, Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics::NewStructOps, TEXT("ComboGraphGameplayEffectContainerSpec"), &Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContainerSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphGameplayEffectContainerSpec), 3226963527U) },
		{ FComboGraphDamageSystemContainer::StaticStruct, Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics::NewStructOps, TEXT("ComboGraphDamageSystemContainer"), &Z_Registration_Info_UScriptStruct_ComboGraphDamageSystemContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphDamageSystemContainer), 2099018127U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphTargetType, UComboGraphTargetType::StaticClass, TEXT("UComboGraphTargetType"), &Z_Registration_Info_UClass_UComboGraphTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphTargetType), 3789648107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_1692684346(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
