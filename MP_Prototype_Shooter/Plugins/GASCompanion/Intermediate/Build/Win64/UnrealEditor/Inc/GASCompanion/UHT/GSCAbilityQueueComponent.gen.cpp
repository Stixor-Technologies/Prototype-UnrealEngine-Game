// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Components/GSCAbilityQueueComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAbilityQueueComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilityQueueComponent();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilityQueueComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCAbilityQueueComponent::StaticRegisterNativesUGSCAbilityQueueComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAbilityQueueComponent);
	UClass* Z_Construct_UClass_UGSCAbilityQueueComponent_NoRegister()
	{
		return UGSCAbilityQueueComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAbilityQueueComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbilityQueueEnabled_MetaData[];
#endif
		static void NewProp_bAbilityQueueEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbilityQueueEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedAbility_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueuedAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "GASCompanion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor Component responsible for Ability Queueing.\n *\n * Note that with current implementation, ability activation must be manually handled in BP. Ability Queueing won't work\n * for abilities bound by input with GSCAbilityInputBinding.\n */" },
#endif
		{ "IncludePath", "Components/GSCAbilityQueueComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityQueueComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor Component responsible for Ability Queueing.\n\nNote that with current implementation, ability activation must be manually handled in BP. Ability Queueing won't work\nfor abilities bound by input with GSCAbilityInputBinding." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerPawn_MetaData[] = {
		{ "Category", "GAS Companion|Components" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityQueueComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityQueueComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerPawn_MetaData), Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData[] = {
		{ "Category", "GAS Companion|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityQueueComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent = { "OwnerAbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityQueueComponent, OwnerAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData), Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_MetaData[] = {
		{ "Category", "GAS Companion|Ability Queue System" },
		{ "ModuleRelativePath", "Public/Components/GSCAbilityQueueComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_SetBit(void* Obj)
	{
		((UGSCAbilityQueueComponent*)Obj)->bAbilityQueueEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled = { "bAbilityQueueEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCAbilityQueueComponent), &Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_MetaData), Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_QueuedAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/GSCAbilityQueueComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_QueuedAbility = { "QueuedAbility", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityQueueComponent, QueuedAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_QueuedAbility_MetaData), Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_QueuedAbility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::NewProp_QueuedAbility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAbilityQueueComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::ClassParams = {
		&UGSCAbilityQueueComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCAbilityQueueComponent()
	{
		if (!Z_Registration_Info_UClass_UGSCAbilityQueueComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAbilityQueueComponent.OuterSingleton, Z_Construct_UClass_UGSCAbilityQueueComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAbilityQueueComponent.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCAbilityQueueComponent>()
	{
		return UGSCAbilityQueueComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAbilityQueueComponent);
	UGSCAbilityQueueComponent::~UGSCAbilityQueueComponent() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityQueueComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityQueueComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAbilityQueueComponent, UGSCAbilityQueueComponent::StaticClass, TEXT("UGSCAbilityQueueComponent"), &Z_Registration_Info_UClass_UGSCAbilityQueueComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAbilityQueueComponent), 3697461686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityQueueComponent_h_506398868(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityQueueComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityQueueComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
