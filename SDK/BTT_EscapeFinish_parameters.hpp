#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_EscapeFinish

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTT_EscapeFinish.BTT_EscapeFinish_C.ExecuteUbergraph_BTT_EscapeFinish
// 0x0050 (0x0050 - 0x0000)
struct BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIControllerBattle*                    K2Node_DynamicCast_AsAIController_Battle;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_EscapeFinish_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIControllerBattle*                    K2Node_DynamicCast_AsAIController_Battle_1;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BP_EscapeFinish_ReturnValue_1;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish) == 0x000008, "Wrong alignment on BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish");
static_assert(sizeof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish) == 0x000050, "Wrong size on BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, EntryPoint) == 0x000000, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, K2Node_Event_OwnerController_1) == 0x000008, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, K2Node_Event_ControlledPawn_1) == 0x000010, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, K2Node_DynamicCast_AsAIController_Battle) == 0x000018, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::K2Node_DynamicCast_AsAIController_Battle' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, K2Node_Event_OwnerController) == 0x000028, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, K2Node_Event_ControlledPawn) == 0x000030, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, CallFunc_BP_EscapeFinish_ReturnValue) == 0x000038, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::CallFunc_BP_EscapeFinish_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, K2Node_DynamicCast_AsAIController_Battle_1) == 0x000040, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::K2Node_DynamicCast_AsAIController_Battle_1' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish, CallFunc_BP_EscapeFinish_ReturnValue_1) == 0x00004C, "Member 'BTT_EscapeFinish_C_ExecuteUbergraph_BTT_EscapeFinish::CallFunc_BP_EscapeFinish_ReturnValue_1' has a wrong offset!");

// Function BTT_EscapeFinish.BTT_EscapeFinish_C.ReceiveAbortAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_EscapeFinish_C_ReceiveAbortAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_EscapeFinish_C_ReceiveAbortAI) == 0x000008, "Wrong alignment on BTT_EscapeFinish_C_ReceiveAbortAI");
static_assert(sizeof(BTT_EscapeFinish_C_ReceiveAbortAI) == 0x000010, "Wrong size on BTT_EscapeFinish_C_ReceiveAbortAI");
static_assert(offsetof(BTT_EscapeFinish_C_ReceiveAbortAI, OwnerController) == 0x000000, "Member 'BTT_EscapeFinish_C_ReceiveAbortAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ReceiveAbortAI, ControlledPawn) == 0x000008, "Member 'BTT_EscapeFinish_C_ReceiveAbortAI::ControlledPawn' has a wrong offset!");

// Function BTT_EscapeFinish.BTT_EscapeFinish_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_EscapeFinish_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_EscapeFinish_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_EscapeFinish_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_EscapeFinish_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_EscapeFinish_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_EscapeFinish_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_EscapeFinish_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_EscapeFinish_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_EscapeFinish_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}
