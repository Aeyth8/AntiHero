#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NetworkError

#include "Basic.hpp"

#include "WBP_NetworkError_classes.hpp"
#include "WBP_NetworkError_parameters.hpp"


namespace SDK
{

// Function WBP_NetworkError.WBP_NetworkError_C.ExecuteUbergraph_WBP_NetworkError
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NetworkError_C::ExecuteUbergraph_WBP_NetworkError(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NetworkError_C", "ExecuteUbergraph_WBP_NetworkError");

	Params::WBP_NetworkError_C_ExecuteUbergraph_WBP_NetworkError Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NetworkError.WBP_NetworkError_C.BndEvt__WBP_NetworkError__errorWindow_K2Node_ComponentBoundEvent_1_OnWindowInputEventDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAppWidget*                       Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWidgetInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LeftButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_NetworkError_C::BndEvt__WBP_NetworkError__errorWindow_K2Node_ComponentBoundEvent_1_OnWindowInputEventDelegate__DelegateSignature(class UAppWidget* Widget, EWidgetInputType InputType, bool LeftButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NetworkError_C", "BndEvt__WBP_NetworkError__errorWindow_K2Node_ComponentBoundEvent_1_OnWindowInputEventDelegate__DelegateSignature");

	Params::WBP_NetworkError_C_BndEvt__WBP_NetworkError__errorWindow_K2Node_ComponentBoundEvent_1_OnWindowInputEventDelegate__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.InputType = InputType;
	Parms.LeftButton = LeftButton;

	UObject::ProcessEvent(Func, &Parms);
}

}
