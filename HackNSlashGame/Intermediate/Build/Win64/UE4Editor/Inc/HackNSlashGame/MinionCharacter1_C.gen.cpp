// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HackNSlashGame/Public/Enemies/MinionCharacter1_C.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionCharacter1_C() {}
// Cross Module References
	HACKNSLASHGAME_API UClass* Z_Construct_UClass_AMinionCharacter1_C_NoRegister();
	HACKNSLASHGAME_API UClass* Z_Construct_UClass_AMinionCharacter1_C();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HackNSlashGame();
// End Cross Module References
	void AMinionCharacter1_C::StaticRegisterNativesAMinionCharacter1_C()
	{
	}
	UClass* Z_Construct_UClass_AMinionCharacter1_C_NoRegister()
	{
		return AMinionCharacter1_C::StaticClass();
	}
	struct Z_Construct_UClass_AMinionCharacter1_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinionCharacter1_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HackNSlashGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionCharacter1_C_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/MinionCharacter1_C.h" },
		{ "ModuleRelativePath", "Public/Enemies/MinionCharacter1_C.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinionCharacter1_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinionCharacter1_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinionCharacter1_C_Statics::ClassParams = {
		&AMinionCharacter1_C::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMinionCharacter1_C_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMinionCharacter1_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinionCharacter1_C()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinionCharacter1_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinionCharacter1_C, 914000182);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinionCharacter1_C(Z_Construct_UClass_AMinionCharacter1_C, &AMinionCharacter1_C::StaticClass, TEXT("/Script/HackNSlashGame"), TEXT("AMinionCharacter1_C"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinionCharacter1_C);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
