#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Tunder

#include "Basic.hpp"

#include "BP_CC_Tunder_classes.hpp"
#include "BP_CC_Tunder_parameters.hpp"


namespace SDK
{

// Function BP_CC_Tunder.BP_CC_Tunder_C.ExecuteUbergraph_BP_CC_Tunder
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Tunder_C::ExecuteUbergraph_BP_CC_Tunder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Tunder_C", "ExecuteUbergraph_BP_CC_Tunder");

	Params::BP_CC_Tunder_C_ExecuteUbergraph_BP_CC_Tunder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CC_Tunder.BP_CC_Tunder_C.BP_OnHiddenCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Tunder_C::BP_OnHiddenCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Tunder_C", "BP_OnHiddenCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Tunder.BP_CC_Tunder_C.BP_OnVisibleCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Tunder_C::BP_OnVisibleCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Tunder_C", "BP_OnVisibleCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Tunder.BP_CC_Tunder_C.BP_OnEndCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Tunder_C::BP_OnEndCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Tunder_C", "BP_OnEndCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Tunder.BP_CC_Tunder_C.BP_OnBeginCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Tunder_C::BP_OnBeginCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Tunder_C", "BP_OnBeginCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Tunder.BP_CC_Tunder_C.BP_OnUpdateIntervalValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Tunder_C::BP_OnUpdateIntervalValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Tunder_C", "BP_OnUpdateIntervalValue");

	Params::BP_CC_Tunder_C_BP_OnUpdateIntervalValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

