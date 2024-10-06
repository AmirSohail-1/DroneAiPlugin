// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/DroneBTTaskNode_TakeScreenshot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneBTTaskNode_TakeScreenshot() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	void UDroneBTTaskNode_TakeScreenshot::StaticRegisterNativesUDroneBTTaskNode_TakeScreenshot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDroneBTTaskNode_TakeScreenshot);
	UClass* Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_NoRegister()
	{
		return UDroneBTTaskNode_TakeScreenshot::StaticClass();
	}
	struct Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DroneBTTaskNode_TakeScreenshot.h" },
		{ "ModuleRelativePath", "DroneBTTaskNode_TakeScreenshot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneBTTaskNode_TakeScreenshot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_Statics::ClassParams = {
		&UDroneBTTaskNode_TakeScreenshot::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot()
	{
		if (!Z_Registration_Info_UClass_UDroneBTTaskNode_TakeScreenshot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneBTTaskNode_TakeScreenshot.OuterSingleton, Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDroneBTTaskNode_TakeScreenshot.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<UDroneBTTaskNode_TakeScreenshot>()
	{
		return UDroneBTTaskNode_TakeScreenshot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDroneBTTaskNode_TakeScreenshot);
	UDroneBTTaskNode_TakeScreenshot::~UDroneBTTaskNode_TakeScreenshot() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_TakeScreenshot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_TakeScreenshot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDroneBTTaskNode_TakeScreenshot, UDroneBTTaskNode_TakeScreenshot::StaticClass, TEXT("UDroneBTTaskNode_TakeScreenshot"), &Z_Registration_Info_UClass_UDroneBTTaskNode_TakeScreenshot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneBTTaskNode_TakeScreenshot), 2148501366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_TakeScreenshot_h_3361111604(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_TakeScreenshot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneBTTaskNode_TakeScreenshot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
