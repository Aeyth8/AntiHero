#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WindowFrame

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_WindowFrame.WBP_WindowFrame_C.ExecuteUbergraph_WBP_WindowFrame
// 0x0070 (0x0070 - 0x0000)
struct WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWindowSize_ReturnValue;                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame) == 0x000008, "Wrong alignment on WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame");
static_assert(sizeof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame) == 0x000070, "Wrong size on WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, EntryPoint) == 0x000000, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, K2Node_Event_IsDesignTime) == 0x000014, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000020, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000030, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_MakeVector2D_ReturnValue_1) == 0x00003C, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000048, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000050, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_IsValid_ReturnValue_3) == 0x000059, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_GetWindowSize_ReturnValue) == 0x00005C, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_GetWindowSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_MakeVector2D_ReturnValue_2) == 0x000060, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame, CallFunc_MakeVector2D_ReturnValue_3) == 0x000068, "Member 'WBP_WindowFrame_C_ExecuteUbergraph_WBP_WindowFrame::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");

// Function WBP_WindowFrame.WBP_WindowFrame_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_WindowFrame_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_WindowFrame_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_WindowFrame_C_PreConstruct");
static_assert(sizeof(WBP_WindowFrame_C_PreConstruct) == 0x000001, "Wrong size on WBP_WindowFrame_C_PreConstruct");
static_assert(offsetof(WBP_WindowFrame_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_WindowFrame_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_WindowFrame.WBP_WindowFrame_C.OnFinishedAni_In
// 0x0090 (0x0090 - 0x0000)
struct WBP_WindowFrame_C_OnFinishedAni_In final
{
public:
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x0000(0x001C)(NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WindowFrame_C_OnFinishedAni_In) == 0x000008, "Wrong alignment on WBP_WindowFrame_C_OnFinishedAni_In");
static_assert(sizeof(WBP_WindowFrame_C_OnFinishedAni_In) == 0x000090, "Wrong size on WBP_WindowFrame_C_OnFinishedAni_In");
static_assert(offsetof(WBP_WindowFrame_C_OnFinishedAni_In, K2Node_MakeStruct_WidgetTransform) == 0x000000, "Member 'WBP_WindowFrame_C_OnFinishedAni_In::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_OnFinishedAni_In, CallFunc_GetDisplayName_ReturnValue) == 0x000020, "Member 'WBP_WindowFrame_C_OnFinishedAni_In::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_OnFinishedAni_In, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'WBP_WindowFrame_C_OnFinishedAni_In::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_OnFinishedAni_In, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_WindowFrame_C_OnFinishedAni_In::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_OnFinishedAni_In, CallFunc_GetDisplayName_ReturnValue_1) == 0x000048, "Member 'WBP_WindowFrame_C_OnFinishedAni_In::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_OnFinishedAni_In, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'WBP_WindowFrame_C_OnFinishedAni_In::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_OnFinishedAni_In, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'WBP_WindowFrame_C_OnFinishedAni_In::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_OnFinishedAni_In, CallFunc_GetDisplayName_ReturnValue_2) == 0x000070, "Member 'WBP_WindowFrame_C_OnFinishedAni_In::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_WindowFrame_C_OnFinishedAni_In, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000080, "Member 'WBP_WindowFrame_C_OnFinishedAni_In::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

}
