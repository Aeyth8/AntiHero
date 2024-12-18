#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VoiceChatMenu

#include "Basic.hpp"

#include "WBP_VoiceChatMenu_classes.hpp"
#include "WBP_VoiceChatMenu_parameters.hpp"


namespace SDK
{

// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.ExecuteUbergraph_WBP_VoiceChatMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::ExecuteUbergraph_WBP_VoiceChatMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "ExecuteUbergraph_WBP_VoiceChatMenu");

	Params::WBP_VoiceChatMenu_C_ExecuteUbergraph_WBP_VoiceChatMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_SpinBoxPlayerVolume_K2Node_ComponentBoundEvent_14_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_SpinBoxPlayerVolume_K2Node_ComponentBoundEvent_14_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_SpinBoxPlayerVolume_K2Node_ComponentBoundEvent_14_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_SpinBoxPlayerVolume_K2Node_ComponentBoundEvent_14_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ButtonUnMute_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ButtonUnMute_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ButtonUnMute_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ListChatMembers_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ListChatMembers_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ListChatMembers_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_ListChatMembers_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ButtonUnBlock_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ButtonUnBlock_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ButtonUnBlock_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ButtonMute_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ButtonMute_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ButtonMute_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ButtonBlock_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ButtonBlock_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ButtonBlock_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.����n�K	
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerName_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// EVoiceChatPlayerStatus                  Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::_____n_K__(const class FString& PlayerName_0, EVoiceChatPlayerStatus Status, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "����n�K	");

	Params::WBP_VoiceChatMenu_C______n_K__ Parms{};

	Parms.PlayerName_0 = std::move(PlayerName_0);
	Parms.Status = Status;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_VoiceChatMenu_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ButtonLeave_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ButtonLeave_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ButtonLeave_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_SpinBoxSpeakerVolume_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_SpinBoxSpeakerVolume_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_SpinBoxSpeakerVolume_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_SpinBoxSpeakerVolume_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_SpinBoxMicVolume_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_SpinBoxMicVolume_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_SpinBoxMicVolume_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_SpinBoxMicVolume_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_EditableTextChanelName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_EditableTextChanelName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_EditableTextChanelName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_EditableTextChanelName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_CheckBoxMicMute_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_CheckBoxMicMute_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_CheckBoxMicMute_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_CheckBoxMicMute_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ButtonJoin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ButtonJoin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ButtonJoin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ComboBoxMode_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ComboBoxMode_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ComboBoxMode_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_ComboBoxMode_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ComboBoxMicDevice_K2Node_ComponentBoundEvent_48_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ComboBoxMicDevice_K2Node_ComponentBoundEvent_48_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ComboBoxMicDevice_K2Node_ComponentBoundEvent_48_OnSelectionChangedEvent__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_ComboBoxMicDevice_K2Node_ComponentBoundEvent_48_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_ComboBoxSpeakerDevice_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_ComboBoxSpeakerDevice_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_ComboBoxSpeakerDevice_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_ComboBoxSpeakerDevice_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__WBP_VoiceChatMenu_CheckBoxMute_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VoiceChatMenu_C::BndEvt__WBP_VoiceChatMenu_CheckBoxMute_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__WBP_VoiceChatMenu_CheckBoxMute_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_VoiceChatMenu_C_BndEvt__WBP_VoiceChatMenu_CheckBoxMute_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VoiceChatMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "Tick");

	Params::WBP_VoiceChatMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.BndEvt__ButtonStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_VoiceChatMenu_C::BndEvt__ButtonStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "BndEvt__ButtonStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.PadTableSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::PadTableSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "PadTableSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.PadClose
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::PadClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "PadClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.PadReDownload
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::PadReDownload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "PadReDownload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.PadReCopy
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::PadReCopy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "PadReCopy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.PadDeInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::PadDeInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "PadDeInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.PadTableListDown
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::PadTableListDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "PadTableListDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.PadTableListUp
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::PadTableListUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "PadTableListUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.PadInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::PadInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "PadInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.SetSelectedMode
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::SetSelectedMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "SetSelectedMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.UpdateMemberList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::UpdateMemberList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "UpdateMemberList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.Get Selected Member
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MemberName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_VoiceChatMenu_C::Get_Selected_Member(class FString* MemberName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "Get Selected Member");

	Params::WBP_VoiceChatMenu_C_Get_Selected_Member Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MemberName != nullptr)
		*MemberName = std::move(Parms.MemberName);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.Update Talking Member List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::Update_Talking_Member_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "Update Talking Member List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.Update Muted Member List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::Update_Muted_Member_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "Update Muted Member List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.Update Member Volume List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::Update_Member_Volume_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "Update Member Volume List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VoiceChatMenu.WBP_VoiceChatMenu_C.Clear All Lists
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VoiceChatMenu_C::Clear_All_Lists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VoiceChatMenu_C", "Clear All Lists");

	UObject::ProcessEvent(Func, nullptr);
}

}

