#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JsonDatabase

#include "Basic.hpp"


namespace SDK::Params
{

// Function JsonDatabase.JsonFunctionLibrary.BP_GetJsonParamAsArrayNum
// 0x0028 (0x0028 - 0x0000)
struct JsonFunctionLibrary_BP_GetJsonParamAsArrayNum final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ParamName;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(JsonFunctionLibrary_BP_GetJsonParamAsArrayNum) == 0x000008, "Wrong alignment on JsonFunctionLibrary_BP_GetJsonParamAsArrayNum");
static_assert(sizeof(JsonFunctionLibrary_BP_GetJsonParamAsArrayNum) == 0x000028, "Wrong size on JsonFunctionLibrary_BP_GetJsonParamAsArrayNum");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsArrayNum, Filename) == 0x000000, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsArrayNum::Filename' has a wrong offset!");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsArrayNum, ParamName) == 0x000010, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsArrayNum::ParamName' has a wrong offset!");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsArrayNum, ReturnValue) == 0x000020, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsArrayNum::ReturnValue' has a wrong offset!");

// Function JsonDatabase.JsonFunctionLibrary.BP_GetJsonParamAsString
// 0x0030 (0x0030 - 0x0000)
struct JsonFunctionLibrary_BP_GetJsonParamAsString final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ParamName;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(JsonFunctionLibrary_BP_GetJsonParamAsString) == 0x000008, "Wrong alignment on JsonFunctionLibrary_BP_GetJsonParamAsString");
static_assert(sizeof(JsonFunctionLibrary_BP_GetJsonParamAsString) == 0x000030, "Wrong size on JsonFunctionLibrary_BP_GetJsonParamAsString");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsString, Filename) == 0x000000, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsString::Filename' has a wrong offset!");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsString, ParamName) == 0x000010, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsString::ParamName' has a wrong offset!");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsString, ReturnValue) == 0x000020, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsString::ReturnValue' has a wrong offset!");

// Function JsonDatabase.JsonFunctionLibrary.BP_GetJsonParamAsStringFromArray
// 0x0038 (0x0038 - 0x0000)
struct JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ArrayName;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Index_0;                                           // 0x0020(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray) == 0x000008, "Wrong alignment on JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray");
static_assert(sizeof(JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray) == 0x000038, "Wrong size on JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray, Filename) == 0x000000, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray::Filename' has a wrong offset!");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray, ArrayName) == 0x000010, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray::ArrayName' has a wrong offset!");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray, Index_0) == 0x000020, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray::Index_0' has a wrong offset!");
static_assert(offsetof(JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray, ReturnValue) == 0x000028, "Member 'JsonFunctionLibrary_BP_GetJsonParamAsStringFromArray::ReturnValue' has a wrong offset!");

}
