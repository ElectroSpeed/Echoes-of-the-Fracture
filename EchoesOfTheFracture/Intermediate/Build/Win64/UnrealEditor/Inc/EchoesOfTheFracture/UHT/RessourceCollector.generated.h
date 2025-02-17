// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RessourceCollector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECHOESOFTHEFRACTURE_RessourceCollector_generated_h
#error "RessourceCollector.generated.h already included, missing '#pragma once' in RessourceCollector.h"
#endif
#define ECHOESOFTHEFRACTURE_RessourceCollector_generated_h

#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveUnit); \
	DECLARE_FUNCTION(execAddUnit); \
	DECLARE_FUNCTION(execCalculateTimeForResource);


#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARessourceCollector(); \
	friend struct Z_Construct_UClass_ARessourceCollector_Statics; \
public: \
	DECLARE_CLASS(ARessourceCollector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EchoesOfTheFracture"), NO_API) \
	DECLARE_SERIALIZER(ARessourceCollector)


#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARessourceCollector(ARessourceCollector&&); \
	ARessourceCollector(const ARessourceCollector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARessourceCollector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARessourceCollector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARessourceCollector) \
	NO_API virtual ~ARessourceCollector();


#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_15_PROLOG
#define FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECHOESOFTHEFRACTURE_API UClass* StaticClass<class ARessourceCollector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h


#define FOREACH_ENUM_ERESOURCETYPE(op) \
	op(EResourceType::Energium) \
	op(EResourceType::Wood) \
	op(EResourceType::Bread) 

enum class EResourceType : uint8;
template<> struct TIsUEnumClass<EResourceType> { enum { Value = true }; };
template<> ECHOESOFTHEFRACTURE_API UEnum* StaticEnum<EResourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
