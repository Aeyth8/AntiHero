#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDodge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionDodge.BP_ActionDodge_C
// 0x0008 (0x01B8 - 0x01B0)
class UBP_ActionDodge_C final : public UActionNormalBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionDodge(int32 EntryPoint);
	void BP_OnBeginAction(const class FName& PrevAction);
	void SpeedControl();
	void BP_ActionMain();
	void BP_OnEndAction(const class FName& NextAction);
	void TurnInitial();
	void SetSpeed();
	void ClearSpeed();
	void UpdateDirection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDodge_C">();
	}
	static class UBP_ActionDodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDodge_C>();
	}
};
static_assert(alignof(UBP_ActionDodge_C) == 0x000008, "Wrong alignment on UBP_ActionDodge_C");
static_assert(sizeof(UBP_ActionDodge_C) == 0x0001B8, "Wrong size on UBP_ActionDodge_C");
static_assert(offsetof(UBP_ActionDodge_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_ActionDodge_C::UberGraphFrame' has a wrong offset!");

}

