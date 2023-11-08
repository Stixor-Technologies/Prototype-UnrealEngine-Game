// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/ComboGraphAbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphAbilityTypes() {}
// Cross Module References
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FComboGraphGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FComboGraphGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContext;
class UScriptStruct* FComboGraphGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("ComboGraphGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContext.OuterSingleton;
}
template<> COMBOGRAPH_API UScriptStruct* StaticStruct<FComboGraphGameplayEffectContext>()
{
	return FComboGraphGameplayEffectContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CueParamsObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueParamsObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CueParamsObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CueParamsObjectsPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueParamsObjectsPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CueParamsObjectsPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComboGraphAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphGameplayEffectContext>();
	}
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjects_Inner = { "CueParamsObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComboGraphAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjects = { "CueParamsObjects", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphGameplayEffectContext, CueParamsObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjects_MetaData), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjects_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjectsPaths_Inner = { "CueParamsObjectsPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjectsPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComboGraphAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjectsPaths = { "CueParamsObjectsPaths", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphGameplayEffectContext, CueParamsObjectsPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjectsPaths_MetaData), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjectsPaths_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjectsPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewProp_CueParamsObjectsPaths,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"ComboGraphGameplayEffectContext",
		Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::PropPointers),
		sizeof(FComboGraphGameplayEffectContext),
		alignof(FComboGraphGameplayEffectContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphAbilityTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphAbilityTypes_h_Statics::ScriptStructInfo[] = {
		{ FComboGraphGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FComboGraphGameplayEffectContext_Statics::NewStructOps, TEXT("ComboGraphGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_ComboGraphGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphGameplayEffectContext), 1649936492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphAbilityTypes_h_96755883(TEXT("/Script/ComboGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphAbilityTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
