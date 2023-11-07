// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/Attributes/GSCAttributeSetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAttributeSetBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAttributeSetBase();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAttributeSetBase_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCCoreComponent_NoRegister();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData;
class UScriptStruct* FGSCAttributeSetExecutionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCAttributeSetExecutionData"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCAttributeSetExecutionData>()
{
	return FGSCAttributeSetExecutionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCoreComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceCoreComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCoreComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetCoreComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourcePawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure holding various information to deal with AttributeSet PostGameplayEffectExecute, extracting info from FGameplayEffectModCallbackData */" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "Structure holding various information to deal with AttributeSet PostGameplayEffectExecute, extracting info from FGameplayEffectModCallbackData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributeSetExecutionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Comment", "/** The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain) */" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Comment", "/** The physical representation of the owner (Avatar) for the target we intend to apply to  */" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The physical representation of the owner (Avatar) for the target we intend to apply to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC_MetaData[] = {
		{ "Comment", "/** The ability system component of the instigator that started the whole chain */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The ability system component of the instigator that started the whole chain" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceCoreComponent_MetaData[] = {
		{ "Comment", "/** GAS Companion Core actor component attached to Source Actor (if any) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "GAS Companion Core actor component attached to Source Actor (if any)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceCoreComponent = { "SourceCoreComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceCoreComponent), Z_Construct_UClass_UGSCCoreComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceCoreComponent_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceCoreComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetCoreComponent_MetaData[] = {
		{ "Comment", "/** GAS Companion Core actor component attached to Target Actor (if any) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "GAS Companion Core actor component attached to Target Actor (if any)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetCoreComponent = { "TargetCoreComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetCoreComponent), Z_Construct_UClass_UGSCCoreComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetCoreComponent_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetCoreComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController_MetaData[] = {
		{ "Comment", "/** PlayerController associated with the owning actor for the Source ASC (The ability system component of the instigator that started the whole chain) */" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "PlayerController associated with the owning actor for the Source ASC (The ability system component of the instigator that started the whole chain)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController_MetaData[] = {
		{ "Comment", "/** PlayerController associated with the owning actor for the target we intend to apply to */" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "PlayerController associated with the owning actor for the target we intend to apply to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn_MetaData[] = {
		{ "Comment", "/** The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain), as a APawn */" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The physical representation of the Source ASC (The ability system component of the instigator that started the whole chain), as a APawn" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn = { "SourcePawn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourcePawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn_MetaData[] = {
		{ "Comment", "/** The physical representation of the owner (Avatar) for the target we intend to apply to, as a APawn */" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The physical representation of the owner (Avatar) for the target we intend to apply to, as a APawn" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** The object this effect was created from. */" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "The object this effect was created from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAttributeSetExecutionData, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject_MetaData), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceCoreComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetCoreComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourcePawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_TargetPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewProp_SourceObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCAttributeSetExecutionData",
		Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers),
		sizeof(FGSCAttributeSetExecutionData),
		alignof(FGSCAttributeSetExecutionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.InnerSingleton, Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData.InnerSingleton;
	}
	void UGSCAttributeSetBase::StaticRegisterNativesUGSCAttributeSetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAttributeSetBase);
	UClass* Z_Construct_UClass_UGSCAttributeSetBase_NoRegister()
	{
		return UGSCAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAttributeSetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base AttributeSet Class to extend from.\n *\n * Does not hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:\n *\n * - AdjustAttributeForMaxChange()\n * - Clamp Values definition from Project Config\n */" },
		{ "IncludePath", "Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/Abilities/Attributes/GSCAttributeSetBase.h" },
		{ "ToolTip", "Base AttributeSet Class to extend from.\n\nDoes not hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:\n\n- AdjustAttributeForMaxChange()\n- Clamp Values definition from Project Config" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAttributeSetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAttributeSetBase_Statics::ClassParams = {
		&UGSCAttributeSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributeSetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAttributeSetBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSCAttributeSetBase()
	{
		if (!Z_Registration_Info_UClass_UGSCAttributeSetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAttributeSetBase.OuterSingleton, Z_Construct_UClass_UGSCAttributeSetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAttributeSetBase.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCAttributeSetBase>()
	{
		return UGSCAttributeSetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAttributeSetBase);
	UGSCAttributeSetBase::~UGSCAttributeSetBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Attributes_GSCAttributeSetBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Attributes_GSCAttributeSetBase_h_Statics::ScriptStructInfo[] = {
		{ FGSCAttributeSetExecutionData::StaticStruct, Z_Construct_UScriptStruct_FGSCAttributeSetExecutionData_Statics::NewStructOps, TEXT("GSCAttributeSetExecutionData"), &Z_Registration_Info_UScriptStruct_GSCAttributeSetExecutionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAttributeSetExecutionData), 1215799401U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Attributes_GSCAttributeSetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAttributeSetBase, UGSCAttributeSetBase::StaticClass, TEXT("UGSCAttributeSetBase"), &Z_Registration_Info_UClass_UGSCAttributeSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAttributeSetBase), 2810069073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Attributes_GSCAttributeSetBase_h_1926957448(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Attributes_GSCAttributeSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Attributes_GSCAttributeSetBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Attributes_GSCAttributeSetBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Attributes_GSCAttributeSetBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
