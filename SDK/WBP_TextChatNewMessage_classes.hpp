#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TextChatNewMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UIFramework_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TextChatNewMessage.WBP_TextChatNewMessage_C
// 0x00A0 (0x03F0 - 0x0350)
class UWBP_TextChatNewMessage_C final : public UWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       _newMessageOut;                                    // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       _newMessageEntry;                                  // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       _entry;                                            // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             _chatText;                                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             _displayName;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_80;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NameBG;                                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Panel;                                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           TeamUpNameBGColor;                                 // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TeamUpBGColor;                                     // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           GuildNameBGColor;                                  // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           GuildBGColor;                                      // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              AnimationPivot_Own;                                // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              AnimationPivot_Others;                             // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TextChatNewMessage(int32 EntryPoint);
	void OnAnimationStarted(const class UWidgetAnimation* Animation);
	void BP_OnItemSelectionChanged_1(bool bIsSelected);
	void FadeOutAnimation();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void SetUpColor();
	void PlayEntryAnimation(const class FString& PlayerId, bool OwnEntry);
	void Set_Message(class UTextChatListObject* NewObject);
	void PlayNewMessageAnimation();
	void WindowOut();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TextChatNewMessage_C">();
	}
	static class UWBP_TextChatNewMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TextChatNewMessage_C>();
	}
};
static_assert(alignof(UWBP_TextChatNewMessage_C) == 0x000008, "Wrong alignment on UWBP_TextChatNewMessage_C");
static_assert(sizeof(UWBP_TextChatNewMessage_C) == 0x0003F0, "Wrong size on UWBP_TextChatNewMessage_C");
static_assert(offsetof(UWBP_TextChatNewMessage_C, UberGraphFrame) == 0x000350, "Member 'UWBP_TextChatNewMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, _newMessageOut) == 0x000358, "Member 'UWBP_TextChatNewMessage_C::_newMessageOut' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, _newMessageEntry) == 0x000360, "Member 'UWBP_TextChatNewMessage_C::_newMessageEntry' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, _entry) == 0x000368, "Member 'UWBP_TextChatNewMessage_C::_entry' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, _chatText) == 0x000370, "Member 'UWBP_TextChatNewMessage_C::_chatText' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, _displayName) == 0x000378, "Member 'UWBP_TextChatNewMessage_C::_displayName' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, BG) == 0x000380, "Member 'UWBP_TextChatNewMessage_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, Image_80) == 0x000388, "Member 'UWBP_TextChatNewMessage_C::Image_80' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, NameBG) == 0x000390, "Member 'UWBP_TextChatNewMessage_C::NameBG' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, Panel) == 0x000398, "Member 'UWBP_TextChatNewMessage_C::Panel' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, TeamUpNameBGColor) == 0x0003A0, "Member 'UWBP_TextChatNewMessage_C::TeamUpNameBGColor' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, TeamUpBGColor) == 0x0003B0, "Member 'UWBP_TextChatNewMessage_C::TeamUpBGColor' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, GuildNameBGColor) == 0x0003C0, "Member 'UWBP_TextChatNewMessage_C::GuildNameBGColor' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, GuildBGColor) == 0x0003D0, "Member 'UWBP_TextChatNewMessage_C::GuildBGColor' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, AnimationPivot_Own) == 0x0003E0, "Member 'UWBP_TextChatNewMessage_C::AnimationPivot_Own' has a wrong offset!");
static_assert(offsetof(UWBP_TextChatNewMessage_C, AnimationPivot_Others) == 0x0003E8, "Member 'UWBP_TextChatNewMessage_C::AnimationPivot_Others' has a wrong offset!");

}
