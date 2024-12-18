#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DipInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_DipInterface.BPI_DipInterface_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_DipInterface_C final : public IInterface
{
public:
	void OnCloseDip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_DipInterface_C">();
	}
	static class IBPI_DipInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_DipInterface_C>();
	}
};
static_assert(alignof(IBPI_DipInterface_C) == 0x000008, "Wrong alignment on IBPI_DipInterface_C");
static_assert(sizeof(IBPI_DipInterface_C) == 0x000028, "Wrong size on IBPI_DipInterface_C");

}

