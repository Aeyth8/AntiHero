#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageFall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_structs.hpp"
#include "InGameModule_classes.hpp"
#include "GameModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionDamageFall.BP_ActionDamageFall_C
// 0x0008 (0x01C0 - 0x01B8)
class UBP_ActionDamageFall_C final : public UActionDamageFall
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionDamageFall(int32 EntryPoint);
	void BP_ActionRemote();
	void BP_OnLandingEvent();
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_ActionMain();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDamageFall_C">();
	}
	static class UBP_ActionDamageFall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDamageFall_C>();
	}
};
static_assert(alignof(UBP_ActionDamageFall_C) == 0x000008, "Wrong alignment on UBP_ActionDamageFall_C");
static_assert(sizeof(UBP_ActionDamageFall_C) == 0x0001C0, "Wrong size on UBP_ActionDamageFall_C");
static_assert(offsetof(UBP_ActionDamageFall_C, UberGraphFrame) == 0x0001B8, "Member 'UBP_ActionDamageFall_C::UberGraphFrame' has a wrong offset!");

}
