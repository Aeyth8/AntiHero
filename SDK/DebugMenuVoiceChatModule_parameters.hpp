#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DebugMenuVoiceChatModule

#include "Basic.hpp"

#include "VoiceChatModule_structs.hpp"


namespace SDK::Params
{

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetChannelMemberNames
// 0x0010 (0x0010 - 0x0000)
struct DebugMenuVoiceChat_GetChannelMemberNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetChannelMemberNames) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetChannelMemberNames");
static_assert(sizeof(DebugMenuVoiceChat_GetChannelMemberNames) == 0x000010, "Wrong size on DebugMenuVoiceChat_GetChannelMemberNames");
static_assert(offsetof(DebugMenuVoiceChat_GetChannelMemberNames, ReturnValue) == 0x000000, "Member 'DebugMenuVoiceChat_GetChannelMemberNames::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetInputDeviceIdByIndex
// 0x0018 (0x0018 - 0x0000)
struct DebugMenuVoiceChat_GetInputDeviceIdByIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetInputDeviceIdByIndex) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetInputDeviceIdByIndex");
static_assert(sizeof(DebugMenuVoiceChat_GetInputDeviceIdByIndex) == 0x000018, "Wrong size on DebugMenuVoiceChat_GetInputDeviceIdByIndex");
static_assert(offsetof(DebugMenuVoiceChat_GetInputDeviceIdByIndex, Index_0) == 0x000000, "Member 'DebugMenuVoiceChat_GetInputDeviceIdByIndex::Index_0' has a wrong offset!");
static_assert(offsetof(DebugMenuVoiceChat_GetInputDeviceIdByIndex, ReturnValue) == 0x000008, "Member 'DebugMenuVoiceChat_GetInputDeviceIdByIndex::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetInputDeviceNames
// 0x0010 (0x0010 - 0x0000)
struct DebugMenuVoiceChat_GetInputDeviceNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetInputDeviceNames) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetInputDeviceNames");
static_assert(sizeof(DebugMenuVoiceChat_GetInputDeviceNames) == 0x000010, "Wrong size on DebugMenuVoiceChat_GetInputDeviceNames");
static_assert(offsetof(DebugMenuVoiceChat_GetInputDeviceNames, ReturnValue) == 0x000000, "Member 'DebugMenuVoiceChat_GetInputDeviceNames::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetMemberVolumes
// 0x0010 (0x0010 - 0x0000)
struct DebugMenuVoiceChat_GetMemberVolumes final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetMemberVolumes) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetMemberVolumes");
static_assert(sizeof(DebugMenuVoiceChat_GetMemberVolumes) == 0x000010, "Wrong size on DebugMenuVoiceChat_GetMemberVolumes");
static_assert(offsetof(DebugMenuVoiceChat_GetMemberVolumes, ReturnValue) == 0x000000, "Member 'DebugMenuVoiceChat_GetMemberVolumes::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetMuteMemberNames
// 0x0010 (0x0010 - 0x0000)
struct DebugMenuVoiceChat_GetMuteMemberNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetMuteMemberNames) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetMuteMemberNames");
static_assert(sizeof(DebugMenuVoiceChat_GetMuteMemberNames) == 0x000010, "Wrong size on DebugMenuVoiceChat_GetMuteMemberNames");
static_assert(offsetof(DebugMenuVoiceChat_GetMuteMemberNames, ReturnValue) == 0x000000, "Member 'DebugMenuVoiceChat_GetMuteMemberNames::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetOutputDeviceIdByIndex
// 0x0018 (0x0018 - 0x0000)
struct DebugMenuVoiceChat_GetOutputDeviceIdByIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetOutputDeviceIdByIndex) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetOutputDeviceIdByIndex");
static_assert(sizeof(DebugMenuVoiceChat_GetOutputDeviceIdByIndex) == 0x000018, "Wrong size on DebugMenuVoiceChat_GetOutputDeviceIdByIndex");
static_assert(offsetof(DebugMenuVoiceChat_GetOutputDeviceIdByIndex, Index_0) == 0x000000, "Member 'DebugMenuVoiceChat_GetOutputDeviceIdByIndex::Index_0' has a wrong offset!");
static_assert(offsetof(DebugMenuVoiceChat_GetOutputDeviceIdByIndex, ReturnValue) == 0x000008, "Member 'DebugMenuVoiceChat_GetOutputDeviceIdByIndex::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetOutputDeviceNames
// 0x0010 (0x0010 - 0x0000)
struct DebugMenuVoiceChat_GetOutputDeviceNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetOutputDeviceNames) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetOutputDeviceNames");
static_assert(sizeof(DebugMenuVoiceChat_GetOutputDeviceNames) == 0x000010, "Wrong size on DebugMenuVoiceChat_GetOutputDeviceNames");
static_assert(offsetof(DebugMenuVoiceChat_GetOutputDeviceNames, ReturnValue) == 0x000000, "Member 'DebugMenuVoiceChat_GetOutputDeviceNames::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetPlayerName
// 0x0010 (0x0010 - 0x0000)
struct DebugMenuVoiceChat_GetPlayerName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetPlayerName) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetPlayerName");
static_assert(sizeof(DebugMenuVoiceChat_GetPlayerName) == 0x000010, "Wrong size on DebugMenuVoiceChat_GetPlayerName");
static_assert(offsetof(DebugMenuVoiceChat_GetPlayerName, ReturnValue) == 0x000000, "Member 'DebugMenuVoiceChat_GetPlayerName::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetStatusText
// 0x0010 (0x0010 - 0x0000)
struct DebugMenuVoiceChat_GetStatusText final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetStatusText) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetStatusText");
static_assert(sizeof(DebugMenuVoiceChat_GetStatusText) == 0x000010, "Wrong size on DebugMenuVoiceChat_GetStatusText");
static_assert(offsetof(DebugMenuVoiceChat_GetStatusText, ReturnValue) == 0x000000, "Member 'DebugMenuVoiceChat_GetStatusText::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.GetTalkingMemberNames
// 0x0010 (0x0010 - 0x0000)
struct DebugMenuVoiceChat_GetTalkingMemberNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_GetTalkingMemberNames) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_GetTalkingMemberNames");
static_assert(sizeof(DebugMenuVoiceChat_GetTalkingMemberNames) == 0x000010, "Wrong size on DebugMenuVoiceChat_GetTalkingMemberNames");
static_assert(offsetof(DebugMenuVoiceChat_GetTalkingMemberNames, ReturnValue) == 0x000000, "Member 'DebugMenuVoiceChat_GetTalkingMemberNames::ReturnValue' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.OnVoiceChatChangePlayerStatus
// 0x0018 (0x0018 - 0x0000)
struct DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus final
{
public:
	class FString                                 PlayerName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVoiceChatPlayerStatus                        Status;                                            // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Value;                                             // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus");
static_assert(sizeof(DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus) == 0x000018, "Wrong size on DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus");
static_assert(offsetof(DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus, PlayerName) == 0x000000, "Member 'DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus::PlayerName' has a wrong offset!");
static_assert(offsetof(DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus, Status) == 0x000010, "Member 'DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus::Status' has a wrong offset!");
static_assert(offsetof(DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus, Value) == 0x000014, "Member 'DebugMenuVoiceChat_OnVoiceChatChangePlayerStatus::Value' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.OnVoiceChatChangeStatus
// 0x0001 (0x0001 - 0x0000)
struct DebugMenuVoiceChat_OnVoiceChatChangeStatus final
{
public:
	EVoiceChatStatus                              Status;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_OnVoiceChatChangeStatus) == 0x000001, "Wrong alignment on DebugMenuVoiceChat_OnVoiceChatChangeStatus");
static_assert(sizeof(DebugMenuVoiceChat_OnVoiceChatChangeStatus) == 0x000001, "Wrong size on DebugMenuVoiceChat_OnVoiceChatChangeStatus");
static_assert(offsetof(DebugMenuVoiceChat_OnVoiceChatChangeStatus, Status) == 0x000000, "Member 'DebugMenuVoiceChat_OnVoiceChatChangeStatus::Status' has a wrong offset!");

// Function DebugMenuVoiceChatModule.DebugMenuVoiceChat.OnVoiceChatError
// 0x0018 (0x0018 - 0x0000)
struct DebugMenuVoiceChat_OnVoiceChatError final
{
public:
	EVoiceChatError                               Err;                                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Msg;                                               // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DebugMenuVoiceChat_OnVoiceChatError) == 0x000008, "Wrong alignment on DebugMenuVoiceChat_OnVoiceChatError");
static_assert(sizeof(DebugMenuVoiceChat_OnVoiceChatError) == 0x000018, "Wrong size on DebugMenuVoiceChat_OnVoiceChatError");
static_assert(offsetof(DebugMenuVoiceChat_OnVoiceChatError, Err) == 0x000000, "Member 'DebugMenuVoiceChat_OnVoiceChatError::Err' has a wrong offset!");
static_assert(offsetof(DebugMenuVoiceChat_OnVoiceChatError, Msg) == 0x000008, "Member 'DebugMenuVoiceChat_OnVoiceChatError::Msg' has a wrong offset!");

}
