#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonModule

#include "Basic.hpp"


namespace SDK
{

// Enum CommonModule.ECharacterBodySize
// NumValues: 0x0007
enum class ECharacterBodySize : uint8
{
	UNDEF                                    = 0,
	S                                        = 1,
	M                                        = 2,
	L                                        = 3,
	XL                                       = 4,
	XXL                                      = 5,
	MAX                                      = 6,
};

// Enum CommonModule.ECharacterAssign
// NumValues: 0x0004
enum class ECharacterAssign : uint8
{
	UNDEF                                    = 0,
	HERO                                     = 1,
	VILLAIN                                  = 2,
	MAX                                      = 3,
};

// Enum CommonModule.ECharacterGender
// NumValues: 0x0004
enum class ECharacterGender : uint8
{
	UNDEF                                    = 0,
	Man                                      = 1,
	Woman                                    = 2,
	MAX                                      = 3,
};

// Enum CommonModule.ECostumeId
// NumValues: 0x0006
enum class ECostumeId : uint8
{
	Default                                  = 0,
	Extra                                    = 1,
	Underwear_00                             = 2,
	Jersey_00                                = 3,
	UniformSummer_00                         = 4,
	MAX                                      = 5,
};

// Enum CommonModule.ECharacterFlags
// NumValues: 0x000A
enum class ECharacterFlags : uint32
{
	NO_FLAGS                                 = 0,
	TRANSFORMING                             = 1,
	RESPAWNED_FOR_CHANGE                     = 2,
	NO_SELF_RECOVER                          = 4,
	DUPLICATING                              = 8,
	RESPAWNED_FOR_ALLY                       = 16,
	SPAWNED_FOR_TRAINING                     = 32,
	RESPAWNED_FOR_GAME                       = 64,
	SPAWNED_FOR_IMITATION                    = 128,
	ECharacterFlags_MAX                      = 129,
};

// Enum CommonModule.ECharacterId
// NumValues: 0x0031
enum class ECharacterId : uint8
{
	UNDEF                                    = 0,
	Ch000                                    = 1,
	Ch001                                    = 2,
	Ch002                                    = 3,
	Ch003                                    = 4,
	Ch004                                    = 5,
	Ch005                                    = 6,
	Ch006                                    = 7,
	Ch007                                    = 8,
	Ch008                                    = 9,
	Ch009                                    = 10,
	Ch010                                    = 11,
	Ch011                                    = 12,
	Ch012                                    = 13,
	Ch013                                    = 14,
	Ch015                                    = 15,
	Ch016                                    = 16,
	Ch017                                    = 17,
	Ch018                                    = 18,
	Ch019                                    = 19,
	Ch023                                    = 20,
	Ch024                                    = 21,
	Ch025                                    = 22,
	Ch026                                    = 23,
	Ch027                                    = 24,
	Ch028                                    = 25,
	Ch034                                    = 26,
	Ch037                                    = 27,
	Ch038                                    = 28,
	Ch043                                    = 29,
	Ch044                                    = 30,
	Ch045                                    = 31,
	Ch046                                    = 32,
	Ch093                                    = 33,
	Ch100                                    = 34,
	Ch101                                    = 35,
	Ch102                                    = 36,
	Ch103                                    = 37,
	Ch104                                    = 38,
	Ch105                                    = 39,
	Ch109                                    = 40,
	Ch113                                    = 41,
	Ch501                                    = 42,
	Ch502                                    = 43,
	Ch503                                    = 44,
	Ch512                                    = 45,
	Ch513                                    = 46,
	Ch999                                    = 47,
	MAX                                      = 48,
};

// Enum CommonModule.ERegion
// NumValues: 0x0005
enum class ERegion : uint8
{
	JP                                       = 0,
	US                                       = 1,
	EU                                       = 2,
	ASIA                                     = 3,
	ERegion_MAX                              = 4,
};

// Enum CommonModule.EGameScene
// NumValues: 0x000A
enum class EGameScene : uint8
{
	None                                     = 0,
	Title                                    = 1,
	MainMenu                                 = 2,
	Gasha                                    = 3,
	Shop                                     = 4,
	Customize                                = 5,
	SeasonPass                               = 6,
	Lobby                                    = 7,
	Battle                                   = 8,
	EGameScene_MAX                           = 9,
};

// Enum CommonModule.EStageId
// NumValues: 0x0005
enum class EStageId : uint8
{
	UNDEF                                    = 0,
	St01                                     = 1,
	St02                                     = 2,
	St03                                     = 3,
	MAX                                      = 4,
};

// ScriptStruct CommonModule.SceneData
// 0x0010 (0x0010 - 0x0000)
struct FSceneData final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                _param;                                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSceneData) == 0x000008, "Wrong alignment on FSceneData");
static_assert(sizeof(FSceneData) == 0x000010, "Wrong size on FSceneData");
static_assert(offsetof(FSceneData, _param) == 0x000008, "Member 'FSceneData::_param' has a wrong offset!");

}

