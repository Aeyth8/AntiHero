#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CriWareMovieScenes

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CriWareMovieScenes.MovieSceneAtomSection.SetStartOffset
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneAtomSection_SetStartOffset final
{
public:
	struct FFrameNumber                           InStartOffset;                                     // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneAtomSection_SetStartOffset) == 0x000004, "Wrong alignment on MovieSceneAtomSection_SetStartOffset");
static_assert(sizeof(MovieSceneAtomSection_SetStartOffset) == 0x000004, "Wrong size on MovieSceneAtomSection_SetStartOffset");
static_assert(offsetof(MovieSceneAtomSection_SetStartOffset, InStartOffset) == 0x000000, "Member 'MovieSceneAtomSection_SetStartOffset::InStartOffset' has a wrong offset!");

// Function CriWareMovieScenes.MovieSceneAtomSection.GetStartOffset
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneAtomSection_GetStartOffset final
{
public:
	struct FFrameNumber                           ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneAtomSection_GetStartOffset) == 0x000004, "Wrong alignment on MovieSceneAtomSection_GetStartOffset");
static_assert(sizeof(MovieSceneAtomSection_GetStartOffset) == 0x000004, "Wrong size on MovieSceneAtomSection_GetStartOffset");
static_assert(offsetof(MovieSceneAtomSection_GetStartOffset, ReturnValue) == 0x000000, "Member 'MovieSceneAtomSection_GetStartOffset::ReturnValue' has a wrong offset!");

// Function CriWareMovieScenes.MovieSceneAtomSection.IsLooping
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneAtomSection_IsLooping final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneAtomSection_IsLooping) == 0x000001, "Wrong alignment on MovieSceneAtomSection_IsLooping");
static_assert(sizeof(MovieSceneAtomSection_IsLooping) == 0x000001, "Wrong size on MovieSceneAtomSection_IsLooping");
static_assert(offsetof(MovieSceneAtomSection_IsLooping, ReturnValue) == 0x000000, "Member 'MovieSceneAtomSection_IsLooping::ReturnValue' has a wrong offset!");

}
