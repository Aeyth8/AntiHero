#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionScoutEnemy

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameModule_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.ExecuteUbergraph_BP_ActionScoutEnemy
// 0x0050 (0x0050 - 0x0000)
struct BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_prevAction;                           // 0x0004(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Turning_TurnSpan;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BP_GetActionTargetActor_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BP_GetActionTargetActor_ReturnValue_1;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Turning_TurnSpan_1;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_nextAction;                           // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSuccess;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BP_GetActionTargetActor_ReturnValue_2;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy) == 0x000008, "Wrong alignment on BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy");
static_assert(sizeof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy) == 0x000050, "Wrong size on BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, EntryPoint) == 0x000000, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, K2Node_Event_prevAction) == 0x000004, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::K2Node_Event_prevAction' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, CallFunc_Turning_TurnSpan) == 0x00000C, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::CallFunc_Turning_TurnSpan' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, CallFunc_BP_GetActionTargetActor_ReturnValue) == 0x000010, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::CallFunc_BP_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, CallFunc_BP_GetActionTargetActor_ReturnValue_1) == 0x000018, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::CallFunc_BP_GetActionTargetActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, CallFunc_Turning_TurnSpan_1) == 0x000024, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::CallFunc_Turning_TurnSpan_1' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, K2Node_Event_nextAction) == 0x000028, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::K2Node_Event_nextAction' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, CallFunc_BP_GetAnimation_ReturnValue) == 0x000030, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, K2Node_Event_bSuccess) == 0x000038, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::K2Node_Event_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, CallFunc_BP_GetActionTargetActor_ReturnValue_2) == 0x000040, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::CallFunc_BP_GetActionTargetActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_ActionScoutEnemy_C_ExecuteUbergraph_BP_ActionScoutEnemy::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.BP_OnScoutRequestCompleteEvent
// 0x0001 (0x0001 - 0x0000)
struct BP_ActionScoutEnemy_C_BP_OnScoutRequestCompleteEvent final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionScoutEnemy_C_BP_OnScoutRequestCompleteEvent) == 0x000001, "Wrong alignment on BP_ActionScoutEnemy_C_BP_OnScoutRequestCompleteEvent");
static_assert(sizeof(BP_ActionScoutEnemy_C_BP_OnScoutRequestCompleteEvent) == 0x000001, "Wrong size on BP_ActionScoutEnemy_C_BP_OnScoutRequestCompleteEvent");
static_assert(offsetof(BP_ActionScoutEnemy_C_BP_OnScoutRequestCompleteEvent, bSuccess) == 0x000000, "Member 'BP_ActionScoutEnemy_C_BP_OnScoutRequestCompleteEvent::bSuccess' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.BP_OnEndAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionScoutEnemy_C_BP_OnEndAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionScoutEnemy_C_BP_OnEndAction) == 0x000004, "Wrong alignment on BP_ActionScoutEnemy_C_BP_OnEndAction");
static_assert(sizeof(BP_ActionScoutEnemy_C_BP_OnEndAction) == 0x000008, "Wrong size on BP_ActionScoutEnemy_C_BP_OnEndAction");
static_assert(offsetof(BP_ActionScoutEnemy_C_BP_OnEndAction, NextAction) == 0x000000, "Member 'BP_ActionScoutEnemy_C_BP_OnEndAction::NextAction' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.BP_OnBeginAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionScoutEnemy_C_BP_OnBeginAction final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionScoutEnemy_C_BP_OnBeginAction) == 0x000004, "Wrong alignment on BP_ActionScoutEnemy_C_BP_OnBeginAction");
static_assert(sizeof(BP_ActionScoutEnemy_C_BP_OnBeginAction) == 0x000008, "Wrong size on BP_ActionScoutEnemy_C_BP_OnBeginAction");
static_assert(offsetof(BP_ActionScoutEnemy_C_BP_OnBeginAction, PrevAction) == 0x000000, "Member 'BP_ActionScoutEnemy_C_BP_OnBeginAction::PrevAction' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.Initialize
// 0x0038 (0x0038 - 0x0000)
struct BP_ActionScoutEnemy_C_Initialize final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAnimationMoveType                            Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationMoveType                            Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationMoveType                            K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue_1;  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionScoutEnemy_C_Initialize) == 0x000008, "Wrong alignment on BP_ActionScoutEnemy_C_Initialize");
static_assert(sizeof(BP_ActionScoutEnemy_C_Initialize) == 0x000038, "Wrong size on BP_ActionScoutEnemy_C_Initialize");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, PrevAction) == 0x000000, "Member 'BP_ActionScoutEnemy_C_Initialize::PrevAction' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, Temp_bool_Variable) == 0x000008, "Member 'BP_ActionScoutEnemy_C_Initialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000009, "Member 'BP_ActionScoutEnemy_C_Initialize::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, Temp_byte_Variable) == 0x00000A, "Member 'BP_ActionScoutEnemy_C_Initialize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, Temp_byte_Variable_1) == 0x00000B, "Member 'BP_ActionScoutEnemy_C_Initialize::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, CallFunc_BP_GetAnimation_ReturnValue) == 0x000010, "Member 'BP_ActionScoutEnemy_C_Initialize::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, K2Node_Select_Default) == 0x000018, "Member 'BP_ActionScoutEnemy_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, CallFunc_BP_GetOwnerState_ReturnValue) == 0x000020, "Member 'BP_ActionScoutEnemy_C_Initialize::CallFunc_BP_GetOwnerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, CallFunc_BP_GetOwnerMovementBattle_ReturnValue) == 0x000028, "Member 'BP_ActionScoutEnemy_C_Initialize::CallFunc_BP_GetOwnerMovementBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Initialize, CallFunc_BP_GetOwnerMovementBattle_ReturnValue_1) == 0x000030, "Member 'BP_ActionScoutEnemy_C_Initialize::CallFunc_BP_GetOwnerMovementBattle_ReturnValue_1' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.Turning
// 0x0060 (0x0060 - 0x0000)
struct BP_ActionScoutEnemy_C_Turning final
{
public:
	float                                         TurnSpan;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BP_GetActionTargetActor_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovementComponentBattle*               CallFunc_BP_GetOwnerMovementBattle_ReturnValue;    // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionScoutEnemy_C_Turning) == 0x000008, "Wrong alignment on BP_ActionScoutEnemy_C_Turning");
static_assert(sizeof(BP_ActionScoutEnemy_C_Turning) == 0x000060, "Wrong size on BP_ActionScoutEnemy_C_Turning");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, TurnSpan) == 0x000000, "Member 'BP_ActionScoutEnemy_C_Turning::TurnSpan' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_BP_GetActionTargetActor_ReturnValue) == 0x000008, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_BP_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000010, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000024, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000030, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_BP_GetOwnerMovementBattle_ReturnValue) == 0x000040, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_BP_GetOwnerMovementBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_BreakVector_X) == 0x000048, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_BreakVector_Y) == 0x00004C, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_BreakVector_Z) == 0x000050, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Turning, CallFunc_MakeVector_ReturnValue) == 0x000054, "Member 'BP_ActionScoutEnemy_C_Turning::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.Begin
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionScoutEnemy_C_Begin final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionScoutEnemy_C_Begin) == 0x000008, "Wrong alignment on BP_ActionScoutEnemy_C_Begin");
static_assert(sizeof(BP_ActionScoutEnemy_C_Begin) == 0x000020, "Wrong size on BP_ActionScoutEnemy_C_Begin");
static_assert(offsetof(BP_ActionScoutEnemy_C_Begin, Temp_bool_Variable) == 0x000000, "Member 'BP_ActionScoutEnemy_C_Begin::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Begin, Temp_float_Variable) == 0x000004, "Member 'BP_ActionScoutEnemy_C_Begin::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Begin, Temp_float_Variable_1) == 0x000008, "Member 'BP_ActionScoutEnemy_C_Begin::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Begin, CallFunc_BP_GetAnimation_ReturnValue) == 0x000010, "Member 'BP_ActionScoutEnemy_C_Begin::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_Begin, K2Node_Select_Default) == 0x000018, "Member 'BP_ActionScoutEnemy_C_Begin::K2Node_Select_Default' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.Recover
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionScoutEnemy_C_Recover final
{
public:
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionScoutEnemy_C_Recover) == 0x000008, "Wrong alignment on BP_ActionScoutEnemy_C_Recover");
static_assert(sizeof(BP_ActionScoutEnemy_C_Recover) == 0x000008, "Wrong size on BP_ActionScoutEnemy_C_Recover");
static_assert(offsetof(BP_ActionScoutEnemy_C_Recover, CallFunc_BP_GetAnimation_ReturnValue) == 0x000000, "Member 'BP_ActionScoutEnemy_C_Recover::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.Complete
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionScoutEnemy_C_Complete final
{
public:
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionScoutEnemy_C_Complete) == 0x000008, "Wrong alignment on BP_ActionScoutEnemy_C_Complete");
static_assert(sizeof(BP_ActionScoutEnemy_C_Complete) == 0x000008, "Wrong size on BP_ActionScoutEnemy_C_Complete");
static_assert(offsetof(BP_ActionScoutEnemy_C_Complete, CallFunc_BP_GetAnimation_ReturnValue) == 0x000000, "Member 'BP_ActionScoutEnemy_C_Complete::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.SetInteractedTarget
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionScoutEnemy_C_SetInteractedTarget final
{
public:
	bool                                          Interacted;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetActionTargetAsCharacterBattle_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBase*                         CallFunc_BP_GetOwnerCharacter_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateBattle*                     K2Node_DynamicCast_AsPlayer_State_Battle;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionScoutEnemy_C_SetInteractedTarget) == 0x000008, "Wrong alignment on BP_ActionScoutEnemy_C_SetInteractedTarget");
static_assert(sizeof(BP_ActionScoutEnemy_C_SetInteractedTarget) == 0x000030, "Wrong size on BP_ActionScoutEnemy_C_SetInteractedTarget");
static_assert(offsetof(BP_ActionScoutEnemy_C_SetInteractedTarget, Interacted) == 0x000000, "Member 'BP_ActionScoutEnemy_C_SetInteractedTarget::Interacted' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_SetInteractedTarget, CallFunc_BP_GetActionTargetAsCharacterBattle_ReturnValue) == 0x000008, "Member 'BP_ActionScoutEnemy_C_SetInteractedTarget::CallFunc_BP_GetActionTargetAsCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_SetInteractedTarget, CallFunc_BP_GetOwnerCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionScoutEnemy_C_SetInteractedTarget::CallFunc_BP_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_SetInteractedTarget, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'BP_ActionScoutEnemy_C_SetInteractedTarget::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_SetInteractedTarget, K2Node_DynamicCast_AsPlayer_State_Battle) == 0x000020, "Member 'BP_ActionScoutEnemy_C_SetInteractedTarget::K2Node_DynamicCast_AsPlayer_State_Battle' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_SetInteractedTarget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ActionScoutEnemy_C_SetInteractedTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_ActionScoutEnemy.BP_ActionScoutEnemy_C.BP_IsEnableShiftAction
// 0x000C (0x000C - 0x0000)
struct BP_ActionScoutEnemy_C_BP_IsEnableShiftAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionScoutEnemy_C_BP_IsEnableShiftAction) == 0x000004, "Wrong alignment on BP_ActionScoutEnemy_C_BP_IsEnableShiftAction");
static_assert(sizeof(BP_ActionScoutEnemy_C_BP_IsEnableShiftAction) == 0x00000C, "Wrong size on BP_ActionScoutEnemy_C_BP_IsEnableShiftAction");
static_assert(offsetof(BP_ActionScoutEnemy_C_BP_IsEnableShiftAction, NextAction) == 0x000000, "Member 'BP_ActionScoutEnemy_C_BP_IsEnableShiftAction::NextAction' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_BP_IsEnableShiftAction, ReturnValue) == 0x000008, "Member 'BP_ActionScoutEnemy_C_BP_IsEnableShiftAction::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionScoutEnemy_C_BP_IsEnableShiftAction, K2Node_SwitchName_CmpSuccess) == 0x000009, "Member 'BP_ActionScoutEnemy_C_BP_IsEnableShiftAction::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

}
