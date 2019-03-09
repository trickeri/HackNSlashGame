// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HackNSlashGame/Public/Player/HackNSlashPC_C.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackNSlashPC_C() {}
// Cross Module References
	HACKNSLASHGAME_API UClass* Z_Construct_UClass_AHackNSlashPC_C_NoRegister();
	HACKNSLASHGAME_API UClass* Z_Construct_UClass_AHackNSlashPC_C();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_HackNSlashGame();
// End Cross Module References
	void AHackNSlashPC_C::StaticRegisterNativesAHackNSlashPC_C()
	{
	}
	UClass* Z_Construct_UClass_AHackNSlashPC_C_NoRegister()
	{
		return AHackNSlashPC_C::StaticClass();
	}
	struct Z_Construct_UClass_AHackNSlashPC_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHackNSlashPC_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_HackNSlashGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackNSlashPC_C_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/HackNSlashPC_C.h" },
		{ "ModuleRelativePath", "Public/Player/HackNSlashPC_C.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHackNSlashPC_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHackNSlashPC_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHackNSlashPC_C_Statics::ClassParams = {
		&AHackNSlashPC_C::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHackNSlashPC_C_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHackNSlashPC_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHackNSlashPC_C()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHackNSlashPC_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHackNSlashPC_C, 4279763932);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHackNSlashPC_C(Z_Construct_UClass_AHackNSlashPC_C, &AHackNSlashPC_C::StaticClass, TEXT("/Script/HackNSlashGame"), TEXT("AHackNSlashPC_C"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHackNSlashPC_C);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
