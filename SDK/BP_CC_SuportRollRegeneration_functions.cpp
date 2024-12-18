#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_SuportRollRegeneration

#include "Basic.hpp"

#include "BP_CC_SuportRollRegeneration_classes.hpp"
#include "BP_CC_SuportRollRegeneration_parameters.hpp"


namespace SDK
{

// Function BP_CC_SuportRollRegeneration.BP_CC_SuportRollRegeneration_C.ExecuteUbergraph_BP_CC_SuportRollRegeneration
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_SuportRollRegeneration_C::ExecuteUbergraph_BP_CC_SuportRollRegeneration(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_SuportRollRegeneration_C", "ExecuteUbergraph_BP_CC_SuportRollRegeneration");

	Params::BP_CC_SuportRollRegeneration_C_ExecuteUbergraph_BP_CC_SuportRollRegeneration Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CC_SuportRollRegeneration.BP_CC_SuportRollRegeneration_C.BP_OnUpdateIntervalValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_SuportRollRegeneration_C::BP_OnUpdateIntervalValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_SuportRollRegeneration_C", "BP_OnUpdateIntervalValue");

	Params::BP_CC_SuportRollRegeneration_C_BP_OnUpdateIntervalValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

