#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageStrong

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"
#include "GameModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionDamageStrong.BP_ActionDamageStrong_C
// 0x0010 (0x01C8 - 0x01B8)
class UBP_ActionDamageStrong_C final : public UActionDamageStrong
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         WaitTime;                                          // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LandingOK;                                         // 0x01C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_ActionDamageStrong(int32 EntryPoint);
	void BP_ActionRemote();
	void BP_OnLandingEvent();
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_ActionMain();
	void DecideAnimationId(EAnimationId* AnimationId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDamageStrong_C">();
	}
	static class UBP_ActionDamageStrong_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDamageStrong_C>();
	}
};
static_assert(alignof(UBP_ActionDamageStrong_C) == 0x000008, "Wrong alignment on UBP_ActionDamageStrong_C");
static_assert(sizeof(UBP_ActionDamageStrong_C) == 0x0001C8, "Wrong size on UBP_ActionDamageStrong_C");
static_assert(offsetof(UBP_ActionDamageStrong_C, UberGraphFrame) == 0x0001B8, "Member 'UBP_ActionDamageStrong_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionDamageStrong_C, WaitTime) == 0x0001C0, "Member 'UBP_ActionDamageStrong_C::WaitTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionDamageStrong_C, LandingOK) == 0x0001C4, "Member 'UBP_ActionDamageStrong_C::LandingOK' has a wrong offset!");

}
