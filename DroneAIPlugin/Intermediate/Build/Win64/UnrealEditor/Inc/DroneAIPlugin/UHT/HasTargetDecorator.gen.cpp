// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/HasTargetDecorator.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHasTargetDecorator() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UHasTargetDecorator();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UHasTargetDecorator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	void UHasTargetDecorator::StaticRegisterNativesUHasTargetDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHasTargetDecorator);
	UClass* Z_Construct_UClass_UHasTargetDecorator_NoRegister()
	{
		return UHasTargetDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UHasTargetDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasTargetDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasTargetDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HasTargetDecorator.h" },
		{ "ModuleRelativePath", "HasTargetDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasTargetDecorator_Statics::NewProp_TargetKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "HasTargetDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHasTargetDecorator_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHasTargetDecorator, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UHasTargetDecorator_Statics::NewProp_TargetKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasTargetDecorator_Statics::NewProp_TargetKey_MetaData)) }; // 3025891527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHasTargetDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasTargetDecorator_Statics::NewProp_TargetKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasTargetDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasTargetDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHasTargetDecorator_Statics::ClassParams = {
		&UHasTargetDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHasTargetDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHasTargetDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHasTargetDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasTargetDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasTargetDecorator()
	{
		if (!Z_Registration_Info_UClass_UHasTargetDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHasTargetDecorator.OuterSingleton, Z_Construct_UClass_UHasTargetDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHasTargetDecorator.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<UHasTargetDecorator>()
	{
		return UHasTargetDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasTargetDecorator);
	UHasTargetDecorator::~UHasTargetDecorator() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_HasTargetDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_HasTargetDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHasTargetDecorator, UHasTargetDecorator::StaticClass, TEXT("UHasTargetDecorator"), &Z_Registration_Info_UClass_UHasTargetDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHasTargetDecorator), 2686650418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_HasTargetDecorator_h_2225444431(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_HasTargetDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_HasTargetDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
