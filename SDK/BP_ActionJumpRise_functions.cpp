#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionJumpRise

#include "Basic.hpp"

#include "BP_ActionJumpRise_classes.hpp"
#include "BP_ActionJumpRise_parameters.hpp"


namespace SDK
{

// Function BP_ActionJumpRise.BP_ActionJumpRise_C.ExecuteUbergraph_BP_ActionJumpRise
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionJumpRise_C::ExecuteUbergraph_BP_ActionJumpRise(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionJumpRise_C", "ExecuteUbergraph_BP_ActionJumpRise");

	Params::BP_ActionJumpRise_C_ExecuteUbergraph_BP_ActionJumpRise Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionJumpRise.BP_ActionJumpRise_C.UpdateCo-Routine
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionJumpRise_C::UpdateCoMinusRoutine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionJumpRise_C", "UpdateCo-Routine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionJumpRise.BP_ActionJumpRise_C.BP_OnEndAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             NextAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionJumpRise_C::BP_OnEndAction(const class FName& NextAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionJumpRise_C", "BP_OnEndAction");

	Params::BP_ActionJumpRise_C_BP_OnEndAction Parms{};

	Parms.NextAction = NextAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionJumpRise.BP_ActionJumpRise_C.BP_OnBeginAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PrevAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionJumpRise_C::BP_OnBeginAction(const class FName& PrevAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionJumpRise_C", "BP_OnBeginAction");

	Params::BP_ActionJumpRise_C_BP_OnBeginAction Parms{};

	Parms.PrevAction = PrevAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionJumpRise.BP_ActionJumpRise_C.BP_ActionMain
// (Event, Protected, BlueprintEvent)

void UBP_ActionJumpRise_C::BP_ActionMain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionJumpRise_C", "BP_ActionMain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionJumpRise.BP_ActionJumpRise_C.GetSpeedH
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Initial_Speed                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Last_Speed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Accel_Span                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionJumpRise_C::GetSpeedH(float* Initial_Speed, float* Last_Speed, float* Accel_Span)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionJumpRise_C", "GetSpeedH");

	Params::BP_ActionJumpRise_C_GetSpeedH Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Initial_Speed != nullptr)
		*Initial_Speed = Parms.Initial_Speed;

	if (Last_Speed != nullptr)
		*Last_Speed = Parms.Last_Speed;

	if (Accel_Span != nullptr)
		*Accel_Span = Parms.Accel_Span;
}


// Function BP_ActionJumpRise.BP_ActionJumpRise_C.BP_IsEnableShiftAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             NextAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ActionJumpRise_C::BP_IsEnableShiftAction(const class FName& NextAction) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionJumpRise_C", "BP_IsEnableShiftAction");

	Params::BP_ActionJumpRise_C_BP_IsEnableShiftAction Parms{};

	Parms.NextAction = NextAction;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
