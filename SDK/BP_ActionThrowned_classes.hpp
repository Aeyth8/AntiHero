#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionThrowned

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionThrowned.BP_ActionThrowned_C
// 0x0010 (0x01D0 - 0x01C0)
class UBP_ActionThrowned_C final : public UActionThrowned
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          EnableLanding;                                     // 0x01C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_ActionThrowned(int32 EntryPoint);
	void BP_ActionMain();
	void BP_OnBeginAction(const class FName& PrevAction);
	void Speed();
	void BP_ActionRemote();
	void BP_OnLandingEvent();
	void BP_OnEndAction(const class FName& NextAction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionThrowned_C">();
	}
	static class UBP_ActionThrowned_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionThrowned_C>();
	}
};
static_assert(alignof(UBP_ActionThrowned_C) == 0x000008, "Wrong alignment on UBP_ActionThrowned_C");
static_assert(sizeof(UBP_ActionThrowned_C) == 0x0001D0, "Wrong size on UBP_ActionThrowned_C");
static_assert(offsetof(UBP_ActionThrowned_C, UberGraphFrame) == 0x0001C0, "Member 'UBP_ActionThrowned_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionThrowned_C, EnableLanding) == 0x0001C8, "Member 'UBP_ActionThrowned_C::EnableLanding' has a wrong offset!");

}
