#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Ch000

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "GameModule_classes.hpp"
#include "AnimBlueprintNodes_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Ch000.ABP_Ch000_C
// 0x2870 (0x2CD0 - 0x0460)
class UABP_Ch000_C final : public UAnimInstanceGame
{
public:
	uint8                                         Pad_458[0x8];                                      // 0x0458(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0468(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0498(0x0118)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x05B0(0x0118)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_3;                  // 0x06C8(0x00C0)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0788(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x07B8(0x0118)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x08D0(0x0030)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0900(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0920(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x0940(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0A48(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0A68(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0A88(0x0108)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x0B90(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0C50(0x0158)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0DA8(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x0F00(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0F28(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0F50(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0F78(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5;                              // 0x0FA0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x0FE8(0x0048)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x1030(0x01E0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x1210(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x1258(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_5;                  // 0x12A0(0x00E8)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x1388(0x00B0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1438(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1540(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x1568(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1630(0x0028)()
	uint8                                         Pad_1658[0x8];                                     // 0x1658(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_1;                            // 0x1660(0x01B0)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x1810(0x01B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x19C0(0x0080)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_1;                   // 0x1A40(0x00B0)()
	struct FAnimNode_AimOffset2                   AnimGraphNode_AimOffset2_1;                        // 0x1AF0(0x0108)()
	struct FAnimNode_AimOffset2                   AnimGraphNode_AimOffset2;                          // 0x1BF8(0x0108)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x1D00(0x0070)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_4;                  // 0x1D70(0x00E8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_3;                  // 0x1E58(0x00E8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1F40(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x1F68(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x1FB0(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x2070(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x20B8(0x0080)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x2138(0x00C8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x2200(0x00E8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x22E8(0x00E8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x23D0(0x00E8)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x24B8(0x00B0)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x2568(0x00B0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x2618(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x2720(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x2828(0x0108)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x2930(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x29B0(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x2A30(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x2AB0(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2B30(0x0080)()
	struct FAnimNode_MultiWayBlend                AnimGraphNode_MultiWayBlend;                       // 0x2BB0(0x0050)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x2C00(0x00C0)()
	float                                         UpperWeights;                                      // 0x2CC0(0x0004)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __CustomProperty_UpperWeights_5EB587DC4E792A366388E69C00FC2840; // 0x2CC4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_Ch000(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ActionCustom(const struct FPoseLink& InPose, struct FPoseLink* ActionCustom_0);
	void NagaraBlend(const struct FPoseLink& LowerBody, const struct FPoseLink& UpperBody, float UpperWeights_0, struct FPoseLink* NagaraBlend_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Ch000_C">();
	}
	static class UABP_Ch000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Ch000_C>();
	}
};
static_assert(alignof(UABP_Ch000_C) == 0x000010, "Wrong alignment on UABP_Ch000_C");
static_assert(sizeof(UABP_Ch000_C) == 0x002CD0, "Wrong size on UABP_Ch000_C");
static_assert(offsetof(UABP_Ch000_C, UberGraphFrame) == 0x000460, "Member 'UABP_Ch000_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Root_2) == 0x000468, "Member 'UABP_Ch000_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LinkedInputPose_2) == 0x000498, "Member 'UABP_Ch000_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LinkedInputPose_1) == 0x0005B0, "Member 'UABP_Ch000_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LayeredBoneBlend_3) == 0x0006C8, "Member 'UABP_Ch000_C::AnimGraphNode_LayeredBoneBlend_3' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Root_1) == 0x000788, "Member 'UABP_Ch000_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LinkedInputPose) == 0x0007B8, "Member 'UABP_Ch000_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Root) == 0x0008D0, "Member 'UABP_Ch000_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000900, "Member 'UABP_Ch000_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000920, "Member 'UABP_Ch000_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_ModifyBone_5) == 0x000940, "Member 'UABP_Ch000_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LocalToComponentSpace) == 0x000A48, "Member 'UABP_Ch000_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_ComponentToLocalSpace) == 0x000A68, "Member 'UABP_Ch000_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_ModifyBone_4) == 0x000A88, "Member 'UABP_Ch000_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LayeredBoneBlend_2) == 0x000B90, "Member 'UABP_Ch000_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_SaveCachedPose_1) == 0x000C50, "Member 'UABP_Ch000_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_SaveCachedPose) == 0x000DA8, "Member 'UABP_Ch000_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_UseCachedPose_6) == 0x000F00, "Member 'UABP_Ch000_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_UseCachedPose_5) == 0x000F28, "Member 'UABP_Ch000_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_UseCachedPose_4) == 0x000F50, "Member 'UABP_Ch000_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_UseCachedPose_3) == 0x000F78, "Member 'UABP_Ch000_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Slot_5) == 0x000FA0, "Member 'UABP_Ch000_C::AnimGraphNode_Slot_5' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Slot_4) == 0x000FE8, "Member 'UABP_Ch000_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_TwoBoneIK) == 0x001030, "Member 'UABP_Ch000_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Slot_3) == 0x001210, "Member 'UABP_Ch000_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Slot_2) == 0x001258, "Member 'UABP_Ch000_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_BlendSpacePlayer_5) == 0x0012A0, "Member 'UABP_Ch000_C::AnimGraphNode_BlendSpacePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_BlendListByEnum_1) == 0x001388, "Member 'UABP_Ch000_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_ModifyBone_3) == 0x001438, "Member 'UABP_Ch000_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_UseCachedPose_2) == 0x001540, "Member 'UABP_Ch000_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_TwoWayBlend) == 0x001568, "Member 'UABP_Ch000_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_UseCachedPose_1) == 0x001630, "Member 'UABP_Ch000_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LookAt_1) == 0x001660, "Member 'UABP_Ch000_C::AnimGraphNode_LookAt_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LookAt) == 0x001810, "Member 'UABP_Ch000_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_SequencePlayer_6) == 0x0019C0, "Member 'UABP_Ch000_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LinkedAnimLayer_1) == 0x001A40, "Member 'UABP_Ch000_C::AnimGraphNode_LinkedAnimLayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_AimOffset2_1) == 0x001AF0, "Member 'UABP_Ch000_C::AnimGraphNode_AimOffset2_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_AimOffset2) == 0x001BF8, "Member 'UABP_Ch000_C::AnimGraphNode_AimOffset2' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Inertialization) == 0x001D00, "Member 'UABP_Ch000_C::AnimGraphNode_Inertialization' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_BlendSpacePlayer_4) == 0x001D70, "Member 'UABP_Ch000_C::AnimGraphNode_BlendSpacePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_BlendSpacePlayer_3) == 0x001E58, "Member 'UABP_Ch000_C::AnimGraphNode_BlendSpacePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_UseCachedPose) == 0x001F40, "Member 'UABP_Ch000_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Slot_1) == 0x001F68, "Member 'UABP_Ch000_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LayeredBoneBlend_1) == 0x001FB0, "Member 'UABP_Ch000_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_Slot) == 0x002070, "Member 'UABP_Ch000_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_SequencePlayer_5) == 0x0020B8, "Member 'UABP_Ch000_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_ApplyAdditive) == 0x002138, "Member 'UABP_Ch000_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_BlendSpacePlayer_2) == 0x002200, "Member 'UABP_Ch000_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_BlendSpacePlayer_1) == 0x0022E8, "Member 'UABP_Ch000_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_BlendSpacePlayer) == 0x0023D0, "Member 'UABP_Ch000_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_BlendListByEnum) == 0x0024B8, "Member 'UABP_Ch000_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LinkedAnimLayer) == 0x002568, "Member 'UABP_Ch000_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_ModifyBone_2) == 0x002618, "Member 'UABP_Ch000_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_ModifyBone_1) == 0x002720, "Member 'UABP_Ch000_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_ModifyBone) == 0x002828, "Member 'UABP_Ch000_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_SequencePlayer_4) == 0x002930, "Member 'UABP_Ch000_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_SequencePlayer_3) == 0x0029B0, "Member 'UABP_Ch000_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_SequencePlayer_2) == 0x002A30, "Member 'UABP_Ch000_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_SequencePlayer_1) == 0x002AB0, "Member 'UABP_Ch000_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_SequencePlayer) == 0x002B30, "Member 'UABP_Ch000_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_MultiWayBlend) == 0x002BB0, "Member 'UABP_Ch000_C::AnimGraphNode_MultiWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, AnimGraphNode_LayeredBoneBlend) == 0x002C00, "Member 'UABP_Ch000_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, UpperWeights) == 0x002CC0, "Member 'UABP_Ch000_C::UpperWeights' has a wrong offset!");
static_assert(offsetof(UABP_Ch000_C, __CustomProperty_UpperWeights_5EB587DC4E792A366388E69C00FC2840) == 0x002CC4, "Member 'UABP_Ch000_C::__CustomProperty_UpperWeights_5EB587DC4E792A366388E69C00FC2840' has a wrong offset!");

}
