#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDie

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InGameModule_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionDie.BP_ActionDie_C.ExecuteUbergraph_BP_ActionDie
// 0x0160 (0x0160 - 0x0000)
struct BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterConditionControlComponent*    CallFunc_BP_GetConditionControlComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_prevAction;                           // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_2; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerBattle*                K2Node_DynamicCast_AsPlayer_Controller_Battle;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_3; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBattle*                       K2Node_DynamicCast_AsGame_State_Battle;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EBattleSequence                               CallFunc_GetBattleSequence_ReturnValue;            // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimation*                             CallFunc_BP_GetAnimation_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_ByteByte_ReturnValue;                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateBattle*                     CallFunc_BP_GetPlayerStateBattle_ReturnValue;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_4; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsImitation_ReturnValue;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0xF];                                       // 0x0091(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	class UBPInGameActorUtilityComponent*         CallFunc_BP_GetUBPInGameActorUtilityComponent_ReturnValue; // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_5; // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_108[0x8];                                      // 0x0108(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0110(0x0030)(IsPlainOldData, NoDestructor)
	class UCustomParticleSystemComponent*         CallFunc_BP_SpawnEmitterAtLocation_ReturnValue;    // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterBattle*                       CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_6; // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie) == 0x000010, "Wrong alignment on BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie");
static_assert(sizeof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie) == 0x000160, "Wrong size on BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, EntryPoint) == 0x000000, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue) == 0x000008, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetConditionControlComponent_ReturnValue) == 0x000010, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetConditionControlComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, K2Node_Event_prevAction) == 0x000018, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::K2Node_Event_prevAction' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1) == 0x000020, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_2) == 0x000028, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_GetController_ReturnValue) == 0x000030, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, K2Node_DynamicCast_AsPlayer_Controller_Battle) == 0x000038, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::K2Node_DynamicCast_AsPlayer_Controller_Battle' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_3) == 0x000048, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_HasAuthority_ReturnValue) == 0x000050, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_GetGameState_ReturnValue) == 0x000058, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, K2Node_DynamicCast_AsGame_State_Battle) == 0x000060, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::K2Node_DynamicCast_AsGame_State_Battle' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_GetBattleSequence_ReturnValue) == 0x000069, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_GetBattleSequence_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetAnimation_ReturnValue) == 0x000070, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_MakeLiteralByte_ReturnValue) == 0x000078, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_Less_ByteByte_ReturnValue) == 0x000079, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_Less_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetPlayerStateBattle_ReturnValue) == 0x000080, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetPlayerStateBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_4) == 0x000088, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_IsImitation_ReturnValue) == 0x000090, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_IsImitation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_GetSocketTransform_ReturnValue) == 0x0000A0, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetUBPInGameActorUtilityComponent_ReturnValue) == 0x0000D0, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetUBPInGameActorUtilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BreakTransform_Location) == 0x0000D8, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BreakTransform_Rotation) == 0x0000E4, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BreakTransform_Scale) == 0x0000F0, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_5) == 0x000100, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_MakeTransform_ReturnValue) == 0x000110, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_SpawnEmitterAtLocation_ReturnValue) == 0x000140, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_6) == 0x000148, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_BP_GetOwnerCharacterBattle_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie, CallFunc_HasAuthority_ReturnValue_1) == 0x000150, "Member 'BP_ActionDie_C_ExecuteUbergraph_BP_ActionDie::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");

// Function BP_ActionDie.BP_ActionDie_C.BP_OnBeginAction
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionDie_C_BP_OnBeginAction final
{
public:
	class FName                                   PrevAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDie_C_BP_OnBeginAction) == 0x000004, "Wrong alignment on BP_ActionDie_C_BP_OnBeginAction");
static_assert(sizeof(BP_ActionDie_C_BP_OnBeginAction) == 0x000008, "Wrong size on BP_ActionDie_C_BP_OnBeginAction");
static_assert(offsetof(BP_ActionDie_C_BP_OnBeginAction, PrevAction) == 0x000000, "Member 'BP_ActionDie_C_BP_OnBeginAction::PrevAction' has a wrong offset!");

// Function BP_ActionDie.BP_ActionDie_C.BP_IsEnableShiftAction
// 0x000C (0x000C - 0x0000)
struct BP_ActionDie_C_BP_IsEnableShiftAction final
{
public:
	class FName                                   NextAction;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionDie_C_BP_IsEnableShiftAction) == 0x000004, "Wrong alignment on BP_ActionDie_C_BP_IsEnableShiftAction");
static_assert(sizeof(BP_ActionDie_C_BP_IsEnableShiftAction) == 0x00000C, "Wrong size on BP_ActionDie_C_BP_IsEnableShiftAction");
static_assert(offsetof(BP_ActionDie_C_BP_IsEnableShiftAction, NextAction) == 0x000000, "Member 'BP_ActionDie_C_BP_IsEnableShiftAction::NextAction' has a wrong offset!");
static_assert(offsetof(BP_ActionDie_C_BP_IsEnableShiftAction, ReturnValue) == 0x000008, "Member 'BP_ActionDie_C_BP_IsEnableShiftAction::ReturnValue' has a wrong offset!");

}
