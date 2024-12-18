#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BlockList

#include "Basic.hpp"

#include "GameModule_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BlockList.WBP_BlockList_C
// 0x0000 (0x03B0 - 0x03B0)
class UWBP_BlockList_C final : public UBlockListWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BlockList_C">();
	}
	static class UWBP_BlockList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BlockList_C>();
	}
};
static_assert(alignof(UWBP_BlockList_C) == 0x000008, "Wrong alignment on UWBP_BlockList_C");
static_assert(sizeof(UWBP_BlockList_C) == 0x0003B0, "Wrong size on UWBP_BlockList_C");

}

