// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanionDeveloper/Public/BlueprintGraph/GSCK2Node_SwitchGameplayAttribute.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCK2Node_SwitchGameplayAttribute() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GASCOMPANIONDEVELOPER_API UClass* Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute();
	GASCOMPANIONDEVELOPER_API UClass* Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanionDeveloper();
// End Cross Module References
	void UGSCK2Node_SwitchGameplayAttribute::StaticRegisterNativesUGSCK2Node_SwitchGameplayAttribute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCK2Node_SwitchGameplayAttribute);
	UClass* Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_NoRegister()
	{
		return UGSCK2Node_SwitchGameplayAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PinAttributes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PinNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Switch on Gameplay Attribute node\n */" },
#endif
		{ "IncludePath", "BlueprintGraph/GSCK2Node_SwitchGameplayAttribute.h" },
		{ "ModuleRelativePath", "Public/BlueprintGraph/GSCK2Node_SwitchGameplayAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch on Gameplay Attribute node" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinAttributes_Inner = { "PinAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinAttributes_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Public/BlueprintGraph/GSCK2Node_SwitchGameplayAttribute.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinAttributes = { "PinAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCK2Node_SwitchGameplayAttribute, PinAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinAttributes_MetaData), Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinAttributes_MetaData) }; // 359123813
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinNames_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = PinOptions)\n//bool UseInputsOnGraph;\n" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintGraph/GSCK2Node_SwitchGameplayAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = PinOptions)\nbool UseInputsOnGraph;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCK2Node_SwitchGameplayAttribute, PinNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinNames_MetaData), Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::NewProp_PinNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCK2Node_SwitchGameplayAttribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::ClassParams = {
		&UGSCK2Node_SwitchGameplayAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute()
	{
		if (!Z_Registration_Info_UClass_UGSCK2Node_SwitchGameplayAttribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCK2Node_SwitchGameplayAttribute.OuterSingleton, Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCK2Node_SwitchGameplayAttribute.OuterSingleton;
	}
	template<> GASCOMPANIONDEVELOPER_API UClass* StaticClass<UGSCK2Node_SwitchGameplayAttribute>()
	{
		return UGSCK2Node_SwitchGameplayAttribute::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCK2Node_SwitchGameplayAttribute);
	UGSCK2Node_SwitchGameplayAttribute::~UGSCK2Node_SwitchGameplayAttribute() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanionDeveloper_Public_BlueprintGraph_GSCK2Node_SwitchGameplayAttribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanionDeveloper_Public_BlueprintGraph_GSCK2Node_SwitchGameplayAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCK2Node_SwitchGameplayAttribute, UGSCK2Node_SwitchGameplayAttribute::StaticClass, TEXT("UGSCK2Node_SwitchGameplayAttribute"), &Z_Registration_Info_UClass_UGSCK2Node_SwitchGameplayAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCK2Node_SwitchGameplayAttribute), 4474981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanionDeveloper_Public_BlueprintGraph_GSCK2Node_SwitchGameplayAttribute_h_3138134617(TEXT("/Script/GASCompanionDeveloper"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanionDeveloper_Public_BlueprintGraph_GSCK2Node_SwitchGameplayAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanionDeveloper_Public_BlueprintGraph_GSCK2Node_SwitchGameplayAttribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
