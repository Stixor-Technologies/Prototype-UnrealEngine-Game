// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Graph/ComboGraphEdge.h"
#include "InputAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphEdge() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphEdge();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphEdge_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeBase_NoRegister();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	void UComboGraphEdge::StaticRegisterNativesUComboGraphEdge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphEdge);
	UClass* Z_Construct_UClass_UComboGraphEdge_NoRegister()
	{
		return UComboGraphEdge::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransitionInput;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionAnimNotifyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TransitionAnimNotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionAnimNotify_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TransitionAnimNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EndNode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeColour;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputActionInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentInputActionInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Combo Graph | Transition Combo Graph | Icons" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Graph/ComboGraphEdge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionInput_MetaData[] = {
		{ "Category", "Combo Graph | Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The EnhancedInput Action to consider to transition to next node.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The EnhancedInput Action to consider to transition to next node." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionInput = { "TransitionInput", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdge, TransitionInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionInput_MetaData), Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionInput_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TriggerEvent_MetaData[] = {
		{ "Category", "Combo Graph | Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The EnhancedInput Trigger Event type to use for the transition activation.\n\x09 */" },
#endif
		{ "EditCondition", "TransitionInput != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The EnhancedInput Trigger Event type to use for the transition activation." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdge, TriggerEvent), Z_Construct_UEnum_ComboGraph_EComboGraphTransitionInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TriggerEvent_MetaData), Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TriggerEvent_MetaData) }; // 3997112597
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionBehavior_MetaData[] = {
		{ "Category", "Combo Graph | Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transition Behavior.\n\x09 */" },
#endif
		{ "EditCondition", "TransitionInput != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transition Behavior." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionBehavior = { "TransitionBehavior", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdge, TransitionBehavior), Z_Construct_UEnum_ComboGraph_EComboGraphTransitionBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionBehavior_MetaData), Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionBehavior_MetaData) }; // 4237330386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotifyName_MetaData[] = {
		{ "Category", "Combo Graph | Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Configure the Anim Notify name (skeleton notify) to consider when Transition Behavior is set to transition on a specific notify frame.\n\x09 *\n\x09 * By the time an input trigger is received, combo transition will happen when the animation\n\x09 * reaches this notify state or immediately if animation current time frame is passed the notify state.\n\x09 */" },
#endif
		{ "EditCondition", "TransitionBehavior == EComboGraphTransitionBehavior::OnAnimNotifyName" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure the Anim Notify name (skeleton notify) to consider when Transition Behavior is set to transition on a specific notify frame.\n\nBy the time an input trigger is received, combo transition will happen when the animation\nreaches this notify state or immediately if animation current time frame is passed the notify state." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotifyName = { "TransitionAnimNotifyName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdge, TransitionAnimNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotifyName_MetaData), Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotifyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotify_MetaData[] = {
		{ "Category", "Combo Graph | Transition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Configure the Anim Notify class to consider when Transition Behavior is set to transition on a specific notify frame.\n\x09 *\n\x09 * By the time an input trigger is received, combo transition will happen when the animation\n\x09 * reaches this notify state or immediately if animation current time frame is passed the notify state.\n\x09 */" },
#endif
		{ "EditCondition", "TransitionBehavior == EComboGraphTransitionBehavior::OnAnimNotifyClass" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure the Anim Notify class to consider when Transition Behavior is set to transition on a specific notify frame.\n\nBy the time an input trigger is received, combo transition will happen when the animation\nreaches this notify state or immediately if animation current time frame is passed the notify state." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotify = { "TransitionAnimNotify", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdge, TransitionAnimNotify), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotify_MetaData), Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotify_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_StartNode_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start or parent node for this edge */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start or parent node for this edge" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdge, StartNode), Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_StartNode_MetaData), Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_StartNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EndNode_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** End or child node for this edge */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End or child node for this edge" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EndNode = { "EndNode", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdge, EndNode), Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EndNode_MetaData), Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EndNode_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EdgeColour_MetaData[] = {
		{ "Category", "Combo Graph | Icons" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EdgeColour = { "EdgeColour", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdge, EdgeColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EdgeColour_MetaData), Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EdgeColour_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_CurrentInputActionInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The value of Input Action instance set during input confirm (replicated from client to server) */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value of Input Action instance set during input confirm (replicated from client to server)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_CurrentInputActionInstance = { "CurrentInputActionInstance", nullptr, (EPropertyFlags)0x0020088000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphEdge, CurrentInputActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_CurrentInputActionInstance_MetaData), Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_CurrentInputActionInstance_MetaData) }; // 2153033866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TriggerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_TransitionAnimNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_StartNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EndNode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_EdgeColour,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphEdge_Statics::NewProp_CurrentInputActionInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphEdge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphEdge_Statics::ClassParams = {
		&UComboGraphEdge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraphEdge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphEdge_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphEdge_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphEdge()
	{
		if (!Z_Registration_Info_UClass_UComboGraphEdge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphEdge.OuterSingleton, Z_Construct_UClass_UComboGraphEdge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphEdge.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphEdge>()
	{
		return UComboGraphEdge::StaticClass();
	}

	void UComboGraphEdge::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentInputActionInstance(TEXT("CurrentInputActionInstance"));

		const bool bIsValid = true
			&& Name_CurrentInputActionInstance == ClassReps[(int32)ENetFields_Private::CurrentInputActionInstance].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UComboGraphEdge"));
	}
	UComboGraphEdge::UComboGraphEdge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphEdge);
	UComboGraphEdge::~UComboGraphEdge() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphEdge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphEdge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphEdge, UComboGraphEdge::StaticClass, TEXT("UComboGraphEdge"), &Z_Registration_Info_UClass_UComboGraphEdge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphEdge), 3508854859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphEdge_h_4216736066(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphEdge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
