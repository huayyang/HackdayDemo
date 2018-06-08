#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Wrld.Space.Positioners.PositionerApiInternal
struct PositionerApiInternal_t1500108320;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// Wrld.Resources.Terrain.Heights.TerrainHeightProvider
struct TerrainHeightProvider_t517848921;
// System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>
struct Dictionary_2_t2657171120;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// Wrld.Materials.MaterialRepository
struct MaterialRepository_t701520604;
// UnityEngine.Transform
struct Transform_t3600365921;
// Wrld.Space.UnityWorldSpaceCoordinateFrame
struct UnityWorldSpaceCoordinateFrame_t1382732960;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>
struct IDictionary_2_t3400306964;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// Wrld.Streaming.GameObjectStreamer
struct GameObjectStreamer_t3452608707;
// Wrld.Meshes.MeshUploader
struct MeshUploader_t3724330286;
// Wrld.Resources.IndoorMaps.IndoorMapMaterialService
struct IndoorMapMaterialService_t2313055152;
// Wrld.Resources.IndoorMaps.IndoorMapsApiInternal
struct IndoorMapsApiInternal_t406549031;
// Wrld.IndoorMapScene
struct IndoorMapScene_t1512761185;
// Wrld.Streaming.GameObjectRepository
struct GameObjectRepository_t3760691595;
// Wrld.Streaming.GameObjectFactory
struct GameObjectFactory_t2478326784;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Wrld.Space.Positioners.Positioner
struct Positioner_t1752774946;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef POSITIONERAPI_T2770033165_H
#define POSITIONERAPI_T2770033165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.Positioners.PositionerApi
struct  PositionerApi_t2770033165  : public RuntimeObject
{
public:
	// Wrld.Space.Positioners.PositionerApiInternal Wrld.Space.Positioners.PositionerApi::m_apiInternal
	PositionerApiInternal_t1500108320 * ___m_apiInternal_0;

public:
	inline static int32_t get_offset_of_m_apiInternal_0() { return static_cast<int32_t>(offsetof(PositionerApi_t2770033165, ___m_apiInternal_0)); }
	inline PositionerApiInternal_t1500108320 * get_m_apiInternal_0() const { return ___m_apiInternal_0; }
	inline PositionerApiInternal_t1500108320 ** get_address_of_m_apiInternal_0() { return &___m_apiInternal_0; }
	inline void set_m_apiInternal_0(PositionerApiInternal_t1500108320 * value)
	{
		___m_apiInternal_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_apiInternal_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONERAPI_T2770033165_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef NATIVEINTEROPHELPERS_T135492399_H
#define NATIVEINTEROPHELPERS_T135492399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Utilities.NativeInteropHelpers
struct  NativeInteropHelpers_t135492399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEINTEROPHELPERS_T135492399_H
#ifndef NATIVEINTEROPEXTENSIONS_T3308178798_H
#define NATIVEINTEROPEXTENSIONS_T3308178798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Utilities.NativeInteropExtensions
struct  NativeInteropExtensions_t3308178798  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEINTEROPEXTENSIONS_T3308178798_H
#ifndef FATALERRORHANDLER_T3709036114_H
#define FATALERRORHANDLER_T3709036114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.FatalErrorHandler
struct  FatalErrorHandler_t3709036114  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FATALERRORHANDLER_T3709036114_H
#ifndef ASSERTHANDLER_T1732545153_H
#define ASSERTHANDLER_T1732545153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.AssertHandler
struct  AssertHandler_t1732545153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTHANDLER_T1732545153_H
#ifndef STREAMINGUPDATER_T530401876_H
#define STREAMINGUPDATER_T530401876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.StreamingUpdater
struct  StreamingUpdater_t530401876  : public RuntimeObject
{
public:
	// System.Int32 Wrld.StreamingUpdater::m_screenWidth
	int32_t ___m_screenWidth_0;
	// System.Int32 Wrld.StreamingUpdater::m_screenHeight
	int32_t ___m_screenHeight_1;

public:
	inline static int32_t get_offset_of_m_screenWidth_0() { return static_cast<int32_t>(offsetof(StreamingUpdater_t530401876, ___m_screenWidth_0)); }
	inline int32_t get_m_screenWidth_0() const { return ___m_screenWidth_0; }
	inline int32_t* get_address_of_m_screenWidth_0() { return &___m_screenWidth_0; }
	inline void set_m_screenWidth_0(int32_t value)
	{
		___m_screenWidth_0 = value;
	}

	inline static int32_t get_offset_of_m_screenHeight_1() { return static_cast<int32_t>(offsetof(StreamingUpdater_t530401876, ___m_screenHeight_1)); }
	inline int32_t get_m_screenHeight_1() const { return ___m_screenHeight_1; }
	inline int32_t* get_address_of_m_screenHeight_1() { return &___m_screenHeight_1; }
	inline void set_m_screenHeight_1(int32_t value)
	{
		___m_screenHeight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGUPDATER_T530401876_H
#ifndef RESOURCECEILINGPROVIDER_T2554508737_H
#define RESOURCECEILINGPROVIDER_T2554508737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.ResourceCeilingProvider
struct  ResourceCeilingProvider_t2554508737  : public RuntimeObject
{
public:
	// Wrld.Resources.Terrain.Heights.TerrainHeightProvider Wrld.Streaming.ResourceCeilingProvider::m_terrainHeightProvider
	TerrainHeightProvider_t517848921 * ___m_terrainHeightProvider_0;

public:
	inline static int32_t get_offset_of_m_terrainHeightProvider_0() { return static_cast<int32_t>(offsetof(ResourceCeilingProvider_t2554508737, ___m_terrainHeightProvider_0)); }
	inline TerrainHeightProvider_t517848921 * get_m_terrainHeightProvider_0() const { return ___m_terrainHeightProvider_0; }
	inline TerrainHeightProvider_t517848921 ** get_address_of_m_terrainHeightProvider_0() { return &___m_terrainHeightProvider_0; }
	inline void set_m_terrainHeightProvider_0(TerrainHeightProvider_t517848921 * value)
	{
		___m_terrainHeightProvider_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_terrainHeightProvider_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCECEILINGPROVIDER_T2554508737_H
#ifndef GAMEOBJECTREPOSITORY_T3760691595_H
#define GAMEOBJECTREPOSITORY_T3760691595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.GameObjectRepository
struct  GameObjectRepository_t3760691595  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord> Wrld.Streaming.GameObjectRepository::m_gameObjectsById
	Dictionary_2_t2657171120 * ___m_gameObjectsById_0;
	// UnityEngine.GameObject Wrld.Streaming.GameObjectRepository::m_root
	GameObject_t1113636619 * ___m_root_1;
	// Wrld.Materials.MaterialRepository Wrld.Streaming.GameObjectRepository::m_materialRepository
	MaterialRepository_t701520604 * ___m_materialRepository_2;
	// System.Boolean Wrld.Streaming.GameObjectRepository::m_applyFlattening
	bool ___m_applyFlattening_3;

public:
	inline static int32_t get_offset_of_m_gameObjectsById_0() { return static_cast<int32_t>(offsetof(GameObjectRepository_t3760691595, ___m_gameObjectsById_0)); }
	inline Dictionary_2_t2657171120 * get_m_gameObjectsById_0() const { return ___m_gameObjectsById_0; }
	inline Dictionary_2_t2657171120 ** get_address_of_m_gameObjectsById_0() { return &___m_gameObjectsById_0; }
	inline void set_m_gameObjectsById_0(Dictionary_2_t2657171120 * value)
	{
		___m_gameObjectsById_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_gameObjectsById_0), value);
	}

	inline static int32_t get_offset_of_m_root_1() { return static_cast<int32_t>(offsetof(GameObjectRepository_t3760691595, ___m_root_1)); }
	inline GameObject_t1113636619 * get_m_root_1() const { return ___m_root_1; }
	inline GameObject_t1113636619 ** get_address_of_m_root_1() { return &___m_root_1; }
	inline void set_m_root_1(GameObject_t1113636619 * value)
	{
		___m_root_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_root_1), value);
	}

	inline static int32_t get_offset_of_m_materialRepository_2() { return static_cast<int32_t>(offsetof(GameObjectRepository_t3760691595, ___m_materialRepository_2)); }
	inline MaterialRepository_t701520604 * get_m_materialRepository_2() const { return ___m_materialRepository_2; }
	inline MaterialRepository_t701520604 ** get_address_of_m_materialRepository_2() { return &___m_materialRepository_2; }
	inline void set_m_materialRepository_2(MaterialRepository_t701520604 * value)
	{
		___m_materialRepository_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialRepository_2), value);
	}

	inline static int32_t get_offset_of_m_applyFlattening_3() { return static_cast<int32_t>(offsetof(GameObjectRepository_t3760691595, ___m_applyFlattening_3)); }
	inline bool get_m_applyFlattening_3() const { return ___m_applyFlattening_3; }
	inline bool* get_address_of_m_applyFlattening_3() { return &___m_applyFlattening_3; }
	inline void set_m_applyFlattening_3(bool value)
	{
		___m_applyFlattening_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTREPOSITORY_T3760691595_H
#ifndef GAMEOBJECTFACTORY_T2478326784_H
#define GAMEOBJECTFACTORY_T2478326784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.GameObjectFactory
struct  GameObjectFactory_t2478326784  : public RuntimeObject
{
public:
	// UnityEngine.Transform Wrld.Streaming.GameObjectFactory::m_parentTransform
	Transform_t3600365921 * ___m_parentTransform_0;

public:
	inline static int32_t get_offset_of_m_parentTransform_0() { return static_cast<int32_t>(offsetof(GameObjectFactory_t2478326784, ___m_parentTransform_0)); }
	inline Transform_t3600365921 * get_m_parentTransform_0() const { return ___m_parentTransform_0; }
	inline Transform_t3600365921 ** get_address_of_m_parentTransform_0() { return &___m_parentTransform_0; }
	inline void set_m_parentTransform_0(Transform_t3600365921 * value)
	{
		___m_parentTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_parentTransform_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTFACTORY_T2478326784_H
#ifndef APIKEYHELPERS_T4091981690_H
#define APIKEYHELPERS_T4091981690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Scripts.Utilities.APIKeyHelpers
struct  APIKeyHelpers_t4091981690  : public RuntimeObject
{
public:

public:
};

struct APIKeyHelpers_t4091981690_StaticFields
{
public:
	// System.String Wrld.Scripts.Utilities.APIKeyHelpers::ms_cachedApiKey
	String_t* ___ms_cachedApiKey_1;

public:
	inline static int32_t get_offset_of_ms_cachedApiKey_1() { return static_cast<int32_t>(offsetof(APIKeyHelpers_t4091981690_StaticFields, ___ms_cachedApiKey_1)); }
	inline String_t* get_ms_cachedApiKey_1() const { return ___ms_cachedApiKey_1; }
	inline String_t** get_address_of_ms_cachedApiKey_1() { return &___ms_cachedApiKey_1; }
	inline void set_ms_cachedApiKey_1(String_t* value)
	{
		___ms_cachedApiKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___ms_cachedApiKey_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APIKEYHELPERS_T4091981690_H
#ifndef SPACESAPI_T463405772_H
#define SPACESAPI_T463405772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.SpacesApi
struct  SpacesApi_t463405772  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACESAPI_T463405772_H
#ifndef UNITYWORLDSPACETRANSFORMUPDATESTRATEGY_T501792395_H
#define UNITYWORLDSPACETRANSFORMUPDATESTRATEGY_T501792395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.UnityWorldSpaceTransformUpdateStrategy
struct  UnityWorldSpaceTransformUpdateStrategy_t501792395  : public RuntimeObject
{
public:
	// Wrld.Space.UnityWorldSpaceCoordinateFrame Wrld.Space.UnityWorldSpaceTransformUpdateStrategy::m_frame
	UnityWorldSpaceCoordinateFrame_t1382732960 * ___m_frame_0;
	// System.Single Wrld.Space.UnityWorldSpaceTransformUpdateStrategy::m_flattenScale
	float ___m_flattenScale_1;

public:
	inline static int32_t get_offset_of_m_frame_0() { return static_cast<int32_t>(offsetof(UnityWorldSpaceTransformUpdateStrategy_t501792395, ___m_frame_0)); }
	inline UnityWorldSpaceCoordinateFrame_t1382732960 * get_m_frame_0() const { return ___m_frame_0; }
	inline UnityWorldSpaceCoordinateFrame_t1382732960 ** get_address_of_m_frame_0() { return &___m_frame_0; }
	inline void set_m_frame_0(UnityWorldSpaceCoordinateFrame_t1382732960 * value)
	{
		___m_frame_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_frame_0), value);
	}

	inline static int32_t get_offset_of_m_flattenScale_1() { return static_cast<int32_t>(offsetof(UnityWorldSpaceTransformUpdateStrategy_t501792395, ___m_flattenScale_1)); }
	inline float get_m_flattenScale_1() const { return ___m_flattenScale_1; }
	inline float* get_address_of_m_flattenScale_1() { return &___m_flattenScale_1; }
	inline void set_m_flattenScale_1(float value)
	{
		___m_flattenScale_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWORLDSPACETRANSFORMUPDATESTRATEGY_T501792395_H
#ifndef TRANSFORMHELPER_T3089836435_H
#define TRANSFORMHELPER_T3089836435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.TransformHelper
struct  TransformHelper_t3089836435  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMHELPER_T3089836435_H
#ifndef DOUBLEVECTOR3INTEROP_T1528464399_H
#define DOUBLEVECTOR3INTEROP_T1528464399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.Positioners.DoubleVector3Interop
struct  DoubleVector3Interop_t1528464399 
{
public:
	// System.Double Wrld.Space.Positioners.DoubleVector3Interop::x
	double ___x_0;
	// System.Double Wrld.Space.Positioners.DoubleVector3Interop::y
	double ___y_1;
	// System.Double Wrld.Space.Positioners.DoubleVector3Interop::z
	double ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(DoubleVector3Interop_t1528464399, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(DoubleVector3Interop_t1528464399, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(DoubleVector3Interop_t1528464399, ___z_2)); }
	inline double get_z_2() const { return ___z_2; }
	inline double* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(double value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEVECTOR3INTEROP_T1528464399_H
#ifndef U24ARRAYTYPEU3D208_T3449392908_H
#define U24ARRAYTYPEU3D208_T3449392908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=208
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D208_t3449392908 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D208_t3449392908__padding[208];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D208_T3449392908_H
#ifndef U24ARRAYTYPEU3D24_T2467506693_H
#define U24ARRAYTYPEU3D24_T2467506693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t2467506693 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t2467506693__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T2467506693_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef DOUBLEVECTOR3_T761704365_H
#define DOUBLEVECTOR3_T761704365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Common.Maths.DoubleVector3
struct  DoubleVector3_t761704365 
{
public:
	// System.Double Wrld.Common.Maths.DoubleVector3::x
	double ___x_3;
	// System.Double Wrld.Common.Maths.DoubleVector3::y
	double ___y_4;
	// System.Double Wrld.Common.Maths.DoubleVector3::z
	double ___z_5;

public:
	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(DoubleVector3_t761704365, ___x_3)); }
	inline double get_x_3() const { return ___x_3; }
	inline double* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(double value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(DoubleVector3_t761704365, ___y_4)); }
	inline double get_y_4() const { return ___y_4; }
	inline double* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(double value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(DoubleVector3_t761704365, ___z_5)); }
	inline double get_z_5() const { return ___z_5; }
	inline double* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(double value)
	{
		___z_5 = value;
	}
};

struct DoubleVector3_t761704365_StaticFields
{
public:
	// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.DoubleVector3::zero
	DoubleVector3_t761704365  ___zero_1;
	// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.DoubleVector3::one
	DoubleVector3_t761704365  ___one_2;

public:
	inline static int32_t get_offset_of_zero_1() { return static_cast<int32_t>(offsetof(DoubleVector3_t761704365_StaticFields, ___zero_1)); }
	inline DoubleVector3_t761704365  get_zero_1() const { return ___zero_1; }
	inline DoubleVector3_t761704365 * get_address_of_zero_1() { return &___zero_1; }
	inline void set_zero_1(DoubleVector3_t761704365  value)
	{
		___zero_1 = value;
	}

	inline static int32_t get_offset_of_one_2() { return static_cast<int32_t>(offsetof(DoubleVector3_t761704365_StaticFields, ___one_2)); }
	inline DoubleVector3_t761704365  get_one_2() const { return ___one_2; }
	inline DoubleVector3_t761704365 * get_address_of_one_2() { return &___one_2; }
	inline void set_one_2(DoubleVector3_t761704365  value)
	{
		___one_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEVECTOR3_T761704365_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef COLORINTEROP_T1726030811_H
#define COLORINTEROP_T1726030811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Interop.ColorInterop
struct  ColorInterop_t1726030811 
{
public:
	// System.Single Wrld.Interop.ColorInterop::R
	float ___R_0;
	// System.Single Wrld.Interop.ColorInterop::G
	float ___G_1;
	// System.Single Wrld.Interop.ColorInterop::B
	float ___B_2;
	// System.Single Wrld.Interop.ColorInterop::A
	float ___A_3;

public:
	inline static int32_t get_offset_of_R_0() { return static_cast<int32_t>(offsetof(ColorInterop_t1726030811, ___R_0)); }
	inline float get_R_0() const { return ___R_0; }
	inline float* get_address_of_R_0() { return &___R_0; }
	inline void set_R_0(float value)
	{
		___R_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(ColorInterop_t1726030811, ___G_1)); }
	inline float get_G_1() const { return ___G_1; }
	inline float* get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(float value)
	{
		___G_1 = value;
	}

	inline static int32_t get_offset_of_B_2() { return static_cast<int32_t>(offsetof(ColorInterop_t1726030811, ___B_2)); }
	inline float get_B_2() const { return ___B_2; }
	inline float* get_address_of_B_2() { return &___B_2; }
	inline void set_B_2(float value)
	{
		___B_2 = value;
	}

	inline static int32_t get_offset_of_A_3() { return static_cast<int32_t>(offsetof(ColorInterop_t1726030811, ___A_3)); }
	inline float get_A_3() const { return ___A_3; }
	inline float* get_address_of_A_3() { return &___A_3; }
	inline void set_A_3(float value)
	{
		___A_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORINTEROP_T1726030811_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INVALIDAPIKEYEXCEPTION_T175683051_H
#define INVALIDAPIKEYEXCEPTION_T175683051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Scripts.Utilities.InvalidApiKeyException
struct  InvalidApiKeyException_t175683051  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDAPIKEYEXCEPTION_T175683051_H
#ifndef COLLISIONSTREAMINGTYPE_T2118098865_H
#define COLLISIONSTREAMINGTYPE_T2118098865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.CollisionStreamingType
struct  CollisionStreamingType_t2118098865 
{
public:
	// System.Int32 Wrld.Streaming.CollisionStreamingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionStreamingType_t2118098865, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLISIONSTREAMINGTYPE_T2118098865_H
#ifndef ELEVATIONMODE_T3167074383_H
#define ELEVATIONMODE_T3167074383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.ElevationMode
struct  ElevationMode_t3167074383 
{
public:
	// System.Int32 Wrld.Space.ElevationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ElevationMode_t3167074383, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEVATIONMODE_T3167074383_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255369_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255369  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255369_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=208 <PrivateImplementationDetails>::$field-811EB71438479767E10832E824E7D58DCDC0FCB8
	U24ArrayTypeU3D208_t3449392908  ___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-DB17E883A647963A26D973378923EF4649801319
	U24ArrayTypeU3D24_t2467506693  ___U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1;

public:
	inline static int32_t get_offset_of_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255369_StaticFields, ___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0)); }
	inline U24ArrayTypeU3D208_t3449392908  get_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0() const { return ___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0; }
	inline U24ArrayTypeU3D208_t3449392908 * get_address_of_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0() { return &___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0; }
	inline void set_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0(U24ArrayTypeU3D208_t3449392908  value)
	{
		___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255369_StaticFields, ___U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1)); }
	inline U24ArrayTypeU3D24_t2467506693  get_U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1() const { return ___U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1; }
	inline U24ArrayTypeU3D24_t2467506693 * get_address_of_U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1() { return &___U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1; }
	inline void set_U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1(U24ArrayTypeU3D24_t2467506693  value)
	{
		___U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255369_H
#ifndef POSITIONERAPIINTERNAL_T1500108320_H
#define POSITIONERAPIINTERNAL_T1500108320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.Positioners.PositionerApiInternal
struct  PositionerApiInternal_t1500108320  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner> Wrld.Space.Positioners.PositionerApiInternal::m_positionerIdToObject
	RuntimeObject* ___m_positionerIdToObject_0;
	// System.IntPtr Wrld.Space.Positioners.PositionerApiInternal::m_handleToSelf
	intptr_t ___m_handleToSelf_1;

public:
	inline static int32_t get_offset_of_m_positionerIdToObject_0() { return static_cast<int32_t>(offsetof(PositionerApiInternal_t1500108320, ___m_positionerIdToObject_0)); }
	inline RuntimeObject* get_m_positionerIdToObject_0() const { return ___m_positionerIdToObject_0; }
	inline RuntimeObject** get_address_of_m_positionerIdToObject_0() { return &___m_positionerIdToObject_0; }
	inline void set_m_positionerIdToObject_0(RuntimeObject* value)
	{
		___m_positionerIdToObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_positionerIdToObject_0), value);
	}

	inline static int32_t get_offset_of_m_handleToSelf_1() { return static_cast<int32_t>(offsetof(PositionerApiInternal_t1500108320, ___m_handleToSelf_1)); }
	inline intptr_t get_m_handleToSelf_1() const { return ___m_handleToSelf_1; }
	inline intptr_t* get_address_of_m_handleToSelf_1() { return &___m_handleToSelf_1; }
	inline void set_m_handleToSelf_1(intptr_t value)
	{
		___m_handleToSelf_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONERAPIINTERNAL_T1500108320_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef GAMEOBJECTRECORD_T2871914821_H
#define GAMEOBJECTRECORD_T2871914821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.GameObjectRecord
struct  GameObjectRecord_t2871914821  : public RuntimeObject
{
public:
	// Wrld.Common.Maths.DoubleVector3 Wrld.Streaming.GameObjectRecord::<OriginECEF>k__BackingField
	DoubleVector3_t761704365  ___U3COriginECEFU3Ek__BackingField_0;
	// UnityEngine.Quaternion Wrld.Streaming.GameObjectRecord::<OrientationECEF>k__BackingField
	Quaternion_t2301928331  ___U3COrientationECEFU3Ek__BackingField_1;
	// UnityEngine.Vector3 Wrld.Streaming.GameObjectRecord::<TranslationOffsetECEF>k__BackingField
	Vector3_t3722313464  ___U3CTranslationOffsetECEFU3Ek__BackingField_2;
	// UnityEngine.GameObject Wrld.Streaming.GameObjectRecord::<RootGameObject>k__BackingField
	GameObject_t1113636619 * ___U3CRootGameObjectU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3COriginECEFU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GameObjectRecord_t2871914821, ___U3COriginECEFU3Ek__BackingField_0)); }
	inline DoubleVector3_t761704365  get_U3COriginECEFU3Ek__BackingField_0() const { return ___U3COriginECEFU3Ek__BackingField_0; }
	inline DoubleVector3_t761704365 * get_address_of_U3COriginECEFU3Ek__BackingField_0() { return &___U3COriginECEFU3Ek__BackingField_0; }
	inline void set_U3COriginECEFU3Ek__BackingField_0(DoubleVector3_t761704365  value)
	{
		___U3COriginECEFU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3COrientationECEFU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GameObjectRecord_t2871914821, ___U3COrientationECEFU3Ek__BackingField_1)); }
	inline Quaternion_t2301928331  get_U3COrientationECEFU3Ek__BackingField_1() const { return ___U3COrientationECEFU3Ek__BackingField_1; }
	inline Quaternion_t2301928331 * get_address_of_U3COrientationECEFU3Ek__BackingField_1() { return &___U3COrientationECEFU3Ek__BackingField_1; }
	inline void set_U3COrientationECEFU3Ek__BackingField_1(Quaternion_t2301928331  value)
	{
		___U3COrientationECEFU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTranslationOffsetECEFU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameObjectRecord_t2871914821, ___U3CTranslationOffsetECEFU3Ek__BackingField_2)); }
	inline Vector3_t3722313464  get_U3CTranslationOffsetECEFU3Ek__BackingField_2() const { return ___U3CTranslationOffsetECEFU3Ek__BackingField_2; }
	inline Vector3_t3722313464 * get_address_of_U3CTranslationOffsetECEFU3Ek__BackingField_2() { return &___U3CTranslationOffsetECEFU3Ek__BackingField_2; }
	inline void set_U3CTranslationOffsetECEFU3Ek__BackingField_2(Vector3_t3722313464  value)
	{
		___U3CTranslationOffsetECEFU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRootGameObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GameObjectRecord_t2871914821, ___U3CRootGameObjectU3Ek__BackingField_3)); }
	inline GameObject_t1113636619 * get_U3CRootGameObjectU3Ek__BackingField_3() const { return ___U3CRootGameObjectU3Ek__BackingField_3; }
	inline GameObject_t1113636619 ** get_address_of_U3CRootGameObjectU3Ek__BackingField_3() { return &___U3CRootGameObjectU3Ek__BackingField_3; }
	inline void set_U3CRootGameObjectU3Ek__BackingField_3(GameObject_t1113636619 * value)
	{
		___U3CRootGameObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRootGameObjectU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTRECORD_T2871914821_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef INDOORMAPSCENE_T1512761185_H
#define INDOORMAPSCENE_T1512761185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.IndoorMapScene
struct  IndoorMapScene_t1512761185  : public RuntimeObject
{
public:
	// Wrld.Streaming.GameObjectStreamer Wrld.IndoorMapScene::m_indoorMapStreamer
	GameObjectStreamer_t3452608707 * ___m_indoorMapStreamer_0;
	// Wrld.Meshes.MeshUploader Wrld.IndoorMapScene::m_meshUploader
	MeshUploader_t3724330286 * ___m_meshUploader_1;
	// Wrld.Resources.IndoorMaps.IndoorMapMaterialService Wrld.IndoorMapScene::m_materialRepository
	IndoorMapMaterialService_t2313055152 * ___m_materialRepository_2;
	// Wrld.Resources.IndoorMaps.IndoorMapsApiInternal Wrld.IndoorMapScene::m_indoorMapsApiInternal
	IndoorMapsApiInternal_t406549031 * ___m_indoorMapsApiInternal_3;
	// System.IntPtr Wrld.IndoorMapScene::m_handleToSelf
	intptr_t ___m_handleToSelf_4;

public:
	inline static int32_t get_offset_of_m_indoorMapStreamer_0() { return static_cast<int32_t>(offsetof(IndoorMapScene_t1512761185, ___m_indoorMapStreamer_0)); }
	inline GameObjectStreamer_t3452608707 * get_m_indoorMapStreamer_0() const { return ___m_indoorMapStreamer_0; }
	inline GameObjectStreamer_t3452608707 ** get_address_of_m_indoorMapStreamer_0() { return &___m_indoorMapStreamer_0; }
	inline void set_m_indoorMapStreamer_0(GameObjectStreamer_t3452608707 * value)
	{
		___m_indoorMapStreamer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_indoorMapStreamer_0), value);
	}

	inline static int32_t get_offset_of_m_meshUploader_1() { return static_cast<int32_t>(offsetof(IndoorMapScene_t1512761185, ___m_meshUploader_1)); }
	inline MeshUploader_t3724330286 * get_m_meshUploader_1() const { return ___m_meshUploader_1; }
	inline MeshUploader_t3724330286 ** get_address_of_m_meshUploader_1() { return &___m_meshUploader_1; }
	inline void set_m_meshUploader_1(MeshUploader_t3724330286 * value)
	{
		___m_meshUploader_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_meshUploader_1), value);
	}

	inline static int32_t get_offset_of_m_materialRepository_2() { return static_cast<int32_t>(offsetof(IndoorMapScene_t1512761185, ___m_materialRepository_2)); }
	inline IndoorMapMaterialService_t2313055152 * get_m_materialRepository_2() const { return ___m_materialRepository_2; }
	inline IndoorMapMaterialService_t2313055152 ** get_address_of_m_materialRepository_2() { return &___m_materialRepository_2; }
	inline void set_m_materialRepository_2(IndoorMapMaterialService_t2313055152 * value)
	{
		___m_materialRepository_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialRepository_2), value);
	}

	inline static int32_t get_offset_of_m_indoorMapsApiInternal_3() { return static_cast<int32_t>(offsetof(IndoorMapScene_t1512761185, ___m_indoorMapsApiInternal_3)); }
	inline IndoorMapsApiInternal_t406549031 * get_m_indoorMapsApiInternal_3() const { return ___m_indoorMapsApiInternal_3; }
	inline IndoorMapsApiInternal_t406549031 ** get_address_of_m_indoorMapsApiInternal_3() { return &___m_indoorMapsApiInternal_3; }
	inline void set_m_indoorMapsApiInternal_3(IndoorMapsApiInternal_t406549031 * value)
	{
		___m_indoorMapsApiInternal_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_indoorMapsApiInternal_3), value);
	}

	inline static int32_t get_offset_of_m_handleToSelf_4() { return static_cast<int32_t>(offsetof(IndoorMapScene_t1512761185, ___m_handleToSelf_4)); }
	inline intptr_t get_m_handleToSelf_4() const { return ___m_handleToSelf_4; }
	inline intptr_t* get_address_of_m_handleToSelf_4() { return &___m_handleToSelf_4; }
	inline void set_m_handleToSelf_4(intptr_t value)
	{
		___m_handleToSelf_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDOORMAPSCENE_T1512761185_H
#ifndef MAPGAMEOBJECTSCENE_T128928738_H
#define MAPGAMEOBJECTSCENE_T128928738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene
struct  MapGameObjectScene_t128928738  : public RuntimeObject
{
public:
	// Wrld.Streaming.GameObjectStreamer Wrld.MapGameObjectScene::m_terrainStreamer
	GameObjectStreamer_t3452608707 * ___m_terrainStreamer_0;
	// Wrld.Streaming.GameObjectStreamer Wrld.MapGameObjectScene::m_roadStreamer
	GameObjectStreamer_t3452608707 * ___m_roadStreamer_1;
	// Wrld.Streaming.GameObjectStreamer Wrld.MapGameObjectScene::m_buildingStreamer
	GameObjectStreamer_t3452608707 * ___m_buildingStreamer_2;
	// Wrld.Streaming.GameObjectStreamer Wrld.MapGameObjectScene::m_highlightStreamer
	GameObjectStreamer_t3452608707 * ___m_highlightStreamer_3;
	// Wrld.Streaming.GameObjectStreamer Wrld.MapGameObjectScene::m_indoorMapStreamer
	GameObjectStreamer_t3452608707 * ___m_indoorMapStreamer_4;
	// Wrld.Meshes.MeshUploader Wrld.MapGameObjectScene::m_meshUploader
	MeshUploader_t3724330286 * ___m_meshUploader_5;
	// Wrld.IndoorMapScene Wrld.MapGameObjectScene::m_indoorMapScene
	IndoorMapScene_t1512761185 * ___m_indoorMapScene_6;
	// System.Boolean Wrld.MapGameObjectScene::m_enabled
	bool ___m_enabled_7;
	// System.IntPtr Wrld.MapGameObjectScene::m_handleToSelf
	intptr_t ___m_handleToSelf_8;

public:
	inline static int32_t get_offset_of_m_terrainStreamer_0() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t128928738, ___m_terrainStreamer_0)); }
	inline GameObjectStreamer_t3452608707 * get_m_terrainStreamer_0() const { return ___m_terrainStreamer_0; }
	inline GameObjectStreamer_t3452608707 ** get_address_of_m_terrainStreamer_0() { return &___m_terrainStreamer_0; }
	inline void set_m_terrainStreamer_0(GameObjectStreamer_t3452608707 * value)
	{
		___m_terrainStreamer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_terrainStreamer_0), value);
	}

	inline static int32_t get_offset_of_m_roadStreamer_1() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t128928738, ___m_roadStreamer_1)); }
	inline GameObjectStreamer_t3452608707 * get_m_roadStreamer_1() const { return ___m_roadStreamer_1; }
	inline GameObjectStreamer_t3452608707 ** get_address_of_m_roadStreamer_1() { return &___m_roadStreamer_1; }
	inline void set_m_roadStreamer_1(GameObjectStreamer_t3452608707 * value)
	{
		___m_roadStreamer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_roadStreamer_1), value);
	}

	inline static int32_t get_offset_of_m_buildingStreamer_2() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t128928738, ___m_buildingStreamer_2)); }
	inline GameObjectStreamer_t3452608707 * get_m_buildingStreamer_2() const { return ___m_buildingStreamer_2; }
	inline GameObjectStreamer_t3452608707 ** get_address_of_m_buildingStreamer_2() { return &___m_buildingStreamer_2; }
	inline void set_m_buildingStreamer_2(GameObjectStreamer_t3452608707 * value)
	{
		___m_buildingStreamer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_buildingStreamer_2), value);
	}

	inline static int32_t get_offset_of_m_highlightStreamer_3() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t128928738, ___m_highlightStreamer_3)); }
	inline GameObjectStreamer_t3452608707 * get_m_highlightStreamer_3() const { return ___m_highlightStreamer_3; }
	inline GameObjectStreamer_t3452608707 ** get_address_of_m_highlightStreamer_3() { return &___m_highlightStreamer_3; }
	inline void set_m_highlightStreamer_3(GameObjectStreamer_t3452608707 * value)
	{
		___m_highlightStreamer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_highlightStreamer_3), value);
	}

	inline static int32_t get_offset_of_m_indoorMapStreamer_4() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t128928738, ___m_indoorMapStreamer_4)); }
	inline GameObjectStreamer_t3452608707 * get_m_indoorMapStreamer_4() const { return ___m_indoorMapStreamer_4; }
	inline GameObjectStreamer_t3452608707 ** get_address_of_m_indoorMapStreamer_4() { return &___m_indoorMapStreamer_4; }
	inline void set_m_indoorMapStreamer_4(GameObjectStreamer_t3452608707 * value)
	{
		___m_indoorMapStreamer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_indoorMapStreamer_4), value);
	}

	inline static int32_t get_offset_of_m_meshUploader_5() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t128928738, ___m_meshUploader_5)); }
	inline MeshUploader_t3724330286 * get_m_meshUploader_5() const { return ___m_meshUploader_5; }
	inline MeshUploader_t3724330286 ** get_address_of_m_meshUploader_5() { return &___m_meshUploader_5; }
	inline void set_m_meshUploader_5(MeshUploader_t3724330286 * value)
	{
		___m_meshUploader_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_meshUploader_5), value);
	}

	inline static int32_t get_offset_of_m_indoorMapScene_6() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t128928738, ___m_indoorMapScene_6)); }
	inline IndoorMapScene_t1512761185 * get_m_indoorMapScene_6() const { return ___m_indoorMapScene_6; }
	inline IndoorMapScene_t1512761185 ** get_address_of_m_indoorMapScene_6() { return &___m_indoorMapScene_6; }
	inline void set_m_indoorMapScene_6(IndoorMapScene_t1512761185 * value)
	{
		___m_indoorMapScene_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_indoorMapScene_6), value);
	}

	inline static int32_t get_offset_of_m_enabled_7() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t128928738, ___m_enabled_7)); }
	inline bool get_m_enabled_7() const { return ___m_enabled_7; }
	inline bool* get_address_of_m_enabled_7() { return &___m_enabled_7; }
	inline void set_m_enabled_7(bool value)
	{
		___m_enabled_7 = value;
	}

	inline static int32_t get_offset_of_m_handleToSelf_8() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t128928738, ___m_handleToSelf_8)); }
	inline intptr_t get_m_handleToSelf_8() const { return ___m_handleToSelf_8; }
	inline intptr_t* get_address_of_m_handleToSelf_8() { return &___m_handleToSelf_8; }
	inline void set_m_handleToSelf_8(intptr_t value)
	{
		___m_handleToSelf_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPGAMEOBJECTSCENE_T128928738_H
#ifndef UNITYWORLDSPACECOORDINATEFRAME_T1382732960_H
#define UNITYWORLDSPACECOORDINATEFRAME_T1382732960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.UnityWorldSpaceCoordinateFrame
struct  UnityWorldSpaceCoordinateFrame_t1382732960  : public RuntimeObject
{
public:
	// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::<ECEFToLocalRotation>k__BackingField
	Quaternion_t2301928331  ___U3CECEFToLocalRotationU3Ek__BackingField_0;
	// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::<LocalToECEFRotation>k__BackingField
	Quaternion_t2301928331  ___U3CLocalToECEFRotationU3Ek__BackingField_1;
	// Wrld.Common.Maths.DoubleVector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::m_originECEF
	DoubleVector3_t761704365  ___m_originECEF_2;
	// UnityEngine.Vector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::m_upECEF
	Vector3_t3722313464  ___m_upECEF_3;
	// UnityEngine.Vector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::m_rightECEF
	Vector3_t3722313464  ___m_rightECEF_4;
	// UnityEngine.Vector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::m_forwardECEF
	Vector3_t3722313464  ___m_forwardECEF_5;

public:
	inline static int32_t get_offset_of_U3CECEFToLocalRotationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1382732960, ___U3CECEFToLocalRotationU3Ek__BackingField_0)); }
	inline Quaternion_t2301928331  get_U3CECEFToLocalRotationU3Ek__BackingField_0() const { return ___U3CECEFToLocalRotationU3Ek__BackingField_0; }
	inline Quaternion_t2301928331 * get_address_of_U3CECEFToLocalRotationU3Ek__BackingField_0() { return &___U3CECEFToLocalRotationU3Ek__BackingField_0; }
	inline void set_U3CECEFToLocalRotationU3Ek__BackingField_0(Quaternion_t2301928331  value)
	{
		___U3CECEFToLocalRotationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLocalToECEFRotationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1382732960, ___U3CLocalToECEFRotationU3Ek__BackingField_1)); }
	inline Quaternion_t2301928331  get_U3CLocalToECEFRotationU3Ek__BackingField_1() const { return ___U3CLocalToECEFRotationU3Ek__BackingField_1; }
	inline Quaternion_t2301928331 * get_address_of_U3CLocalToECEFRotationU3Ek__BackingField_1() { return &___U3CLocalToECEFRotationU3Ek__BackingField_1; }
	inline void set_U3CLocalToECEFRotationU3Ek__BackingField_1(Quaternion_t2301928331  value)
	{
		___U3CLocalToECEFRotationU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_originECEF_2() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1382732960, ___m_originECEF_2)); }
	inline DoubleVector3_t761704365  get_m_originECEF_2() const { return ___m_originECEF_2; }
	inline DoubleVector3_t761704365 * get_address_of_m_originECEF_2() { return &___m_originECEF_2; }
	inline void set_m_originECEF_2(DoubleVector3_t761704365  value)
	{
		___m_originECEF_2 = value;
	}

	inline static int32_t get_offset_of_m_upECEF_3() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1382732960, ___m_upECEF_3)); }
	inline Vector3_t3722313464  get_m_upECEF_3() const { return ___m_upECEF_3; }
	inline Vector3_t3722313464 * get_address_of_m_upECEF_3() { return &___m_upECEF_3; }
	inline void set_m_upECEF_3(Vector3_t3722313464  value)
	{
		___m_upECEF_3 = value;
	}

	inline static int32_t get_offset_of_m_rightECEF_4() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1382732960, ___m_rightECEF_4)); }
	inline Vector3_t3722313464  get_m_rightECEF_4() const { return ___m_rightECEF_4; }
	inline Vector3_t3722313464 * get_address_of_m_rightECEF_4() { return &___m_rightECEF_4; }
	inline void set_m_rightECEF_4(Vector3_t3722313464  value)
	{
		___m_rightECEF_4 = value;
	}

	inline static int32_t get_offset_of_m_forwardECEF_5() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1382732960, ___m_forwardECEF_5)); }
	inline Vector3_t3722313464  get_m_forwardECEF_5() const { return ___m_forwardECEF_5; }
	inline Vector3_t3722313464 * get_address_of_m_forwardECEF_5() { return &___m_forwardECEF_5; }
	inline void set_m_forwardECEF_5(Vector3_t3722313464  value)
	{
		___m_forwardECEF_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWORLDSPACECOORDINATEFRAME_T1382732960_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef POSITIONEROPTIONS_T660970786_H
#define POSITIONEROPTIONS_T660970786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.Positioners.PositionerOptions
struct  PositionerOptions_t660970786  : public RuntimeObject
{
public:
	// System.Double Wrld.Space.Positioners.PositionerOptions::m_latitudeDegrees
	double ___m_latitudeDegrees_0;
	// System.Double Wrld.Space.Positioners.PositionerOptions::m_longitudeDegrees
	double ___m_longitudeDegrees_1;
	// System.Double Wrld.Space.Positioners.PositionerOptions::m_elevation
	double ___m_elevation_2;
	// Wrld.Space.ElevationMode Wrld.Space.Positioners.PositionerOptions::m_elevationMode
	int32_t ___m_elevationMode_3;
	// System.String Wrld.Space.Positioners.PositionerOptions::m_indoorMapId
	String_t* ___m_indoorMapId_4;
	// System.Int32 Wrld.Space.Positioners.PositionerOptions::m_indoorMapFloorId
	int32_t ___m_indoorMapFloorId_5;
	// System.Boolean Wrld.Space.Positioners.PositionerOptions::m_usingFloorId
	bool ___m_usingFloorId_6;

public:
	inline static int32_t get_offset_of_m_latitudeDegrees_0() { return static_cast<int32_t>(offsetof(PositionerOptions_t660970786, ___m_latitudeDegrees_0)); }
	inline double get_m_latitudeDegrees_0() const { return ___m_latitudeDegrees_0; }
	inline double* get_address_of_m_latitudeDegrees_0() { return &___m_latitudeDegrees_0; }
	inline void set_m_latitudeDegrees_0(double value)
	{
		___m_latitudeDegrees_0 = value;
	}

	inline static int32_t get_offset_of_m_longitudeDegrees_1() { return static_cast<int32_t>(offsetof(PositionerOptions_t660970786, ___m_longitudeDegrees_1)); }
	inline double get_m_longitudeDegrees_1() const { return ___m_longitudeDegrees_1; }
	inline double* get_address_of_m_longitudeDegrees_1() { return &___m_longitudeDegrees_1; }
	inline void set_m_longitudeDegrees_1(double value)
	{
		___m_longitudeDegrees_1 = value;
	}

	inline static int32_t get_offset_of_m_elevation_2() { return static_cast<int32_t>(offsetof(PositionerOptions_t660970786, ___m_elevation_2)); }
	inline double get_m_elevation_2() const { return ___m_elevation_2; }
	inline double* get_address_of_m_elevation_2() { return &___m_elevation_2; }
	inline void set_m_elevation_2(double value)
	{
		___m_elevation_2 = value;
	}

	inline static int32_t get_offset_of_m_elevationMode_3() { return static_cast<int32_t>(offsetof(PositionerOptions_t660970786, ___m_elevationMode_3)); }
	inline int32_t get_m_elevationMode_3() const { return ___m_elevationMode_3; }
	inline int32_t* get_address_of_m_elevationMode_3() { return &___m_elevationMode_3; }
	inline void set_m_elevationMode_3(int32_t value)
	{
		___m_elevationMode_3 = value;
	}

	inline static int32_t get_offset_of_m_indoorMapId_4() { return static_cast<int32_t>(offsetof(PositionerOptions_t660970786, ___m_indoorMapId_4)); }
	inline String_t* get_m_indoorMapId_4() const { return ___m_indoorMapId_4; }
	inline String_t** get_address_of_m_indoorMapId_4() { return &___m_indoorMapId_4; }
	inline void set_m_indoorMapId_4(String_t* value)
	{
		___m_indoorMapId_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_indoorMapId_4), value);
	}

	inline static int32_t get_offset_of_m_indoorMapFloorId_5() { return static_cast<int32_t>(offsetof(PositionerOptions_t660970786, ___m_indoorMapFloorId_5)); }
	inline int32_t get_m_indoorMapFloorId_5() const { return ___m_indoorMapFloorId_5; }
	inline int32_t* get_address_of_m_indoorMapFloorId_5() { return &___m_indoorMapFloorId_5; }
	inline void set_m_indoorMapFloorId_5(int32_t value)
	{
		___m_indoorMapFloorId_5 = value;
	}

	inline static int32_t get_offset_of_m_usingFloorId_6() { return static_cast<int32_t>(offsetof(PositionerOptions_t660970786, ___m_usingFloorId_6)); }
	inline bool get_m_usingFloorId_6() const { return ___m_usingFloorId_6; }
	inline bool* get_address_of_m_usingFloorId_6() { return &___m_usingFloorId_6; }
	inline void set_m_usingFloorId_6(bool value)
	{
		___m_usingFloorId_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONEROPTIONS_T660970786_H
#ifndef GAMEOBJECTSTREAMER_T3452608707_H
#define GAMEOBJECTSTREAMER_T3452608707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.GameObjectStreamer
struct  GameObjectStreamer_t3452608707  : public RuntimeObject
{
public:
	// Wrld.Streaming.GameObjectRepository Wrld.Streaming.GameObjectStreamer::m_gameObjectRepository
	GameObjectRepository_t3760691595 * ___m_gameObjectRepository_0;
	// Wrld.Materials.MaterialRepository Wrld.Streaming.GameObjectStreamer::m_materialRepository
	MaterialRepository_t701520604 * ___m_materialRepository_1;
	// Wrld.Streaming.GameObjectFactory Wrld.Streaming.GameObjectStreamer::m_gameObjectCreator
	GameObjectFactory_t2478326784 * ___m_gameObjectCreator_2;
	// UnityEngine.Transform Wrld.Streaming.GameObjectStreamer::m_parentForStreamedObjects
	Transform_t3600365921 * ___m_parentForStreamedObjects_3;
	// Wrld.Streaming.CollisionStreamingType Wrld.Streaming.GameObjectStreamer::m_collisions
	int32_t ___m_collisions_4;

public:
	inline static int32_t get_offset_of_m_gameObjectRepository_0() { return static_cast<int32_t>(offsetof(GameObjectStreamer_t3452608707, ___m_gameObjectRepository_0)); }
	inline GameObjectRepository_t3760691595 * get_m_gameObjectRepository_0() const { return ___m_gameObjectRepository_0; }
	inline GameObjectRepository_t3760691595 ** get_address_of_m_gameObjectRepository_0() { return &___m_gameObjectRepository_0; }
	inline void set_m_gameObjectRepository_0(GameObjectRepository_t3760691595 * value)
	{
		___m_gameObjectRepository_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_gameObjectRepository_0), value);
	}

	inline static int32_t get_offset_of_m_materialRepository_1() { return static_cast<int32_t>(offsetof(GameObjectStreamer_t3452608707, ___m_materialRepository_1)); }
	inline MaterialRepository_t701520604 * get_m_materialRepository_1() const { return ___m_materialRepository_1; }
	inline MaterialRepository_t701520604 ** get_address_of_m_materialRepository_1() { return &___m_materialRepository_1; }
	inline void set_m_materialRepository_1(MaterialRepository_t701520604 * value)
	{
		___m_materialRepository_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialRepository_1), value);
	}

	inline static int32_t get_offset_of_m_gameObjectCreator_2() { return static_cast<int32_t>(offsetof(GameObjectStreamer_t3452608707, ___m_gameObjectCreator_2)); }
	inline GameObjectFactory_t2478326784 * get_m_gameObjectCreator_2() const { return ___m_gameObjectCreator_2; }
	inline GameObjectFactory_t2478326784 ** get_address_of_m_gameObjectCreator_2() { return &___m_gameObjectCreator_2; }
	inline void set_m_gameObjectCreator_2(GameObjectFactory_t2478326784 * value)
	{
		___m_gameObjectCreator_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_gameObjectCreator_2), value);
	}

	inline static int32_t get_offset_of_m_parentForStreamedObjects_3() { return static_cast<int32_t>(offsetof(GameObjectStreamer_t3452608707, ___m_parentForStreamedObjects_3)); }
	inline Transform_t3600365921 * get_m_parentForStreamedObjects_3() const { return ___m_parentForStreamedObjects_3; }
	inline Transform_t3600365921 ** get_address_of_m_parentForStreamedObjects_3() { return &___m_parentForStreamedObjects_3; }
	inline void set_m_parentForStreamedObjects_3(Transform_t3600365921 * value)
	{
		___m_parentForStreamedObjects_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_parentForStreamedObjects_3), value);
	}

	inline static int32_t get_offset_of_m_collisions_4() { return static_cast<int32_t>(offsetof(GameObjectStreamer_t3452608707, ___m_collisions_4)); }
	inline int32_t get_m_collisions_4() const { return ___m_collisions_4; }
	inline int32_t* get_address_of_m_collisions_4() { return &___m_collisions_4; }
	inline void set_m_collisions_4(int32_t value)
	{
		___m_collisions_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTSTREAMER_T3452608707_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef POSITIONERCREATEPARAMSINTEROP_T3667260723_H
#define POSITIONERCREATEPARAMSINTEROP_T3667260723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.Positioners.PositionerCreateParamsInterop
struct  PositionerCreateParamsInterop_t3667260723 
{
public:
	// Wrld.Space.ElevationMode Wrld.Space.Positioners.PositionerCreateParamsInterop::ElevationMode
	int32_t ___ElevationMode_0;
	// System.Double Wrld.Space.Positioners.PositionerCreateParamsInterop::LatitudeDegrees
	double ___LatitudeDegrees_1;
	// System.Double Wrld.Space.Positioners.PositionerCreateParamsInterop::LongitudeDegrees
	double ___LongitudeDegrees_2;
	// System.Double Wrld.Space.Positioners.PositionerCreateParamsInterop::Elevation
	double ___Elevation_3;
	// System.Int32 Wrld.Space.Positioners.PositionerCreateParamsInterop::IndoorMapFloorId
	int32_t ___IndoorMapFloorId_4;
	// System.String Wrld.Space.Positioners.PositionerCreateParamsInterop::IndoorMapId
	String_t* ___IndoorMapId_5;
	// System.Boolean Wrld.Space.Positioners.PositionerCreateParamsInterop::UsingFloorId
	bool ___UsingFloorId_6;

public:
	inline static int32_t get_offset_of_ElevationMode_0() { return static_cast<int32_t>(offsetof(PositionerCreateParamsInterop_t3667260723, ___ElevationMode_0)); }
	inline int32_t get_ElevationMode_0() const { return ___ElevationMode_0; }
	inline int32_t* get_address_of_ElevationMode_0() { return &___ElevationMode_0; }
	inline void set_ElevationMode_0(int32_t value)
	{
		___ElevationMode_0 = value;
	}

	inline static int32_t get_offset_of_LatitudeDegrees_1() { return static_cast<int32_t>(offsetof(PositionerCreateParamsInterop_t3667260723, ___LatitudeDegrees_1)); }
	inline double get_LatitudeDegrees_1() const { return ___LatitudeDegrees_1; }
	inline double* get_address_of_LatitudeDegrees_1() { return &___LatitudeDegrees_1; }
	inline void set_LatitudeDegrees_1(double value)
	{
		___LatitudeDegrees_1 = value;
	}

	inline static int32_t get_offset_of_LongitudeDegrees_2() { return static_cast<int32_t>(offsetof(PositionerCreateParamsInterop_t3667260723, ___LongitudeDegrees_2)); }
	inline double get_LongitudeDegrees_2() const { return ___LongitudeDegrees_2; }
	inline double* get_address_of_LongitudeDegrees_2() { return &___LongitudeDegrees_2; }
	inline void set_LongitudeDegrees_2(double value)
	{
		___LongitudeDegrees_2 = value;
	}

	inline static int32_t get_offset_of_Elevation_3() { return static_cast<int32_t>(offsetof(PositionerCreateParamsInterop_t3667260723, ___Elevation_3)); }
	inline double get_Elevation_3() const { return ___Elevation_3; }
	inline double* get_address_of_Elevation_3() { return &___Elevation_3; }
	inline void set_Elevation_3(double value)
	{
		___Elevation_3 = value;
	}

	inline static int32_t get_offset_of_IndoorMapFloorId_4() { return static_cast<int32_t>(offsetof(PositionerCreateParamsInterop_t3667260723, ___IndoorMapFloorId_4)); }
	inline int32_t get_IndoorMapFloorId_4() const { return ___IndoorMapFloorId_4; }
	inline int32_t* get_address_of_IndoorMapFloorId_4() { return &___IndoorMapFloorId_4; }
	inline void set_IndoorMapFloorId_4(int32_t value)
	{
		___IndoorMapFloorId_4 = value;
	}

	inline static int32_t get_offset_of_IndoorMapId_5() { return static_cast<int32_t>(offsetof(PositionerCreateParamsInterop_t3667260723, ___IndoorMapId_5)); }
	inline String_t* get_IndoorMapId_5() const { return ___IndoorMapId_5; }
	inline String_t** get_address_of_IndoorMapId_5() { return &___IndoorMapId_5; }
	inline void set_IndoorMapId_5(String_t* value)
	{
		___IndoorMapId_5 = value;
		Il2CppCodeGenWriteBarrier((&___IndoorMapId_5), value);
	}

	inline static int32_t get_offset_of_UsingFloorId_6() { return static_cast<int32_t>(offsetof(PositionerCreateParamsInterop_t3667260723, ___UsingFloorId_6)); }
	inline bool get_UsingFloorId_6() const { return ___UsingFloorId_6; }
	inline bool* get_address_of_UsingFloorId_6() { return &___UsingFloorId_6; }
	inline void set_UsingFloorId_6(bool value)
	{
		___UsingFloorId_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Wrld.Space.Positioners.PositionerCreateParamsInterop
struct PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke
{
	int32_t ___ElevationMode_0;
	double ___LatitudeDegrees_1;
	double ___LongitudeDegrees_2;
	double ___Elevation_3;
	int32_t ___IndoorMapFloorId_4;
	char* ___IndoorMapId_5;
	int8_t ___UsingFloorId_6;
};
// Native definition for COM marshalling of Wrld.Space.Positioners.PositionerCreateParamsInterop
struct PositionerCreateParamsInterop_t3667260723_marshaled_com
{
	int32_t ___ElevationMode_0;
	double ___LatitudeDegrees_1;
	double ___LongitudeDegrees_2;
	double ___Elevation_3;
	int32_t ___IndoorMapFloorId_4;
	char* ___IndoorMapId_5;
	int8_t ___UsingFloorId_6;
};
#endif // POSITIONERCREATEPARAMSINTEROP_T3667260723_H
#ifndef ADDMESHCALLBACK_T1037702503_H
#define ADDMESHCALLBACK_T1037702503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/AddMeshCallback
struct  AddMeshCallback_t1037702503  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDMESHCALLBACK_T1037702503_H
#ifndef ADDINSTANCEDRENDERABLECALLBACK_T3490013979_H
#define ADDINSTANCEDRENDERABLECALLBACK_T3490013979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.IndoorMapScene/AddInstancedRenderableCallback
struct  AddInstancedRenderableCallback_t3490013979  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDINSTANCEDRENDERABLECALLBACK_T3490013979_H
#ifndef DELETEMESHCALLBACK_T4229142016_H
#define DELETEMESHCALLBACK_T4229142016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/DeleteMeshCallback
struct  DeleteMeshCallback_t4229142016  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEMESHCALLBACK_T4229142016_H
#ifndef ADDRENDERABLECALLBACK_T1605223576_H
#define ADDRENDERABLECALLBACK_T1605223576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.IndoorMapScene/AddRenderableCallback
struct  AddRenderableCallback_t1605223576  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRENDERABLECALLBACK_T1605223576_H
#ifndef SETMATERIALCALLBACK_T1980336972_H
#define SETMATERIALCALLBACK_T1980336972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.IndoorMapScene/SetMaterialCallback
struct  SetMaterialCallback_t1980336972  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETMATERIALCALLBACK_T1980336972_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ONRENDERSTATEUPDATEDCALLBACK_T3936364814_H
#define ONRENDERSTATEUPDATEDCALLBACK_T3936364814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.IndoorMapScene/OnRenderStateUpdatedCallback
struct  OnRenderStateUpdatedCallback_t3936364814  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONRENDERSTATEUPDATEDCALLBACK_T3936364814_H
#ifndef VISIBILITYCALLBACK_T2021865822_H
#define VISIBILITYCALLBACK_T2021865822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/VisibilityCallback
struct  VisibilityCallback_t2021865822  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISIBILITYCALLBACK_T2021865822_H
#ifndef SETSCALECALLBACK_T2997993506_H
#define SETSCALECALLBACK_T2997993506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/SetScaleCallback
struct  SetScaleCallback_t2997993506  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETSCALECALLBACK_T2997993506_H
#ifndef HANDLEASSERTCALLBACK_T2932343000_H
#define HANDLEASSERTCALLBACK_T2932343000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.AssertHandler/HandleAssertCallback
struct  HandleAssertCallback_t2932343000  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEASSERTCALLBACK_T2932343000_H
#ifndef SETTRANSLATIONCALLBACK_T3765364063_H
#define SETTRANSLATIONCALLBACK_T3765364063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/SetTranslationCallback
struct  SetTranslationCallback_t3765364063  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTRANSLATIONCALLBACK_T3765364063_H
#ifndef SETORIENTATIONCALLBACK_T1136855763_H
#define SETORIENTATIONCALLBACK_T1136855763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/SetOrientationCallback
struct  SetOrientationCallback_t1136855763  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETORIENTATIONCALLBACK_T1136855763_H
#ifndef SETCOLORCALLBACK_T2629579893_H
#define SETCOLORCALLBACK_T2629579893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/SetColorCallback
struct  SetColorCallback_t2629579893  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETCOLORCALLBACK_T2629579893_H
#ifndef POSITIONERUPDATEDDELEGATE_T1913896330_H
#define POSITIONERUPDATEDDELEGATE_T1913896330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.Positioners.PositionerUpdatedDelegate
struct  PositionerUpdatedDelegate_t1913896330  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONERUPDATEDDELEGATE_T1913896330_H
#ifndef HANDLEFATALERRORCALLBACK_T2181414516_H
#define HANDLEFATALERRORCALLBACK_T2181414516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.FatalErrorHandler/HandleFatalErrorCallback
struct  HandleFatalErrorCallback_t2181414516  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEFATALERRORCALLBACK_T2181414516_H
#ifndef POSITIONERPROJECTIONCHANGEDDELEGATE_T1663436742_H
#define POSITIONERPROJECTIONCHANGEDDELEGATE_T1663436742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.Positioners.PositionerApiInternal/PositionerProjectionChangedDelegate
struct  PositionerProjectionChangedDelegate_t1663436742  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONERPROJECTIONCHANGEDDELEGATE_T1663436742_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ROTATEOBJECT_T4285095008_H
#define ROTATEOBJECT_T4285095008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateObject
struct  RotateObject_t4285095008  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATEOBJECT_T4285095008_H
#ifndef VIEWNORMALS_T1335920405_H
#define VIEWNORMALS_T1335920405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewNormals
struct  ViewNormals_t1335920405  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.MeshFilter ViewNormals::objectMesh
	MeshFilter_t3523625662 * ___objectMesh_2;

public:
	inline static int32_t get_offset_of_objectMesh_2() { return static_cast<int32_t>(offsetof(ViewNormals_t1335920405, ___objectMesh_2)); }
	inline MeshFilter_t3523625662 * get_objectMesh_2() const { return ___objectMesh_2; }
	inline MeshFilter_t3523625662 ** get_address_of_objectMesh_2() { return &___objectMesh_2; }
	inline void set_objectMesh_2(MeshFilter_t3523625662 * value)
	{
		___objectMesh_2 = value;
		Il2CppCodeGenWriteBarrier((&___objectMesh_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEWNORMALS_T1335920405_H
#ifndef STREAMINGBEHAVIOUR_T1089570205_H
#define STREAMINGBEHAVIOUR_T1089570205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapCamera.StreamingBehaviour
struct  StreamingBehaviour_t1089570205  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGBEHAVIOUR_T1089570205_H
#ifndef ERRORMESSAGE_T4118551105_H
#define ERRORMESSAGE_T4118551105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ErrorMessage
struct  ErrorMessage_t4118551105  : public MonoBehaviour_t3962482529
{
public:
	// System.String ErrorMessage::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_2;
	// System.String ErrorMessage::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorMessage_t4118551105, ___U3CTitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_2() const { return ___U3CTitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_2() { return &___U3CTitleU3Ek__BackingField_2; }
	inline void set_U3CTitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTitleU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorMessage_t4118551105, ___U3CTextU3Ek__BackingField_3)); }
	inline String_t* get_U3CTextU3Ek__BackingField_3() const { return ___U3CTextU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_3() { return &___U3CTextU3Ek__BackingField_3; }
	inline void set_U3CTextU3Ek__BackingField_3(String_t* value)
	{
		___U3CTextU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORMESSAGE_T4118551105_H
#ifndef ENDPROGRAM_T1276848342_H
#define ENDPROGRAM_T1276848342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndProgram
struct  EndProgram_t1276848342  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPROGRAM_T1276848342_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3200 = { sizeof (PositionerApi_t2770033165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3200[1] = 
{
	PositionerApi_t2770033165::get_offset_of_m_apiInternal_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3201 = { sizeof (PositionerApiInternal_t1500108320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3201[2] = 
{
	PositionerApiInternal_t1500108320::get_offset_of_m_positionerIdToObject_0(),
	PositionerApiInternal_t1500108320::get_offset_of_m_handleToSelf_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3202 = { sizeof (PositionerProjectionChangedDelegate_t1663436742), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3203 = { sizeof (PositionerCreateParamsInterop_t3667260723)+ sizeof (RuntimeObject), sizeof(PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3203[7] = 
{
	PositionerCreateParamsInterop_t3667260723::get_offset_of_ElevationMode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PositionerCreateParamsInterop_t3667260723::get_offset_of_LatitudeDegrees_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PositionerCreateParamsInterop_t3667260723::get_offset_of_LongitudeDegrees_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PositionerCreateParamsInterop_t3667260723::get_offset_of_Elevation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PositionerCreateParamsInterop_t3667260723::get_offset_of_IndoorMapFloorId_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PositionerCreateParamsInterop_t3667260723::get_offset_of_IndoorMapId_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PositionerCreateParamsInterop_t3667260723::get_offset_of_UsingFloorId_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3204 = { sizeof (DoubleVector3Interop_t1528464399)+ sizeof (RuntimeObject), sizeof(DoubleVector3Interop_t1528464399 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3204[3] = 
{
	DoubleVector3Interop_t1528464399::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DoubleVector3Interop_t1528464399::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DoubleVector3Interop_t1528464399::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3205 = { sizeof (PositionerUpdatedDelegate_t1913896330), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3206 = { sizeof (PositionerOptions_t660970786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3206[7] = 
{
	PositionerOptions_t660970786::get_offset_of_m_latitudeDegrees_0(),
	PositionerOptions_t660970786::get_offset_of_m_longitudeDegrees_1(),
	PositionerOptions_t660970786::get_offset_of_m_elevation_2(),
	PositionerOptions_t660970786::get_offset_of_m_elevationMode_3(),
	PositionerOptions_t660970786::get_offset_of_m_indoorMapId_4(),
	PositionerOptions_t660970786::get_offset_of_m_indoorMapFloorId_5(),
	PositionerOptions_t660970786::get_offset_of_m_usingFloorId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3207 = { sizeof (SpacesApi_t463405772), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3208 = { sizeof (TransformHelper_t3089836435), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3209 = { sizeof (UnityWorldSpaceCoordinateFrame_t1382732960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3209[6] = 
{
	UnityWorldSpaceCoordinateFrame_t1382732960::get_offset_of_U3CECEFToLocalRotationU3Ek__BackingField_0(),
	UnityWorldSpaceCoordinateFrame_t1382732960::get_offset_of_U3CLocalToECEFRotationU3Ek__BackingField_1(),
	UnityWorldSpaceCoordinateFrame_t1382732960::get_offset_of_m_originECEF_2(),
	UnityWorldSpaceCoordinateFrame_t1382732960::get_offset_of_m_upECEF_3(),
	UnityWorldSpaceCoordinateFrame_t1382732960::get_offset_of_m_rightECEF_4(),
	UnityWorldSpaceCoordinateFrame_t1382732960::get_offset_of_m_forwardECEF_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3210 = { sizeof (UnityWorldSpaceTransformUpdateStrategy_t501792395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3210[2] = 
{
	UnityWorldSpaceTransformUpdateStrategy_t501792395::get_offset_of_m_frame_0(),
	UnityWorldSpaceTransformUpdateStrategy_t501792395::get_offset_of_m_flattenScale_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3211 = { sizeof (CollisionStreamingType_t2118098865)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3211[4] = 
{
	CollisionStreamingType_t2118098865::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3212 = { sizeof (GameObjectFactory_t2478326784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3212[1] = 
{
	GameObjectFactory_t2478326784::get_offset_of_m_parentTransform_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3213 = { sizeof (GameObjectRecord_t2871914821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3213[4] = 
{
	GameObjectRecord_t2871914821::get_offset_of_U3COriginECEFU3Ek__BackingField_0(),
	GameObjectRecord_t2871914821::get_offset_of_U3COrientationECEFU3Ek__BackingField_1(),
	GameObjectRecord_t2871914821::get_offset_of_U3CTranslationOffsetECEFU3Ek__BackingField_2(),
	GameObjectRecord_t2871914821::get_offset_of_U3CRootGameObjectU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3214 = { sizeof (GameObjectRepository_t3760691595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3214[4] = 
{
	GameObjectRepository_t3760691595::get_offset_of_m_gameObjectsById_0(),
	GameObjectRepository_t3760691595::get_offset_of_m_root_1(),
	GameObjectRepository_t3760691595::get_offset_of_m_materialRepository_2(),
	GameObjectRepository_t3760691595::get_offset_of_m_applyFlattening_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3215 = { sizeof (GameObjectStreamer_t3452608707), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3215[5] = 
{
	GameObjectStreamer_t3452608707::get_offset_of_m_gameObjectRepository_0(),
	GameObjectStreamer_t3452608707::get_offset_of_m_materialRepository_1(),
	GameObjectStreamer_t3452608707::get_offset_of_m_gameObjectCreator_2(),
	GameObjectStreamer_t3452608707::get_offset_of_m_parentForStreamedObjects_3(),
	GameObjectStreamer_t3452608707::get_offset_of_m_collisions_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3216 = { sizeof (IndoorMapScene_t1512761185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3216[5] = 
{
	IndoorMapScene_t1512761185::get_offset_of_m_indoorMapStreamer_0(),
	IndoorMapScene_t1512761185::get_offset_of_m_meshUploader_1(),
	IndoorMapScene_t1512761185::get_offset_of_m_materialRepository_2(),
	IndoorMapScene_t1512761185::get_offset_of_m_indoorMapsApiInternal_3(),
	IndoorMapScene_t1512761185::get_offset_of_m_handleToSelf_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3217 = { sizeof (SetMaterialCallback_t1980336972), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3218 = { sizeof (AddRenderableCallback_t1605223576), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3219 = { sizeof (AddInstancedRenderableCallback_t3490013979), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3220 = { sizeof (OnRenderStateUpdatedCallback_t3936364814), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3221 = { sizeof (MapGameObjectScene_t128928738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3221[9] = 
{
	MapGameObjectScene_t128928738::get_offset_of_m_terrainStreamer_0(),
	MapGameObjectScene_t128928738::get_offset_of_m_roadStreamer_1(),
	MapGameObjectScene_t128928738::get_offset_of_m_buildingStreamer_2(),
	MapGameObjectScene_t128928738::get_offset_of_m_highlightStreamer_3(),
	MapGameObjectScene_t128928738::get_offset_of_m_indoorMapStreamer_4(),
	MapGameObjectScene_t128928738::get_offset_of_m_meshUploader_5(),
	MapGameObjectScene_t128928738::get_offset_of_m_indoorMapScene_6(),
	MapGameObjectScene_t128928738::get_offset_of_m_enabled_7(),
	MapGameObjectScene_t128928738::get_offset_of_m_handleToSelf_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3222 = { sizeof (AddMeshCallback_t1037702503), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3223 = { sizeof (DeleteMeshCallback_t4229142016), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3224 = { sizeof (VisibilityCallback_t2021865822), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3225 = { sizeof (SetScaleCallback_t2997993506), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3226 = { sizeof (SetTranslationCallback_t3765364063), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3227 = { sizeof (SetOrientationCallback_t1136855763), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3228 = { sizeof (SetColorCallback_t2629579893), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3229 = { sizeof (ResourceCeilingProvider_t2554508737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3229[1] = 
{
	ResourceCeilingProvider_t2554508737::get_offset_of_m_terrainHeightProvider_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3230 = { sizeof (StreamingBehaviour_t1089570205), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3231 = { sizeof (StreamingUpdater_t530401876), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3231[2] = 
{
	StreamingUpdater_t530401876::get_offset_of_m_screenWidth_0(),
	StreamingUpdater_t530401876::get_offset_of_m_screenHeight_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3232 = { sizeof (APIKeyHelpers_t4091981690), -1, sizeof(APIKeyHelpers_t4091981690_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3232[2] = 
{
	0,
	APIKeyHelpers_t4091981690_StaticFields::get_offset_of_ms_cachedApiKey_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3233 = { sizeof (AssertHandler_t1732545153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3234 = { sizeof (HandleAssertCallback_t2932343000), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3235 = { sizeof (EndProgram_t1276848342), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3236 = { sizeof (ErrorMessage_t4118551105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3236[4] = 
{
	ErrorMessage_t4118551105::get_offset_of_U3CTitleU3Ek__BackingField_2(),
	ErrorMessage_t4118551105::get_offset_of_U3CTextU3Ek__BackingField_3(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3237 = { sizeof (FatalErrorHandler_t3709036114), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3238 = { sizeof (HandleFatalErrorCallback_t2181414516), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3239 = { sizeof (InvalidApiKeyException_t175683051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3240 = { sizeof (NativeInteropExtensions_t3308178798), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3241 = { sizeof (NativeInteropHelpers_t135492399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3242 = { sizeof (ViewNormals_t1335920405), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3242[1] = 
{
	ViewNormals_t1335920405::get_offset_of_objectMesh_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3243 = { sizeof (RotateObject_t4285095008), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3243[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3244 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255369), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255369_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3244[2] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255369_StaticFields::get_offset_of_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_0(),
	U3CPrivateImplementationDetailsU3E_t3057255369_StaticFields::get_offset_of_U24fieldU2DDB17E883A647963A26D973378923EF4649801319_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3245 = { sizeof (U24ArrayTypeU3D208_t3449392908)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D208_t3449392908 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3246 = { sizeof (U24ArrayTypeU3D24_t2467506693)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D24_t2467506693 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
