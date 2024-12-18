#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionOpenBox

#include "Basic.hpp"

#include "BP_ActionOpenBox_classes.hpp"
#include "BP_ActionOpenBox_parameters.hpp"


namespace SDK
{

// Function BP_ActionOpenBox.BP_ActionOpenBox_C.ExecuteUbergraph_BP_ActionOpenBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionOpenBox_C::ExecuteUbergraph_BP_ActionOpenBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "ExecuteUbergraph_BP_ActionOpenBox");

	Params::BP_ActionOpenBox_C_ExecuteUbergraph_BP_ActionOpenBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.CancelLoop
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionOpenBox_C::CancelLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "CancelLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.BP_ActionRemote
// (Event, Protected, BlueprintEvent)

void UBP_ActionOpenBox_C::BP_ActionRemote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "BP_ActionRemote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.BP_OnEndAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             NextAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionOpenBox_C::BP_OnEndAction(const class FName& NextAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "BP_OnEndAction");

	Params::BP_ActionOpenBox_C_BP_OnEndAction Parms{};

	Parms.NextAction = NextAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.BP_ActionMain
// (Event, Protected, BlueprintEvent)

void UBP_ActionOpenBox_C::BP_ActionMain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "BP_ActionMain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.BP_OnBeginAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PrevAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionOpenBox_C::BP_OnBeginAction(const class FName& PrevAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "BP_OnBeginAction");

	Params::BP_ActionOpenBox_C_BP_OnBeginAction Parms{};

	Parms.PrevAction = PrevAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PrevAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionOpenBox_C::Initialize(class FName PrevAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "Initialize");

	Params::BP_ActionOpenBox_C_Initialize Parms{};

	Parms.PrevAction = PrevAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.InitializeOpenStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionOpenBox_C::InitializeOpenStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "InitializeOpenStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.Turning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TurnSpan                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionOpenBox_C::Turning(float* TurnSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "Turning");

	Params::BP_ActionOpenBox_C_Turning Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TurnSpan != nullptr)
		*TurnSpan = Parms.TurnSpan;
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.Begin
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionOpenBox_C::Begin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "Begin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionOpenBox_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.Complete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LocallyContorol                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionOpenBox_C::Complete(bool LocallyContorol)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "Complete");

	Params::BP_ActionOpenBox_C_Complete Parms{};

	Parms.LocallyContorol = LocallyContorol;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.IsOpenBoxAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Flag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionOpenBox_C::IsOpenBoxAnimation(bool* Flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "IsOpenBoxAnimation");

	Params::BP_ActionOpenBox_C_IsOpenBoxAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Flag != nullptr)
		*Flag = Parms.Flag;
}


// Function BP_ActionOpenBox.BP_ActionOpenBox_C.BP_IsEnableShiftAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             NextAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ActionOpenBox_C::BP_IsEnableShiftAction(const class FName& NextAction) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionOpenBox_C", "BP_IsEnableShiftAction");

	Params::BP_ActionOpenBox_C_BP_IsEnableShiftAction Parms{};

	Parms.NextAction = NextAction;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

