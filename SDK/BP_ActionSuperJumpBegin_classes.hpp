#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionSuperJumpBegin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionSuperJumpBegin.BP_ActionSuperJumpBegin_C
// 0x0010 (0x01C0 - 0x01B0)
class UBP_ActionSuperJumpBegin_C final : public UActionNormalBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         HoldTime;                                          // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionSuperJumpBegin(int32 EntryPoint);
	void BP_ActionMain();
	void BP_OnBeginAction(const class FName& PrevAction);
	void HighJumpBegin();
	void BP_OnEndAction(const class FName& NextAction);

	bool BP_IsEnableShiftAction(const class FName& NextAction) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSuperJumpBegin_C">();
	}
	static class UBP_ActionSuperJumpBegin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSuperJumpBegin_C>();
	}
};
static_assert(alignof(UBP_ActionSuperJumpBegin_C) == 0x000008, "Wrong alignment on UBP_ActionSuperJumpBegin_C");
static_assert(sizeof(UBP_ActionSuperJumpBegin_C) == 0x0001C0, "Wrong size on UBP_ActionSuperJumpBegin_C");
static_assert(offsetof(UBP_ActionSuperJumpBegin_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_ActionSuperJumpBegin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionSuperJumpBegin_C, HoldTime) == 0x0001B8, "Member 'UBP_ActionSuperJumpBegin_C::HoldTime' has a wrong offset!");

}
