#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;

struct Vector3_t3722313464 ;
struct Quaternion_t2301928331 ;
struct ColorInterop_t1726030811 ;
struct Vector2_t2156229523 ;



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
#ifndef CAMERAEVENTTYPE_T1276336769_H
#define CAMERAEVENTTYPE_T1276336769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapCamera.CameraApiInternal/CameraEventType
struct  CameraEventType_t1276336769 
{
public:
	// System.Int32 Wrld.MapCamera.CameraApiInternal/CameraEventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraEventType_t1276336769, ___value___1)); }
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
#endif // CAMERAEVENTTYPE_T1276336769_H



extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_DeflateStream_UnmanagedRead_m4002292959(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_DeflateStream_UnmanagedWrite_m3688808850(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AssertHandler_HandleAssert_m1985708607(char* ___message0, char* ___file1, int32_t ___line2);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_ThreadService_CreateThread_m3570449930(intptr_t ___threadServiceHandle0, Il2CppMethodPointer ___runFunc1, intptr_t ___startData2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ThreadService_JoinThread_m1805523832(intptr_t ___threadServiceHandle0, int32_t ___threadID1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FatalErrorHandler_HandleFatalError_m3773832479(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapScene_SetMaterial_m2335156909(intptr_t ___indoorMapSceneHandle0, char* ___objectID1, intptr_t ___materialHandle2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapScene_SetMaterialForInstancedRenderable_m1648423999(intptr_t ___indoorMapSceneHandle0, char* ___objectID1, intptr_t ___materialHandle2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapScene_AddRenderable_m2534047459(intptr_t ___indoorMapSceneHandle0, char* ___meshID1, char* ___indoorMapName2, intptr_t ___nativeRenderablePtr3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapScene_AddHighlightRenderable_m3194808108(intptr_t ___indoorMapSceneHandle0, char* ___meshID1, char* ___indoorMapName2, intptr_t ___nativeRenderablePtr3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapScene_AddInstancedRenderable_m3860085731(intptr_t ___indoorMapSceneHandle0, char* ___meshID1, char* ___indoorMapName2, int32_t ___transformCount3, intptr_t ___positionOffsetsPtr4, intptr_t ___orientationsPtr5, intptr_t ___nativeRenderablePtr6);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapScene_OnRenderStateUpdated_m2076795857(intptr_t ___indoorMapSceneHandle0, char* ___objectID1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapScene_OnRenderStateUpdatedForHighlightRenderable_m1275169762(intptr_t ___indoorMapSceneHandle0, char* ___objectID1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapScene_OnRenderStateUpdatedForInstancedRenderable_m1509976062(intptr_t ___indoorMapSceneHandle0, char* ___objectID1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CameraApiInternal_OnCameraEvent_m2123076288(intptr_t ___cameraApiInternalHandle0, int32_t ___eventID1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MapGameObjectScene_DeleteMesh_m2350926694(intptr_t ___sceneServiceHandle0, char* ___meshID1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MapGameObjectScene_AddMesh_m741818864(intptr_t ___sceneServiceHandle0, char* ___meshID1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MapGameObjectScene_SetVisible_m53972882(intptr_t ___sceneServiceHandle0, char* ___meshID1, int8_t ___visible2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MapGameObjectScene_SetScale_m2736247529(intptr_t ___sceneServiceHandle0, char* ___objectID1, Vector3_t3722313464 * ___scale2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MapGameObjectScene_SetTranslation_m3673885618(intptr_t ___sceneServiceHandle0, char* ___objectID1, Vector3_t3722313464 * ___translation2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MapGameObjectScene_SetOrientation_m3084922172(intptr_t ___sceneServiceHandle0, char* ___meshID1, Quaternion_t2301928331 * ___orientation2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MapGameObjectScene_SetColor_m1877964419(intptr_t ___sceneServiceHandle0, char* ___objectID1, ColorInterop_t1726030811 * ___color2);
extern "C" intptr_t DEFAULT_CALL ReversePInvokeWrapper_TextureLoadHandler_AllocateTextureBuffer_m1386010403(intptr_t ___textureServiceHandle0, int32_t ___size1, int32_t ___width2, int32_t ___height3, int32_t ___format4, int32_t ___hasMipMaps5);
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_TextureLoadHandler_BeginUploadTextureBuffer_m1857616132(intptr_t ___textureServiceHandle0, intptr_t ___bufferPtr1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TextureLoadHandler_ReleaseTexture_m3904019126(intptr_t ___textureServiceHandle0, uint32_t ___id1);
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_TextureLoadHandler_CreateCubemapFromFaces_m4182605382(intptr_t ___textureServiceHandle0, uint32_t* ___faceIDs1);
extern "C" intptr_t DEFAULT_CALL ReversePInvokeWrapper_MeshUploader_AllocateUnpackedMesh_m799971838(int32_t ___vertexCount0, int8_t ___hasUvs1, int8_t ___hasUV2s2, int8_t ___hasNormals3, int8_t ___hasColors4, int32_t ___indexCount5, intptr_t ___name6, intptr_t ___material7);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MeshUploader_UploadUnpackedMesh_m916393349(intptr_t ___meshPtr0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_BuildingsApiInternal_OnBuildingHighlightChanged_m2498789726(intptr_t ___buildingsApiHandle0, int32_t ___buildingHighlightId1);
extern "C" intptr_t DEFAULT_CALL ReversePInvokeWrapper_IndoorMapMaterialService_CreateMaterial_m2576170535(intptr_t ___materialDescriptorInteropPtr0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapMaterialService_DeleteMaterial_m3106287357(intptr_t ___materialServiceHandle0, intptr_t ___materialHandle1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapsApiInternal_OnIndoorMapEnteredCallback_m1052303293(intptr_t ___internalApiHandle0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapsApiInternal_OnIndoorMapExitedCallback_m2542028786(intptr_t ___internalApiHandle0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapsApiInternal_OnIndoorMapFloorChangedCallback_m1203763017(intptr_t ___internalApiHandle0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapsApiInternal_OnIndoorMapEntityClickedCallback_m3600256217(intptr_t ___internalApiHandle0, char* ___entityIds1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IndoorMapTextureStreamingService_OnTextureReceived_m691274669(intptr_t ___requestHandle0, char* ___texturePath1, uint32_t ___textureId2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LabelServiceInternal_AddLabel_m2638924068(intptr_t ___labelServiceHandle0, char* ___labelId1, char* ___labelText2, ColorInterop_t1726030811 * ___color3, int32_t ___baseFontSize4, double ___fontScale5);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LabelServiceInternal_UpdateLabel_m1636846679(intptr_t ___labelServiceHandle0, char* ___labelId1, ColorInterop_t1726030811 * ___textColor2, Vector2_t2156229523 * ___position3, float ___rotationAngleDegrees4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LabelServiceInternal_RemoveLabel_m4053777316(intptr_t ___labelServiceHandle0, char* ___labelId1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PositionerApiInternal_OnPositionerUpdated_m4205083120(intptr_t ___positionerApiHandle0);
extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[40] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStream_UnmanagedRead_m4002292959),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStream_UnmanagedWrite_m3688808850),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AssertHandler_HandleAssert_m1985708607),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ThreadService_CreateThread_m3570449930),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ThreadService_JoinThread_m1805523832),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FatalErrorHandler_HandleFatalError_m3773832479),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapScene_SetMaterial_m2335156909),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapScene_SetMaterialForInstancedRenderable_m1648423999),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapScene_AddRenderable_m2534047459),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapScene_AddHighlightRenderable_m3194808108),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapScene_AddInstancedRenderable_m3860085731),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapScene_OnRenderStateUpdated_m2076795857),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapScene_OnRenderStateUpdatedForHighlightRenderable_m1275169762),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapScene_OnRenderStateUpdatedForInstancedRenderable_m1509976062),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CameraApiInternal_OnCameraEvent_m2123076288),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MapGameObjectScene_DeleteMesh_m2350926694),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MapGameObjectScene_AddMesh_m741818864),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MapGameObjectScene_SetVisible_m53972882),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MapGameObjectScene_SetScale_m2736247529),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MapGameObjectScene_SetTranslation_m3673885618),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MapGameObjectScene_SetOrientation_m3084922172),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MapGameObjectScene_SetColor_m1877964419),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TextureLoadHandler_AllocateTextureBuffer_m1386010403),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TextureLoadHandler_BeginUploadTextureBuffer_m1857616132),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TextureLoadHandler_ReleaseTexture_m3904019126),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TextureLoadHandler_CreateCubemapFromFaces_m4182605382),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MeshUploader_AllocateUnpackedMesh_m799971838),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MeshUploader_UploadUnpackedMesh_m916393349),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BuildingsApiInternal_OnBuildingHighlightChanged_m2498789726),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapMaterialService_CreateMaterial_m2576170535),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapMaterialService_DeleteMaterial_m3106287357),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapsApiInternal_OnIndoorMapEnteredCallback_m1052303293),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapsApiInternal_OnIndoorMapExitedCallback_m2542028786),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapsApiInternal_OnIndoorMapFloorChangedCallback_m1203763017),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapsApiInternal_OnIndoorMapEntityClickedCallback_m3600256217),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IndoorMapTextureStreamingService_OnTextureReceived_m691274669),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LabelServiceInternal_AddLabel_m2638924068),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LabelServiceInternal_UpdateLabel_m1636846679),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LabelServiceInternal_RemoveLabel_m4053777316),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PositionerApiInternal_OnPositionerUpdated_m4205083120),
};
