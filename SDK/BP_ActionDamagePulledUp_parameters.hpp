#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamagePulledUp

#include "Basic.hpp"

#include "GameModule_structs.hpp"
#include "InGameModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionDamagePulledUp.BP_ActionDamagePulledUp_C.ExecuteUbergraph_BP_ActionDamagePulledUp
// 0x0038 (0x0038 - 0x0000)
struct BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  CallFunc_DecideAnimationId_Animation_Id;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_prevAction;                           // 0x0014(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStateBattle*                     CallFunc_BP_GetPlayerStateBattle_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsDying_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsDead_ReturnValue;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp) == 0x000008, "Wrong alignment on BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp");
static_assert(sizeof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp) == 0x000038, "Wrong size on BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp");
static_assert(offsetof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp, EntryPoint) == 0x000000, "Member 'BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp, CallFunc_BP_GetAnimation_ReturnValue) == 0x000008, "Member 'BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp, CallFunc_DecideAnimationId_Animation_Id) == 0x000010, "Member 'BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp::CallFunc_DecideAnimationId_Animation_Id' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp, K2Node_Event_prevAction) == 0x000014, "Member 'BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp::K2Node_Event_prevAction' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp, CallFunc_BP_GetOwnerState_ReturnValue) == 0x000020, "Member 'BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp::CallFunc_BP_GetOwnerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp, CallFunc_BP_GetPlayerStateBattle_ReturnValue) == 0x000028, "Member 'BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp::CallFunc_BP_GetPlayerStateBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp, CallFunc_BP_IsDying_ReturnValue) == 0x000030, "Member 'BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp::CallFunc_BP_IsDying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp, CallFunc_BP_IsDead_ReturnValue) == 0x000031, "Member 'BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp::CallFunc_BP_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp, CallFunc_BooleanOR_ReturnValue) == 0x000032, "Member 'BP_ActionDamagePulledUp_C_ExecuteUbergraph_BP_ActionDamagePulledUp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_ActionDamagePulledUp.BP_ActionDamagePulledUp_C.BP_OnBeginAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionDamagePulledUp_C_BP_OnBeginAction final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamagePulledUp_C_BP_OnBeginAction) == 0x000004, "Wrong alignment on BP_ActionDamagePulledUp_C_BP_OnBeginAction");
static_assert(sizeof(BP_ActionDamagePulledUp_C_BP_OnBeginAction) == 0x000008, "Wrong size on BP_ActionDamagePulledUp_C_BP_OnBeginAction");
static_assert(offsetof(BP_ActionDamagePulledUp_C_BP_OnBeginAction, PrevAction) == 0x000000, "Member 'BP_ActionDamagePulledUp_C_BP_OnBeginAction::PrevAction' has a wrong offset!");

// Function BP_ActionDamagePulledUp.BP_ActionDamagePulledUp_C.UpdateOnce
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionDamagePulledUp_C_UpdateOnce final
{
public:
	class UCharacterDamageComponent*              CallFunc_BP_GetOwnerDamage_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetDamageDirection_ReturnValue;        // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamagePulledUp_C_UpdateOnce) == 0x000008, "Wrong alignment on BP_ActionDamagePulledUp_C_UpdateOnce");
static_assert(sizeof(BP_ActionDamagePulledUp_C_UpdateOnce) == 0x000020, "Wrong size on BP_ActionDamagePulledUp_C_UpdateOnce");
static_assert(offsetof(BP_ActionDamagePulledUp_C_UpdateOnce, CallFunc_BP_GetOwnerDamage_ReturnValue) == 0x000000, "Member 'BP_ActionDamagePulledUp_C_UpdateOnce::CallFunc_BP_GetOwnerDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_UpdateOnce, CallFunc_BP_GetDamageDirection_ReturnValue) == 0x000008, "Member 'BP_ActionDamagePulledUp_C_UpdateOnce::CallFunc_BP_GetDamageDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_UpdateOnce, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000014, "Member 'BP_ActionDamagePulledUp_C_UpdateOnce::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function BP_ActionDamagePulledUp.BP_ActionDamagePulledUp_C.DecideAnimationId
// 0x0090 (0x0090 - 0x0000)
struct BP_ActionDamagePulledUp_C_DecideAnimationId final
{
public:
	EAnimationId                                  Animation_Id;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDamageDirection                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  Temp_byte_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  Temp_byte_Variable_5;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimationId                                  Temp_byte_Variable_6;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDamageInfo                            CallFunc_BP_GetDamageInfo_ReturnValue;             // 0x0008(0x0080)(ConstParm, NoDestructor)
	EAnimationId                                  K2Node_Select_Default;                             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDamagePulledUp_C_DecideAnimationId) == 0x000008, "Wrong alignment on BP_ActionDamagePulledUp_C_DecideAnimationId");
static_assert(sizeof(BP_ActionDamagePulledUp_C_DecideAnimationId) == 0x000090, "Wrong size on BP_ActionDamagePulledUp_C_DecideAnimationId");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, Animation_Id) == 0x000000, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::Animation_Id' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, Temp_byte_Variable) == 0x000001, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, Temp_byte_Variable_1) == 0x000002, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, Temp_byte_Variable_2) == 0x000003, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, Temp_byte_Variable_3) == 0x000004, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, Temp_byte_Variable_4) == 0x000005, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, Temp_byte_Variable_5) == 0x000006, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, Temp_byte_Variable_6) == 0x000007, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, CallFunc_BP_GetDamageInfo_ReturnValue) == 0x000008, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::CallFunc_BP_GetDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDamagePulledUp_C_DecideAnimationId, K2Node_Select_Default) == 0x000088, "Member 'BP_ActionDamagePulledUp_C_DecideAnimationId::K2Node_Select_Default' has a wrong offset!");

}
