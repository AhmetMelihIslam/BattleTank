// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankTrack;
#ifdef BATTLETANK_TankMovementComponent_generated_h
#error "TankMovementComponent.generated.h already included, missing '#pragma once' in TankMovementComponent.h"
#endif
#define BATTLETANK_TankMovementComponent_generated_h

#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_SPARSE_DATA
#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIntendTurnRight); \
	DECLARE_FUNCTION(execIntendMoveForward); \
	DECLARE_FUNCTION(execInitialise);


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIntendTurnRight); \
	DECLARE_FUNCTION(execIntendMoveForward); \
	DECLARE_FUNCTION(execInitialise);


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend struct Z_Construct_UClass_UTankMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent)


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend struct Z_Construct_UClass_UTankMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent)


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public:


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent)


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_14_PROLOG
#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_SPARSE_DATA \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_INCLASS \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_SPARSE_DATA \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class UTankMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
