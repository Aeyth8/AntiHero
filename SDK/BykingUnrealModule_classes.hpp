#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BykingUnrealModule

#include "Basic.hpp"

#include "AntiCheatModule_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "AIModule_classes.hpp"
#include "BykingUnrealModule_structs.hpp"
#include "LevelSequence_classes.hpp"
#include "DevelopMenu_structs.hpp"
#include "AnimationBudgetAllocator_classes.hpp"
#include "MasterDataModule_structs.hpp"


namespace SDK
{

// Class BykingUnrealModule.BumPlayerController
// 0x0000 (0x0578 - 0x0578)
class ABumPlayerController : public AAntiCheatPlayerController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BumPlayerController">();
	}
	static class ABumPlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABumPlayerController>();
	}
};
static_assert(alignof(ABumPlayerController) == 0x000008, "Wrong alignment on ABumPlayerController");
static_assert(sizeof(ABumPlayerController) == 0x000578, "Wrong size on ABumPlayerController");

// Class BykingUnrealModule.EnhancedStaticMeshComponent
// 0x0000 (0x04E0 - 0x04E0)
class UEnhancedStaticMeshComponent : public UStaticMeshComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedStaticMeshComponent">();
	}
	static class UEnhancedStaticMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedStaticMeshComponent>();
	}
};
static_assert(alignof(UEnhancedStaticMeshComponent) == 0x000010, "Wrong alignment on UEnhancedStaticMeshComponent");
static_assert(sizeof(UEnhancedStaticMeshComponent) == 0x0004E0, "Wrong size on UEnhancedStaticMeshComponent");

// Class BykingUnrealModule.OutlineStaticMeshComponent
// 0x0010 (0x04F0 - 0x04E0)
class UOutlineStaticMeshComponent final : public UEnhancedStaticMeshComponent
{
public:
	TArray<class UMaterialInterface*>             OutlineMaterials;                                  // 0x04E0(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OutlineStaticMeshComponent">();
	}
	static class UOutlineStaticMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOutlineStaticMeshComponent>();
	}
};
static_assert(alignof(UOutlineStaticMeshComponent) == 0x000010, "Wrong alignment on UOutlineStaticMeshComponent");
static_assert(sizeof(UOutlineStaticMeshComponent) == 0x0004F0, "Wrong size on UOutlineStaticMeshComponent");
static_assert(offsetof(UOutlineStaticMeshComponent, OutlineMaterials) == 0x0004E0, "Member 'UOutlineStaticMeshComponent::OutlineMaterials' has a wrong offset!");

// Class BykingUnrealModule.ActionBase
// 0x0050 (0x0078 - 0x0028)
class UActionBase : public UObject
{
public:
	uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterBase*                         _ownerCharacter;                                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_58[0x20];                                      // 0x0058(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BP_ActionDelay(float Duration, const struct FLatentActionInfo& LatentInfo);
	void BP_ActionMain();
	void BP_ActionRemote();
	void BP_InitializeAction();
	void BP_LoadParams();
	void BP_OnAnimNotify(const class FName& Type, const class FName& Event);
	void BP_OnBeginAction(const class FName& PrevAction);
	void BP_OnEndAction(const class FName& NextAction);

	const class FName BP_GetActionName() const;
	float BP_GetDeltaSeconds() const;
	class ACharacterBase* BP_GetOwnerCharacter() const;
	int32 BP_GetSerialNo() const;
	bool BP_IsActive() const;
	bool BP_IsBootLayer() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActionBase">();
	}
	static class UActionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActionBase>();
	}
};
static_assert(alignof(UActionBase) == 0x000008, "Wrong alignment on UActionBase");
static_assert(sizeof(UActionBase) == 0x000078, "Wrong size on UActionBase");
static_assert(offsetof(UActionBase, _ownerCharacter) == 0x000050, "Member 'UActionBase::_ownerCharacter' has a wrong offset!");

// Class BykingUnrealModule.CharacterComponentBase
// 0x0008 (0x00B8 - 0x00B0)
class UCharacterComponentBase : public UActorComponent
{
public:
	class ACharacterBase*                         _ownerCharacterBase;                               // 0x00B0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharacterComponentBase">();
	}
	static class UCharacterComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterComponentBase>();
	}
};
static_assert(alignof(UCharacterComponentBase) == 0x000008, "Wrong alignment on UCharacterComponentBase");
static_assert(sizeof(UCharacterComponentBase) == 0x0000B8, "Wrong size on UCharacterComponentBase");
static_assert(offsetof(UCharacterComponentBase, _ownerCharacterBase) == 0x0000B0, "Member 'UCharacterComponentBase::_ownerCharacterBase' has a wrong offset!");

// Class BykingUnrealModule.ActionDriveComponent
// 0x0080 (0x0138 - 0x00B8)
class UActionDriveComponent final : public UCharacterComponentBase
{
public:
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActionLayerData>               _actionLayerDataList;                              // 0x00C0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TSet<struct FActionClassData>                 _actionClassDataList;                              // 0x00D0(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FActionReservePackData>         _actionReservePackDataList;                        // 0x0120(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_130[0x8];                                      // 0x0130(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActionDriveComponent">();
	}
	static class UActionDriveComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActionDriveComponent>();
	}
};
static_assert(alignof(UActionDriveComponent) == 0x000008, "Wrong alignment on UActionDriveComponent");
static_assert(sizeof(UActionDriveComponent) == 0x000138, "Wrong size on UActionDriveComponent");
static_assert(offsetof(UActionDriveComponent, _actionLayerDataList) == 0x0000C0, "Member 'UActionDriveComponent::_actionLayerDataList' has a wrong offset!");
static_assert(offsetof(UActionDriveComponent, _actionClassDataList) == 0x0000D0, "Member 'UActionDriveComponent::_actionClassDataList' has a wrong offset!");
static_assert(offsetof(UActionDriveComponent, _actionReservePackDataList) == 0x000120, "Member 'UActionDriveComponent::_actionReservePackDataList' has a wrong offset!");

// Class BykingUnrealModule.AN_CharacterBase
// 0x0008 (0x0040 - 0x0038)
class UAN_CharacterBase : public UAnimNotify
{
public:
	EAnimNotifyType                               _notifyType;                                       // 0x0038(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AN_CharacterBase">();
	}
	static class UAN_CharacterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_CharacterBase>();
	}
};
static_assert(alignof(UAN_CharacterBase) == 0x000008, "Wrong alignment on UAN_CharacterBase");
static_assert(sizeof(UAN_CharacterBase) == 0x000040, "Wrong size on UAN_CharacterBase");
static_assert(offsetof(UAN_CharacterBase, _notifyType) == 0x000038, "Member 'UAN_CharacterBase::_notifyType' has a wrong offset!");

// Class BykingUnrealModule.AN_ActionEvent
// 0x0010 (0x0050 - 0x0040)
class UAN_ActionEvent final : public UAN_CharacterBase
{
public:
	class FName                                   _typeName;                                         // 0x0040(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   _eventName;                                        // 0x0048(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AN_ActionEvent">();
	}
	static class UAN_ActionEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_ActionEvent>();
	}
};
static_assert(alignof(UAN_ActionEvent) == 0x000008, "Wrong alignment on UAN_ActionEvent");
static_assert(sizeof(UAN_ActionEvent) == 0x000050, "Wrong size on UAN_ActionEvent");
static_assert(offsetof(UAN_ActionEvent, _typeName) == 0x000040, "Member 'UAN_ActionEvent::_typeName' has a wrong offset!");
static_assert(offsetof(UAN_ActionEvent, _eventName) == 0x000048, "Member 'UAN_ActionEvent::_eventName' has a wrong offset!");

// Class BykingUnrealModule.ANS_CharacterBase
// 0x0008 (0x0038 - 0x0030)
class UANS_CharacterBase : public UAnimNotifyState
{
public:
	EAnimNotifyType                               _notifyType;                                       // 0x0030(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ANS_CharacterBase">();
	}
	static class UANS_CharacterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANS_CharacterBase>();
	}
};
static_assert(alignof(UANS_CharacterBase) == 0x000008, "Wrong alignment on UANS_CharacterBase");
static_assert(sizeof(UANS_CharacterBase) == 0x000038, "Wrong size on UANS_CharacterBase");
static_assert(offsetof(UANS_CharacterBase, _notifyType) == 0x000030, "Member 'UANS_CharacterBase::_notifyType' has a wrong offset!");

// Class BykingUnrealModule.BumAIController
// 0x0000 (0x0328 - 0x0328)
class ABumAIController : public AAIController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BumAIController">();
	}
	static class ABumAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABumAIController>();
	}
};
static_assert(alignof(ABumAIController) == 0x000008, "Wrong alignment on ABumAIController");
static_assert(sizeof(ABumAIController) == 0x000328, "Wrong size on ABumAIController");

// Class BykingUnrealModule.CapsuleComponentDummy
// 0x0000 (0x0470 - 0x0470)
class UCapsuleComponentDummy final : public UCapsuleComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CapsuleComponentDummy">();
	}
	static class UCapsuleComponentDummy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCapsuleComponentDummy>();
	}
};
static_assert(alignof(UCapsuleComponentDummy) == 0x000010, "Wrong alignment on UCapsuleComponentDummy");
static_assert(sizeof(UCapsuleComponentDummy) == 0x000470, "Wrong size on UCapsuleComponentDummy");

// Class BykingUnrealModule.CharacterDummy
// 0x0028 (0x02A8 - 0x0280)
class ACharacterDummy : public APawn
{
public:
	class UEnhancedSkeletalMeshComponent*         _mesh;                                             // 0x0280(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMovementComponentDummy*                _characterMovement;                                // 0x0288(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                      _capsuleComponent;                                 // 0x0290(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_298[0x10];                                     // 0x0298(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharacterDummy">();
	}
	static class ACharacterDummy* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACharacterDummy>();
	}
};
static_assert(alignof(ACharacterDummy) == 0x000008, "Wrong alignment on ACharacterDummy");
static_assert(sizeof(ACharacterDummy) == 0x0002A8, "Wrong size on ACharacterDummy");
static_assert(offsetof(ACharacterDummy, _mesh) == 0x000280, "Member 'ACharacterDummy::_mesh' has a wrong offset!");
static_assert(offsetof(ACharacterDummy, _characterMovement) == 0x000288, "Member 'ACharacterDummy::_characterMovement' has a wrong offset!");
static_assert(offsetof(ACharacterDummy, _capsuleComponent) == 0x000290, "Member 'ACharacterDummy::_capsuleComponent' has a wrong offset!");

// Class BykingUnrealModule.CharacterBase
// 0x00A8 (0x0350 - 0x02A8)
class ACharacterBase : public ACharacterDummy
{
public:
	uint8                                         Pad_2A8[0x18];                                     // 0x02A8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UDelayInitializer*                      _delayInitializer;                                 // 0x02C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2C8[0x8];                                      // 0x02C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterTickIgnorePause              _tickFunctionIgnorePause;                          // 0x02D0(0x0030)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_300[0x30];                                     // 0x0300(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	class UActionDriveComponent*                  _actionDriveComponent;                             // 0x0330(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_338[0x18];                                     // 0x0338(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool HasCharacterStarted() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharacterBase">();
	}
	static class ACharacterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACharacterBase>();
	}
};
static_assert(alignof(ACharacterBase) == 0x000008, "Wrong alignment on ACharacterBase");
static_assert(sizeof(ACharacterBase) == 0x000350, "Wrong size on ACharacterBase");
static_assert(offsetof(ACharacterBase, _delayInitializer) == 0x0002C0, "Member 'ACharacterBase::_delayInitializer' has a wrong offset!");
static_assert(offsetof(ACharacterBase, _tickFunctionIgnorePause) == 0x0002D0, "Member 'ACharacterBase::_tickFunctionIgnorePause' has a wrong offset!");
static_assert(offsetof(ACharacterBase, _actionDriveComponent) == 0x000330, "Member 'ACharacterBase::_actionDriveComponent' has a wrong offset!");

// Class BykingUnrealModule.CPP_SequenceActorBase
// 0x0048 (0x02F0 - 0x02A8)
class ACPP_SequenceActorBase final : public ALevelSequenceActor
{
public:
	class ULevelSequence*                         SequenceData;                                      // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACameraActor*                           SequenceCamera;                                    // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACameraActor*                           CreateCamera;                                      // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2C0[0x30];                                     // 0x02C0(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnCollbackStop();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CPP_SequenceActorBase">();
	}
	static class ACPP_SequenceActorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACPP_SequenceActorBase>();
	}
};
static_assert(alignof(ACPP_SequenceActorBase) == 0x000008, "Wrong alignment on ACPP_SequenceActorBase");
static_assert(sizeof(ACPP_SequenceActorBase) == 0x0002F0, "Wrong size on ACPP_SequenceActorBase");
static_assert(offsetof(ACPP_SequenceActorBase, SequenceData) == 0x0002A8, "Member 'ACPP_SequenceActorBase::SequenceData' has a wrong offset!");
static_assert(offsetof(ACPP_SequenceActorBase, SequenceCamera) == 0x0002B0, "Member 'ACPP_SequenceActorBase::SequenceCamera' has a wrong offset!");
static_assert(offsetof(ACPP_SequenceActorBase, CreateCamera) == 0x0002B8, "Member 'ACPP_SequenceActorBase::CreateCamera' has a wrong offset!");

// Class BykingUnrealModule.DatabaseWork
// 0x0010 (0x0040 - 0x0030)
class UDatabaseWork final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DatabaseWork">();
	}
	static class UDatabaseWork* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDatabaseWork>();
	}
};
static_assert(alignof(UDatabaseWork) == 0x000008, "Wrong alignment on UDatabaseWork");
static_assert(sizeof(UDatabaseWork) == 0x000040, "Wrong size on UDatabaseWork");

// Class BykingUnrealModule.DebugSaveData
// 0x0068 (0x0090 - 0x0028)
class UDebugSaveData final : public USaveGame
{
public:
	class FString                                 _saveSlotName;                                     // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         _userIndex;                                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FDevelopMenuItemData> _savedItems;                                       // 0x0040(0x0050)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DebugSaveData">();
	}
	static class UDebugSaveData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugSaveData>();
	}
};
static_assert(alignof(UDebugSaveData) == 0x000008, "Wrong alignment on UDebugSaveData");
static_assert(sizeof(UDebugSaveData) == 0x000090, "Wrong size on UDebugSaveData");
static_assert(offsetof(UDebugSaveData, _saveSlotName) == 0x000028, "Member 'UDebugSaveData::_saveSlotName' has a wrong offset!");
static_assert(offsetof(UDebugSaveData, _userIndex) == 0x000038, "Member 'UDebugSaveData::_userIndex' has a wrong offset!");
static_assert(offsetof(UDebugSaveData, _savedItems) == 0x000040, "Member 'UDebugSaveData::_savedItems' has a wrong offset!");

// Class BykingUnrealModule.DelayInitializer
// 0x0028 (0x00D8 - 0x00B0)
class UDelayInitializer final : public UActorComponent
{
public:
	uint8                                         Pad_B0[0x28];                                      // 0x00B0(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DelayInitializer">();
	}
	static class UDelayInitializer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDelayInitializer>();
	}
};
static_assert(alignof(UDelayInitializer) == 0x000008, "Wrong alignment on UDelayInitializer");
static_assert(sizeof(UDelayInitializer) == 0x0000D8, "Wrong size on UDelayInitializer");

// Class BykingUnrealModule.OutlineSkeletalMeshComponent
// 0x0020 (0x0F10 - 0x0EF0)
class UOutlineSkeletalMeshComponent : public USkeletalMeshComponentBudgeted
{
public:
	uint8                                         Pad_EF0[0x8];                                      // 0x0EF0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             OutlineMaterials;                                  // 0x0EF8(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_F08[0x8];                                      // 0x0F08(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetBpOutlineType(EMeshOutlineType Type);
	void SetIsEnableOutline(bool bEnable);
	void SetOutlineType(EMeshOutlineType Type);

	EMeshOutlineType GetBpOutlineType() const;
	EMeshOutlineType GetOutlineType() const;
	bool IsEnableOutline() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OutlineSkeletalMeshComponent">();
	}
	static class UOutlineSkeletalMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOutlineSkeletalMeshComponent>();
	}
};
static_assert(alignof(UOutlineSkeletalMeshComponent) == 0x000010, "Wrong alignment on UOutlineSkeletalMeshComponent");
static_assert(sizeof(UOutlineSkeletalMeshComponent) == 0x000F10, "Wrong size on UOutlineSkeletalMeshComponent");
static_assert(offsetof(UOutlineSkeletalMeshComponent, OutlineMaterials) == 0x000EF8, "Member 'UOutlineSkeletalMeshComponent::OutlineMaterials' has a wrong offset!");

// Class BykingUnrealModule.EnhancedSkeletalMeshComponent
// 0x0050 (0x0F60 - 0x0F10)
class UEnhancedSkeletalMeshComponent final : public UOutlineSkeletalMeshComponent
{
public:
	uint8                                         Pad_F10[0x40];                                     // 0x0F10(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTransform>                     _freezeBoneSpaceTransforms;                        // 0x0F50(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

public:
	void FreezeBone(class FName BoneName, bool bFreeze);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedSkeletalMeshComponent">();
	}
	static class UEnhancedSkeletalMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedSkeletalMeshComponent>();
	}
};
static_assert(alignof(UEnhancedSkeletalMeshComponent) == 0x000010, "Wrong alignment on UEnhancedSkeletalMeshComponent");
static_assert(sizeof(UEnhancedSkeletalMeshComponent) == 0x000F60, "Wrong size on UEnhancedSkeletalMeshComponent");
static_assert(offsetof(UEnhancedSkeletalMeshComponent, _freezeBoneSpaceTransforms) == 0x000F50, "Member 'UEnhancedSkeletalMeshComponent::_freezeBoneSpaceTransforms' has a wrong offset!");

// Class BykingUnrealModule.HttpChunkBPFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHttpChunkBPFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static TArray<struct FSoftObjectPath> GetBundleAssets(const struct FPrimaryAssetId& BundleScope, class FName BundleName);
	static class FString GetChunkLocation(int32 ChunkId);
	static float GetChunkProgress(int32 ChunkId, bool IsETA);
	static class FString GetInstallSpeed();
	static bool PrioritizeChunk(int32 ChunkId);
	static bool SetInstallSpeed(int32 Type);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HttpChunkBPFunctionLibrary">();
	}
	static class UHttpChunkBPFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHttpChunkBPFunctionLibrary>();
	}
};
static_assert(alignof(UHttpChunkBPFunctionLibrary) == 0x000008, "Wrong alignment on UHttpChunkBPFunctionLibrary");
static_assert(sizeof(UHttpChunkBPFunctionLibrary) == 0x000028, "Wrong size on UHttpChunkBPFunctionLibrary");

// Class BykingUnrealModule.MathStatics
// 0x0000 (0x0028 - 0x0028)
class UMathStatics final : public UBlueprintFunctionLibrary
{
public:
	static bool BP_CheckNearlyZeroVector(const struct FVector& InVector);
	static bool BP_CheckZeroVector(const struct FVector& InVector);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MathStatics">();
	}
	static class UMathStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMathStatics>();
	}
};
static_assert(alignof(UMathStatics) == 0x000008, "Wrong alignment on UMathStatics");
static_assert(sizeof(UMathStatics) == 0x000028, "Wrong size on UMathStatics");

// Class BykingUnrealModule.MovementComponentDummy
// 0x0000 (0x0138 - 0x0138)
class UMovementComponentDummy : public UPawnMovementComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovementComponentDummy">();
	}
	static class UMovementComponentDummy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovementComponentDummy>();
	}
};
static_assert(alignof(UMovementComponentDummy) == 0x000008, "Wrong alignment on UMovementComponentDummy");
static_assert(sizeof(UMovementComponentDummy) == 0x000138, "Wrong size on UMovementComponentDummy");

// Class BykingUnrealModule.MyBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMyBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void DisableGameLocalizationPreview();
	static void EnableGameLocalizationPreview();
	static bool IsEditor();
	static bool IsGameLocalizationPreviewEnabled();
	static void SetLocalizationPreviewLanguage(const class FString& InCulture);
	static void StringArraySort(TArray<class FString>& In, bool bReverse);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MyBlueprintFunctionLibrary">();
	}
	static class UMyBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UMyBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UMyBlueprintFunctionLibrary");
static_assert(sizeof(UMyBlueprintFunctionLibrary) == 0x000028, "Wrong size on UMyBlueprintFunctionLibrary");

// Class BykingUnrealModule.OutlineAssetUserData
// 0x0050 (0x0078 - 0x0028)
class UOutlineAssetUserData final : public UAssetUserData
{
public:
	TMap<EMeshOutlineType, class UMaterialInstance*> OutlineMaterials;                                  // 0x0028(0x0050)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OutlineAssetUserData">();
	}
	static class UOutlineAssetUserData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOutlineAssetUserData>();
	}
};
static_assert(alignof(UOutlineAssetUserData) == 0x000008, "Wrong alignment on UOutlineAssetUserData");
static_assert(sizeof(UOutlineAssetUserData) == 0x000078, "Wrong size on UOutlineAssetUserData");
static_assert(offsetof(UOutlineAssetUserData, OutlineMaterials) == 0x000028, "Member 'UOutlineAssetUserData::OutlineMaterials' has a wrong offset!");

// Class BykingUnrealModule.PlatformSubsystem
// 0x00F0 (0x0120 - 0x0030)
class UPlatformSubsystem final : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_             _changePlatformDelegate;                           // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0xE0];                                      // 0x0040(0x00E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static EPlatform GetPlatform();

	void ChangePlatformList();
	EPlatform GetPlatformInputController(bool OutLog);
	void PlatformChangeDelegate__DelegateSignature();
	void SetFlagFloatingGamePadTextInputCmd(const TArray<class FString>& Args);
	void SetFlagOverrideTextInputCmd(const TArray<class FString>& Args);
	void SetTextFieldHeightCmd(const TArray<class FString>& Args);
	void SetTextFieldWidthCmd(const TArray<class FString>& Args);
	void SetTextFieldXPositionCmd(const TArray<class FString>& Args);
	void SetTextFieldYPositionCmd(const TArray<class FString>& Args);
	bool ShowSteamGamePadTextInput(const struct FOnGamePadTextInputDismissed& OnEvent, const class FText& InDescriptionText, const class FText& InExistingText, int32 LimitTextNum);

	class FText GetSteamGamePadInputText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformSubsystem">();
	}
	static class UPlatformSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformSubsystem>();
	}
};
static_assert(alignof(UPlatformSubsystem) == 0x000008, "Wrong alignment on UPlatformSubsystem");
static_assert(sizeof(UPlatformSubsystem) == 0x000120, "Wrong size on UPlatformSubsystem");
static_assert(offsetof(UPlatformSubsystem, _changePlatformDelegate) == 0x000030, "Member 'UPlatformSubsystem::_changePlatformDelegate' has a wrong offset!");

// Class BykingUnrealModule.RayCastHelperSubsystem
// 0x0000 (0x0030 - 0x0030)
class URayCastHelperSubsystem final : public UWorldSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RayCastHelperSubsystem">();
	}
	static class URayCastHelperSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<URayCastHelperSubsystem>();
	}
};
static_assert(alignof(URayCastHelperSubsystem) == 0x000008, "Wrong alignment on URayCastHelperSubsystem");
static_assert(sizeof(URayCastHelperSubsystem) == 0x000030, "Wrong size on URayCastHelperSubsystem");

// Class BykingUnrealModule.SystemUtility
// 0x0000 (0x0030 - 0x0030)
class USystemUtility final : public UGameInstanceSubsystem
{
public:
	static class FString BytesArrayToString(const TArray<uint8>& Data);
	static EMdLocalization GetMdLocale();

	class FString AnsiToUTF8(const TArray<uint8>& Ansichar);
	class AActor* FindActorWorld(const class UWorld* World, const class FString& ActorName);
	bool IsDigitFString(const class FString& Str);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SystemUtility">();
	}
	static class USystemUtility* GetDefaultObj()
	{
		return GetDefaultObjImpl<USystemUtility>();
	}
};
static_assert(alignof(USystemUtility) == 0x000008, "Wrong alignment on USystemUtility");
static_assert(sizeof(USystemUtility) == 0x000030, "Wrong size on USystemUtility");

}
