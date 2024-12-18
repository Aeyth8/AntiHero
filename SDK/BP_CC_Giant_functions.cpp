#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Giant

#include "Basic.hpp"

#include "BP_CC_Giant_classes.hpp"
#include "BP_CC_Giant_parameters.hpp"


namespace SDK
{

// Function BP_CC_Giant.BP_CC_Giant_C.ExecuteUbergraph_BP_CC_Giant
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Giant_C::ExecuteUbergraph_BP_CC_Giant(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Giant_C", "ExecuteUbergraph_BP_CC_Giant");

	Params::BP_CC_Giant_C_ExecuteUbergraph_BP_CC_Giant Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CC_Giant.BP_CC_Giant_C.BP_OnChangeConditionLevel
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   OldLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Giant_C::BP_OnChangeConditionLevel(int32 OldLevel, int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Giant_C", "BP_OnChangeConditionLevel");

	Params::BP_CC_Giant_C_BP_OnChangeConditionLevel Parms{};

	Parms.OldLevel = OldLevel;
	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CC_Giant.BP_CC_Giant_C.BP_OnEndCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Giant_C::BP_OnEndCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Giant_C", "BP_OnEndCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Giant.BP_CC_Giant_C.BP_OnBeginCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Giant_C::BP_OnBeginCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Giant_C", "BP_OnBeginCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Giant.BP_CC_Giant_C.BP_OnUpdateIntervalValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Giant_C::BP_OnUpdateIntervalValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Giant_C", "BP_OnUpdateIntervalValue");

	Params::BP_CC_Giant_C_BP_OnUpdateIntervalValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

