#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageShock

#include "Basic.hpp"

#include "BP_ActionDamageShock_classes.hpp"
#include "BP_ActionDamageShock_parameters.hpp"


namespace SDK
{

// Function BP_ActionDamageShock.BP_ActionDamageShock_C.ExecuteUbergraph_BP_ActionDamageShock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageShock_C::ExecuteUbergraph_BP_ActionDamageShock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageShock_C", "ExecuteUbergraph_BP_ActionDamageShock");

	Params::BP_ActionDamageShock_C_ExecuteUbergraph_BP_ActionDamageShock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDamageShock.BP_ActionDamageShock_C.BP_OnEndAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             NextAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageShock_C::BP_OnEndAction(const class FName& NextAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageShock_C", "BP_OnEndAction");

	Params::BP_ActionDamageShock_C_BP_OnEndAction Parms{};

	Parms.NextAction = NextAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDamageShock.BP_ActionDamageShock_C.BP_ActionRemote
// (Event, Protected, BlueprintEvent)

void UBP_ActionDamageShock_C::BP_ActionRemote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageShock_C", "BP_ActionRemote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDamageShock.BP_ActionDamageShock_C.BP_ActionMain
// (Event, Protected, BlueprintEvent)

void UBP_ActionDamageShock_C::BP_ActionMain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageShock_C", "BP_ActionMain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDamageShock.BP_ActionDamageShock_C.BP_OnBeginAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PrevAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageShock_C::BP_OnBeginAction(const class FName& PrevAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageShock_C", "BP_OnBeginAction");

	Params::BP_ActionDamageShock_C_BP_OnBeginAction Parms{};

	Parms.PrevAction = PrevAction;

	UObject::ProcessEvent(Func, &Parms);
}

}

