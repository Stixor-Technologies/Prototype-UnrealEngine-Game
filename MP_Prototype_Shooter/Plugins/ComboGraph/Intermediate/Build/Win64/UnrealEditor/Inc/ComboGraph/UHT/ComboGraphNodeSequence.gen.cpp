// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Graph/ComboGraphNodeSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphNodeSequence() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeAnimBase();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeSequence();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	void UComboGraphNodeSequence::StaticRegisterNativesUComboGraphNodeSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphNodeSequence);
	UClass* Z_Construct_UClass_UComboGraphNodeSequence_NoRegister()
	{
		return UComboGraphNodeSequence::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphNodeSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphNodeSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboGraphNodeAnimBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeSequence_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base Class for Combo Graph nodes acting based on an Anim Sequence asset.\n *\n *  Holds runtime properties for animation and effects / cues containers.\n */" },
#endif
		{ "IncludePath", "Graph/ComboGraphNodeSequence.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeSequence.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Class for Combo Graph nodes acting based on an Anim Sequence asset.\n\nHolds runtime properties for animation and effects / cues containers." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeSequence_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeSequence.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UComboGraphNodeSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeSequence, Sequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeSequence_Statics::NewProp_Sequence_MetaData), Z_Construct_UClass_UComboGraphNodeSequence_Statics::NewProp_Sequence_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphNodeSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeSequence_Statics::NewProp_Sequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphNodeSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphNodeSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphNodeSequence_Statics::ClassParams = {
		&UComboGraphNodeSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraphNodeSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeSequence_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphNodeSequence_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeSequence_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphNodeSequence()
	{
		if (!Z_Registration_Info_UClass_UComboGraphNodeSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphNodeSequence.OuterSingleton, Z_Construct_UClass_UComboGraphNodeSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphNodeSequence.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphNodeSequence>()
	{
		return UComboGraphNodeSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphNodeSequence);
	UComboGraphNodeSequence::~UComboGraphNodeSequence() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphNodeSequence, UComboGraphNodeSequence::StaticClass, TEXT("UComboGraphNodeSequence"), &Z_Registration_Info_UClass_UComboGraphNodeSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphNodeSequence), 1524589168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeSequence_h_257536752(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
