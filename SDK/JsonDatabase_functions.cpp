#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JsonDatabase

#include "Basic.hpp"

#include "JsonDatabase_classes.hpp"
#include "JsonDatabase_parameters.hpp"


namespace SDK
{

// Function JsonDatabase.JsonFunctionLibrary.BP_GetJsonParamAsArrayNum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ParamName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UJsonFunctionLibrary::BP_GetJsonParamAsArrayNum(const class FString& Filename, const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JsonFunctionLibrary", "BP_GetJsonParamAsArrayNum");

	Params::JsonFunctionLibrary_BP_GetJsonParamAsArrayNum Parms{};

	Parms.Filename = std::move(Filename);
	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function JsonDatabase.JsonFunctionLibrary.BP_GetJsonParamAsString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ParamName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UJsonFunctionLibrary::BP_GetJsonParamAsString(const class FString& Filename, const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JsonFunctionLibrary", "BP_GetJsonParamAsString");

	Params::JsonFunctionLibrary_BP_GetJsonParamAsString Parms{};

	Parms.Filename = std::move(Filename);
	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function JsonDatabase.JsonFunctionLibrary.BP_GetJsonParamAsStringFromArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ArrayName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Index_0                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UJsonFunctionLibrary::BP_GetJsonParamAsStringFromArray(const class FString& Filename, const class FString& ArrayName, const int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("JsonFunctionLibrary", "BP_GetJsonParamAsStringFromArray");

	Params::JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray Parms{};

	Parms.Filename = std::move(Filename);
	Parms.ArrayName = std::move(ArrayName);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
