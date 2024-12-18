#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TitleButton

#include "Basic.hpp"

#include "GameModule_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TitleButton.WBP_TitleButton_C
// 0x0018 (0x0648 - 0x0630)
class UWBP_TitleButton_C final : public UPlatformWidgetButton
{
public:
	class UNamedSlot*                             Body;                                              // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             TopText;                                           // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TitleButton_C">();
	}
	static class UWBP_TitleButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TitleButton_C>();
	}
};
static_assert(alignof(UWBP_TitleButton_C) == 0x000008, "Wrong alignment on UWBP_TitleButton_C");
static_assert(sizeof(UWBP_TitleButton_C) == 0x000648, "Wrong size on UWBP_TitleButton_C");
static_assert(offsetof(UWBP_TitleButton_C, Body) == 0x000630, "Member 'UWBP_TitleButton_C::Body' has a wrong offset!");
static_assert(offsetof(UWBP_TitleButton_C, Image_6) == 0x000638, "Member 'UWBP_TitleButton_C::Image_6' has a wrong offset!");
static_assert(offsetof(UWBP_TitleButton_C, TopText) == 0x000640, "Member 'UWBP_TitleButton_C::TopText' has a wrong offset!");

}

