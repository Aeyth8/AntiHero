#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionDamageBound

#include "Basic.hpp"

#include "BP_ActionDamageBound_classes.hpp"
#include "BP_ActionDamageBound_parameters.hpp"


namespace SDK
{

// Function BP_ActionDamageBound.BP_ActionDamageBound_C.ExecuteUbergraph_BP_ActionDamageBound
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageBound_C::ExecuteUbergraph_BP_ActionDamageBound(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageBound_C", "ExecuteUbergraph_BP_ActionDamageBound");

	Params::BP_ActionDamageBound_C_ExecuteUbergraph_BP_ActionDamageBound Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDamageBound.BP_ActionDamageBound_C.BP_OnEndAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             NextAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageBound_C::BP_OnEndAction(const class FName& NextAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageBound_C", "BP_OnEndAction");

	Params::BP_ActionDamageBound_C_BP_OnEndAction Parms{};

	Parms.NextAction = NextAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDamageBound.BP_ActionDamageBound_C.BP_ActionRemote
// (Event, Protected, BlueprintEvent)

void UBP_ActionDamageBound_C::BP_ActionRemote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageBound_C", "BP_ActionRemote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDamageBound.BP_ActionDamageBound_C.BP_OnBeginAction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             PrevAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageBound_C::BP_OnBeginAction(const class FName& PrevAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageBound_C", "BP_OnBeginAction");

	Params::BP_ActionDamageBound_C_BP_OnBeginAction Parms{};

	Parms.PrevAction = PrevAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDamageBound.BP_ActionDamageBound_C.BP_ActionMain
// (Event, Protected, BlueprintEvent)

void UBP_ActionDamageBound_C::BP_ActionMain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageBound_C", "BP_ActionMain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDamageBound.BP_ActionDamageBound_C.DecideAnimationId
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAnimationId                            AnimationId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDamageBound_C::DecideAnimationId(EAnimationId* AnimationId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDamageBound_C", "DecideAnimationId");

	Params::BP_ActionDamageBound_C_DecideAnimationId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimationId != nullptr)
		*AnimationId = Parms.AnimationId;
}

}

