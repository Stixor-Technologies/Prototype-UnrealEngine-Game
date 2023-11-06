// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Components/GSCPlayerControlsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCPlayerControlsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCPlayerControlsComponent();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCPlayerControlsComponent_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	DEFINE_FUNCTION(UGSCPlayerControlsComponent::execOnControllerChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(AController,Z_Param_OldController);
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControllerChanged(Z_Param_Pawn,Z_Param_OldController,Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCPlayerControlsComponent::execOnPawnRestarted)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnRestarted(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCPlayerControlsComponent::execTeardownPlayerControls)
	{
		P_GET_OBJECT(UEnhancedInputComponent,Z_Param_PlayerInputComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeardownPlayerControls_Implementation(Z_Param_PlayerInputComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCPlayerControlsComponent::execSetupPlayerControls)
	{
		P_GET_OBJECT(UEnhancedInputComponent,Z_Param_PlayerInputComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPlayerControls_Implementation(Z_Param_PlayerInputComponent);
		P_NATIVE_END;
	}
	struct GSCPlayerControlsComponent_eventSetupPlayerControls_Parms
	{
		UEnhancedInputComponent* PlayerInputComponent;
	};
	struct GSCPlayerControlsComponent_eventTeardownPlayerControls_Parms
	{
		UEnhancedInputComponent* PlayerInputComponent;
	};
	static FName NAME_UGSCPlayerControlsComponent_SetupPlayerControls = FName(TEXT("SetupPlayerControls"));
	void UGSCPlayerControlsComponent::SetupPlayerControls(UEnhancedInputComponent* PlayerInputComponent)
	{
		GSCPlayerControlsComponent_eventSetupPlayerControls_Parms Parms;
		Parms.PlayerInputComponent=PlayerInputComponent;
		ProcessEvent(FindFunctionChecked(NAME_UGSCPlayerControlsComponent_SetupPlayerControls),&Parms);
	}
	static FName NAME_UGSCPlayerControlsComponent_TeardownPlayerControls = FName(TEXT("TeardownPlayerControls"));
	void UGSCPlayerControlsComponent::TeardownPlayerControls(UEnhancedInputComponent* PlayerInputComponent)
	{
		GSCPlayerControlsComponent_eventTeardownPlayerControls_Parms Parms;
		Parms.PlayerInputComponent=PlayerInputComponent;
		ProcessEvent(FindFunctionChecked(NAME_UGSCPlayerControlsComponent_TeardownPlayerControls),&Parms);
	}
	void UGSCPlayerControlsComponent::StaticRegisterNativesUGSCPlayerControlsComponent()
	{
		UClass* Class = UGSCPlayerControlsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnControllerChanged", &UGSCPlayerControlsComponent::execOnControllerChanged },
			{ "OnPawnRestarted", &UGSCPlayerControlsComponent::execOnPawnRestarted },
			{ "SetupPlayerControls", &UGSCPlayerControlsComponent::execSetupPlayerControls },
			{ "TeardownPlayerControls", &UGSCPlayerControlsComponent::execTeardownPlayerControls },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics
	{
		struct GSCPlayerControlsComponent_eventOnControllerChanged_Parms
		{
			APawn* Pawn;
			AController* OldController;
			AController* NewController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCPlayerControlsComponent_eventOnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCPlayerControlsComponent_eventOnControllerChanged_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCPlayerControlsComponent_eventOnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::NewProp_OldController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when pawn restarts, bound to dynamic delegate */" },
		{ "ModuleRelativePath", "Public/Components/GSCPlayerControlsComponent.h" },
		{ "ToolTip", "Called when pawn restarts, bound to dynamic delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCPlayerControlsComponent, nullptr, "OnControllerChanged", nullptr, nullptr, Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::GSCPlayerControlsComponent_eventOnControllerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::GSCPlayerControlsComponent_eventOnControllerChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics
	{
		struct GSCPlayerControlsComponent_eventOnPawnRestarted_Parms
		{
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCPlayerControlsComponent_eventOnPawnRestarted_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when pawn restarts, bound to dynamic delegate */" },
		{ "ModuleRelativePath", "Public/Components/GSCPlayerControlsComponent.h" },
		{ "ToolTip", "Called when pawn restarts, bound to dynamic delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCPlayerControlsComponent, nullptr, "OnPawnRestarted", nullptr, nullptr, Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::GSCPlayerControlsComponent_eventOnPawnRestarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::GSCPlayerControlsComponent_eventOnPawnRestarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::NewProp_PlayerInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::NewProp_PlayerInputComponent = { "PlayerInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCPlayerControlsComponent_eventSetupPlayerControls_Parms, PlayerInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::NewProp_PlayerInputComponent_MetaData), Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::NewProp_PlayerInputComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::NewProp_PlayerInputComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Controls" },
		{ "Comment", "/** Native/BP Event to set up player controls */" },
		{ "ModuleRelativePath", "Public/Components/GSCPlayerControlsComponent.h" },
		{ "ToolTip", "Native/BP Event to set up player controls" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCPlayerControlsComponent, nullptr, "SetupPlayerControls", nullptr, nullptr, Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::PropPointers), sizeof(GSCPlayerControlsComponent_eventSetupPlayerControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCPlayerControlsComponent_eventSetupPlayerControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::NewProp_PlayerInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::NewProp_PlayerInputComponent = { "PlayerInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSCPlayerControlsComponent_eventTeardownPlayerControls_Parms, PlayerInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::NewProp_PlayerInputComponent_MetaData), Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::NewProp_PlayerInputComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::NewProp_PlayerInputComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Controls" },
		{ "Comment", "/** Native/BP Event to undo control setup */" },
		{ "ModuleRelativePath", "Public/Components/GSCPlayerControlsComponent.h" },
		{ "ToolTip", "Native/BP Event to undo control setup" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCPlayerControlsComponent, nullptr, "TeardownPlayerControls", nullptr, nullptr, Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::PropPointers), sizeof(GSCPlayerControlsComponent_eventTeardownPlayerControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSCPlayerControlsComponent_eventTeardownPlayerControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCPlayerControlsComponent);
	UClass* Z_Construct_UClass_UGSCPlayerControlsComponent_NoRegister()
	{
		return UGSCPlayerControlsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGSCPlayerControlsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCPlayerControlsComponent_OnControllerChanged, "OnControllerChanged" }, // 1209641107
		{ &Z_Construct_UFunction_UGSCPlayerControlsComponent_OnPawnRestarted, "OnPawnRestarted" }, // 3706850355
		{ &Z_Construct_UFunction_UGSCPlayerControlsComponent_SetupPlayerControls, "SetupPlayerControls" }, // 2062821076
		{ &Z_Construct_UFunction_UGSCPlayerControlsComponent_TeardownPlayerControls, "TeardownPlayerControls" }, // 3565930300
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::Class_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ClassGroupNames", "GASCompanion" },
		{ "Comment", "/**\n * Modular pawn component for adding input actions and an optional input mapping to a pawn\n *\n * If your Pawn is dealing with Abilities, use GSCAbilityInputBindingComponent instead.\n *\n * Not meant to be added in Blueprints but rather use as a base class (parent of GSCAbilityInputBindingComponent)\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/GSCPlayerControlsComponent.h" },
		{ "ModuleRelativePath", "Public/Components/GSCPlayerControlsComponent.h" },
		{ "ToolTip", "Modular pawn component for adding input actions and an optional input mapping to a pawn\n\nIf your Pawn is dealing with Abilities, use GSCAbilityInputBindingComponent instead.\n\nNot meant to be added in Blueprints but rather use as a base class (parent of GSCAbilityInputBindingComponent)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Player Controls" },
		{ "Comment", "/** Input mapping to add to the input system */" },
		{ "ModuleRelativePath", "Public/Components/GSCPlayerControlsComponent.h" },
		{ "ToolTip", "Input mapping to add to the input system" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCPlayerControlsComponent, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputPriority_MetaData[] = {
		{ "Category", "Player Controls" },
		{ "Comment", "/** Priority to bind mapping context with */" },
		{ "ModuleRelativePath", "Public/Components/GSCPlayerControlsComponent.h" },
		{ "ToolTip", "Priority to bind mapping context with" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputPriority = { "InputPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCPlayerControlsComponent, InputPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputPriority_MetaData), Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputPriority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputComponent_MetaData[] = {
		{ "Comment", "/** The bound input component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCPlayerControlsComponent.h" },
		{ "ToolTip", "The bound input component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCPlayerControlsComponent, InputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputComponent_MetaData), Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::NewProp_InputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCPlayerControlsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::ClassParams = {
		&UGSCPlayerControlsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCPlayerControlsComponent()
	{
		if (!Z_Registration_Info_UClass_UGSCPlayerControlsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCPlayerControlsComponent.OuterSingleton, Z_Construct_UClass_UGSCPlayerControlsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCPlayerControlsComponent.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCPlayerControlsComponent>()
	{
		return UGSCPlayerControlsComponent::StaticClass();
	}
	UGSCPlayerControlsComponent::UGSCPlayerControlsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCPlayerControlsComponent);
	UGSCPlayerControlsComponent::~UGSCPlayerControlsComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCPlayerControlsComponent, UGSCPlayerControlsComponent::StaticClass, TEXT("UGSCPlayerControlsComponent"), &Z_Registration_Info_UClass_UGSCPlayerControlsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCPlayerControlsComponent), 702142911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_3627211664(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
