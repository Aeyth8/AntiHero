#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDash

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionDash.BP_ActionDash_C.ExecuteUbergraph_BP_ActionDash
// 0x00D8 (0x00D8 - 0x0000)
struct BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue_1;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetMoveDirection_ReturnValue;          // 0x0018(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterParam*                        CallFunc_BP_GetParam_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue; // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_prevAction;                           // 0x003C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterParam*                        CallFunc_BP_GetParam_ReturnValue_1;                // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_nextAction;                           // 0x0060(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_1;           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetDestMoveDirection_NewParam;            // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterParam*                        CallFunc_BP_GetParam_ReturnValue_2;                // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterCommandComponent*             CallFunc_BP_GetOwnerCommand_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue_2;  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterBattleVoiceComponent*         CallFunc_BP_GetBattleVoiceComponent_ReturnValue;   // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterCommandComponent*             CallFunc_BP_GetOwnerCommand_ReturnValue_1;         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterCommandComponent*             CallFunc_BP_GetOwnerCommand_ReturnValue_2;         // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_2;           // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_3;           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsTouchGround_ReturnValue;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash) == 0x000008, "Wrong alignment on BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash");
static_assert(sizeof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash) == 0x0000D8, "Wrong size on BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, EntryPoint) == 0x000000, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerMovementBattle_ReturnValue) == 0x000008, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerMovementBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerMovementBattle_ReturnValue_1) == 0x000010, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerMovementBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetMoveDirection_ReturnValue) == 0x000018, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetMoveDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetParam_ReturnValue) == 0x000028, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue) == 0x000030, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, K2Node_Event_prevAction) == 0x00003C, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::K2Node_Event_prevAction' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetAnimation_ReturnValue) == 0x000048, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerState_ReturnValue) == 0x000050, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetParam_ReturnValue_1) == 0x000058, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, K2Node_Event_nextAction) == 0x000060, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::K2Node_Event_nextAction' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerState_ReturnValue_1) == 0x000068, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_GetDestMoveDirection_NewParam) == 0x000070, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_GetDestMoveDirection_NewParam' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetAnimation_ReturnValue_1) == 0x000080, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetParam_ReturnValue_2) == 0x000088, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetParam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerCommand_ReturnValue) == 0x000090, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerMovementBattle_ReturnValue_2) == 0x000098, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerMovementBattle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x0000A0, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetBattleVoiceComponent_ReturnValue) == 0x0000A8, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetBattleVoiceComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerCommand_ReturnValue_1) == 0x0000B0, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerCommand_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerCommand_ReturnValue_2) == 0x0000B8, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerCommand_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerState_ReturnValue_2) == 0x0000C0, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_GetOwnerState_ReturnValue_3) == 0x0000C8, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_GetOwnerState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash, CallFunc_BP_IsTouchGround_ReturnValue) == 0x0000D0, "Member 'BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash::CallFunc_BP_IsTouchGround_ReturnValue' has a wrong offset!");

// Function BP_ActionDash.BP_ActionDash_C.BP_OnEndAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionDash_C_BP_OnEndAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDash_C_BP_OnEndAction) == 0x000004, "Wrong alignment on BP_ActionDash_C_BP_OnEndAction");
static_assert(sizeof(BP_ActionDash_C_BP_OnEndAction) == 0x000008, "Wrong size on BP_ActionDash_C_BP_OnEndAction");
static_assert(offsetof(BP_ActionDash_C_BP_OnEndAction, NextAction) == 0x000000, "Member 'BP_ActionDash_C_BP_OnEndAction::NextAction' has a wrong offset!");

// Function BP_ActionDash.BP_ActionDash_C.BP_OnBeginAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionDash_C_BP_OnBeginAction final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDash_C_BP_OnBeginAction) == 0x000004, "Wrong alignment on BP_ActionDash_C_BP_OnBeginAction");
static_assert(sizeof(BP_ActionDash_C_BP_OnBeginAction) == 0x000008, "Wrong size on BP_ActionDash_C_BP_OnBeginAction");
static_assert(offsetof(BP_ActionDash_C_BP_OnBeginAction, PrevAction) == 0x000000, "Member 'BP_ActionDash_C_BP_OnBeginAction::PrevAction' has a wrong offset!");

// Function BP_ActionDash.BP_ActionDash_C.UpdateMoveDirection
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionDash_C_UpdateMoveDirection final
{
public:
	struct FVector                                CallFunc_GetDestMoveDirection_NewParam;            // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterParam*                        CallFunc_BP_GetParam_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetDeltaSeconds_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDash_C_UpdateMoveDirection) == 0x000008, "Wrong alignment on BP_ActionDash_C_UpdateMoveDirection");
static_assert(sizeof(BP_ActionDash_C_UpdateMoveDirection) == 0x000020, "Wrong size on BP_ActionDash_C_UpdateMoveDirection");
static_assert(offsetof(BP_ActionDash_C_UpdateMoveDirection, CallFunc_GetDestMoveDirection_NewParam) == 0x000000, "Member 'BP_ActionDash_C_UpdateMoveDirection::CallFunc_GetDestMoveDirection_NewParam' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateMoveDirection, CallFunc_BP_GetParam_ReturnValue) == 0x000010, "Member 'BP_ActionDash_C_UpdateMoveDirection::CallFunc_BP_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateMoveDirection, CallFunc_BP_GetDeltaSeconds_ReturnValue) == 0x000018, "Member 'BP_ActionDash_C_UpdateMoveDirection::CallFunc_BP_GetDeltaSeconds_ReturnValue' has a wrong offset!");

// Function BP_ActionDash.BP_ActionDash_C.UpdateCharacterDirection
// 0x0028 (0x0028 - 0x0000)
struct BP_ActionDash_C_UpdateCharacterDirection final
{
public:
	struct FVector                                CallFunc_BP_GetMoveDirection_ReturnValue;          // 0x0000(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue; // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDash_C_UpdateCharacterDirection) == 0x000008, "Wrong alignment on BP_ActionDash_C_UpdateCharacterDirection");
static_assert(sizeof(BP_ActionDash_C_UpdateCharacterDirection) == 0x000028, "Wrong size on BP_ActionDash_C_UpdateCharacterDirection");
static_assert(offsetof(BP_ActionDash_C_UpdateCharacterDirection, CallFunc_BP_GetMoveDirection_ReturnValue) == 0x000000, "Member 'BP_ActionDash_C_UpdateCharacterDirection::CallFunc_BP_GetMoveDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateCharacterDirection, CallFunc_BP_GetOwnerMovementBattle_ReturnValue) == 0x000010, "Member 'BP_ActionDash_C_UpdateCharacterDirection::CallFunc_BP_GetOwnerMovementBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateCharacterDirection, CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue) == 0x000018, "Member 'BP_ActionDash_C_UpdateCharacterDirection::CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue' has a wrong offset!");

// Function BP_ActionDash.BP_ActionDash_C.UpdateSpeedRate
// 0x0038 (0x0038 - 0x0000)
struct BP_ActionDash_C_UpdateSpeedRate final
{
public:
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetMoveDirection_ReturnValue;          // 0x0008(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDash_C_UpdateSpeedRate) == 0x000008, "Wrong alignment on BP_ActionDash_C_UpdateSpeedRate");
static_assert(sizeof(BP_ActionDash_C_UpdateSpeedRate) == 0x000038, "Wrong size on BP_ActionDash_C_UpdateSpeedRate");
static_assert(offsetof(BP_ActionDash_C_UpdateSpeedRate, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000000, "Member 'BP_ActionDash_C_UpdateSpeedRate::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateSpeedRate, CallFunc_BP_GetMoveDirection_ReturnValue) == 0x000008, "Member 'BP_ActionDash_C_UpdateSpeedRate::CallFunc_BP_GetMoveDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateSpeedRate, CallFunc_GetActorRightVector_ReturnValue) == 0x000014, "Member 'BP_ActionDash_C_UpdateSpeedRate::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateSpeedRate, CallFunc_BP_GetOwnerMovementBattle_ReturnValue) == 0x000020, "Member 'BP_ActionDash_C_UpdateSpeedRate::CallFunc_BP_GetOwnerMovementBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateSpeedRate, CallFunc_Dot_VectorVector_ReturnValue) == 0x000028, "Member 'BP_ActionDash_C_UpdateSpeedRate::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateSpeedRate, CallFunc_Abs_ReturnValue) == 0x00002C, "Member 'BP_ActionDash_C_UpdateSpeedRate::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateSpeedRate, CallFunc_FClamp_ReturnValue) == 0x000030, "Member 'BP_ActionDash_C_UpdateSpeedRate::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_UpdateSpeedRate, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000034, "Member 'BP_ActionDash_C_UpdateSpeedRate::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_ActionDash.BP_ActionDash_C.GetDestMoveDirection
// 0x0050 (0x0050 - 0x0000)
struct BP_ActionDash_C_GetDestMoveDirection final
{
public:
	struct FVector                                NewParam;                                          // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterCommandComponent*             CallFunc_BP_GetOwnerCommand_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetMoveDirection_ReturnValue;          // 0x002C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetMoveRate_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Select_Default;                             // 0x0040(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDash_C_GetDestMoveDirection) == 0x000008, "Wrong alignment on BP_ActionDash_C_GetDestMoveDirection");
static_assert(sizeof(BP_ActionDash_C_GetDestMoveDirection) == 0x000050, "Wrong size on BP_ActionDash_C_GetDestMoveDirection");
static_assert(offsetof(BP_ActionDash_C_GetDestMoveDirection, NewParam) == 0x000000, "Member 'BP_ActionDash_C_GetDestMoveDirection::NewParam' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_GetDestMoveDirection, Temp_bool_Variable) == 0x00000C, "Member 'BP_ActionDash_C_GetDestMoveDirection::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_GetDestMoveDirection, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000010, "Member 'BP_ActionDash_C_GetDestMoveDirection::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_GetDestMoveDirection, CallFunc_BP_GetOwnerCommand_ReturnValue) == 0x000018, "Member 'BP_ActionDash_C_GetDestMoveDirection::CallFunc_BP_GetOwnerCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_GetDestMoveDirection, CallFunc_GetActorForwardVector_ReturnValue) == 0x000020, "Member 'BP_ActionDash_C_GetDestMoveDirection::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_GetDestMoveDirection, CallFunc_BP_GetMoveDirection_ReturnValue) == 0x00002C, "Member 'BP_ActionDash_C_GetDestMoveDirection::CallFunc_BP_GetMoveDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_GetDestMoveDirection, CallFunc_BP_GetMoveRate_ReturnValue) == 0x000038, "Member 'BP_ActionDash_C_GetDestMoveDirection::CallFunc_BP_GetMoveRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_GetDestMoveDirection, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00003C, "Member 'BP_ActionDash_C_GetDestMoveDirection::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_GetDestMoveDirection, K2Node_Select_Default) == 0x000040, "Member 'BP_ActionDash_C_GetDestMoveDirection::K2Node_Select_Default' has a wrong offset!");

// Function BP_ActionDash.BP_ActionDash_C.BP_IsEnableShiftAction
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionDash_C_BP_IsEnableShiftAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionDash_C_BP_IsEnableShiftAction) == 0x000008, "Wrong alignment on BP_ActionDash_C_BP_IsEnableShiftAction");
static_assert(sizeof(BP_ActionDash_C_BP_IsEnableShiftAction) == 0x000020, "Wrong size on BP_ActionDash_C_BP_IsEnableShiftAction");
static_assert(offsetof(BP_ActionDash_C_BP_IsEnableShiftAction, NextAction) == 0x000000, "Member 'BP_ActionDash_C_BP_IsEnableShiftAction::NextAction' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_BP_IsEnableShiftAction, ReturnValue) == 0x000008, "Member 'BP_ActionDash_C_BP_IsEnableShiftAction::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_BP_IsEnableShiftAction, CallFunc_BP_GetOwnerState_ReturnValue) == 0x000010, "Member 'BP_ActionDash_C_BP_IsEnableShiftAction::CallFunc_BP_GetOwnerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDash_C_BP_IsEnableShiftAction, K2Node_SwitchName_CmpSuccess) == 0x000018, "Member 'BP_ActionDash_C_BP_IsEnableShiftAction::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

}
