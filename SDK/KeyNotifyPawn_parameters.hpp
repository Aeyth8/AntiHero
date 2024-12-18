#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeyNotifyPawn

#include "Basic.hpp"

#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function KeyNotifyPawn.KeyNotifyPawn_C.ExecuteUbergraph_KeyNotifyPawn
// 0x0170 (0x0170 - 0x0000)
struct KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputKeyEvent_Key_7;                        // 0x0008(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_2;                        // 0x0020(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_1;                        // 0x0038(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x0050(0x0018)(HasGetValueTypeHash)
	class UWBP_Menu_C*                            K2Node_CustomEvent_Widget;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IKeyNotifyInterface_C> K2Node_DynamicCast_AsKeyNotifInterface;            // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IKeyNotifyInterface_C> K2Node_DynamicCast_AsKeyNotifInterface_1;          // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputKeyEvent_Key_3;                        // 0x00A0(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_4;                        // 0x00B8(0x0018)(HasGetValueTypeHash)
	TScriptInterface<class IKeyNotifyInterface_C> K2Node_DynamicCast_AsKeyNotifInterface_2;          // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IKeyNotifyInterface_C> K2Node_DynamicCast_AsKeyNotifInterface_3;          // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IKeyNotifyInterface_C> CallFunc_PadClose_self_CastInput;                  // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                   K2Node_InputKeyEvent_Key_5;                        // 0x0110(0x0018)(HasGetValueTypeHash)
	TScriptInterface<class IKeyNotifyInterface_C> CallFunc_PadTableSelect_self_CastInput;            // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IKeyNotifyInterface_C> CallFunc_PadTableListUp_self_CastInput;            // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                   K2Node_InputKeyEvent_Key_6;                        // 0x0148(0x0018)(HasGetValueTypeHash)
	TScriptInterface<class IKeyNotifyInterface_C> CallFunc_PadTableListDown_self_CastInput;          // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn");
static_assert(sizeof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn) == 0x000170, "Wrong size on KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, EntryPoint) == 0x000000, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_InputKeyEvent_Key_7) == 0x000008, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_InputKeyEvent_Key_7' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_InputKeyEvent_Key_2) == 0x000020, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_InputKeyEvent_Key_2' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_InputKeyEvent_Key_1) == 0x000038, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_InputKeyEvent_Key_1' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_InputKeyEvent_Key) == 0x000050, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_InputKeyEvent_Key' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_CustomEvent_Widget) == 0x000068, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_DynamicCast_AsKeyNotifInterface) == 0x000070, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_DynamicCast_AsKeyNotifInterface' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_DynamicCast_AsKeyNotifInterface_1) == 0x000088, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_DynamicCast_AsKeyNotifInterface_1' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_InputKeyEvent_Key_3) == 0x0000A0, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_InputKeyEvent_Key_3' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_InputKeyEvent_Key_4) == 0x0000B8, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_InputKeyEvent_Key_4' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_DynamicCast_AsKeyNotifInterface_2) == 0x0000D0, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_DynamicCast_AsKeyNotifInterface_2' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_DynamicCast_bSuccess_2) == 0x0000E0, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_DynamicCast_AsKeyNotifInterface_3) == 0x0000E8, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_DynamicCast_AsKeyNotifInterface_3' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_DynamicCast_bSuccess_3) == 0x0000F8, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, CallFunc_PadClose_self_CastInput) == 0x000100, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::CallFunc_PadClose_self_CastInput' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_InputKeyEvent_Key_5) == 0x000110, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_InputKeyEvent_Key_5' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, CallFunc_PadTableSelect_self_CastInput) == 0x000128, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::CallFunc_PadTableSelect_self_CastInput' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, CallFunc_PadTableListUp_self_CastInput) == 0x000138, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::CallFunc_PadTableListUp_self_CastInput' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, K2Node_InputKeyEvent_Key_6) == 0x000148, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::K2Node_InputKeyEvent_Key_6' has a wrong offset!");
static_assert(offsetof(KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn, CallFunc_PadTableListDown_self_CastInput) == 0x000160, "Member 'KeyNotifyPawn_C_ExecuteUbergraph_KeyNotifyPawn::CallFunc_PadTableListDown_self_CastInput' has a wrong offset!");

// Function KeyNotifyPawn.KeyNotifyPawn_C.SetWidget
// 0x0008 (0x0008 - 0x0000)
struct KeyNotifyPawn_C_SetWidget final
{
public:
	class UWBP_Menu_C*                            Widget_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyNotifyPawn_C_SetWidget) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_SetWidget");
static_assert(sizeof(KeyNotifyPawn_C_SetWidget) == 0x000008, "Wrong size on KeyNotifyPawn_C_SetWidget");
static_assert(offsetof(KeyNotifyPawn_C_SetWidget, Widget_0) == 0x000000, "Member 'KeyNotifyPawn_C_SetWidget::Widget_0' has a wrong offset!");

// Function KeyNotifyPawn.KeyNotifyPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_0
// 0x0018 (0x0018 - 0x0000)
struct KeyNotifyPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyNotifyPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_0) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_0");
static_assert(sizeof(KeyNotifyPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_0) == 0x000018, "Wrong size on KeyNotifyPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_0");
static_assert(offsetof(KeyNotifyPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_0, Key) == 0x000000, "Member 'KeyNotifyPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_0::Key' has a wrong offset!");

// Function KeyNotifyPawn.KeyNotifyPawn_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_1
// 0x0018 (0x0018 - 0x0000)
struct KeyNotifyPawn_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_1 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyNotifyPawn_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_1) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_1");
static_assert(sizeof(KeyNotifyPawn_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_1) == 0x000018, "Wrong size on KeyNotifyPawn_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_1");
static_assert(offsetof(KeyNotifyPawn_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_1, Key) == 0x000000, "Member 'KeyNotifyPawn_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_1::Key' has a wrong offset!");

// Function KeyNotifyPawn.KeyNotifyPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2
// 0x0018 (0x0018 - 0x0000)
struct KeyNotifyPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyNotifyPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2");
static_assert(sizeof(KeyNotifyPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2) == 0x000018, "Wrong size on KeyNotifyPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2");
static_assert(offsetof(KeyNotifyPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2, Key) == 0x000000, "Member 'KeyNotifyPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2::Key' has a wrong offset!");

// Function KeyNotifyPawn.KeyNotifyPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_3
// 0x0018 (0x0018 - 0x0000)
struct KeyNotifyPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_3 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyNotifyPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_3) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_3");
static_assert(sizeof(KeyNotifyPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_3) == 0x000018, "Wrong size on KeyNotifyPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_3");
static_assert(offsetof(KeyNotifyPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_3, Key) == 0x000000, "Member 'KeyNotifyPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_3::Key' has a wrong offset!");

// Function KeyNotifyPawn.KeyNotifyPawn_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4
// 0x0018 (0x0018 - 0x0000)
struct KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4");
static_assert(sizeof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4) == 0x000018, "Wrong size on KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4");
static_assert(offsetof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4, Key) == 0x000000, "Member 'KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4::Key' has a wrong offset!");

// Function KeyNotifyPawn.KeyNotifyPawn_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5
// 0x0018 (0x0018 - 0x0000)
struct KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5");
static_assert(sizeof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5) == 0x000018, "Wrong size on KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5");
static_assert(offsetof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5, Key) == 0x000000, "Member 'KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5::Key' has a wrong offset!");

// Function KeyNotifyPawn.KeyNotifyPawn_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6
// 0x0018 (0x0018 - 0x0000)
struct KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6");
static_assert(sizeof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6) == 0x000018, "Wrong size on KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6");
static_assert(offsetof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6, Key) == 0x000000, "Member 'KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_6::Key' has a wrong offset!");

// Function KeyNotifyPawn.KeyNotifyPawn_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7
// 0x0018 (0x0018 - 0x0000)
struct KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7) == 0x000008, "Wrong alignment on KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7");
static_assert(sizeof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7) == 0x000018, "Wrong size on KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7");
static_assert(offsetof(KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7, Key) == 0x000000, "Member 'KeyNotifyPawn_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7::Key' has a wrong offset!");

}

