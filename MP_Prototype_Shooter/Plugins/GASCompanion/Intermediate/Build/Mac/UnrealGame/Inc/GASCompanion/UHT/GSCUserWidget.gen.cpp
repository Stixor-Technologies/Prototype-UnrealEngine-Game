// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/UI/GSCUserWidget.h"
#include "ActiveGameplayEffectHandle.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCUserWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCCoreComponent_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCUserWidget();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCUserWidget_NoRegister();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectUIData();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameplayEffectUIData;
class UScriptStruct* FGSCGameplayEffectUIData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectUIData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameplayEffectUIData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameplayEffectUIData, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameplayEffectUIData"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameplayEffectUIData.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameplayEffectUIData>()
{
	return FGSCGameplayEffectUIData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackLimitCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackLimitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameplayEffectUIData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "GAS Companion|GameplayEffect" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectUIData, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StartTime_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_TotalDuration_MetaData[] = {
		{ "Category", "GAS Companion|GameplayEffect" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectUIData, TotalDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_TotalDuration_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_TotalDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_ExpectedEndTime_MetaData[] = {
		{ "Category", "GAS Companion|GameplayEffect" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_ExpectedEndTime = { "ExpectedEndTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectUIData, ExpectedEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_ExpectedEndTime_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_ExpectedEndTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackCount_MetaData[] = {
		{ "Category", "GAS Companion|GameplayEffect" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectUIData, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackCount_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackLimitCount_MetaData[] = {
		{ "Category", "GAS Companion|GameplayEffect" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackLimitCount = { "StackLimitCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectUIData, StackLimitCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackLimitCount_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackLimitCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_TotalDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_ExpectedEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewProp_StackLimitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameplayEffectUIData",
		Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::PropPointers),
		sizeof(FGSCGameplayEffectUIData),
		alignof(FGSCGameplayEffectUIData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectUIData()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectUIData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameplayEffectUIData.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameplayEffectUIData.InnerSingleton;
	}
	DEFINE_FUNCTION(UGSCUserWidget::execGetAttributeValue)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUserWidget::execGetPercentForAttributes)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_MaxAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentForAttributes(Z_Param_Attribute,Z_Param_MaxAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUserWidget::execInitializeWithAbilitySystem)
	{
		P_GET_OBJECT_REF(UAbilitySystemComponent,Z_Param_Out_AbilitySystemComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWithAbilitySystem(Z_Param_Out_AbilitySystemComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUserWidget::execGetOwningAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetOwningAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUserWidget::execGetOwningCoreComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGSCCoreComponent**)Z_Param__Result=P_THIS->GetOwningCoreComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUserWidget::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUserWidget::execSetOwnerActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwnerActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	struct GSCUserWidget_eventOnAttributeChange_Parms
	{
		FGameplayAttribute Attribute;
		float NewValue;
		float OldValue;
	};
	struct GSCUserWidget_eventOnCooldownEnd_Parms
	{
		UGameplayAbility* Ability;
		FGameplayTag CooldownTag;
		float Duration;
	};
	struct GSCUserWidget_eventOnCooldownStart_Parms
	{
		UGameplayAbility* Ability;
		FGameplayTagContainer CooldownTags;
		float TimeRemaining;
		float Duration;
	};
	struct GSCUserWidget_eventOnGameplayEffectAdded_Parms
	{
		FGameplayTagContainer AssetTags;
		FGameplayTagContainer GrantedTags;
		FActiveGameplayEffectHandle ActiveHandle;
		FGSCGameplayEffectUIData EffectData;
	};
	struct GSCUserWidget_eventOnGameplayEffectRemoved_Parms
	{
		FGameplayTagContainer AssetTags;
		FGameplayTagContainer GrantedTags;
		FActiveGameplayEffectHandle ActiveHandle;
		FGSCGameplayEffectUIData EffectData;
	};
	struct GSCUserWidget_eventOnGameplayEffectStackChange_Parms
	{
		FGameplayTagContainer AssetTags;
		FGameplayTagContainer GrantedTags;
		FActiveGameplayEffectHandle ActiveHandle;
		int32 NewStackCount;
		int32 OldStackCount;
	};
	struct GSCUserWidget_eventOnGameplayEffectTimeChange_Parms
	{
		FGameplayTagContainer AssetTags;
		FGameplayTagContainer GrantedTags;
		FActiveGameplayEffectHandle ActiveHandle;
		float NewStartTime;
		float NewDuration;
	};
	struct GSCUserWidget_eventOnGameplayTagChange_Parms
	{
		FGameplayTag GameplayTag;
		int32 NewTagCount;
	};
	static FName NAME_UGSCUserWidget_OnAbilitySystemInitialized = FName(TEXT("OnAbilitySystemInitialized"));
	void UGSCUserWidget::OnAbilitySystemInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGSCUserWidget_OnAbilitySystemInitialized),NULL);
	}
	static FName NAME_UGSCUserWidget_OnAttributeChange = FName(TEXT("OnAttributeChange"));
	void UGSCUserWidget::OnAttributeChange(FGameplayAttribute Attribute, float NewValue, float OldValue)
	{
		GSCUserWidget_eventOnAttributeChange_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.NewValue=NewValue;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_UGSCUserWidget_OnAttributeChange),&Parms);
	}
	static FName NAME_UGSCUserWidget_OnCooldownEnd = FName(TEXT("OnCooldownEnd"));
	void UGSCUserWidget::OnCooldownEnd(UGameplayAbility* Ability, FGameplayTag CooldownTag, float Duration)
	{
		GSCUserWidget_eventOnCooldownEnd_Parms Parms;
		Parms.Ability=Ability;
		Parms.CooldownTag=CooldownTag;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UGSCUserWidget_OnCooldownEnd),&Parms);
	}
	static FName NAME_UGSCUserWidget_OnCooldownStart = FName(TEXT("OnCooldownStart"));
	void UGSCUserWidget::OnCooldownStart(UGameplayAbility* Ability, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration)
	{
		GSCUserWidget_eventOnCooldownStart_Parms Parms;
		Parms.Ability=Ability;
		Parms.CooldownTags=CooldownTags;
		Parms.TimeRemaining=TimeRemaining;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UGSCUserWidget_OnCooldownStart),&Parms);
	}
	static FName NAME_UGSCUserWidget_OnGameplayEffectAdded = FName(TEXT("OnGameplayEffectAdded"));
	void UGSCUserWidget::OnGameplayEffectAdded(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, FGSCGameplayEffectUIData EffectData)
	{
		GSCUserWidget_eventOnGameplayEffectAdded_Parms Parms;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.ActiveHandle=ActiveHandle;
		Parms.EffectData=EffectData;
		ProcessEvent(FindFunctionChecked(NAME_UGSCUserWidget_OnGameplayEffectAdded),&Parms);
	}
	static FName NAME_UGSCUserWidget_OnGameplayEffectRemoved = FName(TEXT("OnGameplayEffectRemoved"));
	void UGSCUserWidget::OnGameplayEffectRemoved(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, FGSCGameplayEffectUIData EffectData)
	{
		GSCUserWidget_eventOnGameplayEffectRemoved_Parms Parms;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.ActiveHandle=ActiveHandle;
		Parms.EffectData=EffectData;
		ProcessEvent(FindFunctionChecked(NAME_UGSCUserWidget_OnGameplayEffectRemoved),&Parms);
	}
	static FName NAME_UGSCUserWidget_OnGameplayEffectStackChange = FName(TEXT("OnGameplayEffectStackChange"));
	void UGSCUserWidget::OnGameplayEffectStackChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 OldStackCount)
	{
		GSCUserWidget_eventOnGameplayEffectStackChange_Parms Parms;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.ActiveHandle=ActiveHandle;
		Parms.NewStackCount=NewStackCount;
		Parms.OldStackCount=OldStackCount;
		ProcessEvent(FindFunctionChecked(NAME_UGSCUserWidget_OnGameplayEffectStackChange),&Parms);
	}
	static FName NAME_UGSCUserWidget_OnGameplayEffectTimeChange = FName(TEXT("OnGameplayEffectTimeChange"));
	void UGSCUserWidget::OnGameplayEffectTimeChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration)
	{
		GSCUserWidget_eventOnGameplayEffectTimeChange_Parms Parms;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.ActiveHandle=ActiveHandle;
		Parms.NewStartTime=NewStartTime;
		Parms.NewDuration=NewDuration;
		ProcessEvent(FindFunctionChecked(NAME_UGSCUserWidget_OnGameplayEffectTimeChange),&Parms);
	}
	static FName NAME_UGSCUserWidget_OnGameplayTagChange = FName(TEXT("OnGameplayTagChange"));
	void UGSCUserWidget::OnGameplayTagChange(FGameplayTag GameplayTag, int32 NewTagCount)
	{
		GSCUserWidget_eventOnGameplayTagChange_Parms Parms;
		Parms.GameplayTag=GameplayTag;
		Parms.NewTagCount=NewTagCount;
		ProcessEvent(FindFunctionChecked(NAME_UGSCUserWidget_OnGameplayTagChange),&Parms);
	}
	void UGSCUserWidget::StaticRegisterNativesUGSCUserWidget()
	{
		UClass* Class = UGSCUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeValue", &UGSCUserWidget::execGetAttributeValue },
			{ "GetOwningAbilitySystemComponent", &UGSCUserWidget::execGetOwningAbilitySystemComponent },
			{ "GetOwningActor", &UGSCUserWidget::execGetOwningActor },
			{ "GetOwningCoreComponent", &UGSCUserWidget::execGetOwningCoreComponent },
			{ "GetPercentForAttributes", &UGSCUserWidget::execGetPercentForAttributes },
			{ "InitializeWithAbilitySystem", &UGSCUserWidget::execInitializeWithAbilitySystem },
			{ "SetOwnerActor", &UGSCUserWidget::execSetOwnerActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics
	{
		struct GSCUserWidget_eventGetAttributeValue_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventGetAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Returns the current value of an attribute (base value) from owning actor Ability System (if it has any). That is, the value of the attribute with no stateful modifiers */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Returns the current value of an attribute (base value) from owning actor Ability System (if it has any). That is, the value of the attribute with no stateful modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "GetAttributeValue", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::GSCUserWidget_eventGetAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::GSCUserWidget_eventGetAttributeValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics
	{
		struct GSCUserWidget_eventGetOwningAbilitySystemComponent_Parms
		{
			UAbilitySystemComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventGetOwningAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Returns reference to AbilitySystemComponent for this user widget, if it has been initialized. */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Returns reference to AbilitySystemComponent for this user widget, if it has been initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "GetOwningAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::GSCUserWidget_eventGetOwningAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::GSCUserWidget_eventGetOwningAbilitySystemComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics
	{
		struct GSCUserWidget_eventGetOwningActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Returns reference to OwnerActor for this user widget, if it has been initialized. */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Returns reference to OwnerActor for this user widget, if it has been initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "GetOwningActor", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::GSCUserWidget_eventGetOwningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::GSCUserWidget_eventGetOwningActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics
	{
		struct GSCUserWidget_eventGetOwningCoreComponent_Parms
		{
			UGSCCoreComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventGetOwningCoreComponent_Parms, ReturnValue), Z_Construct_UClass_UGSCCoreComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Returns reference to OwnerCoreComponent for this user widget, if it has been initialized. */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Returns reference to OwnerCoreComponent for this user widget, if it has been initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "GetOwningCoreComponent", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::GSCUserWidget_eventGetOwningCoreComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::GSCUserWidget_eventGetOwningCoreComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics
	{
		struct GSCUserWidget_eventGetPercentForAttributes_Parms
		{
			FGameplayAttribute Attribute;
			FGameplayAttribute MaxAttribute;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAttribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventGetPercentForAttributes_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::NewProp_MaxAttribute = { "MaxAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventGetPercentForAttributes_Parms, MaxAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventGetPercentForAttributes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::NewProp_MaxAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Helper function to return percentage from Attribute / MaxAttribute */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Helper function to return percentage from Attribute / MaxAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "GetPercentForAttributes", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::GSCUserWidget_eventGetPercentForAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::GSCUserWidget_eventGetPercentForAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics
	{
		struct GSCUserWidget_eventInitializeWithAbilitySystem_Parms
		{
			const UAbilitySystemComponent* AbilitySystemComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000008080182, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventInitializeWithAbilitySystem_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::NewProp_AbilitySystemComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/**\n\x09 * Runs initialization logic for this UserWidget related to interactions with Ability System Component.\n\x09 *\n\x09 * Setup AbilitySystemComponent delegates to react to various events.\n\x09 *\n\x09 * Usually called from NativeConstruct, but exposed there if other classes needs to run initialization logic again to update references.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Runs initialization logic for this UserWidget related to interactions with Ability System Component.\n\nSetup AbilitySystemComponent delegates to react to various events.\n\nUsually called from NativeConstruct, but exposed there if other classes needs to run initialization logic again to update references." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "InitializeWithAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::GSCUserWidget_eventInitializeWithAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::GSCUserWidget_eventInitializeWithAbilitySystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_OnAbilitySystemInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnAbilitySystemInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/**\n\x09 * Event triggered when this widget has been initialized with a valid ASC.\n\x09 * \n\x09 * Run initialization logic that depends on Ability System here. (like setting initial state for user widgets based on attributes value)\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Event triggered when this widget has been initialized with a valid ASC.\n\nRun initialization logic that depends on Ability System here. (like setting initial state for user widgets based on attributes value)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_OnAbilitySystemInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "OnAbilitySystemInitialized", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnAbilitySystemInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_OnAbilitySystemInitialized_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSCUserWidget_OnAbilitySystemInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_OnAbilitySystemInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnAttributeChange_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnAttributeChange_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Event triggered whenever an attribute value is changed on Owner Actor's ASC */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Event triggered whenever an attribute value is changed on Owner Actor's ASC" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "OnAttributeChange", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::PropPointers), sizeof(GSCUserWidget_eventOnAttributeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCUserWidget_eventOnAttributeChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnCooldownEnd_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnCooldownEnd_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnCooldownEnd_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Event triggered by Companion Core Component when a cooldown gameplay tag is removed, meaning cooldown expired */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Event triggered by Companion Core Component when a cooldown gameplay tag is removed, meaning cooldown expired" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "OnCooldownEnd", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::PropPointers), sizeof(GSCUserWidget_eventOnCooldownEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCUserWidget_eventOnCooldownEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics
	{
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnCooldownStart_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_CooldownTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnCooldownStart_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_CooldownTags_MetaData), Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_CooldownTags_MetaData) }; // 405371792
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnCooldownStart_Parms, TimeRemaining), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnCooldownStart_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_CooldownTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_TimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Event triggered by Companion Core component when an ability with a valid cooldown is committed and cooldown is applied */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Event triggered by Companion Core component when an ability with a valid cooldown is committed and cooldown is applied" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "OnCooldownStart", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::PropPointers), sizeof(GSCUserWidget_eventOnCooldownStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCUserWidget_eventOnCooldownStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectAdded_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectAdded_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectAdded_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::NewProp_EffectData = { "EffectData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectAdded_Parms, EffectData), Z_Construct_UScriptStruct_FGSCGameplayEffectUIData, METADATA_PARAMS(0, nullptr) }; // 2452504528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::NewProp_EffectData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a gameplay effect is added */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a gameplay effect is added" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "OnGameplayEffectAdded", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::PropPointers), sizeof(GSCUserWidget_eventOnGameplayEffectAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCUserWidget_eventOnGameplayEffectAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectRemoved_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectRemoved_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectRemoved_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::NewProp_EffectData = { "EffectData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectRemoved_Parms, EffectData), Z_Construct_UScriptStruct_FGSCGameplayEffectUIData, METADATA_PARAMS(0, nullptr) }; // 2452504528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::NewProp_EffectData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a gameplay effect is removed */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a gameplay effect is removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "OnGameplayEffectRemoved", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::PropPointers), sizeof(GSCUserWidget_eventOnGameplayEffectRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCUserWidget_eventOnGameplayEffectRemoved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics
	{
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectStackChange_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectStackChange_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectStackChange_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectStackChange_Parms, NewStackCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectStackChange_Parms, OldStackCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_NewStackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::NewProp_OldStackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a gameplay effect is added / removed */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a gameplay effect is added / removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "OnGameplayEffectStackChange", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::PropPointers), sizeof(GSCUserWidget_eventOnGameplayEffectStackChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCUserWidget_eventOnGameplayEffectStackChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics
	{
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectTimeChange_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectTimeChange_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectTimeChange_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_NewStartTime = { "NewStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectTimeChange_Parms, NewStartTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayEffectTimeChange_Parms, NewDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_NewStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a gameplay effect time is changed (for instance when duration is refreshed) */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a gameplay effect time is changed (for instance when duration is refreshed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "OnGameplayEffectTimeChange", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::PropPointers), sizeof(GSCUserWidget_eventOnGameplayEffectTimeChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCUserWidget_eventOnGameplayEffectTimeChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewTagCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayTagChange_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::NewProp_NewTagCount = { "NewTagCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventOnGameplayTagChange_Parms, NewTagCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::NewProp_NewTagCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events) */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "OnGameplayTagChange", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::PropPointers), sizeof(GSCUserWidget_eventOnGameplayTagChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCUserWidget_eventOnGameplayTagChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics
	{
		struct GSCUserWidget_eventSetOwnerActor_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUserWidget_eventSetOwnerActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Initialize or update references to owner actor and additional actor components (such as AbilitySystemComponent) and cache them for this instance of user widget. */" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Initialize or update references to owner actor and additional actor components (such as AbilitySystemComponent) and cache them for this instance of user widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUserWidget, nullptr, "SetOwnerActor", nullptr, nullptr, Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::GSCUserWidget_eventSetOwnerActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::GSCUserWidget_eventSetOwnerActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCUserWidget);
	UClass* Z_Construct_UClass_UGSCUserWidget_NoRegister()
	{
		return UGSCUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGSCUserWidget_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCoreComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerCoreComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCUserWidget_GetAttributeValue, "GetAttributeValue" }, // 1376049936
		{ &Z_Construct_UFunction_UGSCUserWidget_GetOwningAbilitySystemComponent, "GetOwningAbilitySystemComponent" }, // 2142207279
		{ &Z_Construct_UFunction_UGSCUserWidget_GetOwningActor, "GetOwningActor" }, // 992883764
		{ &Z_Construct_UFunction_UGSCUserWidget_GetOwningCoreComponent, "GetOwningCoreComponent" }, // 2691948641
		{ &Z_Construct_UFunction_UGSCUserWidget_GetPercentForAttributes, "GetPercentForAttributes" }, // 1532099520
		{ &Z_Construct_UFunction_UGSCUserWidget_InitializeWithAbilitySystem, "InitializeWithAbilitySystem" }, // 2402185364
		{ &Z_Construct_UFunction_UGSCUserWidget_OnAbilitySystemInitialized, "OnAbilitySystemInitialized" }, // 4172758624
		{ &Z_Construct_UFunction_UGSCUserWidget_OnAttributeChange, "OnAttributeChange" }, // 1212651176
		{ &Z_Construct_UFunction_UGSCUserWidget_OnCooldownEnd, "OnCooldownEnd" }, // 3527970098
		{ &Z_Construct_UFunction_UGSCUserWidget_OnCooldownStart, "OnCooldownStart" }, // 4102558316
		{ &Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectAdded, "OnGameplayEffectAdded" }, // 605996545
		{ &Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectRemoved, "OnGameplayEffectRemoved" }, // 3859002943
		{ &Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectStackChange, "OnGameplayEffectStackChange" }, // 2109631855
		{ &Z_Construct_UFunction_UGSCUserWidget_OnGameplayEffectTimeChange, "OnGameplayEffectTimeChange" }, // 3752876009
		{ &Z_Construct_UFunction_UGSCUserWidget_OnGameplayTagChange, "OnGameplayTagChange" }, // 2056929307
		{ &Z_Construct_UFunction_UGSCUserWidget_SetOwnerActor, "SetOwnerActor" }, // 49268438
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base user widget class to inherit from for UMG that needs to interact with an Ability System Component.\n *\n * For typical use case of Player HUD, use UGSCUWHud subclass instead.\n *\n * This class provides an event based API to react to Ability System related events:\n *\n * - Attribute value change\n * - Gameplay Tag change\n * - Gameplay Effect added / removed\n * - Cooldown start / expiration\n */" },
		{ "IncludePath", "UI/GSCUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
		{ "ToolTip", "Base user widget class to inherit from for UMG that needs to interact with an Ability System Component.\n\nFor typical use case of Player HUD, use UGSCUWHud subclass instead.\n\nThis class provides an event based API to react to Ability System related events:\n\n- Attribute value change\n- Gameplay Tag change\n- Gameplay Effect added / removed\n- Cooldown start / expiration" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "Category", "GAS Companion|UI" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetOwningActor() instead." },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUserWidget, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerActor_MetaData), Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerCoreComponent_MetaData[] = {
		{ "Category", "GAS Companion|UI" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetOwningCoreComponent() instead." },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerCoreComponent = { "OwnerCoreComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUserWidget, OwnerCoreComponent), Z_Construct_UClass_UGSCCoreComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerCoreComponent_MetaData), Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerCoreComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUserWidget, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_AbilitySystemComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_OwnerCoreComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUserWidget_Statics::NewProp_AbilitySystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCUserWidget_Statics::ClassParams = {
		&UGSCUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCUserWidget()
	{
		if (!Z_Registration_Info_UClass_UGSCUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCUserWidget.OuterSingleton, Z_Construct_UClass_UGSCUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCUserWidget.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCUserWidget>()
	{
		return UGSCUserWidget::StaticClass();
	}
	UGSCUserWidget::UGSCUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCUserWidget);
	UGSCUserWidget::~UGSCUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_Statics::ScriptStructInfo[] = {
		{ FGSCGameplayEffectUIData::StaticStruct, Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics::NewStructOps, TEXT("GSCGameplayEffectUIData"), &Z_Registration_Info_UScriptStruct_GSCGameplayEffectUIData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameplayEffectUIData), 2452504528U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCUserWidget, UGSCUserWidget::StaticClass, TEXT("UGSCUserWidget"), &Z_Registration_Info_UClass_UGSCUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCUserWidget), 1678685426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_754162810(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
