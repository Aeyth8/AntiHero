#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Ability_MoveSpeed

#include "Basic.hpp"

#include "BP_CC_Ability_MoveSpeed_classes.hpp"
#include "BP_CC_Ability_MoveSpeed_parameters.hpp"


namespace SDK
{

// Function BP_CC_Ability_MoveSpeed.BP_CC_Ability_MoveSpeed_C.ExecuteUbergraph_BP_CC_Ability_MoveSpeed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Ability_MoveSpeed_C::ExecuteUbergraph_BP_CC_Ability_MoveSpeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Ability_MoveSpeed_C", "ExecuteUbergraph_BP_CC_Ability_MoveSpeed");

	Params::BP_CC_Ability_MoveSpeed_C_ExecuteUbergraph_BP_CC_Ability_MoveSpeed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CC_Ability_MoveSpeed.BP_CC_Ability_MoveSpeed_C.BP_OnHiddenCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Ability_MoveSpeed_C::BP_OnHiddenCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Ability_MoveSpeed_C", "BP_OnHiddenCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Ability_MoveSpeed.BP_CC_Ability_MoveSpeed_C.BP_OnVisibleCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Ability_MoveSpeed_C::BP_OnVisibleCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Ability_MoveSpeed_C", "BP_OnVisibleCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Ability_MoveSpeed.BP_CC_Ability_MoveSpeed_C.BP_OnChangeConditionLevel
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   OldLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CC_Ability_MoveSpeed_C::BP_OnChangeConditionLevel(int32 OldLevel, int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Ability_MoveSpeed_C", "BP_OnChangeConditionLevel");

	Params::BP_CC_Ability_MoveSpeed_C_BP_OnChangeConditionLevel Parms{};

	Parms.OldLevel = OldLevel;
	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CC_Ability_MoveSpeed.BP_CC_Ability_MoveSpeed_C.BP_OnEndCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Ability_MoveSpeed_C::BP_OnEndCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Ability_MoveSpeed_C", "BP_OnEndCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CC_Ability_MoveSpeed.BP_CC_Ability_MoveSpeed_C.BP_OnBeginCondition
// (Event, Protected, BlueprintEvent)

void UBP_CC_Ability_MoveSpeed_C::BP_OnBeginCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Ability_MoveSpeed_C", "BP_OnBeginCondition");

	UObject::ProcessEvent(Func, nullptr);
}

}

