#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title

#include "Basic.hpp"

#include "WBP_Title_classes.hpp"
#include "WBP_Title_parameters.hpp"


namespace SDK
{

// Function WBP_Title.WBP_Title_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Title_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_C", "DoCustomNavigation_0");

	Params::WBP_Title_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Title.WBP_Title_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Title_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_C", "OnPreviewKeyDown");

	Params::WBP_Title_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Title.WBP_Title_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Title_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_C", "OnMouseButtonDown_0");

	Params::WBP_Title_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Title.WBP_Title_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Title_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Title.WBP_Title_C.OnLevelHiddenTitleMenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_Title_C::OnLevelHiddenTitleMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_C", "OnLevelHiddenTitleMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Title.WBP_Title_C.OnTitleStepInput
// (Event, Public, BlueprintEvent)

void UWBP_Title_C::OnTitleStepInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_C", "OnTitleStepInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Title.WBP_Title_C.BndEvt__WBP_Title__menuButton_K2Node_ComponentBoundEvent_0_OnInputEventDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAppWidget*                       Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWidgetInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_C::BndEvt__WBP_Title__menuButton_K2Node_ComponentBoundEvent_0_OnInputEventDelegate__DelegateSignature(class UAppWidget* Widget, EWidgetInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_C", "BndEvt__WBP_Title__menuButton_K2Node_ComponentBoundEvent_0_OnInputEventDelegate__DelegateSignature");

	Params::WBP_Title_C_BndEvt__WBP_Title__menuButton_K2Node_ComponentBoundEvent_0_OnInputEventDelegate__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Title.WBP_Title_C.ExecuteUbergraph_WBP_Title
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_C::ExecuteUbergraph_WBP_Title(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Title_C", "ExecuteUbergraph_WBP_Title");

	Params::WBP_Title_C_ExecuteUbergraph_WBP_Title Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
