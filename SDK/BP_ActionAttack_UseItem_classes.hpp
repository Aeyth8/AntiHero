#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionAttack_UseItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_structs.hpp"
#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionAttack_UseItem.BP_ActionAttack_UseItem_C
// 0x0010 (0x0370 - 0x0360)
class UBP_ActionAttack_UseItem_C final : public UActionAttackUseItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         BlendRate;                                         // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UsingTime;                                         // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionAttack_UseItem(int32 EntryPoint);
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_ActionMain();
	void BP_OnBootDamage(bool bSuperArmor, bool bZeroDamage);
	void BP_OnNotificationAttackDedicatedEvent(EAttackDedicatedEventId ID);
	void AnimBPBlend();
	void CancelWaiting();
	void BP_ActionRemote();
	void BP_OnEndAction(const class FName& NextAction);
	void CancelSetting();

	bool BP_IsEnableShiftAction(const class FName& NextAction) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionAttack_UseItem_C">();
	}
	static class UBP_ActionAttack_UseItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionAttack_UseItem_C>();
	}
};
static_assert(alignof(UBP_ActionAttack_UseItem_C) == 0x000008, "Wrong alignment on UBP_ActionAttack_UseItem_C");
static_assert(sizeof(UBP_ActionAttack_UseItem_C) == 0x000370, "Wrong size on UBP_ActionAttack_UseItem_C");
static_assert(offsetof(UBP_ActionAttack_UseItem_C, UberGraphFrame) == 0x000360, "Member 'UBP_ActionAttack_UseItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionAttack_UseItem_C, BlendRate) == 0x000368, "Member 'UBP_ActionAttack_UseItem_C::BlendRate' has a wrong offset!");
static_assert(offsetof(UBP_ActionAttack_UseItem_C, UsingTime) == 0x00036C, "Member 'UBP_ActionAttack_UseItem_C::UsingTime' has a wrong offset!");

}

