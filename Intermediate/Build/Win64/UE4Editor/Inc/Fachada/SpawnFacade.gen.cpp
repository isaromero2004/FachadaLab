// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/SpawnFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnFacade() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_ASpawnFacade_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_ASpawnFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Fachada();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASpawnFacade::StaticRegisterNativesASpawnFacade()
	{
	}
	UClass* Z_Construct_UClass_ASpawnFacade_NoRegister()
	{
		return ASpawnFacade::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnFacade.h" },
		{ "ModuleRelativePath", "SpawnFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnFacade_Statics::NewProp_SpawnObjects_Inner = { "SpawnObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnFacade_Statics::NewProp_SpawnObjects_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnFacade_Statics::NewProp_SpawnObjects = { "SpawnObjects", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnFacade, SpawnObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_SpawnObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_SpawnObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnFacade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnFacade_Statics::NewProp_SpawnObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnFacade_Statics::NewProp_SpawnObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnFacade_Statics::ClassParams = {
		&ASpawnFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnFacade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnFacade, 2398230006);
	template<> FACHADA_API UClass* StaticClass<ASpawnFacade>()
	{
		return ASpawnFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnFacade(Z_Construct_UClass_ASpawnFacade, &ASpawnFacade::StaticClass, TEXT("/Script/Fachada"), TEXT("ASpawnFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
