// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/UI/GSCUWHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCUWHud() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCUserWidget();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCUWHud();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCUWHud_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	DEFINE_FUNCTION(UGSCUWHud::execSetManaPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ManaPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManaPercentage(Z_Param_ManaPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUWHud::execSetMana)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Mana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMana(Z_Param_Mana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUWHud::execSetMaxMana)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxMana(Z_Param_MaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUWHud::execSetStaminaPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StaminaPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaminaPercentage(Z_Param_StaminaPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUWHud::execSetStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStamina(Z_Param_Stamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUWHud::execSetMaxStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxStamina(Z_Param_MaxStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUWHud::execSetHealthPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealthPercentage(Z_Param_HealthPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUWHud::execSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_Health);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUWHud::execSetMaxHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxHealth(Z_Param_MaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCUWHud::execInitFromCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitFromCharacter();
		P_NATIVE_END;
	}
	void UGSCUWHud::StaticRegisterNativesUGSCUWHud()
	{
		UClass* Class = UGSCUWHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitFromCharacter", &UGSCUWHud::execInitFromCharacter },
			{ "SetHealth", &UGSCUWHud::execSetHealth },
			{ "SetHealthPercentage", &UGSCUWHud::execSetHealthPercentage },
			{ "SetMana", &UGSCUWHud::execSetMana },
			{ "SetManaPercentage", &UGSCUWHud::execSetManaPercentage },
			{ "SetMaxHealth", &UGSCUWHud::execSetMaxHealth },
			{ "SetMaxMana", &UGSCUWHud::execSetMaxMana },
			{ "SetMaxStamina", &UGSCUWHud::execSetMaxStamina },
			{ "SetStamina", &UGSCUWHud::execSetStamina },
			{ "SetStaminaPercentage", &UGSCUWHud::execSetStaminaPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCUWHud_InitFromCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_InitFromCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Init widget with attributes from owner character **/" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Init widget with attributes from owner character *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_InitFromCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "InitFromCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_InitFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_InitFromCharacter_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSCUWHud_InitFromCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_InitFromCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics
	{
		struct GSCUWHud_eventSetHealth_Parms
		{
			float Health;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUWHud_eventSetHealth_Parms, Health), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Updates bound health widgets to reflect the new health change */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Updates bound health widgets to reflect the new health change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::GSCUWHud_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::GSCUWHud_eventSetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUWHud_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics
	{
		struct GSCUWHud_eventSetHealthPercentage_Parms
		{
			float HealthPercentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUWHud_eventSetHealthPercentage_Parms, HealthPercentage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::NewProp_HealthPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Updates bound stamina progress bar with the new percent */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Updates bound stamina progress bar with the new percent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "SetHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::GSCUWHud_eventSetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::GSCUWHud_eventSetHealthPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUWHud_SetMana_Statics
	{
		struct GSCUWHud_eventSetMana_Parms
		{
			float Mana;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUWHud_eventSetMana_Parms, Mana), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::NewProp_Mana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Updates bound mana widgets to reflect the new mana change */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Updates bound mana widgets to reflect the new mana change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "SetMana", nullptr, nullptr, Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::GSCUWHud_eventSetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::GSCUWHud_eventSetMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUWHud_SetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_SetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics
	{
		struct GSCUWHud_eventSetManaPercentage_Parms
		{
			float ManaPercentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::NewProp_ManaPercentage = { "ManaPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUWHud_eventSetManaPercentage_Parms, ManaPercentage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::NewProp_ManaPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Updates bound mana progress bar with the new percent */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Updates bound mana progress bar with the new percent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "SetManaPercentage", nullptr, nullptr, Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::GSCUWHud_eventSetManaPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::GSCUWHud_eventSetManaPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUWHud_SetManaPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_SetManaPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics
	{
		struct GSCUWHud_eventSetMaxHealth_Parms
		{
			float MaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUWHud_eventSetMaxHealth_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::NewProp_MaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Updates bound health widgets to reflect the new max health change */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Updates bound health widgets to reflect the new max health change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "SetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::GSCUWHud_eventSetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::GSCUWHud_eventSetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUWHud_SetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_SetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics
	{
		struct GSCUWHud_eventSetMaxMana_Parms
		{
			float MaxMana;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUWHud_eventSetMaxMana_Parms, MaxMana), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::NewProp_MaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Updates bound mana widgets to reflect the new max mana change */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Updates bound mana widgets to reflect the new max mana change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "SetMaxMana", nullptr, nullptr, Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::GSCUWHud_eventSetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::GSCUWHud_eventSetMaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUWHud_SetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_SetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics
	{
		struct GSCUWHud_eventSetMaxStamina_Parms
		{
			float MaxStamina;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUWHud_eventSetMaxStamina_Parms, MaxStamina), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::NewProp_MaxStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Updates bound stamina widgets to reflect the new max stamina change */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Updates bound stamina widgets to reflect the new max stamina change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "SetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::GSCUWHud_eventSetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::GSCUWHud_eventSetMaxStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUWHud_SetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_SetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics
	{
		struct GSCUWHud_eventSetStamina_Parms
		{
			float Stamina;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUWHud_eventSetStamina_Parms, Stamina), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::NewProp_Stamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Updates bound stamina widgets to reflect the new stamina change */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Updates bound stamina widgets to reflect the new stamina change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "SetStamina", nullptr, nullptr, Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::GSCUWHud_eventSetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::GSCUWHud_eventSetStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUWHud_SetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_SetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics
	{
		struct GSCUWHud_eventSetStaminaPercentage_Parms
		{
			float StaminaPercentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::NewProp_StaminaPercentage = { "StaminaPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCUWHud_eventSetStaminaPercentage_Parms, StaminaPercentage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::NewProp_StaminaPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/** Updates bound health progress bar with the new percent */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Updates bound health progress bar with the new percent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCUWHud, nullptr, "SetStaminaPercentage", nullptr, nullptr, Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::GSCUWHud_eventSetStaminaPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::GSCUWHud_eventSetStaminaPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCUWHud);
	UClass* Z_Construct_UClass_UGSCUWHud_NoRegister()
	{
		return UGSCUWHud::StaticClass();
	}
	struct Z_Construct_UClass_UGSCUWHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HealthText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HealthProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaminaText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaminaProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ManaText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ManaProgressBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCUWHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGSCUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCUWHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCUWHud_InitFromCharacter, "InitFromCharacter" }, // 3010736627
		{ &Z_Construct_UFunction_UGSCUWHud_SetHealth, "SetHealth" }, // 1598618974
		{ &Z_Construct_UFunction_UGSCUWHud_SetHealthPercentage, "SetHealthPercentage" }, // 3094359342
		{ &Z_Construct_UFunction_UGSCUWHud_SetMana, "SetMana" }, // 2258825470
		{ &Z_Construct_UFunction_UGSCUWHud_SetManaPercentage, "SetManaPercentage" }, // 3122284297
		{ &Z_Construct_UFunction_UGSCUWHud_SetMaxHealth, "SetMaxHealth" }, // 2951836892
		{ &Z_Construct_UFunction_UGSCUWHud_SetMaxMana, "SetMaxMana" }, // 1296014748
		{ &Z_Construct_UFunction_UGSCUWHud_SetMaxStamina, "SetMaxStamina" }, // 1694114667
		{ &Z_Construct_UFunction_UGSCUWHud_SetStamina, "SetStamina" }, // 3065092191
		{ &Z_Construct_UFunction_UGSCUWHud_SetStaminaPercentage, "SetStaminaPercentage" }, // 125535135
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWHud_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base user widget class to inherit from for UMG that needs to interact with an Ability System Component.\n *\n * Suitable to use for typical case of Player HUD. Initialization happens automatically on NativeConstruct by setting up\n * owner actor based on Owning Player controller (when Widget is created from Blueprint, the Owning Player pin)\n *\n * If you'd like to use a user widget with a Widget Component, use UGSCUserWidget instead and manually invoke InitializeWithAbilitySystem().\n *\n * The other main difference with UGSCUserWidget is that this class also defines widget optional binding for\n * Health / Stamina / Mana attributes from UGSCAttributeSet.\n */" },
		{ "IncludePath", "UI/GSCUWHud.h" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
		{ "ToolTip", "Base user widget class to inherit from for UMG that needs to interact with an Ability System Component.\n\nSuitable to use for typical case of Player HUD. Initialization happens automatically on NativeConstruct by setting up\nowner actor based on Owning Player controller (when Widget is created from Blueprint, the Owning Player pin)\n\nIf you'd like to use a user widget with a Widget Component, use UGSCUserWidget instead and manually invoke InitializeWithAbilitySystem().\n\nThe other main difference with UGSCUserWidget is that this class also defines widget optional binding for\nHealth / Stamina / Mana attributes from UGSCAttributeSet." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWHud, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthText_MetaData), Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWHud, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthProgressBar_MetaData), Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthProgressBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaText = { "StaminaText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWHud, StaminaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaText_MetaData), Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaProgressBar = { "StaminaProgressBar", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWHud, StaminaProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaProgressBar_MetaData), Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaProgressBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaText = { "ManaText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWHud, ManaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaText_MetaData), Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaProgressBar = { "ManaProgressBar", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWHud, ManaProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaProgressBar_MetaData), Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaProgressBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCUWHud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWHud_Statics::NewProp_HealthProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWHud_Statics::NewProp_StaminaProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWHud_Statics::NewProp_ManaProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCUWHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCUWHud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCUWHud_Statics::ClassParams = {
		&UGSCUWHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCUWHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCUWHud_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWHud_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCUWHud()
	{
		if (!Z_Registration_Info_UClass_UGSCUWHud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCUWHud.OuterSingleton, Z_Construct_UClass_UGSCUWHud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCUWHud.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCUWHud>()
	{
		return UGSCUWHud::StaticClass();
	}
	UGSCUWHud::UGSCUWHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCUWHud);
	UGSCUWHud::~UGSCUWHud() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWHud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWHud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCUWHud, UGSCUWHud::StaticClass, TEXT("UGSCUWHud"), &Z_Registration_Info_UClass_UGSCUWHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCUWHud), 2931900557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWHud_h_3340516704(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWHud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
