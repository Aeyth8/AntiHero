#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionAttack_UseItem

#include "Basic.hpp"

#include "InGameModule_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionAttack_UseItem.BP_ActionAttack_UseItem_C.ExecuteUbergraph_BP_ActionAttack_UseItem
// 0x0118 (0x0118 - 0x0000)
struct BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_nextAction;                           // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue_2;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue_3;            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_2; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetDeltaSeconds_ReturnValue;           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UABP_Ch000_Linked_Action_UseSupply_C*   K2Node_DynamicCast_AsABP_Ch_000_Linked_Action_Use_Supply; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_3; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsCrouching_ReturnValue;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue_1; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_Ch000_Linked_Action_UseSupply_C*   K2Node_DynamicCast_AsABP_Ch_000_Linked_Action_Use_Supply_1; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BP_GetSuuplyId_ReturnValue;               // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_1;           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterState*                        CallFunc_BP_GetOwnerState_ReturnValue_2;           // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttackDedicatedEventId                       K2Node_Event_id;                                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsNagaraDamaging_ReturnValue;          // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsWallWalk_ReturnValue;                // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsWallDash_ReturnValue;                // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSuperArmor;                          // 0x00EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bZeroDamage;                          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCommandComponent*             CallFunc_BP_GetOwnerCommand_ReturnValue;           // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetDeltaSeconds_ReturnValue_1;         // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue_4;            // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_prevAction;                           // 0x0110(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem) == 0x000008, "Wrong alignment on BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem");
static_assert(sizeof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem) == 0x000118, "Wrong size on BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, EntryPoint) == 0x000000, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, Temp_bool_Variable) == 0x000004, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, Temp_float_Variable) == 0x000008, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, Temp_float_Variable_1) == 0x00000C, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_Event_nextAction) == 0x000010, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_Event_nextAction' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetAnimation_ReturnValue) == 0x000018, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetAnimation_ReturnValue_1) == 0x000020, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetAnimation_ReturnValue_2) == 0x000028, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetAnimation_ReturnValue_3) == 0x000030, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, Temp_float_Variable_2) == 0x000038, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, Temp_float_Variable_3) == 0x00003C, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000040, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1) == 0x000048, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_2) == 0x000050, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetDeltaSeconds_ReturnValue) == 0x000058, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00005C, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue) == 0x000060, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_Lerp_ReturnValue) == 0x000068, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_DynamicCast_AsABP_Ch_000_Linked_Action_Use_Supply) == 0x000070, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_DynamicCast_AsABP_Ch_000_Linked_Action_Use_Supply' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_3) == 0x000080, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetOwnerState_ReturnValue) == 0x000088, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetOwnerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_IsCrouching_ReturnValue) == 0x000090, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_IsCrouching_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue_1) == 0x000098, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_DynamicCast_AsABP_Ch_000_Linked_Action_Use_Supply_1) == 0x0000A0, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_DynamicCast_AsABP_Ch_000_Linked_Action_Use_Supply_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_Select_Default) == 0x0000AC, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, Temp_bool_Variable_1) == 0x0000B0, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000B4, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000B8, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_Select_Default_1) == 0x0000BC, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_FClamp_ReturnValue) == 0x0000C0, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetSuuplyId_ReturnValue) == 0x0000C4, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetSuuplyId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetOwnerState_ReturnValue_1) == 0x0000D0, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetOwnerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000D8, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetOwnerState_ReturnValue_2) == 0x0000E0, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetOwnerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_Event_id) == 0x0000E8, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_Event_id' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_IsNagaraDamaging_ReturnValue) == 0x0000E9, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_IsNagaraDamaging_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_SwitchEnum_CmpSuccess) == 0x0000EA, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_IsWallWalk_ReturnValue) == 0x0000EB, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_IsWallWalk_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_IsWallDash_ReturnValue) == 0x0000EC, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_IsWallDash_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BooleanOR_ReturnValue) == 0x0000ED, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BooleanOR_ReturnValue_1) == 0x0000EE, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_Event_bSuperArmor) == 0x0000EF, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_Event_bSuperArmor' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_Event_bZeroDamage) == 0x0000F0, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_Event_bZeroDamage' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BooleanOR_ReturnValue_2) == 0x0000F1, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetOwnerCommand_ReturnValue) == 0x0000F8, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetOwnerCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetDeltaSeconds_ReturnValue_1) == 0x000100, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000104, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, CallFunc_BP_GetAnimation_ReturnValue_4) == 0x000108, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::CallFunc_BP_GetAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem, K2Node_Event_prevAction) == 0x000110, "Member 'BP_ActionAttack_UseItem_C_ExecuteUbergraph_BP_ActionAttack_UseItem::K2Node_Event_prevAction' has a wrong offset!");

// Function BP_ActionAttack_UseItem.BP_ActionAttack_UseItem_C.BP_OnBeginAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionAttack_UseItem_C_BP_OnBeginAction final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAttack_UseItem_C_BP_OnBeginAction) == 0x000004, "Wrong alignment on BP_ActionAttack_UseItem_C_BP_OnBeginAction");
static_assert(sizeof(BP_ActionAttack_UseItem_C_BP_OnBeginAction) == 0x000008, "Wrong size on BP_ActionAttack_UseItem_C_BP_OnBeginAction");
static_assert(offsetof(BP_ActionAttack_UseItem_C_BP_OnBeginAction, PrevAction) == 0x000000, "Member 'BP_ActionAttack_UseItem_C_BP_OnBeginAction::PrevAction' has a wrong offset!");

// Function BP_ActionAttack_UseItem.BP_ActionAttack_UseItem_C.BP_OnBootDamage
// 0x0002 (0x0002 - 0x0000)
struct BP_ActionAttack_UseItem_C_BP_OnBootDamage final
{
public:
	bool                                          bSuperArmor;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bZeroDamage;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionAttack_UseItem_C_BP_OnBootDamage) == 0x000001, "Wrong alignment on BP_ActionAttack_UseItem_C_BP_OnBootDamage");
static_assert(sizeof(BP_ActionAttack_UseItem_C_BP_OnBootDamage) == 0x000002, "Wrong size on BP_ActionAttack_UseItem_C_BP_OnBootDamage");
static_assert(offsetof(BP_ActionAttack_UseItem_C_BP_OnBootDamage, bSuperArmor) == 0x000000, "Member 'BP_ActionAttack_UseItem_C_BP_OnBootDamage::bSuperArmor' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_BP_OnBootDamage, bZeroDamage) == 0x000001, "Member 'BP_ActionAttack_UseItem_C_BP_OnBootDamage::bZeroDamage' has a wrong offset!");

// Function BP_ActionAttack_UseItem.BP_ActionAttack_UseItem_C.BP_OnNotificationAttackDedicatedEvent
// 0x0001 (0x0001 - 0x0000)
struct BP_ActionAttack_UseItem_C_BP_OnNotificationAttackDedicatedEvent final
{
public:
	EAttackDedicatedEventId                       ID;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAttack_UseItem_C_BP_OnNotificationAttackDedicatedEvent) == 0x000001, "Wrong alignment on BP_ActionAttack_UseItem_C_BP_OnNotificationAttackDedicatedEvent");
static_assert(sizeof(BP_ActionAttack_UseItem_C_BP_OnNotificationAttackDedicatedEvent) == 0x000001, "Wrong size on BP_ActionAttack_UseItem_C_BP_OnNotificationAttackDedicatedEvent");
static_assert(offsetof(BP_ActionAttack_UseItem_C_BP_OnNotificationAttackDedicatedEvent, ID) == 0x000000, "Member 'BP_ActionAttack_UseItem_C_BP_OnNotificationAttackDedicatedEvent::ID' has a wrong offset!");

// Function BP_ActionAttack_UseItem.BP_ActionAttack_UseItem_C.BP_OnEndAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionAttack_UseItem_C_BP_OnEndAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAttack_UseItem_C_BP_OnEndAction) == 0x000004, "Wrong alignment on BP_ActionAttack_UseItem_C_BP_OnEndAction");
static_assert(sizeof(BP_ActionAttack_UseItem_C_BP_OnEndAction) == 0x000008, "Wrong size on BP_ActionAttack_UseItem_C_BP_OnEndAction");
static_assert(offsetof(BP_ActionAttack_UseItem_C_BP_OnEndAction, NextAction) == 0x000000, "Member 'BP_ActionAttack_UseItem_C_BP_OnEndAction::NextAction' has a wrong offset!");

// Function BP_ActionAttack_UseItem.BP_ActionAttack_UseItem_C.BP_IsEnableShiftAction
// 0x000C (0x000C - 0x0000)
struct BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction) == 0x000004, "Wrong alignment on BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction");
static_assert(sizeof(BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction) == 0x00000C, "Wrong size on BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction");
static_assert(offsetof(BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction, NextAction) == 0x000000, "Member 'BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction::NextAction' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction, ReturnValue) == 0x000008, "Member 'BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction, K2Node_SwitchName_CmpSuccess) == 0x000009, "Member 'BP_ActionAttack_UseItem_C_BP_IsEnableShiftAction::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

}
