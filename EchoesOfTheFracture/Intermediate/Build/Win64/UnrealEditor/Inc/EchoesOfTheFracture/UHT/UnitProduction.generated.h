// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitProduction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECHOESOFTHEFRACTURE_UnitProduction_generated_h
#error "UnitProduction.generated.h already included, missing '#pragma once' in UnitProduction.h"
#endif
#define ECHOESOFTHEFRACTURE_UnitProduction_generated_h

#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveUnitProduction); \
	DECLARE_FUNCTION(execAddUnitProduction); \
	DECLARE_FUNCTION(execCreateUnit);


#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnitProduction(); \
	friend struct Z_Construct_UClass_AUnitProduction_Statics; \
public: \
	DECLARE_CLASS(AUnitProduction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EchoesOfTheFracture"), NO_API) \
	DECLARE_SERIALIZER(AUnitProduction)


#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUnitProduction(AUnitProduction&&); \
	AUnitProduction(const AUnitProduction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitProduction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitProduction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnitProduction) \
	NO_API virtual ~AUnitProduction();


#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_16_PROLOG
#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECHOESOFTHEFRACTURE_API UClass* StaticClass<class AUnitProduction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h


#define FOREACH_ENUM_EUNITTYPE(op) \
	op(EUnitType::Warrior) \
	op(EUnitType::Sentinel) \
	op(EUnitType::Shooter) \
	op(EUnitType::Colon) 

enum class EUnitType : uint8;
template<> struct TIsUEnumClass<EUnitType> { enum { Value = true }; };
template<> ECHOESOFTHEFRACTURE_API UEnum* StaticEnum<EUnitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
