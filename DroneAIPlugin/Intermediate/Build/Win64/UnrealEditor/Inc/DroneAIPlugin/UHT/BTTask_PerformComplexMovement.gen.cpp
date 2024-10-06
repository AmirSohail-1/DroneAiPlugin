// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/BTTask_PerformComplexMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PerformComplexMovement() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UBTTask_PerformComplexMovement();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UBTTask_PerformComplexMovement_NoRegister();
	DRONEAIPLUGIN_API UEnum* Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	void UBTTask_PerformComplexMovement::StaticRegisterNativesUBTTask_PerformComplexMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PerformComplexMovement);
	UClass* Z_Construct_UClass_UBTTask_PerformComplexMovement_NoRegister()
	{
		return UBTTask_PerformComplexMovement::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_PerformComplexMovement.h" },
		{ "ModuleRelativePath", "BTTask_PerformComplexMovement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::NewProp_MovementType_MetaData[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "BTTask_PerformComplexMovement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_PerformComplexMovement, MovementType), Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::NewProp_MovementType_MetaData)) }; // 3705718511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::NewProp_MovementType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PerformComplexMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::ClassParams = {
		&UBTTask_PerformComplexMovement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PerformComplexMovement()
	{
		if (!Z_Registration_Info_UClass_UBTTask_PerformComplexMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PerformComplexMovement.OuterSingleton, Z_Construct_UClass_UBTTask_PerformComplexMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_PerformComplexMovement.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<UBTTask_PerformComplexMovement>()
	{
		return UBTTask_PerformComplexMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PerformComplexMovement);
	UBTTask_PerformComplexMovement::~UBTTask_PerformComplexMovement() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_BTTask_PerformComplexMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_BTTask_PerformComplexMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PerformComplexMovement, UBTTask_PerformComplexMovement::StaticClass, TEXT("UBTTask_PerformComplexMovement"), &Z_Registration_Info_UClass_UBTTask_PerformComplexMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PerformComplexMovement), 4016791061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_BTTask_PerformComplexMovement_h_3285049548(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_BTTask_PerformComplexMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_BTTask_PerformComplexMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
