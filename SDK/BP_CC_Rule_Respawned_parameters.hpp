#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Rule_Respawned

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CC_Rule_Respawned.BP_CC_Rule_Respawned_C.ExecuteUbergraph_BP_CC_Rule_Respawned
// 0x0020 (0x0020 - 0x0000)
struct BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_value;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStateBattle*                     CallFunc_BP_GetOwnerPlayerState_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialControlComponent*              CallFunc_BP_GetMaterialControl_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned) == 0x000008, "Wrong alignment on BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned");
static_assert(sizeof(BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned) == 0x000020, "Wrong size on BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned");
static_assert(offsetof(BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned, EntryPoint) == 0x000000, "Member 'BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned, K2Node_Event_value) == 0x000004, "Member 'BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned::K2Node_Event_value' has a wrong offset!");
static_assert(offsetof(BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000008, "Member 'BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned, CallFunc_BP_GetOwnerPlayerState_ReturnValue) == 0x000010, "Member 'BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned::CallFunc_BP_GetOwnerPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned, CallFunc_BP_GetMaterialControl_ReturnValue) == 0x000018, "Member 'BP_CC_Rule_Respawned_C_ExecuteUbergraph_BP_CC_Rule_Respawned::CallFunc_BP_GetMaterialControl_ReturnValue' has a wrong offset!");

// Function BP_CC_Rule_Respawned.BP_CC_Rule_Respawned_C.BP_OnUpdateIntervalValue
// 0x0004 (0x0004 - 0x0000)
struct BP_CC_Rule_Respawned_C_BP_OnUpdateIntervalValue final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_Rule_Respawned_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong alignment on BP_CC_Rule_Respawned_C_BP_OnUpdateIntervalValue");
static_assert(sizeof(BP_CC_Rule_Respawned_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong size on BP_CC_Rule_Respawned_C_BP_OnUpdateIntervalValue");
static_assert(offsetof(BP_CC_Rule_Respawned_C_BP_OnUpdateIntervalValue, Value) == 0x000000, "Member 'BP_CC_Rule_Respawned_C_BP_OnUpdateIntervalValue::Value' has a wrong offset!");

}

