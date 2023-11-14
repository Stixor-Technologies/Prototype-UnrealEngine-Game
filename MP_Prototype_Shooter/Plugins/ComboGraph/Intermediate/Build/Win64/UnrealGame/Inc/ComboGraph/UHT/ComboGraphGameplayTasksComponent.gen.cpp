// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Components/ComboGraphGameplayTasksComponent.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphGameplayTasksComponent() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphGameplayTasksComponent();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphGameplayTasksComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	DEFINE_FUNCTION(UComboGraphGameplayTasksComponent::execServerSendGameplayEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSendGameplayEvent_Implementation(Z_Param_EventTag,Z_Param_Payload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphGameplayTasksComponent::execSendGameplayEventReplicated)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
		P_GET_UBOOL(Z_Param_bSendOnlyOnAuthority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendGameplayEventReplicated(Z_Param_EventTag,Z_Param_Payload,Z_Param_bSendOnlyOnAuthority);
		P_NATIVE_END;
	}
	struct ComboGraphGameplayTasksComponent_eventServerSendGameplayEvent_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData Payload;
	};
	static FName NAME_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent = FName(TEXT("ServerSendGameplayEvent"));
	void UComboGraphGameplayTasksComponent::ServerSendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload)
	{
		ComboGraphGameplayTasksComponent_eventServerSendGameplayEvent_Parms Parms;
		Parms.EventTag=EventTag;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent),&Parms);
	}
	void UComboGraphGameplayTasksComponent::StaticRegisterNativesUComboGraphGameplayTasksComponent()
	{
		UClass* Class = UComboGraphGameplayTasksComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendGameplayEventReplicated", &UComboGraphGameplayTasksComponent::execSendGameplayEventReplicated },
			{ "ServerSendGameplayEvent", &UComboGraphGameplayTasksComponent::execServerSendGameplayEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics
	{
		struct ComboGraphGameplayTasksComponent_eventSendGameplayEventReplicated_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData Payload;
			bool bSendOnlyOnAuthority;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static void NewProp_bSendOnlyOnAuthority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendOnlyOnAuthority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphGameplayTasksComponent_eventSendGameplayEventReplicated_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphGameplayTasksComponent_eventSendGameplayEventReplicated_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	void Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::NewProp_bSendOnlyOnAuthority_SetBit(void* Obj)
	{
		((ComboGraphGameplayTasksComponent_eventSendGameplayEventReplicated_Parms*)Obj)->bSendOnlyOnAuthority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::NewProp_bSendOnlyOnAuthority = { "bSendOnlyOnAuthority", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboGraphGameplayTasksComponent_eventSendGameplayEventReplicated_Parms), &Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::NewProp_bSendOnlyOnAuthority_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::NewProp_bSendOnlyOnAuthority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TaskOwner, bSendOnlyOnAuthority" },
		{ "Category", "Ability | Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This function is functionally the same as SendGameplayEventToActor (from Ability System Blueprint Library),\n\x09 * except it can be used to also replicate the event on server.\n\x09 *\n\x09 * @param EventTag Gameplay Tag to use for the Event\n\x09 * @param Payload Gameplay Event Data to send along the event\n\x09 * @param bSendOnlyOnAuthority Whether to send the event only on server or on both server and local client\n\x09 */" },
#endif
		{ "CPP_Default_bSendOnlyOnAuthority", "false" },
		{ "DisplayName", "SendGameplayEventToActor (Replicated)" },
		{ "ModuleRelativePath", "Public/Components/ComboGraphGameplayTasksComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is functionally the same as SendGameplayEventToActor (from Ability System Blueprint Library),\nexcept it can be used to also replicate the event on server.\n\n@param EventTag Gameplay Tag to use for the Event\n@param Payload Gameplay Event Data to send along the event\n@param bSendOnlyOnAuthority Whether to send the event only on server or on both server and local client" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphGameplayTasksComponent, nullptr, "SendGameplayEventReplicated", nullptr, nullptr, Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::ComboGraphGameplayTasksComponent_eventSendGameplayEventReplicated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::ComboGraphGameplayTasksComponent_eventSendGameplayEventReplicated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphGameplayTasksComponent_eventServerSendGameplayEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphGameplayTasksComponent_eventServerSendGameplayEvent_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboGraphGameplayTasksComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphGameplayTasksComponent, nullptr, "ServerSendGameplayEvent", nullptr, nullptr, Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::PropPointers), sizeof(ComboGraphGameplayTasksComponent_eventServerSendGameplayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(ComboGraphGameplayTasksComponent_eventServerSendGameplayEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphGameplayTasksComponent);
	UClass* Z_Construct_UClass_UComboGraphGameplayTasksComponent_NoRegister()
	{
		return UComboGraphGameplayTasksComponent::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTasksComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphGameplayTasksComponent_SendGameplayEventReplicated, "SendGameplayEventReplicated" }, // 602393520
		{ &Z_Construct_UFunction_UComboGraphGameplayTasksComponent_ServerSendGameplayEvent, "ServerSendGameplayEvent" }, // 3871888360
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Internal helper actor component spawned from Combo Graph task mainly to handle sending replicated gameplay event\n * to transition from a node to another on input press.\n *\n * This component shouldn't be Blueprintable nor BlueprintSpawnableComponent, child class can however.\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Components/ComboGraphGameplayTasksComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ComboGraphGameplayTasksComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal helper actor component spawned from Combo Graph task mainly to handle sending replicated gameplay event\nto transition from a node to another on input press.\n\nThis component shouldn't be Blueprintable nor BlueprintSpawnableComponent, child class can however." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphGameplayTasksComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::ClassParams = {
		&UComboGraphGameplayTasksComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphGameplayTasksComponent()
	{
		if (!Z_Registration_Info_UClass_UComboGraphGameplayTasksComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphGameplayTasksComponent.OuterSingleton, Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphGameplayTasksComponent.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphGameplayTasksComponent>()
	{
		return UComboGraphGameplayTasksComponent::StaticClass();
	}
	UComboGraphGameplayTasksComponent::UComboGraphGameplayTasksComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphGameplayTasksComponent);
	UComboGraphGameplayTasksComponent::~UComboGraphGameplayTasksComponent() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphGameplayTasksComponent, UComboGraphGameplayTasksComponent::StaticClass, TEXT("UComboGraphGameplayTasksComponent"), &Z_Registration_Info_UClass_UComboGraphGameplayTasksComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphGameplayTasksComponent), 3425868136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_2514615605(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
