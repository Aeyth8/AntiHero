#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDash

#include "Basic.hpp"

#include "BP_ActionDash_classes.hpp"
#include "BP_ActionDash_parameters.hpp"


namespace SDK
{

// Function BP_ActionDash.BP_ActionDash_C.ExecuteUbergraph_BP_ActionDash
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDash_C::ExecuteUbergraph_BP_ActionDash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "ExecuteUbergraph_BP_ActionDash");

	Params::BP_ActionDash_C_ExecuteUbergraph_BP_ActionDash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDash.BP_ActionDash_C.Ground Check
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionDash_C::Ground_Check()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "Ground Check");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDash.BP_ActionDash_C.BP_OnBeginAimingMode
// (Event, Protected, BlueprintEvent)

void UBP_ActionDash_C::BP_OnBeginAimingMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "BP_OnBeginAimingMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDash.BP_ActionDash_C.BP_OnLeaveGroundEvent
// (Event, Protected, BlueprintEvent)

void UBP_ActionDash_C::BP_OnLeaveGroundEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "BP_OnLeaveGroundEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDash.BP_ActionDash_C.BP_OnEndAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             NextAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDash_C::BP_OnEndAction(const class FName& NextAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "BP_OnEndAction");

	Params::BP_ActionDash_C_BP_OnEndAction Parms{};

	Parms.NextAction = NextAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDash.BP_ActionDash_C.BP_OnBeginAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PrevAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDash_C::BP_OnBeginAction(const class FName& PrevAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "BP_OnBeginAction");

	Params::BP_ActionDash_C_BP_OnBeginAction Parms{};

	Parms.PrevAction = PrevAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDash.BP_ActionDash_C.BP_ActionMain
// (Event, Protected, BlueprintEvent)

void UBP_ActionDash_C::BP_ActionMain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "BP_ActionMain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDash.BP_ActionDash_C.UpdateMoveDirection
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionDash_C::UpdateMoveDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "UpdateMoveDirection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDash.BP_ActionDash_C.UpdateCharacterDirection
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionDash_C::UpdateCharacterDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "UpdateCharacterDirection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDash.BP_ActionDash_C.UpdateSpeedRate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionDash_C::UpdateSpeedRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "UpdateSpeedRate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDash.BP_ActionDash_C.UpdatePastTime
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionDash_C::UpdatePastTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "UpdatePastTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDash.BP_ActionDash_C.GetDestMoveDirection
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDash_C::GetDestMoveDirection(struct FVector* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "GetDestMoveDirection");

	Params::BP_ActionDash_C_GetDestMoveDirection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function BP_ActionDash.BP_ActionDash_C.BP_IsEnableShiftAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             NextAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ActionDash_C::BP_IsEnableShiftAction(const class FName& NextAction) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDash_C", "BP_IsEnableShiftAction");

	Params::BP_ActionDash_C_BP_IsEnableShiftAction Parms{};

	Parms.NextAction = NextAction;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
