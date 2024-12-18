#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionCrouchMove

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionCrouchMove.BP_ActionCrouchMove_C.ExecuteUbergraph_BP_ActionCrouchMove
// 0x00C0 (0x00C0 - 0x0000)
struct BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterConditionControlComponent*    CallFunc_BP_GetConditionControlComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsValidCondition_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_prevAction;                           // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue_1;  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetMoveDirection_ReturnValue;          // 0x0038(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterParam*                        CallFunc_BP_GetParam_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue; // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterParam*                        CallFunc_BP_GetParam_ReturnValue_1;                // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterCommandComponent*             CallFunc_BP_GetCommandComponent_ReturnValue;       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetMoveDirection_ReturnValue_1;        // 0x0080(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_nextAction;                           // 0x008C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_1;           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue_1;            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterParam*                        CallFunc_BP_GetParam_ReturnValue_2;                // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_2;           // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove) == 0x000008, "Wrong alignment on BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove");
static_assert(sizeof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove) == 0x0000C0, "Wrong size on BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, EntryPoint) == 0x000000, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000008, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetConditionControlComponent_ReturnValue) == 0x000010, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetConditionControlComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_IsValidCondition_ReturnValue) == 0x000018, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_IsValidCondition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetOwnerMovementBattle_ReturnValue) == 0x000020, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetOwnerMovementBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, K2Node_Event_prevAction) == 0x000028, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::K2Node_Event_prevAction' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetOwnerMovementBattle_ReturnValue_1) == 0x000030, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetOwnerMovementBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetMoveDirection_ReturnValue) == 0x000038, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetMoveDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetParam_ReturnValue) == 0x000048, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue) == 0x000050, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetParam_ReturnValue_1) == 0x000060, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetOwnerState_ReturnValue) == 0x000068, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetOwnerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1) == 0x000070, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetCommandComponent_ReturnValue) == 0x000078, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetCommandComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetMoveDirection_ReturnValue_1) == 0x000080, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetMoveDirection_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, K2Node_Event_nextAction) == 0x00008C, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::K2Node_Event_nextAction' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, K2Node_SwitchName_CmpSuccess) == 0x000094, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetOwnerState_ReturnValue_1) == 0x000098, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetOwnerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetAnimation_ReturnValue) == 0x0000A0, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetAnimation_ReturnValue_1) == 0x0000A8, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetParam_ReturnValue_2) == 0x0000B0, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetParam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove, CallFunc_BP_GetOwnerState_ReturnValue_2) == 0x0000B8, "Member 'BP_ActionCrouchMove_C_ExecuteUbergraph_BP_ActionCrouchMove::CallFunc_BP_GetOwnerState_ReturnValue_2' has a wrong offset!");

// Function BP_ActionCrouchMove.BP_ActionCrouchMove_C.BP_OnEndAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionCrouchMove_C_BP_OnEndAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCrouchMove_C_BP_OnEndAction) == 0x000004, "Wrong alignment on BP_ActionCrouchMove_C_BP_OnEndAction");
static_assert(sizeof(BP_ActionCrouchMove_C_BP_OnEndAction) == 0x000008, "Wrong size on BP_ActionCrouchMove_C_BP_OnEndAction");
static_assert(offsetof(BP_ActionCrouchMove_C_BP_OnEndAction, NextAction) == 0x000000, "Member 'BP_ActionCrouchMove_C_BP_OnEndAction::NextAction' has a wrong offset!");

// Function BP_ActionCrouchMove.BP_ActionCrouchMove_C.BP_OnBeginAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionCrouchMove_C_BP_OnBeginAction final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCrouchMove_C_BP_OnBeginAction) == 0x000004, "Wrong alignment on BP_ActionCrouchMove_C_BP_OnBeginAction");
static_assert(sizeof(BP_ActionCrouchMove_C_BP_OnBeginAction) == 0x000008, "Wrong size on BP_ActionCrouchMove_C_BP_OnBeginAction");
static_assert(offsetof(BP_ActionCrouchMove_C_BP_OnBeginAction, PrevAction) == 0x000000, "Member 'BP_ActionCrouchMove_C_BP_OnBeginAction::PrevAction' has a wrong offset!");

// Function BP_ActionCrouchMove.BP_ActionCrouchMove_C.UpdateMoveDirection
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionCrouchMove_C_UpdateMoveDirection final
{
public:
	class UCharacterCommandComponent*             CallFunc_BP_GetOwnerCommand_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterParam*                        CallFunc_BP_GetParam_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetMoveDirection_ReturnValue;          // 0x0010(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetDeltaSeconds_ReturnValue;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCrouchMove_C_UpdateMoveDirection) == 0x000008, "Wrong alignment on BP_ActionCrouchMove_C_UpdateMoveDirection");
static_assert(sizeof(BP_ActionCrouchMove_C_UpdateMoveDirection) == 0x000020, "Wrong size on BP_ActionCrouchMove_C_UpdateMoveDirection");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateMoveDirection, CallFunc_BP_GetOwnerCommand_ReturnValue) == 0x000000, "Member 'BP_ActionCrouchMove_C_UpdateMoveDirection::CallFunc_BP_GetOwnerCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateMoveDirection, CallFunc_BP_GetParam_ReturnValue) == 0x000008, "Member 'BP_ActionCrouchMove_C_UpdateMoveDirection::CallFunc_BP_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateMoveDirection, CallFunc_BP_GetMoveDirection_ReturnValue) == 0x000010, "Member 'BP_ActionCrouchMove_C_UpdateMoveDirection::CallFunc_BP_GetMoveDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateMoveDirection, CallFunc_BP_GetDeltaSeconds_ReturnValue) == 0x00001C, "Member 'BP_ActionCrouchMove_C_UpdateMoveDirection::CallFunc_BP_GetDeltaSeconds_ReturnValue' has a wrong offset!");

// Function BP_ActionCrouchMove.BP_ActionCrouchMove_C.UpdateCharacterDirection
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionCrouchMove_C_UpdateCharacterDirection final
{
public:
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetMoveDirection_ReturnValue;          // 0x0008(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue; // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCrouchMove_C_UpdateCharacterDirection) == 0x000008, "Wrong alignment on BP_ActionCrouchMove_C_UpdateCharacterDirection");
static_assert(sizeof(BP_ActionCrouchMove_C_UpdateCharacterDirection) == 0x000020, "Wrong size on BP_ActionCrouchMove_C_UpdateCharacterDirection");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateCharacterDirection, CallFunc_BP_GetOwnerMovementBattle_ReturnValue) == 0x000000, "Member 'BP_ActionCrouchMove_C_UpdateCharacterDirection::CallFunc_BP_GetOwnerMovementBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateCharacterDirection, CallFunc_BP_GetMoveDirection_ReturnValue) == 0x000008, "Member 'BP_ActionCrouchMove_C_UpdateCharacterDirection::CallFunc_BP_GetMoveDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateCharacterDirection, CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue) == 0x000014, "Member 'BP_ActionCrouchMove_C_UpdateCharacterDirection::CallFunc_BP_GetForwardDirectionForBaseActionMovement_ReturnValue' has a wrong offset!");

// Function BP_ActionCrouchMove.BP_ActionCrouchMove_C.UpdateSpeedRate
// 0x0028 (0x0028 - 0x0000)
struct BP_ActionCrouchMove_C_UpdateSpeedRate final
{
public:
	class UCharacterParam*                        CallFunc_BP_GetParam_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterCommandComponent*             CallFunc_BP_GetOwnerCommand_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetMoveRate_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCrouchMove_C_UpdateSpeedRate) == 0x000008, "Wrong alignment on BP_ActionCrouchMove_C_UpdateSpeedRate");
static_assert(sizeof(BP_ActionCrouchMove_C_UpdateSpeedRate) == 0x000028, "Wrong size on BP_ActionCrouchMove_C_UpdateSpeedRate");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateSpeedRate, CallFunc_BP_GetParam_ReturnValue) == 0x000000, "Member 'BP_ActionCrouchMove_C_UpdateSpeedRate::CallFunc_BP_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateSpeedRate, CallFunc_BP_GetOwnerCommand_ReturnValue) == 0x000008, "Member 'BP_ActionCrouchMove_C_UpdateSpeedRate::CallFunc_BP_GetOwnerCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateSpeedRate, CallFunc_BP_GetMoveRate_ReturnValue) == 0x000010, "Member 'BP_ActionCrouchMove_C_UpdateSpeedRate::CallFunc_BP_GetMoveRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateSpeedRate, CallFunc_BP_GetOwnerMovementBattle_ReturnValue) == 0x000018, "Member 'BP_ActionCrouchMove_C_UpdateSpeedRate::CallFunc_BP_GetOwnerMovementBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_UpdateSpeedRate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_ActionCrouchMove_C_UpdateSpeedRate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_ActionCrouchMove.BP_ActionCrouchMove_C.BP_IsEnableShiftAction
// 0x000C (0x000C - 0x0000)
struct BP_ActionCrouchMove_C_BP_IsEnableShiftAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionCrouchMove_C_BP_IsEnableShiftAction) == 0x000004, "Wrong alignment on BP_ActionCrouchMove_C_BP_IsEnableShiftAction");
static_assert(sizeof(BP_ActionCrouchMove_C_BP_IsEnableShiftAction) == 0x00000C, "Wrong size on BP_ActionCrouchMove_C_BP_IsEnableShiftAction");
static_assert(offsetof(BP_ActionCrouchMove_C_BP_IsEnableShiftAction, NextAction) == 0x000000, "Member 'BP_ActionCrouchMove_C_BP_IsEnableShiftAction::NextAction' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_BP_IsEnableShiftAction, ReturnValue) == 0x000008, "Member 'BP_ActionCrouchMove_C_BP_IsEnableShiftAction::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCrouchMove_C_BP_IsEnableShiftAction, K2Node_SwitchName_CmpSuccess) == 0x000009, "Member 'BP_ActionCrouchMove_C_BP_IsEnableShiftAction::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

}

