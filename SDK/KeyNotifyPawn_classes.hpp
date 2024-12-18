#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeyNotifyPawn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass KeyNotifyPawn.KeyNotifyPawn_C
// 0x0018 (0x0298 - 0x0280)
class AKeyNotifyPawn_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_C*                            Widget;                                            // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_KeyNotifyPawn(int32 EntryPoint);
	void SetWidget(class UWBP_Menu_C* Widget_0);
	void PadTableSelect();
	void PadClose();
	void PadReDownload();
	void PadReCopy();
	void PadDeInitialize();
	void PadTableListDown();
	void PadTableListUp();
	void PadInitialize();
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyNotifyPawn_C">();
	}
	static class AKeyNotifyPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKeyNotifyPawn_C>();
	}
};
static_assert(alignof(AKeyNotifyPawn_C) == 0x000008, "Wrong alignment on AKeyNotifyPawn_C");
static_assert(sizeof(AKeyNotifyPawn_C) == 0x000298, "Wrong size on AKeyNotifyPawn_C");
static_assert(offsetof(AKeyNotifyPawn_C, UberGraphFrame) == 0x000280, "Member 'AKeyNotifyPawn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AKeyNotifyPawn_C, DefaultSceneRoot) == 0x000288, "Member 'AKeyNotifyPawn_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AKeyNotifyPawn_C, Widget) == 0x000290, "Member 'AKeyNotifyPawn_C::Widget' has a wrong offset!");

}

