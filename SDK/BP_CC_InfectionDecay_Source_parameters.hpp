#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_InfectionDecay_Source

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CC_InfectionDecay_Source.BP_CC_InfectionDecay_Source_C.ExecuteUbergraph_BP_CC_InfectionDecay_Source
// 0x0068 (0x0068 - 0x0000)
struct BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_value;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_oldLevel;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_newLevel;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStateBattle*                     CallFunc_BP_GetOwnerPlayerState_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterConditionControlComponent*    CallFunc_BP_GetConditionControlComponent_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStateBattle*                     CallFunc_BP_GetInstigatedPlayer_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterConditionControlComponent*    CallFunc_BP_GetConditionControlComponent_ReturnValue_1; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_2; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsValidCondition_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterDamageComponent*              CallFunc_BP_GetDamageComponent_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source) == 0x000008, "Wrong alignment on BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source");
static_assert(sizeof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source) == 0x000068, "Wrong size on BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, EntryPoint) == 0x000000, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, K2Node_Event_value) == 0x000004, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::K2Node_Event_value' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, K2Node_Event_oldLevel) == 0x000008, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::K2Node_Event_oldLevel' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, K2Node_Event_newLevel) == 0x00000C, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::K2Node_Event_newLevel' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_BP_GetOwnerPlayerState_ReturnValue) == 0x000010, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_BP_GetOwnerPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000018, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_BP_GetConditionControlComponent_ReturnValue) == 0x000028, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_BP_GetConditionControlComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_BP_GetInstigatedPlayer_ReturnValue) == 0x000030, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_BP_GetInstigatedPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1) == 0x000038, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_BP_GetConditionControlComponent_ReturnValue_1) == 0x000040, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_BP_GetConditionControlComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_2) == 0x000048, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_BP_IsValidCondition_ReturnValue) == 0x000050, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_BP_IsValidCondition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_BP_GetDamageComponent_ReturnValue) == 0x000058, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_BP_GetDamageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source, CallFunc_Not_PreBool_ReturnValue) == 0x000060, "Member 'BP_CC_InfectionDecay_Source_C_ExecuteUbergraph_BP_CC_InfectionDecay_Source::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_CC_InfectionDecay_Source.BP_CC_InfectionDecay_Source_C.BP_OnChangeConditionLevel
// 0x0008 (0x0008 - 0x0000)
struct BP_CC_InfectionDecay_Source_C_BP_OnChangeConditionLevel final
{
public:
	int32                                         OldLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewLevel;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_InfectionDecay_Source_C_BP_OnChangeConditionLevel) == 0x000004, "Wrong alignment on BP_CC_InfectionDecay_Source_C_BP_OnChangeConditionLevel");
static_assert(sizeof(BP_CC_InfectionDecay_Source_C_BP_OnChangeConditionLevel) == 0x000008, "Wrong size on BP_CC_InfectionDecay_Source_C_BP_OnChangeConditionLevel");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_BP_OnChangeConditionLevel, OldLevel) == 0x000000, "Member 'BP_CC_InfectionDecay_Source_C_BP_OnChangeConditionLevel::OldLevel' has a wrong offset!");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_BP_OnChangeConditionLevel, NewLevel) == 0x000004, "Member 'BP_CC_InfectionDecay_Source_C_BP_OnChangeConditionLevel::NewLevel' has a wrong offset!");

// Function BP_CC_InfectionDecay_Source.BP_CC_InfectionDecay_Source_C.BP_OnUpdateIntervalValue
// 0x0004 (0x0004 - 0x0000)
struct BP_CC_InfectionDecay_Source_C_BP_OnUpdateIntervalValue final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_InfectionDecay_Source_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong alignment on BP_CC_InfectionDecay_Source_C_BP_OnUpdateIntervalValue");
static_assert(sizeof(BP_CC_InfectionDecay_Source_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong size on BP_CC_InfectionDecay_Source_C_BP_OnUpdateIntervalValue");
static_assert(offsetof(BP_CC_InfectionDecay_Source_C_BP_OnUpdateIntervalValue, Value) == 0x000000, "Member 'BP_CC_InfectionDecay_Source_C_BP_OnUpdateIntervalValue::Value' has a wrong offset!");

}
