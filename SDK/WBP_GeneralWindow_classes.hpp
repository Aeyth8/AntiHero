#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GeneralWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UIFramework_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GeneralWindow.WBP_GeneralWindow_C
// 0x00A0 (0x0638 - 0x0598)
class UWBP_GeneralWindow_C final : public UWidgetGeneralWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_out;                                           // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Idle;                                          // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_in;                                            // 0x05B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BlockBG;                                           // 0x05B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             CustomNameSlot;                                    // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             HeaderSlot;                                        // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Black;                                       // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundAtomCue*                          OneButtonPressOverride;                            // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          LeftButtonPressOverride;                           // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          RightButtonPressOverride;                          // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          RightButtonFocusOverride;                          // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          RightButtonShortcutOverride;                       // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          RightButtonNegativeOverride;                       // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          LeftButtonFocusOverride;                           // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          LeftButtonShortcutOverride;                        // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          LeftButtonNegativeOverride;                        // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          OneButtonFocusOverride;                            // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          OneButtonShortcutOverride;                         // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          OneButtonNegativeOverride;                         // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_GeneralWindow(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void OnClose();
	void OnOpen();
	struct FEventReply On_BlockBG_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstructSE();
	void SetOverridePressAtomCue(class USoundAtomCue* OverrideAtomCue, class UWidgetButton* Button);
	void SetOverrideFocusAtomCue(class USoundAtomCue* OverrideAtomCue, class UWidgetButton* Button);
	void SetOverrideShortcutAtomCue(class USoundAtomCue* OverrideAtomCue, class UWidgetButton* Button);
	void SetOverrideNegativeAtomCue(class USoundAtomCue* OverrideAtomCue, class UWidgetButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GeneralWindow_C">();
	}
	static class UWBP_GeneralWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GeneralWindow_C>();
	}
};
static_assert(alignof(UWBP_GeneralWindow_C) == 0x000008, "Wrong alignment on UWBP_GeneralWindow_C");
static_assert(sizeof(UWBP_GeneralWindow_C) == 0x000638, "Wrong size on UWBP_GeneralWindow_C");
static_assert(offsetof(UWBP_GeneralWindow_C, UberGraphFrame) == 0x000598, "Member 'UWBP_GeneralWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, Ani_out) == 0x0005A0, "Member 'UWBP_GeneralWindow_C::Ani_out' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, Ani_Idle) == 0x0005A8, "Member 'UWBP_GeneralWindow_C::Ani_Idle' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, Ani_in) == 0x0005B0, "Member 'UWBP_GeneralWindow_C::Ani_in' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, BlockBG) == 0x0005B8, "Member 'UWBP_GeneralWindow_C::BlockBG' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, CustomNameSlot) == 0x0005C0, "Member 'UWBP_GeneralWindow_C::CustomNameSlot' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, HeaderSlot) == 0x0005C8, "Member 'UWBP_GeneralWindow_C::HeaderSlot' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, Image_Black) == 0x0005D0, "Member 'UWBP_GeneralWindow_C::Image_Black' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, OneButtonPressOverride) == 0x0005D8, "Member 'UWBP_GeneralWindow_C::OneButtonPressOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, LeftButtonPressOverride) == 0x0005E0, "Member 'UWBP_GeneralWindow_C::LeftButtonPressOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, RightButtonPressOverride) == 0x0005E8, "Member 'UWBP_GeneralWindow_C::RightButtonPressOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, RightButtonFocusOverride) == 0x0005F0, "Member 'UWBP_GeneralWindow_C::RightButtonFocusOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, RightButtonShortcutOverride) == 0x0005F8, "Member 'UWBP_GeneralWindow_C::RightButtonShortcutOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, RightButtonNegativeOverride) == 0x000600, "Member 'UWBP_GeneralWindow_C::RightButtonNegativeOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, LeftButtonFocusOverride) == 0x000608, "Member 'UWBP_GeneralWindow_C::LeftButtonFocusOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, LeftButtonShortcutOverride) == 0x000610, "Member 'UWBP_GeneralWindow_C::LeftButtonShortcutOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, LeftButtonNegativeOverride) == 0x000618, "Member 'UWBP_GeneralWindow_C::LeftButtonNegativeOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, OneButtonFocusOverride) == 0x000620, "Member 'UWBP_GeneralWindow_C::OneButtonFocusOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, OneButtonShortcutOverride) == 0x000628, "Member 'UWBP_GeneralWindow_C::OneButtonShortcutOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GeneralWindow_C, OneButtonNegativeOverride) == 0x000630, "Member 'UWBP_GeneralWindow_C::OneButtonNegativeOverride' has a wrong offset!");

}
