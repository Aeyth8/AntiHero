#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionRideOverWall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionRideOverWall.BP_ActionRideOverWall_C
// 0x0010 (0x01C0 - 0x01B0)
class UBP_ActionRideOverWall_C final : public UActionNormalBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          MoveDirection;                                     // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_ActionRideOverWall(int32 EntryPoint);
	void BP_OnEndAction(const class FName& NextAction);
	void BP_OnAnimNotify(const class FName& Type, const class FName& Event);
	void BP_OnLandingEvent();
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_ActionMain();
	void SetMovementSpeed();

	bool BP_IsEnableShiftAction(const class FName& NextAction) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionRideOverWall_C">();
	}
	static class UBP_ActionRideOverWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionRideOverWall_C>();
	}
};
static_assert(alignof(UBP_ActionRideOverWall_C) == 0x000008, "Wrong alignment on UBP_ActionRideOverWall_C");
static_assert(sizeof(UBP_ActionRideOverWall_C) == 0x0001C0, "Wrong size on UBP_ActionRideOverWall_C");
static_assert(offsetof(UBP_ActionRideOverWall_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_ActionRideOverWall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideOverWall_C, MoveDirection) == 0x0001B8, "Member 'UBP_ActionRideOverWall_C::MoveDirection' has a wrong offset!");

}
