#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageInvolved

#include "Basic.hpp"

#include "BP_ActionDamageInvolved_classes.hpp"
#include "BP_ActionDamageInvolved_parameters.hpp"


namespace SDK
{

// Function BP_ActionDamageInvolved.BP_ActionDamageInvolved_C.ExecuteUbergraph_BP_ActionDamageInvolved
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageInvolved_C::ExecuteUbergraph_BP_ActionDamageInvolved(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageInvolved_C", "ExecuteUbergraph_BP_ActionDamageInvolved");

	Params::BP_ActionDamageInvolved_C_ExecuteUbergraph_BP_ActionDamageInvolved Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDamageInvolved.BP_ActionDamageInvolved_C.BP_OnBeginAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PrevAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageInvolved_C::BP_OnBeginAction(const class FName& PrevAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageInvolved_C", "BP_OnBeginAction");

	Params::BP_ActionDamageInvolved_C_BP_OnBeginAction Parms{};

	Parms.PrevAction = PrevAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDamageInvolved.BP_ActionDamageInvolved_C.BP_ActionRemote
// (Event, Protected, BlueprintEvent)

void UBP_ActionDamageInvolved_C::BP_ActionRemote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageInvolved_C", "BP_ActionRemote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDamageInvolved.BP_ActionDamageInvolved_C.BP_OnLandingEvent
// (Event, Protected, BlueprintEvent)

void UBP_ActionDamageInvolved_C::BP_OnLandingEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageInvolved_C", "BP_OnLandingEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDamageInvolved.BP_ActionDamageInvolved_C.BP_ActionMain
// (Event, Protected, BlueprintEvent)

void UBP_ActionDamageInvolved_C::BP_ActionMain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageInvolved_C", "BP_ActionMain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDamageInvolved.BP_ActionDamageInvolved_C.DecideAnimation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAnimationId                            AnimationId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageInvolved_C::DecideAnimation(EAnimationId* AnimationId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageInvolved_C", "DecideAnimation");

	Params::BP_ActionDamageInvolved_C_DecideAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimationId != nullptr)
		*AnimationId = Parms.AnimationId;
}

}

