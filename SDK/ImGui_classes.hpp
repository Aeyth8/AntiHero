#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImGui

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ImGui_structs.hpp"


namespace SDK
{

// Class ImGui.ImGuiInputHandler
// 0x0028 (0x0050 - 0x0028)
class UImGuiInputHandler final : public UObject
{
public:
	uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImGuiInputHandler">();
	}
	static class UImGuiInputHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImGuiInputHandler>();
	}
};
static_assert(alignof(UImGuiInputHandler) == 0x000008, "Wrong alignment on UImGuiInputHandler");
static_assert(sizeof(UImGuiInputHandler) == 0x000050, "Wrong size on UImGuiInputHandler");

// Class ImGui.ImGuiSettings
// 0x00E8 (0x0110 - 0x0028)
class UImGuiSettings final : public UObject
{
public:
	struct FSoftClassPath                         ImGuiInputHandlerClass;                            // 0x0028(0x0018)(Edit, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShareKeyboardInput;                               // 0x0040(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShareGamepadInput;                                // 0x0041(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShareMouseInput;                                  // 0x0042(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bUseSoftwareCursor;                                // 0x0043(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FImGuiKeyInfo                          ToggleInput;                                       // 0x0048(0x0020)(Edit, Config, Protected, NativeAccessSpecifierProtected)
	struct FImGuiCanvasSizeInfo                   CanvasSize;                                        // 0x0068(0x0010)(Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FImGuiDPIScaleInfo                     DPIScale;                                          // 0x0078(0x0098)(Edit, Config, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImGuiSettings">();
	}
	static class UImGuiSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImGuiSettings>();
	}
};
static_assert(alignof(UImGuiSettings) == 0x000008, "Wrong alignment on UImGuiSettings");
static_assert(sizeof(UImGuiSettings) == 0x000110, "Wrong size on UImGuiSettings");
static_assert(offsetof(UImGuiSettings, ImGuiInputHandlerClass) == 0x000028, "Member 'UImGuiSettings::ImGuiInputHandlerClass' has a wrong offset!");
static_assert(offsetof(UImGuiSettings, bShareKeyboardInput) == 0x000040, "Member 'UImGuiSettings::bShareKeyboardInput' has a wrong offset!");
static_assert(offsetof(UImGuiSettings, bShareGamepadInput) == 0x000041, "Member 'UImGuiSettings::bShareGamepadInput' has a wrong offset!");
static_assert(offsetof(UImGuiSettings, bShareMouseInput) == 0x000042, "Member 'UImGuiSettings::bShareMouseInput' has a wrong offset!");
static_assert(offsetof(UImGuiSettings, bUseSoftwareCursor) == 0x000043, "Member 'UImGuiSettings::bUseSoftwareCursor' has a wrong offset!");
static_assert(offsetof(UImGuiSettings, ToggleInput) == 0x000048, "Member 'UImGuiSettings::ToggleInput' has a wrong offset!");
static_assert(offsetof(UImGuiSettings, CanvasSize) == 0x000068, "Member 'UImGuiSettings::CanvasSize' has a wrong offset!");
static_assert(offsetof(UImGuiSettings, DPIScale) == 0x000078, "Member 'UImGuiSettings::DPIScale' has a wrong offset!");

}
