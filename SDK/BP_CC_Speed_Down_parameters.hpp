#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Speed_Down

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CC_Speed_Down.BP_CC_Speed_Down_C.ExecuteUbergraph_BP_CC_Speed_Down
// 0x0008 (0x0008 - 0x0000)
struct BP_CC_Speed_Down_C_ExecuteUbergraph_BP_CC_Speed_Down final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_value;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_Speed_Down_C_ExecuteUbergraph_BP_CC_Speed_Down) == 0x000004, "Wrong alignment on BP_CC_Speed_Down_C_ExecuteUbergraph_BP_CC_Speed_Down");
static_assert(sizeof(BP_CC_Speed_Down_C_ExecuteUbergraph_BP_CC_Speed_Down) == 0x000008, "Wrong size on BP_CC_Speed_Down_C_ExecuteUbergraph_BP_CC_Speed_Down");
static_assert(offsetof(BP_CC_Speed_Down_C_ExecuteUbergraph_BP_CC_Speed_Down, EntryPoint) == 0x000000, "Member 'BP_CC_Speed_Down_C_ExecuteUbergraph_BP_CC_Speed_Down::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CC_Speed_Down_C_ExecuteUbergraph_BP_CC_Speed_Down, K2Node_Event_value) == 0x000004, "Member 'BP_CC_Speed_Down_C_ExecuteUbergraph_BP_CC_Speed_Down::K2Node_Event_value' has a wrong offset!");

// Function BP_CC_Speed_Down.BP_CC_Speed_Down_C.BP_OnUpdateIntervalValue
// 0x0004 (0x0004 - 0x0000)
struct BP_CC_Speed_Down_C_BP_OnUpdateIntervalValue final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_Speed_Down_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong alignment on BP_CC_Speed_Down_C_BP_OnUpdateIntervalValue");
static_assert(sizeof(BP_CC_Speed_Down_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong size on BP_CC_Speed_Down_C_BP_OnUpdateIntervalValue");
static_assert(offsetof(BP_CC_Speed_Down_C_BP_OnUpdateIntervalValue, Value) == 0x000000, "Member 'BP_CC_Speed_Down_C_BP_OnUpdateIntervalValue::Value' has a wrong offset!");

}

