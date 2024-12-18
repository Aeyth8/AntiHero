#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChatIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ChatIcon.WBP_ChatIcon_C.ExecuteUbergraph_WBP_ChatIcon
// 0x0040 (0x0040 - 0x0000)
struct WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Event_value;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation_1;                          // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNetworkWork*                           CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsChatUserPrivilege_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNetworkWork*                           CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsChatUserPrivilege_ReturnValue_1;     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon) == 0x000008, "Wrong alignment on WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon");
static_assert(sizeof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon) == 0x000040, "Wrong size on WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, EntryPoint) == 0x000000, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, K2Node_Event_value) == 0x000004, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::K2Node_Event_value' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, K2Node_Event_Animation_1) == 0x000008, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::K2Node_Event_Animation_1' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, CallFunc_BP_IsChatUserPrivilege_ReturnValue) == 0x000018, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::CallFunc_BP_IsChatUserPrivilege_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000020, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, CallFunc_BP_IsChatUserPrivilege_ReturnValue_1) == 0x000028, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::CallFunc_BP_IsChatUserPrivilege_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, CallFunc_Not_PreBool_ReturnValue_1) == 0x000029, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, K2Node_Event_Animation) == 0x000030, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000038, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000039, "Member 'WBP_ChatIcon_C_ExecuteUbergraph_WBP_ChatIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");

// Function WBP_ChatIcon.WBP_ChatIcon_C.OnAnimationStarted
// 0x0008 (0x0008 - 0x0000)
struct WBP_ChatIcon_C_OnAnimationStarted final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ChatIcon_C_OnAnimationStarted) == 0x000008, "Wrong alignment on WBP_ChatIcon_C_OnAnimationStarted");
static_assert(sizeof(WBP_ChatIcon_C_OnAnimationStarted) == 0x000008, "Wrong size on WBP_ChatIcon_C_OnAnimationStarted");
static_assert(offsetof(WBP_ChatIcon_C_OnAnimationStarted, Animation) == 0x000000, "Member 'WBP_ChatIcon_C_OnAnimationStarted::Animation' has a wrong offset!");

// Function WBP_ChatIcon.WBP_ChatIcon_C.SetNoticeVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_ChatIcon_C_SetNoticeVisibility final
{
public:
	ESlateVisibility                              Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ChatIcon_C_SetNoticeVisibility) == 0x000001, "Wrong alignment on WBP_ChatIcon_C_SetNoticeVisibility");
static_assert(sizeof(WBP_ChatIcon_C_SetNoticeVisibility) == 0x000001, "Wrong size on WBP_ChatIcon_C_SetNoticeVisibility");
static_assert(offsetof(WBP_ChatIcon_C_SetNoticeVisibility, Value) == 0x000000, "Member 'WBP_ChatIcon_C_SetNoticeVisibility::Value' has a wrong offset!");

// Function WBP_ChatIcon.WBP_ChatIcon_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_ChatIcon_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ChatIcon_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_ChatIcon_C_OnAnimationFinished");
static_assert(sizeof(WBP_ChatIcon_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_ChatIcon_C_OnAnimationFinished");
static_assert(offsetof(WBP_ChatIcon_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_ChatIcon_C_OnAnimationFinished::Animation' has a wrong offset!");

}

