#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TitleLocalizeLayout

#include "Basic.hpp"

#include "UIFramework_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TitleLocalizeLayout.WBP_TitleLocalizeLayout_C
// 0x0010 (0x0390 - 0x0380)
class UWBP_TitleLocalizeLayout_C final : public UWidgetLocalizeLayout
{
public:
	class UWidgetAnimation*                       Ani_Enter;                                         // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_FocusLoop;                                     // 0x0388(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TitleLocalizeLayout_C">();
	}
	static class UWBP_TitleLocalizeLayout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TitleLocalizeLayout_C>();
	}
};
static_assert(alignof(UWBP_TitleLocalizeLayout_C) == 0x000008, "Wrong alignment on UWBP_TitleLocalizeLayout_C");
static_assert(sizeof(UWBP_TitleLocalizeLayout_C) == 0x000390, "Wrong size on UWBP_TitleLocalizeLayout_C");
static_assert(offsetof(UWBP_TitleLocalizeLayout_C, Ani_Enter) == 0x000380, "Member 'UWBP_TitleLocalizeLayout_C::Ani_Enter' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalizeLayout_C, Ani_FocusLoop) == 0x000388, "Member 'UWBP_TitleLocalizeLayout_C::Ani_FocusLoop' has a wrong offset!");

}
