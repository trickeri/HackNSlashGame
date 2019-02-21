// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HackNSlashGame/HackNSlashGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackNSlashGameGameMode() {}
// Cross Module References
	HACKNSLASHGAME_API UClass* Z_Construct_UClass_AHackNSlashGameGameMode_NoRegister();
	HACKNSLASHGAME_API UClass* Z_Construct_UClass_AHackNSlashGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HackNSlashGame();
// End Cross Module References
	void AHackNSlashGameGameMode::StaticRegisterNativesAHackNSlashGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHackNSlashGameGameMode_NoRegister()
	{
		return AHackNSlashGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHackNSlashGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHackNSlashGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HackNSlashGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackNSlashGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HackNSlashGameGameMode.h" },
		{ "ModuleRelativePath", "HackNSlashGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHackNSlashGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHackNSlashGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHackNSlashGameGameMode_Statics::ClassParams = {
		&AHackNSlashGameGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHackNSlashGameGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHackNSlashGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHackNSlashGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHackNSlashGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHackNSlashGameGameMode, 3427946806);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHackNSlashGameGameMode(Z_Construct_UClass_AHackNSlashGameGameMode, &AHackNSlashGameGameMode::StaticClass, TEXT("/Script/HackNSlashGame"), TEXT("AHackNSlashGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHackNSlashGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
