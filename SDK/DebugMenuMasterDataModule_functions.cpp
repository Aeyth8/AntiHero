#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DebugMenuMasterDataModule

#include "Basic.hpp"

#include "DebugMenuMasterDataModule_classes.hpp"
#include "DebugMenuMasterDataModule_parameters.hpp"


namespace SDK
{

// Function DebugMenuMasterDataModule.DebugMenuMasterData.Close
// (Final, Native, Public, BlueprintCallable)

void UDebugMenuMasterData::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "Close");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.CopyMasterData
// (Final, Native, Public, BlueprintCallable)

void UDebugMenuMasterData::CopyMasterData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "CopyMasterData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.DeinitializeMasterData
// (Final, Native, Public, BlueprintCallable)

void UDebugMenuMasterData::DeinitializeMasterData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "DeinitializeMasterData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.DownloadMasterData
// (Final, Native, Public, BlueprintCallable)

void UDebugMenuMasterData::DownloadMasterData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "DownloadMasterData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.GetAllJson
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           TableName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDebugMenuMasterData::GetAllJson(const class FString& TableName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "GetAllJson");

	Params::DebugMenuMasterData_GetAllJson Parms{};

	Parms.TableName = std::move(TableName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.GetDatabaseFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDebugMenuMasterData::GetDatabaseFilePath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "GetDatabaseFilePath");

	Params::DebugMenuMasterData_GetDatabaseFilePath Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.GetDatabasePassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDebugMenuMasterData::GetDatabasePassword()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "GetDatabasePassword");

	Params::DebugMenuMasterData_GetDatabasePassword Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.GetDataFileVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDebugMenuMasterData::GetDataFileVersion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "GetDataFileVersion");

	Params::DebugMenuMasterData_GetDataFileVersion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.GetLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMdLocalization                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EMdLocalization UDebugMenuMasterData::GetLanguage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "GetLanguage");

	Params::DebugMenuMasterData_GetLanguage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.GetModuleCodeVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDebugMenuMasterData::GetModuleCodeVersion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "GetModuleCodeVersion");

	Params::DebugMenuMasterData_GetModuleCodeVersion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.GetSourceFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDebugMenuMasterData::GetSourceFilePath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "GetSourceFilePath");

	Params::DebugMenuMasterData_GetSourceFilePath Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.GetTableList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UDebugMenuMasterData::GetTableList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "GetTableList");

	Params::DebugMenuMasterData_GetTableList Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.InitializeMasterData
// (Final, Native, Public, BlueprintCallable)

void UDebugMenuMasterData::InitializeMasterData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "InitializeMasterData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.IsMasterDataInitialized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDebugMenuMasterData::IsMasterDataInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "IsMasterDataInitialized");

	Params::DebugMenuMasterData_IsMasterDataInitialized Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.OnDownloadComplete
// (Final, Native, Private, BlueprintCallable)

void UDebugMenuMasterData::OnDownloadComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "OnDownloadComplete");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DebugMenuMasterDataModule.DebugMenuMasterData.Open
// (Final, Native, Public, BlueprintCallable)

void UDebugMenuMasterData::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenuMasterData", "Open");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
