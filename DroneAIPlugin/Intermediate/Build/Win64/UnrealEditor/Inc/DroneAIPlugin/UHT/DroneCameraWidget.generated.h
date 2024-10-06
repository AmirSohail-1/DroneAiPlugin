// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DroneCameraWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADroneNPC;
#ifdef DRONEAIPLUGIN_DroneCameraWidget_generated_h
#error "DroneCameraWidget.generated.h already included, missing '#pragma once' in DroneCameraWidget.h"
#endif
#define DRONEAIPLUGIN_DroneCameraWidget_generated_h

#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_SPARSE_DATA
#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateCameraFeed); \
	DECLARE_FUNCTION(execSetDroneReference);


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateCameraFeed); \
	DECLARE_FUNCTION(execSetDroneReference);


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_ACCESSORS
#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDroneCameraWidget(); \
	friend struct Z_Construct_UClass_UDroneCameraWidget_Statics; \
public: \
	DECLARE_CLASS(UDroneCameraWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DroneAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDroneCameraWidget)


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDroneCameraWidget(); \
	friend struct Z_Construct_UClass_UDroneCameraWidget_Statics; \
public: \
	DECLARE_CLASS(UDroneCameraWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DroneAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDroneCameraWidget)


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDroneCameraWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDroneCameraWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDroneCameraWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDroneCameraWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDroneCameraWidget(UDroneCameraWidget&&); \
	NO_API UDroneCameraWidget(const UDroneCameraWidget&); \
public: \
	NO_API virtual ~UDroneCameraWidget();


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDroneCameraWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDroneCameraWidget(UDroneCameraWidget&&); \
	NO_API UDroneCameraWidget(const UDroneCameraWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDroneCameraWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDroneCameraWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDroneCameraWidget) \
	NO_API virtual ~UDroneCameraWidget();


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_11_PROLOG
#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_SPARSE_DATA \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_RPC_WRAPPERS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_ACCESSORS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_INCLASS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_SPARSE_DATA \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_ACCESSORS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_INCLASS_NO_PURE_DECLS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONEAIPLUGIN_API UClass* StaticClass<class UDroneCameraWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
