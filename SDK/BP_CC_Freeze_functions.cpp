#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Freeze

#include "Basic.hpp"

#include "BP_CC_Freeze_classes.hpp"
#include "BP_CC_Freeze_parameters.hpp"


namespace SDK
{

// Function BP_CC_Freeze.BP_CC_Freeze_C.ExecuteUbergraph_BP_CC_Freeze
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Freeze_C::ExecuteUbergraph_BP_CC_Freeze(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Freeze_C", "ExecuteUbergraph_BP_CC_Freeze");

	Params::BP_CC_Freeze_C_ExecuteUbergraph_BP_CC_Freeze Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CC_Freeze.BP_CC_Freeze_C.BP_OnHiddenCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Freeze_C::BP_OnHiddenCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Freeze_C", "BP_OnHiddenCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Freeze.BP_CC_Freeze_C.BP_OnVisibleCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Freeze_C::BP_OnVisibleCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Freeze_C", "BP_OnVisibleCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Freeze.BP_CC_Freeze_C.BP_OnEndCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Freeze_C::BP_OnEndCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Freeze_C", "BP_OnEndCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Freeze.BP_CC_Freeze_C.BP_OnBeginCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Freeze_C::BP_OnBeginCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Freeze_C", "BP_OnBeginCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Freeze.BP_CC_Freeze_C.BP_OnUpdateIntervalValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Freeze_C::BP_OnUpdateIntervalValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Freeze_C", "BP_OnUpdateIntervalValue");

	Params::BP_CC_Freeze_C_BP_OnUpdateIntervalValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}
