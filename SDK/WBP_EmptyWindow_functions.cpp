#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EmptyWindow

#include "Basic.hpp"

#include "WBP_EmptyWindow_classes.hpp"
#include "WBP_EmptyWindow_parameters.hpp"


namespace SDK
{

// Function WBP_EmptyWindow.WBP_EmptyWindow_C.ExecuteUbergraph_WBP_EmptyWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmptyWindow_C::ExecuteUbergraph_WBP_EmptyWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmptyWindow_C", "ExecuteUbergraph_WBP_EmptyWindow");

	Params::WBP_EmptyWindow_C_ExecuteUbergraph_WBP_EmptyWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EmptyWindow.WBP_EmptyWindow_C.OnPlayCancelSound
// (Event, Protected, BlueprintEvent)

void UWBP_EmptyWindow_C::OnPlayCancelSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmptyWindow_C", "OnPlayCancelSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EmptyWindow.WBP_EmptyWindow_C.PlayCloseSE
// (BlueprintCallable, BlueprintEvent)

void UWBP_EmptyWindow_C::PlayCloseSE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmptyWindow_C", "PlayCloseSE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EmptyWindow.WBP_EmptyWindow_C.PlayOpenSE
// (BlueprintCallable, BlueprintEvent)

void UWBP_EmptyWindow_C::PlayOpenSE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmptyWindow_C", "PlayOpenSE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EmptyWindow.WBP_EmptyWindow_C.SequenceEvent__ENTRYPOINTWBP_EmptyWindow_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EmptyWindow_C::SequenceEvent__ENTRYPOINTWBP_EmptyWindow_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmptyWindow_C", "SequenceEvent__ENTRYPOINTWBP_EmptyWindow_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EmptyWindow.WBP_EmptyWindow_C.SequenceEvent__ENTRYPOINTWBP_EmptyWindow_1
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EmptyWindow_C::SequenceEvent__ENTRYPOINTWBP_EmptyWindow_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmptyWindow_C", "SequenceEvent__ENTRYPOINTWBP_EmptyWindow_1");

	UObject::ProcessEvent(Func, nullptr);
}

}
