#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ACLPlugin

#include "Basic.hpp"


namespace SDK
{

// Enum ACLPlugin.ACLCompressionLevel
// NumValues: 0x0006
enum class EACLCompressionLevel : uint8
{
	ACLCL_Lowest                             = 0,
	ACLCL_Low                                = 1,
	ACLCL_Medium                             = 2,
	ACLCL_High                               = 3,
	ACLCL_Highest                            = 4,
	ACLCL_MAX                                = 5,
};

// Enum ACLPlugin.ACLVectorFormat
// NumValues: 0x0003
enum class EACLVectorFormat : uint8
{
	ACLVF_Vector3_96                         = 0,
	ACLVF_Vector3_Variable                   = 1,
	ACLVF_Vector3_MAX                        = 2,
};

// Enum ACLPlugin.ACLRotationFormat
// NumValues: 0x0004
enum class EACLRotationFormat : uint8
{
	ACLRF_Quat_128                           = 0,
	ACLRF_QuatDropW_96                       = 1,
	ACLRF_QuatDropW_Variable                 = 2,
	ACLRF_MAX                                = 3,
};

}
