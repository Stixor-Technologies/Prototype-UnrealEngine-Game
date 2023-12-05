// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Components/GSCComboManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCComboManagerComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCComboManagerComponent();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCComboManagerComponent_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCCoreComponent_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	DEFINE_FUNCTION(UGSCComboManagerComponent::execMulticastSetComboIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InComboIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetComboIndex_Implementation(Z_Param_InComboIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCComboManagerComponent::execServerSetComboIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InComboIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetComboIndex_Implementation(Z_Param_InComboIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCComboManagerComponent::execMulticastActivateComboAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastActivateComboAbility_Implementation(Z_Param_AbilityClass,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCComboManagerComponent::execServerActivateComboAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerActivateComboAbility_Implementation(Z_Param_AbilityClass,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCComboManagerComponent::execActivateComboAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateComboAbility(Z_Param_AbilityClass,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCComboManagerComponent::execResetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCComboManagerComponent::execIncrementCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementCombo();
		P_NATIVE_END;
	}
	struct GSCComboManagerComponent_eventMulticastActivateComboAbility_Parms
	{
		TSubclassOf<UGSCGameplayAbility>  AbilityClass;
		bool bAllowRemoteActivation;
	};
	struct GSCComboManagerComponent_eventMulticastSetComboIndex_Parms
	{
		int32 InComboIndex;
	};
	struct GSCComboManagerComponent_eventServerActivateComboAbility_Parms
	{
		TSubclassOf<UGSCGameplayAbility>  AbilityClass;
		bool bAllowRemoteActivation;
	};
	struct GSCComboManagerComponent_eventServerSetComboIndex_Parms
	{
		int32 InComboIndex;
	};
	static FName NAME_UGSCComboManagerComponent_MulticastActivateComboAbility = FName(TEXT("MulticastActivateComboAbility"));
	void UGSCComboManagerComponent::MulticastActivateComboAbility(TSubclassOf<UGSCGameplayAbility>  AbilityClass, bool bAllowRemoteActivation)
	{
		GSCComboManagerComponent_eventMulticastActivateComboAbility_Parms Parms;
		Parms.AbilityClass=AbilityClass;
		Parms.bAllowRemoteActivation=bAllowRemoteActivation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGSCComboManagerComponent_MulticastActivateComboAbility),&Parms);
	}
	static FName NAME_UGSCComboManagerComponent_MulticastSetComboIndex = FName(TEXT("MulticastSetComboIndex"));
	void UGSCComboManagerComponent::MulticastSetComboIndex(int32 InComboIndex)
	{
		GSCComboManagerComponent_eventMulticastSetComboIndex_Parms Parms;
		Parms.InComboIndex=InComboIndex;
		ProcessEvent(FindFunctionChecked(NAME_UGSCComboManagerComponent_MulticastSetComboIndex),&Parms);
	}
	static FName NAME_UGSCComboManagerComponent_ServerActivateComboAbility = FName(TEXT("ServerActivateComboAbility"));
	void UGSCComboManagerComponent::ServerActivateComboAbility(TSubclassOf<UGSCGameplayAbility>  AbilityClass, bool bAllowRemoteActivation)
	{
		GSCComboManagerComponent_eventServerActivateComboAbility_Parms Parms;
		Parms.AbilityClass=AbilityClass;
		Parms.bAllowRemoteActivation=bAllowRemoteActivation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGSCComboManagerComponent_ServerActivateComboAbility),&Parms);
	}
	static FName NAME_UGSCComboManagerComponent_ServerSetComboIndex = FName(TEXT("ServerSetComboIndex"));
	void UGSCComboManagerComponent::ServerSetComboIndex(int32 InComboIndex)
	{
		GSCComboManagerComponent_eventServerSetComboIndex_Parms Parms;
		Parms.InComboIndex=InComboIndex;
		ProcessEvent(FindFunctionChecked(NAME_UGSCComboManagerComponent_ServerSetComboIndex),&Parms);
	}
	void UGSCComboManagerComponent::StaticRegisterNativesUGSCComboManagerComponent()
	{
		UClass* Class = UGSCComboManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateComboAbility", &UGSCComboManagerComponent::execActivateComboAbility },
			{ "IncrementCombo", &UGSCComboManagerComponent::execIncrementCombo },
			{ "MulticastActivateComboAbility", &UGSCComboManagerComponent::execMulticastActivateComboAbility },
			{ "MulticastSetComboIndex", &UGSCComboManagerComponent::execMulticastSetComboIndex },
			{ "ResetCombo", &UGSCComboManagerComponent::execResetCombo },
			{ "ServerActivateComboAbility", &UGSCComboManagerComponent::execServerActivateComboAbility },
			{ "ServerSetComboIndex", &UGSCComboManagerComponent::execServerSetComboIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics
	{
		struct GSCComboManagerComponent_eventActivateComboAbility_Parms
		{
			TSubclassOf<UGSCGameplayAbility>  AbilityClass;
			bool bAllowRemoteActivation;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCComboManagerComponent_eventActivateComboAbility_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGSCGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((GSCComboManagerComponent_eventActivateComboAbility_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCComboManagerComponent_eventActivateComboAbility_Parms), &Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Part of the combo system, gate combo ability activation based on if character is already using the ability */" },
#endif
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Part of the combo system, gate combo ability activation based on if character is already using the ability" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCComboManagerComponent, nullptr, "ActivateComboAbility", nullptr, nullptr, Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::GSCComboManagerComponent_eventActivateComboAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::GSCComboManagerComponent_eventActivateComboAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCComboManagerComponent_IncrementCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCComboManagerComponent_IncrementCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Part of the combo system, will increment the ComboIndex counter, only if the combo window has been opened */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Part of the combo system, will increment the ComboIndex counter, only if the combo window has been opened" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCComboManagerComponent_IncrementCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCComboManagerComponent, nullptr, "IncrementCombo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_IncrementCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCComboManagerComponent_IncrementCombo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSCComboManagerComponent_IncrementCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCComboManagerComponent_IncrementCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCComboManagerComponent_eventMulticastActivateComboAbility_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGSCGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((GSCComboManagerComponent_eventMulticastActivateComboAbility_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCComboManagerComponent_eventMulticastActivateComboAbility_Parms), &Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::NewProp_bAllowRemoteActivation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCComboManagerComponent, nullptr, "MulticastActivateComboAbility", nullptr, nullptr, Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::PropPointers), sizeof(GSCComboManagerComponent_eventMulticastActivateComboAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCComboManagerComponent_eventMulticastActivateComboAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InComboIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::NewProp_InComboIndex = { "InComboIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCComboManagerComponent_eventMulticastSetComboIndex_Parms, InComboIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::NewProp_InComboIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCComboManagerComponent, nullptr, "MulticastSetComboIndex", nullptr, nullptr, Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::PropPointers), sizeof(GSCComboManagerComponent_eventMulticastSetComboIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCComboManagerComponent_eventMulticastSetComboIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCComboManagerComponent_ResetCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCComboManagerComponent_ResetCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Part of the combo system, will reset the ComboIndex counter to 0 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Part of the combo system, will reset the ComboIndex counter to 0" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCComboManagerComponent_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCComboManagerComponent, nullptr, "ResetCombo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ResetCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCComboManagerComponent_ResetCombo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSCComboManagerComponent_ResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCComboManagerComponent_ResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCComboManagerComponent_eventServerActivateComboAbility_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGSCGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((GSCComboManagerComponent_eventServerActivateComboAbility_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSCComboManagerComponent_eventServerActivateComboAbility_Parms), &Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::NewProp_bAllowRemoteActivation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~End UActorComponent interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCComboManagerComponent, nullptr, "ServerActivateComboAbility", nullptr, nullptr, Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::PropPointers), sizeof(GSCComboManagerComponent_eventServerActivateComboAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCComboManagerComponent_eventServerActivateComboAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InComboIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::NewProp_InComboIndex = { "InComboIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCComboManagerComponent_eventServerSetComboIndex_Parms, InComboIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::NewProp_InComboIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCComboManagerComponent, nullptr, "ServerSetComboIndex", nullptr, nullptr, Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::PropPointers), sizeof(GSCComboManagerComponent_eventServerSetComboIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCComboManagerComponent_eventServerSetComboIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCComboManagerComponent);
	UClass* Z_Construct_UClass_UGSCComboManagerComponent_NoRegister()
	{
		return UGSCComboManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGSCComboManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCoreComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerCoreComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComboIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComboWindowOpened_MetaData[];
#endif
		static void NewProp_bComboWindowOpened_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComboWindowOpened;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldTriggerCombo_MetaData[];
#endif
		static void NewProp_bShouldTriggerCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTriggerCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequestTriggerCombo_MetaData[];
#endif
		static void NewProp_bRequestTriggerCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestTriggerCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNextComboAbilityActivated_MetaData[];
#endif
		static void NewProp_bNextComboAbilityActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNextComboAbilityActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachedIsNetSimulated_MetaData[];
#endif
		static void NewProp_bCachedIsNetSimulated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedIsNetSimulated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCComboManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCComboManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCComboManagerComponent_ActivateComboAbility, "ActivateComboAbility" }, // 2684897121
		{ &Z_Construct_UFunction_UGSCComboManagerComponent_IncrementCombo, "IncrementCombo" }, // 775989160
		{ &Z_Construct_UFunction_UGSCComboManagerComponent_MulticastActivateComboAbility, "MulticastActivateComboAbility" }, // 4127557746
		{ &Z_Construct_UFunction_UGSCComboManagerComponent_MulticastSetComboIndex, "MulticastSetComboIndex" }, // 794084630
		{ &Z_Construct_UFunction_UGSCComboManagerComponent_ResetCombo, "ResetCombo" }, // 4249308229
		{ &Z_Construct_UFunction_UGSCComboManagerComponent_ServerActivateComboAbility, "ServerActivateComboAbility" }, // 926634506
		{ &Z_Construct_UFunction_UGSCComboManagerComponent_ServerSetComboIndex, "ServerSetComboIndex" }, // 3717431663
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "GASCompanion" },
		{ "IncludePath", "Components/GSCComboManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCComboManagerComponent, OwningCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwningCharacter_MetaData), Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwningCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwnerCoreComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwnerCoreComponent = { "OwnerCoreComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCComboManagerComponent, OwnerCoreComponent), Z_Construct_UClass_UGSCCoreComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwnerCoreComponent_MetaData), Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwnerCoreComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_ComboIndex_MetaData[] = {
		{ "Category", "GAS Companion|Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The combo index for the currently active combo */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The combo index for the currently active combo" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_ComboIndex = { "ComboIndex", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCComboManagerComponent, ComboIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_ComboIndex_MetaData), Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_ComboIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bComboWindowOpened_MetaData[] = {
		{ "Category", "GAS Companion|Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not the combo window is opened (eg. player can queue next combo within this window) */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the combo window is opened (eg. player can queue next combo within this window)" },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bComboWindowOpened_SetBit(void* Obj)
	{
		((UGSCComboManagerComponent*)Obj)->bComboWindowOpened = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bComboWindowOpened = { "bComboWindowOpened", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCComboManagerComponent), &Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bComboWindowOpened_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bComboWindowOpened_MetaData), Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bComboWindowOpened_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_MetaData[] = {
		{ "Category", "GAS Companion|Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we queue the next combo montage for the currently active combo */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we queue the next combo montage for the currently active combo" },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_SetBit(void* Obj)
	{
		((UGSCComboManagerComponent*)Obj)->bShouldTriggerCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bShouldTriggerCombo = { "bShouldTriggerCombo", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCComboManagerComponent), &Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_MetaData), Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_MetaData[] = {
		{ "Category", "GAS Companion|Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we trigger the next combo montage */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we trigger the next combo montage" },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_SetBit(void* Obj)
	{
		((UGSCComboManagerComponent*)Obj)->bRequestTriggerCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bRequestTriggerCombo = { "bRequestTriggerCombo", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCComboManagerComponent), &Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_MetaData), Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_MetaData[] = {
		{ "Category", "GAS Companion|Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we trigger the next combo montage */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we trigger the next combo montage" },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_SetBit(void* Obj)
	{
		((UGSCComboManagerComponent*)Obj)->bNextComboAbilityActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated = { "bNextComboAbilityActivated", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCComboManagerComponent), &Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_MetaData), Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bCachedIsNetSimulated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached value of rather this is a simulated actor */" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSCComboManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached value of rather this is a simulated actor" },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bCachedIsNetSimulated_SetBit(void* Obj)
	{
		((UGSCComboManagerComponent*)Obj)->bCachedIsNetSimulated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bCachedIsNetSimulated = { "bCachedIsNetSimulated", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCComboManagerComponent), &Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bCachedIsNetSimulated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bCachedIsNetSimulated_MetaData), Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bCachedIsNetSimulated_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCComboManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwningCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_OwnerCoreComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_ComboIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bComboWindowOpened,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bShouldTriggerCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bRequestTriggerCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCComboManagerComponent_Statics::NewProp_bCachedIsNetSimulated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCComboManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCComboManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCComboManagerComponent_Statics::ClassParams = {
		&UGSCComboManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCComboManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCComboManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCComboManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UGSCComboManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCComboManagerComponent.OuterSingleton, Z_Construct_UClass_UGSCComboManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCComboManagerComponent.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCComboManagerComponent>()
	{
		return UGSCComboManagerComponent::StaticClass();
	}

	void UGSCComboManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ComboIndex(TEXT("ComboIndex"));
		static const FName Name_bComboWindowOpened(TEXT("bComboWindowOpened"));
		static const FName Name_bShouldTriggerCombo(TEXT("bShouldTriggerCombo"));
		static const FName Name_bRequestTriggerCombo(TEXT("bRequestTriggerCombo"));
		static const FName Name_bNextComboAbilityActivated(TEXT("bNextComboAbilityActivated"));

		const bool bIsValid = true
			&& Name_ComboIndex == ClassReps[(int32)ENetFields_Private::ComboIndex].Property->GetFName()
			&& Name_bComboWindowOpened == ClassReps[(int32)ENetFields_Private::bComboWindowOpened].Property->GetFName()
			&& Name_bShouldTriggerCombo == ClassReps[(int32)ENetFields_Private::bShouldTriggerCombo].Property->GetFName()
			&& Name_bRequestTriggerCombo == ClassReps[(int32)ENetFields_Private::bRequestTriggerCombo].Property->GetFName()
			&& Name_bNextComboAbilityActivated == ClassReps[(int32)ENetFields_Private::bNextComboAbilityActivated].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGSCComboManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCComboManagerComponent);
	UGSCComboManagerComponent::~UGSCComboManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCComboManagerComponent, UGSCComboManagerComponent::StaticClass, TEXT("UGSCComboManagerComponent"), &Z_Registration_Info_UClass_UGSCComboManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCComboManagerComponent), 3211936428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_2048231828(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
