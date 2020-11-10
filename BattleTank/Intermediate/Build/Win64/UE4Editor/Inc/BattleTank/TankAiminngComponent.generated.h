// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankBarrel;
class UTankTurret;
#ifdef BATTLETANK_TankAiminngComponent_generated_h
#error "TankAiminngComponent.generated.h already included, missing '#pragma once' in TankAiminngComponent.h"
#endif
#define BATTLETANK_TankAiminngComponent_generated_h

#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_SPARSE_DATA
#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRoundLeft); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execInitialise);


#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoundLeft); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execInitialise);


#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankAiminngComponent(); \
	friend struct Z_Construct_UClass_UTankAiminngComponent_Statics; \
public: \
	DECLARE_CLASS(UTankAiminngComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankAiminngComponent)


#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUTankAiminngComponent(); \
	friend struct Z_Construct_UClass_UTankAiminngComponent_Statics; \
public: \
	DECLARE_CLASS(UTankAiminngComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankAiminngComponent)


#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankAiminngComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankAiminngComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAiminngComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAiminngComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAiminngComponent(UTankAiminngComponent&&); \
	NO_API UTankAiminngComponent(const UTankAiminngComponent&); \
public:


#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAiminngComponent(UTankAiminngComponent&&); \
	NO_API UTankAiminngComponent(const UTankAiminngComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAiminngComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAiminngComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankAiminngComponent)


#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FiringState() { return STRUCT_OFFSET(UTankAiminngComponent, FiringState); } \
	FORCEINLINE static uint32 __PPO__ProjectileBlueprint() { return STRUCT_OFFSET(UTankAiminngComponent, ProjectileBlueprint); } \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(UTankAiminngComponent, LaunchSpeed); } \
	FORCEINLINE static uint32 __PPO__ReloadTimeInSeconds() { return STRUCT_OFFSET(UTankAiminngComponent, ReloadTimeInSeconds); } \
	FORCEINLINE static uint32 __PPO__RoundsLeft() { return STRUCT_OFFSET(UTankAiminngComponent, RoundsLeft); }


#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_24_PROLOG
#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_SPARSE_DATA \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_INCLASS \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_SPARSE_DATA \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankAiminngComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class UTankAiminngComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankAiminngComponent_h


#define FOREACH_ENUM_EFIRINGSTATE(op) \
	op(EFiringState::Reloading) \
	op(EFiringState::Aiming) \
	op(EFiringState::Locked) \
	op(EFiringState::OutOfAmmo) 

enum class EFiringState : uint8;
template<> BATTLETANK_API UEnum* StaticEnum<EFiringState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
