#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageInvolved

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"
#include "GameModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionDamageInvolved.BP_ActionDamageInvolved_C
// 0x0008 (0x01D0 - 0x01C8)
class UBP_ActionDamageInvolved_C final : public UActionDamageInvolved
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionDamageInvolved(int32 EntryPoint);
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_ActionRemote();
	void BP_OnLandingEvent();
	void BP_ActionMain();
	void DecideAnimation(EAnimationId* AnimationId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDamageInvolved_C">();
	}
	static class UBP_ActionDamageInvolved_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDamageInvolved_C>();
	}
};
static_assert(alignof(UBP_ActionDamageInvolved_C) == 0x000008, "Wrong alignment on UBP_ActionDamageInvolved_C");
static_assert(sizeof(UBP_ActionDamageInvolved_C) == 0x0001D0, "Wrong size on UBP_ActionDamageInvolved_C");
static_assert(offsetof(UBP_ActionDamageInvolved_C, UberGraphFrame) == 0x0001C8, "Member 'UBP_ActionDamageInvolved_C::UberGraphFrame' has a wrong offset!");

}
