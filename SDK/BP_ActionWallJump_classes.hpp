#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionWallJump

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionWallJump.BP_ActionWallJump_C
// 0x0008 (0x01B8 - 0x01B0)
class UBP_ActionWallJump_C final : public UActionNormalBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionWallJump(int32 EntryPoint);
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_ActionMain();

	bool BP_IsEnableShiftAction(const class FName& NextAction) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionWallJump_C">();
	}
	static class UBP_ActionWallJump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionWallJump_C>();
	}
};
static_assert(alignof(UBP_ActionWallJump_C) == 0x000008, "Wrong alignment on UBP_ActionWallJump_C");
static_assert(sizeof(UBP_ActionWallJump_C) == 0x0001B8, "Wrong size on UBP_ActionWallJump_C");
static_assert(offsetof(UBP_ActionWallJump_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_ActionWallJump_C::UberGraphFrame' has a wrong offset!");

}
