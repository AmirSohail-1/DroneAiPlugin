// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/DroneBTTaskNode_FindOptimalPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneBTTaskNode_FindOptimalPosition() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	void UDroneBTTaskNode_FindOptimalPosition::StaticRegisterNativesUDroneBTTaskNode_FindOptimalPosition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDroneBTTaskNode_FindOptimalPosition);
	UClass* Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_NoRegister()
	{
		return UDroneBTTaskNode_FindOptimalPosition::StaticClass();
	}
	struct Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EQSQuery_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EQSQuery;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DroneBTTaskNode_FindOptimalPosition.h" },
		{ "ModuleRelativePath", "DroneBTTaskNode_FindOptimalPosition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::NewProp_EQSQuery_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "DroneBTTaskNode_FindOptimalPosition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::NewProp_EQSQuery = { "EQSQuery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDroneBTTaskNode_FindOptimalPosition, EQSQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::NewProp_EQSQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::NewProp_EQSQuery_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::NewProp_EQSQuery,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneBTTaskNode_FindOptimalPosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::ClassParams = {
		&UDroneBTTaskNode_FindOptimalPosition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition()
	{
		if (!Z_Registration_Info_UClass_UDroneBTTaskNode_FindOptimalPosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneBTTaskNode_FindOptimalPosition.OuterSingleton, Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDroneBTTaskNode_FindOptimalPosition.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<UDroneBTTaskNode_FindOptimalPosition>()
	{
		return UDroneBTTaskNode_FindOptimalPosition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDroneBTTaskNode_FindOptimalPosition);
	UDroneBTTaskNode_FindOptimalPosition::~UDroneBTTaskNode_FindOptimalPosition() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_FindOptimalPosition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_FindOptimalPosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDroneBTTaskNode_FindOptimalPosition, UDroneBTTaskNode_FindOptimalPosition::StaticClass, TEXT("UDroneBTTaskNode_FindOptimalPosition"), &Z_Registration_Info_UClass_UDroneBTTaskNode_FindOptimalPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneBTTaskNode_FindOptimalPosition), 912667512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_FindOptimalPosition_h_1428509176(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_FindOptimalPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_FindOptimalPosition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
