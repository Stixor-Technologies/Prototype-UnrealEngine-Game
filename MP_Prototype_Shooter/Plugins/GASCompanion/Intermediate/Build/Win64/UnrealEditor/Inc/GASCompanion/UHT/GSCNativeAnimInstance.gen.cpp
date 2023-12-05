// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Animations/GSCNativeAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCNativeAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCNativeAnimInstance();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCNativeAnimInstance_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCNativeAnimInstanceInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCNativeAnimInstance::StaticRegisterNativesUGSCNativeAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCNativeAnimInstance);
	UClass* Z_Construct_UClass_UGSCNativeAnimInstance_NoRegister()
	{
		return UGSCNativeAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGSCNativeAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCNativeAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCNativeAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCNativeAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Anim instance implementing IGSCNativeAnimInstanceInterface to allow Gameplay Tag Blueprint Property Mapping.\n *\n * The interface has only one overridable method `InitializeWithAbilitySystem()` that must be implemented in subclasses.\n * \n * GSCAbilitySystemComponent will call this method via an interface call when InitAbilityActorInfo happens.\n *\n * The same pattern is used in both Lyra and the Ancient Demo, only difference here is that we rely on an interface to be able to operate better with other plugins / assets.\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/GSCNativeAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animations/GSCNativeAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim instance implementing IGSCNativeAnimInstanceInterface to allow Gameplay Tag Blueprint Property Mapping.\n\nThe interface has only one overridable method `InitializeWithAbilitySystem()` that must be implemented in subclasses.\n\nGSCAbilitySystemComponent will call this method via an interface call when InitAbilityActorInfo happens.\n\nThe same pattern is used in both Lyra and the Ancient Demo, only difference here is that we rely on an interface to be able to operate better with other plugins / assets." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCNativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GAS Companion|GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\n\x09 * \n\x09 * These should be used instead of manually querying for the gameplay tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Animations/GSCNativeAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\n\nThese should be used instead of manually querying for the gameplay tags." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCNativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCNativeAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCNativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap_MetaData), Z_Construct_UClass_UGSCNativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap_MetaData) }; // 1149265390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCNativeAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCNativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGSCNativeAnimInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGSCNativeAnimInstanceInterface_NoRegister, (int32)VTABLE_OFFSET(UGSCNativeAnimInstance, IGSCNativeAnimInstanceInterface), false },  // 3804586011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCNativeAnimInstance_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCNativeAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCNativeAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCNativeAnimInstance_Statics::ClassParams = {
		&UGSCNativeAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCNativeAnimInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCNativeAnimInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCNativeAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCNativeAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCNativeAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCNativeAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UGSCNativeAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCNativeAnimInstance.OuterSingleton, Z_Construct_UClass_UGSCNativeAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCNativeAnimInstance.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCNativeAnimInstance>()
	{
		return UGSCNativeAnimInstance::StaticClass();
	}
	UGSCNativeAnimInstance::UGSCNativeAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCNativeAnimInstance);
	UGSCNativeAnimInstance::~UGSCNativeAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCNativeAnimInstance, UGSCNativeAnimInstance::StaticClass, TEXT("UGSCNativeAnimInstance"), &Z_Registration_Info_UClass_UGSCNativeAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCNativeAnimInstance), 3062661824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstance_h_4132096993(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
