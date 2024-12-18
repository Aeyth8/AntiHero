#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActionCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ActionCamera_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class ActionCamera.ActionCameraActor
// 0x0090 (0x02B0 - 0x0220)
#pragma pack(push, 0x1)
class alignas(0x10) AActionCameraActor : public AActor
{
public:
	class UActionCameraSubsystem*                 _actionCameraSubsystem;                            // 0x0220(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UANS_ActionCameraBegin*                 _param;                                            // 0x0228(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                 _myActor;                                          // 0x0230(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpringArmComponent*                    _springArm;                                        // 0x0238(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                       _camera;                                           // 0x0240(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_248[0x60];                                     // 0x0248(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActionCameraActor">();
	}
	static class AActionCameraActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AActionCameraActor>();
	}
};
#pragma pack(pop)
static_assert(alignof(AActionCameraActor) == 0x000010, "Wrong alignment on AActionCameraActor");
static_assert(sizeof(AActionCameraActor) == 0x0002B0, "Wrong size on AActionCameraActor");
static_assert(offsetof(AActionCameraActor, _actionCameraSubsystem) == 0x000220, "Member 'AActionCameraActor::_actionCameraSubsystem' has a wrong offset!");
static_assert(offsetof(AActionCameraActor, _param) == 0x000228, "Member 'AActionCameraActor::_param' has a wrong offset!");
static_assert(offsetof(AActionCameraActor, _myActor) == 0x000230, "Member 'AActionCameraActor::_myActor' has a wrong offset!");
static_assert(offsetof(AActionCameraActor, _springArm) == 0x000238, "Member 'AActionCameraActor::_springArm' has a wrong offset!");
static_assert(offsetof(AActionCameraActor, _camera) == 0x000240, "Member 'AActionCameraActor::_camera' has a wrong offset!");

// Class ActionCamera.ActionCameraSubsystem
// 0x0058 (0x0088 - 0x0030)
class UActionCameraSubsystem final : public ULocalPlayerSubsystem
{
public:
	uint8                                         Pad_30[0x18];                                      // 0x0030(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UANS_ActionCameraBegin*                 _currentNotify;                                    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActionCameraActor*                     _currentCamera;                                    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                 _extraMyActor;                                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActionCameraTimeTable*                 _timeTable;                                        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_68[0x10];                                      // 0x0068(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           _timeTableKeys;                                    // 0x0078(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	void BP_EndActionCamera(EActionCameraPriorityType PriorityType);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActionCameraSubsystem">();
	}
	static class UActionCameraSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActionCameraSubsystem>();
	}
};
static_assert(alignof(UActionCameraSubsystem) == 0x000008, "Wrong alignment on UActionCameraSubsystem");
static_assert(sizeof(UActionCameraSubsystem) == 0x000088, "Wrong size on UActionCameraSubsystem");
static_assert(offsetof(UActionCameraSubsystem, _currentNotify) == 0x000048, "Member 'UActionCameraSubsystem::_currentNotify' has a wrong offset!");
static_assert(offsetof(UActionCameraSubsystem, _currentCamera) == 0x000050, "Member 'UActionCameraSubsystem::_currentCamera' has a wrong offset!");
static_assert(offsetof(UActionCameraSubsystem, _extraMyActor) == 0x000058, "Member 'UActionCameraSubsystem::_extraMyActor' has a wrong offset!");
static_assert(offsetof(UActionCameraSubsystem, _timeTable) == 0x000060, "Member 'UActionCameraSubsystem::_timeTable' has a wrong offset!");
static_assert(offsetof(UActionCameraSubsystem, _timeTableKeys) == 0x000078, "Member 'UActionCameraSubsystem::_timeTableKeys' has a wrong offset!");

// Class ActionCamera.ActionCameraTimeActor
// 0x0000 (0x02B0 - 0x02B0)
class AActionCameraTimeActor : public AActionCameraActor
{
public:
	class AActor*                                 _targetActor;                                      // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActionCameraTimeActor">();
	}
	static class AActionCameraTimeActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AActionCameraTimeActor>();
	}
};
static_assert(alignof(AActionCameraTimeActor) == 0x000010, "Wrong alignment on AActionCameraTimeActor");
static_assert(sizeof(AActionCameraTimeActor) == 0x0002B0, "Wrong size on AActionCameraTimeActor");
static_assert(offsetof(AActionCameraTimeActor, _targetActor) == 0x0002A8, "Member 'AActionCameraTimeActor::_targetActor' has a wrong offset!");

// Class ActionCamera.ANS_ActionCameraBegin
// 0x05E0 (0x0610 - 0x0030)
class UANS_ActionCameraBegin : public UAnimNotifyState
{
public:
	EActionCameraPriorityType                     _priorityType;                                     // 0x0030(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                _location;                                         // 0x0034(0x000C)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               _rotation;                                         // 0x0040(0x000C)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                _locationSpeed;                                    // 0x004C(0x000C)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               _rotationSpeed;                                    // 0x0058(0x000C)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         _fov;                                              // 0x0064(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         _baseLocationMeToTargetRate;                       // 0x0068(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          _bBaseLocationLock;                                // 0x006C(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EActionCameraDirType                          _baseRotationType;                                 // 0x006D(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          _bBaseRotationLock;                                // 0x006E(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6F[0x1];                                       // 0x006F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _blendInTime;                                      // 0x0070(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EViewTargetBlendFunction                      _blendInType;                                      // 0x0074(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _blendInExp;                                       // 0x0078(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         _blendOutTime;                                     // 0x007C(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EViewTargetBlendFunction                      _blendOutType;                                     // 0x0080(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _blendOutExp;                                      // 0x0084(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                            _beginDistance;                                    // 0x0088(0x0010)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActionCameraActor>         _cameraActorClass;                                 // 0x0098(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          _bDoCollisionTest;                                 // 0x00A0(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A1[0xF];                                       // 0x00A1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   _postProcess;                                      // 0x00B0(0x0560)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ANS_ActionCameraBegin">();
	}
	static class UANS_ActionCameraBegin* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANS_ActionCameraBegin>();
	}
};
static_assert(alignof(UANS_ActionCameraBegin) == 0x000010, "Wrong alignment on UANS_ActionCameraBegin");
static_assert(sizeof(UANS_ActionCameraBegin) == 0x000610, "Wrong size on UANS_ActionCameraBegin");
static_assert(offsetof(UANS_ActionCameraBegin, _priorityType) == 0x000030, "Member 'UANS_ActionCameraBegin::_priorityType' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _location) == 0x000034, "Member 'UANS_ActionCameraBegin::_location' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _rotation) == 0x000040, "Member 'UANS_ActionCameraBegin::_rotation' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _locationSpeed) == 0x00004C, "Member 'UANS_ActionCameraBegin::_locationSpeed' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _rotationSpeed) == 0x000058, "Member 'UANS_ActionCameraBegin::_rotationSpeed' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _fov) == 0x000064, "Member 'UANS_ActionCameraBegin::_fov' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _baseLocationMeToTargetRate) == 0x000068, "Member 'UANS_ActionCameraBegin::_baseLocationMeToTargetRate' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _bBaseLocationLock) == 0x00006C, "Member 'UANS_ActionCameraBegin::_bBaseLocationLock' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _baseRotationType) == 0x00006D, "Member 'UANS_ActionCameraBegin::_baseRotationType' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _bBaseRotationLock) == 0x00006E, "Member 'UANS_ActionCameraBegin::_bBaseRotationLock' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _blendInTime) == 0x000070, "Member 'UANS_ActionCameraBegin::_blendInTime' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _blendInType) == 0x000074, "Member 'UANS_ActionCameraBegin::_blendInType' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _blendInExp) == 0x000078, "Member 'UANS_ActionCameraBegin::_blendInExp' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _blendOutTime) == 0x00007C, "Member 'UANS_ActionCameraBegin::_blendOutTime' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _blendOutType) == 0x000080, "Member 'UANS_ActionCameraBegin::_blendOutType' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _blendOutExp) == 0x000084, "Member 'UANS_ActionCameraBegin::_blendOutExp' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _beginDistance) == 0x000088, "Member 'UANS_ActionCameraBegin::_beginDistance' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _cameraActorClass) == 0x000098, "Member 'UANS_ActionCameraBegin::_cameraActorClass' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _bDoCollisionTest) == 0x0000A0, "Member 'UANS_ActionCameraBegin::_bDoCollisionTest' has a wrong offset!");
static_assert(offsetof(UANS_ActionCameraBegin, _postProcess) == 0x0000B0, "Member 'UANS_ActionCameraBegin::_postProcess' has a wrong offset!");

// Class ActionCamera.ActionCameraTimeRow
// 0x0010 (0x0620 - 0x0610)
class UActionCameraTimeRow final : public UANS_ActionCameraBegin
{
public:
	float                                         _time;                                             // 0x0610(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_614[0xC];                                      // 0x0614(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActionCameraTimeRow">();
	}
	static class UActionCameraTimeRow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActionCameraTimeRow>();
	}
};
static_assert(alignof(UActionCameraTimeRow) == 0x000010, "Wrong alignment on UActionCameraTimeRow");
static_assert(sizeof(UActionCameraTimeRow) == 0x000620, "Wrong size on UActionCameraTimeRow");
static_assert(offsetof(UActionCameraTimeRow, _time) == 0x000610, "Member 'UActionCameraTimeRow::_time' has a wrong offset!");

// Class ActionCamera.ActionCameraTimeTable
// 0x0050 (0x0080 - 0x0030)
class UActionCameraTimeTable final : public UDataAsset
{
public:
	TMap<class FName, class UActionCameraTimeRow*> _table;                                            // 0x0030(0x0050)(Edit, ExportObject, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActionCameraTimeTable">();
	}
	static class UActionCameraTimeTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActionCameraTimeTable>();
	}
};
static_assert(alignof(UActionCameraTimeTable) == 0x000008, "Wrong alignment on UActionCameraTimeTable");
static_assert(sizeof(UActionCameraTimeTable) == 0x000080, "Wrong size on UActionCameraTimeTable");
static_assert(offsetof(UActionCameraTimeTable, _table) == 0x000030, "Member 'UActionCameraTimeTable::_table' has a wrong offset!");

// Class ActionCamera.AN_ActionCameraEnd
// 0x0000 (0x0038 - 0x0038)
class UAN_ActionCameraEnd final : public UAnimNotify
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AN_ActionCameraEnd">();
	}
	static class UAN_ActionCameraEnd* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_ActionCameraEnd>();
	}
};
static_assert(alignof(UAN_ActionCameraEnd) == 0x000008, "Wrong alignment on UAN_ActionCameraEnd");
static_assert(sizeof(UAN_ActionCameraEnd) == 0x000038, "Wrong size on UAN_ActionCameraEnd");

// Class ActionCamera.ANS_ActionCameraContinue
// 0x0000 (0x0030 - 0x0030)
class UANS_ActionCameraContinue final : public UAnimNotifyState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ANS_ActionCameraContinue">();
	}
	static class UANS_ActionCameraContinue* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANS_ActionCameraContinue>();
	}
};
static_assert(alignof(UANS_ActionCameraContinue) == 0x000008, "Wrong alignment on UANS_ActionCameraContinue");
static_assert(sizeof(UANS_ActionCameraContinue) == 0x000030, "Wrong size on UANS_ActionCameraContinue");

}

