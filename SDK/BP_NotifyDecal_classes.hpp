#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotifyDecal

#include "Basic.hpp"

#include "InGameModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NotifyDecal.BP_NotifyDecal_C
// 0x0000 (0x02B0 - 0x02B0)
class ABP_NotifyDecal_C final : public ANotifyDecalActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NotifyDecal_C">();
	}
	static class ABP_NotifyDecal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NotifyDecal_C>();
	}
};
static_assert(alignof(ABP_NotifyDecal_C) == 0x000008, "Wrong alignment on ABP_NotifyDecal_C");
static_assert(sizeof(ABP_NotifyDecal_C) == 0x0002B0, "Wrong size on ABP_NotifyDecal_C");

}
