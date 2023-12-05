// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/GSCAbilitySystemComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GASCompanion/Public/Abilities/GSCAbilitySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAbilitySystemComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilitySet_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilitySystemComponent();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilitySystemComponent_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCComboManagerComponent_NoRegister();
	GASCOMPANION_API UEnum* Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent();
	GASCOMPANION_API UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfo__DelegateSignature();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAbilityInputMapping();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAbilitySetHandle();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetDefinition();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCMappedAbility();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping;
class UScriptStruct* FGSCAbilityInputMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAbilityInputMapping, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCAbilityInputMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCAbilityInputMapping>()
{
	return FGSCAbilityInputMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAbilityInputMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of ability to grant */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of ability to grant" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAbilityInputMapping, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability_MetaData), Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Level to grant the ability at */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level to grant the ability at" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAbilityInputMapping, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Level_MetaData), Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input action to bind the ability to, if any (can be left unset) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input action to bind the ability to, if any (can be left unset)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAbilityInputMapping, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction_MetaData), Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The EnhancedInput Trigger Event type to use for the ability activation on pressed handle.\n\x09 *\n\x09 * ---\n\x09 *\n\x09 * The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button,\n\x09 * and Triggered for continuous actions that happen every frame while holding an input\n\x09 *\n\x09 * Warning: The Triggered value should only be used for Input Actions that you know only trigger once. If your action\n\x09 * triggered event happens on every tick, this might lead to issues with ability activation (since you'll be\n\x09 * trying to activate abilities every frame). When in doubt, use the default Started value.\n\x09 */" },
#endif
		{ "EditCondition", "InputAction != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The EnhancedInput Trigger Event type to use for the ability activation on pressed handle.\n\n---\n\nThe most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button,\nand Triggered for continuous actions that happen every frame while holding an input\n\nWarning: The Triggered value should only be used for Input Actions that you know only trigger once. If your action\ntriggered event happens on every tick, this might lead to issues with ability activation (since you'll be\ntrying to activate abilities every frame). When in doubt, use the default Started value." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAbilityInputMapping, TriggerEvent), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_MetaData), Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_MetaData) }; // 2362312655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCAbilityInputMapping",
		Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::PropPointers),
		sizeof(FGSCAbilityInputMapping),
		alignof(FGSCAbilityInputMapping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAbilityInputMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.InnerSingleton, Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition;
class UScriptStruct* FGSCAttributeSetDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCAttributeSetDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCAttributeSetDefinition>()
{
	return FGSCAttributeSetDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitializationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributeSetDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attribute Set to grant */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Set to grant" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetDefinition, AttributeSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data table reference to initialize the attributes with, if any (can be left unset) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/GameplayAbilities.AttributeMetaData" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data table reference to initialize the attributes with, if any (can be left unset)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData = { "InitializationData", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetDefinition, InitializationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCAttributeSetDefinition",
		Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::PropPointers),
		sizeof(FGSCAttributeSetDefinition),
		alignof(FGSCAttributeSetDefinition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.InnerSingleton, Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCMappedAbility;
class UScriptStruct* FGSCMappedAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCMappedAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCMappedAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCMappedAbility, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCMappedAbility"));
	}
	return Z_Registration_Info_UScriptStruct_GSCMappedAbility.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCMappedAbility>()
{
	return FGSCMappedAbility::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCMappedAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCMappedAbility>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCMappedAbility, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction_MetaData), Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCMappedAbility",
		Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::PropPointers),
		sizeof(FGSCMappedAbility),
		alignof(FGSCMappedAbility),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCMappedAbility()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCMappedAbility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCMappedAbility.InnerSingleton, Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCMappedAbility.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfo__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASCompanion, nullptr, "GSCOnInitAbilityActorInfo__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfo__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfo__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGSCOnInitAbilityActorInfo_DelegateWrapper(const FMulticastScriptDelegate& GSCOnInitAbilityActorInfo)
{
	GSCOnInitAbilityActorInfo.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UGSCAbilitySystemComponent::execOnPawnControllerChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnControllerChanged(Z_Param_Pawn,Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCAbilitySystemComponent::execClearAbilitySet)
	{
		P_GET_STRUCT_REF(FGSCAbilitySetHandle,Z_Param_Out_InAbilitySetHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearAbilitySet(Z_Param_Out_InAbilitySetHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCAbilitySystemComponent::execGiveAbilitySet)
	{
		P_GET_OBJECT(UGSCAbilitySet,Z_Param_InAbilitySet);
		P_GET_STRUCT_REF(FGSCAbilitySetHandle,Z_Param_Out_OutHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GiveAbilitySet(Z_Param_InAbilitySet,Z_Param_Out_OutHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCAbilitySystemComponent::execGrantAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_GET_UBOOL(Z_Param_bRemoveAfterActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAbilitySpecHandle*)Z_Param__Result=P_THIS->GrantAbility(Z_Param_Ability,Z_Param_bRemoveAfterActivation);
		P_NATIVE_END;
	}
	void UGSCAbilitySystemComponent::StaticRegisterNativesUGSCAbilitySystemComponent()
	{
		UClass* Class = UGSCAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAbilitySet", &UGSCAbilitySystemComponent::execClearAbilitySet },
			{ "GiveAbilitySet", &UGSCAbilitySystemComponent::execGiveAbilitySet },
			{ "GrantAbility", &UGSCAbilitySystemComponent::execGrantAbility },
			{ "OnPawnControllerChanged", &UGSCAbilitySystemComponent::execOnPawnControllerChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics
	{
		struct GSCAbilitySystemComponent_eventClearAbilitySet_Parms
		{
			FGSCAbilitySetHandle InAbilitySetHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAbilitySetHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::NewProp_InAbilitySetHandle = { "InAbilitySetHandle", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventClearAbilitySet_Parms, InAbilitySetHandle), Z_Construct_UScriptStruct_FGSCAbilitySetHandle, METADATA_PARAMS(0, nullptr) }; // 1439990879
	void Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSCAbilitySystemComponent_eventClearAbilitySet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCAbilitySystemComponent_eventClearAbilitySet_Parms), &Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::NewProp_InAbilitySetHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Ability Sets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes the AbilitySet represented by InAbilitySetHandle from the passed in ASC. Clears out any previously granted Abilities,\n\x09 * Attributes, Effects and Owned Tags from the set.\n\x09 *\n\x09 * Like granting, it is advised to call this method on both Server and Client for multiplayer games.\n\x09 * \n\x09 * @param InAbilitySetHandle Handle of the Ability Set to remove\n\x09 * \n\x09 * @return True if the ability set was removed successfully, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the AbilitySet represented by InAbilitySetHandle from the passed in ASC. Clears out any previously granted Abilities,\nAttributes, Effects and Owned Tags from the set.\n\nLike granting, it is advised to call this method on both Server and Client for multiplayer games.\n\n@param InAbilitySetHandle Handle of the Ability Set to remove\n\n@return True if the ability set was removed successfully, false otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilitySystemComponent, nullptr, "ClearAbilitySet", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::GSCAbilitySystemComponent_eventClearAbilitySet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::GSCAbilitySystemComponent_eventClearAbilitySet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics
	{
		struct GSCAbilitySystemComponent_eventGiveAbilitySet_Parms
		{
			const UGSCAbilitySet* InAbilitySet;
			FGSCAbilitySetHandle OutHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAbilitySet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAbilitySet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_InAbilitySet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_InAbilitySet = { "InAbilitySet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventGiveAbilitySet_Parms, InAbilitySet), Z_Construct_UClass_UGSCAbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_InAbilitySet_MetaData), Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_InAbilitySet_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventGiveAbilitySet_Parms, OutHandle), Z_Construct_UScriptStruct_FGSCAbilitySetHandle, METADATA_PARAMS(0, nullptr) }; // 1439990879
	void Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSCAbilitySystemComponent_eventGiveAbilitySet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCAbilitySystemComponent_eventGiveAbilitySet_Parms), &Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_InAbilitySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_OutHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Ability Sets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Grants a given Ability Set to the ASC, adding defined Abilities, Attributes, Effects and Owned Tags.\n\x09 *\n\x09 * This method is meant to run on both Authority (must be called from server), and on Client if you'd like to setup binding as well (Important to call on client too for Owned Tags)\n\x09 *\n\x09 * During Pawn initialization, if you'd like to grant a list of Ability Sets manually with this method, the typical place to do so is:\n\x09 *\n\x09 * - OnInitAbilityActorInfo (event exposed by both UGSCAbilitySystemComponent and UGSCCoreComponent)\n\x09 * - OnBeginPlay but only if ASC is on the Pawn (not using GSCModularPlayerState to hold the ASC)\n\x09 * \n\x09 * Both Player State pawns and non Player State pawns can use OnInitAbilityActorInfo, while only non Player State pawns can use OnBeginPlay to grant the ability.\n\x09 * \n\x09 * Also, for input binding to work and register properly, the avatar actor for this ASC must have UGSCAbilityInputBindingComponent actor component.\n\x09 * \n\x09 * @param InAbilitySet The Ability Set to grant to the ASC\n\x09 * @param OutHandle Handle that can be used to remove the set later on\n\x09 * \n\x09 * @return True if the ability set was granted successfully, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grants a given Ability Set to the ASC, adding defined Abilities, Attributes, Effects and Owned Tags.\n\nThis method is meant to run on both Authority (must be called from server), and on Client if you'd like to setup binding as well (Important to call on client too for Owned Tags)\n\nDuring Pawn initialization, if you'd like to grant a list of Ability Sets manually with this method, the typical place to do so is:\n\n- OnInitAbilityActorInfo (event exposed by both UGSCAbilitySystemComponent and UGSCCoreComponent)\n- OnBeginPlay but only if ASC is on the Pawn (not using GSCModularPlayerState to hold the ASC)\n\nBoth Player State pawns and non Player State pawns can use OnInitAbilityActorInfo, while only non Player State pawns can use OnBeginPlay to grant the ability.\n\nAlso, for input binding to work and register properly, the avatar actor for this ASC must have UGSCAbilityInputBindingComponent actor component.\n\n@param InAbilitySet The Ability Set to grant to the ASC\n@param OutHandle Handle that can be used to remove the set later on\n\n@return True if the ability set was granted successfully, false otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilitySystemComponent, nullptr, "GiveAbilitySet", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::GSCAbilitySystemComponent_eventGiveAbilitySet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::GSCAbilitySystemComponent_eventGiveAbilitySet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics
	{
		struct GSCAbilitySystemComponent_eventGrantAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  Ability;
			bool bRemoveAfterActivation;
			FGameplayAbilitySpecHandle ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static void NewProp_bRemoveAfterActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveAfterActivation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventGrantAbility_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_bRemoveAfterActivation_SetBit(void* Obj)
	{
		((GSCAbilitySystemComponent_eventGrantAbility_Parms*)Obj)->bRemoveAfterActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_bRemoveAfterActivation = { "bRemoveAfterActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCAbilitySystemComponent_eventGrantAbility_Parms), &Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_bRemoveAfterActivation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventGrantAbility_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_bRemoveAfterActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GiveAbility() method of engine's UAbilitySystemComponent instead. Or the newly added GiveAbilityWithInput method of UGSCAbilityInputBindingComponent." },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilitySystemComponent, nullptr, "GrantAbility", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::GSCAbilitySystemComponent_eventGrantAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::GSCAbilitySystemComponent_eventGrantAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics
	{
		struct GSCAbilitySystemComponent_eventOnPawnControllerChanged_Parms
		{
			APawn* Pawn;
			AController* NewController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventOnPawnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventOnPawnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reinit the cached ability actor info (specifically the player controller) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reinit the cached ability actor info (specifically the player controller)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilitySystemComponent, nullptr, "OnPawnControllerChanged", nullptr, nullptr, Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::GSCAbilitySystemComponent_eventOnPawnControllerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::GSCAbilitySystemComponent_eventOnPawnControllerChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAbilitySystemComponent);
	UClass* Z_Construct_UClass_UGSCAbilitySystemComponent_NoRegister()
	{
		return UGSCAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GrantedEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedEffects;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GrantedAbilitySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilitySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilitySets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInitAbilityActorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitAbilityActorInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAbilitiesOnSpawn_MetaData[];
#endif
		static void NewProp_bResetAbilitiesOnSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAbilitiesOnSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAttributesOnSpawn_MetaData[];
#endif
		static void NewProp_bResetAttributesOnSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAttributesOnSpawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddedAbilityHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedAbilityHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedAbilityHandles;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AddedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddedEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedEffects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddedAbilitySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedAbilitySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedAbilitySets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCAbilitySystemComponent_ClearAbilitySet, "ClearAbilitySet" }, // 1544069739
		{ &Z_Construct_UFunction_UGSCAbilitySystemComponent_GiveAbilitySet, "GiveAbilitySet" }, // 3881224850
		{ &Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility, "GrantAbility" }, // 3748232669
		{ &Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged, "OnPawnControllerChanged" }, // 4152198686
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GASCompanion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Revamped Ability System Component for 3.0.0\n *\n * This one is meant to be attached in Blueprint (or via a GameFeature), although 4.27 still requires ASC and IAbilitySystemInterface to be implemented in cpp.\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Abilities/GSCAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Revamped Ability System Component for 3.0.0\n\nThis one is meant to be attached in Blueprint (or via a GameFeature), although 4.27 still requires ASC and IAbilitySystemInterface to be implemented in cpp." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCAbilityInputMapping, METADATA_PARAMS(0, nullptr) }; // 815589548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of Gameplay Abilities to grant when the Ability System Component is initialized */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Gameplay Abilities to grant when the Ability System Component is initialized" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_MetaData) }; // 815589548
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCAttributeSetDefinition, METADATA_PARAMS(0, nullptr) }; // 158410055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of Attribute Sets to grant when the Ability System Component is initialized, with optional initialization data */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Attribute Sets to grant when the Ability System Component is initialized, with optional initialization data" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_MetaData) }; // 158410055
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_Inner = { "GrantedEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of GameplayEffects to apply when the Ability System Component is initialized (typically on begin play) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of GameplayEffects to apply when the Ability System Component is initialized (typically on begin play)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects = { "GrantedEffects", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, GrantedEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets_Inner = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGSCAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of Gameplay Ability Sets to grant when the Ability System Component is initialized */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Gameplay Ability Sets to grant when the Ability System Component is initialized" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, GrantedAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_OnInitAbilityActorInfo_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called just after InitAbilityActorInfo, once abilities and attributes have been granted.\n\x09 *\n\x09 * This will happen multiple times for both client / server:\n\x09 *\n\x09 * - Once for Server after component initialization\n\x09 * - Once for Server after replication of owning actor (Possessed by for Player State)\n\x09 * - Once for Client after component initialization\n\x09 * - Once for Client after replication of owning actor (Once more for Player State OnRep_PlayerState)\n\x09 *\n\x09 * Also depends on whether ASC lives on Pawns or Player States.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called just after InitAbilityActorInfo, once abilities and attributes have been granted.\n\nThis will happen multiple times for both client / server:\n\n- Once for Server after component initialization\n- Once for Server after replication of owning actor (Possessed by for Player State)\n- Once for Client after component initialization\n- Once for Client after replication of owning actor (Once more for Player State OnRep_PlayerState)\n\nAlso depends on whether ASC lives on Pawns or Player States." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_OnInitAbilityActorInfo = { "OnInitAbilityActorInfo", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, OnInitAbilityActorInfo), Z_Construct_UDelegateFunction_GASCompanion_GSCOnInitAbilityActorInfo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_OnInitAbilityActorInfo_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_OnInitAbilityActorInfo_MetaData) }; // 4025389785
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifically set abilities to persist across deaths / respawns or possessions (Default is true)\n\x09 *\n\x09 * When this is set to false, abilities will only be granted the first time InitAbilityActor is called. This is the default\n\x09 * behavior for ASC living on Player States (GSCModularPlayerState specifically).\n\x09 *\n\x09 * Do not set it true for ASC living on Player States if you're using ability input binding. Only ASC living on Pawns supports this.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifically set abilities to persist across deaths / respawns or possessions (Default is true)\n\nWhen this is set to false, abilities will only be granted the first time InitAbilityActor is called. This is the default\nbehavior for ASC living on Player States (GSCModularPlayerState specifically).\n\nDo not set it true for ASC living on Player States if you're using ability input binding. Only ASC living on Pawns supports this." },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_SetBit(void* Obj)
	{
		((UGSCAbilitySystemComponent*)Obj)->bResetAbilitiesOnSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn = { "bResetAbilitiesOnSpawn", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCAbilitySystemComponent), &Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifically set attributes to persist across deaths / respawns or possessions (Default is true)\n\x09 *\n\x09 * When this is set to false, attributes are only granted the first time InitAbilityActor is called. This is the default\n\x09 * behavior for ASC living on Player States (GSCModularPlayerState specifically).\n\x09 *\n\x09 * Set it (or leave it) to true if you want attribute values to be re-initialized to their default values.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifically set attributes to persist across deaths / respawns or possessions (Default is true)\n\nWhen this is set to false, attributes are only granted the first time InitAbilityActor is called. This is the default\nbehavior for ASC living on Player States (GSCModularPlayerState specifically).\n\nSet it (or leave it) to true if you want attribute values to be re-initialized to their default values." },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_SetBit(void* Obj)
	{
		((UGSCAbilitySystemComponent*)Obj)->bResetAttributesOnSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn = { "bResetAttributesOnSpawn", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCAbilitySystemComponent), &Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilityHandles_Inner = { "AddedAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCMappedAbility, METADATA_PARAMS(0, nullptr) }; // 4047456925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilityHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached granted Ability Handles\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached granted Ability Handles" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilityHandles = { "AddedAbilityHandles", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, AddedAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilityHandles_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilityHandles_MetaData) }; // 4047456925
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_Inner = { "AddedAttributes", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached granted AttributeSets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached granted AttributeSets" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes = { "AddedAttributes", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, AddedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_Inner = { "AddedEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached applied Startup Effects\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached applied Startup Effects" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects = { "AddedEffects", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, AddedEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_MetaData) }; // 179499981
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilitySets_Inner = { "AddedAbilitySets", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCAbilitySetHandle, METADATA_PARAMS(0, nullptr) }; // 1439990879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilitySets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached granted Ability Sets\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached granted Ability Sets" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilitySets = { "AddedAbilitySets", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, AddedAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilitySets_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilitySets_MetaData) }; // 1439990879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached ComboComponent on Character (if it has any)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached ComboComponent on Character (if it has any)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent = { "ComboComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, ComboComponent), Z_Construct_UClass_UGSCComboManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent_MetaData), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_OnInitAbilityActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilityHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilityHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilitySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAbilitySets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::ClassParams = {
		&UGSCAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UGSCAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAbilitySystemComponent.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCAbilitySystemComponent>()
	{
		return UGSCAbilitySystemComponent::StaticClass();
	}
	UGSCAbilitySystemComponent::UGSCAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAbilitySystemComponent);
	UGSCAbilitySystemComponent::~UGSCAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ScriptStructInfo[] = {
		{ FGSCAbilityInputMapping::StaticStruct, Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewStructOps, TEXT("GSCAbilityInputMapping"), &Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAbilityInputMapping), 815589548U) },
		{ FGSCAttributeSetDefinition::StaticStruct, Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewStructOps, TEXT("GSCAttributeSetDefinition"), &Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAttributeSetDefinition), 158410055U) },
		{ FGSCMappedAbility::StaticStruct, Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewStructOps, TEXT("GSCMappedAbility"), &Z_Registration_Info_UScriptStruct_GSCMappedAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCMappedAbility), 4047456925U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAbilitySystemComponent, UGSCAbilitySystemComponent::StaticClass, TEXT("UGSCAbilitySystemComponent"), &Z_Registration_Info_UClass_UGSCAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAbilitySystemComponent), 2768617517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_1609388696(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
