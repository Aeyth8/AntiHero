#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DevelopCamera

#include "Basic.hpp"

#include "DevelopCamera_classes.hpp"
#include "DevelopCamera_parameters.hpp"


namespace SDK
{

// Function DevelopCamera.DevelopCameraActor.IsPlayInEditor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADevelopCameraActor::IsPlayInEditor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DevelopCameraActor", "IsPlayInEditor");

	Params::DevelopCameraActor_IsPlayInEditor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
