// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HackNSlashGame/Public/General/HackNSlashGS_C.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackNSlashGS_C() {}
// Cross Module References
	HACKNSLASHGAME_API UClass* Z_Construct_UClass_AHackNSlashGS_C_NoRegister();
	HACKNSLASHGAME_API UClass* Z_Construct_UClass_AHackNSlashGS_C();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_HackNSlashGame();
// End Cross Module References
	void AHackNSlashGS_C::StaticRegisterNativesAHackNSlashGS_C()
	{
	}
	UClass* Z_Construct_UClass_AHackNSlashGS_C_NoRegister()
	{
		return AHackNSlashGS_C::StaticClass();
	}
	struct Z_Construct_UClass_AHackNSlashGS_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHackNSlashGS_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HackNSlashGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackNSlashGS_C_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "General/HackNSlashGS_C.h" },
		{ "ModuleRelativePath", "Public/General/HackNSlashGS_C.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHackNSlashGS_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHackNSlashGS_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHackNSlashGS_C_Statics::ClassParams = {
		&AHackNSlashGS_C::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHackNSlashGS_C_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHackNSlashGS_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHackNSlashGS_C()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHackNSlashGS_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHackNSlashGS_C, 3163870388);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHackNSlashGS_C(Z_Construct_UClass_AHackNSlashGS_C, &AHackNSlashGS_C::StaticClass, TEXT("/Script/HackNSlashGame"), TEXT("AHackNSlashGS_C"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHackNSlashGS_C);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
