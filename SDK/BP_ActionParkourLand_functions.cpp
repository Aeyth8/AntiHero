#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionParkourLand

#include "Basic.hpp"

#include "BP_ActionParkourLand_classes.hpp"
#include "BP_ActionParkourLand_parameters.hpp"


namespace SDK
{

// Function BP_ActionParkourLand.BP_ActionParkourLand_C.ExecuteUbergraph_BP_ActionParkourLand
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionParkourLand_C::ExecuteUbergraph_BP_ActionParkourLand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionParkourLand_C", "ExecuteUbergraph_BP_ActionParkourLand");

	Params::BP_ActionParkourLand_C_ExecuteUbergraph_BP_ActionParkourLand Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionParkourLand.BP_ActionParkourLand_C.BP_ActionRemote
// (Event, Protected, BlueprintEvent)

void UBP_ActionParkourLand_C::BP_ActionRemote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionParkourLand_C", "BP_ActionRemote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionParkourLand.BP_ActionParkourLand_C.BP_OnBeginAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PrevAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionParkourLand_C::BP_OnBeginAction(const class FName& PrevAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionParkourLand_C", "BP_OnBeginAction");

	Params::BP_ActionParkourLand_C_BP_OnBeginAction Parms{};

	Parms.PrevAction = PrevAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionParkourLand.BP_ActionParkourLand_C.BP_ActionMain
// (Event, Protected, BlueprintEvent)

void UBP_ActionParkourLand_C::BP_ActionMain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionParkourLand_C", "BP_ActionMain");

	UObject::ProcessEvent(Func, nullptr);
}

}
