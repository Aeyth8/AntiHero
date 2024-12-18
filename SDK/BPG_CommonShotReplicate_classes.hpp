#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPG_CommonShotReplicate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPG_CommonShotReplicate.BPG_CommonShotReplicate_C
// 0x0010 (0x0460 - 0x0450)
class ABPG_CommonShotReplicate_C final : public AProjectileGeneratorBattle
{
public:
	uint8                                         Pad_448[0x8];                                      // 0x0448(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPG_CommonShotReplicate(int32 EntryPoint);
	void OnSpawnInitParams();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPG_CommonShotReplicate_C">();
	}
	static class ABPG_CommonShotReplicate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPG_CommonShotReplicate_C>();
	}
};
static_assert(alignof(ABPG_CommonShotReplicate_C) == 0x000010, "Wrong alignment on ABPG_CommonShotReplicate_C");
static_assert(sizeof(ABPG_CommonShotReplicate_C) == 0x000460, "Wrong size on ABPG_CommonShotReplicate_C");
static_assert(offsetof(ABPG_CommonShotReplicate_C, UberGraphFrame) == 0x000450, "Member 'ABPG_CommonShotReplicate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABPG_CommonShotReplicate_C, DefaultSceneRoot) == 0x000458, "Member 'ABPG_CommonShotReplicate_C::DefaultSceneRoot' has a wrong offset!");

}

