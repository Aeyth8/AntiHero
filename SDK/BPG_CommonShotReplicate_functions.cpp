#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPG_CommonShotReplicate

#include "Basic.hpp"

#include "BPG_CommonShotReplicate_classes.hpp"
#include "BPG_CommonShotReplicate_parameters.hpp"


namespace SDK
{

// Function BPG_CommonShotReplicate.BPG_CommonShotReplicate_C.ExecuteUbergraph_BPG_CommonShotReplicate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPG_CommonShotReplicate_C::ExecuteUbergraph_BPG_CommonShotReplicate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPG_CommonShotReplicate_C", "ExecuteUbergraph_BPG_CommonShotReplicate");

	Params::BPG_CommonShotReplicate_C_ExecuteUbergraph_BPG_CommonShotReplicate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPG_CommonShotReplicate.BPG_CommonShotReplicate_C.OnSpawnInitParams
// (Event, Public, BlueprintEvent)

void ABPG_CommonShotReplicate_C::OnSpawnInitParams()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPG_CommonShotReplicate_C", "OnSpawnInitParams");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPG_CommonShotReplicate.BPG_CommonShotReplicate_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABPG_CommonShotReplicate_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPG_CommonShotReplicate_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPG_CommonShotReplicate.BPG_CommonShotReplicate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPG_CommonShotReplicate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPG_CommonShotReplicate_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
