#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CableComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CableComponent.CableComponent.AddForceIndex
// 0x0014 (0x0014 - 0x0000)
struct CableComponent_AddForceIndex final
{
public:
	int32                                         Idx;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Force;                                             // 0x0004(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CableComponent_AddForceIndex) == 0x000004, "Wrong alignment on CableComponent_AddForceIndex");
static_assert(sizeof(CableComponent_AddForceIndex) == 0x000014, "Wrong size on CableComponent_AddForceIndex");
static_assert(offsetof(CableComponent_AddForceIndex, Idx) == 0x000000, "Member 'CableComponent_AddForceIndex::Idx' has a wrong offset!");
static_assert(offsetof(CableComponent_AddForceIndex, Force) == 0x000004, "Member 'CableComponent_AddForceIndex::Force' has a wrong offset!");
static_assert(offsetof(CableComponent_AddForceIndex, ReturnValue) == 0x000010, "Member 'CableComponent_AddForceIndex::ReturnValue' has a wrong offset!");

// Function CableComponent.CableComponent.ResetAnchor
// 0x0008 (0x0008 - 0x0000)
struct CableComponent_ResetAnchor final
{
public:
	int32                                         Idx;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CableComponent_ResetAnchor) == 0x000004, "Wrong alignment on CableComponent_ResetAnchor");
static_assert(sizeof(CableComponent_ResetAnchor) == 0x000008, "Wrong size on CableComponent_ResetAnchor");
static_assert(offsetof(CableComponent_ResetAnchor, Idx) == 0x000000, "Member 'CableComponent_ResetAnchor::Idx' has a wrong offset!");
static_assert(offsetof(CableComponent_ResetAnchor, ReturnValue) == 0x000004, "Member 'CableComponent_ResetAnchor::ReturnValue' has a wrong offset!");

// Function CableComponent.CableComponent.SetAnchor
// 0x0014 (0x0014 - 0x0000)
struct CableComponent_SetAnchor final
{
public:
	int32                                         Idx;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AnchorPoint;                                       // 0x0004(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CableComponent_SetAnchor) == 0x000004, "Wrong alignment on CableComponent_SetAnchor");
static_assert(sizeof(CableComponent_SetAnchor) == 0x000014, "Wrong size on CableComponent_SetAnchor");
static_assert(offsetof(CableComponent_SetAnchor, Idx) == 0x000000, "Member 'CableComponent_SetAnchor::Idx' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAnchor, AnchorPoint) == 0x000004, "Member 'CableComponent_SetAnchor::AnchorPoint' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAnchor, ReturnValue) == 0x000010, "Member 'CableComponent_SetAnchor::ReturnValue' has a wrong offset!");

// Function CableComponent.CableComponent.SetAttachEndTo
// 0x0018 (0x0018 - 0x0000)
struct CableComponent_SetAttachEndTo final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ComponentProperty;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_SetAttachEndTo) == 0x000008, "Wrong alignment on CableComponent_SetAttachEndTo");
static_assert(sizeof(CableComponent_SetAttachEndTo) == 0x000018, "Wrong size on CableComponent_SetAttachEndTo");
static_assert(offsetof(CableComponent_SetAttachEndTo, Actor) == 0x000000, "Member 'CableComponent_SetAttachEndTo::Actor' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAttachEndTo, ComponentProperty) == 0x000008, "Member 'CableComponent_SetAttachEndTo::ComponentProperty' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAttachEndTo, SocketName) == 0x000010, "Member 'CableComponent_SetAttachEndTo::SocketName' has a wrong offset!");

// Function CableComponent.CableComponent.SetAttachEndToComponent
// 0x0010 (0x0010 - 0x0000)
struct CableComponent_SetAttachEndToComponent final
{
public:
	class USceneComponent*                        Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_SetAttachEndToComponent) == 0x000008, "Wrong alignment on CableComponent_SetAttachEndToComponent");
static_assert(sizeof(CableComponent_SetAttachEndToComponent) == 0x000010, "Wrong size on CableComponent_SetAttachEndToComponent");
static_assert(offsetof(CableComponent_SetAttachEndToComponent, Component) == 0x000000, "Member 'CableComponent_SetAttachEndToComponent::Component' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAttachEndToComponent, SocketName) == 0x000008, "Member 'CableComponent_SetAttachEndToComponent::SocketName' has a wrong offset!");

// Function CableComponent.CableComponent.SetVerletSkipFlag
// 0x0002 (0x0002 - 0x0000)
struct CableComponent_SetVerletSkipFlag final
{
public:
	bool                                          Skip;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_SetVerletSkipFlag) == 0x000001, "Wrong alignment on CableComponent_SetVerletSkipFlag");
static_assert(sizeof(CableComponent_SetVerletSkipFlag) == 0x000002, "Wrong size on CableComponent_SetVerletSkipFlag");
static_assert(offsetof(CableComponent_SetVerletSkipFlag, Skip) == 0x000000, "Member 'CableComponent_SetVerletSkipFlag::Skip' has a wrong offset!");
static_assert(offsetof(CableComponent_SetVerletSkipFlag, ReturnValue) == 0x000001, "Member 'CableComponent_SetVerletSkipFlag::ReturnValue' has a wrong offset!");

// Function CableComponent.CableComponent.GetAttachedActor
// 0x0008 (0x0008 - 0x0000)
struct CableComponent_GetAttachedActor final
{
public:
	class AActor*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_GetAttachedActor) == 0x000008, "Wrong alignment on CableComponent_GetAttachedActor");
static_assert(sizeof(CableComponent_GetAttachedActor) == 0x000008, "Wrong size on CableComponent_GetAttachedActor");
static_assert(offsetof(CableComponent_GetAttachedActor, ReturnValue) == 0x000000, "Member 'CableComponent_GetAttachedActor::ReturnValue' has a wrong offset!");

// Function CableComponent.CableComponent.GetAttachedComponent
// 0x0008 (0x0008 - 0x0000)
struct CableComponent_GetAttachedComponent final
{
public:
	class USceneComponent*                        ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_GetAttachedComponent) == 0x000008, "Wrong alignment on CableComponent_GetAttachedComponent");
static_assert(sizeof(CableComponent_GetAttachedComponent) == 0x000008, "Wrong size on CableComponent_GetAttachedComponent");
static_assert(offsetof(CableComponent_GetAttachedComponent, ReturnValue) == 0x000000, "Member 'CableComponent_GetAttachedComponent::ReturnValue' has a wrong offset!");

// Function CableComponent.CableComponent.GetCableParticleLocation
// 0x0010 (0x0010 - 0x0000)
struct CableComponent_GetCableParticleLocation final
{
public:
	int32                                         Idx;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0004(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_GetCableParticleLocation) == 0x000004, "Wrong alignment on CableComponent_GetCableParticleLocation");
static_assert(sizeof(CableComponent_GetCableParticleLocation) == 0x000010, "Wrong size on CableComponent_GetCableParticleLocation");
static_assert(offsetof(CableComponent_GetCableParticleLocation, Idx) == 0x000000, "Member 'CableComponent_GetCableParticleLocation::Idx' has a wrong offset!");
static_assert(offsetof(CableComponent_GetCableParticleLocation, ReturnValue) == 0x000004, "Member 'CableComponent_GetCableParticleLocation::ReturnValue' has a wrong offset!");

// Function CableComponent.CableComponent.GetCableParticleLocations
// 0x0010 (0x0010 - 0x0000)
struct CableComponent_GetCableParticleLocations final
{
public:
	TArray<struct FVector>                        Locations;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_GetCableParticleLocations) == 0x000008, "Wrong alignment on CableComponent_GetCableParticleLocations");
static_assert(sizeof(CableComponent_GetCableParticleLocations) == 0x000010, "Wrong size on CableComponent_GetCableParticleLocations");
static_assert(offsetof(CableComponent_GetCableParticleLocations, Locations) == 0x000000, "Member 'CableComponent_GetCableParticleLocations::Locations' has a wrong offset!");

// Function CableComponent.CableComponent.GetCableParticleMoves
// 0x0010 (0x0010 - 0x0000)
struct CableComponent_GetCableParticleMoves final
{
public:
	TArray<struct FVector>                        Moves;                                             // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_GetCableParticleMoves) == 0x000008, "Wrong alignment on CableComponent_GetCableParticleMoves");
static_assert(sizeof(CableComponent_GetCableParticleMoves) == 0x000010, "Wrong size on CableComponent_GetCableParticleMoves");
static_assert(offsetof(CableComponent_GetCableParticleMoves, Moves) == 0x000000, "Member 'CableComponent_GetCableParticleMoves::Moves' has a wrong offset!");

}

