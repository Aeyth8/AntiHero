#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StringTableUtility

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class StringTableUtility.StringTableUtilitySettings
// 0x0020 (0x0048 - 0x0028)
class UStringTableUtilitySettings final : public UObject
{
public:
	class FString                                 _assetPath;                                        // 0x0028(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 _csvPath;                                          // 0x0038(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StringTableUtilitySettings">();
	}
	static class UStringTableUtilitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStringTableUtilitySettings>();
	}
};
static_assert(alignof(UStringTableUtilitySettings) == 0x000008, "Wrong alignment on UStringTableUtilitySettings");
static_assert(sizeof(UStringTableUtilitySettings) == 0x000048, "Wrong size on UStringTableUtilitySettings");
static_assert(offsetof(UStringTableUtilitySettings, _assetPath) == 0x000028, "Member 'UStringTableUtilitySettings::_assetPath' has a wrong offset!");
static_assert(offsetof(UStringTableUtilitySettings, _csvPath) == 0x000038, "Member 'UStringTableUtilitySettings::_csvPath' has a wrong offset!");

}
