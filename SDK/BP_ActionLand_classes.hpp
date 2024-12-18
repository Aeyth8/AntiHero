#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionLand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionLand.BP_ActionLand_C
// 0x0008 (0x01B8 - 0x01B0)
class UBP_ActionLand_C final : public UActionNormalBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionLand(int32 EntryPoint);
	void BP_ActionRemote();
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_ActionMain();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionLand_C">();
	}
	static class UBP_ActionLand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionLand_C>();
	}
};
static_assert(alignof(UBP_ActionLand_C) == 0x000008, "Wrong alignment on UBP_ActionLand_C");
static_assert(sizeof(UBP_ActionLand_C) == 0x0001B8, "Wrong size on UBP_ActionLand_C");
static_assert(offsetof(UBP_ActionLand_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_ActionLand_C::UberGraphFrame' has a wrong offset!");

}

