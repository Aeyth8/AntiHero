#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionFall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"
#include "GameModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionFall.BP_ActionFall_C
// 0x0010 (0x01C0 - 0x01B0)
class UBP_ActionFall_C final : public UActionNormalBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         BlendInTime;                                       // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionFall(int32 EntryPoint);
	void BP_OnEndAction(const class FName& NextAction);
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_ActionMain();
	void BP_OnLandingEvent();

	bool BP_IsEnableShiftAction(const class FName& NextAction) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionFall_C">();
	}
	static class UBP_ActionFall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionFall_C>();
	}
};
static_assert(alignof(UBP_ActionFall_C) == 0x000008, "Wrong alignment on UBP_ActionFall_C");
static_assert(sizeof(UBP_ActionFall_C) == 0x0001C0, "Wrong size on UBP_ActionFall_C");
static_assert(offsetof(UBP_ActionFall_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_ActionFall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionFall_C, BlendInTime) == 0x0001B8, "Member 'UBP_ActionFall_C::BlendInTime' has a wrong offset!");

}
