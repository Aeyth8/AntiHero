#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionDamage.BP_ActionDamage_C
// 0x0008 (0x01C0 - 0x01B8)
class UBP_ActionDamage_C final : public UActionDamageBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionDamage(int32 EntryPoint);
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_ActionMain();
	void UpdateOnce();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDamage_C">();
	}
	static class UBP_ActionDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDamage_C>();
	}
};
static_assert(alignof(UBP_ActionDamage_C) == 0x000008, "Wrong alignment on UBP_ActionDamage_C");
static_assert(sizeof(UBP_ActionDamage_C) == 0x0001C0, "Wrong size on UBP_ActionDamage_C");
static_assert(offsetof(UBP_ActionDamage_C, UberGraphFrame) == 0x0001B8, "Member 'UBP_ActionDamage_C::UberGraphFrame' has a wrong offset!");

}

