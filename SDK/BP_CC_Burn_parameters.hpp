#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Burn

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CC_Burn.BP_CC_Burn_C.ExecuteUbergraph_BP_CC_Burn
// 0x0030 (0x0030 - 0x0000)
struct BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMaterialControlComponent*     CallFunc_BP_GetCharacterMaterialControl_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_value;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterDamageComponent*              CallFunc_BP_GetDamageComponent_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn) == 0x000008, "Wrong alignment on BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn");
static_assert(sizeof(BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn) == 0x000030, "Wrong size on BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn");
static_assert(offsetof(BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn, EntryPoint) == 0x000000, "Member 'BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000008, "Member 'BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn, CallFunc_BP_GetCharacterMaterialControl_ReturnValue) == 0x000010, "Member 'BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn::CallFunc_BP_GetCharacterMaterialControl_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn, K2Node_Event_value) == 0x000018, "Member 'BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn::K2Node_Event_value' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1) == 0x000020, "Member 'BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn, CallFunc_BP_GetDamageComponent_ReturnValue) == 0x000028, "Member 'BP_CC_Burn_C_ExecuteUbergraph_BP_CC_Burn::CallFunc_BP_GetDamageComponent_ReturnValue' has a wrong offset!");

// Function BP_CC_Burn.BP_CC_Burn_C.BP_OnUpdateIntervalValue
// 0x0004 (0x0004 - 0x0000)
struct BP_CC_Burn_C_BP_OnUpdateIntervalValue final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_Burn_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong alignment on BP_CC_Burn_C_BP_OnUpdateIntervalValue");
static_assert(sizeof(BP_CC_Burn_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong size on BP_CC_Burn_C_BP_OnUpdateIntervalValue");
static_assert(offsetof(BP_CC_Burn_C_BP_OnUpdateIntervalValue, Value) == 0x000000, "Member 'BP_CC_Burn_C_BP_OnUpdateIntervalValue::Value' has a wrong offset!");

// Function BP_CC_Burn.BP_CC_Burn_C.BP_IsEnableChangeCondition
// 0x0038 (0x0038 - 0x0000)
struct BP_CC_Burn_C_BP_IsEnableChangeCondition final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Span;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Interval;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BP_GetIntervalSpan_ReturnValue;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetIntervalValue_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetRemainTime_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CC_Burn_C_BP_IsEnableChangeCondition) == 0x000004, "Wrong alignment on BP_CC_Burn_C_BP_IsEnableChangeCondition");
static_assert(sizeof(BP_CC_Burn_C_BP_IsEnableChangeCondition) == 0x000038, "Wrong size on BP_CC_Burn_C_BP_IsEnableChangeCondition");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, Level) == 0x000000, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::Level' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, Span) == 0x000004, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::Span' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, Value) == 0x000008, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::Value' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, Interval) == 0x00000C, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::Interval' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, ReturnValue) == 0x000010, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, CallFunc_BP_GetIntervalSpan_ReturnValue) == 0x000014, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::CallFunc_BP_GetIntervalSpan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, CallFunc_BP_GetIntervalValue_ReturnValue) == 0x000024, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::CallFunc_BP_GetIntervalValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, CallFunc_BP_GetRemainTime_ReturnValue) == 0x000028, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::CallFunc_BP_GetRemainTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000030, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CC_Burn_C_BP_IsEnableChangeCondition, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000034, "Member 'BP_CC_Burn_C_BP_IsEnableChangeCondition::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

}
