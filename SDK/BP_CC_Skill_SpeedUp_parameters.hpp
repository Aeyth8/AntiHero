#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Skill_SpeedUp

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CC_Skill_SpeedUp.BP_CC_Skill_SpeedUp_C.ExecuteUbergraph_BP_CC_Skill_SpeedUp
// 0x0098 (0x0098 - 0x0000)
struct BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateBattle*                     CallFunc_BP_GetOwnerPlayerState_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBuffParam*                             CallFunc_BP_GetBuffParam_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_4;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_5;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_6;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_7;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_8;                             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_9;                             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_10;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_11;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_12;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_13;                            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_14;                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_15;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_16;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_17;                            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_18;                            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetLevel_ReturnValue;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_19;                            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetLevel_ReturnValue_1;                // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_value;                                // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMaterialControlComponent*     CallFunc_BP_GetCharacterMaterialControl_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp) == 0x000008, "Wrong alignment on BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp");
static_assert(sizeof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp) == 0x000098, "Wrong size on BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, EntryPoint) == 0x000000, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, CallFunc_BP_GetOwnerPlayerState_ReturnValue) == 0x000008, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::CallFunc_BP_GetOwnerPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable) == 0x000010, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, CallFunc_BP_GetBuffParam_ReturnValue) == 0x000018, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::CallFunc_BP_GetBuffParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_1) == 0x000020, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_2) == 0x000024, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_3) == 0x000028, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_4) == 0x00002C, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_5) == 0x000030, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_6) == 0x000034, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_7) == 0x000038, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_8) == 0x00003C, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_int_Variable) == 0x000040, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_9) == 0x000044, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_10) == 0x000048, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_11) == 0x00004C, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_12) == 0x000050, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_13) == 0x000054, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_14) == 0x000058, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_15) == 0x00005C, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_16) == 0x000060, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_17) == 0x000064, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_17' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_18) == 0x000068, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_18' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, CallFunc_BP_GetLevel_ReturnValue) == 0x00006C, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::CallFunc_BP_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_float_Variable_19) == 0x000070, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_float_Variable_19' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, CallFunc_BP_GetLevel_ReturnValue_1) == 0x000074, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::CallFunc_BP_GetLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, K2Node_Select_Default) == 0x000078, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, K2Node_Event_value) == 0x00007C, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::K2Node_Event_value' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, Temp_int_Variable_1) == 0x000080, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, K2Node_Select_Default_1) == 0x000084, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000088, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp, CallFunc_BP_GetCharacterMaterialControl_ReturnValue) == 0x000090, "Member 'BP_CC_Skill_SpeedUp_C_ExecuteUbergraph_BP_CC_Skill_SpeedUp::CallFunc_BP_GetCharacterMaterialControl_ReturnValue' has a wrong offset!");

// Function BP_CC_Skill_SpeedUp.BP_CC_Skill_SpeedUp_C.BP_OnUpdateIntervalValue
// 0x0004 (0x0004 - 0x0000)
struct BP_CC_Skill_SpeedUp_C_BP_OnUpdateIntervalValue final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CC_Skill_SpeedUp_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong alignment on BP_CC_Skill_SpeedUp_C_BP_OnUpdateIntervalValue");
static_assert(sizeof(BP_CC_Skill_SpeedUp_C_BP_OnUpdateIntervalValue) == 0x000004, "Wrong size on BP_CC_Skill_SpeedUp_C_BP_OnUpdateIntervalValue");
static_assert(offsetof(BP_CC_Skill_SpeedUp_C_BP_OnUpdateIntervalValue, Value) == 0x000000, "Member 'BP_CC_Skill_SpeedUp_C_BP_OnUpdateIntervalValue::Value' has a wrong offset!");

}

