#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DevelopMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum DevelopMenu.EDevelopMenuHierarchy
// NumValues: 0x0005
enum class EDevelopMenuHierarchy : uint8
{
	MAIN_TAB                                 = 0,
	SUB_TAB                                  = 1,
	SCROLL_AREA                              = 2,
	MAX                                      = 3,
	SYSTEM_TAB                               = 4,
};

// Enum DevelopMenu.EDevelopMenuSubTabID
// NumValues: 0x001B
enum class EDevelopMenuSubTabID : uint8
{
	COMMON                                   = 0,
	CHARACTER                                = 1,
	DAMAGE                                   = 2,
	STAGE                                    = 3,
	NETWORK                                  = 4,
	SOUND                                    = 5,
	AI                                       = 6,
	HUD                                      = 7,
	DEMO                                     = 8,
	DEBUG                                    = 9,
	PROJECTILE                               = 10,
	MODEL                                    = 11,
	EFFECT                                   = 12,
	MISSION                                  = 13,
	ARCADE                                   = 14,
	STAT                                     = 15,
	EXPORT                                   = 16,
	INPUT                                    = 17,
	VOICECHAT                                = 18,
	GASHA                                    = 19,
	MOVEMENT                                 = 20,
	CAMERA                                   = 21,
	LOGINBONUS                               = 22,
	STORE                                    = 23,
	TEAMUP                                   = 24,
	WINDOW                                   = 25,
	MAX                                      = 26,
};

// Enum DevelopMenu.EDevelopMenuMainTabID
// NumValues: 0x0007
enum class EDevelopMenuMainTabID : uint8
{
	InGame                                   = 0,
	OutGame                                  = 1,
	System                                   = 2,
	DLC                                      = 3,
	Console                                  = 4,
	ImGui                                    = 5,
	MAX                                      = 6,
};

// Enum DevelopMenu.EStartingAndEndingPoints
// NumValues: 0x0003
enum class EStartingAndEndingPoints : uint8
{
	STARTIN_POINT                            = 0,
	ENDINGPOINT                              = 1,
	MAX                                      = 2,
};

// Enum DevelopMenu.EDevelopMenuDataTypeID
// NumValues: 0x0009
enum class EDevelopMenuDataTypeID : uint8
{
	BOOLEAN_SELECT                           = 0,
	INTEGER_SELECT                           = 1,
	FLOAT_SELECT                             = 2,
	LIST_SELECT                              = 3,
	LIST_REF_SELECT                          = 4,
	BUTTON_SELECT                            = 5,
	LIST_BUTTON_SELECT                       = 6,
	STRING_SELECT                            = 7,
	MAX                                      = 8,
};

// Enum DevelopMenu.EWidgetTreeItem
// NumValues: 0x0007
enum class EWidgetTreeItem : uint8
{
	ItemTextList                             = 0,
	ItemCheckBoxBorder                       = 1,
	ItemCheckButton                          = 2,
	FloatValue                               = 3,
	IntValue                                 = 4,
	StringValue                              = 5,
	MAX                                      = 6,
};

// ScriptStruct DevelopMenu.DevelopMenuItemData
// 0x0030 (0x0030 - 0x0000)
struct FDevelopMenuItemData final
{
public:
	float                                         FloatValue;                                        // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TextValue;                                         // 0x0008(0x0018)(NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x10];                                      // 0x0020(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDevelopMenuItemData) == 0x000008, "Wrong alignment on FDevelopMenuItemData");
static_assert(sizeof(FDevelopMenuItemData) == 0x000030, "Wrong size on FDevelopMenuItemData");
static_assert(offsetof(FDevelopMenuItemData, FloatValue) == 0x000000, "Member 'FDevelopMenuItemData::FloatValue' has a wrong offset!");
static_assert(offsetof(FDevelopMenuItemData, TextValue) == 0x000008, "Member 'FDevelopMenuItemData::TextValue' has a wrong offset!");

// ScriptStruct DevelopMenu.DevelopMenuItem
// 0x0018 (0x0018 - 0x0000)
struct FDevelopMenuItem final
{
public:
	class FString                                 Entry;                                             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDevelopMenuItem) == 0x000008, "Wrong alignment on FDevelopMenuItem");
static_assert(sizeof(FDevelopMenuItem) == 0x000018, "Wrong size on FDevelopMenuItem");
static_assert(offsetof(FDevelopMenuItem, Entry) == 0x000000, "Member 'FDevelopMenuItem::Entry' has a wrong offset!");
static_assert(offsetof(FDevelopMenuItem, Value) == 0x000010, "Member 'FDevelopMenuItem::Value' has a wrong offset!");

// ScriptStruct DevelopMenu.DevelopMenuItemListData
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FDevelopMenuItemListData final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDevelopMenuItemListData) == 0x000008, "Wrong alignment on FDevelopMenuItemListData");
static_assert(sizeof(FDevelopMenuItemListData) == 0x000020, "Wrong size on FDevelopMenuItemListData");

// ScriptStruct DevelopMenu.DevelopMenuDataTableRow
// 0x0060 (0x0068 - 0x0008)
struct FDevelopMenuDataTableRow final : public FTableRowBase
{
public:
	EDevelopMenuMainTabID                         _mainTabId;                                        // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDevelopMenuSubTabID                          _subTabId;                                         // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 _displayString;                                    // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 _explain;                                          // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDevelopMenuDataTypeID                        _dataType;                                         // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDevelopMenuItemListData>       _itemList;                                         // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 _maker;                                            // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          _isValidReplaySaveData;                            // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          _isValidLimitValue;                                // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _maxValue;                                         // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         _minValue;                                         // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         _defaultValue;                                     // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDevelopMenuDataTableRow) == 0x000008, "Wrong alignment on FDevelopMenuDataTableRow");
static_assert(sizeof(FDevelopMenuDataTableRow) == 0x000068, "Wrong size on FDevelopMenuDataTableRow");
static_assert(offsetof(FDevelopMenuDataTableRow, _mainTabId) == 0x000008, "Member 'FDevelopMenuDataTableRow::_mainTabId' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _subTabId) == 0x000009, "Member 'FDevelopMenuDataTableRow::_subTabId' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _displayString) == 0x000010, "Member 'FDevelopMenuDataTableRow::_displayString' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _explain) == 0x000020, "Member 'FDevelopMenuDataTableRow::_explain' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _dataType) == 0x000030, "Member 'FDevelopMenuDataTableRow::_dataType' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _itemList) == 0x000038, "Member 'FDevelopMenuDataTableRow::_itemList' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _maker) == 0x000048, "Member 'FDevelopMenuDataTableRow::_maker' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _isValidReplaySaveData) == 0x000058, "Member 'FDevelopMenuDataTableRow::_isValidReplaySaveData' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _isValidLimitValue) == 0x000059, "Member 'FDevelopMenuDataTableRow::_isValidLimitValue' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _maxValue) == 0x00005C, "Member 'FDevelopMenuDataTableRow::_maxValue' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _minValue) == 0x000060, "Member 'FDevelopMenuDataTableRow::_minValue' has a wrong offset!");
static_assert(offsetof(FDevelopMenuDataTableRow, _defaultValue) == 0x000064, "Member 'FDevelopMenuDataTableRow::_defaultValue' has a wrong offset!");

}
