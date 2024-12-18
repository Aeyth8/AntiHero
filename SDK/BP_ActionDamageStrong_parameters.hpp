#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageStrong

#include "Basic.hpp"

#include "GameModule_structs.hpp"
#include "InGameModule_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionDamageStrong.BP_ActionDamageStrong_C.ExecuteUbergraph_BP_ActionDamageStrong
// 0x00E0 (0x00E0 - 0x0000)
struct BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDamageParam                           CallFunc_BP_GetDamageParam_ReturnValue;            // 0x0004(0x00A4)(ConstParm, NoDestructor)
	class FName                                   K2Node_Event_prevAction;                           // 0x00A8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  CallFunc_DecideAnimationId_AnimationId;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_1;           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_2;           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsOnGround_ReturnValue;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong) == 0x000008, "Wrong alignment on BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong");
static_assert(sizeof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong) == 0x0000E0, "Wrong size on BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong");
static_assert(offsetof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong, EntryPoint) == 0x000000, "Member 'BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong, CallFunc_BP_GetDamageParam_ReturnValue) == 0x000004, "Member 'BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong::CallFunc_BP_GetDamageParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong, K2Node_Event_prevAction) == 0x0000A8, "Member 'BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong::K2Node_Event_prevAction' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong, CallFunc_BP_GetAnimation_ReturnValue) == 0x0000B0, "Member 'BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong, CallFunc_BP_GetOwnerState_ReturnValue) == 0x0000B8, "Member 'BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong::CallFunc_BP_GetOwnerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong, CallFunc_DecideAnimationId_AnimationId) == 0x0000C0, "Member 'BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong::CallFunc_DecideAnimationId_AnimationId' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong, CallFunc_BP_GetOwnerState_ReturnValue_1) == 0x0000C8, "Member 'BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong::CallFunc_BP_GetOwnerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong, CallFunc_BP_GetOwnerState_ReturnValue_2) == 0x0000D0, "Member 'BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong::CallFunc_BP_GetOwnerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong, CallFunc_BP_IsOnGround_ReturnValue) == 0x0000D8, "Member 'BP_ActionDamageStrong_C_ExecuteUbergraph_BP_ActionDamageStrong::CallFunc_BP_IsOnGround_ReturnValue' has a wrong offset!");

// Function BP_ActionDamageStrong.BP_ActionDamageStrong_C.BP_OnBeginAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionDamageStrong_C_BP_OnBeginAction final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamageStrong_C_BP_OnBeginAction) == 0x000004, "Wrong alignment on BP_ActionDamageStrong_C_BP_OnBeginAction");
static_assert(sizeof(BP_ActionDamageStrong_C_BP_OnBeginAction) == 0x000008, "Wrong size on BP_ActionDamageStrong_C_BP_OnBeginAction");
static_assert(offsetof(BP_ActionDamageStrong_C_BP_OnBeginAction, PrevAction) == 0x000000, "Member 'BP_ActionDamageStrong_C_BP_OnBeginAction::PrevAction' has a wrong offset!");

// Function BP_ActionDamageStrong.BP_ActionDamageStrong_C.DecideAnimationId
// 0x0090 (0x0090 - 0x0000)
struct BP_ActionDamageStrong_C_DecideAnimationId final
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
static_assert(alignof(BP_ActionDamageStrong_C_DecideAnimationId) == 0x000008, "Wrong alignment on BP_ActionDamageStrong_C_DecideAnimationId");
static_assert(sizeof(BP_ActionDamageStrong_C_DecideAnimationId) == 0x000090, "Wrong size on BP_ActionDamageStrong_C_DecideAnimationId");
static_assert(offsetof(BP_ActionDamageStrong_C_DecideAnimationId, AnimationId) == 0x000000, "Member 'BP_ActionDamageStrong_C_DecideAnimationId::AnimationId' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_DecideAnimationId, Temp_bool_Variable) == 0x000001, "Member 'BP_ActionDamageStrong_C_DecideAnimationId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_DecideAnimationId, Temp_byte_Variable) == 0x000002, "Member 'BP_ActionDamageStrong_C_DecideAnimationId::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_DecideAnimationId, Temp_byte_Variable_1) == 0x000003, "Member 'BP_ActionDamageStrong_C_DecideAnimationId::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_DecideAnimationId, CallFunc_BP_GetDamageInfo_ReturnValue) == 0x000008, "Member 'BP_ActionDamageStrong_C_DecideAnimationId::CallFunc_BP_GetDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_DecideAnimationId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'BP_ActionDamageStrong_C_DecideAnimationId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageStrong_C_DecideAnimationId, K2Node_Select_Default) == 0x000089, "Member 'BP_ActionDamageStrong_C_DecideAnimationId::K2Node_Select_Default' has a wrong offset!");

}

