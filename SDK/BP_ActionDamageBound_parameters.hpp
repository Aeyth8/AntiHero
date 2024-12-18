#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageBound

#include "Basic.hpp"

#include "GameModule_structs.hpp"
#include "InGameModule_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionDamageBound.BP_ActionDamageBound_C.ExecuteUbergraph_BP_ActionDamageBound
// 0x00E0 (0x00E0 - 0x0000)
struct BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_prevAction;                           // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_1;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterDamageComponent*              CallFunc_BP_GetOwnerDamage_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  CallFunc_DecideAnimationId_AnimationId;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterBattleVoiceComponent*         CallFunc_BP_GetBattleVoiceComponent_ReturnValue;   // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDamageInfo                            CallFunc_BP_GetDamageInfo_ReturnValue;             // 0x0050(0x0080)(ConstParm, NoDestructor)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_2;           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_nextAction;                           // 0x00D8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound) == 0x000008, "Wrong alignment on BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound");
static_assert(sizeof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound) == 0x0000E0, "Wrong size on BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, EntryPoint) == 0x000000, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_BP_GetOwnerState_ReturnValue) == 0x000008, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_BP_GetOwnerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, K2Node_Event_prevAction) == 0x000010, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::K2Node_Event_prevAction' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_BP_GetAnimation_ReturnValue) == 0x000018, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_BP_GetOwnerState_ReturnValue_1) == 0x000020, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_BP_GetOwnerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_BP_GetOwnerMovementBattle_ReturnValue) == 0x000028, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_BP_GetOwnerMovementBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_BP_GetOwnerDamage_ReturnValue) == 0x000030, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_BP_GetOwnerDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_DecideAnimationId_AnimationId) == 0x000038, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_DecideAnimationId_AnimationId' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000040, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_BP_GetBattleVoiceComponent_ReturnValue) == 0x000048, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_BP_GetBattleVoiceComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_BP_GetDamageInfo_ReturnValue) == 0x000050, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_BP_GetDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, CallFunc_BP_GetOwnerState_ReturnValue_2) == 0x0000D0, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::CallFunc_BP_GetOwnerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound, K2Node_Event_nextAction) == 0x0000D8, "Member 'BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound::K2Node_Event_nextAction' has a wrong offset!");

// Function BP_ActionDamageBound.BP_ActionDamageBound_C.BP_OnEndAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionDamageBound_C_BP_OnEndAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamageBound_C_BP_OnEndAction) == 0x000004, "Wrong alignment on BP_ActionDamageBound_C_BP_OnEndAction");
static_assert(sizeof(BP_ActionDamageBound_C_BP_OnEndAction) == 0x000008, "Wrong size on BP_ActionDamageBound_C_BP_OnEndAction");
static_assert(offsetof(BP_ActionDamageBound_C_BP_OnEndAction, NextAction) == 0x000000, "Member 'BP_ActionDamageBound_C_BP_OnEndAction::NextAction' has a wrong offset!");

// Function BP_ActionDamageBound.BP_ActionDamageBound_C.BP_OnBeginAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionDamageBound_C_BP_OnBeginAction final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamageBound_C_BP_OnBeginAction) == 0x000004, "Wrong alignment on BP_ActionDamageBound_C_BP_OnBeginAction");
static_assert(sizeof(BP_ActionDamageBound_C_BP_OnBeginAction) == 0x000008, "Wrong size on BP_ActionDamageBound_C_BP_OnBeginAction");
static_assert(offsetof(BP_ActionDamageBound_C_BP_OnBeginAction, PrevAction) == 0x000000, "Member 'BP_ActionDamageBound_C_BP_OnBeginAction::PrevAction' has a wrong offset!");

// Function BP_ActionDamageBound.BP_ActionDamageBound_C.DecideAnimationId
// 0x0090 (0x0090 - 0x0000)
struct BP_ActionDamageBound_C_DecideAnimationId final
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
static_assert(alignof(BP_ActionDamageBound_C_DecideAnimationId) == 0x000008, "Wrong alignment on BP_ActionDamageBound_C_DecideAnimationId");
static_assert(sizeof(BP_ActionDamageBound_C_DecideAnimationId) == 0x000090, "Wrong size on BP_ActionDamageBound_C_DecideAnimationId");
static_assert(offsetof(BP_ActionDamageBound_C_DecideAnimationId, AnimationId) == 0x000000, "Member 'BP_ActionDamageBound_C_DecideAnimationId::AnimationId' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_DecideAnimationId, Temp_bool_Variable) == 0x000001, "Member 'BP_ActionDamageBound_C_DecideAnimationId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_DecideAnimationId, Temp_byte_Variable) == 0x000002, "Member 'BP_ActionDamageBound_C_DecideAnimationId::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_DecideAnimationId, Temp_byte_Variable_1) == 0x000003, "Member 'BP_ActionDamageBound_C_DecideAnimationId::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_DecideAnimationId, CallFunc_BP_GetDamageInfo_ReturnValue) == 0x000008, "Member 'BP_ActionDamageBound_C_DecideAnimationId::CallFunc_BP_GetDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_DecideAnimationId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'BP_ActionDamageBound_C_DecideAnimationId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamageBound_C_DecideAnimationId, K2Node_Select_Default) == 0x000089, "Member 'BP_ActionDamageBound_C_DecideAnimationId::K2Node_Select_Default' has a wrong offset!");

}

