#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TitleMenuWindow

#include "Basic.hpp"

#include "UIFramework_structs.hpp"


namespace SDK::Params
{

// Function WBP_TitleMenuWindow.WBP_TitleMenuWindow_C.ExecuteUbergraph_WBP_TitleMenuWindow
// 0x0080 (0x0080 - 0x0000)
struct WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppWidgetWork*                         CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class ULevelStreaming*                        CallFunc_OpenLevel_LevelInstance;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnFadeFinished                        K2Node_MakeStruct_OnFadeFinished;                  // 0x0028(0x0010)(NoDestructor, ContainsInstancedReference)
	class UAppWidget*                             K2Node_ComponentBoundEvent_widget_3;               // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWidgetInputType                              K2Node_ComponentBoundEvent_inputType_3;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppWidget*                             K2Node_ComponentBoundEvent_widget_2;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWidgetInputType                              K2Node_ComponentBoundEvent_inputType_2;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppWidget*                             K2Node_ComponentBoundEvent_widget_1;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWidgetInputType                              K2Node_ComponentBoundEvent_inputType_1;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppWidget*                             K2Node_ComponentBoundEvent_widget;                 // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWidgetInputType                              K2Node_ComponentBoundEvent_inputType;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameSequenceWork*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow) == 0x000008, "Wrong alignment on WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow");
static_assert(sizeof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow) == 0x000080, "Wrong size on WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, EntryPoint) == 0x000000, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, CallFunc_OpenLevel_LevelInstance) == 0x000020, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::CallFunc_OpenLevel_LevelInstance' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_MakeStruct_OnFadeFinished) == 0x000028, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_MakeStruct_OnFadeFinished' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_ComponentBoundEvent_widget_3) == 0x000038, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_ComponentBoundEvent_widget_3' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_ComponentBoundEvent_inputType_3) == 0x000040, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_ComponentBoundEvent_inputType_3' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_ComponentBoundEvent_widget_2) == 0x000048, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_ComponentBoundEvent_widget_2' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_ComponentBoundEvent_inputType_2) == 0x000050, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_ComponentBoundEvent_inputType_2' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_ComponentBoundEvent_widget_1) == 0x000058, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_ComponentBoundEvent_widget_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_ComponentBoundEvent_inputType_1) == 0x000060, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_ComponentBoundEvent_inputType_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_ComponentBoundEvent_widget) == 0x000068, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_ComponentBoundEvent_widget' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, K2Node_ComponentBoundEvent_inputType) == 0x000070, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::K2Node_ComponentBoundEvent_inputType' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000078, "Member 'WBP_TitleMenuWindow_C_ExecuteUbergraph_WBP_TitleMenuWindow::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");

// Function WBP_TitleMenuWindow.WBP_TitleMenuWindow_C.BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature final
{
public:
	class UAppWidget*                             Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWidgetInputType                              InputType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature");
static_assert(sizeof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature) == 0x000010, "Wrong size on WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature");
static_assert(offsetof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature, Widget) == 0x000000, "Member 'WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature, InputType) == 0x000008, "Member 'WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_bnidButton_K2Node_ComponentBoundEvent_1_OnInputEventDelegate__DelegateSignature::InputType' has a wrong offset!");

// Function WBP_TitleMenuWindow.WBP_TitleMenuWindow_C.BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature final
{
public:
	class UAppWidget*                             Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWidgetInputType                              InputType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature");
static_assert(sizeof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature) == 0x000010, "Wrong size on WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature");
static_assert(offsetof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature, Widget) == 0x000000, "Member 'WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature, InputType) == 0x000008, "Member 'WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_versionButton_K2Node_ComponentBoundEvent_2_OnInputEventDelegate__DelegateSignature::InputType' has a wrong offset!");

// Function WBP_TitleMenuWindow.WBP_TitleMenuWindow_C.BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature final
{
public:
	class UAppWidget*                             Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWidgetInputType                              InputType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature");
static_assert(sizeof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature) == 0x000010, "Wrong size on WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature");
static_assert(offsetof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature, Widget) == 0x000000, "Member 'WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature, InputType) == 0x000008, "Member 'WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_EndButton_K2Node_ComponentBoundEvent_7_OnInputEventDelegate__DelegateSignature::InputType' has a wrong offset!");

// Function WBP_TitleMenuWindow.WBP_TitleMenuWindow_C.BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature final
{
public:
	class UAppWidget*                             Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWidgetInputType                              InputType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature");
static_assert(sizeof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature) == 0x000010, "Wrong size on WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature");
static_assert(offsetof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature, Widget) == 0x000000, "Member 'WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature, InputType) == 0x000008, "Member 'WBP_TitleMenuWindow_C_BndEvt__WBP_TitleMenuWindow_settingButton_K2Node_ComponentBoundEvent_3_OnInputEventDelegate__DelegateSignature::InputType' has a wrong offset!");

}
