#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Ability_Heal

#include "Basic.hpp"

#include "BP_CC_Ability_Heal_classes.hpp"
#include "BP_CC_Ability_Heal_parameters.hpp"


namespace SDK
{

// Function BP_CC_Ability_Heal.BP_CC_Ability_Heal_C.ExecuteUbergraph_BP_CC_Ability_Heal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Ability_Heal_C::ExecuteUbergraph_BP_CC_Ability_Heal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Ability_Heal_C", "ExecuteUbergraph_BP_CC_Ability_Heal");

	Params::BP_CC_Ability_Heal_C_ExecuteUbergraph_BP_CC_Ability_Heal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CC_Ability_Heal.BP_CC_Ability_Heal_C.BP_OnUpdateIntervalValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Ability_Heal_C::BP_OnUpdateIntervalValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Ability_Heal_C", "BP_OnUpdateIntervalValue");

	Params::BP_CC_Ability_Heal_C_BP_OnUpdateIntervalValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}
