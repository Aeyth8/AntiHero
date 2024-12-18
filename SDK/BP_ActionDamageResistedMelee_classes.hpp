#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageResistedMelee

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"
#include "GameModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionDamageResistedMelee.BP_ActionDamageResistedMelee_C
// 0x0008 (0x01C0 - 0x01B8)
class UBP_ActionDamageResistedMelee_C final : public UActionDamageBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionDamageResistedMelee(int32 EntryPoint);
	void BP_ActionRemote();
	void BP_ActionMain();
	void BP_OnBeginAction(const class FName& PrevAction);
	void UpdateOnce();
	void DecideAnimationId(EAnimationId* Animation_Id);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDamageResistedMelee_C">();
	}
	static class UBP_ActionDamageResistedMelee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDamageResistedMelee_C>();
	}
};
static_assert(alignof(UBP_ActionDamageResistedMelee_C) == 0x000008, "Wrong alignment on UBP_ActionDamageResistedMelee_C");
static_assert(sizeof(UBP_ActionDamageResistedMelee_C) == 0x0001C0, "Wrong size on UBP_ActionDamageResistedMelee_C");
static_assert(offsetof(UBP_ActionDamageResistedMelee_C, UberGraphFrame) == 0x0001B8, "Member 'UBP_ActionDamageResistedMelee_C::UberGraphFrame' has a wrong offset!");

}

