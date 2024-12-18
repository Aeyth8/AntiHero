#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageToDying

#include "Basic.hpp"

#include "BP_ActionDamageToDying_classes.hpp"
#include "BP_ActionDamageToDying_parameters.hpp"


namespace SDK
{

// Function BP_ActionDamageToDying.BP_ActionDamageToDying_C.ExecuteUbergraph_BP_ActionDamageToDying
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageToDying_C::ExecuteUbergraph_BP_ActionDamageToDying(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageToDying_C", "ExecuteUbergraph_BP_ActionDamageToDying");

	Params::BP_ActionDamageToDying_C_ExecuteUbergraph_BP_ActionDamageToDying Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDamageToDying.BP_ActionDamageToDying_C.BP_ActionRemote
// (Event, Protected, BlueprintEvent)

void UBP_ActionDamageToDying_C::BP_ActionRemote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageToDying_C", "BP_ActionRemote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDamageToDying.BP_ActionDamageToDying_C.BP_OnBeginAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PrevAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageToDying_C::BP_OnBeginAction(const class FName& PrevAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageToDying_C", "BP_OnBeginAction");

	Params::BP_ActionDamageToDying_C_BP_OnBeginAction Parms{};

	Parms.PrevAction = PrevAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDamageToDying.BP_ActionDamageToDying_C.BP_ActionMain
// (Event, Protected, BlueprintEvent)

void UBP_ActionDamageToDying_C::BP_ActionMain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageToDying_C", "BP_ActionMain");

	UObject::ProcessEvent(Func, nullptr);
}

}

