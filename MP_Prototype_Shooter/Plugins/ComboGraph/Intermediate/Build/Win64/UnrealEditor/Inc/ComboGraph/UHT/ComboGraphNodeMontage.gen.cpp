// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Graph/ComboGraphNodeMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphNodeMontage() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeAnimBase();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeMontage();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	DEFINE_FUNCTION(UComboGraphNodeMontage::execGetMontageStartSection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetMontageStartSection_Implementation();
		P_NATIVE_END;
	}
	struct ComboGraphNodeMontage_eventGetMontageStartSection_Parms
	{
		FName ReturnValue;
	};
	static FName NAME_UComboGraphNodeMontage_GetMontageStartSection = FName(TEXT("GetMontageStartSection"));
	FName UComboGraphNodeMontage::GetMontageStartSection() const
	{
		ComboGraphNodeMontage_eventGetMontageStartSection_Parms Parms;
		const_cast<UComboGraphNodeMontage*>(this)->ProcessEvent(FindFunctionChecked(NAME_UComboGraphNodeMontage_GetMontageStartSection),&Parms);
		return Parms.ReturnValue;
	}
	void UComboGraphNodeMontage::StaticRegisterNativesUComboGraphNodeMontage()
	{
		UClass* Class = UComboGraphNodeMontage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMontageStartSection", &UComboGraphNodeMontage::execGetMontageStartSection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeMontage_eventGetMontageStartSection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint overridable method to return the Start Section name to use with the Combo Play Montage task. Default behavior is simply to return `StartSection` property of the combo node.  */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint overridable method to return the Start Section name to use with the Combo Play Montage task. Default behavior is simply to return `StartSection` property of the combo node." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeMontage, nullptr, "GetMontageStartSection", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::PropPointers), sizeof(ComboGraphNodeMontage_eventGetMontageStartSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::PropPointers) < 2048);
	static_assert(sizeof(ComboGraphNodeMontage_eventGetMontageStartSection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphNodeMontage);
	UClass* Z_Construct_UClass_UComboGraphNodeMontage_NoRegister()
	{
		return UComboGraphNodeMontage::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphNodeMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphNodeMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboGraphNodeAnimBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeMontage_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphNodeMontage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphNodeMontage_GetMontageStartSection, "GetMontageStartSection" }, // 71492527
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeMontage_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeMontage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base Class for Combo Graph nodes acting based on an Anim Montage asset.\n *\n *  Holds runtime properties for animation and effects / cues containers.\n */" },
#endif
		{ "IncludePath", "Graph/ComboGraphNodeMontage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Class for Combo Graph nodes acting based on an Anim Montage asset.\n\nHolds runtime properties for animation and effects / cues containers." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeMontage.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeMontage, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_Montage_MetaData), Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_StartSection_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeMontage.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeMontage, StartSection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_StartSection_MetaData), Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_StartSection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphNodeMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeMontage_Statics::NewProp_StartSection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphNodeMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphNodeMontage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphNodeMontage_Statics::ClassParams = {
		&UComboGraphNodeMontage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboGraphNodeMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeMontage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphNodeMontage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeMontage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphNodeMontage()
	{
		if (!Z_Registration_Info_UClass_UComboGraphNodeMontage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphNodeMontage.OuterSingleton, Z_Construct_UClass_UComboGraphNodeMontage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphNodeMontage.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphNodeMontage>()
	{
		return UComboGraphNodeMontage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphNodeMontage);
	UComboGraphNodeMontage::~UComboGraphNodeMontage() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeMontage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeMontage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphNodeMontage, UComboGraphNodeMontage::StaticClass, TEXT("UComboGraphNodeMontage"), &Z_Registration_Info_UClass_UComboGraphNodeMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphNodeMontage), 2560307763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeMontage_h_2510331401(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeMontage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
