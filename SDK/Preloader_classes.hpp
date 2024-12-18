#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Preloader

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class Preloader.PreloaderWork
// 0x0000 (0x0030 - 0x0030)
class UPreloaderWork final : public UGameInstanceSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PreloaderWork">();
	}
	static class UPreloaderWork* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPreloaderWork>();
	}
};
static_assert(alignof(UPreloaderWork) == 0x000008, "Wrong alignment on UPreloaderWork");
static_assert(sizeof(UPreloaderWork) == 0x000030, "Wrong size on UPreloaderWork");

}

