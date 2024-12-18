#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPB_PlusUltra

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BPB_PlusUltra.BPB_PlusUltra_C.ExecuteUbergraph_BPB_PlusUltra
// 0x0008 (0x0008 - 0x0000)
struct BPB_PlusUltra_C_ExecuteUbergraph_BPB_PlusUltra final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPB_PlusUltra_C_ExecuteUbergraph_BPB_PlusUltra) == 0x000004, "Wrong alignment on BPB_PlusUltra_C_ExecuteUbergraph_BPB_PlusUltra");
static_assert(sizeof(BPB_PlusUltra_C_ExecuteUbergraph_BPB_PlusUltra) == 0x000008, "Wrong size on BPB_PlusUltra_C_ExecuteUbergraph_BPB_PlusUltra");
static_assert(offsetof(BPB_PlusUltra_C_ExecuteUbergraph_BPB_PlusUltra, EntryPoint) == 0x000000, "Member 'BPB_PlusUltra_C_ExecuteUbergraph_BPB_PlusUltra::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPB_PlusUltra_C_ExecuteUbergraph_BPB_PlusUltra, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BPB_PlusUltra_C_ExecuteUbergraph_BPB_PlusUltra::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function BPB_PlusUltra.BPB_PlusUltra_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BPB_PlusUltra_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPB_PlusUltra_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BPB_PlusUltra_C_ReceiveEndPlay");
static_assert(sizeof(BPB_PlusUltra_C_ReceiveEndPlay) == 0x000001, "Wrong size on BPB_PlusUltra_C_ReceiveEndPlay");
static_assert(offsetof(BPB_PlusUltra_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BPB_PlusUltra_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

