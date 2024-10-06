// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/DroneEQSContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneEQSContext() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UDroneEQSContext();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UDroneEQSContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	void UDroneEQSContext::StaticRegisterNativesUDroneEQSContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDroneEQSContext);
	UClass* Z_Construct_UClass_UDroneEQSContext_NoRegister()
	{
		return UDroneEQSContext::StaticClass();
	}
	struct Z_Construct_UClass_UDroneEQSContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDroneEQSContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneEQSContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DroneEQSContext.h" },
		{ "ModuleRelativePath", "DroneEQSContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDroneEQSContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneEQSContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneEQSContext_Statics::ClassParams = {
		&UDroneEQSContext::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDroneEQSContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneEQSContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDroneEQSContext()
	{
		if (!Z_Registration_Info_UClass_UDroneEQSContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneEQSContext.OuterSingleton, Z_Construct_UClass_UDroneEQSContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDroneEQSContext.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<UDroneEQSContext>()
	{
		return UDroneEQSContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDroneEQSContext);
	UDroneEQSContext::~UDroneEQSContext() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneEQSContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneEQSContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDroneEQSContext, UDroneEQSContext::StaticClass, TEXT("UDroneEQSContext"), &Z_Registration_Info_UClass_UDroneEQSContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneEQSContext), 619891552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneEQSContext_h_1235318613(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneEQSContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneEQSContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
