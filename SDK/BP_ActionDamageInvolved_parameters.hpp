#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageInvolved

#include "Basic.hpp"

#include "GameModule_structs.hpp"
#include "InGameModule_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionDamageInvolved.BP_ActionDamageInvolved_C.ExecuteUbergraph_BP_ActionDamageInvolved
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_prevAction;                           // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved) == 0x000008, "Wrong alignment on BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved");
static_assert(sizeof(BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved) == 0x000020, "Wrong size on BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved");
static_assert(offsetof(BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved, EntryPoint) == 0x000000, "Member 'BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved, CallFunc_BP_GetOwnerState_ReturnValue) == 0x000008, "Member 'BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved::CallFunc_BP_GetOwnerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved, K2Node_Event_prevAction) == 0x000010, "Member 'BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved::K2Node_Event_prevAction' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved, CallFunc_BP_GetAnimation_ReturnValue) == 0x000018, "Member 'BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");

// Function BP_ActionDamageInvolved.BP_ActionDamageInvolved_C.BP_OnBeginAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionDamageInvolved_C_BP_OnBeginAction final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamageInvolved_C_BP_OnBeginAction) == 0x000004, "Wrong alignment on BP_ActionDamageInvolved_C_BP_OnBeginAction");
static_assert(sizeof(BP_ActionDamageInvolved_C_BP_OnBeginAction) == 0x000008, "Wrong size on BP_ActionDamageInvolved_C_BP_OnBeginAction");
static_assert(offsetof(BP_ActionDamageInvolved_C_BP_OnBeginAction, PrevAction) == 0x000000, "Member 'BP_ActionDamageInvolved_C_BP_OnBeginAction::PrevAction' has a wrong offset!");

// Function BP_ActionDamageInvolved.BP_ActionDamageInvolved_C.DecideAnimation
// 0x0090 (0x0090 - 0x0000)
struct BP_ActionDamageInvolved_C_DecideAnimation final
{
public:
	EAnimationId                                  AnimationId;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAnimationId                                  Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDamageInfo                            CallFunc_BP_GetDamageInfo_ReturnValue;             // 0x0008(0x0080)(ConstParm, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAnimationId                                  K2Node_Select_Default;                             // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamageInvolved_C_DecideAnimation) == 0x000008, "Wrong alignment on BP_ActionDamageInvolved_C_DecideAnimation");
static_assert(sizeof(BP_ActionDamageInvolved_C_DecideAnimation) == 0x000090, "Wrong size on BP_ActionDamageInvolved_C_DecideAnimation");
static_assert(offsetof(BP_ActionDamageInvolved_C_DecideAnimation, AnimationId) == 0x000000, "Member 'BP_ActionDamageInvolved_C_DecideAnimation::AnimationId' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageInvolved_C_DecideAnimation, Temp_bool_Variable) == 0x000001, "Member 'BP_ActionDamageInvolved_C_DecideAnimation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageInvolved_C_DecideAnimation, Temp_byte_Variable) == 0x000002, "Member 'BP_ActionDamageInvolved_C_DecideAnimation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageInvolved_C_DecideAnimation, Temp_byte_Variable_1) == 0x000003, "Member 'BP_ActionDamageInvolved_C_DecideAnimation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageInvolved_C_DecideAnimation, CallFunc_BP_GetDamageInfo_ReturnValue) == 0x000008, "Member 'BP_ActionDamageInvolved_C_DecideAnimation::CallFunc_BP_GetDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageInvolved_C_DecideAnimation, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'BP_ActionDamageInvolved_C_DecideAnimation::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageInvolved_C_DecideAnimation, K2Node_Select_Default) == 0x000089, "Member 'BP_ActionDamageInvolved_C_DecideAnimation::K2Node_Select_Default' has a wrong offset!");

}

