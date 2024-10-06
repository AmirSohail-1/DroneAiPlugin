// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlyingDroneComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EComplexMovementType : uint8;
#ifdef DRONEAIPLUGIN_FlyingDroneComponent_generated_h
#error "FlyingDroneComponent.generated.h already included, missing '#pragma once' in FlyingDroneComponent.h"
#endif
#define DRONEAIPLUGIN_FlyingDroneComponent_generated_h

#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_SPARSE_DATA
#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFocusTarget); \
	DECLARE_FUNCTION(execClearFocusTarget); \
	DECLARE_FUNCTION(execSetFocusTarget); \
	DECLARE_FUNCTION(execPerformComplexMovement); \
	DECLARE_FUNCTION(execRotateTowards); \
	DECLARE_FUNCTION(execMoveToLocation);


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFocusTarget); \
	DECLARE_FUNCTION(execClearFocusTarget); \
	DECLARE_FUNCTION(execSetFocusTarget); \
	DECLARE_FUNCTION(execPerformComplexMovement); \
	DECLARE_FUNCTION(execRotateTowards); \
	DECLARE_FUNCTION(execMoveToLocation);


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_ACCESSORS
#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlyingDroneComponent(); \
	friend struct Z_Construct_UClass_UFlyingDroneComponent_Statics; \
public: \
	DECLARE_CLASS(UFlyingDroneComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFlyingDroneComponent)


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFlyingDroneComponent(); \
	friend struct Z_Construct_UClass_UFlyingDroneComponent_Statics; \
public: \
	DECLARE_CLASS(UFlyingDroneComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFlyingDroneComponent)


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlyingDroneComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlyingDroneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlyingDroneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlyingDroneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlyingDroneComponent(UFlyingDroneComponent&&); \
	NO_API UFlyingDroneComponent(const UFlyingDroneComponent&); \
public: \
	NO_API virtual ~UFlyingDroneComponent();


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlyingDroneComponent(UFlyingDroneComponent&&); \
	NO_API UFlyingDroneComponent(const UFlyingDroneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlyingDroneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlyingDroneComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlyingDroneComponent) \
	NO_API virtual ~UFlyingDroneComponent();


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_16_PROLOG
#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_SPARSE_DATA \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_RPC_WRAPPERS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_ACCESSORS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_INCLASS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_SPARSE_DATA \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_ACCESSORS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONEAIPLUGIN_API UClass* StaticClass<class UFlyingDroneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h


#define FOREACH_ENUM_ECOMPLEXMOVEMENTTYPE(op) \
	op(EComplexMovementType::RollMontage) \
	op(EComplexMovementType::UpDownMovement) \
	op(EComplexMovementType::SineWave) \
	op(EComplexMovementType::SpiralMovement) 

enum class EComplexMovementType : uint8;
template<> struct TIsUEnumClass<EComplexMovementType> { enum { Value = true }; };
template<> DRONEAIPLUGIN_API UEnum* StaticEnum<EComplexMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
