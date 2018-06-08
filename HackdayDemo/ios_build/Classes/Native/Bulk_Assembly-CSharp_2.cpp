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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Wrld.Resources.IndoorMaps.StreamedTextureRequest
struct StreamedTextureRequest_t1934737979;
// Wrld.Resources.IndoorMaps.IIndoorMapMaterial
struct IIndoorMapMaterial_t370480997;
// System.String
struct String_t;
// Wrld.Resources.IndoorMaps.IIndoorMapStreamedTextureObserver
struct IIndoorMapStreamedTextureObserver_t405090612;
// Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService
struct IndoorMapTextureStreamingService_t4078817394;
// Wrld.Resources.Labels.LabelServiceInternal
struct LabelServiceInternal_t3414831883;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text>
struct Dictionary_2_t1687139013;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.Outline
struct Outline_t2536100125;
// UnityEngine.UI.Shadow
struct Shadow_t773074319;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3495933518;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.UI.Text>
struct KeyCollection_t1876814484;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// Wrld.Resources.Labels.LabelServiceInternal/AddLabelDelegate
struct AddLabelDelegate_t1714422129;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Wrld.Resources.Labels.LabelServiceInternal/RemoveLabelDelegate
struct RemoveLabelDelegate_t569890163;
// Wrld.Resources.Labels.LabelServiceInternal/UpdateLabelDelegate
struct UpdateLabelDelegate_t605162668;
// Wrld.Resources.Terrain.Heights.TerrainHeightProvider
struct TerrainHeightProvider_t517848921;
// Wrld.MapGameObjectScene/SetScaleCallback
struct SetScaleCallback_t2997993506;
// Wrld.MapGameObjectScene/SetTranslationCallback
struct SetTranslationCallback_t3765364063;
// Wrld.MapGameObjectScene/SetOrientationCallback
struct SetOrientationCallback_t1136855763;
// Wrld.MapGameObjectScene/SetColorCallback
struct SetColorCallback_t2629579893;
// Wrld.Scripts.Utilities.InvalidApiKeyException
struct InvalidApiKeyException_t175683051;
// System.Exception
struct Exception_t;
// Wrld.Space.ECEFTransformUpdateStrategy
struct ECEFTransformUpdateStrategy_t443103155;
// Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApi
struct EnvironmentFlatteningApi_t3419959241;
// Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal
struct EnvironmentFlatteningApiInternal_t833742330;
// Wrld.Space.GeographicApi
struct GeographicApi_t2934948604;
// System.Collections.Generic.List`1<Wrld.Space.GeographicTransform>
struct List_1_t3734218024;
// Wrld.Space.ITransformUpdateStrategy
struct ITransformUpdateStrategy_t2466850383;
// Wrld.Space.GeographicTransform
struct GeographicTransform_t2262143282;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// Wrld.Common.Maths.EcefTangentBasis
struct EcefTangentBasis_t256737685;
// Wrld.Api
struct Api_t1190036922;
// Wrld.Space.Positioners.Positioner
struct Positioner_t1752774946;
// Wrld.Space.Positioners.PositionerApiInternal
struct PositionerApiInternal_t1500108320;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentException
struct ArgumentException_t132251570;
// Wrld.Space.Positioners.PositionerApi
struct PositionerApi_t2770033165;
// Wrld.Space.Positioners.PositionerOptions
struct PositionerOptions_t660970786;
// System.Collections.Generic.Dictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>
struct Dictionary_2_t641488277;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// Wrld.Space.Positioners.PositionerCreateParamsInterop
struct PositionerCreateParamsInterop_t3667260723;
// Wrld.Space.Positioners.PositionerApiInternal/PositionerProjectionChangedDelegate
struct PositionerProjectionChangedDelegate_t1663436742;
// Wrld.Space.Positioners.PositionerUpdatedDelegate
struct PositionerUpdatedDelegate_t1913896330;
// Wrld.Space.SpacesApi
struct SpacesApi_t463405772;
// Wrld.Space.TransformHelper
struct TransformHelper_t3089836435;
// Wrld.Space.UnityWorldSpaceCoordinateFrame
struct UnityWorldSpaceCoordinateFrame_t1382732960;
// Wrld.Space.UnityWorldSpaceTransformUpdateStrategy
struct UnityWorldSpaceTransformUpdateStrategy_t501792395;
// Wrld.Streaming.GameObjectFactory
struct GameObjectFactory_t2478326784;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.MeshCollider
struct MeshCollider_t903564387;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// Wrld.Streaming.GameObjectRecord
struct GameObjectRecord_t2871914821;
// Wrld.Streaming.GameObjectRepository
struct GameObjectRepository_t3760691595;
// Wrld.Materials.MaterialRepository
struct MaterialRepository_t701520604;
// System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>
struct Dictionary_2_t2657171120;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Wrld.Streaming.GameObjectRecord>
struct ValueCollection_t78248142;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1848589470;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Wrld.Streaming.GameObjectStreamer
struct GameObjectStreamer_t3452608707;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t2132764133;
// Wrld.Streaming.ResourceCeilingProvider
struct ResourceCeilingProvider_t2554508737;
// Wrld.StreamingUpdater
struct StreamingUpdater_t530401876;
// Wrld.MapCamera.CameraState
struct CameraState_t2128520787;
// UnityEngine.Camera
struct Camera_t4157153871;
// Wrld.Materials.TextureLoadHandler/AllocateTextureBufferCallback
struct AllocateTextureBufferCallback_t109657048;
// Wrld.Materials.TextureLoadHandler/BeginUploadTextureBufferCallback
struct BeginUploadTextureBufferCallback_t3016670851;
// Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService/OnTextureReceivedCallback
struct OnTextureReceivedCallback_t1016964503;
// Wrld.Materials.TextureLoadHandler/ReleaseTextureCallback
struct ReleaseTextureCallback_t388032167;
// Wrld.Materials.TextureLoadHandler/CreateCubemapFromFacesCallback
struct CreateCubemapFromFacesCallback_t2834185402;
// Wrld.Concurrency.ThreadService/CreateThreadDelegate
struct CreateThreadDelegate_t2573395908;
// Wrld.Concurrency.ThreadService/JoinThreadDelegate
struct JoinThreadDelegate_t1262337526;
// WrldMap
struct WrldMap_t2502476010;
// Wrld.MapCamera.CameraApi
struct CameraApi_t3006904385;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// Wrld.Space.Positioners.Positioner[]
struct PositionerU5BU5D_t2567922711;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Wrld.Space.Positioners.Positioner,System.Collections.DictionaryEntry>
struct Transform_1_t2172261555;
// System.String[]
struct StringU5BU5D_t1281789340;
// Wrld.Space.GeographicTransform[]
struct GeographicTransformU5BU5D_t3244874183;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Generic.HashSet`1<UnityEngine.Material>
struct HashSet_1_t3200291893;
// System.Collections.Generic.Dictionary`2<System.String,Wrld.Materials.MaterialRepository/MaterialRecord>
struct Dictionary_2_t2238724610;
// Wrld.Materials.TextureLoadHandler
struct TextureLoadHandler_t2080734353;
// System.Char[]
struct CharU5BU5D_t3528271667;
// Wrld.MapCamera.CameraApi/TransitionStartHandler
struct TransitionStartHandler_t1803894657;
// Wrld.MapCamera.CameraApi/TransitionEndHandler
struct TransitionEndHandler_t4082272293;
// Wrld.ApiImplementation
struct ApiImplementation_t1854519848;
// Wrld.MapCamera.CameraInputHandler
struct CameraInputHandler_t3237370388;
// Wrld.MapCamera.CameraApiInternal
struct CameraApiInternal_t846667071;
// Wrld.Streaming.GameObjectRecord[]
struct GameObjectRecordU5BU5D_t2891780104;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Wrld.Streaming.GameObjectRecord,System.Collections.DictionaryEntry>
struct Transform_1_t1742191820;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t422084607;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.UI.Text,System.Collections.DictionaryEntry>
struct Transform_1_t3567463619;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// Wrld.Meshes.MeshUploader
struct MeshUploader_t3724330286;
// Wrld.IndoorMapScene
struct IndoorMapScene_t1512761185;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.Texture>
struct Dictionary_2_t641263069;
// Wrld.Concurrency.ConcurrentQueue`1<Wrld.Materials.TextureLoadHandler/TextureBuffer>
struct ConcurrentQueue_1_t11616060;
// Wrld.Materials.IdGenerator
struct IdGenerator_t1318283159;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Thread>
struct Dictionary_2_t1189549400;
// System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>
struct IDictionary_2_t3400306964;
// Wrld.MapGameObjectScene
struct MapGameObjectScene_t128928738;
// Wrld.Concurrency.ThreadService
struct ThreadService_t1369597789;
// Wrld.Concurrency.ThreadService/ThreadStartDelegate
struct ThreadStartDelegate_t2173555516;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Dictionary_2_t1687139013_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1498171786_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCanvas_t3310196443_m1808013672_RuntimeMethod_var;
extern String_t* _stringLiteral854802353;
extern const uint32_t LabelServiceInternal__ctor_m463169743_MetadataUsageId;
extern const RuntimeMethod* Resources_Load_TisGameObject_t1113636619_m1734345100_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3099699669_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisOutline_t2536100125_m3068308663_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m257718337_RuntimeMethod_var;
extern String_t* _stringLiteral4248990973;
extern const uint32_t LabelServiceInternal_AddLabel_m803203325_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3938898806_RuntimeMethod_var;
extern const uint32_t LabelServiceInternal_UpdateLabel_m2393798876_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m4036631011_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3513537345_RuntimeMethod_var;
extern const uint32_t LabelServiceInternal_DestroyLabel_m452857124_MetadataUsageId;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1138737473_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m864250344_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1955908099_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m236733038_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4158182743_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2026665411_RuntimeMethod_var;
extern const uint32_t LabelServiceInternal_Destroy_m3275023265_MetadataUsageId;
extern const RuntimeMethod* NativeInteropExtensions_NativeHandleToObject_TisLabelServiceInternal_t3414831883_m3108454946_RuntimeMethod_var;
extern const uint32_t LabelServiceInternal_AddLabel_m2638924068_MetadataUsageId;
extern const uint32_t LabelServiceInternal_UpdateLabel_m1636846679_MetadataUsageId;
extern const uint32_t LabelServiceInternal_RemoveLabel_m4053777316_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ColorInterop_t1726030811_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern const uint32_t AddLabelDelegate_BeginInvoke_m3609615803_MetadataUsageId;
extern const uint32_t RemoveLabelDelegate_BeginInvoke_m1422962026_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const uint32_t UpdateLabelDelegate_BeginInvoke_m3463997486_MetadataUsageId;
extern RuntimeClass* NativePluginRunner_t3528041536_il2cpp_TypeInfo_var;
extern const uint32_t TerrainHeightProvider_TryGetHeight_m1582937833_MetadataUsageId;
extern const uint32_t TerrainHeightProvider_GetMinHeight_m246132978_MetadataUsageId;
extern const uint32_t TerrainHeightProvider_GetMaxHeight_m3541930250_MetadataUsageId;
extern RuntimeClass* SetScaleCallback_t2997993506_il2cpp_TypeInfo_var;
extern RuntimeClass* SetTranslationCallback_t3765364063_il2cpp_TypeInfo_var;
extern RuntimeClass* SetOrientationCallback_t1136855763_il2cpp_TypeInfo_var;
extern RuntimeClass* SetColorCallback_t2629579893_il2cpp_TypeInfo_var;
extern const uint32_t SceneCallbacks_t4278023046_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t SceneCallbacks_t4278023046_com_FromNativeMethodDefinition_MetadataUsageId;
extern RuntimeClass* SceneCallbacks_t4278023046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MapGameObjectScene_SetScale_m2736247529_RuntimeMethod_var;
extern const RuntimeMethod* MapGameObjectScene_SetTranslation_m3673885618_RuntimeMethod_var;
extern const RuntimeMethod* MapGameObjectScene_SetOrientation_m3084922172_RuntimeMethod_var;
extern const RuntimeMethod* MapGameObjectScene_SetColor_m1877964419_RuntimeMethod_var;
extern const uint32_t SceneCallbacks_Create_m1432721627_MetadataUsageId;
extern RuntimeClass* APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3694551514;
extern const uint32_t APIKeyHelpers_CacheAPIKey_m3817519100_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t APIKeyHelpers_GetCachedAPIKey_m2319953939_MetadataUsageId;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1539706168;
extern const uint32_t APIKeyHelpers_AppearsValid_m169516127_MetadataUsageId;
extern const uint32_t APIKeyHelpers_readCachedKeyFromPlayerPref_m3379974318_MetadataUsageId;
extern const uint32_t APIKeyHelpers__cctor_m3097551089_MetadataUsageId;
extern RuntimeClass* DoubleVector3_t761704365_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t ECEFTransformUpdateStrategy_UpdateTransform_m1150651228_MetadataUsageId;
extern const uint32_t EnvironmentFlatteningApiInternal_SetIsFlattened_m476507073_MetadataUsageId;
extern const uint32_t EnvironmentFlatteningApiInternal_IsFlattened_m126605943_MetadataUsageId;
extern const uint32_t EnvironmentFlatteningApiInternal_GetCurrentScale_m61216325_MetadataUsageId;
extern RuntimeClass* List_1_t3734218024_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1945976614_RuntimeMethod_var;
extern const uint32_t GeographicApi__ctor_m373416225_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m146193980_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1927553120_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3272893753_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3870958928_RuntimeMethod_var;
extern const uint32_t GeographicApi_UpdateTransforms_m2429949150_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3045984222_RuntimeMethod_var;
extern const uint32_t GeographicApi_RegisterGeographicTransform_m61910415_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m47683195_RuntimeMethod_var;
extern const uint32_t GeographicApi_UnregisterGeographicTransform_m2308987172_MetadataUsageId;
extern RuntimeClass* Api_t1190036922_il2cpp_TypeInfo_var;
extern const uint32_t GeographicTransform_RegisterSelf_m2974456903_MetadataUsageId;
extern const uint32_t GeographicTransform_UnregisterSelf_m2339455917_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3423566724;
extern const uint32_t GeographicTransform_AddGeolocatedParent_m2822110356_MetadataUsageId;
extern const uint32_t GeographicTransform_RemoveGeolocatedParent_m2325833328_MetadataUsageId;
extern RuntimeClass* ITransformUpdateStrategy_t2466850383_il2cpp_TypeInfo_var;
extern const uint32_t GeographicTransform_UpdateTransform_m852920404_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* Positioner_t1752774946_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2843664123;
extern String_t* _stringLiteral3578039371;
extern const uint32_t Positioner__ctor_m1503101260_MetadataUsageId;
extern const uint32_t Positioner_InvalidateId_m316806239_MetadataUsageId;
extern const uint32_t Positioner__cctor_m943065637_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t641488277_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m368023328_RuntimeMethod_var;
extern const uint32_t PositionerApiInternal__ctor_m2618780664_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t3400306964_il2cpp_TypeInfo_var;
extern const uint32_t PositionerApiInternal_CreatePositioner_m3277400250_MetadataUsageId;
extern const uint32_t PositionerApiInternal_TryFetchECEFLocationForPositioner_m1328294574_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1930798642_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3383516221_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t PositionerApiInternal_NotifyPositionerProjectionsChanged_m2214404331_MetadataUsageId;
extern const uint32_t PositionerApiInternal_DestroyPositioner_m3264874376_MetadataUsageId;
extern const uint32_t PositionerApiInternal_SetPositionerLocation_m4021232775_MetadataUsageId;
extern const uint32_t PositionerApiInternal_SetPositionerElevation_m1420501201_MetadataUsageId;
extern const uint32_t PositionerApiInternal_SetPositionerElevationMode_m751369844_MetadataUsageId;
extern const uint32_t PositionerApiInternal_SetPositionerIndoorMap_m582027490_MetadataUsageId;
extern const RuntimeMethod* NativeInteropExtensions_NativeHandleToObject_TisPositionerApiInternal_t1500108320_m2783742380_RuntimeMethod_var;
extern const uint32_t PositionerApiInternal_OnPositionerUpdated_m4205083120_MetadataUsageId;
struct PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke;
struct PositionerCreateParamsInterop_t3667260723;;
struct PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke;;
extern const uint32_t PositionerProjectionChangedDelegate_BeginInvoke_m2536493793_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern const uint32_t PositionerOptions__ctor_m2616955568_MetadataUsageId;
extern const uint32_t SpacesApi_ScreenPointToRay_m2501436891_MetadataUsageId;
extern const uint32_t SpacesApi_LatLongToVerticallyDownRay_m3659442385_MetadataUsageId;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern const uint32_t UnityWorldSpaceCoordinateFrame_CreateQuaternionFromBasisVectors_m2317032641_MetadataUsageId;
extern const uint32_t UnityWorldSpaceCoordinateFrame_SetCentralPoint_m398641478_MetadataUsageId;
extern const uint32_t UnityWorldSpaceCoordinateFrame_ECEFToLocalSpace_m3518368515_MetadataUsageId;
extern const uint32_t UnityWorldSpaceCoordinateFrame_LocalSpaceToECEF_m2113838158_MetadataUsageId;
extern const uint32_t UnityWorldSpaceTransformUpdateStrategy_UpdateTransform_m3272805986_MetadataUsageId;
extern String_t* _stringLiteral2490343439;
extern const uint32_t GameObjectFactory_CreateGameObjectName_m779350472_MetadataUsageId;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t3523625662_m262607486_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173_RuntimeMethod_var;
extern String_t* _stringLiteral1540537748;
extern const uint32_t GameObjectFactory_CreateGameObject_m3026154899_MetadataUsageId;
extern RuntimeClass* GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var;
extern const uint32_t GameObjectFactory_CreateGameObjects_m3856069314_MetadataUsageId;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const uint32_t GameObjectFactory_CreateDoubleSidedCollisionMesh_m442641907_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2657171120_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2592226818_RuntimeMethod_var;
extern const uint32_t GameObjectRepository__ctor_m3567348473_MetadataUsageId;
extern RuntimeClass* GameObjectRecord_t2871914821_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_Add_m820329418_RuntimeMethod_var;
extern const uint32_t GameObjectRepository_Add_m985221079_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2896692998_RuntimeMethod_var;
extern const uint32_t GameObjectRepository_Contains_m502542647_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t3523625662_m3102725183_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var;
extern const uint32_t GameObjectRepository_DestroyGameObject_m1658238485_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1207034816_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m2695770459_RuntimeMethod_var;
extern const uint32_t GameObjectRepository_Remove_m1283273531_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m1239576671_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m3665573136_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3322199052_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2094685146_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4161287529_RuntimeMethod_var;
extern const uint32_t GameObjectRepository_UpdateTransforms_m334866038_MetadataUsageId;
extern const uint32_t GameObjectRepository_GetObjectRecord_m1518046775_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1891609748;
extern const uint32_t GameObjectRepository_TryGetGameObject_m1271184210_MetadataUsageId;
extern RuntimeClass* GameObjectRepository_t3760691595_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObjectFactory_t2478326784_il2cpp_TypeInfo_var;
extern const uint32_t GameObjectStreamer__ctor_m1631410861_MetadataUsageId;
extern const uint32_t GameObjectStreamer_Destroy_m2619727865_MetadataUsageId;
extern const uint32_t GameObjectStreamer_AddObjectsForMeshes_m3591439113_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshRenderer_t587009260_m4169215646_RuntimeMethod_var;
extern String_t* _stringLiteral3949742573;
extern const uint32_t GameObjectStreamer_SetColor_m1105866105_MetadataUsageId;
extern const uint32_t GameObjectStreamer_SetScale_m1914701548_MetadataUsageId;
struct CameraState_t2128520787_marshaled_pinvoke;
struct CameraState_t2128520787;;
struct CameraState_t2128520787_marshaled_pinvoke;;
extern RuntimeClass* CameraState_t2128520787_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4166659676;
extern const uint32_t StreamingUpdater_Update_m1030478889_MetadataUsageId;
extern const uint32_t StreamingUpdater_UpdateForBuiltInCamera_m3720861171_MetadataUsageId;
extern const uint32_t StreamingUpdater_UpdateScreenSize_m2400682235_MetadataUsageId;
extern String_t* _stringLiteral841412930;
extern String_t* _stringLiteral3437651385;
extern const uint32_t StreamingUpdater_IsValidStreamingCamera_m3603289713_MetadataUsageId;
extern RuntimeClass* AllocateTextureBufferCallback_t109657048_il2cpp_TypeInfo_var;
extern RuntimeClass* BeginUploadTextureBufferCallback_t3016670851_il2cpp_TypeInfo_var;
extern RuntimeClass* OnTextureReceivedCallback_t1016964503_il2cpp_TypeInfo_var;
extern RuntimeClass* ReleaseTextureCallback_t388032167_il2cpp_TypeInfo_var;
extern RuntimeClass* CreateCubemapFromFacesCallback_t2834185402_il2cpp_TypeInfo_var;
extern const uint32_t TextureCallbacks_t2889231718_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t TextureCallbacks_t2889231718_com_FromNativeMethodDefinition_MetadataUsageId;
extern RuntimeClass* TextureCallbacks_t2889231718_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TextureLoadHandler_AllocateTextureBuffer_m1386010403_RuntimeMethod_var;
extern const RuntimeMethod* TextureLoadHandler_BeginUploadTextureBuffer_m1857616132_RuntimeMethod_var;
extern const RuntimeMethod* IndoorMapTextureStreamingService_OnTextureReceived_m691274669_RuntimeMethod_var;
extern const RuntimeMethod* TextureLoadHandler_ReleaseTexture_m3904019126_RuntimeMethod_var;
extern const RuntimeMethod* TextureLoadHandler_CreateCubemapFromFaces_m4182605382_RuntimeMethod_var;
extern const uint32_t TextureCallbacks_Create_m3926649034_MetadataUsageId;
extern RuntimeClass* CreateThreadDelegate_t2573395908_il2cpp_TypeInfo_var;
extern RuntimeClass* JoinThreadDelegate_t1262337526_il2cpp_TypeInfo_var;
extern const uint32_t ThreadServiceCallbacks_t3456159097_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t ThreadServiceCallbacks_t3456159097_com_FromNativeMethodDefinition_MetadataUsageId;
extern RuntimeClass* ThreadServiceCallbacks_t3456159097_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ThreadService_CreateThread_m3570449930_RuntimeMethod_var;
extern const RuntimeMethod* ThreadService_JoinThread_m1805523832_RuntimeMethod_var;
extern const uint32_t ThreadServiceCallbacks_Create_m1486201568_MetadataUsageId;
extern String_t* _stringLiteral2177073374;
extern const uint32_t WrldMap__ctor_m2151610663_MetadataUsageId;
extern const uint32_t WrldMap_OnEnable_m1239584823_MetadataUsageId;
extern const uint32_t WrldMap_GetApiKey_m3036891609_MetadataUsageId;
extern RuntimeClass* InvalidApiKeyException_t175683051_il2cpp_TypeInfo_var;
extern const uint32_t WrldMap_SetupApi_m3608385571_MetadataUsageId;
extern const uint32_t WrldMap_Update_m3803674609_MetadataUsageId;

struct GameObjectU5BU5D_t3328599146;
struct MeshU5BU5D_t3972987605;
struct Int32U5BU5D_t385246372;
struct Vector3U5BU5D_t1718750761;
struct ObjectU5BU5D_t2843939325;
struct MeshRendererU5BU5D_t2132764133;
struct UInt32U5BU5D_t2770800703;


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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
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
#ifndef DICTIONARY_2_T641488277_H
#define DICTIONARY_2_T641488277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>
struct  Dictionary_2_t641488277  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	PositionerU5BU5D_t2567922711* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___valueSlots_7)); }
	inline PositionerU5BU5D_t2567922711* get_valueSlots_7() const { return ___valueSlots_7; }
	inline PositionerU5BU5D_t2567922711** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(PositionerU5BU5D_t2567922711* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t641488277_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2172261555 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t641488277_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2172261555 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2172261555 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2172261555 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T641488277_H
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
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef KEYCOLLECTION_T1876814484_H
#define KEYCOLLECTION_T1876814484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.UI.Text>
struct  KeyCollection_t1876814484  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t1687139013 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t1876814484, ___dictionary_0)); }
	inline Dictionary_2_t1687139013 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1687139013 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1687139013 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T1876814484_H
#ifndef LIST_1_T3734218024_H
#define LIST_1_T3734218024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Wrld.Space.GeographicTransform>
struct  List_1_t3734218024  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GeographicTransformU5BU5D_t3244874183* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3734218024, ____items_1)); }
	inline GeographicTransformU5BU5D_t3244874183* get__items_1() const { return ____items_1; }
	inline GeographicTransformU5BU5D_t3244874183** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GeographicTransformU5BU5D_t3244874183* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3734218024, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3734218024, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3734218024_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GeographicTransformU5BU5D_t3244874183* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3734218024_StaticFields, ___EmptyArray_4)); }
	inline GeographicTransformU5BU5D_t3244874183* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GeographicTransformU5BU5D_t3244874183** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GeographicTransformU5BU5D_t3244874183* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3734218024_H
#ifndef TERRAINHEIGHTPROVIDER_T517848921_H
#define TERRAINHEIGHTPROVIDER_T517848921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Resources.Terrain.Heights.TerrainHeightProvider
struct  TerrainHeightProvider_t517848921  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINHEIGHTPROVIDER_T517848921_H
#ifndef GEOGRAPHICAPI_T2934948604_H
#define GEOGRAPHICAPI_T2934948604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.GeographicApi
struct  GeographicApi_t2934948604  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Wrld.Space.GeographicTransform> Wrld.Space.GeographicApi::m_geographicTransforms
	List_1_t3734218024 * ___m_geographicTransforms_0;

public:
	inline static int32_t get_offset_of_m_geographicTransforms_0() { return static_cast<int32_t>(offsetof(GeographicApi_t2934948604, ___m_geographicTransforms_0)); }
	inline List_1_t3734218024 * get_m_geographicTransforms_0() const { return ___m_geographicTransforms_0; }
	inline List_1_t3734218024 ** get_address_of_m_geographicTransforms_0() { return &___m_geographicTransforms_0; }
	inline void set_m_geographicTransforms_0(List_1_t3734218024 * value)
	{
		___m_geographicTransforms_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_geographicTransforms_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GEOGRAPHICAPI_T2934948604_H
#ifndef ENVIRONMENTFLATTENINGAPIINTERNAL_T833742330_H
#define ENVIRONMENTFLATTENINGAPIINTERNAL_T833742330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal
struct  EnvironmentFlatteningApiInternal_t833742330  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTFLATTENINGAPIINTERNAL_T833742330_H
#ifndef ENVIRONMENTFLATTENINGAPI_T3419959241_H
#define ENVIRONMENTFLATTENINGAPI_T3419959241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApi
struct  EnvironmentFlatteningApi_t3419959241  : public RuntimeObject
{
public:
	// Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApi::m_apiInternal
	EnvironmentFlatteningApiInternal_t833742330 * ___m_apiInternal_0;

public:
	inline static int32_t get_offset_of_m_apiInternal_0() { return static_cast<int32_t>(offsetof(EnvironmentFlatteningApi_t3419959241, ___m_apiInternal_0)); }
	inline EnvironmentFlatteningApiInternal_t833742330 * get_m_apiInternal_0() const { return ___m_apiInternal_0; }
	inline EnvironmentFlatteningApiInternal_t833742330 ** get_address_of_m_apiInternal_0() { return &___m_apiInternal_0; }
	inline void set_m_apiInternal_0(EnvironmentFlatteningApiInternal_t833742330 * value)
	{
		___m_apiInternal_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_apiInternal_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTFLATTENINGAPI_T3419959241_H
#ifndef EARTHCONSTANTS_T444733090_H
#define EARTHCONSTANTS_T444733090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.EarthConstants
struct  EarthConstants_t444733090  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EARTHCONSTANTS_T444733090_H
#ifndef COORDINATECONVERSIONS_T2160508553_H
#define COORDINATECONVERSIONS_T2160508553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.CoordinateConversions
struct  CoordinateConversions_t2160508553  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATECONVERSIONS_T2160508553_H
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
#ifndef MATERIALREPOSITORY_T701520604_H
#define MATERIALREPOSITORY_T701520604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Materials.MaterialRepository
struct  MaterialRepository_t701520604  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.Material> Wrld.Materials.MaterialRepository::m_materialsRequiringTexture
	HashSet_1_t3200291893 * ___m_materialsRequiringTexture_0;
	// System.Collections.Generic.Dictionary`2<System.String,Wrld.Materials.MaterialRepository/MaterialRecord> Wrld.Materials.MaterialRepository::m_materials
	Dictionary_2_t2238724610 * ___m_materials_1;
	// UnityEngine.Material Wrld.Materials.MaterialRepository::m_defaultMaterial
	Material_t340375123 * ___m_defaultMaterial_2;
	// UnityEngine.Material Wrld.Materials.MaterialRepository::m_defaultRasterTerrainMaterial
	Material_t340375123 * ___m_defaultRasterTerrainMaterial_3;
	// UnityEngine.Material Wrld.Materials.MaterialRepository::m_defaultInteriorMaterial
	Material_t340375123 * ___m_defaultInteriorMaterial_4;
	// Wrld.Materials.TextureLoadHandler Wrld.Materials.MaterialRepository::m_textureLoadHandler
	TextureLoadHandler_t2080734353 * ___m_textureLoadHandler_5;
	// System.String Wrld.Materials.MaterialRepository::m_materialDirectory
	String_t* ___m_materialDirectory_6;

public:
	inline static int32_t get_offset_of_m_materialsRequiringTexture_0() { return static_cast<int32_t>(offsetof(MaterialRepository_t701520604, ___m_materialsRequiringTexture_0)); }
	inline HashSet_1_t3200291893 * get_m_materialsRequiringTexture_0() const { return ___m_materialsRequiringTexture_0; }
	inline HashSet_1_t3200291893 ** get_address_of_m_materialsRequiringTexture_0() { return &___m_materialsRequiringTexture_0; }
	inline void set_m_materialsRequiringTexture_0(HashSet_1_t3200291893 * value)
	{
		___m_materialsRequiringTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialsRequiringTexture_0), value);
	}

	inline static int32_t get_offset_of_m_materials_1() { return static_cast<int32_t>(offsetof(MaterialRepository_t701520604, ___m_materials_1)); }
	inline Dictionary_2_t2238724610 * get_m_materials_1() const { return ___m_materials_1; }
	inline Dictionary_2_t2238724610 ** get_address_of_m_materials_1() { return &___m_materials_1; }
	inline void set_m_materials_1(Dictionary_2_t2238724610 * value)
	{
		___m_materials_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_materials_1), value);
	}

	inline static int32_t get_offset_of_m_defaultMaterial_2() { return static_cast<int32_t>(offsetof(MaterialRepository_t701520604, ___m_defaultMaterial_2)); }
	inline Material_t340375123 * get_m_defaultMaterial_2() const { return ___m_defaultMaterial_2; }
	inline Material_t340375123 ** get_address_of_m_defaultMaterial_2() { return &___m_defaultMaterial_2; }
	inline void set_m_defaultMaterial_2(Material_t340375123 * value)
	{
		___m_defaultMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultMaterial_2), value);
	}

	inline static int32_t get_offset_of_m_defaultRasterTerrainMaterial_3() { return static_cast<int32_t>(offsetof(MaterialRepository_t701520604, ___m_defaultRasterTerrainMaterial_3)); }
	inline Material_t340375123 * get_m_defaultRasterTerrainMaterial_3() const { return ___m_defaultRasterTerrainMaterial_3; }
	inline Material_t340375123 ** get_address_of_m_defaultRasterTerrainMaterial_3() { return &___m_defaultRasterTerrainMaterial_3; }
	inline void set_m_defaultRasterTerrainMaterial_3(Material_t340375123 * value)
	{
		___m_defaultRasterTerrainMaterial_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultRasterTerrainMaterial_3), value);
	}

	inline static int32_t get_offset_of_m_defaultInteriorMaterial_4() { return static_cast<int32_t>(offsetof(MaterialRepository_t701520604, ___m_defaultInteriorMaterial_4)); }
	inline Material_t340375123 * get_m_defaultInteriorMaterial_4() const { return ___m_defaultInteriorMaterial_4; }
	inline Material_t340375123 ** get_address_of_m_defaultInteriorMaterial_4() { return &___m_defaultInteriorMaterial_4; }
	inline void set_m_defaultInteriorMaterial_4(Material_t340375123 * value)
	{
		___m_defaultInteriorMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultInteriorMaterial_4), value);
	}

	inline static int32_t get_offset_of_m_textureLoadHandler_5() { return static_cast<int32_t>(offsetof(MaterialRepository_t701520604, ___m_textureLoadHandler_5)); }
	inline TextureLoadHandler_t2080734353 * get_m_textureLoadHandler_5() const { return ___m_textureLoadHandler_5; }
	inline TextureLoadHandler_t2080734353 ** get_address_of_m_textureLoadHandler_5() { return &___m_textureLoadHandler_5; }
	inline void set_m_textureLoadHandler_5(TextureLoadHandler_t2080734353 * value)
	{
		___m_textureLoadHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureLoadHandler_5), value);
	}

	inline static int32_t get_offset_of_m_materialDirectory_6() { return static_cast<int32_t>(offsetof(MaterialRepository_t701520604, ___m_materialDirectory_6)); }
	inline String_t* get_m_materialDirectory_6() const { return ___m_materialDirectory_6; }
	inline String_t** get_address_of_m_materialDirectory_6() { return &___m_materialDirectory_6; }
	inline void set_m_materialDirectory_6(String_t* value)
	{
		___m_materialDirectory_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialDirectory_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALREPOSITORY_T701520604_H
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
#ifndef VALUECOLLECTION_T78248142_H
#define VALUECOLLECTION_T78248142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Wrld.Streaming.GameObjectRecord>
struct  ValueCollection_t78248142  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2657171120 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t78248142, ___dictionary_0)); }
	inline Dictionary_2_t2657171120 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2657171120 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2657171120 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T78248142_H
#ifndef STREAMEDTEXTUREREQUEST_T1934737979_H
#define STREAMEDTEXTUREREQUEST_T1934737979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Resources.IndoorMaps.StreamedTextureRequest
struct  StreamedTextureRequest_t1934737979  : public RuntimeObject
{
public:
	// Wrld.Resources.IndoorMaps.IIndoorMapMaterial Wrld.Resources.IndoorMaps.StreamedTextureRequest::<Material>k__BackingField
	RuntimeObject* ___U3CMaterialU3Ek__BackingField_0;
	// System.String Wrld.Resources.IndoorMaps.StreamedTextureRequest::<TextureKey>k__BackingField
	String_t* ___U3CTextureKeyU3Ek__BackingField_1;
	// Wrld.Resources.IndoorMaps.IIndoorMapStreamedTextureObserver Wrld.Resources.IndoorMaps.StreamedTextureRequest::<Observer>k__BackingField
	RuntimeObject* ___U3CObserverU3Ek__BackingField_2;
	// Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService Wrld.Resources.IndoorMaps.StreamedTextureRequest::<Originator>k__BackingField
	IndoorMapTextureStreamingService_t4078817394 * ___U3COriginatorU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMaterialU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StreamedTextureRequest_t1934737979, ___U3CMaterialU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CMaterialU3Ek__BackingField_0() const { return ___U3CMaterialU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CMaterialU3Ek__BackingField_0() { return &___U3CMaterialU3Ek__BackingField_0; }
	inline void set_U3CMaterialU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CMaterialU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMaterialU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTextureKeyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StreamedTextureRequest_t1934737979, ___U3CTextureKeyU3Ek__BackingField_1)); }
	inline String_t* get_U3CTextureKeyU3Ek__BackingField_1() const { return ___U3CTextureKeyU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTextureKeyU3Ek__BackingField_1() { return &___U3CTextureKeyU3Ek__BackingField_1; }
	inline void set_U3CTextureKeyU3Ek__BackingField_1(String_t* value)
	{
		___U3CTextureKeyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextureKeyU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CObserverU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StreamedTextureRequest_t1934737979, ___U3CObserverU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CObserverU3Ek__BackingField_2() const { return ___U3CObserverU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CObserverU3Ek__BackingField_2() { return &___U3CObserverU3Ek__BackingField_2; }
	inline void set_U3CObserverU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CObserverU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObserverU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COriginatorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(StreamedTextureRequest_t1934737979, ___U3COriginatorU3Ek__BackingField_3)); }
	inline IndoorMapTextureStreamingService_t4078817394 * get_U3COriginatorU3Ek__BackingField_3() const { return ___U3COriginatorU3Ek__BackingField_3; }
	inline IndoorMapTextureStreamingService_t4078817394 ** get_address_of_U3COriginatorU3Ek__BackingField_3() { return &___U3COriginatorU3Ek__BackingField_3; }
	inline void set_U3COriginatorU3Ek__BackingField_3(IndoorMapTextureStreamingService_t4078817394 * value)
	{
		___U3COriginatorU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COriginatorU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMEDTEXTUREREQUEST_T1934737979_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef INDOORMAPTEXTURESTREAMINGSERVICE_T4078817394_H
#define INDOORMAPTEXTURESTREAMINGSERVICE_T4078817394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService
struct  IndoorMapTextureStreamingService_t4078817394  : public RuntimeObject
{
public:
	// Wrld.Materials.TextureLoadHandler Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService::m_textureLoadHandler
	TextureLoadHandler_t2080734353 * ___m_textureLoadHandler_0;
	// Wrld.Resources.IndoorMaps.IIndoorMapStreamedTextureObserver Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService::m_textureObserver
	RuntimeObject* ___m_textureObserver_1;

public:
	inline static int32_t get_offset_of_m_textureLoadHandler_0() { return static_cast<int32_t>(offsetof(IndoorMapTextureStreamingService_t4078817394, ___m_textureLoadHandler_0)); }
	inline TextureLoadHandler_t2080734353 * get_m_textureLoadHandler_0() const { return ___m_textureLoadHandler_0; }
	inline TextureLoadHandler_t2080734353 ** get_address_of_m_textureLoadHandler_0() { return &___m_textureLoadHandler_0; }
	inline void set_m_textureLoadHandler_0(TextureLoadHandler_t2080734353 * value)
	{
		___m_textureLoadHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureLoadHandler_0), value);
	}

	inline static int32_t get_offset_of_m_textureObserver_1() { return static_cast<int32_t>(offsetof(IndoorMapTextureStreamingService_t4078817394, ___m_textureObserver_1)); }
	inline RuntimeObject* get_m_textureObserver_1() const { return ___m_textureObserver_1; }
	inline RuntimeObject** get_address_of_m_textureObserver_1() { return &___m_textureObserver_1; }
	inline void set_m_textureObserver_1(RuntimeObject* value)
	{
		___m_textureObserver_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureObserver_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDOORMAPTEXTURESTREAMINGSERVICE_T4078817394_H
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
#ifndef CAMERAAPI_T3006904385_H
#define CAMERAAPI_T3006904385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapCamera.CameraApi
struct  CameraApi_t3006904385  : public RuntimeObject
{
public:
	// Wrld.MapCamera.CameraApi/TransitionStartHandler Wrld.MapCamera.CameraApi::OnTransitionStart
	TransitionStartHandler_t1803894657 * ___OnTransitionStart_1;
	// Wrld.MapCamera.CameraApi/TransitionEndHandler Wrld.MapCamera.CameraApi::OnTransitionEnd
	TransitionEndHandler_t4082272293 * ___OnTransitionEnd_2;
	// System.Boolean Wrld.MapCamera.CameraApi::<IsTransitioning>k__BackingField
	bool ___U3CIsTransitioningU3Ek__BackingField_3;
	// UnityEngine.Camera Wrld.MapCamera.CameraApi::m_controlledCamera
	Camera_t4157153871 * ___m_controlledCamera_4;
	// Wrld.ApiImplementation Wrld.MapCamera.CameraApi::m_apiImplementation
	ApiImplementation_t1854519848 * ___m_apiImplementation_5;
	// Wrld.MapCamera.CameraInputHandler Wrld.MapCamera.CameraApi::m_inputHandler
	CameraInputHandler_t3237370388 * ___m_inputHandler_6;
	// Wrld.MapCamera.CameraApiInternal Wrld.MapCamera.CameraApi::m_cameraApiInternal
	CameraApiInternal_t846667071 * ___m_cameraApiInternal_7;

public:
	inline static int32_t get_offset_of_OnTransitionStart_1() { return static_cast<int32_t>(offsetof(CameraApi_t3006904385, ___OnTransitionStart_1)); }
	inline TransitionStartHandler_t1803894657 * get_OnTransitionStart_1() const { return ___OnTransitionStart_1; }
	inline TransitionStartHandler_t1803894657 ** get_address_of_OnTransitionStart_1() { return &___OnTransitionStart_1; }
	inline void set_OnTransitionStart_1(TransitionStartHandler_t1803894657 * value)
	{
		___OnTransitionStart_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnTransitionStart_1), value);
	}

	inline static int32_t get_offset_of_OnTransitionEnd_2() { return static_cast<int32_t>(offsetof(CameraApi_t3006904385, ___OnTransitionEnd_2)); }
	inline TransitionEndHandler_t4082272293 * get_OnTransitionEnd_2() const { return ___OnTransitionEnd_2; }
	inline TransitionEndHandler_t4082272293 ** get_address_of_OnTransitionEnd_2() { return &___OnTransitionEnd_2; }
	inline void set_OnTransitionEnd_2(TransitionEndHandler_t4082272293 * value)
	{
		___OnTransitionEnd_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnTransitionEnd_2), value);
	}

	inline static int32_t get_offset_of_U3CIsTransitioningU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CameraApi_t3006904385, ___U3CIsTransitioningU3Ek__BackingField_3)); }
	inline bool get_U3CIsTransitioningU3Ek__BackingField_3() const { return ___U3CIsTransitioningU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsTransitioningU3Ek__BackingField_3() { return &___U3CIsTransitioningU3Ek__BackingField_3; }
	inline void set_U3CIsTransitioningU3Ek__BackingField_3(bool value)
	{
		___U3CIsTransitioningU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_controlledCamera_4() { return static_cast<int32_t>(offsetof(CameraApi_t3006904385, ___m_controlledCamera_4)); }
	inline Camera_t4157153871 * get_m_controlledCamera_4() const { return ___m_controlledCamera_4; }
	inline Camera_t4157153871 ** get_address_of_m_controlledCamera_4() { return &___m_controlledCamera_4; }
	inline void set_m_controlledCamera_4(Camera_t4157153871 * value)
	{
		___m_controlledCamera_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_controlledCamera_4), value);
	}

	inline static int32_t get_offset_of_m_apiImplementation_5() { return static_cast<int32_t>(offsetof(CameraApi_t3006904385, ___m_apiImplementation_5)); }
	inline ApiImplementation_t1854519848 * get_m_apiImplementation_5() const { return ___m_apiImplementation_5; }
	inline ApiImplementation_t1854519848 ** get_address_of_m_apiImplementation_5() { return &___m_apiImplementation_5; }
	inline void set_m_apiImplementation_5(ApiImplementation_t1854519848 * value)
	{
		___m_apiImplementation_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_apiImplementation_5), value);
	}

	inline static int32_t get_offset_of_m_inputHandler_6() { return static_cast<int32_t>(offsetof(CameraApi_t3006904385, ___m_inputHandler_6)); }
	inline CameraInputHandler_t3237370388 * get_m_inputHandler_6() const { return ___m_inputHandler_6; }
	inline CameraInputHandler_t3237370388 ** get_address_of_m_inputHandler_6() { return &___m_inputHandler_6; }
	inline void set_m_inputHandler_6(CameraInputHandler_t3237370388 * value)
	{
		___m_inputHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_inputHandler_6), value);
	}

	inline static int32_t get_offset_of_m_cameraApiInternal_7() { return static_cast<int32_t>(offsetof(CameraApi_t3006904385, ___m_cameraApiInternal_7)); }
	inline CameraApiInternal_t846667071 * get_m_cameraApiInternal_7() const { return ___m_cameraApiInternal_7; }
	inline CameraApiInternal_t846667071 ** get_address_of_m_cameraApiInternal_7() { return &___m_cameraApiInternal_7; }
	inline void set_m_cameraApiInternal_7(CameraApiInternal_t846667071 * value)
	{
		___m_cameraApiInternal_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_cameraApiInternal_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAAPI_T3006904385_H
#ifndef DICTIONARY_2_T2657171120_H
#define DICTIONARY_2_T2657171120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>
struct  Dictionary_2_t2657171120  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	GameObjectRecordU5BU5D_t2891780104* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___valueSlots_7)); }
	inline GameObjectRecordU5BU5D_t2891780104* get_valueSlots_7() const { return ___valueSlots_7; }
	inline GameObjectRecordU5BU5D_t2891780104** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(GameObjectRecordU5BU5D_t2891780104* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2657171120_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1742191820 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2657171120_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1742191820 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1742191820 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1742191820 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2657171120_H
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
#ifndef DICTIONARY_2_T1687139013_H
#define DICTIONARY_2_T1687139013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text>
struct  Dictionary_2_t1687139013  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TextU5BU5D_t422084607* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___valueSlots_7)); }
	inline TextU5BU5D_t422084607* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TextU5BU5D_t422084607** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TextU5BU5D_t422084607* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1687139013_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3567463619 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1687139013_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3567463619 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3567463619 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3567463619 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1687139013_H
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
#ifndef LATLONGINTEROP_T1185496937_H
#define LATLONGINTEROP_T1185496937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Interop.LatLongInterop
struct  LatLongInterop_t1185496937 
{
public:
	// System.Double Wrld.Interop.LatLongInterop::LatitudeDegrees
	double ___LatitudeDegrees_0;
	// System.Double Wrld.Interop.LatLongInterop::LongitudeDegrees
	double ___LongitudeDegrees_1;

public:
	inline static int32_t get_offset_of_LatitudeDegrees_0() { return static_cast<int32_t>(offsetof(LatLongInterop_t1185496937, ___LatitudeDegrees_0)); }
	inline double get_LatitudeDegrees_0() const { return ___LatitudeDegrees_0; }
	inline double* get_address_of_LatitudeDegrees_0() { return &___LatitudeDegrees_0; }
	inline void set_LatitudeDegrees_0(double value)
	{
		___LatitudeDegrees_0 = value;
	}

	inline static int32_t get_offset_of_LongitudeDegrees_1() { return static_cast<int32_t>(offsetof(LatLongInterop_t1185496937, ___LongitudeDegrees_1)); }
	inline double get_LongitudeDegrees_1() const { return ___LongitudeDegrees_1; }
	inline double* get_address_of_LongitudeDegrees_1() { return &___LongitudeDegrees_1; }
	inline void set_LongitudeDegrees_1(double value)
	{
		___LongitudeDegrees_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATLONGINTEROP_T1185496937_H
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
#ifndef NATIVECONFIG_T18506486_H
#define NATIVECONFIG_T18506486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.ConfigParams/NativeConfig
struct  NativeConfig_t18506486 
{
public:
	// System.Double Wrld.ConfigParams/NativeConfig::m_latitudeDegrees
	double ___m_latitudeDegrees_0;
	// System.Double Wrld.ConfigParams/NativeConfig::m_longitudeDegrees
	double ___m_longitudeDegrees_1;
	// System.Double Wrld.ConfigParams/NativeConfig::m_distanceToInterest
	double ___m_distanceToInterest_2;
	// System.Double Wrld.ConfigParams/NativeConfig::m_headingDegrees
	double ___m_headingDegrees_3;
	// System.Boolean Wrld.ConfigParams/NativeConfig::m_streamingLodBasedOnDistance
	bool ___m_streamingLodBasedOnDistance_4;
	// System.Double Wrld.ConfigParams/NativeConfig::m_viewportWidth
	double ___m_viewportWidth_5;
	// System.Double Wrld.ConfigParams/NativeConfig::m_viewportHeight
	double ___m_viewportHeight_6;
	// System.Boolean Wrld.ConfigParams/NativeConfig::m_enableLabels
	bool ___m_enableLabels_7;

public:
	inline static int32_t get_offset_of_m_latitudeDegrees_0() { return static_cast<int32_t>(offsetof(NativeConfig_t18506486, ___m_latitudeDegrees_0)); }
	inline double get_m_latitudeDegrees_0() const { return ___m_latitudeDegrees_0; }
	inline double* get_address_of_m_latitudeDegrees_0() { return &___m_latitudeDegrees_0; }
	inline void set_m_latitudeDegrees_0(double value)
	{
		___m_latitudeDegrees_0 = value;
	}

	inline static int32_t get_offset_of_m_longitudeDegrees_1() { return static_cast<int32_t>(offsetof(NativeConfig_t18506486, ___m_longitudeDegrees_1)); }
	inline double get_m_longitudeDegrees_1() const { return ___m_longitudeDegrees_1; }
	inline double* get_address_of_m_longitudeDegrees_1() { return &___m_longitudeDegrees_1; }
	inline void set_m_longitudeDegrees_1(double value)
	{
		___m_longitudeDegrees_1 = value;
	}

	inline static int32_t get_offset_of_m_distanceToInterest_2() { return static_cast<int32_t>(offsetof(NativeConfig_t18506486, ___m_distanceToInterest_2)); }
	inline double get_m_distanceToInterest_2() const { return ___m_distanceToInterest_2; }
	inline double* get_address_of_m_distanceToInterest_2() { return &___m_distanceToInterest_2; }
	inline void set_m_distanceToInterest_2(double value)
	{
		___m_distanceToInterest_2 = value;
	}

	inline static int32_t get_offset_of_m_headingDegrees_3() { return static_cast<int32_t>(offsetof(NativeConfig_t18506486, ___m_headingDegrees_3)); }
	inline double get_m_headingDegrees_3() const { return ___m_headingDegrees_3; }
	inline double* get_address_of_m_headingDegrees_3() { return &___m_headingDegrees_3; }
	inline void set_m_headingDegrees_3(double value)
	{
		___m_headingDegrees_3 = value;
	}

	inline static int32_t get_offset_of_m_streamingLodBasedOnDistance_4() { return static_cast<int32_t>(offsetof(NativeConfig_t18506486, ___m_streamingLodBasedOnDistance_4)); }
	inline bool get_m_streamingLodBasedOnDistance_4() const { return ___m_streamingLodBasedOnDistance_4; }
	inline bool* get_address_of_m_streamingLodBasedOnDistance_4() { return &___m_streamingLodBasedOnDistance_4; }
	inline void set_m_streamingLodBasedOnDistance_4(bool value)
	{
		___m_streamingLodBasedOnDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_viewportWidth_5() { return static_cast<int32_t>(offsetof(NativeConfig_t18506486, ___m_viewportWidth_5)); }
	inline double get_m_viewportWidth_5() const { return ___m_viewportWidth_5; }
	inline double* get_address_of_m_viewportWidth_5() { return &___m_viewportWidth_5; }
	inline void set_m_viewportWidth_5(double value)
	{
		___m_viewportWidth_5 = value;
	}

	inline static int32_t get_offset_of_m_viewportHeight_6() { return static_cast<int32_t>(offsetof(NativeConfig_t18506486, ___m_viewportHeight_6)); }
	inline double get_m_viewportHeight_6() const { return ___m_viewportHeight_6; }
	inline double* get_address_of_m_viewportHeight_6() { return &___m_viewportHeight_6; }
	inline void set_m_viewportHeight_6(double value)
	{
		___m_viewportHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_enableLabels_7() { return static_cast<int32_t>(offsetof(NativeConfig_t18506486, ___m_enableLabels_7)); }
	inline bool get_m_enableLabels_7() const { return ___m_enableLabels_7; }
	inline bool* get_address_of_m_enableLabels_7() { return &___m_enableLabels_7; }
	inline void set_m_enableLabels_7(bool value)
	{
		___m_enableLabels_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Wrld.ConfigParams/NativeConfig
struct NativeConfig_t18506486_marshaled_pinvoke
{
	double ___m_latitudeDegrees_0;
	double ___m_longitudeDegrees_1;
	double ___m_distanceToInterest_2;
	double ___m_headingDegrees_3;
	int32_t ___m_streamingLodBasedOnDistance_4;
	double ___m_viewportWidth_5;
	double ___m_viewportHeight_6;
	int32_t ___m_enableLabels_7;
};
// Native definition for COM marshalling of Wrld.ConfigParams/NativeConfig
struct NativeConfig_t18506486_marshaled_com
{
	double ___m_latitudeDegrees_0;
	double ___m_longitudeDegrees_1;
	double ___m_distanceToInterest_2;
	double ___m_headingDegrees_3;
	int32_t ___m_streamingLodBasedOnDistance_4;
	double ___m_viewportWidth_5;
	double ___m_viewportHeight_6;
	int32_t ___m_enableLabels_7;
};
#endif // NATIVECONFIG_T18506486_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef ENUMERATOR_T1328494605_H
#define ENUMERATOR_T1328494605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Wrld.Space.GeographicTransform>
struct  Enumerator_t1328494605 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3734218024 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GeographicTransform_t2262143282 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1328494605, ___l_0)); }
	inline List_1_t3734218024 * get_l_0() const { return ___l_0; }
	inline List_1_t3734218024 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3734218024 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1328494605, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1328494605, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1328494605, ___current_3)); }
	inline GeographicTransform_t2262143282 * get_current_3() const { return ___current_3; }
	inline GeographicTransform_t2262143282 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GeographicTransform_t2262143282 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1328494605_H
#ifndef LATLONG_T2936018554_H
#define LATLONG_T2936018554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.LatLong
struct  LatLong_t2936018554 
{
public:
	// System.Double Wrld.Space.LatLong::m_latitudeInDegrees
	double ___m_latitudeInDegrees_0;
	// System.Double Wrld.Space.LatLong::m_longitudeInDegrees
	double ___m_longitudeInDegrees_1;

public:
	inline static int32_t get_offset_of_m_latitudeInDegrees_0() { return static_cast<int32_t>(offsetof(LatLong_t2936018554, ___m_latitudeInDegrees_0)); }
	inline double get_m_latitudeInDegrees_0() const { return ___m_latitudeInDegrees_0; }
	inline double* get_address_of_m_latitudeInDegrees_0() { return &___m_latitudeInDegrees_0; }
	inline void set_m_latitudeInDegrees_0(double value)
	{
		___m_latitudeInDegrees_0 = value;
	}

	inline static int32_t get_offset_of_m_longitudeInDegrees_1() { return static_cast<int32_t>(offsetof(LatLong_t2936018554, ___m_longitudeInDegrees_1)); }
	inline double get_m_longitudeInDegrees_1() const { return ___m_longitudeInDegrees_1; }
	inline double* get_address_of_m_longitudeInDegrees_1() { return &___m_longitudeInDegrees_1; }
	inline void set_m_longitudeInDegrees_1(double value)
	{
		___m_longitudeInDegrees_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATLONG_T2936018554_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef KEYVALUEPAIR_2_T759875991_H
#define KEYVALUEPAIR_2_T759875991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,Wrld.Streaming.GameObjectRecord>
struct  KeyValuePair_2_t759875991 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObjectRecord_t2871914821 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t759875991, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t759875991, ___value_1)); }
	inline GameObjectRecord_t2871914821 * get_value_1() const { return ___value_1; }
	inline GameObjectRecord_t2871914821 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GameObjectRecord_t2871914821 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T759875991_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef COLLISIONCONFIG_T3653208188_H
#define COLLISIONCONFIG_T3653208188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.ConfigParams/CollisionConfig
struct  CollisionConfig_t3653208188 
{
public:
	union
	{
		struct
		{
			// System.Boolean Wrld.ConfigParams/CollisionConfig::<TerrainCollision>k__BackingField
			bool ___U3CTerrainCollisionU3Ek__BackingField_0;
			// System.Boolean Wrld.ConfigParams/CollisionConfig::<RoadCollision>k__BackingField
			bool ___U3CRoadCollisionU3Ek__BackingField_1;
			// System.Boolean Wrld.ConfigParams/CollisionConfig::<BuildingCollision>k__BackingField
			bool ___U3CBuildingCollisionU3Ek__BackingField_2;
		};
		uint8_t CollisionConfig_t3653208188__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CTerrainCollisionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CollisionConfig_t3653208188, ___U3CTerrainCollisionU3Ek__BackingField_0)); }
	inline bool get_U3CTerrainCollisionU3Ek__BackingField_0() const { return ___U3CTerrainCollisionU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTerrainCollisionU3Ek__BackingField_0() { return &___U3CTerrainCollisionU3Ek__BackingField_0; }
	inline void set_U3CTerrainCollisionU3Ek__BackingField_0(bool value)
	{
		___U3CTerrainCollisionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRoadCollisionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CollisionConfig_t3653208188, ___U3CRoadCollisionU3Ek__BackingField_1)); }
	inline bool get_U3CRoadCollisionU3Ek__BackingField_1() const { return ___U3CRoadCollisionU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CRoadCollisionU3Ek__BackingField_1() { return &___U3CRoadCollisionU3Ek__BackingField_1; }
	inline void set_U3CRoadCollisionU3Ek__BackingField_1(bool value)
	{
		___U3CRoadCollisionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBuildingCollisionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CollisionConfig_t3653208188, ___U3CBuildingCollisionU3Ek__BackingField_2)); }
	inline bool get_U3CBuildingCollisionU3Ek__BackingField_2() const { return ___U3CBuildingCollisionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CBuildingCollisionU3Ek__BackingField_2() { return &___U3CBuildingCollisionU3Ek__BackingField_2; }
	inline void set_U3CBuildingCollisionU3Ek__BackingField_2(bool value)
	{
		___U3CBuildingCollisionU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Wrld.ConfigParams/CollisionConfig
struct CollisionConfig_t3653208188_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___U3CTerrainCollisionU3Ek__BackingField_0;
			int32_t ___U3CRoadCollisionU3Ek__BackingField_1;
			int32_t ___U3CBuildingCollisionU3Ek__BackingField_2;
		};
		uint8_t CollisionConfig_t3653208188__padding[1];
	};
};
// Native definition for COM marshalling of Wrld.ConfigParams/CollisionConfig
struct CollisionConfig_t3653208188_marshaled_com
{
	union
	{
		struct
		{
			int32_t ___U3CTerrainCollisionU3Ek__BackingField_0;
			int32_t ___U3CRoadCollisionU3Ek__BackingField_1;
			int32_t ___U3CBuildingCollisionU3Ek__BackingField_2;
		};
		uint8_t CollisionConfig_t3653208188__padding[1];
	};
};
#endif // COLLISIONCONFIG_T3653208188_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
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
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUMERATOR_T913802012_H
#define ENUMERATOR_T913802012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_t913802012 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3319525431 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___l_0)); }
	inline List_1_t3319525431 * get_l_0() const { return ___l_0; }
	inline List_1_t3319525431 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3319525431 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T913802012_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T316386599_H
#define ENUMERATOR_T316386599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Wrld.Streaming.GameObjectRecord>
struct  Enumerator_t316386599 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2657171120 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t759875991  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t316386599, ___dictionary_0)); }
	inline Dictionary_2_t2657171120 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2657171120 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2657171120 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t316386599, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t316386599, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t316386599, ___current_3)); }
	inline KeyValuePair_2_t759875991  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t759875991 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t759875991  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T316386599_H
#ifndef CONFIGPARAMS_T592212086_H
#define CONFIGPARAMS_T592212086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.ConfigParams
struct  ConfigParams_t592212086 
{
public:
	// Wrld.ConfigParams/NativeConfig Wrld.ConfigParams::m_nativeConfig
	NativeConfig_t18506486  ___m_nativeConfig_0;
	// System.String Wrld.ConfigParams::MaterialsDirectory
	String_t* ___MaterialsDirectory_1;
	// UnityEngine.Material Wrld.ConfigParams::OverrideLandmarkMaterial
	Material_t340375123 * ___OverrideLandmarkMaterial_2;
	// System.String Wrld.ConfigParams::CoverageTreeManifestUrl
	String_t* ___CoverageTreeManifestUrl_3;
	// System.String Wrld.ConfigParams::ThemeManifestUrl
	String_t* ___ThemeManifestUrl_4;
	// Wrld.ConfigParams/CollisionConfig Wrld.ConfigParams::Collisions
	CollisionConfig_t3653208188  ___Collisions_5;

public:
	inline static int32_t get_offset_of_m_nativeConfig_0() { return static_cast<int32_t>(offsetof(ConfigParams_t592212086, ___m_nativeConfig_0)); }
	inline NativeConfig_t18506486  get_m_nativeConfig_0() const { return ___m_nativeConfig_0; }
	inline NativeConfig_t18506486 * get_address_of_m_nativeConfig_0() { return &___m_nativeConfig_0; }
	inline void set_m_nativeConfig_0(NativeConfig_t18506486  value)
	{
		___m_nativeConfig_0 = value;
	}

	inline static int32_t get_offset_of_MaterialsDirectory_1() { return static_cast<int32_t>(offsetof(ConfigParams_t592212086, ___MaterialsDirectory_1)); }
	inline String_t* get_MaterialsDirectory_1() const { return ___MaterialsDirectory_1; }
	inline String_t** get_address_of_MaterialsDirectory_1() { return &___MaterialsDirectory_1; }
	inline void set_MaterialsDirectory_1(String_t* value)
	{
		___MaterialsDirectory_1 = value;
		Il2CppCodeGenWriteBarrier((&___MaterialsDirectory_1), value);
	}

	inline static int32_t get_offset_of_OverrideLandmarkMaterial_2() { return static_cast<int32_t>(offsetof(ConfigParams_t592212086, ___OverrideLandmarkMaterial_2)); }
	inline Material_t340375123 * get_OverrideLandmarkMaterial_2() const { return ___OverrideLandmarkMaterial_2; }
	inline Material_t340375123 ** get_address_of_OverrideLandmarkMaterial_2() { return &___OverrideLandmarkMaterial_2; }
	inline void set_OverrideLandmarkMaterial_2(Material_t340375123 * value)
	{
		___OverrideLandmarkMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___OverrideLandmarkMaterial_2), value);
	}

	inline static int32_t get_offset_of_CoverageTreeManifestUrl_3() { return static_cast<int32_t>(offsetof(ConfigParams_t592212086, ___CoverageTreeManifestUrl_3)); }
	inline String_t* get_CoverageTreeManifestUrl_3() const { return ___CoverageTreeManifestUrl_3; }
	inline String_t** get_address_of_CoverageTreeManifestUrl_3() { return &___CoverageTreeManifestUrl_3; }
	inline void set_CoverageTreeManifestUrl_3(String_t* value)
	{
		___CoverageTreeManifestUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CoverageTreeManifestUrl_3), value);
	}

	inline static int32_t get_offset_of_ThemeManifestUrl_4() { return static_cast<int32_t>(offsetof(ConfigParams_t592212086, ___ThemeManifestUrl_4)); }
	inline String_t* get_ThemeManifestUrl_4() const { return ___ThemeManifestUrl_4; }
	inline String_t** get_address_of_ThemeManifestUrl_4() { return &___ThemeManifestUrl_4; }
	inline void set_ThemeManifestUrl_4(String_t* value)
	{
		___ThemeManifestUrl_4 = value;
		Il2CppCodeGenWriteBarrier((&___ThemeManifestUrl_4), value);
	}

	inline static int32_t get_offset_of_Collisions_5() { return static_cast<int32_t>(offsetof(ConfigParams_t592212086, ___Collisions_5)); }
	inline CollisionConfig_t3653208188  get_Collisions_5() const { return ___Collisions_5; }
	inline CollisionConfig_t3653208188 * get_address_of_Collisions_5() { return &___Collisions_5; }
	inline void set_Collisions_5(CollisionConfig_t3653208188  value)
	{
		___Collisions_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Wrld.ConfigParams
struct ConfigParams_t592212086_marshaled_pinvoke
{
	NativeConfig_t18506486_marshaled_pinvoke ___m_nativeConfig_0;
	char* ___MaterialsDirectory_1;
	Material_t340375123 * ___OverrideLandmarkMaterial_2;
	char* ___CoverageTreeManifestUrl_3;
	char* ___ThemeManifestUrl_4;
	CollisionConfig_t3653208188_marshaled_pinvoke ___Collisions_5;
};
// Native definition for COM marshalling of Wrld.ConfigParams
struct ConfigParams_t592212086_marshaled_com
{
	NativeConfig_t18506486_marshaled_com ___m_nativeConfig_0;
	Il2CppChar* ___MaterialsDirectory_1;
	Material_t340375123 * ___OverrideLandmarkMaterial_2;
	Il2CppChar* ___CoverageTreeManifestUrl_3;
	Il2CppChar* ___ThemeManifestUrl_4;
	CollisionConfig_t3653208188_marshaled_com ___Collisions_5;
};
#endif // CONFIGPARAMS_T592212086_H
#ifndef CAMERASTATE_T2128520787_H
#define CAMERASTATE_T2128520787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapCamera.CameraState
struct  CameraState_t2128520787  : public RuntimeObject
{
public:
	// Wrld.Common.Maths.DoubleVector3 Wrld.MapCamera.CameraState::LocationEcef
	DoubleVector3_t761704365  ___LocationEcef_0;
	// Wrld.Common.Maths.DoubleVector3 Wrld.MapCamera.CameraState::InterestPointEcef
	DoubleVector3_t761704365  ___InterestPointEcef_1;
	// UnityEngine.Matrix4x4 Wrld.MapCamera.CameraState::ViewMatrix
	Matrix4x4_t1817901843  ___ViewMatrix_2;
	// UnityEngine.Matrix4x4 Wrld.MapCamera.CameraState::ProjectMatrix
	Matrix4x4_t1817901843  ___ProjectMatrix_3;

public:
	inline static int32_t get_offset_of_LocationEcef_0() { return static_cast<int32_t>(offsetof(CameraState_t2128520787, ___LocationEcef_0)); }
	inline DoubleVector3_t761704365  get_LocationEcef_0() const { return ___LocationEcef_0; }
	inline DoubleVector3_t761704365 * get_address_of_LocationEcef_0() { return &___LocationEcef_0; }
	inline void set_LocationEcef_0(DoubleVector3_t761704365  value)
	{
		___LocationEcef_0 = value;
	}

	inline static int32_t get_offset_of_InterestPointEcef_1() { return static_cast<int32_t>(offsetof(CameraState_t2128520787, ___InterestPointEcef_1)); }
	inline DoubleVector3_t761704365  get_InterestPointEcef_1() const { return ___InterestPointEcef_1; }
	inline DoubleVector3_t761704365 * get_address_of_InterestPointEcef_1() { return &___InterestPointEcef_1; }
	inline void set_InterestPointEcef_1(DoubleVector3_t761704365  value)
	{
		___InterestPointEcef_1 = value;
	}

	inline static int32_t get_offset_of_ViewMatrix_2() { return static_cast<int32_t>(offsetof(CameraState_t2128520787, ___ViewMatrix_2)); }
	inline Matrix4x4_t1817901843  get_ViewMatrix_2() const { return ___ViewMatrix_2; }
	inline Matrix4x4_t1817901843 * get_address_of_ViewMatrix_2() { return &___ViewMatrix_2; }
	inline void set_ViewMatrix_2(Matrix4x4_t1817901843  value)
	{
		___ViewMatrix_2 = value;
	}

	inline static int32_t get_offset_of_ProjectMatrix_3() { return static_cast<int32_t>(offsetof(CameraState_t2128520787, ___ProjectMatrix_3)); }
	inline Matrix4x4_t1817901843  get_ProjectMatrix_3() const { return ___ProjectMatrix_3; }
	inline Matrix4x4_t1817901843 * get_address_of_ProjectMatrix_3() { return &___ProjectMatrix_3; }
	inline void set_ProjectMatrix_3(Matrix4x4_t1817901843  value)
	{
		___ProjectMatrix_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Wrld.MapCamera.CameraState
struct CameraState_t2128520787_marshaled_pinvoke
{
	DoubleVector3_t761704365  ___LocationEcef_0;
	DoubleVector3_t761704365  ___InterestPointEcef_1;
	Matrix4x4_t1817901843  ___ViewMatrix_2;
	Matrix4x4_t1817901843  ___ProjectMatrix_3;
};
// Native definition for COM marshalling of Wrld.MapCamera.CameraState
struct CameraState_t2128520787_marshaled_com
{
	DoubleVector3_t761704365  ___LocationEcef_0;
	DoubleVector3_t761704365  ___InterestPointEcef_1;
	Matrix4x4_t1817901843  ___ViewMatrix_2;
	Matrix4x4_t1817901843  ___ProjectMatrix_3;
};
#endif // CAMERASTATE_T2128520787_H
#ifndef TEXTURECALLBACKS_T2889231718_H
#define TEXTURECALLBACKS_T2889231718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.TextureCallbacks
struct  TextureCallbacks_t2889231718 
{
public:
	// System.IntPtr Wrld.TextureCallbacks::textureServiceHandle
	intptr_t ___textureServiceHandle_0;
	// Wrld.Materials.TextureLoadHandler/AllocateTextureBufferCallback Wrld.TextureCallbacks::allocateTextureBuffer
	AllocateTextureBufferCallback_t109657048 * ___allocateTextureBuffer_1;
	// Wrld.Materials.TextureLoadHandler/BeginUploadTextureBufferCallback Wrld.TextureCallbacks::beginUploadTextureBuffer
	BeginUploadTextureBufferCallback_t3016670851 * ___beginUploadTextureBuffer_2;
	// Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService/OnTextureReceivedCallback Wrld.TextureCallbacks::onTextureReceived
	OnTextureReceivedCallback_t1016964503 * ___onTextureReceived_3;
	// Wrld.Materials.TextureLoadHandler/ReleaseTextureCallback Wrld.TextureCallbacks::releaseTexture
	ReleaseTextureCallback_t388032167 * ___releaseTexture_4;
	// Wrld.Materials.TextureLoadHandler/CreateCubemapFromFacesCallback Wrld.TextureCallbacks::createCubemapFromFaces
	CreateCubemapFromFacesCallback_t2834185402 * ___createCubemapFromFaces_5;

public:
	inline static int32_t get_offset_of_textureServiceHandle_0() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718, ___textureServiceHandle_0)); }
	inline intptr_t get_textureServiceHandle_0() const { return ___textureServiceHandle_0; }
	inline intptr_t* get_address_of_textureServiceHandle_0() { return &___textureServiceHandle_0; }
	inline void set_textureServiceHandle_0(intptr_t value)
	{
		___textureServiceHandle_0 = value;
	}

	inline static int32_t get_offset_of_allocateTextureBuffer_1() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718, ___allocateTextureBuffer_1)); }
	inline AllocateTextureBufferCallback_t109657048 * get_allocateTextureBuffer_1() const { return ___allocateTextureBuffer_1; }
	inline AllocateTextureBufferCallback_t109657048 ** get_address_of_allocateTextureBuffer_1() { return &___allocateTextureBuffer_1; }
	inline void set_allocateTextureBuffer_1(AllocateTextureBufferCallback_t109657048 * value)
	{
		___allocateTextureBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___allocateTextureBuffer_1), value);
	}

	inline static int32_t get_offset_of_beginUploadTextureBuffer_2() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718, ___beginUploadTextureBuffer_2)); }
	inline BeginUploadTextureBufferCallback_t3016670851 * get_beginUploadTextureBuffer_2() const { return ___beginUploadTextureBuffer_2; }
	inline BeginUploadTextureBufferCallback_t3016670851 ** get_address_of_beginUploadTextureBuffer_2() { return &___beginUploadTextureBuffer_2; }
	inline void set_beginUploadTextureBuffer_2(BeginUploadTextureBufferCallback_t3016670851 * value)
	{
		___beginUploadTextureBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___beginUploadTextureBuffer_2), value);
	}

	inline static int32_t get_offset_of_onTextureReceived_3() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718, ___onTextureReceived_3)); }
	inline OnTextureReceivedCallback_t1016964503 * get_onTextureReceived_3() const { return ___onTextureReceived_3; }
	inline OnTextureReceivedCallback_t1016964503 ** get_address_of_onTextureReceived_3() { return &___onTextureReceived_3; }
	inline void set_onTextureReceived_3(OnTextureReceivedCallback_t1016964503 * value)
	{
		___onTextureReceived_3 = value;
		Il2CppCodeGenWriteBarrier((&___onTextureReceived_3), value);
	}

	inline static int32_t get_offset_of_releaseTexture_4() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718, ___releaseTexture_4)); }
	inline ReleaseTextureCallback_t388032167 * get_releaseTexture_4() const { return ___releaseTexture_4; }
	inline ReleaseTextureCallback_t388032167 ** get_address_of_releaseTexture_4() { return &___releaseTexture_4; }
	inline void set_releaseTexture_4(ReleaseTextureCallback_t388032167 * value)
	{
		___releaseTexture_4 = value;
		Il2CppCodeGenWriteBarrier((&___releaseTexture_4), value);
	}

	inline static int32_t get_offset_of_createCubemapFromFaces_5() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718, ___createCubemapFromFaces_5)); }
	inline CreateCubemapFromFacesCallback_t2834185402 * get_createCubemapFromFaces_5() const { return ___createCubemapFromFaces_5; }
	inline CreateCubemapFromFacesCallback_t2834185402 ** get_address_of_createCubemapFromFaces_5() { return &___createCubemapFromFaces_5; }
	inline void set_createCubemapFromFaces_5(CreateCubemapFromFacesCallback_t2834185402 * value)
	{
		___createCubemapFromFaces_5 = value;
		Il2CppCodeGenWriteBarrier((&___createCubemapFromFaces_5), value);
	}
};

struct TextureCallbacks_t2889231718_StaticFields
{
public:
	// Wrld.Materials.TextureLoadHandler/AllocateTextureBufferCallback Wrld.TextureCallbacks::<>f__mg$cache0
	AllocateTextureBufferCallback_t109657048 * ___U3CU3Ef__mgU24cache0_6;
	// Wrld.Materials.TextureLoadHandler/BeginUploadTextureBufferCallback Wrld.TextureCallbacks::<>f__mg$cache1
	BeginUploadTextureBufferCallback_t3016670851 * ___U3CU3Ef__mgU24cache1_7;
	// Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService/OnTextureReceivedCallback Wrld.TextureCallbacks::<>f__mg$cache2
	OnTextureReceivedCallback_t1016964503 * ___U3CU3Ef__mgU24cache2_8;
	// Wrld.Materials.TextureLoadHandler/ReleaseTextureCallback Wrld.TextureCallbacks::<>f__mg$cache3
	ReleaseTextureCallback_t388032167 * ___U3CU3Ef__mgU24cache3_9;
	// Wrld.Materials.TextureLoadHandler/CreateCubemapFromFacesCallback Wrld.TextureCallbacks::<>f__mg$cache4
	CreateCubemapFromFacesCallback_t2834185402 * ___U3CU3Ef__mgU24cache4_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline AllocateTextureBufferCallback_t109657048 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline AllocateTextureBufferCallback_t109657048 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(AllocateTextureBufferCallback_t109657048 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_7() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718_StaticFields, ___U3CU3Ef__mgU24cache1_7)); }
	inline BeginUploadTextureBufferCallback_t3016670851 * get_U3CU3Ef__mgU24cache1_7() const { return ___U3CU3Ef__mgU24cache1_7; }
	inline BeginUploadTextureBufferCallback_t3016670851 ** get_address_of_U3CU3Ef__mgU24cache1_7() { return &___U3CU3Ef__mgU24cache1_7; }
	inline void set_U3CU3Ef__mgU24cache1_7(BeginUploadTextureBufferCallback_t3016670851 * value)
	{
		___U3CU3Ef__mgU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_8() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718_StaticFields, ___U3CU3Ef__mgU24cache2_8)); }
	inline OnTextureReceivedCallback_t1016964503 * get_U3CU3Ef__mgU24cache2_8() const { return ___U3CU3Ef__mgU24cache2_8; }
	inline OnTextureReceivedCallback_t1016964503 ** get_address_of_U3CU3Ef__mgU24cache2_8() { return &___U3CU3Ef__mgU24cache2_8; }
	inline void set_U3CU3Ef__mgU24cache2_8(OnTextureReceivedCallback_t1016964503 * value)
	{
		___U3CU3Ef__mgU24cache2_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_9() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718_StaticFields, ___U3CU3Ef__mgU24cache3_9)); }
	inline ReleaseTextureCallback_t388032167 * get_U3CU3Ef__mgU24cache3_9() const { return ___U3CU3Ef__mgU24cache3_9; }
	inline ReleaseTextureCallback_t388032167 ** get_address_of_U3CU3Ef__mgU24cache3_9() { return &___U3CU3Ef__mgU24cache3_9; }
	inline void set_U3CU3Ef__mgU24cache3_9(ReleaseTextureCallback_t388032167 * value)
	{
		___U3CU3Ef__mgU24cache3_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_10() { return static_cast<int32_t>(offsetof(TextureCallbacks_t2889231718_StaticFields, ___U3CU3Ef__mgU24cache4_10)); }
	inline CreateCubemapFromFacesCallback_t2834185402 * get_U3CU3Ef__mgU24cache4_10() const { return ___U3CU3Ef__mgU24cache4_10; }
	inline CreateCubemapFromFacesCallback_t2834185402 ** get_address_of_U3CU3Ef__mgU24cache4_10() { return &___U3CU3Ef__mgU24cache4_10; }
	inline void set_U3CU3Ef__mgU24cache4_10(CreateCubemapFromFacesCallback_t2834185402 * value)
	{
		___U3CU3Ef__mgU24cache4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Wrld.TextureCallbacks
struct TextureCallbacks_t2889231718_marshaled_pinvoke
{
	intptr_t ___textureServiceHandle_0;
	Il2CppMethodPointer ___allocateTextureBuffer_1;
	Il2CppMethodPointer ___beginUploadTextureBuffer_2;
	Il2CppMethodPointer ___onTextureReceived_3;
	Il2CppMethodPointer ___releaseTexture_4;
	Il2CppMethodPointer ___createCubemapFromFaces_5;
};
// Native definition for COM marshalling of Wrld.TextureCallbacks
struct TextureCallbacks_t2889231718_marshaled_com
{
	intptr_t ___textureServiceHandle_0;
	Il2CppMethodPointer ___allocateTextureBuffer_1;
	Il2CppMethodPointer ___beginUploadTextureBuffer_2;
	Il2CppMethodPointer ___onTextureReceived_3;
	Il2CppMethodPointer ___releaseTexture_4;
	Il2CppMethodPointer ___createCubemapFromFaces_5;
};
#endif // TEXTURECALLBACKS_T2889231718_H
#ifndef TEXTURELOADHANDLER_T2080734353_H
#define TEXTURELOADHANDLER_T2080734353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Materials.TextureLoadHandler
struct  TextureLoadHandler_t2080734353  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.Texture> Wrld.Materials.TextureLoadHandler::m_builtTextures
	Dictionary_2_t641263069 * ___m_builtTextures_1;
	// Wrld.Concurrency.ConcurrentQueue`1<Wrld.Materials.TextureLoadHandler/TextureBuffer> Wrld.Materials.TextureLoadHandler::m_processQueue
	ConcurrentQueue_1_t11616060 * ___m_processQueue_2;
	// Wrld.Materials.IdGenerator Wrld.Materials.TextureLoadHandler::m_idGenerator
	IdGenerator_t1318283159 * ___m_idGenerator_3;
	// System.IntPtr Wrld.Materials.TextureLoadHandler::m_handleToSelf
	intptr_t ___m_handleToSelf_4;

public:
	inline static int32_t get_offset_of_m_builtTextures_1() { return static_cast<int32_t>(offsetof(TextureLoadHandler_t2080734353, ___m_builtTextures_1)); }
	inline Dictionary_2_t641263069 * get_m_builtTextures_1() const { return ___m_builtTextures_1; }
	inline Dictionary_2_t641263069 ** get_address_of_m_builtTextures_1() { return &___m_builtTextures_1; }
	inline void set_m_builtTextures_1(Dictionary_2_t641263069 * value)
	{
		___m_builtTextures_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_builtTextures_1), value);
	}

	inline static int32_t get_offset_of_m_processQueue_2() { return static_cast<int32_t>(offsetof(TextureLoadHandler_t2080734353, ___m_processQueue_2)); }
	inline ConcurrentQueue_1_t11616060 * get_m_processQueue_2() const { return ___m_processQueue_2; }
	inline ConcurrentQueue_1_t11616060 ** get_address_of_m_processQueue_2() { return &___m_processQueue_2; }
	inline void set_m_processQueue_2(ConcurrentQueue_1_t11616060 * value)
	{
		___m_processQueue_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_processQueue_2), value);
	}

	inline static int32_t get_offset_of_m_idGenerator_3() { return static_cast<int32_t>(offsetof(TextureLoadHandler_t2080734353, ___m_idGenerator_3)); }
	inline IdGenerator_t1318283159 * get_m_idGenerator_3() const { return ___m_idGenerator_3; }
	inline IdGenerator_t1318283159 ** get_address_of_m_idGenerator_3() { return &___m_idGenerator_3; }
	inline void set_m_idGenerator_3(IdGenerator_t1318283159 * value)
	{
		___m_idGenerator_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_idGenerator_3), value);
	}

	inline static int32_t get_offset_of_m_handleToSelf_4() { return static_cast<int32_t>(offsetof(TextureLoadHandler_t2080734353, ___m_handleToSelf_4)); }
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
#endif // TEXTURELOADHANDLER_T2080734353_H
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
#ifndef THREADSERVICE_T1369597789_H
#define THREADSERVICE_T1369597789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Concurrency.ThreadService
struct  ThreadService_t1369597789  : public RuntimeObject
{
public:
	// System.IntPtr Wrld.Concurrency.ThreadService::m_handleToSelf
	intptr_t ___m_handleToSelf_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Thread> Wrld.Concurrency.ThreadService::m_threads
	Dictionary_2_t1189549400 * ___m_threads_1;
	// System.Int32 Wrld.Concurrency.ThreadService::m_nextThreadID
	int32_t ___m_nextThreadID_2;

public:
	inline static int32_t get_offset_of_m_handleToSelf_0() { return static_cast<int32_t>(offsetof(ThreadService_t1369597789, ___m_handleToSelf_0)); }
	inline intptr_t get_m_handleToSelf_0() const { return ___m_handleToSelf_0; }
	inline intptr_t* get_address_of_m_handleToSelf_0() { return &___m_handleToSelf_0; }
	inline void set_m_handleToSelf_0(intptr_t value)
	{
		___m_handleToSelf_0 = value;
	}

	inline static int32_t get_offset_of_m_threads_1() { return static_cast<int32_t>(offsetof(ThreadService_t1369597789, ___m_threads_1)); }
	inline Dictionary_2_t1189549400 * get_m_threads_1() const { return ___m_threads_1; }
	inline Dictionary_2_t1189549400 ** get_address_of_m_threads_1() { return &___m_threads_1; }
	inline void set_m_threads_1(Dictionary_2_t1189549400 * value)
	{
		___m_threads_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_threads_1), value);
	}

	inline static int32_t get_offset_of_m_nextThreadID_2() { return static_cast<int32_t>(offsetof(ThreadService_t1369597789, ___m_nextThreadID_2)); }
	inline int32_t get_m_nextThreadID_2() const { return ___m_nextThreadID_2; }
	inline int32_t* get_address_of_m_nextThreadID_2() { return &___m_nextThreadID_2; }
	inline void set_m_nextThreadID_2(int32_t value)
	{
		___m_nextThreadID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSERVICE_T1369597789_H
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
#ifndef COORDINATESYSTEM_T2504309499_H
#define COORDINATESYSTEM_T2504309499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.CoordinateSystem
struct  CoordinateSystem_t2504309499 
{
public:
	// System.Int32 Wrld.CoordinateSystem::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CoordinateSystem_t2504309499, ___value___1)); }
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
#endif // COORDINATESYSTEM_T2504309499_H
#ifndef LABELSERVICEINTERNAL_T3414831883_H
#define LABELSERVICEINTERNAL_T3414831883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Resources.Labels.LabelServiceInternal
struct  LabelServiceInternal_t3414831883  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text> Wrld.Resources.Labels.LabelServiceInternal::m_screenTextObjects
	Dictionary_2_t1687139013 * ___m_screenTextObjects_0;
	// UnityEngine.Canvas Wrld.Resources.Labels.LabelServiceInternal::m_unityCanvas
	Canvas_t3310196443 * ___m_unityCanvas_1;
	// System.IntPtr Wrld.Resources.Labels.LabelServiceInternal::m_handleToSelf
	intptr_t ___m_handleToSelf_2;
	// System.Boolean Wrld.Resources.Labels.LabelServiceInternal::m_enableLabels
	bool ___m_enableLabels_3;

public:
	inline static int32_t get_offset_of_m_screenTextObjects_0() { return static_cast<int32_t>(offsetof(LabelServiceInternal_t3414831883, ___m_screenTextObjects_0)); }
	inline Dictionary_2_t1687139013 * get_m_screenTextObjects_0() const { return ___m_screenTextObjects_0; }
	inline Dictionary_2_t1687139013 ** get_address_of_m_screenTextObjects_0() { return &___m_screenTextObjects_0; }
	inline void set_m_screenTextObjects_0(Dictionary_2_t1687139013 * value)
	{
		___m_screenTextObjects_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_screenTextObjects_0), value);
	}

	inline static int32_t get_offset_of_m_unityCanvas_1() { return static_cast<int32_t>(offsetof(LabelServiceInternal_t3414831883, ___m_unityCanvas_1)); }
	inline Canvas_t3310196443 * get_m_unityCanvas_1() const { return ___m_unityCanvas_1; }
	inline Canvas_t3310196443 ** get_address_of_m_unityCanvas_1() { return &___m_unityCanvas_1; }
	inline void set_m_unityCanvas_1(Canvas_t3310196443 * value)
	{
		___m_unityCanvas_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_unityCanvas_1), value);
	}

	inline static int32_t get_offset_of_m_handleToSelf_2() { return static_cast<int32_t>(offsetof(LabelServiceInternal_t3414831883, ___m_handleToSelf_2)); }
	inline intptr_t get_m_handleToSelf_2() const { return ___m_handleToSelf_2; }
	inline intptr_t* get_address_of_m_handleToSelf_2() { return &___m_handleToSelf_2; }
	inline void set_m_handleToSelf_2(intptr_t value)
	{
		___m_handleToSelf_2 = value;
	}

	inline static int32_t get_offset_of_m_enableLabels_3() { return static_cast<int32_t>(offsetof(LabelServiceInternal_t3414831883, ___m_enableLabels_3)); }
	inline bool get_m_enableLabels_3() const { return ___m_enableLabels_3; }
	inline bool* get_address_of_m_enableLabels_3() { return &___m_enableLabels_3; }
	inline void set_m_enableLabels_3(bool value)
	{
		___m_enableLabels_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELSERVICEINTERNAL_T3414831883_H
#ifndef THREADSERVICECALLBACKS_T3456159097_H
#define THREADSERVICECALLBACKS_T3456159097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.ThreadServiceCallbacks
struct  ThreadServiceCallbacks_t3456159097 
{
public:
	// System.IntPtr Wrld.ThreadServiceCallbacks::threadServiceHandle
	intptr_t ___threadServiceHandle_0;
	// Wrld.Concurrency.ThreadService/CreateThreadDelegate Wrld.ThreadServiceCallbacks::createThread
	CreateThreadDelegate_t2573395908 * ___createThread_1;
	// Wrld.Concurrency.ThreadService/JoinThreadDelegate Wrld.ThreadServiceCallbacks::joinThread
	JoinThreadDelegate_t1262337526 * ___joinThread_2;

public:
	inline static int32_t get_offset_of_threadServiceHandle_0() { return static_cast<int32_t>(offsetof(ThreadServiceCallbacks_t3456159097, ___threadServiceHandle_0)); }
	inline intptr_t get_threadServiceHandle_0() const { return ___threadServiceHandle_0; }
	inline intptr_t* get_address_of_threadServiceHandle_0() { return &___threadServiceHandle_0; }
	inline void set_threadServiceHandle_0(intptr_t value)
	{
		___threadServiceHandle_0 = value;
	}

	inline static int32_t get_offset_of_createThread_1() { return static_cast<int32_t>(offsetof(ThreadServiceCallbacks_t3456159097, ___createThread_1)); }
	inline CreateThreadDelegate_t2573395908 * get_createThread_1() const { return ___createThread_1; }
	inline CreateThreadDelegate_t2573395908 ** get_address_of_createThread_1() { return &___createThread_1; }
	inline void set_createThread_1(CreateThreadDelegate_t2573395908 * value)
	{
		___createThread_1 = value;
		Il2CppCodeGenWriteBarrier((&___createThread_1), value);
	}

	inline static int32_t get_offset_of_joinThread_2() { return static_cast<int32_t>(offsetof(ThreadServiceCallbacks_t3456159097, ___joinThread_2)); }
	inline JoinThreadDelegate_t1262337526 * get_joinThread_2() const { return ___joinThread_2; }
	inline JoinThreadDelegate_t1262337526 ** get_address_of_joinThread_2() { return &___joinThread_2; }
	inline void set_joinThread_2(JoinThreadDelegate_t1262337526 * value)
	{
		___joinThread_2 = value;
		Il2CppCodeGenWriteBarrier((&___joinThread_2), value);
	}
};

struct ThreadServiceCallbacks_t3456159097_StaticFields
{
public:
	// Wrld.Concurrency.ThreadService/CreateThreadDelegate Wrld.ThreadServiceCallbacks::<>f__mg$cache0
	CreateThreadDelegate_t2573395908 * ___U3CU3Ef__mgU24cache0_3;
	// Wrld.Concurrency.ThreadService/JoinThreadDelegate Wrld.ThreadServiceCallbacks::<>f__mg$cache1
	JoinThreadDelegate_t1262337526 * ___U3CU3Ef__mgU24cache1_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(ThreadServiceCallbacks_t3456159097_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline CreateThreadDelegate_t2573395908 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline CreateThreadDelegate_t2573395908 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(CreateThreadDelegate_t2573395908 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_4() { return static_cast<int32_t>(offsetof(ThreadServiceCallbacks_t3456159097_StaticFields, ___U3CU3Ef__mgU24cache1_4)); }
	inline JoinThreadDelegate_t1262337526 * get_U3CU3Ef__mgU24cache1_4() const { return ___U3CU3Ef__mgU24cache1_4; }
	inline JoinThreadDelegate_t1262337526 ** get_address_of_U3CU3Ef__mgU24cache1_4() { return &___U3CU3Ef__mgU24cache1_4; }
	inline void set_U3CU3Ef__mgU24cache1_4(JoinThreadDelegate_t1262337526 * value)
	{
		___U3CU3Ef__mgU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Wrld.ThreadServiceCallbacks
struct ThreadServiceCallbacks_t3456159097_marshaled_pinvoke
{
	intptr_t ___threadServiceHandle_0;
	Il2CppMethodPointer ___createThread_1;
	Il2CppMethodPointer ___joinThread_2;
};
// Native definition for COM marshalling of Wrld.ThreadServiceCallbacks
struct ThreadServiceCallbacks_t3456159097_marshaled_com
{
	intptr_t ___threadServiceHandle_0;
	Il2CppMethodPointer ___createThread_1;
	Il2CppMethodPointer ___joinThread_2;
};
#endif // THREADSERVICECALLBACKS_T3456159097_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DOUBLERAY_T1286935159_H
#define DOUBLERAY_T1286935159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Wrld.Scripts.Maths.DoubleRay
struct  DoubleRay_t1286935159 
{
public:
	// Wrld.Common.Maths.DoubleVector3 Assets.Wrld.Scripts.Maths.DoubleRay::origin
	DoubleVector3_t761704365  ___origin_0;
	// Wrld.Common.Maths.DoubleVector3 Assets.Wrld.Scripts.Maths.DoubleRay::direction
	DoubleVector3_t761704365  ___direction_1;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(DoubleRay_t1286935159, ___origin_0)); }
	inline DoubleVector3_t761704365  get_origin_0() const { return ___origin_0; }
	inline DoubleVector3_t761704365 * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(DoubleVector3_t761704365  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(DoubleRay_t1286935159, ___direction_1)); }
	inline DoubleVector3_t761704365  get_direction_1() const { return ___direction_1; }
	inline DoubleVector3_t761704365 * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(DoubleVector3_t761704365  value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLERAY_T1286935159_H
#ifndef ECEFTANGENTBASIS_T256737685_H
#define ECEFTANGENTBASIS_T256737685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Common.Maths.EcefTangentBasis
struct  EcefTangentBasis_t256737685  : public RuntimeObject
{
public:
	// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.EcefTangentBasis::m_pointEcef
	DoubleVector3_t761704365  ___m_pointEcef_0;
	// UnityEngine.Vector3 Wrld.Common.Maths.EcefTangentBasis::m_basisRight
	Vector3_t3722313464  ___m_basisRight_1;
	// UnityEngine.Vector3 Wrld.Common.Maths.EcefTangentBasis::m_basisUp
	Vector3_t3722313464  ___m_basisUp_2;
	// UnityEngine.Vector3 Wrld.Common.Maths.EcefTangentBasis::m_basisForward
	Vector3_t3722313464  ___m_basisForward_3;

public:
	inline static int32_t get_offset_of_m_pointEcef_0() { return static_cast<int32_t>(offsetof(EcefTangentBasis_t256737685, ___m_pointEcef_0)); }
	inline DoubleVector3_t761704365  get_m_pointEcef_0() const { return ___m_pointEcef_0; }
	inline DoubleVector3_t761704365 * get_address_of_m_pointEcef_0() { return &___m_pointEcef_0; }
	inline void set_m_pointEcef_0(DoubleVector3_t761704365  value)
	{
		___m_pointEcef_0 = value;
	}

	inline static int32_t get_offset_of_m_basisRight_1() { return static_cast<int32_t>(offsetof(EcefTangentBasis_t256737685, ___m_basisRight_1)); }
	inline Vector3_t3722313464  get_m_basisRight_1() const { return ___m_basisRight_1; }
	inline Vector3_t3722313464 * get_address_of_m_basisRight_1() { return &___m_basisRight_1; }
	inline void set_m_basisRight_1(Vector3_t3722313464  value)
	{
		___m_basisRight_1 = value;
	}

	inline static int32_t get_offset_of_m_basisUp_2() { return static_cast<int32_t>(offsetof(EcefTangentBasis_t256737685, ___m_basisUp_2)); }
	inline Vector3_t3722313464  get_m_basisUp_2() const { return ___m_basisUp_2; }
	inline Vector3_t3722313464 * get_address_of_m_basisUp_2() { return &___m_basisUp_2; }
	inline void set_m_basisUp_2(Vector3_t3722313464  value)
	{
		___m_basisUp_2 = value;
	}

	inline static int32_t get_offset_of_m_basisForward_3() { return static_cast<int32_t>(offsetof(EcefTangentBasis_t256737685, ___m_basisForward_3)); }
	inline Vector3_t3722313464  get_m_basisForward_3() const { return ___m_basisForward_3; }
	inline Vector3_t3722313464 * get_address_of_m_basisForward_3() { return &___m_basisForward_3; }
	inline void set_m_basisForward_3(Vector3_t3722313464  value)
	{
		___m_basisForward_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECEFTANGENTBASIS_T256737685_H
#ifndef POSITIONER_T1752774946_H
#define POSITIONER_T1752774946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.Positioners.Positioner
struct  Positioner_t1752774946  : public RuntimeObject
{
public:
	// System.Int32 Wrld.Space.Positioners.Positioner::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// Wrld.Space.Positioners.PositionerApiInternal Wrld.Space.Positioners.Positioner::m_positionerApiInternal
	PositionerApiInternal_t1500108320 * ___m_positionerApiInternal_2;
	// Wrld.Common.Maths.DoubleVector3 Wrld.Space.Positioners.Positioner::m_positionerECEFLocation
	DoubleVector3_t761704365  ___m_positionerECEFLocation_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Positioner_t1752774946, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_positionerApiInternal_2() { return static_cast<int32_t>(offsetof(Positioner_t1752774946, ___m_positionerApiInternal_2)); }
	inline PositionerApiInternal_t1500108320 * get_m_positionerApiInternal_2() const { return ___m_positionerApiInternal_2; }
	inline PositionerApiInternal_t1500108320 ** get_address_of_m_positionerApiInternal_2() { return &___m_positionerApiInternal_2; }
	inline void set_m_positionerApiInternal_2(PositionerApiInternal_t1500108320 * value)
	{
		___m_positionerApiInternal_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_positionerApiInternal_2), value);
	}

	inline static int32_t get_offset_of_m_positionerECEFLocation_3() { return static_cast<int32_t>(offsetof(Positioner_t1752774946, ___m_positionerECEFLocation_3)); }
	inline DoubleVector3_t761704365  get_m_positionerECEFLocation_3() const { return ___m_positionerECEFLocation_3; }
	inline DoubleVector3_t761704365 * get_address_of_m_positionerECEFLocation_3() { return &___m_positionerECEFLocation_3; }
	inline void set_m_positionerECEFLocation_3(DoubleVector3_t761704365  value)
	{
		___m_positionerECEFLocation_3 = value;
	}
};

struct Positioner_t1752774946_StaticFields
{
public:
	// System.Int32 Wrld.Space.Positioners.Positioner::InvalidId
	int32_t ___InvalidId_1;

public:
	inline static int32_t get_offset_of_InvalidId_1() { return static_cast<int32_t>(offsetof(Positioner_t1752774946_StaticFields, ___InvalidId_1)); }
	inline int32_t get_InvalidId_1() const { return ___InvalidId_1; }
	inline int32_t* get_address_of_InvalidId_1() { return &___InvalidId_1; }
	inline void set_InvalidId_1(int32_t value)
	{
		___InvalidId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONER_T1752774946_H
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
#ifndef SCENECALLBACKS_T4278023046_H
#define SCENECALLBACKS_T4278023046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.SceneCallbacks
struct  SceneCallbacks_t4278023046 
{
public:
	// System.IntPtr Wrld.SceneCallbacks::sceneServiceCallbacks
	intptr_t ___sceneServiceCallbacks_0;
	// Wrld.MapGameObjectScene/SetScaleCallback Wrld.SceneCallbacks::setScale
	SetScaleCallback_t2997993506 * ___setScale_1;
	// Wrld.MapGameObjectScene/SetTranslationCallback Wrld.SceneCallbacks::setTranslation
	SetTranslationCallback_t3765364063 * ___setTranslation_2;
	// Wrld.MapGameObjectScene/SetOrientationCallback Wrld.SceneCallbacks::setRotation
	SetOrientationCallback_t1136855763 * ___setRotation_3;
	// Wrld.MapGameObjectScene/SetColorCallback Wrld.SceneCallbacks::setColor
	SetColorCallback_t2629579893 * ___setColor_4;

public:
	inline static int32_t get_offset_of_sceneServiceCallbacks_0() { return static_cast<int32_t>(offsetof(SceneCallbacks_t4278023046, ___sceneServiceCallbacks_0)); }
	inline intptr_t get_sceneServiceCallbacks_0() const { return ___sceneServiceCallbacks_0; }
	inline intptr_t* get_address_of_sceneServiceCallbacks_0() { return &___sceneServiceCallbacks_0; }
	inline void set_sceneServiceCallbacks_0(intptr_t value)
	{
		___sceneServiceCallbacks_0 = value;
	}

	inline static int32_t get_offset_of_setScale_1() { return static_cast<int32_t>(offsetof(SceneCallbacks_t4278023046, ___setScale_1)); }
	inline SetScaleCallback_t2997993506 * get_setScale_1() const { return ___setScale_1; }
	inline SetScaleCallback_t2997993506 ** get_address_of_setScale_1() { return &___setScale_1; }
	inline void set_setScale_1(SetScaleCallback_t2997993506 * value)
	{
		___setScale_1 = value;
		Il2CppCodeGenWriteBarrier((&___setScale_1), value);
	}

	inline static int32_t get_offset_of_setTranslation_2() { return static_cast<int32_t>(offsetof(SceneCallbacks_t4278023046, ___setTranslation_2)); }
	inline SetTranslationCallback_t3765364063 * get_setTranslation_2() const { return ___setTranslation_2; }
	inline SetTranslationCallback_t3765364063 ** get_address_of_setTranslation_2() { return &___setTranslation_2; }
	inline void set_setTranslation_2(SetTranslationCallback_t3765364063 * value)
	{
		___setTranslation_2 = value;
		Il2CppCodeGenWriteBarrier((&___setTranslation_2), value);
	}

	inline static int32_t get_offset_of_setRotation_3() { return static_cast<int32_t>(offsetof(SceneCallbacks_t4278023046, ___setRotation_3)); }
	inline SetOrientationCallback_t1136855763 * get_setRotation_3() const { return ___setRotation_3; }
	inline SetOrientationCallback_t1136855763 ** get_address_of_setRotation_3() { return &___setRotation_3; }
	inline void set_setRotation_3(SetOrientationCallback_t1136855763 * value)
	{
		___setRotation_3 = value;
		Il2CppCodeGenWriteBarrier((&___setRotation_3), value);
	}

	inline static int32_t get_offset_of_setColor_4() { return static_cast<int32_t>(offsetof(SceneCallbacks_t4278023046, ___setColor_4)); }
	inline SetColorCallback_t2629579893 * get_setColor_4() const { return ___setColor_4; }
	inline SetColorCallback_t2629579893 ** get_address_of_setColor_4() { return &___setColor_4; }
	inline void set_setColor_4(SetColorCallback_t2629579893 * value)
	{
		___setColor_4 = value;
		Il2CppCodeGenWriteBarrier((&___setColor_4), value);
	}
};

struct SceneCallbacks_t4278023046_StaticFields
{
public:
	// Wrld.MapGameObjectScene/SetScaleCallback Wrld.SceneCallbacks::<>f__mg$cache0
	SetScaleCallback_t2997993506 * ___U3CU3Ef__mgU24cache0_5;
	// Wrld.MapGameObjectScene/SetTranslationCallback Wrld.SceneCallbacks::<>f__mg$cache1
	SetTranslationCallback_t3765364063 * ___U3CU3Ef__mgU24cache1_6;
	// Wrld.MapGameObjectScene/SetOrientationCallback Wrld.SceneCallbacks::<>f__mg$cache2
	SetOrientationCallback_t1136855763 * ___U3CU3Ef__mgU24cache2_7;
	// Wrld.MapGameObjectScene/SetColorCallback Wrld.SceneCallbacks::<>f__mg$cache3
	SetColorCallback_t2629579893 * ___U3CU3Ef__mgU24cache3_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(SceneCallbacks_t4278023046_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline SetScaleCallback_t2997993506 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline SetScaleCallback_t2997993506 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(SetScaleCallback_t2997993506 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_6() { return static_cast<int32_t>(offsetof(SceneCallbacks_t4278023046_StaticFields, ___U3CU3Ef__mgU24cache1_6)); }
	inline SetTranslationCallback_t3765364063 * get_U3CU3Ef__mgU24cache1_6() const { return ___U3CU3Ef__mgU24cache1_6; }
	inline SetTranslationCallback_t3765364063 ** get_address_of_U3CU3Ef__mgU24cache1_6() { return &___U3CU3Ef__mgU24cache1_6; }
	inline void set_U3CU3Ef__mgU24cache1_6(SetTranslationCallback_t3765364063 * value)
	{
		___U3CU3Ef__mgU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_7() { return static_cast<int32_t>(offsetof(SceneCallbacks_t4278023046_StaticFields, ___U3CU3Ef__mgU24cache2_7)); }
	inline SetOrientationCallback_t1136855763 * get_U3CU3Ef__mgU24cache2_7() const { return ___U3CU3Ef__mgU24cache2_7; }
	inline SetOrientationCallback_t1136855763 ** get_address_of_U3CU3Ef__mgU24cache2_7() { return &___U3CU3Ef__mgU24cache2_7; }
	inline void set_U3CU3Ef__mgU24cache2_7(SetOrientationCallback_t1136855763 * value)
	{
		___U3CU3Ef__mgU24cache2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_8() { return static_cast<int32_t>(offsetof(SceneCallbacks_t4278023046_StaticFields, ___U3CU3Ef__mgU24cache3_8)); }
	inline SetColorCallback_t2629579893 * get_U3CU3Ef__mgU24cache3_8() const { return ___U3CU3Ef__mgU24cache3_8; }
	inline SetColorCallback_t2629579893 ** get_address_of_U3CU3Ef__mgU24cache3_8() { return &___U3CU3Ef__mgU24cache3_8; }
	inline void set_U3CU3Ef__mgU24cache3_8(SetColorCallback_t2629579893 * value)
	{
		___U3CU3Ef__mgU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Wrld.SceneCallbacks
struct SceneCallbacks_t4278023046_marshaled_pinvoke
{
	intptr_t ___sceneServiceCallbacks_0;
	Il2CppMethodPointer ___setScale_1;
	Il2CppMethodPointer ___setTranslation_2;
	Il2CppMethodPointer ___setRotation_3;
	Il2CppMethodPointer ___setColor_4;
};
// Native definition for COM marshalling of Wrld.SceneCallbacks
struct SceneCallbacks_t4278023046_marshaled_com
{
	intptr_t ___sceneServiceCallbacks_0;
	Il2CppMethodPointer ___setScale_1;
	Il2CppMethodPointer ___setTranslation_2;
	Il2CppMethodPointer ___setRotation_3;
	Il2CppMethodPointer ___setColor_4;
};
#endif // SCENECALLBACKS_T4278023046_H
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
#ifndef ECEFTRANSFORMUPDATESTRATEGY_T443103155_H
#define ECEFTRANSFORMUPDATESTRATEGY_T443103155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.ECEFTransformUpdateStrategy
struct  ECEFTransformUpdateStrategy_t443103155  : public RuntimeObject
{
public:
	// Wrld.Common.Maths.DoubleVector3 Wrld.Space.ECEFTransformUpdateStrategy::m_cameraPositionECEF
	DoubleVector3_t761704365  ___m_cameraPositionECEF_0;
	// UnityEngine.Vector3 Wrld.Space.ECEFTransformUpdateStrategy::m_up
	Vector3_t3722313464  ___m_up_1;
	// System.Single Wrld.Space.ECEFTransformUpdateStrategy::m_flattenScale
	float ___m_flattenScale_2;

public:
	inline static int32_t get_offset_of_m_cameraPositionECEF_0() { return static_cast<int32_t>(offsetof(ECEFTransformUpdateStrategy_t443103155, ___m_cameraPositionECEF_0)); }
	inline DoubleVector3_t761704365  get_m_cameraPositionECEF_0() const { return ___m_cameraPositionECEF_0; }
	inline DoubleVector3_t761704365 * get_address_of_m_cameraPositionECEF_0() { return &___m_cameraPositionECEF_0; }
	inline void set_m_cameraPositionECEF_0(DoubleVector3_t761704365  value)
	{
		___m_cameraPositionECEF_0 = value;
	}

	inline static int32_t get_offset_of_m_up_1() { return static_cast<int32_t>(offsetof(ECEFTransformUpdateStrategy_t443103155, ___m_up_1)); }
	inline Vector3_t3722313464  get_m_up_1() const { return ___m_up_1; }
	inline Vector3_t3722313464 * get_address_of_m_up_1() { return &___m_up_1; }
	inline void set_m_up_1(Vector3_t3722313464  value)
	{
		___m_up_1 = value;
	}

	inline static int32_t get_offset_of_m_flattenScale_2() { return static_cast<int32_t>(offsetof(ECEFTransformUpdateStrategy_t443103155, ___m_flattenScale_2)); }
	inline float get_m_flattenScale_2() const { return ___m_flattenScale_2; }
	inline float* get_address_of_m_flattenScale_2() { return &___m_flattenScale_2; }
	inline void set_m_flattenScale_2(float value)
	{
		___m_flattenScale_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECEFTRANSFORMUPDATESTRATEGY_T443103155_H
#ifndef NATIVEPLUGINRUNNER_T3528041536_H
#define NATIVEPLUGINRUNNER_T3528041536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.NativePluginRunner
struct  NativePluginRunner_t3528041536  : public RuntimeObject
{
public:
	// Wrld.Materials.MaterialRepository Wrld.NativePluginRunner::m_materialRepository
	MaterialRepository_t701520604 * ___m_materialRepository_2;
	// Wrld.Materials.TextureLoadHandler Wrld.NativePluginRunner::m_textureLoadHandler
	TextureLoadHandler_t2080734353 * ___m_textureLoadHandler_3;
	// Wrld.MapGameObjectScene Wrld.NativePluginRunner::m_mapGameObjectScene
	MapGameObjectScene_t128928738 * ___m_mapGameObjectScene_4;
	// Wrld.StreamingUpdater Wrld.NativePluginRunner::m_streamingUpdater
	StreamingUpdater_t530401876 * ___m_streamingUpdater_5;
	// Wrld.Concurrency.ThreadService Wrld.NativePluginRunner::m_threadService
	ThreadService_t1369597789 * ___m_threadService_6;
	// System.Boolean Wrld.NativePluginRunner::m_isRunning
	bool ___m_isRunning_7;

public:
	inline static int32_t get_offset_of_m_materialRepository_2() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3528041536, ___m_materialRepository_2)); }
	inline MaterialRepository_t701520604 * get_m_materialRepository_2() const { return ___m_materialRepository_2; }
	inline MaterialRepository_t701520604 ** get_address_of_m_materialRepository_2() { return &___m_materialRepository_2; }
	inline void set_m_materialRepository_2(MaterialRepository_t701520604 * value)
	{
		___m_materialRepository_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialRepository_2), value);
	}

	inline static int32_t get_offset_of_m_textureLoadHandler_3() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3528041536, ___m_textureLoadHandler_3)); }
	inline TextureLoadHandler_t2080734353 * get_m_textureLoadHandler_3() const { return ___m_textureLoadHandler_3; }
	inline TextureLoadHandler_t2080734353 ** get_address_of_m_textureLoadHandler_3() { return &___m_textureLoadHandler_3; }
	inline void set_m_textureLoadHandler_3(TextureLoadHandler_t2080734353 * value)
	{
		___m_textureLoadHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureLoadHandler_3), value);
	}

	inline static int32_t get_offset_of_m_mapGameObjectScene_4() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3528041536, ___m_mapGameObjectScene_4)); }
	inline MapGameObjectScene_t128928738 * get_m_mapGameObjectScene_4() const { return ___m_mapGameObjectScene_4; }
	inline MapGameObjectScene_t128928738 ** get_address_of_m_mapGameObjectScene_4() { return &___m_mapGameObjectScene_4; }
	inline void set_m_mapGameObjectScene_4(MapGameObjectScene_t128928738 * value)
	{
		___m_mapGameObjectScene_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_mapGameObjectScene_4), value);
	}

	inline static int32_t get_offset_of_m_streamingUpdater_5() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3528041536, ___m_streamingUpdater_5)); }
	inline StreamingUpdater_t530401876 * get_m_streamingUpdater_5() const { return ___m_streamingUpdater_5; }
	inline StreamingUpdater_t530401876 ** get_address_of_m_streamingUpdater_5() { return &___m_streamingUpdater_5; }
	inline void set_m_streamingUpdater_5(StreamingUpdater_t530401876 * value)
	{
		___m_streamingUpdater_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_streamingUpdater_5), value);
	}

	inline static int32_t get_offset_of_m_threadService_6() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3528041536, ___m_threadService_6)); }
	inline ThreadService_t1369597789 * get_m_threadService_6() const { return ___m_threadService_6; }
	inline ThreadService_t1369597789 ** get_address_of_m_threadService_6() { return &___m_threadService_6; }
	inline void set_m_threadService_6(ThreadService_t1369597789 * value)
	{
		___m_threadService_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_threadService_6), value);
	}

	inline static int32_t get_offset_of_m_isRunning_7() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3528041536, ___m_isRunning_7)); }
	inline bool get_m_isRunning_7() const { return ___m_isRunning_7; }
	inline bool* get_address_of_m_isRunning_7() { return &___m_isRunning_7; }
	inline void set_m_isRunning_7(bool value)
	{
		___m_isRunning_7 = value;
	}
};

struct NativePluginRunner_t3528041536_StaticFields
{
public:
	// System.IntPtr Wrld.NativePluginRunner::API
	intptr_t ___API_1;

public:
	inline static int32_t get_offset_of_API_1() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3528041536_StaticFields, ___API_1)); }
	inline intptr_t get_API_1() const { return ___API_1; }
	inline intptr_t* get_address_of_API_1() { return &___API_1; }
	inline void set_API_1(intptr_t value)
	{
		___API_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEPLUGINRUNNER_T3528041536_H
#ifndef API_T1190036922_H
#define API_T1190036922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Api
struct  Api_t1190036922  : public RuntimeObject
{
public:
	// Wrld.ConfigParams/CollisionConfig Wrld.Api::CollisionStates
	CollisionConfig_t3653208188  ___CollisionStates_1;
	// Wrld.ApiImplementation Wrld.Api::m_implementation
	ApiImplementation_t1854519848 * ___m_implementation_4;

public:
	inline static int32_t get_offset_of_CollisionStates_1() { return static_cast<int32_t>(offsetof(Api_t1190036922, ___CollisionStates_1)); }
	inline CollisionConfig_t3653208188  get_CollisionStates_1() const { return ___CollisionStates_1; }
	inline CollisionConfig_t3653208188 * get_address_of_CollisionStates_1() { return &___CollisionStates_1; }
	inline void set_CollisionStates_1(CollisionConfig_t3653208188  value)
	{
		___CollisionStates_1 = value;
	}

	inline static int32_t get_offset_of_m_implementation_4() { return static_cast<int32_t>(offsetof(Api_t1190036922, ___m_implementation_4)); }
	inline ApiImplementation_t1854519848 * get_m_implementation_4() const { return ___m_implementation_4; }
	inline ApiImplementation_t1854519848 ** get_address_of_m_implementation_4() { return &___m_implementation_4; }
	inline void set_m_implementation_4(ApiImplementation_t1854519848 * value)
	{
		___m_implementation_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_implementation_4), value);
	}
};

struct Api_t1190036922_StaticFields
{
public:
	// Wrld.Api Wrld.Api::Instance
	Api_t1190036922 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Api_t1190036922_StaticFields, ___Instance_0)); }
	inline Api_t1190036922 * get_Instance_0() const { return ___Instance_0; }
	inline Api_t1190036922 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Api_t1190036922 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // API_T1190036922_H
#ifndef LATLONGALTITUDE_T944891001_H
#define LATLONGALTITUDE_T944891001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.LatLongAltitude
struct  LatLongAltitude_t944891001 
{
public:
	// Wrld.Space.LatLong Wrld.Space.LatLongAltitude::m_latLong
	LatLong_t2936018554  ___m_latLong_0;
	// System.Double Wrld.Space.LatLongAltitude::m_altitude
	double ___m_altitude_1;

public:
	inline static int32_t get_offset_of_m_latLong_0() { return static_cast<int32_t>(offsetof(LatLongAltitude_t944891001, ___m_latLong_0)); }
	inline LatLong_t2936018554  get_m_latLong_0() const { return ___m_latLong_0; }
	inline LatLong_t2936018554 * get_address_of_m_latLong_0() { return &___m_latLong_0; }
	inline void set_m_latLong_0(LatLong_t2936018554  value)
	{
		___m_latLong_0 = value;
	}

	inline static int32_t get_offset_of_m_altitude_1() { return static_cast<int32_t>(offsetof(LatLongAltitude_t944891001, ___m_altitude_1)); }
	inline double get_m_altitude_1() const { return ___m_altitude_1; }
	inline double* get_address_of_m_altitude_1() { return &___m_altitude_1; }
	inline void set_m_altitude_1(double value)
	{
		___m_altitude_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATLONGALTITUDE_T944891001_H
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
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
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
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef ENUMERATOR_T701438809_H
#define ENUMERATOR_T701438809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t701438809 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t2086727927  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t701438809, ___host_enumerator_0)); }
	inline Enumerator_t2086727927  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2086727927 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2086727927  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T701438809_H
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
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef ENUMERATOR_T3226064777_H
#define ENUMERATOR_T3226064777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Wrld.Streaming.GameObjectRecord>
struct  Enumerator_t3226064777 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t316386599  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3226064777, ___host_enumerator_0)); }
	inline Enumerator_t316386599  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t316386599 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t316386599  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3226064777_H
#ifndef CREATETHREADDELEGATE_T2573395908_H
#define CREATETHREADDELEGATE_T2573395908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Concurrency.ThreadService/CreateThreadDelegate
struct  CreateThreadDelegate_t2573395908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATETHREADDELEGATE_T2573395908_H
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
#ifndef UPDATELABELDELEGATE_T605162668_H
#define UPDATELABELDELEGATE_T605162668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Resources.Labels.LabelServiceInternal/UpdateLabelDelegate
struct  UpdateLabelDelegate_t605162668  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATELABELDELEGATE_T605162668_H
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
#ifndef REMOVELABELDELEGATE_T569890163_H
#define REMOVELABELDELEGATE_T569890163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Resources.Labels.LabelServiceInternal/RemoveLabelDelegate
struct  RemoveLabelDelegate_t569890163  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVELABELDELEGATE_T569890163_H
#ifndef THREADSTARTDELEGATE_T2173555516_H
#define THREADSTARTDELEGATE_T2173555516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Concurrency.ThreadService/ThreadStartDelegate
struct  ThreadStartDelegate_t2173555516  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTARTDELEGATE_T2173555516_H
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
#ifndef JOINTHREADDELEGATE_T1262337526_H
#define JOINTHREADDELEGATE_T1262337526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Concurrency.ThreadService/JoinThreadDelegate
struct  JoinThreadDelegate_t1262337526  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINTHREADDELEGATE_T1262337526_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef CREATECUBEMAPFROMFACESCALLBACK_T2834185402_H
#define CREATECUBEMAPFROMFACESCALLBACK_T2834185402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Materials.TextureLoadHandler/CreateCubemapFromFacesCallback
struct  CreateCubemapFromFacesCallback_t2834185402  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATECUBEMAPFROMFACESCALLBACK_T2834185402_H
#ifndef ADDLABELDELEGATE_T1714422129_H
#define ADDLABELDELEGATE_T1714422129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Resources.Labels.LabelServiceInternal/AddLabelDelegate
struct  AddLabelDelegate_t1714422129  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDLABELDELEGATE_T1714422129_H
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
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
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
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ALLOCATETEXTUREBUFFERCALLBACK_T109657048_H
#define ALLOCATETEXTUREBUFFERCALLBACK_T109657048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Materials.TextureLoadHandler/AllocateTextureBufferCallback
struct  AllocateTextureBufferCallback_t109657048  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOCATETEXTUREBUFFERCALLBACK_T109657048_H
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
#ifndef BEGINUPLOADTEXTUREBUFFERCALLBACK_T3016670851_H
#define BEGINUPLOADTEXTUREBUFFERCALLBACK_T3016670851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Materials.TextureLoadHandler/BeginUploadTextureBufferCallback
struct  BeginUploadTextureBufferCallback_t3016670851  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEGINUPLOADTEXTUREBUFFERCALLBACK_T3016670851_H
#ifndef RELEASETEXTURECALLBACK_T388032167_H
#define RELEASETEXTURECALLBACK_T388032167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Materials.TextureLoadHandler/ReleaseTextureCallback
struct  ReleaseTextureCallback_t388032167  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELEASETEXTURECALLBACK_T388032167_H
#ifndef ONTEXTURERECEIVEDCALLBACK_T1016964503_H
#define ONTEXTURERECEIVEDCALLBACK_T1016964503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService/OnTextureReceivedCallback
struct  OnTextureReceivedCallback_t1016964503  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTEXTURERECEIVEDCALLBACK_T1016964503_H
#ifndef MESHCOLLIDER_T903564387_H
#define MESHCOLLIDER_T903564387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t903564387  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T903564387_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef GEOGRAPHICTRANSFORM_T2262143282_H
#define GEOGRAPHICTRANSFORM_T2262143282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.GeographicTransform
struct  GeographicTransform_t2262143282  : public MonoBehaviour_t3962482529
{
public:
	// System.Double Wrld.Space.GeographicTransform::InitialLatitude
	double ___InitialLatitude_2;
	// System.Double Wrld.Space.GeographicTransform::InitialLongitude
	double ___InitialLongitude_3;
	// System.Single Wrld.Space.GeographicTransform::InitialHeadingInDegrees
	float ___InitialHeadingInDegrees_4;
	// System.Boolean Wrld.Space.GeographicTransform::ApplyFlattening
	bool ___ApplyFlattening_5;
	// Wrld.Common.Maths.EcefTangentBasis Wrld.Space.GeographicTransform::<TangentBasis>k__BackingField
	EcefTangentBasis_t256737685 * ___U3CTangentBasisU3Ek__BackingField_6;
	// System.Boolean Wrld.Space.GeographicTransform::m_hasEverBeenRegistered
	bool ___m_hasEverBeenRegistered_7;
	// UnityEngine.GameObject Wrld.Space.GeographicTransform::m_geolocatedParent
	GameObject_t1113636619 * ___m_geolocatedParent_8;

public:
	inline static int32_t get_offset_of_InitialLatitude_2() { return static_cast<int32_t>(offsetof(GeographicTransform_t2262143282, ___InitialLatitude_2)); }
	inline double get_InitialLatitude_2() const { return ___InitialLatitude_2; }
	inline double* get_address_of_InitialLatitude_2() { return &___InitialLatitude_2; }
	inline void set_InitialLatitude_2(double value)
	{
		___InitialLatitude_2 = value;
	}

	inline static int32_t get_offset_of_InitialLongitude_3() { return static_cast<int32_t>(offsetof(GeographicTransform_t2262143282, ___InitialLongitude_3)); }
	inline double get_InitialLongitude_3() const { return ___InitialLongitude_3; }
	inline double* get_address_of_InitialLongitude_3() { return &___InitialLongitude_3; }
	inline void set_InitialLongitude_3(double value)
	{
		___InitialLongitude_3 = value;
	}

	inline static int32_t get_offset_of_InitialHeadingInDegrees_4() { return static_cast<int32_t>(offsetof(GeographicTransform_t2262143282, ___InitialHeadingInDegrees_4)); }
	inline float get_InitialHeadingInDegrees_4() const { return ___InitialHeadingInDegrees_4; }
	inline float* get_address_of_InitialHeadingInDegrees_4() { return &___InitialHeadingInDegrees_4; }
	inline void set_InitialHeadingInDegrees_4(float value)
	{
		___InitialHeadingInDegrees_4 = value;
	}

	inline static int32_t get_offset_of_ApplyFlattening_5() { return static_cast<int32_t>(offsetof(GeographicTransform_t2262143282, ___ApplyFlattening_5)); }
	inline bool get_ApplyFlattening_5() const { return ___ApplyFlattening_5; }
	inline bool* get_address_of_ApplyFlattening_5() { return &___ApplyFlattening_5; }
	inline void set_ApplyFlattening_5(bool value)
	{
		___ApplyFlattening_5 = value;
	}

	inline static int32_t get_offset_of_U3CTangentBasisU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GeographicTransform_t2262143282, ___U3CTangentBasisU3Ek__BackingField_6)); }
	inline EcefTangentBasis_t256737685 * get_U3CTangentBasisU3Ek__BackingField_6() const { return ___U3CTangentBasisU3Ek__BackingField_6; }
	inline EcefTangentBasis_t256737685 ** get_address_of_U3CTangentBasisU3Ek__BackingField_6() { return &___U3CTangentBasisU3Ek__BackingField_6; }
	inline void set_U3CTangentBasisU3Ek__BackingField_6(EcefTangentBasis_t256737685 * value)
	{
		___U3CTangentBasisU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTangentBasisU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_m_hasEverBeenRegistered_7() { return static_cast<int32_t>(offsetof(GeographicTransform_t2262143282, ___m_hasEverBeenRegistered_7)); }
	inline bool get_m_hasEverBeenRegistered_7() const { return ___m_hasEverBeenRegistered_7; }
	inline bool* get_address_of_m_hasEverBeenRegistered_7() { return &___m_hasEverBeenRegistered_7; }
	inline void set_m_hasEverBeenRegistered_7(bool value)
	{
		___m_hasEverBeenRegistered_7 = value;
	}

	inline static int32_t get_offset_of_m_geolocatedParent_8() { return static_cast<int32_t>(offsetof(GeographicTransform_t2262143282, ___m_geolocatedParent_8)); }
	inline GameObject_t1113636619 * get_m_geolocatedParent_8() const { return ___m_geolocatedParent_8; }
	inline GameObject_t1113636619 ** get_address_of_m_geolocatedParent_8() { return &___m_geolocatedParent_8; }
	inline void set_m_geolocatedParent_8(GameObject_t1113636619 * value)
	{
		___m_geolocatedParent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_geolocatedParent_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GEOGRAPHICTRANSFORM_T2262143282_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef WRLDMAP_T2502476010_H
#define WRLDMAP_T2502476010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WrldMap
struct  WrldMap_t2502476010  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera WrldMap::m_streamingCamera
	Camera_t4157153871 * ___m_streamingCamera_2;
	// System.String WrldMap::m_apiKey
	String_t* ___m_apiKey_3;
	// System.Double WrldMap::m_latitudeDegrees
	double ___m_latitudeDegrees_4;
	// System.Double WrldMap::m_longitudeDegrees
	double ___m_longitudeDegrees_5;
	// System.Double WrldMap::m_distanceToInterest
	double ___m_distanceToInterest_6;
	// System.Double WrldMap::m_headingDegrees
	double ___m_headingDegrees_7;
	// Wrld.CoordinateSystem WrldMap::m_coordSystem
	int32_t ___m_coordSystem_8;
	// System.Boolean WrldMap::m_streamingLodBasedOnDistance
	bool ___m_streamingLodBasedOnDistance_9;
	// System.String WrldMap::m_materialDirectory
	String_t* ___m_materialDirectory_10;
	// UnityEngine.Material WrldMap::m_overrideLandmarkMaterial
	Material_t340375123 * ___m_overrideLandmarkMaterial_11;
	// System.Boolean WrldMap::m_useBuiltInCameraControls
	bool ___m_useBuiltInCameraControls_12;
	// System.Boolean WrldMap::m_terrainCollisions
	bool ___m_terrainCollisions_13;
	// System.Boolean WrldMap::m_roadCollisions
	bool ___m_roadCollisions_14;
	// System.Boolean WrldMap::m_buildingCollisions
	bool ___m_buildingCollisions_15;
	// System.Boolean WrldMap::m_enableLabels
	bool ___m_enableLabels_16;
	// Wrld.Api WrldMap::m_api
	Api_t1190036922 * ___m_api_17;

public:
	inline static int32_t get_offset_of_m_streamingCamera_2() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_streamingCamera_2)); }
	inline Camera_t4157153871 * get_m_streamingCamera_2() const { return ___m_streamingCamera_2; }
	inline Camera_t4157153871 ** get_address_of_m_streamingCamera_2() { return &___m_streamingCamera_2; }
	inline void set_m_streamingCamera_2(Camera_t4157153871 * value)
	{
		___m_streamingCamera_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_streamingCamera_2), value);
	}

	inline static int32_t get_offset_of_m_apiKey_3() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_apiKey_3)); }
	inline String_t* get_m_apiKey_3() const { return ___m_apiKey_3; }
	inline String_t** get_address_of_m_apiKey_3() { return &___m_apiKey_3; }
	inline void set_m_apiKey_3(String_t* value)
	{
		___m_apiKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_apiKey_3), value);
	}

	inline static int32_t get_offset_of_m_latitudeDegrees_4() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_latitudeDegrees_4)); }
	inline double get_m_latitudeDegrees_4() const { return ___m_latitudeDegrees_4; }
	inline double* get_address_of_m_latitudeDegrees_4() { return &___m_latitudeDegrees_4; }
	inline void set_m_latitudeDegrees_4(double value)
	{
		___m_latitudeDegrees_4 = value;
	}

	inline static int32_t get_offset_of_m_longitudeDegrees_5() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_longitudeDegrees_5)); }
	inline double get_m_longitudeDegrees_5() const { return ___m_longitudeDegrees_5; }
	inline double* get_address_of_m_longitudeDegrees_5() { return &___m_longitudeDegrees_5; }
	inline void set_m_longitudeDegrees_5(double value)
	{
		___m_longitudeDegrees_5 = value;
	}

	inline static int32_t get_offset_of_m_distanceToInterest_6() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_distanceToInterest_6)); }
	inline double get_m_distanceToInterest_6() const { return ___m_distanceToInterest_6; }
	inline double* get_address_of_m_distanceToInterest_6() { return &___m_distanceToInterest_6; }
	inline void set_m_distanceToInterest_6(double value)
	{
		___m_distanceToInterest_6 = value;
	}

	inline static int32_t get_offset_of_m_headingDegrees_7() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_headingDegrees_7)); }
	inline double get_m_headingDegrees_7() const { return ___m_headingDegrees_7; }
	inline double* get_address_of_m_headingDegrees_7() { return &___m_headingDegrees_7; }
	inline void set_m_headingDegrees_7(double value)
	{
		___m_headingDegrees_7 = value;
	}

	inline static int32_t get_offset_of_m_coordSystem_8() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_coordSystem_8)); }
	inline int32_t get_m_coordSystem_8() const { return ___m_coordSystem_8; }
	inline int32_t* get_address_of_m_coordSystem_8() { return &___m_coordSystem_8; }
	inline void set_m_coordSystem_8(int32_t value)
	{
		___m_coordSystem_8 = value;
	}

	inline static int32_t get_offset_of_m_streamingLodBasedOnDistance_9() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_streamingLodBasedOnDistance_9)); }
	inline bool get_m_streamingLodBasedOnDistance_9() const { return ___m_streamingLodBasedOnDistance_9; }
	inline bool* get_address_of_m_streamingLodBasedOnDistance_9() { return &___m_streamingLodBasedOnDistance_9; }
	inline void set_m_streamingLodBasedOnDistance_9(bool value)
	{
		___m_streamingLodBasedOnDistance_9 = value;
	}

	inline static int32_t get_offset_of_m_materialDirectory_10() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_materialDirectory_10)); }
	inline String_t* get_m_materialDirectory_10() const { return ___m_materialDirectory_10; }
	inline String_t** get_address_of_m_materialDirectory_10() { return &___m_materialDirectory_10; }
	inline void set_m_materialDirectory_10(String_t* value)
	{
		___m_materialDirectory_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialDirectory_10), value);
	}

	inline static int32_t get_offset_of_m_overrideLandmarkMaterial_11() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_overrideLandmarkMaterial_11)); }
	inline Material_t340375123 * get_m_overrideLandmarkMaterial_11() const { return ___m_overrideLandmarkMaterial_11; }
	inline Material_t340375123 ** get_address_of_m_overrideLandmarkMaterial_11() { return &___m_overrideLandmarkMaterial_11; }
	inline void set_m_overrideLandmarkMaterial_11(Material_t340375123 * value)
	{
		___m_overrideLandmarkMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_overrideLandmarkMaterial_11), value);
	}

	inline static int32_t get_offset_of_m_useBuiltInCameraControls_12() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_useBuiltInCameraControls_12)); }
	inline bool get_m_useBuiltInCameraControls_12() const { return ___m_useBuiltInCameraControls_12; }
	inline bool* get_address_of_m_useBuiltInCameraControls_12() { return &___m_useBuiltInCameraControls_12; }
	inline void set_m_useBuiltInCameraControls_12(bool value)
	{
		___m_useBuiltInCameraControls_12 = value;
	}

	inline static int32_t get_offset_of_m_terrainCollisions_13() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_terrainCollisions_13)); }
	inline bool get_m_terrainCollisions_13() const { return ___m_terrainCollisions_13; }
	inline bool* get_address_of_m_terrainCollisions_13() { return &___m_terrainCollisions_13; }
	inline void set_m_terrainCollisions_13(bool value)
	{
		___m_terrainCollisions_13 = value;
	}

	inline static int32_t get_offset_of_m_roadCollisions_14() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_roadCollisions_14)); }
	inline bool get_m_roadCollisions_14() const { return ___m_roadCollisions_14; }
	inline bool* get_address_of_m_roadCollisions_14() { return &___m_roadCollisions_14; }
	inline void set_m_roadCollisions_14(bool value)
	{
		___m_roadCollisions_14 = value;
	}

	inline static int32_t get_offset_of_m_buildingCollisions_15() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_buildingCollisions_15)); }
	inline bool get_m_buildingCollisions_15() const { return ___m_buildingCollisions_15; }
	inline bool* get_address_of_m_buildingCollisions_15() { return &___m_buildingCollisions_15; }
	inline void set_m_buildingCollisions_15(bool value)
	{
		___m_buildingCollisions_15 = value;
	}

	inline static int32_t get_offset_of_m_enableLabels_16() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_enableLabels_16)); }
	inline bool get_m_enableLabels_16() const { return ___m_enableLabels_16; }
	inline bool* get_address_of_m_enableLabels_16() { return &___m_enableLabels_16; }
	inline void set_m_enableLabels_16(bool value)
	{
		___m_enableLabels_16 = value;
	}

	inline static int32_t get_offset_of_m_api_17() { return static_cast<int32_t>(offsetof(WrldMap_t2502476010, ___m_api_17)); }
	inline Api_t1190036922 * get_m_api_17() const { return ___m_api_17; }
	inline Api_t1190036922 ** get_address_of_m_api_17() { return &___m_api_17; }
	inline void set_m_api_17(Api_t1190036922 * value)
	{
		___m_api_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_api_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRLDMAP_T2502476010_H
#ifndef BASEMESHEFFECT_T2440176439_H
#define BASEMESHEFFECT_T2440176439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t2440176439  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t1660335611 * ___m_Graphic_2;

public:
	inline static int32_t get_offset_of_m_Graphic_2() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t2440176439, ___m_Graphic_2)); }
	inline Graphic_t1660335611 * get_m_Graphic_2() const { return ___m_Graphic_2; }
	inline Graphic_t1660335611 ** get_address_of_m_Graphic_2() { return &___m_Graphic_2; }
	inline void set_m_Graphic_2(Graphic_t1660335611 * value)
	{
		___m_Graphic_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMESHEFFECT_T2440176439_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef SHADOW_T773074319_H
#define SHADOW_T773074319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t773074319  : public BaseMeshEffect_t2440176439
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t2555686324  ___m_EffectColor_3;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t2156229523  ___m_EffectDistance_4;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_5;

public:
	inline static int32_t get_offset_of_m_EffectColor_3() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_EffectColor_3)); }
	inline Color_t2555686324  get_m_EffectColor_3() const { return ___m_EffectColor_3; }
	inline Color_t2555686324 * get_address_of_m_EffectColor_3() { return &___m_EffectColor_3; }
	inline void set_m_EffectColor_3(Color_t2555686324  value)
	{
		___m_EffectColor_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_4() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_EffectDistance_4)); }
	inline Vector2_t2156229523  get_m_EffectDistance_4() const { return ___m_EffectDistance_4; }
	inline Vector2_t2156229523 * get_address_of_m_EffectDistance_4() { return &___m_EffectDistance_4; }
	inline void set_m_EffectDistance_4(Vector2_t2156229523  value)
	{
		___m_EffectDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_5() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_UseGraphicAlpha_5)); }
	inline bool get_m_UseGraphicAlpha_5() const { return ___m_UseGraphicAlpha_5; }
	inline bool* get_address_of_m_UseGraphicAlpha_5() { return &___m_UseGraphicAlpha_5; }
	inline void set_m_UseGraphicAlpha_5(bool value)
	{
		___m_UseGraphicAlpha_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOW_T773074319_H
#ifndef OUTLINE_T2536100125_H
#define OUTLINE_T2536100125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Outline
struct  Outline_t2536100125  : public Shadow_t773074319
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTLINE_T2536100125_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t3648964284 * m_Items[1];

public:
	inline Mesh_t3648964284 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t3648964284 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t3648964284 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Mesh_t3648964284 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t3648964284 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t3648964284 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t2132764133  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshRenderer_t587009260 * m_Items[1];

public:
	inline MeshRenderer_t587009260 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_t587009260 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_t587009260 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MeshRenderer_t587009260 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_t587009260 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_t587009260 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};

extern "C" void PositionerCreateParamsInterop_t3667260723_marshal_pinvoke(const PositionerCreateParamsInterop_t3667260723& unmarshaled, PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke& marshaled);
extern "C" void PositionerCreateParamsInterop_t3667260723_marshal_pinvoke_back(const PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke& marshaled, PositionerCreateParamsInterop_t3667260723& unmarshaled);
extern "C" void PositionerCreateParamsInterop_t3667260723_marshal_pinvoke_cleanup(PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke& marshaled);
extern "C" void CameraState_t2128520787_marshal_pinvoke(const CameraState_t2128520787& unmarshaled, CameraState_t2128520787_marshaled_pinvoke& marshaled);
extern "C" void CameraState_t2128520787_marshal_pinvoke_back(const CameraState_t2128520787_marshaled_pinvoke& marshaled, CameraState_t2128520787& unmarshaled);
extern "C" void CameraState_t2128520787_marshal_pinvoke_cleanup(CameraState_t2128520787_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_Load_TisRuntimeObject_m597869152_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// T Wrld.Utilities.NativeInteropExtensions::NativeHandleToObject<System.Object>(System.IntPtr)
extern "C"  RuntimeObject * NativeInteropExtensions_NativeHandleToObject_TisRuntimeObject_m3998260174_gshared (RuntimeObject * __this /* static, unused */, intptr_t ___handlePointer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C"  ValueCollection_t1848589470 * Dictionary_2_get_Values_m2492087945_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t701438809  ValueCollection_GetEnumerator_m3808619909_gshared (ValueCollection_t1848589470 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m2014973879_gshared (Enumerator_t701438809 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m181298207_gshared (Enumerator_t701438809 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m1051275336_gshared (Enumerator_t701438809 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m1319386616_gshared (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.IndoorMaps.StreamedTextureRequest::set_Material(Wrld.Resources.IndoorMaps.IIndoorMapMaterial)
extern "C"  void StreamedTextureRequest_set_Material_m506006575 (StreamedTextureRequest_t1934737979 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.IndoorMaps.StreamedTextureRequest::set_TextureKey(System.String)
extern "C"  void StreamedTextureRequest_set_TextureKey_m3278807391 (StreamedTextureRequest_t1934737979 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.IndoorMaps.StreamedTextureRequest::set_Observer(Wrld.Resources.IndoorMaps.IIndoorMapStreamedTextureObserver)
extern "C"  void StreamedTextureRequest_set_Observer_m2008176993 (StreamedTextureRequest_t1934737979 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.IndoorMaps.StreamedTextureRequest::set_Originator(Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService)
extern "C"  void StreamedTextureRequest_set_Originator_m2930321584 (StreamedTextureRequest_t1934737979 * __this, IndoorMapTextureStreamingService_t4078817394 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.Labels.LabelServiceInternal::AddLabel(System.IntPtr,System.String,System.String,Wrld.Interop.ColorInterop&,System.Int32,System.Double)
extern "C"  void LabelServiceInternal_AddLabel_m2638924068 (RuntimeObject * __this /* static, unused */, intptr_t ___labelServiceHandle0, String_t* ___labelId1, String_t* ___labelText2, ColorInterop_t1726030811 * ___color3, int32_t ___baseFontSize4, double ___fontScale5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.Labels.LabelServiceInternal::UpdateLabel(System.IntPtr,System.String,Wrld.Interop.ColorInterop&,UnityEngine.Vector2&,System.Single)
extern "C"  void LabelServiceInternal_UpdateLabel_m1636846679 (RuntimeObject * __this /* static, unused */, intptr_t ___labelServiceHandle0, String_t* ___labelId1, ColorInterop_t1726030811 * ___textColor2, Vector2_t2156229523 * ___position3, float ___rotationAngleDegrees4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.Labels.LabelServiceInternal::RemoveLabel(System.IntPtr,System.String)
extern "C"  void LabelServiceInternal_RemoveLabel_m4053777316 (RuntimeObject * __this /* static, unused */, intptr_t ___labelServiceHandle0, String_t* ___labelId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text>::.ctor()
#define Dictionary_2__ctor_m1498171786(__this, method) ((  void (*) (Dictionary_2_t1687139013 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
#define GameObject_GetComponent_TisCanvas_t3310196443_m1808013672(__this, method) ((  Canvas_t3310196443 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.IntPtr Wrld.Utilities.NativeInteropHelpers::AllocateNativeHandleForObject(System.Object)
extern "C"  intptr_t NativeInteropHelpers_AllocateNativeHandleForObject_m3143731542 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
#define Resources_Load_TisGameObject_t1113636619_m1734345100(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t1901882714_m2114913816(__this, method) ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3099699669(__this, p0, method) ((  bool (*) (Dictionary_2_t1687139013 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void Wrld.Resources.Labels.LabelServiceInternal::DestroyLabel(System.String)
extern "C"  void LabelServiceInternal_DestroyLabel_m452857124 (LabelServiceInternal_t3414831883 * __this, String_t* ___labelId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
extern "C"  void Text_set_fontSize_m3617617524 (Text_t1901882714 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C"  void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C"  float Canvas_get_scaleFactor_m3314757802 (Canvas_t3310196443 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Outline>()
#define GameObject_GetComponent_TisOutline_t2536100125_m3068308663(__this, method) ((  Outline_t2536100125 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
extern "C"  void Shadow_set_effectColor_m3910676693 (Shadow_t773074319 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C"  void Transform_SetAsFirstSibling_m253439912 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text>::Add(!0,!1)
#define Dictionary_2_Add_m257718337(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1687139013 *, String_t*, Text_t1901882714 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3938898806(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t1687139013 *, String_t*, Text_t1901882714 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// UnityEngine.Rect UnityEngine.Canvas::get_pixelRect()
extern "C"  Rect_t2360479859  Canvas_get_pixelRect_m516402434 (Canvas_t3310196443 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text>::get_Item(!0)
#define Dictionary_2_get_Item_m4036631011(__this, p0, method) ((  Text_t1901882714 * (*) (Dictionary_2_t1687139013 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean UnityEngine.EventSystems.UIBehaviour::IsDestroyed()
extern "C"  bool UIBehaviour_IsDestroyed_m3033055982 (UIBehaviour_t3495933518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text>::Remove(!0)
#define Dictionary_2_Remove_m3513537345(__this, p0, method) ((  bool (*) (Dictionary_2_t1687139013 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Text>::get_Keys()
#define Dictionary_2_get_Keys_m1138737473(__this, method) ((  KeyCollection_t1876814484 * (*) (Dictionary_2_t1687139013 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m864250344(__this, p0, method) ((  void (*) (List_1_t3319525431 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m1955908099(__this, method) ((  Enumerator_t913802012  (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
#define Enumerator_get_Current_m236733038(__this, method) ((  String_t* (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
#define Enumerator_MoveNext_m4158182743(__this, method) ((  bool (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
#define Enumerator_Dispose_m2026665411(__this, method) ((  void (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void Wrld.Utilities.NativeInteropHelpers::FreeNativeHandle(System.IntPtr)
extern "C"  void NativeInteropHelpers_FreeNativeHandle_m4202217538 (RuntimeObject * __this /* static, unused */, intptr_t ___handlePointer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T Wrld.Utilities.NativeInteropExtensions::NativeHandleToObject<Wrld.Resources.Labels.LabelServiceInternal>(System.IntPtr)
#define NativeInteropExtensions_NativeHandleToObject_TisLabelServiceInternal_t3414831883_m3108454946(__this /* static, unused */, ___handlePointer0, method) ((  LabelServiceInternal_t3414831883 * (*) (RuntimeObject * /* static, unused */, intptr_t, const RuntimeMethod*))NativeInteropExtensions_NativeHandleToObject_TisRuntimeObject_m3998260174_gshared)(__this /* static, unused */, ___handlePointer0, method)
// UnityEngine.Color Wrld.Interop.InteropExtensions::ToColor(Wrld.Interop.ColorInterop)
extern "C"  Color_t2555686324  InteropExtensions_ToColor_m3965519103 (RuntimeObject * __this /* static, unused */, ColorInterop_t1726030811  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.Labels.LabelServiceInternal::AddLabel(System.String,System.String,UnityEngine.Color,System.Int32,System.Double)
extern "C"  void LabelServiceInternal_AddLabel_m803203325 (LabelServiceInternal_t3414831883 * __this, String_t* ___labelId0, String_t* ___labelText1, Color_t2555686324  ___haloColor2, int32_t ___baseFontSize3, double ___fontScale4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.Labels.LabelServiceInternal::UpdateLabel(System.String,UnityEngine.Color,UnityEngine.Vector2,System.Single)
extern "C"  void LabelServiceInternal_UpdateLabel_m2393798876 (LabelServiceInternal_t3414831883 * __this, String_t* ___labelId0, Color_t2555686324  ___textColor1, Vector2_t2156229523  ___position2, float ___rotationAngleDegrees3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.Labels.LabelServiceInternal/AddLabelDelegate::Invoke(System.IntPtr,System.String,System.String,Wrld.Interop.ColorInterop&,System.Int32,System.Double)
extern "C"  void AddLabelDelegate_Invoke_m4248454141 (AddLabelDelegate_t1714422129 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, String_t* ___labelText2, ColorInterop_t1726030811 * ___color3, int32_t ___baseFontSize4, double ___fontScale5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.Labels.LabelServiceInternal/RemoveLabelDelegate::Invoke(System.IntPtr,System.String)
extern "C"  void RemoveLabelDelegate_Invoke_m2229750953 (RemoveLabelDelegate_t569890163 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.Labels.LabelServiceInternal/UpdateLabelDelegate::Invoke(System.IntPtr,System.String,Wrld.Interop.ColorInterop&,UnityEngine.Vector2&,System.Single)
extern "C"  void UpdateLabelDelegate_Invoke_m113718171 (UpdateLabelDelegate_t605162668 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, ColorInterop_t1726030811 * ___textColor2, Vector2_t2156229523 * ___position3, float ___rotationAngleDegrees4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Resources.Terrain.Heights.TerrainHeightProvider::TryGetTerrainHeight(System.IntPtr,System.Double,System.Double,System.Double,System.Single&)
extern "C"  bool TerrainHeightProvider_TryGetTerrainHeight_m2287061277 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, double ___ecefX1, double ___ecefY2, double ___ecefZ3, float* ___out_terrainHeight4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Wrld.Resources.Terrain.Heights.TerrainHeightProvider::GetMinTerrainHeight(System.IntPtr)
extern "C"  float TerrainHeightProvider_GetMinTerrainHeight_m4174271395 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Wrld.Resources.Terrain.Heights.TerrainHeightProvider::GetMaxTerrainHeight(System.IntPtr)
extern "C"  float TerrainHeightProvider_GetMaxTerrainHeight_m311572516 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.SceneCallbacks::.ctor(System.IntPtr,Wrld.MapGameObjectScene/SetScaleCallback,Wrld.MapGameObjectScene/SetTranslationCallback,Wrld.MapGameObjectScene/SetOrientationCallback,Wrld.MapGameObjectScene/SetColorCallback)
extern "C"  void SceneCallbacks__ctor_m2017158871 (SceneCallbacks_t4278023046 * __this, intptr_t ____sceneServiceCallbacks0, SetScaleCallback_t2997993506 * ____setScale1, SetTranslationCallback_t3765364063 * ____setTranslation2, SetOrientationCallback_t1136855763 * ____setRotation3, SetColorCallback_t2629579893 * ____setColor4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.MapGameObjectScene/SetScaleCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SetScaleCallback__ctor_m3879199287 (SetScaleCallback_t2997993506 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.MapGameObjectScene/SetTranslationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SetTranslationCallback__ctor_m2332495158 (SetTranslationCallback_t3765364063 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.MapGameObjectScene/SetOrientationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SetOrientationCallback__ctor_m3184023659 (SetOrientationCallback_t1136855763 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.MapGameObjectScene/SetColorCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SetColorCallback__ctor_m3212836024 (SetColorCallback_t2629579893 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Scripts.Utilities.APIKeyHelpers::AppearsValid(System.String)
extern "C"  bool APIKeyHelpers_AppearsValid_m169516127 (RuntimeObject * __this /* static, unused */, String_t* ___apiKey0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C"  void PlayerPrefs_SetString_m2101271233 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Scripts.Utilities.APIKeyHelpers::readCachedKeyFromPlayerPref()
extern "C"  void APIKeyHelpers_readCachedKeyFromPlayerPref_m3379974318 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
extern "C"  bool Regex_IsMatch_m3266004395 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C"  String_t* PlayerPrefs_GetString_m389913383 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Common.Maths.DoubleVector3::.ctor(System.Double,System.Double,System.Double)
extern "C"  void DoubleVector3__ctor_m393031433 (DoubleVector3_t761704365 * __this, double ___X0, double ___Y1, double ___Z2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Space.LatLongAltitude Wrld.Space.LatLongAltitude::FromRadians(System.Double,System.Double,System.Double)
extern "C"  LatLongAltitude_t944891001  LatLongAltitude_FromRadians_m303748098 (RuntimeObject * __this /* static, unused */, double ___latitudeInRadians0, double ___longitudeInRadians1, double ___altitudeInMetres2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Space.LatLongAltitude Wrld.Space.CoordinateConversions::ConvertEcefToLatLongAltitude(System.Double,System.Double,System.Double)
extern "C"  LatLongAltitude_t944891001  CoordinateConversions_ConvertEcefToLatLongAltitude_m3276727551 (RuntimeObject * __this /* static, unused */, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.DoubleVector3::op_Subtraction(Wrld.Common.Maths.DoubleVector3,Wrld.Common.Maths.DoubleVector3)
extern "C"  DoubleVector3_t761704365  DoubleVector3_op_Subtraction_m1122701270 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ____lhs0, DoubleVector3_t761704365  ____rhs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Wrld.Common.Maths.DoubleVector3Extensions::ToSingleVector(Wrld.Common.Maths.DoubleVector3)
extern "C"  Vector3_t3722313464  DoubleVector3Extensions_ToSingleVector_m1142520591 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ____vector0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.DoubleVector3::get_normalized()
extern "C"  DoubleVector3_t761704365  DoubleVector3_get_normalized_m277955098 (DoubleVector3_t761704365 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_FromToRotation_m3769621427 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.TransformHelper::ApplyTransform(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  void TransformHelper_ApplyTransform_m3531692701 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___objectTransform0, Vector3_t3722313464  ___parentPosition1, Vector3_t3722313464  ___parentScale2, Quaternion_t2301928331  ___parentRotation3, Quaternion_t2301928331  ___childRotation4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::SetIsFlattened(System.Boolean)
extern "C"  void EnvironmentFlatteningApiInternal_SetIsFlattened_m476507073 (EnvironmentFlatteningApiInternal_t833742330 * __this, bool ___isFlattened0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::IsFlattened()
extern "C"  bool EnvironmentFlatteningApiInternal_IsFlattened_m126605943 (EnvironmentFlatteningApiInternal_t833742330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::GetCurrentScale()
extern "C"  float EnvironmentFlatteningApiInternal_GetCurrentScale_m61216325 (EnvironmentFlatteningApiInternal_t833742330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::NativeEnvironmentFlattening_SetIsFlattened(System.IntPtr,System.Boolean)
extern "C"  void EnvironmentFlatteningApiInternal_NativeEnvironmentFlattening_SetIsFlattened_m1880547085 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, bool ___isFlattened1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::NativeEnvironmentFlattening_IsFlattened(System.IntPtr)
extern "C"  bool EnvironmentFlatteningApiInternal_NativeEnvironmentFlattening_IsFlattened_m4255541761 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::NativeEnvironmentFlattening_GetCurrentScale(System.IntPtr)
extern "C"  float EnvironmentFlatteningApiInternal_NativeEnvironmentFlattening_GetCurrentScale_m2752121285 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Wrld.Space.GeographicTransform>::.ctor()
#define List_1__ctor_m1945976614(__this, method) ((  void (*) (List_1_t3734218024 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Wrld.Space.GeographicTransform>::GetEnumerator()
#define List_1_GetEnumerator_m146193980(__this, method) ((  Enumerator_t1328494605  (*) (List_1_t3734218024 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Wrld.Space.GeographicTransform>::get_Current()
#define Enumerator_get_Current_m1927553120(__this, method) ((  GeographicTransform_t2262143282 * (*) (Enumerator_t1328494605 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void Wrld.Space.GeographicTransform::UpdateTransform(Wrld.Space.ITransformUpdateStrategy)
extern "C"  void GeographicTransform_UpdateTransform_m852920404 (GeographicTransform_t2262143282 * __this, RuntimeObject* ___updateStrategy0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Wrld.Space.GeographicTransform>::MoveNext()
#define Enumerator_MoveNext_m3272893753(__this, method) ((  bool (*) (Enumerator_t1328494605 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Wrld.Space.GeographicTransform>::Dispose()
#define Enumerator_Dispose_m3870958928(__this, method) ((  void (*) (Enumerator_t1328494605 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Wrld.Space.GeographicTransform>::Add(!0)
#define List_1_Add_m3045984222(__this, p0, method) ((  void (*) (List_1_t3734218024 *, GeographicTransform_t2262143282 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<Wrld.Space.GeographicTransform>::Remove(!0)
#define List_1_Remove_m47683195(__this, p0, method) ((  bool (*) (List_1_t3734218024 *, GeographicTransform_t2262143282 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Space.GeographicApi Wrld.Api::get_GeographicApi()
extern "C"  GeographicApi_t2934948604 * Api_get_GeographicApi_m1869952797 (Api_t1190036922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.GeographicApi::RegisterGeographicTransform(Wrld.Space.GeographicTransform)
extern "C"  void GeographicApi_RegisterGeographicTransform_m61910415 (GeographicApi_t2934948604 * __this, GeographicTransform_t2262143282 * ___geographicTransform0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.GeographicApi::UnregisterGeographicTransform(Wrld.Space.GeographicTransform)
extern "C"  void GeographicApi_UnregisterGeographicTransform_m2308987172 (GeographicApi_t2934948604 * __this, GeographicTransform_t2262143282 * ___geographicTransform0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.GeographicTransform::RegisterSelf()
extern "C"  void GeographicTransform_RegisterSelf_m2974456903 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.GeographicTransform::RemoveGeolocatedParent()
extern "C"  void GeographicTransform_RemoveGeolocatedParent_m2325833328 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.GeographicTransform::UnregisterSelf()
extern "C"  void GeographicTransform_UnregisterSelf_m2339455917 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Space.LatLong Wrld.Space.LatLong::FromDegrees(System.Double,System.Double)
extern "C"  LatLong_t2936018554  LatLong_FromDegrees_m795494841 (RuntimeObject * __this /* static, unused */, double ___latitudeInDegrees0, double ___longitudeInDegrees1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.LatLong::ToECEF()
extern "C"  DoubleVector3_t761704365  LatLong_ToECEF_m3030091887 (LatLong_t2936018554 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.EcefTangentBasis Wrld.Common.Maths.EcefHelpers::EcefTangentBasisFromPointAndHeading(Wrld.Common.Maths.DoubleVector3,System.Single)
extern "C"  EcefTangentBasis_t256737685 * EcefHelpers_EcefTangentBasisFromPointAndHeading_m2386421953 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ___worldPointEcef0, float ___absoluteHeadingDegrees1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.GeographicTransform::set_TangentBasis(Wrld.Common.Maths.EcefTangentBasis)
extern "C"  void GeographicTransform_set_TangentBasis_m978748852 (GeographicTransform_t2262143282 * __this, EcefTangentBasis_t256737685 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.GeographicTransform::AddGeolocatedParent()
extern "C"  void GeographicTransform_AddGeolocatedParent_m2822110356 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.EcefTangentBasis Wrld.Space.GeographicTransform::get_TangentBasis()
extern "C"  EcefTangentBasis_t256737685 * GeographicTransform_get_TangentBasis_m1779212057 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Wrld.Common.Maths.EcefTangentBasis::get_Forward()
extern "C"  Vector3_t3722313464  EcefTangentBasis_get_Forward_m655875149 (EcefTangentBasis_t256737685 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Wrld.Common.Maths.EcefTangentBasis::get_Up()
extern "C"  Vector3_t3722313464  EcefTangentBasis_get_Up_m2000118741 (EcefTangentBasis_t256737685 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m3197602968 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.EcefTangentBasis::get_PointEcef()
extern "C"  DoubleVector3_t761704365  EcefTangentBasis_get_PointEcef_m273637096 (EcefTangentBasis_t256737685 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.GeographicTransform::SetPosition(Wrld.Common.Maths.DoubleVector3)
extern "C"  void GeographicTransform_SetPosition_m1949716587 (GeographicTransform_t2262143282 * __this, DoubleVector3_t761704365  ___ecefPosition0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Common.Maths.EcefTangentBasis::SetPoint(Wrld.Common.Maths.DoubleVector3)
extern "C"  void EcefTangentBasis_SetPoint_m3708257628 (EcefTangentBasis_t256737685 * __this, DoubleVector3_t761704365  ___pointEcef0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Space.LatLongAltitude Wrld.Space.CoordinateConversions::ConvertEcefToLatLongAltitude(Wrld.Common.Maths.DoubleVector3)
extern "C"  LatLongAltitude_t944891001  CoordinateConversions_ConvertEcefToLatLongAltitude_m3101309193 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ___ecef0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Space.LatLong Wrld.Space.LatLongAltitude::GetLatLong()
extern "C"  LatLong_t2936018554  LatLongAltitude_GetLatLong_m87485461 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLong::.ctor(System.Double,System.Double)
extern "C"  void LatLong__ctor_m839127672 (LatLong_t2936018554 * __this, double ___latitudeInDegrees0, double ___longitudeInDegrees1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Helpers.MathsHelpers::Deg2Rad(System.Double)
extern "C"  double MathsHelpers_Deg2Rad_m3093923714 (RuntimeObject * __this /* static, unused */, double ___degrees0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLong::GetLatitudeInRadians()
extern "C"  double LatLong_GetLatitudeInRadians_m2500370041 (LatLong_t2936018554 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLong::GetLongitudeInRadians()
extern "C"  double LatLong_GetLongitudeInRadians_m579521360 (LatLong_t2936018554 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Helpers.MathsHelpers::Rad2Deg(System.Double)
extern "C"  double MathsHelpers_Rad2Deg_m41225180 (RuntimeObject * __this /* static, unused */, double ___radians0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLong::SetLatitudeInRadians(System.Double)
extern "C"  void LatLong_SetLatitudeInRadians_m374851290 (LatLong_t2936018554 * __this, double ___latitudeInRadians0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLong::SetLongitudeInRadians(System.Double)
extern "C"  void LatLong_SetLongitudeInRadians_m2012635323 (LatLong_t2936018554 * __this, double ___longitudeInRadians0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLong::SetLatitude(System.Double)
extern "C"  void LatLong_SetLatitude_m1131139776 (LatLong_t2936018554 * __this, double ___latitudeInDegrees0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLong::SetLongitude(System.Double)
extern "C"  void LatLong_SetLongitude_m4176551337 (LatLong_t2936018554 * __this, double ___longitudeInDegrees0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLong::GetLatitude()
extern "C"  double LatLong_GetLatitude_m3536532606 (LatLong_t2936018554 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLong::GetLongitude()
extern "C"  double LatLong_GetLongitude_m3347807967 (LatLong_t2936018554 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.CoordinateConversions::ConvertLatLongAltitudeToEcef(System.Double,System.Double,System.Double)
extern "C"  DoubleVector3_t761704365  CoordinateConversions_ConvertLatLongAltitudeToEcef_m3731996007 (RuntimeObject * __this /* static, unused */, double ___latitudeInRadians0, double ___longitudeInRadians1, double ___altitudeInMetres2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLong::BearingTo(Wrld.Space.LatLong)
extern "C"  double LatLong_BearingTo_m496978908 (LatLong_t2936018554 * __this, LatLong_t2936018554  ___toPoint0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLong::EstimateGreatCircleDistance(Wrld.Space.LatLong&,Wrld.Space.LatLong&,System.Double)
extern "C"  double LatLong_EstimateGreatCircleDistance_m2966940974 (RuntimeObject * __this /* static, unused */, LatLong_t2936018554 * ___a0, LatLong_t2936018554 * ___b1, double ___sphereRadius2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLongAltitude::.ctor(System.Double,System.Double,System.Double)
extern "C"  void LatLongAltitude__ctor_m3077043531 (LatLongAltitude_t944891001 * __this, double ___latitudeInDegrees0, double ___longitudeInDegrees1, double ___altitudeInMetres2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLongAltitude::GetAltitude()
extern "C"  double LatLongAltitude_GetAltitude_m1194096332 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLongAltitude::SetAltitude(System.Double)
extern "C"  void LatLongAltitude_SetAltitude_m3974140244 (LatLongAltitude_t944891001 * __this, double ___altitudeInMetres0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLongAltitude::GetLatitudeInRadians()
extern "C"  double LatLongAltitude_GetLatitudeInRadians_m491998726 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLongAltitude::GetLongitudeInRadians()
extern "C"  double LatLongAltitude_GetLongitudeInRadians_m1540906305 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLongAltitude::SetLatitudeInRadians(System.Double)
extern "C"  void LatLongAltitude_SetLatitudeInRadians_m3480952343 (LatLongAltitude_t944891001 * __this, double ___latitudeInRadians0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLongAltitude::SetLongitudeInRadians(System.Double)
extern "C"  void LatLongAltitude_SetLongitudeInRadians_m316922379 (LatLongAltitude_t944891001 * __this, double ___longitudeInRadians0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLongAltitude::SetLatitude(System.Double)
extern "C"  void LatLongAltitude_SetLatitude_m1228531711 (LatLongAltitude_t944891001 * __this, double ___latitudeInDegrees0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.LatLongAltitude::SetLongitude(System.Double)
extern "C"  void LatLongAltitude_SetLongitude_m1042320802 (LatLongAltitude_t944891001 * __this, double ___longitudeInDegrees0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLongAltitude::GetLatitude()
extern "C"  double LatLongAltitude_GetLatitude_m2772881645 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLongAltitude::GetLongitude()
extern "C"  double LatLongAltitude_GetLongitude_m3807199853 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.LatLongAltitude::ToECEF()
extern "C"  DoubleVector3_t761704365  LatLongAltitude_ToECEF_m3897686018 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.LatLongAltitude::BearingTo(Wrld.Space.LatLong)
extern "C"  double LatLongAltitude_BearingTo_m3735118124 (LatLongAltitude_t944891001 * __this, LatLong_t2936018554  ___toPoint0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Space.LatLong Wrld.Space.LatLong::FromECEF(Wrld.Common.Maths.DoubleVector3)
extern "C"  LatLong_t2936018554  LatLong_FromECEF_m1087962703 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ___world0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Common.Maths.DoubleVector3::get_magnitude()
extern "C"  double DoubleVector3_get_magnitude_m3917016803 (DoubleVector3_t761704365 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.Positioner::set_Id(System.Int32)
extern "C"  void Positioner_set_Id_m4230244818 (Positioner_t1752774946 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.PositionerApiInternal::SetPositionerLocation(Wrld.Space.Positioners.Positioner,System.Double,System.Double)
extern "C"  void PositionerApiInternal_SetPositionerLocation_m4021232775 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, double ___latitudeDegrees1, double ___longitudeDegrees2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.PositionerApiInternal::SetPositionerElevation(Wrld.Space.Positioners.Positioner,System.Double)
extern "C"  void PositionerApiInternal_SetPositionerElevation_m1420501201 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, double ___elevation1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.PositionerApiInternal::SetPositionerElevationMode(Wrld.Space.Positioners.Positioner,Wrld.Space.ElevationMode)
extern "C"  void PositionerApiInternal_SetPositionerElevationMode_m751369844 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, int32_t ___elevationMode1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.PositionerApiInternal::SetPositionerIndoorMap(Wrld.Space.Positioners.Positioner,System.String,System.Int32)
extern "C"  void PositionerApiInternal_SetPositionerIndoorMap_m582027490 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, String_t* ___indoorMapId1, int32_t ___indoorMapFloorId2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.PositionerApiInternal::DestroyPositioner(Wrld.Space.Positioners.Positioner)
extern "C"  void PositionerApiInternal_DestroyPositioner_m3264874376 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.Positioner::InvalidateId()
extern "C"  void Positioner_InvalidateId_m316806239 (Positioner_t1752774946 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Space.Positioners.Positioner Wrld.Space.Positioners.PositionerApiInternal::CreatePositioner(Wrld.Space.Positioners.PositionerOptions)
extern "C"  Positioner_t1752774946 * PositionerApiInternal_CreatePositioner_m3277400250 (PositionerApiInternal_t1500108320 * __this, PositionerOptions_t660970786 * ___positionerOptions0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.PositionerApiInternal::OnPositionerUpdated(System.IntPtr)
extern "C"  void PositionerApiInternal_OnPositionerUpdated_m4205083120 (RuntimeObject * __this /* static, unused */, intptr_t ___positionerApiHandle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::.ctor()
#define Dictionary_2__ctor_m368023328(__this, method) ((  void (*) (Dictionary_2_t641488277 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// Wrld.Space.ElevationMode Wrld.Space.Positioners.PositionerOptions::GetElevationMode()
extern "C"  int32_t PositionerOptions_GetElevationMode_m2263133047 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.Positioners.PositionerOptions::GetLatitudeDegrees()
extern "C"  double PositionerOptions_GetLatitudeDegrees_m1942920284 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.Positioners.PositionerOptions::GetLongitudeDegrees()
extern "C"  double PositionerOptions_GetLongitudeDegrees_m3220370985 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Wrld.Space.Positioners.PositionerOptions::GetElevation()
extern "C"  double PositionerOptions_GetElevation_m4164359178 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Wrld.Space.Positioners.PositionerOptions::GetIndoorMapId()
extern "C"  String_t* PositionerOptions_GetIndoorMapId_m1191244953 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Wrld.Space.Positioners.PositionerOptions::GetIndoorMapFloorId()
extern "C"  int32_t PositionerOptions_GetIndoorMapFloorId_m2307439851 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.Positioners.PositionerOptions::IsUsingFloorId()
extern "C"  bool PositionerOptions_IsUsingFloorId_m803689757 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_CreatePositioner(System.IntPtr,Wrld.Space.Positioners.PositionerCreateParamsInterop&)
extern "C"  int32_t PositionerApiInternal_NativePositionerApi_CreatePositioner_m3948937893 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, PositionerCreateParamsInterop_t3667260723 * ___createParamsInterop1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.Positioner::.ctor(Wrld.Space.Positioners.PositionerApiInternal,System.Int32,System.Boolean)
extern "C"  void Positioner__ctor_m1503101260 (Positioner_t1752774946 * __this, PositionerApiInternal_t1500108320 * ___positionerApiInternal0, int32_t ___id1, bool ___usingFloorId2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Wrld.Space.Positioners.Positioner::get_Id()
extern "C"  int32_t Positioner_get_Id_m101133727 (Positioner_t1752774946 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::TryFetchECEFLocationForPositioner(System.Int32,Wrld.Common.Maths.DoubleVector3&)
extern "C"  bool PositionerApiInternal_TryFetchECEFLocationForPositioner_m1328294574 (PositionerApiInternal_t1500108320 * __this, int32_t ___positionerId0, DoubleVector3_t761704365 * ___positionerECEFLocation1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.Positioner::SetECEFLocation(Wrld.Common.Maths.DoubleVector3)
extern "C"  void Positioner_SetECEFLocation_m3511299767 (Positioner_t1752774946 * __this, DoubleVector3_t761704365  ___ecefLocation0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_TryFetchECEFLocationForPositioner(System.IntPtr,System.Int32,Wrld.Space.Positioners.DoubleVector3Interop&)
extern "C"  bool PositionerApiInternal_NativePositionerApi_TryFetchECEFLocationForPositioner_m478713026 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, DoubleVector3Interop_t1528464399 * ___out_positionerECEFLocationInterop2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_DestroyPositioner(System.IntPtr,System.Int32)
extern "C"  bool PositionerApiInternal_NativePositionerApi_DestroyPositioner_m3815455153 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_SetLocation(System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  bool PositionerApiInternal_NativePositionerApi_SetLocation_m3410753386 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, double ___latitudeDegrees2, double ___longitudeDegrees3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_SetElevation(System.IntPtr,System.Int32,System.Double)
extern "C"  bool PositionerApiInternal_NativePositionerApi_SetElevation_m3975816551 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, double ___elevation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_SetElevationMode(System.IntPtr,System.Int32,Wrld.Space.ElevationMode)
extern "C"  bool PositionerApiInternal_NativePositionerApi_SetElevationMode_m1710511137 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, int32_t ___elevationMode2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_SetIndoorMap(System.IntPtr,System.Int32,System.String,System.Int32)
extern "C"  bool PositionerApiInternal_NativePositionerApi_SetIndoorMap_m2433804066 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, String_t* ___indoorMapId2, int32_t ___indoorMapFloorId3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T Wrld.Utilities.NativeInteropExtensions::NativeHandleToObject<Wrld.Space.Positioners.PositionerApiInternal>(System.IntPtr)
#define NativeInteropExtensions_NativeHandleToObject_TisPositionerApiInternal_t1500108320_m2783742380(__this /* static, unused */, ___handlePointer0, method) ((  PositionerApiInternal_t1500108320 * (*) (RuntimeObject * /* static, unused */, intptr_t, const RuntimeMethod*))NativeInteropExtensions_NativeHandleToObject_TisRuntimeObject_m3998260174_gshared)(__this /* static, unused */, ___handlePointer0, method)
// System.Void Wrld.Space.Positioners.PositionerApiInternal::NotifyPositionerProjectionsChanged()
extern "C"  void PositionerApiInternal_NotifyPositionerProjectionsChanged_m2214404331 (PositionerApiInternal_t1500108320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.PositionerApiInternal/PositionerProjectionChangedDelegate::Invoke(System.IntPtr)
extern "C"  void PositionerProjectionChangedDelegate_Invoke_m1141778084 (PositionerProjectionChangedDelegate_t1663436742 * __this, intptr_t ___positionerApiHandle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.Positioners.PositionerUpdatedDelegate::Invoke(Wrld.Space.Positioners.Positioner)
extern "C"  void PositionerUpdatedDelegate_Invoke_m2107752770 (PositionerUpdatedDelegate_t1913896330 * __this, Positioner_t1752774946 * ___positioner0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Assets.Wrld.Scripts.Maths.DoubleRay Wrld.Space.SpacesApi::NativeSpacesApi_ScreenPointToRay(System.IntPtr,UnityEngine.Vector2&)
extern "C"  DoubleRay_t1286935159  SpacesApi_NativeSpacesApi_ScreenPointToRay_m1513835467 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, Vector2_t2156229523 * ___screenPoint1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Interop.LatLongInterop Wrld.Interop.InteropExtensions::ToLatLongInterop(Wrld.Space.LatLong)
extern "C"  LatLongInterop_t1185496937  InteropExtensions_ToLatLongInterop_m2896569814 (RuntimeObject * __this /* static, unused */, LatLong_t2936018554  ___ll0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Assets.Wrld.Scripts.Maths.DoubleRay Wrld.Space.SpacesApi::NativeSpacesApi_LatLongToVerticallyDownRay(System.IntPtr,Wrld.Interop.LatLongInterop&)
extern "C"  DoubleRay_t1286935159  SpacesApi_NativeSpacesApi_LatLongToVerticallyDownRay_m3191432859 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, LatLongInterop_t1185496937 * ___latLongInterop1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::SetCentralPoint(Wrld.Space.LatLongAltitude)
extern "C"  void UnityWorldSpaceCoordinateFrame_SetCentralPoint_m3255142567 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, LatLongAltitude_t944891001  ___latLongAlt0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::SetCentralPoint(Wrld.Common.Maths.DoubleVector3,Wrld.Space.LatLongAltitude)
extern "C"  void UnityWorldSpaceCoordinateFrame_SetCentralPoint_m398641478 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, DoubleVector3_t761704365  ___ecefOrigin0, LatLongAltitude_t944891001  ___latLongAltOrigin1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Space.LatLongAltitude Wrld.Space.LatLongAltitude::FromECEF(Wrld.Common.Maths.DoubleVector3)
extern "C"  LatLongAltitude_t944891001  LatLongAltitude_FromECEF_m2872636096 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ___world0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t1817901843  Matrix4x4_get_identity_m1406790249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C"  void Matrix4x4_SetRow_m2327530647 (Matrix4x4_t1817901843 * __this, int32_t p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Wrld.Common.Maths.Matrix4x4Extensions::ToQuaternion(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t2301928331  Matrix4x4Extensions_ToQuaternion_m2271654808 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ____matrix0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.DoubleVector3::Cross(Wrld.Common.Maths.DoubleVector3,Wrld.Common.Maths.DoubleVector3)
extern "C"  DoubleVector3_t761704365  DoubleVector3_Cross_m1774742975 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ___a0, DoubleVector3_t761704365  ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_Cross_m418170344 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::CreateQuaternionFromBasisVectors(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  UnityWorldSpaceCoordinateFrame_CreateQuaternionFromBasisVectors_m2317032641 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___right0, Vector3_t3722313464  ___up1, Vector3_t3722313464  ___forward2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::set_ECEFToLocalRotation(UnityEngine.Quaternion)
extern "C"  void UnityWorldSpaceCoordinateFrame_set_ECEFToLocalRotation_m538682458 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::get_ECEFToLocalRotation()
extern "C"  Quaternion_t2301928331  UnityWorldSpaceCoordinateFrame_get_ECEFToLocalRotation_m1977956869 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_Inverse_m1311579081 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::set_LocalToECEFRotation(UnityEngine.Quaternion)
extern "C"  void UnityWorldSpaceCoordinateFrame_set_LocalToECEFRotation_m342114734 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::get_LocalToECEFRotation()
extern "C"  Quaternion_t2301928331  UnityWorldSpaceCoordinateFrame_get_LocalToECEFRotation_m1480440645 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.DoubleVector3::op_Implicit(UnityEngine.Vector3)
extern "C"  DoubleVector3_t761704365  DoubleVector3_op_Implicit_m245241895 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ____rhs0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.DoubleVector3::op_Addition(Wrld.Common.Maths.DoubleVector3,Wrld.Common.Maths.DoubleVector3)
extern "C"  DoubleVector3_t761704365  DoubleVector3_op_Addition_m3339173121 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ____lhs0, DoubleVector3_t761704365  ____rhs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::LocalSpaceToECEF(UnityEngine.Vector3)
extern "C"  DoubleVector3_t761704365  UnityWorldSpaceCoordinateFrame_LocalSpaceToECEF_m2113838158 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, Vector3_t3722313464  ___localSpace0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::ECEFToLocalSpace(Wrld.Common.Maths.DoubleVector3)
extern "C"  Vector3_t3722313464  UnityWorldSpaceCoordinateFrame_ECEFToLocalSpace_m3518368515 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, DoubleVector3_t761704365  ___ecef0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
#define GameObject_AddComponent_TisMeshFilter_t3523625662_m262607486(__this, method) ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
extern "C"  void MeshFilter_set_sharedMesh_m2173122548 (MeshFilter_t3523625662 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C"  String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
#define GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113(__this, method) ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C"  void Renderer_set_sharedMaterial_m2374163090 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
#define GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173(__this, method) ((  MeshCollider_t903564387 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
extern "C"  void MeshCollider_set_sharedMesh_m1986498669 (MeshCollider_t903564387 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Wrld.Streaming.GameObjectFactory::CreateDoubleSidedCollisionMesh(UnityEngine.Mesh)
extern "C"  Mesh_t3648964284 * GameObjectFactory_CreateDoubleSidedCollisionMesh_m442641907 (RuntimeObject * __this /* static, unused */, Mesh_t3648964284 * ___sourceMesh0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Wrld.Streaming.GameObjectFactory::CreateGameObjectName(System.String,System.Int32)
extern "C"  String_t* GameObjectFactory_CreateGameObjectName_m779350472 (RuntimeObject * __this /* static, unused */, String_t* ___baseName0, int32_t ___meshIndex1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Wrld.Streaming.GameObjectFactory::CreateGameObject(UnityEngine.Mesh,UnityEngine.Material,System.String,UnityEngine.Transform,Wrld.Streaming.CollisionStreamingType)
extern "C"  GameObject_t1113636619 * GameObjectFactory_CreateGameObject_m3026154899 (GameObjectFactory_t2478326784 * __this, Mesh_t3648964284 * ___mesh0, Material_t340375123 * ___material1, String_t* ___objectName2, Transform_t3600365921 * ___parentTransform3, int32_t ___collisionType4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_vertices_m3585684815 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::get_triangles()
extern "C"  Int32U5BU5D_t385246372* Mesh_get_triangles_m3059934743 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m255556250 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>::.ctor()
#define Dictionary_2__ctor_m2592226818(__this, method) ((  void (*) (Dictionary_2_t2657171120 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Boolean Wrld.Streaming.GameObjectRepository::Contains(System.String)
extern "C"  bool GameObjectRepository_Contains_m502542647 (GameObjectRepository_t3760691595 * __this, String_t* ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Streaming.GameObjectRecord::.ctor()
extern "C"  void GameObjectRecord__ctor_m979568528 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Streaming.GameObjectRecord::set_OriginECEF(Wrld.Common.Maths.DoubleVector3)
extern "C"  void GameObjectRecord_set_OriginECEF_m20611134 (GameObjectRecord_t2871914821 * __this, DoubleVector3_t761704365  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Streaming.GameObjectRecord::set_TranslationOffsetECEF(UnityEngine.Vector3)
extern "C"  void GameObjectRecord_set_TranslationOffsetECEF_m2354121186 (GameObjectRecord_t2871914821 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Streaming.GameObjectRecord::set_OrientationECEF(UnityEngine.Quaternion)
extern "C"  void GameObjectRecord_set_OrientationECEF_m2643822069 (GameObjectRecord_t2871914821 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Streaming.GameObjectRecord::set_RootGameObject(UnityEngine.GameObject)
extern "C"  void GameObjectRecord_set_RootGameObject_m3108814383 (GameObjectRecord_t2871914821 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>::Add(!0,!1)
#define Dictionary_2_Add_m820329418(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2657171120 *, String_t*, GameObjectRecord_t2871914821 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m2896692998(__this, p0, method) ((  bool (*) (Dictionary_2_t2657171120 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void Wrld.Streaming.GameObjectRepository::DestroyGameObject(UnityEngine.GameObject)
extern "C"  void GameObjectRepository_DestroyGameObject_m1658238485 (GameObjectRepository_t3760691595 * __this, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::DetachChildren()
extern "C"  void Transform_DetachChildren_m3266231651 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
#define GameObject_GetComponent_TisMeshFilter_t3523625662_m3102725183(__this, method) ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
extern "C"  Mesh_t3648964284 * MeshFilter_get_sharedMesh_m1726897210 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(__this, method) ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t340375123 * Renderer_get_sharedMaterial_m1936632411 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Materials.MaterialRepository::ReleaseMaterial(System.String)
extern "C"  void MaterialRepository_ReleaseMaterial_m1289739415 (MaterialRepository_t701520604 * __this, String_t* ___materialName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1207034816(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2657171120 *, String_t*, GameObjectRecord_t2871914821 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>::Remove(!0)
#define Dictionary_2_Remove_m2695770459(__this, p0, method) ((  bool (*) (Dictionary_2_t2657171120 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// UnityEngine.GameObject Wrld.Streaming.GameObjectRecord::get_RootGameObject()
extern "C"  GameObject_t1113636619 * GameObjectRecord_get_RootGameObject_m4027813460 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>::get_Values()
#define Dictionary_2_get_Values_m1239576671(__this, method) ((  ValueCollection_t78248142 * (*) (Dictionary_2_t2657171120 *, const RuntimeMethod*))Dictionary_2_get_Values_m2492087945_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Wrld.Streaming.GameObjectRecord>::GetEnumerator()
#define ValueCollection_GetEnumerator_m3665573136(__this, method) ((  Enumerator_t3226064777  (*) (ValueCollection_t78248142 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m3808619909_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Wrld.Streaming.GameObjectRecord>::get_Current()
#define Enumerator_get_Current_m3322199052(__this, method) ((  GameObjectRecord_t2871914821 * (*) (Enumerator_t3226064777 *, const RuntimeMethod*))Enumerator_get_Current_m2014973879_gshared)(__this, method)
// Wrld.Common.Maths.DoubleVector3 Wrld.Streaming.GameObjectRecord::get_OriginECEF()
extern "C"  DoubleVector3_t761704365  GameObjectRecord_get_OriginECEF_m4169325908 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Wrld.Streaming.GameObjectRecord::get_TranslationOffsetECEF()
extern "C"  Vector3_t3722313464  GameObjectRecord_get_TranslationOffsetECEF_m297893326 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Wrld.Streaming.GameObjectRecord::get_OrientationECEF()
extern "C"  Quaternion_t2301928331  GameObjectRecord_get_OrientationECEF_m505436636 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Wrld.Streaming.GameObjectRecord>::MoveNext()
#define Enumerator_MoveNext_m2094685146(__this, method) ((  bool (*) (Enumerator_t3226064777 *, const RuntimeMethod*))Enumerator_MoveNext_m181298207_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Wrld.Streaming.GameObjectRecord>::Dispose()
#define Enumerator_Dispose_m4161287529(__this, method) ((  void (*) (Enumerator_t3226064777 *, const RuntimeMethod*))Enumerator_Dispose_m1051275336_gshared)(__this, method)
// Wrld.Streaming.GameObjectRecord Wrld.Streaming.GameObjectRepository::GetObjectRecord(System.String)
extern "C"  GameObjectRecord_t2871914821 * GameObjectRepository_GetObjectRecord_m1518046775 (GameObjectRepository_t3760691595 * __this, String_t* ___objectID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C"  void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Streaming.GameObjectRepository::.ctor(System.String,UnityEngine.Transform,Wrld.Materials.MaterialRepository,System.Boolean)
extern "C"  void GameObjectRepository__ctor_m3567348473 (GameObjectRepository_t3760691595 * __this, String_t* ___rootName0, Transform_t3600365921 * ___parentForStreamedObjects1, MaterialRepository_t701520604 * ___materialRepository2, bool ___applyFlattening3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Wrld.Streaming.GameObjectRepository::get_Root()
extern "C"  GameObject_t1113636619 * GameObjectRepository_get_Root_m815556018 (GameObjectRepository_t3760691595 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Streaming.GameObjectFactory::.ctor(UnityEngine.Transform)
extern "C"  void GameObjectFactory__ctor_m1830047161 (GameObjectFactory_t2478326784 * __this, Transform_t3600365921 * ___parentTransform0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material Wrld.Materials.MaterialRepository::LoadOrCreateMaterial(System.String,System.String)
extern "C"  Material_t340375123 * MaterialRepository_LoadOrCreateMaterial_m3103985425 (MaterialRepository_t701520604 * __this, String_t* ___objectID0, String_t* ___materialName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] Wrld.Streaming.GameObjectFactory::CreateGameObjects(UnityEngine.Mesh[],UnityEngine.Material,UnityEngine.Transform,Wrld.Streaming.CollisionStreamingType)
extern "C"  GameObjectU5BU5D_t3328599146* GameObjectFactory_CreateGameObjects_m3856069314 (GameObjectFactory_t2478326784 * __this, MeshU5BU5D_t3972987605* ___meshes0, Material_t340375123 * ___material1, Transform_t3600365921 * ___parentTransform2, int32_t ___collisionType3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Streaming.GameObjectRepository::Add(System.String,Wrld.Common.Maths.DoubleVector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.GameObject)
extern "C"  void GameObjectRepository_Add_m985221079 (GameObjectRepository_t3760691595 * __this, String_t* ___id0, DoubleVector3_t761704365  ___originECEF1, Vector3_t3722313464  ___translationOffsetECEF2, Quaternion_t2301928331  ___orientationECEF3, GameObject_t1113636619 * ___rootGameObject4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Streaming.GameObjectRepository::Remove(System.String)
extern "C"  bool GameObjectRepository_Remove_m1283273531 (GameObjectRepository_t3760691595 * __this, String_t* ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.Streaming.GameObjectRepository::TryGetGameObject(System.String,UnityEngine.GameObject&)
extern "C"  bool GameObjectRepository_TryGetGameObject_m1271184210 (GameObjectRepository_t3760691595 * __this, String_t* ___objectID0, GameObject_t1113636619 ** ___gameObject1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Streaming.GameObjectRepository::UpdateTransforms(Wrld.Space.ITransformUpdateStrategy,System.Single)
extern "C"  void GameObjectRepository_UpdateTransforms_m334866038 (GameObjectRepository_t3760691595 * __this, RuntimeObject* ___transformUpdateStrategy0, float ___heightOffset1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActiveRecursively(System.Boolean)
extern "C"  void GameObject_SetActiveRecursively_m1439425356 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Wrld.Streaming.GameObjectStreamer::GetObject(System.String)
extern "C"  GameObject_t1113636619 * GameObjectStreamer_GetObject_m2947042161 (GameObjectStreamer_t3452608707 * __this, String_t* ___objectID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshRenderer>(System.Boolean)
#define GameObject_GetComponentsInChildren_TisMeshRenderer_t587009260_m4169215646(__this, p0, method) ((  MeshRendererU5BU5D_t2132764133* (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m1319386616_gshared)(__this, p0, method)
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m1245091008 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m329692301 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Wrld.Resources.Terrain.Heights.TerrainHeightProvider::GetMaxHeight()
extern "C"  float TerrainHeightProvider_GetMaxHeight_m3541930250 (TerrainHeightProvider_t517848921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Wrld.Resources.Terrain.Heights.TerrainHeightProvider::GetMinHeight()
extern "C"  float TerrainHeightProvider_GetMinHeight_m246132978 (TerrainHeightProvider_t517848921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.MapCamera.InterestPointProvider::ClampInterestPointToValidRangeIfRequired(Wrld.Common.Maths.DoubleVector3&)
extern "C"  bool InterestPointProvider_ClampInterestPointToValidRangeIfRequired_m2877792219 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365 * ___interestPointEcef0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.StreamingUpdater::UpdateScreenSize()
extern "C"  void StreamingUpdater_UpdateScreenSize_m2400682235 (StreamingUpdater_t530401876 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wrld.StreamingUpdater::IsValidStreamingCamera(UnityEngine.Camera)
extern "C"  bool StreamingUpdater_IsValidStreamingCamera_m3603289713 (StreamingUpdater_t530401876 * __this, Camera_t4157153871 * ___zeroBasedCameraECEF0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C"  Matrix4x4_t1817901843  Camera_get_worldToCameraMatrix_m22661425 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C"  Matrix4x4_t1817901843  Camera_get_projectionMatrix_m667780853 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.MapCamera.CameraState::.ctor(Wrld.Common.Maths.DoubleVector3,Wrld.Common.Maths.DoubleVector3,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  void CameraState__ctor_m1786065660 (CameraState_t2128520787 * __this, DoubleVector3_t761704365  ___locationEcef0, DoubleVector3_t761704365  ___interestPointEcef1, Matrix4x4_t1817901843  ___viewMatrix2, Matrix4x4_t1817901843  ___projectMatrix3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.StreamingUpdater::SetCustomStreamingCameraState(System.IntPtr,Wrld.MapCamera.CameraState)
extern "C"  void StreamingUpdater_SetCustomStreamingCameraState_m2125845139 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, CameraState_t2128520787 * ___state1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.StreamingUpdater::ClearCustomStreamingCamera(System.IntPtr)
extern "C"  void StreamingUpdater_ClearCustomStreamingCamera_m4284485926 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.StreamingUpdater::NotifyScreenSizeChanged(System.IntPtr,System.Single,System.Single)
extern "C"  void StreamingUpdater_NotifyScreenSizeChanged_m2457555807 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, float ___screenWidth1, float ___screenHeight2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.TextureCallbacks::.ctor(System.IntPtr,Wrld.Materials.TextureLoadHandler/AllocateTextureBufferCallback,Wrld.Materials.TextureLoadHandler/BeginUploadTextureBufferCallback,Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService/OnTextureReceivedCallback,Wrld.Materials.TextureLoadHandler/ReleaseTextureCallback,Wrld.Materials.TextureLoadHandler/CreateCubemapFromFacesCallback)
extern "C"  void TextureCallbacks__ctor_m1846889886 (TextureCallbacks_t2889231718 * __this, intptr_t ____textureServiceHandle0, AllocateTextureBufferCallback_t109657048 * ____allocateTextureBuffer1, BeginUploadTextureBufferCallback_t3016670851 * ____beginUploadTextureBuffer2, OnTextureReceivedCallback_t1016964503 * ____onTextureReceived3, ReleaseTextureCallback_t388032167 * ____releaseTexture4, CreateCubemapFromFacesCallback_t2834185402 * ____createCubemapFromFaces5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Materials.TextureLoadHandler/AllocateTextureBufferCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AllocateTextureBufferCallback__ctor_m3089161838 (AllocateTextureBufferCallback_t109657048 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Materials.TextureLoadHandler/BeginUploadTextureBufferCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void BeginUploadTextureBufferCallback__ctor_m2275122704 (BeginUploadTextureBufferCallback_t3016670851 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService/OnTextureReceivedCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnTextureReceivedCallback__ctor_m1038892917 (OnTextureReceivedCallback_t1016964503 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Materials.TextureLoadHandler/ReleaseTextureCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ReleaseTextureCallback__ctor_m3468623728 (ReleaseTextureCallback_t388032167 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Materials.TextureLoadHandler/CreateCubemapFromFacesCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CreateCubemapFromFacesCallback__ctor_m1893239485 (CreateCubemapFromFacesCallback_t2834185402 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ThreadServiceCallbacks::.ctor(System.IntPtr,Wrld.Concurrency.ThreadService/CreateThreadDelegate,Wrld.Concurrency.ThreadService/JoinThreadDelegate)
extern "C"  void ThreadServiceCallbacks__ctor_m4063513272 (ThreadServiceCallbacks_t3456159097 * __this, intptr_t ____threadServiceHandle0, CreateThreadDelegate_t2573395908 * ____createThread1, JoinThreadDelegate_t1262337526 * ____joinThread2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Concurrency.ThreadService/CreateThreadDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CreateThreadDelegate__ctor_m4131810534 (CreateThreadDelegate_t2573395908 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Concurrency.ThreadService/JoinThreadDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void JoinThreadDelegate__ctor_m3258663343 (JoinThreadDelegate_t1262337526 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C"  GCHandle_t3351438187  GCHandle_Alloc_m3053200191 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
extern "C"  intptr_t GCHandle_ToIntPtr_m3288225389 (RuntimeObject * __this /* static, unused */, GCHandle_t3351438187  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
extern "C"  GCHandle_t3351438187  GCHandle_FromIntPtr_m3880792486 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WrldMap::SetupApi()
extern "C"  void WrldMap_SetupApi_m3608385571 (WrldMap_t2502476010 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Api::SetEnabled(System.Boolean)
extern "C"  void Api_SetEnabled_m725939101 (Api_t1190036922 * __this, bool ___enabled0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Scripts.Utilities.APIKeyHelpers::CacheAPIKey(System.String)
extern "C"  void APIKeyHelpers_CacheAPIKey_m3817519100 (RuntimeObject * __this /* static, unused */, String_t* ___apiKey0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Wrld.Scripts.Utilities.APIKeyHelpers::GetCachedAPIKey()
extern "C"  String_t* APIKeyHelpers_GetCachedAPIKey_m2319953939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.ConfigParams Wrld.ConfigParams::MakeDefaultConfig()
extern "C"  ConfigParams_t592212086  ConfigParams_MakeDefaultConfig_m1184309901 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ConfigParams::set_DistanceToInterest(System.Double)
extern "C"  void ConfigParams_set_DistanceToInterest_m2240845259 (ConfigParams_t592212086 * __this, double ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ConfigParams::set_LatitudeDegrees(System.Double)
extern "C"  void ConfigParams_set_LatitudeDegrees_m191161488 (ConfigParams_t592212086 * __this, double ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ConfigParams::set_LongitudeDegrees(System.Double)
extern "C"  void ConfigParams_set_LongitudeDegrees_m232648108 (ConfigParams_t592212086 * __this, double ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ConfigParams::set_HeadingDegrees(System.Double)
extern "C"  void ConfigParams_set_HeadingDegrees_m443737848 (ConfigParams_t592212086 * __this, double ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ConfigParams::set_StreamingLodBasedOnDistance(System.Boolean)
extern "C"  void ConfigParams_set_StreamingLodBasedOnDistance_m3638004160 (ConfigParams_t592212086 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ConfigParams/CollisionConfig::set_TerrainCollision(System.Boolean)
extern "C"  void CollisionConfig_set_TerrainCollision_m1283021126 (CollisionConfig_t3653208188 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ConfigParams/CollisionConfig::set_RoadCollision(System.Boolean)
extern "C"  void CollisionConfig_set_RoadCollision_m3962151911 (CollisionConfig_t3653208188 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ConfigParams/CollisionConfig::set_BuildingCollision(System.Boolean)
extern "C"  void CollisionConfig_set_BuildingCollision_m153433081 (CollisionConfig_t3653208188 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.ConfigParams::set_EnableLabels(System.Boolean)
extern "C"  void ConfigParams_set_EnableLabels_m650675635 (ConfigParams_t592212086 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String WrldMap::GetApiKey()
extern "C"  String_t* WrldMap_GetApiKey_m3036891609 (WrldMap_t2502476010 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Api::Create(System.String,Wrld.CoordinateSystem,UnityEngine.Transform,Wrld.ConfigParams)
extern "C"  void Api_Create_m3141181851 (RuntimeObject * __this /* static, unused */, String_t* ___apikey0, int32_t ___coordinateSystem1, Transform_t3600365921 * ___parentTransformForStreamedObjects2, ConfigParams_t592212086  ___configParams3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Wrld.MapCamera.CameraApi Wrld.Api::get_CameraApi()
extern "C"  CameraApi_t3006904385 * Api_get_CameraApi_m3686379629 (Api_t1190036922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.MapCamera.CameraApi::SetControlledCamera(UnityEngine.Camera)
extern "C"  void CameraApi_SetControlledCamera_m697069180 (CameraApi_t3006904385 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Wrld.MapCamera.CameraApi::GetControlledCamera()
extern "C"  Camera_t4157153871 * CameraApi_GetControlledCamera_m489287234 (CameraApi_t3006904385 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Api::StreamResourcesForBuiltInCamera(UnityEngine.Camera)
extern "C"  void Api_StreamResourcesForBuiltInCamera_m2380658629 (Api_t1190036922 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Api::StreamResourcesForCamera(UnityEngine.Camera)
extern "C"  void Api_StreamResourcesForCamera_m1752875543 (Api_t1190036922 * __this, Camera_t4157153871 * ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Api::Update()
extern "C"  void Api_Update_m1762022946 (Api_t1190036922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Api::Destroy()
extern "C"  void Api_Destroy_m2663251274 (Api_t1190036922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WrldMap::SetApplicationPaused(System.Boolean)
extern "C"  void WrldMap_SetApplicationPaused_m1055874497 (WrldMap_t2502476010 * __this, bool ___isPaused0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Api::OnApplicationPaused()
extern "C"  void Api_OnApplicationPaused_m3460699407 (Api_t1190036922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Wrld.Api::OnApplicationResumed()
extern "C"  void Api_OnApplicationResumed_m2647988865 (Api_t1190036922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Resources.IndoorMaps.StreamedTextureRequest::.ctor(Wrld.Resources.IndoorMaps.IIndoorMapMaterial,System.String,Wrld.Resources.IndoorMaps.IIndoorMapStreamedTextureObserver,Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService)
extern "C"  void StreamedTextureRequest__ctor_m2988545553 (StreamedTextureRequest_t1934737979 * __this, RuntimeObject* ___material0, String_t* ___textureKey1, RuntimeObject* ___observer2, IndoorMapTextureStreamingService_t4078817394 * ___originator3, const RuntimeMethod* method)
{
	{
		// public StreamedTextureRequest(IIndoorMapMaterial material, string textureKey, IIndoorMapStreamedTextureObserver observer, IndoorMapTextureStreamingService originator)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// Material = material;
		RuntimeObject* L_0 = ___material0;
		// Material = material;
		StreamedTextureRequest_set_Material_m506006575(__this, L_0, /*hidden argument*/NULL);
		// TextureKey = textureKey;
		String_t* L_1 = ___textureKey1;
		// TextureKey = textureKey;
		StreamedTextureRequest_set_TextureKey_m3278807391(__this, L_1, /*hidden argument*/NULL);
		// Observer = observer;
		RuntimeObject* L_2 = ___observer2;
		// Observer = observer;
		StreamedTextureRequest_set_Observer_m2008176993(__this, L_2, /*hidden argument*/NULL);
		// Originator = originator;
		IndoorMapTextureStreamingService_t4078817394 * L_3 = ___originator3;
		// Originator = originator;
		StreamedTextureRequest_set_Originator_m2930321584(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Wrld.Resources.IndoorMaps.IIndoorMapMaterial Wrld.Resources.IndoorMaps.StreamedTextureRequest::get_Material()
extern "C"  RuntimeObject* StreamedTextureRequest_get_Material_m2009600560 (StreamedTextureRequest_t1934737979 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// public IIndoorMapMaterial Material { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CMaterialU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Resources.IndoorMaps.StreamedTextureRequest::set_Material(Wrld.Resources.IndoorMaps.IIndoorMapMaterial)
extern "C"  void StreamedTextureRequest_set_Material_m506006575 (StreamedTextureRequest_t1934737979 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IIndoorMapMaterial Material { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CMaterialU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Wrld.Resources.IndoorMaps.StreamedTextureRequest::get_TextureKey()
extern "C"  String_t* StreamedTextureRequest_get_TextureKey_m2269872998 (StreamedTextureRequest_t1934737979 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string TextureKey { get; private set; }
		String_t* L_0 = __this->get_U3CTextureKeyU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Resources.IndoorMaps.StreamedTextureRequest::set_TextureKey(System.String)
extern "C"  void StreamedTextureRequest_set_TextureKey_m3278807391 (StreamedTextureRequest_t1934737979 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string TextureKey { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTextureKeyU3Ek__BackingField_1(L_0);
		return;
	}
}
// Wrld.Resources.IndoorMaps.IIndoorMapStreamedTextureObserver Wrld.Resources.IndoorMaps.StreamedTextureRequest::get_Observer()
extern "C"  RuntimeObject* StreamedTextureRequest_get_Observer_m108252192 (StreamedTextureRequest_t1934737979 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// public IIndoorMapStreamedTextureObserver Observer { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CObserverU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Resources.IndoorMaps.StreamedTextureRequest::set_Observer(Wrld.Resources.IndoorMaps.IIndoorMapStreamedTextureObserver)
extern "C"  void StreamedTextureRequest_set_Observer_m2008176993 (StreamedTextureRequest_t1934737979 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IIndoorMapStreamedTextureObserver Observer { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CObserverU3Ek__BackingField_2(L_0);
		return;
	}
}
// Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService Wrld.Resources.IndoorMaps.StreamedTextureRequest::get_Originator()
extern "C"  IndoorMapTextureStreamingService_t4078817394 * StreamedTextureRequest_get_Originator_m2856873163 (StreamedTextureRequest_t1934737979 * __this, const RuntimeMethod* method)
{
	IndoorMapTextureStreamingService_t4078817394 * V_0 = NULL;
	{
		// public IndoorMapTextureStreamingService Originator { get; private set; }
		IndoorMapTextureStreamingService_t4078817394 * L_0 = __this->get_U3COriginatorU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		IndoorMapTextureStreamingService_t4078817394 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Resources.IndoorMaps.StreamedTextureRequest::set_Originator(Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService)
extern "C"  void StreamedTextureRequest_set_Originator_m2930321584 (StreamedTextureRequest_t1934737979 * __this, IndoorMapTextureStreamingService_t4078817394 * ___value0, const RuntimeMethod* method)
{
	{
		// public IndoorMapTextureStreamingService Originator { get; private set; }
		IndoorMapTextureStreamingService_t4078817394 * L_0 = ___value0;
		__this->set_U3COriginatorU3Ek__BackingField_3(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LabelServiceInternal_AddLabel_m2638924068(intptr_t ___labelServiceHandle0, char* ___labelId1, char* ___labelText2, ColorInterop_t1726030811 * ___color3, int32_t ___baseFontSize4, double ___fontScale5)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___labelId1' to managed representation
	String_t* ____labelId1_unmarshaled = NULL;
	____labelId1_unmarshaled = il2cpp_codegen_marshal_string_result(___labelId1);

	// Marshaling of parameter '___labelText2' to managed representation
	String_t* ____labelText2_unmarshaled = NULL;
	____labelText2_unmarshaled = il2cpp_codegen_marshal_string_result(___labelText2);

	// Managed method invocation
	LabelServiceInternal_AddLabel_m2638924068(NULL, ___labelServiceHandle0, ____labelId1_unmarshaled, ____labelText2_unmarshaled, ___color3, ___baseFontSize4, ___fontScale5, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LabelServiceInternal_UpdateLabel_m1636846679(intptr_t ___labelServiceHandle0, char* ___labelId1, ColorInterop_t1726030811 * ___textColor2, Vector2_t2156229523 * ___position3, float ___rotationAngleDegrees4)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___labelId1' to managed representation
	String_t* ____labelId1_unmarshaled = NULL;
	____labelId1_unmarshaled = il2cpp_codegen_marshal_string_result(___labelId1);

	// Managed method invocation
	LabelServiceInternal_UpdateLabel_m1636846679(NULL, ___labelServiceHandle0, ____labelId1_unmarshaled, ___textColor2, ___position3, ___rotationAngleDegrees4, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LabelServiceInternal_RemoveLabel_m4053777316(intptr_t ___labelServiceHandle0, char* ___labelId1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___labelId1' to managed representation
	String_t* ____labelId1_unmarshaled = NULL;
	____labelId1_unmarshaled = il2cpp_codegen_marshal_string_result(___labelId1);

	// Managed method invocation
	LabelServiceInternal_RemoveLabel_m4053777316(NULL, ___labelServiceHandle0, ____labelId1_unmarshaled, NULL);

}
// System.Void Wrld.Resources.Labels.LabelServiceInternal::.ctor(UnityEngine.GameObject,System.Boolean)
extern "C"  void LabelServiceInternal__ctor_m463169743 (LabelServiceInternal_t3414831883 * __this, GameObject_t1113636619 * ___unityCanvas0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LabelServiceInternal__ctor_m463169743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelServiceInternal_t3414831883 * G_B7_0 = NULL;
	LabelServiceInternal_t3414831883 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	LabelServiceInternal_t3414831883 * G_B8_1 = NULL;
	{
		// private Dictionary<string, UnityEngine.UI.Text> m_screenTextObjects = new Dictionary<string, UnityEngine.UI.Text>();
		// private Dictionary<string, UnityEngine.UI.Text> m_screenTextObjects = new Dictionary<string, UnityEngine.UI.Text>();
		Dictionary_2_t1687139013 * L_0 = (Dictionary_2_t1687139013 *)il2cpp_codegen_object_new(Dictionary_2_t1687139013_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1498171786(L_0, /*hidden argument*/Dictionary_2__ctor_m1498171786_RuntimeMethod_var);
		__this->set_m_screenTextObjects_0(L_0);
		// private Canvas m_unityCanvas = null;
		__this->set_m_unityCanvas_1((Canvas_t3310196443 *)NULL);
		// public LabelServiceInternal(GameObject unityCanvas, bool enabled)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// if (unityCanvas == null)
		GameObject_t1113636619 * L_1 = ___unityCanvas0;
		// if (unityCanvas == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// if (enabled)
		bool L_3 = ___enabled1;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Debug.LogWarning(
		// Debug.LogWarning(
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral854802353, /*hidden argument*/NULL);
	}

IL_0038:
	{
		goto IL_004c;
	}

IL_003e:
	{
		// m_unityCanvas = unityCanvas.GetComponent<Canvas>();
		GameObject_t1113636619 * L_4 = ___unityCanvas0;
		// m_unityCanvas = unityCanvas.GetComponent<Canvas>();
		NullCheck(L_4);
		Canvas_t3310196443 * L_5 = GameObject_GetComponent_TisCanvas_t3310196443_m1808013672(L_4, /*hidden argument*/GameObject_GetComponent_TisCanvas_t3310196443_m1808013672_RuntimeMethod_var);
		__this->set_m_unityCanvas_1(L_5);
	}

IL_004c:
	{
		// m_handleToSelf = NativeInteropHelpers.AllocateNativeHandleForObject(this);
		// m_handleToSelf = NativeInteropHelpers.AllocateNativeHandleForObject(this);
		intptr_t L_6 = NativeInteropHelpers_AllocateNativeHandleForObject_m3143731542(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->set_m_handleToSelf_2(L_6);
		// m_enableLabels = enabled && m_unityCanvas != null;
		bool L_7 = ___enabled1;
		G_B6_0 = __this;
		if (!L_7)
		{
			G_B7_0 = __this;
			goto IL_006d;
		}
	}
	{
		Canvas_t3310196443 * L_8 = __this->get_m_unityCanvas_1();
		// m_enableLabels = enabled && m_unityCanvas != null;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_9));
		G_B8_1 = G_B6_0;
		goto IL_006e;
	}

IL_006d:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_006e:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_m_enableLabels_3((bool)G_B8_0);
		// }
		return;
	}
}
// System.IntPtr Wrld.Resources.Labels.LabelServiceInternal::GetHandle()
extern "C"  intptr_t LabelServiceInternal_GetHandle_m1054195484 (LabelServiceInternal_t3414831883 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return m_handleToSelf;
		intptr_t L_0 = __this->get_m_handleToSelf_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal::AddLabel(System.String,System.String,UnityEngine.Color,System.Int32,System.Double)
extern "C"  void LabelServiceInternal_AddLabel_m803203325 (LabelServiceInternal_t3414831883 * __this, String_t* ___labelId0, String_t* ___labelText1, Color_t2555686324  ___haloColor2, int32_t ___baseFontSize3, double ___fontScale4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LabelServiceInternal_AddLabel_m803203325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t1901882714 * V_0 = NULL;
	float V_1 = 0.0f;
	Outline_t2536100125 * V_2 = NULL;
	{
		// if (m_enableLabels)
		bool L_0 = __this->get_m_enableLabels_3();
		if (!L_0)
		{
			goto IL_00bf;
		}
	}
	{
		// UnityEngine.UI.Text newScreenText = GameObject.Instantiate(UnityEngine.Resources.Load<GameObject>("Labels/ScreenTextPrefab")).GetComponent<UnityEngine.UI.Text>();
		// UnityEngine.UI.Text newScreenText = GameObject.Instantiate(UnityEngine.Resources.Load<GameObject>("Labels/ScreenTextPrefab")).GetComponent<UnityEngine.UI.Text>();
		GameObject_t1113636619 * L_1 = Resources_Load_TisGameObject_t1113636619_m1734345100(NULL /*static, unused*/, _stringLiteral4248990973, /*hidden argument*/Resources_Load_TisGameObject_t1113636619_m1734345100_RuntimeMethod_var);
		// UnityEngine.UI.Text newScreenText = GameObject.Instantiate(UnityEngine.Resources.Load<GameObject>("Labels/ScreenTextPrefab")).GetComponent<UnityEngine.UI.Text>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		// UnityEngine.UI.Text newScreenText = GameObject.Instantiate(UnityEngine.Resources.Load<GameObject>("Labels/ScreenTextPrefab")).GetComponent<UnityEngine.UI.Text>();
		NullCheck(L_2);
		Text_t1901882714 * L_3 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		V_0 = L_3;
		// if (m_screenTextObjects.ContainsKey(labelId))
		Dictionary_2_t1687139013 * L_4 = __this->get_m_screenTextObjects_0();
		String_t* L_5 = ___labelId0;
		// if (m_screenTextObjects.ContainsKey(labelId))
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_m3099699669(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m3099699669_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// DestroyLabel(labelId);
		String_t* L_7 = ___labelId0;
		// DestroyLabel(labelId);
		LabelServiceInternal_DestroyLabel_m452857124(__this, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// newScreenText.fontSize = baseFontSize;
		Text_t1901882714 * L_8 = V_0;
		int32_t L_9 = ___baseFontSize3;
		// newScreenText.fontSize = baseFontSize;
		NullCheck(L_8);
		Text_set_fontSize_m3617617524(L_8, L_9, /*hidden argument*/NULL);
		// newScreenText.text = labelText;
		Text_t1901882714 * L_10 = V_0;
		String_t* L_11 = ___labelText1;
		// newScreenText.text = labelText;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// newScreenText.transform.SetParent(m_unityCanvas.transform, false);
		Text_t1901882714 * L_12 = V_0;
		// newScreenText.transform.SetParent(m_unityCanvas.transform, false);
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_14 = __this->get_m_unityCanvas_1();
		// newScreenText.transform.SetParent(m_unityCanvas.transform, false);
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(L_14, /*hidden argument*/NULL);
		// newScreenText.transform.SetParent(m_unityCanvas.transform, false);
		NullCheck(L_13);
		Transform_SetParent_m273471670(L_13, L_15, (bool)0, /*hidden argument*/NULL);
		// float fontScaleFactor = (float)fontScale / m_unityCanvas.scaleFactor;
		double L_16 = ___fontScale4;
		Canvas_t3310196443 * L_17 = __this->get_m_unityCanvas_1();
		// float fontScaleFactor = (float)fontScale / m_unityCanvas.scaleFactor;
		NullCheck(L_17);
		float L_18 = Canvas_get_scaleFactor_m3314757802(L_17, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_16)))/(float)L_18));
		// newScreenText.transform.localScale = new Vector3(fontScaleFactor, fontScaleFactor, fontScaleFactor);
		Text_t1901882714 * L_19 = V_0;
		// newScreenText.transform.localScale = new Vector3(fontScaleFactor, fontScaleFactor, fontScaleFactor);
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
		float L_21 = V_1;
		float L_22 = V_1;
		float L_23 = V_1;
		// newScreenText.transform.localScale = new Vector3(fontScaleFactor, fontScaleFactor, fontScaleFactor);
		Vector3_t3722313464  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Vector3__ctor_m3353183577((&L_24), L_21, L_22, L_23, /*hidden argument*/NULL);
		// newScreenText.transform.localScale = new Vector3(fontScaleFactor, fontScaleFactor, fontScaleFactor);
		NullCheck(L_20);
		Transform_set_localScale_m3053443106(L_20, L_24, /*hidden argument*/NULL);
		// var outline = newScreenText.gameObject.GetComponent<UnityEngine.UI.Outline>();
		Text_t1901882714 * L_25 = V_0;
		// var outline = newScreenText.gameObject.GetComponent<UnityEngine.UI.Outline>();
		NullCheck(L_25);
		GameObject_t1113636619 * L_26 = Component_get_gameObject_m442555142(L_25, /*hidden argument*/NULL);
		// var outline = newScreenText.gameObject.GetComponent<UnityEngine.UI.Outline>();
		NullCheck(L_26);
		Outline_t2536100125 * L_27 = GameObject_GetComponent_TisOutline_t2536100125_m3068308663(L_26, /*hidden argument*/GameObject_GetComponent_TisOutline_t2536100125_m3068308663_RuntimeMethod_var);
		V_2 = L_27;
		// if (outline != null)
		Outline_t2536100125 * L_28 = V_2;
		// if (outline != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_28, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00a6;
		}
	}
	{
		// outline.effectColor = haloColor;
		Outline_t2536100125 * L_30 = V_2;
		Color_t2555686324  L_31 = ___haloColor2;
		// outline.effectColor = haloColor;
		NullCheck(L_30);
		Shadow_set_effectColor_m3910676693(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		// newScreenText.transform.SetAsFirstSibling();
		Text_t1901882714 * L_32 = V_0;
		// newScreenText.transform.SetAsFirstSibling();
		NullCheck(L_32);
		Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(L_32, /*hidden argument*/NULL);
		// newScreenText.transform.SetAsFirstSibling();
		NullCheck(L_33);
		Transform_SetAsFirstSibling_m253439912(L_33, /*hidden argument*/NULL);
		// m_screenTextObjects.Add(labelId, newScreenText);
		Dictionary_2_t1687139013 * L_34 = __this->get_m_screenTextObjects_0();
		String_t* L_35 = ___labelId0;
		Text_t1901882714 * L_36 = V_0;
		// m_screenTextObjects.Add(labelId, newScreenText);
		NullCheck(L_34);
		Dictionary_2_Add_m257718337(L_34, L_35, L_36, /*hidden argument*/Dictionary_2_Add_m257718337_RuntimeMethod_var);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal::UpdateLabel(System.String,UnityEngine.Color,UnityEngine.Vector2,System.Single)
extern "C"  void LabelServiceInternal_UpdateLabel_m2393798876 (LabelServiceInternal_t3414831883 * __this, String_t* ___labelId0, Color_t2555686324  ___textColor1, Vector2_t2156229523  ___position2, float ___rotationAngleDegrees3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LabelServiceInternal_UpdateLabel_m2393798876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t1901882714 * V_0 = NULL;
	float V_1 = 0.0f;
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Rect_t2360479859  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Rect_t2360479859  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		// if (m_screenTextObjects.TryGetValue(labelId, out label))
		Dictionary_2_t1687139013 * L_0 = __this->get_m_screenTextObjects_0();
		String_t* L_1 = ___labelId0;
		// if (m_screenTextObjects.TryGetValue(labelId, out label))
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m3938898806(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3938898806_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_00c6;
		}
	}
	{
		// float newX = position.x - (m_unityCanvas.pixelRect.width / 2);
		float L_3 = (&___position2)->get_x_0();
		Canvas_t3310196443 * L_4 = __this->get_m_unityCanvas_1();
		// float newX = position.x - (m_unityCanvas.pixelRect.width / 2);
		NullCheck(L_4);
		Rect_t2360479859  L_5 = Canvas_get_pixelRect_m516402434(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// float newX = position.x - (m_unityCanvas.pixelRect.width / 2);
		float L_6 = Rect_get_width_m3421484486((&V_2), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_subtract((float)L_3, (float)((float)((float)L_6/(float)(2.0f)))));
		// float newY = (m_unityCanvas.pixelRect.height - position.y) - (m_unityCanvas.pixelRect.height / 2);
		Canvas_t3310196443 * L_7 = __this->get_m_unityCanvas_1();
		// float newY = (m_unityCanvas.pixelRect.height - position.y) - (m_unityCanvas.pixelRect.height / 2);
		NullCheck(L_7);
		Rect_t2360479859  L_8 = Canvas_get_pixelRect_m516402434(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		// float newY = (m_unityCanvas.pixelRect.height - position.y) - (m_unityCanvas.pixelRect.height / 2);
		float L_9 = Rect_get_height_m1358425599((&V_4), /*hidden argument*/NULL);
		float L_10 = (&___position2)->get_y_1();
		Canvas_t3310196443 * L_11 = __this->get_m_unityCanvas_1();
		// float newY = (m_unityCanvas.pixelRect.height - position.y) - (m_unityCanvas.pixelRect.height / 2);
		NullCheck(L_11);
		Rect_t2360479859  L_12 = Canvas_get_pixelRect_m516402434(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		// float newY = (m_unityCanvas.pixelRect.height - position.y) - (m_unityCanvas.pixelRect.height / 2);
		float L_13 = Rect_get_height_m1358425599((&V_5), /*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_10)), (float)((float)((float)L_13/(float)(2.0f)))));
		// newX /= m_unityCanvas.scaleFactor;
		float L_14 = V_1;
		Canvas_t3310196443 * L_15 = __this->get_m_unityCanvas_1();
		// newX /= m_unityCanvas.scaleFactor;
		NullCheck(L_15);
		float L_16 = Canvas_get_scaleFactor_m3314757802(L_15, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_14/(float)L_16));
		// newY /= m_unityCanvas.scaleFactor;
		float L_17 = V_3;
		Canvas_t3310196443 * L_18 = __this->get_m_unityCanvas_1();
		// newY /= m_unityCanvas.scaleFactor;
		NullCheck(L_18);
		float L_19 = Canvas_get_scaleFactor_m3314757802(L_18, /*hidden argument*/NULL);
		V_3 = ((float)((float)L_17/(float)L_19));
		// label.color = textColor;
		Text_t1901882714 * L_20 = V_0;
		Color_t2555686324  L_21 = ___textColor1;
		// label.color = textColor;
		NullCheck(L_20);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		// label.rectTransform.localPosition = new Vector3(newX, newY, 0);
		Text_t1901882714 * L_22 = V_0;
		// label.rectTransform.localPosition = new Vector3(newX, newY, 0);
		NullCheck(L_22);
		RectTransform_t3704657025 * L_23 = Graphic_get_rectTransform_m1167152468(L_22, /*hidden argument*/NULL);
		float L_24 = V_1;
		float L_25 = V_3;
		// label.rectTransform.localPosition = new Vector3(newX, newY, 0);
		Vector3_t3722313464  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m3353183577((&L_26), L_24, L_25, (0.0f), /*hidden argument*/NULL);
		// label.rectTransform.localPosition = new Vector3(newX, newY, 0);
		NullCheck(L_23);
		Transform_set_localPosition_m4128471975(L_23, L_26, /*hidden argument*/NULL);
		// label.rectTransform.localRotation = Quaternion.Euler(0, 0, rotationAngleDegrees);
		Text_t1901882714 * L_27 = V_0;
		// label.rectTransform.localRotation = Quaternion.Euler(0, 0, rotationAngleDegrees);
		NullCheck(L_27);
		RectTransform_t3704657025 * L_28 = Graphic_get_rectTransform_m1167152468(L_27, /*hidden argument*/NULL);
		float L_29 = ___rotationAngleDegrees3;
		// label.rectTransform.localRotation = Quaternion.Euler(0, 0, rotationAngleDegrees);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_30 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), L_29, /*hidden argument*/NULL);
		// label.rectTransform.localRotation = Quaternion.Euler(0, 0, rotationAngleDegrees);
		NullCheck(L_28);
		Transform_set_localRotation_m19445462(L_28, L_30, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal::DestroyLabel(System.String)
extern "C"  void LabelServiceInternal_DestroyLabel_m452857124 (LabelServiceInternal_t3414831883 * __this, String_t* ___labelId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LabelServiceInternal_DestroyLabel_m452857124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_screenTextObjects.ContainsKey(labelId))
		Dictionary_2_t1687139013 * L_0 = __this->get_m_screenTextObjects_0();
		String_t* L_1 = ___labelId0;
		// if (m_screenTextObjects.ContainsKey(labelId))
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3099699669(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3099699669_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		// if (!m_screenTextObjects[labelId].IsDestroyed())
		Dictionary_2_t1687139013 * L_3 = __this->get_m_screenTextObjects_0();
		String_t* L_4 = ___labelId0;
		// if (!m_screenTextObjects[labelId].IsDestroyed())
		NullCheck(L_3);
		Text_t1901882714 * L_5 = Dictionary_2_get_Item_m4036631011(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m4036631011_RuntimeMethod_var);
		// if (!m_screenTextObjects[labelId].IsDestroyed())
		NullCheck(L_5);
		bool L_6 = UIBehaviour_IsDestroyed_m3033055982(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		// UnityEngine.Object.Destroy(m_screenTextObjects[labelId].gameObject);
		Dictionary_2_t1687139013 * L_7 = __this->get_m_screenTextObjects_0();
		String_t* L_8 = ___labelId0;
		// UnityEngine.Object.Destroy(m_screenTextObjects[labelId].gameObject);
		NullCheck(L_7);
		Text_t1901882714 * L_9 = Dictionary_2_get_Item_m4036631011(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m4036631011_RuntimeMethod_var);
		// UnityEngine.Object.Destroy(m_screenTextObjects[labelId].gameObject);
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(m_screenTextObjects[labelId].gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// m_screenTextObjects.Remove(labelId);
		Dictionary_2_t1687139013 * L_11 = __this->get_m_screenTextObjects_0();
		String_t* L_12 = ___labelId0;
		// m_screenTextObjects.Remove(labelId);
		NullCheck(L_11);
		Dictionary_2_Remove_m3513537345(L_11, L_12, /*hidden argument*/Dictionary_2_Remove_m3513537345_RuntimeMethod_var);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal::Destroy()
extern "C"  void LabelServiceInternal_Destroy_m3275023265 (LabelServiceInternal_t3414831883 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LabelServiceInternal_Destroy_m3275023265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3319525431 * V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_t913802012  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// var keys = new List<string>(m_screenTextObjects.Keys);
		Dictionary_2_t1687139013 * L_0 = __this->get_m_screenTextObjects_0();
		// var keys = new List<string>(m_screenTextObjects.Keys);
		NullCheck(L_0);
		KeyCollection_t1876814484 * L_1 = Dictionary_2_get_Keys_m1138737473(L_0, /*hidden argument*/Dictionary_2_get_Keys_m1138737473_RuntimeMethod_var);
		// var keys = new List<string>(m_screenTextObjects.Keys);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m864250344(L_2, L_1, /*hidden argument*/List_1__ctor_m864250344_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (string labelId in keys)
		List_1_t3319525431 * L_3 = V_0;
		// foreach (string labelId in keys)
		NullCheck(L_3);
		Enumerator_t913802012  L_4 = List_1_GetEnumerator_m1955908099(L_3, /*hidden argument*/List_1_GetEnumerator_m1955908099_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_001f:
		{
			// foreach (string labelId in keys)
			// foreach (string labelId in keys)
			String_t* L_5 = Enumerator_get_Current_m236733038((&V_2), /*hidden argument*/Enumerator_get_Current_m236733038_RuntimeMethod_var);
			V_1 = L_5;
			// DestroyLabel(labelId);
			String_t* L_6 = V_1;
			// DestroyLabel(labelId);
			LabelServiceInternal_DestroyLabel_m452857124(__this, L_6, /*hidden argument*/NULL);
		}

IL_0030:
		{
			// foreach (string labelId in keys)
			bool L_7 = Enumerator_MoveNext_m4158182743((&V_2), /*hidden argument*/Enumerator_MoveNext_m4158182743_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001f;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		// foreach (string labelId in keys)
		Enumerator_Dispose_m2026665411((&V_2), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		// NativeInteropHelpers.FreeNativeHandle(m_handleToSelf);
		intptr_t L_8 = __this->get_m_handleToSelf_2();
		// NativeInteropHelpers.FreeNativeHandle(m_handleToSelf);
		NativeInteropHelpers_FreeNativeHandle_m4202217538(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal::AddLabel(System.IntPtr,System.String,System.String,Wrld.Interop.ColorInterop&,System.Int32,System.Double)
extern "C"  void LabelServiceInternal_AddLabel_m2638924068 (RuntimeObject * __this /* static, unused */, intptr_t ___labelServiceHandle0, String_t* ___labelId1, String_t* ___labelText2, ColorInterop_t1726030811 * ___color3, int32_t ___baseFontSize4, double ___fontScale5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LabelServiceInternal_AddLabel_m2638924068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelServiceInternal_t3414831883 * V_0 = NULL;
	{
		// var labelService = labelServiceHandle.NativeHandleToObject<LabelServiceInternal>();
		intptr_t L_0 = ___labelServiceHandle0;
		// var labelService = labelServiceHandle.NativeHandleToObject<LabelServiceInternal>();
		LabelServiceInternal_t3414831883 * L_1 = NativeInteropExtensions_NativeHandleToObject_TisLabelServiceInternal_t3414831883_m3108454946(NULL /*static, unused*/, L_0, /*hidden argument*/NativeInteropExtensions_NativeHandleToObject_TisLabelServiceInternal_t3414831883_m3108454946_RuntimeMethod_var);
		V_0 = L_1;
		// labelService.AddLabel(labelId, labelText, color.ToColor(), baseFontSize, fontScale);
		LabelServiceInternal_t3414831883 * L_2 = V_0;
		String_t* L_3 = ___labelId1;
		String_t* L_4 = ___labelText2;
		ColorInterop_t1726030811 * L_5 = ___color3;
		// labelService.AddLabel(labelId, labelText, color.ToColor(), baseFontSize, fontScale);
		Color_t2555686324  L_6 = InteropExtensions_ToColor_m3965519103(NULL /*static, unused*/, (*(ColorInterop_t1726030811 *)L_5), /*hidden argument*/NULL);
		int32_t L_7 = ___baseFontSize4;
		double L_8 = ___fontScale5;
		// labelService.AddLabel(labelId, labelText, color.ToColor(), baseFontSize, fontScale);
		NullCheck(L_2);
		LabelServiceInternal_AddLabel_m803203325(L_2, L_3, L_4, L_6, L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal::UpdateLabel(System.IntPtr,System.String,Wrld.Interop.ColorInterop&,UnityEngine.Vector2&,System.Single)
extern "C"  void LabelServiceInternal_UpdateLabel_m1636846679 (RuntimeObject * __this /* static, unused */, intptr_t ___labelServiceHandle0, String_t* ___labelId1, ColorInterop_t1726030811 * ___textColor2, Vector2_t2156229523 * ___position3, float ___rotationAngleDegrees4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LabelServiceInternal_UpdateLabel_m1636846679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelServiceInternal_t3414831883 * V_0 = NULL;
	{
		// var labelService = labelServiceHandle.NativeHandleToObject<LabelServiceInternal>();
		intptr_t L_0 = ___labelServiceHandle0;
		// var labelService = labelServiceHandle.NativeHandleToObject<LabelServiceInternal>();
		LabelServiceInternal_t3414831883 * L_1 = NativeInteropExtensions_NativeHandleToObject_TisLabelServiceInternal_t3414831883_m3108454946(NULL /*static, unused*/, L_0, /*hidden argument*/NativeInteropExtensions_NativeHandleToObject_TisLabelServiceInternal_t3414831883_m3108454946_RuntimeMethod_var);
		V_0 = L_1;
		// labelService.UpdateLabel(labelId, textColor.ToColor(), position, rotationAngleDegrees);
		LabelServiceInternal_t3414831883 * L_2 = V_0;
		String_t* L_3 = ___labelId1;
		ColorInterop_t1726030811 * L_4 = ___textColor2;
		// labelService.UpdateLabel(labelId, textColor.ToColor(), position, rotationAngleDegrees);
		Color_t2555686324  L_5 = InteropExtensions_ToColor_m3965519103(NULL /*static, unused*/, (*(ColorInterop_t1726030811 *)L_4), /*hidden argument*/NULL);
		Vector2_t2156229523 * L_6 = ___position3;
		float L_7 = ___rotationAngleDegrees4;
		// labelService.UpdateLabel(labelId, textColor.ToColor(), position, rotationAngleDegrees);
		NullCheck(L_2);
		LabelServiceInternal_UpdateLabel_m2393798876(L_2, L_3, L_5, (*(Vector2_t2156229523 *)L_6), L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal::RemoveLabel(System.IntPtr,System.String)
extern "C"  void LabelServiceInternal_RemoveLabel_m4053777316 (RuntimeObject * __this /* static, unused */, intptr_t ___labelServiceHandle0, String_t* ___labelId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LabelServiceInternal_RemoveLabel_m4053777316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelServiceInternal_t3414831883 * V_0 = NULL;
	{
		// var labelService = labelServiceHandle.NativeHandleToObject<LabelServiceInternal>();
		intptr_t L_0 = ___labelServiceHandle0;
		// var labelService = labelServiceHandle.NativeHandleToObject<LabelServiceInternal>();
		LabelServiceInternal_t3414831883 * L_1 = NativeInteropExtensions_NativeHandleToObject_TisLabelServiceInternal_t3414831883_m3108454946(NULL /*static, unused*/, L_0, /*hidden argument*/NativeInteropExtensions_NativeHandleToObject_TisLabelServiceInternal_t3414831883_m3108454946_RuntimeMethod_var);
		V_0 = L_1;
		// labelService.DestroyLabel(labelId);
		LabelServiceInternal_t3414831883 * L_2 = V_0;
		String_t* L_3 = ___labelId1;
		// labelService.DestroyLabel(labelId);
		NullCheck(L_2);
		LabelServiceInternal_DestroyLabel_m452857124(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_AddLabelDelegate_t1714422129 (AddLabelDelegate_t1714422129 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, String_t* ___labelText2, ColorInterop_t1726030811 * ___color3, int32_t ___baseFontSize4, double ___fontScale5, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t, char*, char*, ColorInterop_t1726030811 *, int32_t, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___labelId1' to native representation
	char* ____labelId1_marshaled = NULL;
	____labelId1_marshaled = il2cpp_codegen_marshal_string(___labelId1);

	// Marshaling of parameter '___labelText2' to native representation
	char* ____labelText2_marshaled = NULL;
	____labelText2_marshaled = il2cpp_codegen_marshal_string(___labelText2);

	// Native function invocation
	il2cppPInvokeFunc(___labelServiceHandle0, ____labelId1_marshaled, ____labelText2_marshaled, ___color3, ___baseFontSize4, ___fontScale5);

	// Marshaling cleanup of parameter '___labelId1' native representation
	il2cpp_codegen_marshal_free(____labelId1_marshaled);
	____labelId1_marshaled = NULL;

	// Marshaling cleanup of parameter '___labelText2' native representation
	il2cpp_codegen_marshal_free(____labelText2_marshaled);
	____labelText2_marshaled = NULL;

}
// System.Void Wrld.Resources.Labels.LabelServiceInternal/AddLabelDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AddLabelDelegate__ctor_m1047214054 (AddLabelDelegate_t1714422129 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal/AddLabelDelegate::Invoke(System.IntPtr,System.String,System.String,Wrld.Interop.ColorInterop&,System.Int32,System.Double)
extern "C"  void AddLabelDelegate_Invoke_m4248454141 (AddLabelDelegate_t1714422129 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, String_t* ___labelText2, ColorInterop_t1726030811 * ___color3, int32_t ___baseFontSize4, double ___fontScale5, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AddLabelDelegate_Invoke_m4248454141((AddLabelDelegate_t1714422129 *)__this->get_prev_9(), ___labelServiceHandle0, ___labelId1, ___labelText2, ___color3, ___baseFontSize4, ___fontScale5, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 6)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, String_t*, ColorInterop_t1726030811 *, int32_t, double, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___labelServiceHandle0, ___labelId1, ___labelText2, ___color3, ___baseFontSize4, ___fontScale5, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, String_t*, ColorInterop_t1726030811 *, int32_t, double, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___labelServiceHandle0, ___labelId1, ___labelText2, ___color3, ___baseFontSize4, ___fontScale5, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, String_t*, ColorInterop_t1726030811 *, int32_t, double, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___labelServiceHandle0, ___labelId1, ___labelText2, ___color3, ___baseFontSize4, ___fontScale5, targetMethod);
		}
	}
}
// System.IAsyncResult Wrld.Resources.Labels.LabelServiceInternal/AddLabelDelegate::BeginInvoke(System.IntPtr,System.String,System.String,Wrld.Interop.ColorInterop&,System.Int32,System.Double,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AddLabelDelegate_BeginInvoke_m3609615803 (AddLabelDelegate_t1714422129 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, String_t* ___labelText2, ColorInterop_t1726030811 * ___color3, int32_t ___baseFontSize4, double ___fontScale5, AsyncCallback_t3962456242 * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AddLabelDelegate_BeginInvoke_m3609615803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___labelServiceHandle0);
	__d_args[1] = ___labelId1;
	__d_args[2] = ___labelText2;
	__d_args[3] = Box(ColorInterop_t1726030811_il2cpp_TypeInfo_var, &*___color3);
	__d_args[4] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___baseFontSize4);
	__d_args[5] = Box(Double_t594665363_il2cpp_TypeInfo_var, &___fontScale5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal/AddLabelDelegate::EndInvoke(Wrld.Interop.ColorInterop&,System.IAsyncResult)
extern "C"  void AddLabelDelegate_EndInvoke_m4084361180 (AddLabelDelegate_t1714422129 * __this, ColorInterop_t1726030811 * ___color0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___color0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_RemoveLabelDelegate_t569890163 (RemoveLabelDelegate_t569890163 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___labelId1' to native representation
	char* ____labelId1_marshaled = NULL;
	____labelId1_marshaled = il2cpp_codegen_marshal_string(___labelId1);

	// Native function invocation
	il2cppPInvokeFunc(___labelServiceHandle0, ____labelId1_marshaled);

	// Marshaling cleanup of parameter '___labelId1' native representation
	il2cpp_codegen_marshal_free(____labelId1_marshaled);
	____labelId1_marshaled = NULL;

}
// System.Void Wrld.Resources.Labels.LabelServiceInternal/RemoveLabelDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RemoveLabelDelegate__ctor_m3968693549 (RemoveLabelDelegate_t569890163 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal/RemoveLabelDelegate::Invoke(System.IntPtr,System.String)
extern "C"  void RemoveLabelDelegate_Invoke_m2229750953 (RemoveLabelDelegate_t569890163 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		RemoveLabelDelegate_Invoke_m2229750953((RemoveLabelDelegate_t569890163 *)__this->get_prev_9(), ___labelServiceHandle0, ___labelId1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___labelServiceHandle0, ___labelId1, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___labelServiceHandle0, ___labelId1, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___labelServiceHandle0, ___labelId1, targetMethod);
		}
	}
}
// System.IAsyncResult Wrld.Resources.Labels.LabelServiceInternal/RemoveLabelDelegate::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* RemoveLabelDelegate_BeginInvoke_m1422962026 (RemoveLabelDelegate_t569890163 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoveLabelDelegate_BeginInvoke_m1422962026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___labelServiceHandle0);
	__d_args[1] = ___labelId1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal/RemoveLabelDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void RemoveLabelDelegate_EndInvoke_m4645211 (RemoveLabelDelegate_t569890163 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_UpdateLabelDelegate_t605162668 (UpdateLabelDelegate_t605162668 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, ColorInterop_t1726030811 * ___textColor2, Vector2_t2156229523 * ___position3, float ___rotationAngleDegrees4, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t, char*, ColorInterop_t1726030811 *, Vector2_t2156229523 *, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___labelId1' to native representation
	char* ____labelId1_marshaled = NULL;
	____labelId1_marshaled = il2cpp_codegen_marshal_string(___labelId1);

	// Native function invocation
	il2cppPInvokeFunc(___labelServiceHandle0, ____labelId1_marshaled, ___textColor2, ___position3, ___rotationAngleDegrees4);

	// Marshaling cleanup of parameter '___labelId1' native representation
	il2cpp_codegen_marshal_free(____labelId1_marshaled);
	____labelId1_marshaled = NULL;

}
// System.Void Wrld.Resources.Labels.LabelServiceInternal/UpdateLabelDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdateLabelDelegate__ctor_m1385178301 (UpdateLabelDelegate_t605162668 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal/UpdateLabelDelegate::Invoke(System.IntPtr,System.String,Wrld.Interop.ColorInterop&,UnityEngine.Vector2&,System.Single)
extern "C"  void UpdateLabelDelegate_Invoke_m113718171 (UpdateLabelDelegate_t605162668 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, ColorInterop_t1726030811 * ___textColor2, Vector2_t2156229523 * ___position3, float ___rotationAngleDegrees4, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UpdateLabelDelegate_Invoke_m113718171((UpdateLabelDelegate_t605162668 *)__this->get_prev_9(), ___labelServiceHandle0, ___labelId1, ___textColor2, ___position3, ___rotationAngleDegrees4, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 5)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, ColorInterop_t1726030811 *, Vector2_t2156229523 *, float, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___labelServiceHandle0, ___labelId1, ___textColor2, ___position3, ___rotationAngleDegrees4, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, ColorInterop_t1726030811 *, Vector2_t2156229523 *, float, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___labelServiceHandle0, ___labelId1, ___textColor2, ___position3, ___rotationAngleDegrees4, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, ColorInterop_t1726030811 *, Vector2_t2156229523 *, float, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___labelServiceHandle0, ___labelId1, ___textColor2, ___position3, ___rotationAngleDegrees4, targetMethod);
		}
	}
}
// System.IAsyncResult Wrld.Resources.Labels.LabelServiceInternal/UpdateLabelDelegate::BeginInvoke(System.IntPtr,System.String,Wrld.Interop.ColorInterop&,UnityEngine.Vector2&,System.Single,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* UpdateLabelDelegate_BeginInvoke_m3463997486 (UpdateLabelDelegate_t605162668 * __this, intptr_t ___labelServiceHandle0, String_t* ___labelId1, ColorInterop_t1726030811 * ___textColor2, Vector2_t2156229523 * ___position3, float ___rotationAngleDegrees4, AsyncCallback_t3962456242 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateLabelDelegate_BeginInvoke_m3463997486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___labelServiceHandle0);
	__d_args[1] = ___labelId1;
	__d_args[2] = Box(ColorInterop_t1726030811_il2cpp_TypeInfo_var, &*___textColor2);
	__d_args[3] = Box(Vector2_t2156229523_il2cpp_TypeInfo_var, &*___position3);
	__d_args[4] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___rotationAngleDegrees4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void Wrld.Resources.Labels.LabelServiceInternal/UpdateLabelDelegate::EndInvoke(Wrld.Interop.ColorInterop&,UnityEngine.Vector2&,System.IAsyncResult)
extern "C"  void UpdateLabelDelegate_EndInvoke_m1006685868 (UpdateLabelDelegate_t605162668 * __this, ColorInterop_t1726030811 * ___textColor0, Vector2_t2156229523 * ___position1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___textColor0,
	___position1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Resources.Terrain.Heights.TerrainHeightProvider::.ctor()
extern "C"  void TerrainHeightProvider__ctor_m1360499578 (TerrainHeightProvider_t517848921 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" int32_t DEFAULT_CALL TryGetTerrainHeight(intptr_t, double, double, double, float*);
// System.Boolean Wrld.Resources.Terrain.Heights.TerrainHeightProvider::TryGetTerrainHeight(System.IntPtr,System.Double,System.Double,System.Double,System.Single&)
extern "C"  bool TerrainHeightProvider_TryGetTerrainHeight_m2287061277 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, double ___ecefX1, double ___ecefY2, double ___ecefZ3, float* ___out_terrainHeight4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, double, double, double, float*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TryGetTerrainHeight)(___ptr0, ___ecefX1, ___ecefY2, ___ecefZ3, ___out_terrainHeight4);

	return static_cast<bool>(returnValue);
}
extern "C" float DEFAULT_CALL GetMinTerrainHeight(intptr_t);
// System.Single Wrld.Resources.Terrain.Heights.TerrainHeightProvider::GetMinTerrainHeight(System.IntPtr)
extern "C"  float TerrainHeightProvider_GetMinTerrainHeight_m4174271395 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(GetMinTerrainHeight)(___ptr0);

	return returnValue;
}
extern "C" float DEFAULT_CALL GetMaxTerrainHeight(intptr_t);
// System.Single Wrld.Resources.Terrain.Heights.TerrainHeightProvider::GetMaxTerrainHeight(System.IntPtr)
extern "C"  float TerrainHeightProvider_GetMaxTerrainHeight_m311572516 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(GetMaxTerrainHeight)(___ptr0);

	return returnValue;
}
// System.Boolean Wrld.Resources.Terrain.Heights.TerrainHeightProvider::TryGetHeight(Wrld.Common.Maths.DoubleVector3,System.Single&)
extern "C"  bool TerrainHeightProvider_TryGetHeight_m1582937833 (TerrainHeightProvider_t517848921 * __this, DoubleVector3_t761704365  ___ecefPosition0, float* ___out_terrainHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainHeightProvider_TryGetHeight_m1582937833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// out_terrainHeight = 0.0f;
		float* L_0 = ___out_terrainHeight1;
		*((float*)(L_0)) = (float)(0.0f);
		// return TryGetTerrainHeight(NativePluginRunner.API,
		intptr_t L_1 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		double L_2 = (&___ecefPosition0)->get_x_3();
		double L_3 = (&___ecefPosition0)->get_y_4();
		double L_4 = (&___ecefPosition0)->get_z_5();
		float* L_5 = ___out_terrainHeight1;
		// return TryGetTerrainHeight(NativePluginRunner.API,
		bool L_6 = TerrainHeightProvider_TryGetTerrainHeight_m2287061277(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Single Wrld.Resources.Terrain.Heights.TerrainHeightProvider::GetMinHeight()
extern "C"  float TerrainHeightProvider_GetMinHeight_m246132978 (TerrainHeightProvider_t517848921 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainHeightProvider_GetMinHeight_m246132978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return GetMinTerrainHeight(NativePluginRunner.API);
		intptr_t L_0 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		// return GetMinTerrainHeight(NativePluginRunner.API);
		float L_1 = TerrainHeightProvider_GetMinTerrainHeight_m4174271395(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Wrld.Resources.Terrain.Heights.TerrainHeightProvider::GetMaxHeight()
extern "C"  float TerrainHeightProvider_GetMaxHeight_m3541930250 (TerrainHeightProvider_t517848921 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainHeightProvider_GetMaxHeight_m3541930250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return GetMaxTerrainHeight(NativePluginRunner.API);
		intptr_t L_0 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		// return GetMaxTerrainHeight(NativePluginRunner.API);
		float L_1 = TerrainHeightProvider_GetMaxTerrainHeight_m311572516(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Wrld.SceneCallbacks
extern "C" void SceneCallbacks_t4278023046_marshal_pinvoke(const SceneCallbacks_t4278023046& unmarshaled, SceneCallbacks_t4278023046_marshaled_pinvoke& marshaled)
{
	marshaled.___sceneServiceCallbacks_0 = unmarshaled.get_sceneServiceCallbacks_0();
	marshaled.___setScale_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_setScale_1()));
	marshaled.___setTranslation_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_setTranslation_2()));
	marshaled.___setRotation_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_setRotation_3()));
	marshaled.___setColor_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_setColor_4()));
}
extern "C" void SceneCallbacks_t4278023046_marshal_pinvoke_back(const SceneCallbacks_t4278023046_marshaled_pinvoke& marshaled, SceneCallbacks_t4278023046& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneCallbacks_t4278023046_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_sceneServiceCallbacks_temp_0;
	memset(&unmarshaled_sceneServiceCallbacks_temp_0, 0, sizeof(unmarshaled_sceneServiceCallbacks_temp_0));
	unmarshaled_sceneServiceCallbacks_temp_0 = marshaled.___sceneServiceCallbacks_0;
	unmarshaled.set_sceneServiceCallbacks_0(unmarshaled_sceneServiceCallbacks_temp_0);
	unmarshaled.set_setScale_1(il2cpp_codegen_marshal_function_ptr_to_delegate<SetScaleCallback_t2997993506>(marshaled.___setScale_1, SetScaleCallback_t2997993506_il2cpp_TypeInfo_var));
	unmarshaled.set_setTranslation_2(il2cpp_codegen_marshal_function_ptr_to_delegate<SetTranslationCallback_t3765364063>(marshaled.___setTranslation_2, SetTranslationCallback_t3765364063_il2cpp_TypeInfo_var));
	unmarshaled.set_setRotation_3(il2cpp_codegen_marshal_function_ptr_to_delegate<SetOrientationCallback_t1136855763>(marshaled.___setRotation_3, SetOrientationCallback_t1136855763_il2cpp_TypeInfo_var));
	unmarshaled.set_setColor_4(il2cpp_codegen_marshal_function_ptr_to_delegate<SetColorCallback_t2629579893>(marshaled.___setColor_4, SetColorCallback_t2629579893_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Wrld.SceneCallbacks
extern "C" void SceneCallbacks_t4278023046_marshal_pinvoke_cleanup(SceneCallbacks_t4278023046_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Wrld.SceneCallbacks
extern "C" void SceneCallbacks_t4278023046_marshal_com(const SceneCallbacks_t4278023046& unmarshaled, SceneCallbacks_t4278023046_marshaled_com& marshaled)
{
	marshaled.___sceneServiceCallbacks_0 = unmarshaled.get_sceneServiceCallbacks_0();
	marshaled.___setScale_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_setScale_1()));
	marshaled.___setTranslation_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_setTranslation_2()));
	marshaled.___setRotation_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_setRotation_3()));
	marshaled.___setColor_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_setColor_4()));
}
extern "C" void SceneCallbacks_t4278023046_marshal_com_back(const SceneCallbacks_t4278023046_marshaled_com& marshaled, SceneCallbacks_t4278023046& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneCallbacks_t4278023046_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_sceneServiceCallbacks_temp_0;
	memset(&unmarshaled_sceneServiceCallbacks_temp_0, 0, sizeof(unmarshaled_sceneServiceCallbacks_temp_0));
	unmarshaled_sceneServiceCallbacks_temp_0 = marshaled.___sceneServiceCallbacks_0;
	unmarshaled.set_sceneServiceCallbacks_0(unmarshaled_sceneServiceCallbacks_temp_0);
	unmarshaled.set_setScale_1(il2cpp_codegen_marshal_function_ptr_to_delegate<SetScaleCallback_t2997993506>(marshaled.___setScale_1, SetScaleCallback_t2997993506_il2cpp_TypeInfo_var));
	unmarshaled.set_setTranslation_2(il2cpp_codegen_marshal_function_ptr_to_delegate<SetTranslationCallback_t3765364063>(marshaled.___setTranslation_2, SetTranslationCallback_t3765364063_il2cpp_TypeInfo_var));
	unmarshaled.set_setRotation_3(il2cpp_codegen_marshal_function_ptr_to_delegate<SetOrientationCallback_t1136855763>(marshaled.___setRotation_3, SetOrientationCallback_t1136855763_il2cpp_TypeInfo_var));
	unmarshaled.set_setColor_4(il2cpp_codegen_marshal_function_ptr_to_delegate<SetColorCallback_t2629579893>(marshaled.___setColor_4, SetColorCallback_t2629579893_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Wrld.SceneCallbacks
extern "C" void SceneCallbacks_t4278023046_marshal_com_cleanup(SceneCallbacks_t4278023046_marshaled_com& marshaled)
{
}
// System.Void Wrld.SceneCallbacks::.ctor(System.IntPtr,Wrld.MapGameObjectScene/SetScaleCallback,Wrld.MapGameObjectScene/SetTranslationCallback,Wrld.MapGameObjectScene/SetOrientationCallback,Wrld.MapGameObjectScene/SetColorCallback)
extern "C"  void SceneCallbacks__ctor_m2017158871 (SceneCallbacks_t4278023046 * __this, intptr_t ____sceneServiceCallbacks0, SetScaleCallback_t2997993506 * ____setScale1, SetTranslationCallback_t3765364063 * ____setTranslation2, SetOrientationCallback_t1136855763 * ____setRotation3, SetColorCallback_t2629579893 * ____setColor4, const RuntimeMethod* method)
{
	{
		// sceneServiceCallbacks = _sceneServiceCallbacks;
		intptr_t L_0 = ____sceneServiceCallbacks0;
		__this->set_sceneServiceCallbacks_0(L_0);
		// setScale = _setScale;
		SetScaleCallback_t2997993506 * L_1 = ____setScale1;
		__this->set_setScale_1(L_1);
		// setTranslation = _setTranslation;
		SetTranslationCallback_t3765364063 * L_2 = ____setTranslation2;
		__this->set_setTranslation_2(L_2);
		// setRotation = _setRotation;
		SetOrientationCallback_t1136855763 * L_3 = ____setRotation3;
		__this->set_setRotation_3(L_3);
		// setColor = _setColor;
		SetColorCallback_t2629579893 * L_4 = ____setColor4;
		__this->set_setColor_4(L_4);
		// }
		return;
	}
}
extern "C"  void SceneCallbacks__ctor_m2017158871_AdjustorThunk (RuntimeObject * __this, intptr_t ____sceneServiceCallbacks0, SetScaleCallback_t2997993506 * ____setScale1, SetTranslationCallback_t3765364063 * ____setTranslation2, SetOrientationCallback_t1136855763 * ____setRotation3, SetColorCallback_t2629579893 * ____setColor4, const RuntimeMethod* method)
{
	SceneCallbacks_t4278023046 * _thisAdjusted = reinterpret_cast<SceneCallbacks_t4278023046 *>(__this + 1);
	SceneCallbacks__ctor_m2017158871(_thisAdjusted, ____sceneServiceCallbacks0, ____setScale1, ____setTranslation2, ____setRotation3, ____setColor4, method);
}
// Wrld.SceneCallbacks Wrld.SceneCallbacks::Create(System.IntPtr)
extern "C"  SceneCallbacks_t4278023046  SceneCallbacks_Create_m1432721627 (RuntimeObject * __this /* static, unused */, intptr_t ___sceneServiceCallbacks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneCallbacks_Create_m1432721627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SceneCallbacks_t4278023046  V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	SetScaleCallback_t2997993506 * G_B4_0 = NULL;
	intptr_t G_B4_1;
	memset(&G_B4_1, 0, sizeof(G_B4_1));
	SetScaleCallback_t2997993506 * G_B3_0 = NULL;
	intptr_t G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	SetTranslationCallback_t3765364063 * G_B6_0 = NULL;
	SetScaleCallback_t2997993506 * G_B6_1 = NULL;
	intptr_t G_B6_2;
	memset(&G_B6_2, 0, sizeof(G_B6_2));
	SetTranslationCallback_t3765364063 * G_B5_0 = NULL;
	SetScaleCallback_t2997993506 * G_B5_1 = NULL;
	intptr_t G_B5_2;
	memset(&G_B5_2, 0, sizeof(G_B5_2));
	SetOrientationCallback_t1136855763 * G_B8_0 = NULL;
	SetTranslationCallback_t3765364063 * G_B8_1 = NULL;
	SetScaleCallback_t2997993506 * G_B8_2 = NULL;
	intptr_t G_B8_3;
	memset(&G_B8_3, 0, sizeof(G_B8_3));
	SetOrientationCallback_t1136855763 * G_B7_0 = NULL;
	SetTranslationCallback_t3765364063 * G_B7_1 = NULL;
	SetScaleCallback_t2997993506 * G_B7_2 = NULL;
	intptr_t G_B7_3;
	memset(&G_B7_3, 0, sizeof(G_B7_3));
	{
		// return new SceneCallbacks(
		intptr_t L_0 = ___sceneServiceCallbacks0;
		SetScaleCallback_t2997993506 * L_1 = ((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_5();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001a;
		}
	}
	{
		intptr_t L_2 = (intptr_t)MapGameObjectScene_SetScale_m2736247529_RuntimeMethod_var;
		SetScaleCallback_t2997993506 * L_3 = (SetScaleCallback_t2997993506 *)il2cpp_codegen_object_new(SetScaleCallback_t2997993506_il2cpp_TypeInfo_var);
		SetScaleCallback__ctor_m3879199287(L_3, NULL, L_2, /*hidden argument*/NULL);
		((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_5(L_3);
		G_B2_0 = G_B1_0;
	}

IL_001a:
	{
		SetScaleCallback_t2997993506 * L_4 = ((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_5();
		SetTranslationCallback_t3765364063 * L_5 = ((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_6();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = L_4;
			G_B4_1 = G_B2_0;
			goto IL_0037;
		}
	}
	{
		intptr_t L_6 = (intptr_t)MapGameObjectScene_SetTranslation_m3673885618_RuntimeMethod_var;
		SetTranslationCallback_t3765364063 * L_7 = (SetTranslationCallback_t3765364063 *)il2cpp_codegen_object_new(SetTranslationCallback_t3765364063_il2cpp_TypeInfo_var);
		SetTranslationCallback__ctor_m2332495158(L_7, NULL, L_6, /*hidden argument*/NULL);
		((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_6(L_7);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0037:
	{
		SetTranslationCallback_t3765364063 * L_8 = ((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_6();
		SetOrientationCallback_t1136855763 * L_9 = ((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_7();
		G_B5_0 = L_8;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		if (L_9)
		{
			G_B6_0 = L_8;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			goto IL_0054;
		}
	}
	{
		intptr_t L_10 = (intptr_t)MapGameObjectScene_SetOrientation_m3084922172_RuntimeMethod_var;
		SetOrientationCallback_t1136855763 * L_11 = (SetOrientationCallback_t1136855763 *)il2cpp_codegen_object_new(SetOrientationCallback_t1136855763_il2cpp_TypeInfo_var);
		SetOrientationCallback__ctor_m3184023659(L_11, NULL, L_10, /*hidden argument*/NULL);
		((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_7(L_11);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0054:
	{
		SetOrientationCallback_t1136855763 * L_12 = ((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_7();
		SetColorCallback_t2629579893 * L_13 = ((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_8();
		G_B7_0 = L_12;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		if (L_13)
		{
			G_B8_0 = L_12;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			G_B8_3 = G_B6_2;
			goto IL_0071;
		}
	}
	{
		intptr_t L_14 = (intptr_t)MapGameObjectScene_SetColor_m1877964419_RuntimeMethod_var;
		SetColorCallback_t2629579893 * L_15 = (SetColorCallback_t2629579893 *)il2cpp_codegen_object_new(SetColorCallback_t2629579893_il2cpp_TypeInfo_var);
		SetColorCallback__ctor_m3212836024(L_15, NULL, L_14, /*hidden argument*/NULL);
		((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_8(L_15);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0071:
	{
		SetColorCallback_t2629579893 * L_16 = ((SceneCallbacks_t4278023046_StaticFields*)il2cpp_codegen_static_fields_for(SceneCallbacks_t4278023046_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_8();
		// return new SceneCallbacks(
		SceneCallbacks_t4278023046  L_17;
		memset(&L_17, 0, sizeof(L_17));
		SceneCallbacks__ctor_m2017158871((&L_17), G_B8_3, G_B8_2, G_B8_1, G_B8_0, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_0081;
	}

IL_0081:
	{
		// }
		SceneCallbacks_t4278023046  L_18 = V_0;
		return L_18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Scripts.Utilities.APIKeyHelpers::CacheAPIKey(System.String)
extern "C"  void APIKeyHelpers_CacheAPIKey_m3817519100 (RuntimeObject * __this /* static, unused */, String_t* ___apiKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (APIKeyHelpers_CacheAPIKey_m3817519100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AppearsValid(apiKey))
		String_t* L_0 = ___apiKey0;
		// if (AppearsValid(apiKey))
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		bool L_1 = APIKeyHelpers_AppearsValid_m169516127(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// ms_cachedApiKey = apiKey;
		String_t* L_2 = ___apiKey0;
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		((APIKeyHelpers_t4091981690_StaticFields*)il2cpp_codegen_static_fields_for(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var))->set_ms_cachedApiKey_1(L_2);
		// PlayerPrefs.SetString(WrldApiKeyTag, ms_cachedApiKey);
		String_t* L_3 = ((APIKeyHelpers_t4091981690_StaticFields*)il2cpp_codegen_static_fields_for(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var))->get_ms_cachedApiKey_1();
		// PlayerPrefs.SetString(WrldApiKeyTag, ms_cachedApiKey);
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral3694551514, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.String Wrld.Scripts.Utilities.APIKeyHelpers::GetCachedAPIKey()
extern "C"  String_t* APIKeyHelpers_GetCachedAPIKey_m2319953939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (APIKeyHelpers_GetCachedAPIKey_m2319953939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (!string.IsNullOrEmpty(ms_cachedApiKey) && AppearsValid(ms_cachedApiKey))
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		String_t* L_0 = ((APIKeyHelpers_t4091981690_StaticFields*)il2cpp_codegen_static_fields_for(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var))->get_ms_cachedApiKey_1();
		// if (!string.IsNullOrEmpty(ms_cachedApiKey) && AppearsValid(ms_cachedApiKey))
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		String_t* L_2 = ((APIKeyHelpers_t4091981690_StaticFields*)il2cpp_codegen_static_fields_for(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var))->get_ms_cachedApiKey_1();
		// if (!string.IsNullOrEmpty(ms_cachedApiKey) && AppearsValid(ms_cachedApiKey))
		bool L_3 = APIKeyHelpers_AppearsValid_m169516127(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// return ms_cachedApiKey;
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		String_t* L_4 = ((APIKeyHelpers_t4091981690_StaticFields*)il2cpp_codegen_static_fields_for(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var))->get_ms_cachedApiKey_1();
		V_0 = L_4;
		goto IL_003b;
	}

IL_002b:
	{
		// readCachedKeyFromPlayerPref();
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		APIKeyHelpers_readCachedKeyFromPlayerPref_m3379974318(NULL /*static, unused*/, /*hidden argument*/NULL);
		// return ms_cachedApiKey;
		String_t* L_5 = ((APIKeyHelpers_t4091981690_StaticFields*)il2cpp_codegen_static_fields_for(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var))->get_ms_cachedApiKey_1();
		V_0 = L_5;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Wrld.Scripts.Utilities.APIKeyHelpers::AppearsValid(System.String)
extern "C"  bool APIKeyHelpers_AppearsValid_m169516127 (RuntimeObject * __this /* static, unused */, String_t* ___apiKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (APIKeyHelpers_AppearsValid_m169516127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return apiKey != null && Regex.IsMatch(apiKey, "^[a-f0-9]{32}$");
		String_t* L_0 = ___apiKey0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___apiKey0;
		// return apiKey != null && Regex.IsMatch(apiKey, "^[a-f0-9]{32}$");
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
		bool L_2 = Regex_IsMatch_m3266004395(NULL /*static, unused*/, L_1, _stringLiteral1539706168, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Wrld.Scripts.Utilities.APIKeyHelpers::readCachedKeyFromPlayerPref()
extern "C"  void APIKeyHelpers_readCachedKeyFromPlayerPref_m3379974318 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (APIKeyHelpers_readCachedKeyFromPlayerPref_m3379974318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var cachedAPIKey = PlayerPrefs.GetString(WrldApiKeyTag);
		// var cachedAPIKey = PlayerPrefs.GetString(WrldApiKeyTag);
		String_t* L_0 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral3694551514, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(cachedAPIKey) && AppearsValid(cachedAPIKey))
		String_t* L_1 = V_0;
		// if (!string.IsNullOrEmpty(cachedAPIKey) && AppearsValid(cachedAPIKey))
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_3 = V_0;
		// if (!string.IsNullOrEmpty(cachedAPIKey) && AppearsValid(cachedAPIKey))
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		bool L_4 = APIKeyHelpers_AppearsValid_m169516127(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// ms_cachedApiKey = cachedAPIKey;
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		((APIKeyHelpers_t4091981690_StaticFields*)il2cpp_codegen_static_fields_for(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var))->set_ms_cachedApiKey_1(L_5);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Wrld.Scripts.Utilities.APIKeyHelpers::.cctor()
extern "C"  void APIKeyHelpers__cctor_m3097551089 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (APIKeyHelpers__cctor_m3097551089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string ms_cachedApiKey = null;
		((APIKeyHelpers_t4091981690_StaticFields*)il2cpp_codegen_static_fields_for(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var))->set_ms_cachedApiKey_1((String_t*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Scripts.Utilities.InvalidApiKeyException::.ctor(System.String)
extern "C"  void InvalidApiKeyException__ctor_m2259673222 (InvalidApiKeyException_t175683051 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// : base(message)
		String_t* L_0 = ___message0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.CoordinateConversions::ConvertLatLongAltitudeToEcef(System.Double,System.Double,System.Double)
extern "C"  DoubleVector3_t761704365  CoordinateConversions_ConvertLatLongAltitudeToEcef_m3731996007 (RuntimeObject * __this /* static, unused */, double ___latitudeInRadians0, double ___longitudeInRadians1, double ___altitudeInMetres2, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	DoubleVector3_t761704365  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		// double radius = EarthConstants.Radius + altitudeInMetres;
		double L_0 = ___altitudeInMetres2;
		V_0 = ((double)il2cpp_codegen_add((double)(6378100.0), (double)L_0));
		// double x = radius * Math.Cos(latitudeInRadians) * Math.Cos(longitudeInRadians);
		double L_1 = V_0;
		double L_2 = ___latitudeInRadians0;
		// double x = radius * Math.Cos(latitudeInRadians) * Math.Cos(longitudeInRadians);
		double L_3 = cos(L_2);
		double L_4 = ___longitudeInRadians1;
		// double x = radius * Math.Cos(latitudeInRadians) * Math.Cos(longitudeInRadians);
		double L_5 = cos(L_4);
		V_1 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_1, (double)L_3)), (double)L_5));
		// double y = radius * Math.Cos(latitudeInRadians) * Math.Sin(longitudeInRadians);
		double L_6 = V_0;
		double L_7 = ___latitudeInRadians0;
		// double y = radius * Math.Cos(latitudeInRadians) * Math.Sin(longitudeInRadians);
		double L_8 = cos(L_7);
		double L_9 = ___longitudeInRadians1;
		// double y = radius * Math.Cos(latitudeInRadians) * Math.Sin(longitudeInRadians);
		double L_10 = sin(L_9);
		V_2 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_6, (double)L_8)), (double)L_10));
		// double z = radius * Math.Sin(latitudeInRadians);
		double L_11 = V_0;
		double L_12 = ___latitudeInRadians0;
		// double z = radius * Math.Sin(latitudeInRadians);
		double L_13 = sin(L_12);
		V_3 = ((double)il2cpp_codegen_multiply((double)L_11, (double)L_13));
		// return new DoubleVector3(-y, z, x);
		double L_14 = V_2;
		double L_15 = V_3;
		double L_16 = V_1;
		// return new DoubleVector3(-y, z, x);
		DoubleVector3_t761704365  L_17;
		memset(&L_17, 0, sizeof(L_17));
		DoubleVector3__ctor_m393031433((&L_17), ((-L_14)), L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		DoubleVector3_t761704365  L_18 = V_4;
		return L_18;
	}
}
// Wrld.Space.LatLongAltitude Wrld.Space.CoordinateConversions::ConvertEcefToLatLongAltitude(System.Double,System.Double,System.Double)
extern "C"  LatLongAltitude_t944891001  CoordinateConversions_ConvertEcefToLatLongAltitude_m3276727551 (RuntimeObject * __this /* static, unused */, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	LatLongAltitude_t944891001  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		// double p = Math.Sqrt((z * z) + (-x * -x));
		double L_0 = ___z2;
		double L_1 = ___z2;
		double L_2 = ___x0;
		double L_3 = ___x0;
		// double p = Math.Sqrt((z * z) + (-x * -x));
		double L_4 = sqrt(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_0, (double)L_1)), (double)((double)il2cpp_codegen_multiply((double)((-L_2)), (double)((-L_3)))))));
		V_0 = L_4;
		// double lat = Math.Atan(y / p);
		double L_5 = ___y1;
		double L_6 = V_0;
		// double lat = Math.Atan(y / p);
		double L_7 = atan(((double)((double)L_5/(double)L_6)));
		V_1 = L_7;
		// double lon = Math.Atan2(-x, z);
		double L_8 = ___x0;
		double L_9 = ___z2;
		// double lon = Math.Atan2(-x, z);
		double L_10 = atan2(((-L_8)), L_9);
		V_2 = L_10;
		// double alt = (p / Math.Cos(lat)) - EarthConstants.Radius;
		double L_11 = V_0;
		double L_12 = V_1;
		// double alt = (p / Math.Cos(lat)) - EarthConstants.Radius;
		double L_13 = cos(L_12);
		V_3 = ((double)il2cpp_codegen_subtract((double)((double)((double)L_11/(double)L_13)), (double)(6378100.0)));
		// return LatLongAltitude.FromRadians(lat, lon, alt);
		double L_14 = V_1;
		double L_15 = V_2;
		double L_16 = V_3;
		// return LatLongAltitude.FromRadians(lat, lon, alt);
		LatLongAltitude_t944891001  L_17 = LatLongAltitude_FromRadians_m303748098(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		LatLongAltitude_t944891001  L_18 = V_4;
		return L_18;
	}
}
// Wrld.Space.LatLongAltitude Wrld.Space.CoordinateConversions::ConvertEcefToLatLongAltitude(Wrld.Common.Maths.DoubleVector3)
extern "C"  LatLongAltitude_t944891001  CoordinateConversions_ConvertEcefToLatLongAltitude_m3101309193 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ___ecef0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return ConvertEcefToLatLongAltitude(ecef.x, ecef.y, ecef.z);
		double L_0 = (&___ecef0)->get_x_3();
		double L_1 = (&___ecef0)->get_y_4();
		double L_2 = (&___ecef0)->get_z_5();
		// return ConvertEcefToLatLongAltitude(ecef.x, ecef.y, ecef.z);
		LatLongAltitude_t944891001  L_3 = CoordinateConversions_ConvertEcefToLatLongAltitude_m3276727551(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		LatLongAltitude_t944891001  L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.ECEFTransformUpdateStrategy::.ctor(Wrld.Common.Maths.DoubleVector3,UnityEngine.Vector3,System.Single)
extern "C"  void ECEFTransformUpdateStrategy__ctor_m856165431 (ECEFTransformUpdateStrategy_t443103155 * __this, DoubleVector3_t761704365  ___cameraPositionECEF0, Vector3_t3722313464  ___up1, float ___scale2, const RuntimeMethod* method)
{
	{
		// public ECEFTransformUpdateStrategy(DoubleVector3 cameraPositionECEF, Vector3 up, float scale)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_cameraPositionECEF = cameraPositionECEF;
		DoubleVector3_t761704365  L_0 = ___cameraPositionECEF0;
		__this->set_m_cameraPositionECEF_0(L_0);
		// m_up = up;
		Vector3_t3722313464  L_1 = ___up1;
		__this->set_m_up_1(L_1);
		// m_flattenScale = scale;
		float L_2 = ___scale2;
		__this->set_m_flattenScale_2(L_2);
		// }
		return;
	}
}
// System.Void Wrld.Space.ECEFTransformUpdateStrategy::UpdateTransform(UnityEngine.Transform,Wrld.Common.Maths.DoubleVector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Boolean)
extern "C"  void ECEFTransformUpdateStrategy_UpdateTransform_m1150651228 (ECEFTransformUpdateStrategy_t443103155 * __this, Transform_t3600365921 * ___objectTransform0, DoubleVector3_t761704365  ___objectOriginECEF1, Vector3_t3722313464  ___translationOffsetECEF2, Quaternion_t2301928331  ___orientationECEF3, float ___heightOffset4, bool ___applyFlattening5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ECEFTransformUpdateStrategy_UpdateTransform_m1150651228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t2301928331  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Quaternion_t2301928331  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Quaternion_t2301928331  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		// var cameraRelativePosition = (objectOriginECEF - m_cameraPositionECEF).ToSingleVector();
		DoubleVector3_t761704365  L_0 = ___objectOriginECEF1;
		DoubleVector3_t761704365  L_1 = __this->get_m_cameraPositionECEF_0();
		// var cameraRelativePosition = (objectOriginECEF - m_cameraPositionECEF).ToSingleVector();
		IL2CPP_RUNTIME_CLASS_INIT(DoubleVector3_t761704365_il2cpp_TypeInfo_var);
		DoubleVector3_t761704365  L_2 = DoubleVector3_op_Subtraction_m1122701270(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		// var cameraRelativePosition = (objectOriginECEF - m_cameraPositionECEF).ToSingleVector();
		Vector3_t3722313464  L_3 = DoubleVector3Extensions_ToSingleVector_m1142520591(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// cameraRelativePosition +=  m_up * heightOffset + translationOffsetECEF;
		Vector3_t3722313464  L_4 = V_0;
		Vector3_t3722313464  L_5 = __this->get_m_up_1();
		float L_6 = ___heightOffset4;
		// cameraRelativePosition +=  m_up * heightOffset + translationOffsetECEF;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = ___translationOffsetECEF2;
		// cameraRelativePosition +=  m_up * heightOffset + translationOffsetECEF;
		Vector3_t3722313464  L_9 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		// cameraRelativePosition +=  m_up * heightOffset + translationOffsetECEF;
		Vector3_t3722313464  L_10 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_4, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (applyFlattening && m_flattenScale != 1.0f)
		bool L_11 = ___applyFlattening5;
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		float L_12 = __this->get_m_flattenScale_2();
		if ((((float)L_12) == ((float)(1.0f))))
		{
			goto IL_00a8;
		}
	}
	{
		// var scaleVec = new Vector3(1, m_flattenScale, 1);
		float L_13 = __this->get_m_flattenScale_2();
		// var scaleVec = new Vector3(1, m_flattenScale, 1);
		Vector3__ctor_m3353183577((&V_1), (1.0f), L_13, (1.0f), /*hidden argument*/NULL);
		// var upECEF = objectOriginECEF.normalized.ToSingleVector();
		// var upECEF = objectOriginECEF.normalized.ToSingleVector();
		DoubleVector3_t761704365  L_14 = DoubleVector3_get_normalized_m277955098((&___objectOriginECEF1), /*hidden argument*/NULL);
		// var upECEF = objectOriginECEF.normalized.ToSingleVector();
		Vector3_t3722313464  L_15 = DoubleVector3Extensions_ToSingleVector_m1142520591(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// var localToECEF = Quaternion.FromToRotation(Vector3.up, m_up);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = __this->get_m_up_1();
		// var localToECEF = Quaternion.FromToRotation(Vector3.up, m_up);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_18 = Quaternion_FromToRotation_m3769621427(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// var ecefToLocal = Quaternion.FromToRotation(m_up, Vector3.up);
		Vector3_t3722313464  L_19 = __this->get_m_up_1();
		// var ecefToLocal = Quaternion.FromToRotation(m_up, Vector3.up);
		Vector3_t3722313464  L_20 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		// var ecefToLocal = Quaternion.FromToRotation(m_up, Vector3.up);
		Quaternion_t2301928331  L_21 = Quaternion_FromToRotation_m3769621427(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		// var innerRotation = ecefToLocal * orientationECEF;
		Quaternion_t2301928331  L_22 = V_4;
		Quaternion_t2301928331  L_23 = ___orientationECEF3;
		// var innerRotation = ecefToLocal * orientationECEF;
		Quaternion_t2301928331  L_24 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		// TransformHelper.ApplyTransform(objectTransform, cameraRelativePosition, scaleVec, localToECEF, innerRotation);
		Transform_t3600365921 * L_25 = ___objectTransform0;
		Vector3_t3722313464  L_26 = V_0;
		Vector3_t3722313464  L_27 = V_1;
		Quaternion_t2301928331  L_28 = V_3;
		Quaternion_t2301928331  L_29 = V_5;
		// TransformHelper.ApplyTransform(objectTransform, cameraRelativePosition, scaleVec, localToECEF, innerRotation);
		TransformHelper_ApplyTransform_m3531692701(NULL /*static, unused*/, L_25, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_00a8:
	{
		// TransformHelper.ApplyTransform(objectTransform, cameraRelativePosition, Vector3.one, orientationECEF, Quaternion.identity);
		Transform_t3600365921 * L_30 = ___objectTransform0;
		Vector3_t3722313464  L_31 = V_0;
		// TransformHelper.ApplyTransform(objectTransform, cameraRelativePosition, Vector3.one, orientationECEF, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_32 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_33 = ___orientationECEF3;
		// TransformHelper.ApplyTransform(objectTransform, cameraRelativePosition, Vector3.one, orientationECEF, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_34 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// TransformHelper.ApplyTransform(objectTransform, cameraRelativePosition, Vector3.one, orientationECEF, Quaternion.identity);
		TransformHelper_ApplyTransform_m3531692701(NULL /*static, unused*/, L_30, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApi::.ctor(Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal)
extern "C"  void EnvironmentFlatteningApi__ctor_m60227350 (EnvironmentFlatteningApi_t3419959241 * __this, EnvironmentFlatteningApiInternal_t833742330 * ___apiInternal0, const RuntimeMethod* method)
{
	{
		// internal EnvironmentFlatteningApi(EnvironmentFlatteningApiInternal apiInternal)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_apiInternal = apiInternal;
		EnvironmentFlatteningApiInternal_t833742330 * L_0 = ___apiInternal0;
		__this->set_m_apiInternal_0(L_0);
		// }
		return;
	}
}
// System.Void Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApi::SetIsFlattened(System.Boolean)
extern "C"  void EnvironmentFlatteningApi_SetIsFlattened_m692187285 (EnvironmentFlatteningApi_t3419959241 * __this, bool ___isFlattened0, const RuntimeMethod* method)
{
	{
		// m_apiInternal.SetIsFlattened(isFlattened);
		EnvironmentFlatteningApiInternal_t833742330 * L_0 = __this->get_m_apiInternal_0();
		bool L_1 = ___isFlattened0;
		// m_apiInternal.SetIsFlattened(isFlattened);
		NullCheck(L_0);
		EnvironmentFlatteningApiInternal_SetIsFlattened_m476507073(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApi::IsFlattened()
extern "C"  bool EnvironmentFlatteningApi_IsFlattened_m480749782 (EnvironmentFlatteningApi_t3419959241 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return m_apiInternal.IsFlattened();
		EnvironmentFlatteningApiInternal_t833742330 * L_0 = __this->get_m_apiInternal_0();
		// return m_apiInternal.IsFlattened();
		NullCheck(L_0);
		bool L_1 = EnvironmentFlatteningApiInternal_IsFlattened_m126605943(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Single Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApi::GetCurrentScale()
extern "C"  float EnvironmentFlatteningApi_GetCurrentScale_m3952711105 (EnvironmentFlatteningApi_t3419959241 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return m_apiInternal.GetCurrentScale();
		EnvironmentFlatteningApiInternal_t833742330 * L_0 = __this->get_m_apiInternal_0();
		// return m_apiInternal.GetCurrentScale();
		NullCheck(L_0);
		float L_1 = EnvironmentFlatteningApiInternal_GetCurrentScale_m61216325(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::.ctor()
extern "C"  void EnvironmentFlatteningApiInternal__ctor_m1469650059 (EnvironmentFlatteningApiInternal_t833742330 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::SetIsFlattened(System.Boolean)
extern "C"  void EnvironmentFlatteningApiInternal_SetIsFlattened_m476507073 (EnvironmentFlatteningApiInternal_t833742330 * __this, bool ___isFlattened0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnvironmentFlatteningApiInternal_SetIsFlattened_m476507073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeEnvironmentFlattening_SetIsFlattened(NativePluginRunner.API, isFlattened);
		intptr_t L_0 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		bool L_1 = ___isFlattened0;
		// NativeEnvironmentFlattening_SetIsFlattened(NativePluginRunner.API, isFlattened);
		EnvironmentFlatteningApiInternal_NativeEnvironmentFlattening_SetIsFlattened_m1880547085(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::IsFlattened()
extern "C"  bool EnvironmentFlatteningApiInternal_IsFlattened_m126605943 (EnvironmentFlatteningApiInternal_t833742330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnvironmentFlatteningApiInternal_IsFlattened_m126605943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return NativeEnvironmentFlattening_IsFlattened(NativePluginRunner.API);
		intptr_t L_0 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		// return NativeEnvironmentFlattening_IsFlattened(NativePluginRunner.API);
		bool L_1 = EnvironmentFlatteningApiInternal_NativeEnvironmentFlattening_IsFlattened_m4255541761(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Single Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::GetCurrentScale()
extern "C"  float EnvironmentFlatteningApiInternal_GetCurrentScale_m61216325 (EnvironmentFlatteningApiInternal_t833742330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnvironmentFlatteningApiInternal_GetCurrentScale_m61216325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return NativeEnvironmentFlattening_GetCurrentScale(NativePluginRunner.API);
		intptr_t L_0 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		// return NativeEnvironmentFlattening_GetCurrentScale(NativePluginRunner.API);
		float L_1 = EnvironmentFlatteningApiInternal_NativeEnvironmentFlattening_GetCurrentScale_m2752121285(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
extern "C" void STDCALL NativeEnvironmentFlattening_SetIsFlattened(intptr_t, int8_t);
// System.Void Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::NativeEnvironmentFlattening_SetIsFlattened(System.IntPtr,System.Boolean)
extern "C"  void EnvironmentFlatteningApiInternal_NativeEnvironmentFlattening_SetIsFlattened_m1880547085 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, bool ___isFlattened1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) (intptr_t, int8_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NativeEnvironmentFlattening_SetIsFlattened)(___ptr0, static_cast<int8_t>(___isFlattened1));

}
extern "C" int8_t STDCALL NativeEnvironmentFlattening_IsFlattened(intptr_t);
// System.Boolean Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::NativeEnvironmentFlattening_IsFlattened(System.IntPtr)
extern "C"  bool EnvironmentFlatteningApiInternal_NativeEnvironmentFlattening_IsFlattened_m4255541761 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef int8_t (STDCALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int8_t returnValue = reinterpret_cast<PInvokeFunc>(NativeEnvironmentFlattening_IsFlattened)(___ptr0);

	return static_cast<bool>(returnValue);
}
extern "C" float STDCALL NativeEnvironmentFlattening_GetCurrentScale(intptr_t);
// System.Single Wrld.Space.EnvironmentFlattening.EnvironmentFlatteningApiInternal::NativeEnvironmentFlattening_GetCurrentScale(System.IntPtr)
extern "C"  float EnvironmentFlatteningApiInternal_NativeEnvironmentFlattening_GetCurrentScale_m2752121285 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef float (STDCALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(NativeEnvironmentFlattening_GetCurrentScale)(___ptr0);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.GeographicApi::.ctor()
extern "C"  void GeographicApi__ctor_m373416225 (GeographicApi_t2934948604 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeographicApi__ctor_m373416225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<GeographicTransform> m_geographicTransforms = new List<GeographicTransform>();
		List_1_t3734218024 * L_0 = (List_1_t3734218024 *)il2cpp_codegen_object_new(List_1_t3734218024_il2cpp_TypeInfo_var);
		List_1__ctor_m1945976614(L_0, /*hidden argument*/List_1__ctor_m1945976614_RuntimeMethod_var);
		__this->set_m_geographicTransforms_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wrld.Space.GeographicApi::UpdateTransforms(Wrld.Space.ITransformUpdateStrategy)
extern "C"  void GeographicApi_UpdateTransforms_m2429949150 (GeographicApi_t2934948604 * __this, RuntimeObject* ___updateStrategy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeographicApi_UpdateTransforms_m2429949150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GeographicTransform_t2262143282 * V_0 = NULL;
	Enumerator_t1328494605  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// foreach (var geographicTransform in m_geographicTransforms)
		List_1_t3734218024 * L_0 = __this->get_m_geographicTransforms_0();
		// foreach (var geographicTransform in m_geographicTransforms)
		NullCheck(L_0);
		Enumerator_t1328494605  L_1 = List_1_GetEnumerator_m146193980(L_0, /*hidden argument*/List_1_GetEnumerator_m146193980_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0013:
		{
			// foreach (var geographicTransform in m_geographicTransforms)
			// foreach (var geographicTransform in m_geographicTransforms)
			GeographicTransform_t2262143282 * L_2 = Enumerator_get_Current_m1927553120((&V_1), /*hidden argument*/Enumerator_get_Current_m1927553120_RuntimeMethod_var);
			V_0 = L_2;
			// geographicTransform.UpdateTransform(updateStrategy);
			GeographicTransform_t2262143282 * L_3 = V_0;
			RuntimeObject* L_4 = ___updateStrategy0;
			// geographicTransform.UpdateTransform(updateStrategy);
			NullCheck(L_3);
			GeographicTransform_UpdateTransform_m852920404(L_3, L_4, /*hidden argument*/NULL);
		}

IL_0024:
		{
			// foreach (var geographicTransform in m_geographicTransforms)
			bool L_5 = Enumerator_MoveNext_m3272893753((&V_1), /*hidden argument*/Enumerator_MoveNext_m3272893753_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0013;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		// foreach (var geographicTransform in m_geographicTransforms)
		Enumerator_Dispose_m3870958928((&V_1), /*hidden argument*/Enumerator_Dispose_m3870958928_RuntimeMethod_var);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicApi::RegisterGeographicTransform(Wrld.Space.GeographicTransform)
extern "C"  void GeographicApi_RegisterGeographicTransform_m61910415 (GeographicApi_t2934948604 * __this, GeographicTransform_t2262143282 * ___geographicTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeographicApi_RegisterGeographicTransform_m61910415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_geographicTransforms.Add(geographicTransform);
		List_1_t3734218024 * L_0 = __this->get_m_geographicTransforms_0();
		GeographicTransform_t2262143282 * L_1 = ___geographicTransform0;
		// m_geographicTransforms.Add(geographicTransform);
		NullCheck(L_0);
		List_1_Add_m3045984222(L_0, L_1, /*hidden argument*/List_1_Add_m3045984222_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicApi::UnregisterGeographicTransform(Wrld.Space.GeographicTransform)
extern "C"  void GeographicApi_UnregisterGeographicTransform_m2308987172 (GeographicApi_t2934948604 * __this, GeographicTransform_t2262143282 * ___geographicTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeographicApi_UnregisterGeographicTransform_m2308987172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_geographicTransforms.Remove(geographicTransform);
		List_1_t3734218024 * L_0 = __this->get_m_geographicTransforms_0();
		GeographicTransform_t2262143282 * L_1 = ___geographicTransform0;
		// m_geographicTransforms.Remove(geographicTransform);
		NullCheck(L_0);
		List_1_Remove_m47683195(L_0, L_1, /*hidden argument*/List_1_Remove_m47683195_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.GeographicTransform::.ctor()
extern "C"  void GeographicTransform__ctor_m1424517334 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	{
		// private double InitialLatitude = 37.771092;
		__this->set_InitialLatitude_2((37.771092));
		// private double InitialLongitude = -122.468385;
		__this->set_InitialLongitude_3((-122.468385));
		// private float InitialHeadingInDegrees = 0.0f;
		__this->set_InitialHeadingInDegrees_4((0.0f));
		// private bool ApplyFlattening = false;
		__this->set_ApplyFlattening_5((bool)0);
		// bool m_hasEverBeenRegistered = false;
		__this->set_m_hasEverBeenRegistered_7((bool)0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Wrld.Common.Maths.EcefTangentBasis Wrld.Space.GeographicTransform::get_TangentBasis()
extern "C"  EcefTangentBasis_t256737685 * GeographicTransform_get_TangentBasis_m1779212057 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	EcefTangentBasis_t256737685 * V_0 = NULL;
	{
		// public EcefTangentBasis TangentBasis { get; private set; }
		EcefTangentBasis_t256737685 * L_0 = __this->get_U3CTangentBasisU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		EcefTangentBasis_t256737685 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Space.GeographicTransform::set_TangentBasis(Wrld.Common.Maths.EcefTangentBasis)
extern "C"  void GeographicTransform_set_TangentBasis_m978748852 (GeographicTransform_t2262143282 * __this, EcefTangentBasis_t256737685 * ___value0, const RuntimeMethod* method)
{
	{
		// public EcefTangentBasis TangentBasis { get; private set; }
		EcefTangentBasis_t256737685 * L_0 = ___value0;
		__this->set_U3CTangentBasisU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::RegisterSelf()
extern "C"  void GeographicTransform_RegisterSelf_m2974456903 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeographicTransform_RegisterSelf_m2974456903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Api.Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(Api_t1190036922_il2cpp_TypeInfo_var);
		Api_t1190036922 * L_0 = ((Api_t1190036922_StaticFields*)il2cpp_codegen_static_fields_for(Api_t1190036922_il2cpp_TypeInfo_var))->get_Instance_0();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// Api.Instance.GeographicApi.RegisterGeographicTransform(this);
		IL2CPP_RUNTIME_CLASS_INIT(Api_t1190036922_il2cpp_TypeInfo_var);
		Api_t1190036922 * L_1 = ((Api_t1190036922_StaticFields*)il2cpp_codegen_static_fields_for(Api_t1190036922_il2cpp_TypeInfo_var))->get_Instance_0();
		// Api.Instance.GeographicApi.RegisterGeographicTransform(this);
		NullCheck(L_1);
		GeographicApi_t2934948604 * L_2 = Api_get_GeographicApi_m1869952797(L_1, /*hidden argument*/NULL);
		// Api.Instance.GeographicApi.RegisterGeographicTransform(this);
		NullCheck(L_2);
		GeographicApi_RegisterGeographicTransform_m61910415(L_2, __this, /*hidden argument*/NULL);
		// m_hasEverBeenRegistered = true;
		__this->set_m_hasEverBeenRegistered_7((bool)1);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::UnregisterSelf()
extern "C"  void GeographicTransform_UnregisterSelf_m2339455917 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeographicTransform_UnregisterSelf_m2339455917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Api.Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(Api_t1190036922_il2cpp_TypeInfo_var);
		Api_t1190036922 * L_0 = ((Api_t1190036922_StaticFields*)il2cpp_codegen_static_fields_for(Api_t1190036922_il2cpp_TypeInfo_var))->get_Instance_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Api.Instance.GeographicApi.UnregisterGeographicTransform(this);
		IL2CPP_RUNTIME_CLASS_INIT(Api_t1190036922_il2cpp_TypeInfo_var);
		Api_t1190036922 * L_1 = ((Api_t1190036922_StaticFields*)il2cpp_codegen_static_fields_for(Api_t1190036922_il2cpp_TypeInfo_var))->get_Instance_0();
		// Api.Instance.GeographicApi.UnregisterGeographicTransform(this);
		NullCheck(L_1);
		GeographicApi_t2934948604 * L_2 = Api_get_GeographicApi_m1869952797(L_1, /*hidden argument*/NULL);
		// Api.Instance.GeographicApi.UnregisterGeographicTransform(this);
		NullCheck(L_2);
		GeographicApi_UnregisterGeographicTransform_m2308987172(L_2, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::AddGeolocatedParent()
extern "C"  void GeographicTransform_AddGeolocatedParent_m2822110356 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeographicTransform_AddGeolocatedParent_m2822110356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_geolocatedParent = new GameObject("Geolocator");
		// m_geolocatedParent = new GameObject("Geolocator");
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral3423566724, /*hidden argument*/NULL);
		__this->set_m_geolocatedParent_8(L_0);
		// m_geolocatedParent.transform.SetParent(transform.parent, false);
		GameObject_t1113636619 * L_1 = __this->get_m_geolocatedParent_8();
		// m_geolocatedParent.transform.SetParent(transform.parent, false);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		// m_geolocatedParent.transform.SetParent(transform.parent, false);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// m_geolocatedParent.transform.SetParent(transform.parent, false);
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Transform_get_parent_m835071599(L_3, /*hidden argument*/NULL);
		// m_geolocatedParent.transform.SetParent(transform.parent, false);
		NullCheck(L_2);
		Transform_SetParent_m273471670(L_2, L_4, (bool)0, /*hidden argument*/NULL);
		// transform.SetParent(m_geolocatedParent.transform, false);
		// transform.SetParent(m_geolocatedParent.transform, false);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_m_geolocatedParent_8();
		// transform.SetParent(m_geolocatedParent.transform, false);
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		// transform.SetParent(m_geolocatedParent.transform, false);
		NullCheck(L_5);
		Transform_SetParent_m273471670(L_5, L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::RemoveGeolocatedParent()
extern "C"  void GeographicTransform_RemoveGeolocatedParent_m2325833328 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeographicTransform_RemoveGeolocatedParent_m2325833328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.SetParent(m_geolocatedParent.transform.parent, false);
		// transform.SetParent(m_geolocatedParent.transform.parent, false);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_m_geolocatedParent_8();
		// transform.SetParent(m_geolocatedParent.transform.parent, false);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		// transform.SetParent(m_geolocatedParent.transform.parent, false);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_get_parent_m835071599(L_2, /*hidden argument*/NULL);
		// transform.SetParent(m_geolocatedParent.transform.parent, false);
		NullCheck(L_0);
		Transform_SetParent_m273471670(L_0, L_3, (bool)0, /*hidden argument*/NULL);
		// GameObject.Destroy(m_geolocatedParent);
		GameObject_t1113636619 * L_4 = __this->get_m_geolocatedParent_8();
		// GameObject.Destroy(m_geolocatedParent);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		// m_geolocatedParent = null;
		__this->set_m_geolocatedParent_8((GameObject_t1113636619 *)NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::OnEnable()
extern "C"  void GeographicTransform_OnEnable_m1890634148 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	{
		// RegisterSelf();
		// RegisterSelf();
		GeographicTransform_RegisterSelf_m2974456903(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::OnDestroy()
extern "C"  void GeographicTransform_OnDestroy_m837408276 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	{
		// RemoveGeolocatedParent();
		// RemoveGeolocatedParent();
		GeographicTransform_RemoveGeolocatedParent_m2325833328(__this, /*hidden argument*/NULL);
		// UnregisterSelf();
		// UnregisterSelf();
		GeographicTransform_UnregisterSelf_m2339455917(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::Awake()
extern "C"  void GeographicTransform_Awake_m639455161 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	LatLong_t2936018554  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// var ecefPoint = LatLong.FromDegrees(InitialLatitude, InitialLongitude).ToECEF();
		double L_0 = __this->get_InitialLatitude_2();
		double L_1 = __this->get_InitialLongitude_3();
		// var ecefPoint = LatLong.FromDegrees(InitialLatitude, InitialLongitude).ToECEF();
		LatLong_t2936018554  L_2 = LatLong_FromDegrees_m795494841(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// var ecefPoint = LatLong.FromDegrees(InitialLatitude, InitialLongitude).ToECEF();
		DoubleVector3_t761704365  L_3 = LatLong_ToECEF_m3030091887((&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		// var heading = InitialHeadingInDegrees;
		float L_4 = __this->get_InitialHeadingInDegrees_4();
		V_2 = L_4;
		// TangentBasis = EcefHelpers.EcefTangentBasisFromPointAndHeading(ecefPoint, heading);
		DoubleVector3_t761704365  L_5 = V_0;
		float L_6 = V_2;
		// TangentBasis = EcefHelpers.EcefTangentBasisFromPointAndHeading(ecefPoint, heading);
		EcefTangentBasis_t256737685 * L_7 = EcefHelpers_EcefTangentBasisFromPointAndHeading_m2386421953(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		// TangentBasis = EcefHelpers.EcefTangentBasisFromPointAndHeading(ecefPoint, heading);
		GeographicTransform_set_TangentBasis_m978748852(__this, L_7, /*hidden argument*/NULL);
		// AddGeolocatedParent();
		// AddGeolocatedParent();
		GeographicTransform_AddGeolocatedParent_m2822110356(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::Start()
extern "C"  void GeographicTransform_Start_m1589464476 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	{
		// if (!m_hasEverBeenRegistered)
		bool L_0 = __this->get_m_hasEverBeenRegistered_7();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// RegisterSelf();
		// RegisterSelf();
		GeographicTransform_RegisterSelf_m2974456903(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::UpdateTransform(Wrld.Space.ITransformUpdateStrategy)
extern "C"  void GeographicTransform_UpdateTransform_m852920404 (GeographicTransform_t2262143282 * __this, RuntimeObject* ___updateStrategy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeographicTransform_UpdateTransform_m852920404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// var rotation = Quaternion.LookRotation(TangentBasis.Forward, TangentBasis.Up);
		// var rotation = Quaternion.LookRotation(TangentBasis.Forward, TangentBasis.Up);
		EcefTangentBasis_t256737685 * L_0 = GeographicTransform_get_TangentBasis_m1779212057(__this, /*hidden argument*/NULL);
		// var rotation = Quaternion.LookRotation(TangentBasis.Forward, TangentBasis.Up);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = EcefTangentBasis_get_Forward_m655875149(L_0, /*hidden argument*/NULL);
		// var rotation = Quaternion.LookRotation(TangentBasis.Forward, TangentBasis.Up);
		EcefTangentBasis_t256737685 * L_2 = GeographicTransform_get_TangentBasis_m1779212057(__this, /*hidden argument*/NULL);
		// var rotation = Quaternion.LookRotation(TangentBasis.Forward, TangentBasis.Up);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = EcefTangentBasis_get_Up_m2000118741(L_2, /*hidden argument*/NULL);
		// var rotation = Quaternion.LookRotation(TangentBasis.Forward, TangentBasis.Up);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_LookRotation_m3197602968(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// updateStrategy.UpdateTransform(m_geolocatedParent.transform, TangentBasis.PointEcef, Vector3.zero, rotation, 0.0f, ApplyFlattening);
		RuntimeObject* L_5 = ___updateStrategy0;
		GameObject_t1113636619 * L_6 = __this->get_m_geolocatedParent_8();
		// updateStrategy.UpdateTransform(m_geolocatedParent.transform, TangentBasis.PointEcef, Vector3.zero, rotation, 0.0f, ApplyFlattening);
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		// updateStrategy.UpdateTransform(m_geolocatedParent.transform, TangentBasis.PointEcef, Vector3.zero, rotation, 0.0f, ApplyFlattening);
		EcefTangentBasis_t256737685 * L_8 = GeographicTransform_get_TangentBasis_m1779212057(__this, /*hidden argument*/NULL);
		// updateStrategy.UpdateTransform(m_geolocatedParent.transform, TangentBasis.PointEcef, Vector3.zero, rotation, 0.0f, ApplyFlattening);
		NullCheck(L_8);
		DoubleVector3_t761704365  L_9 = EcefTangentBasis_get_PointEcef_m273637096(L_8, /*hidden argument*/NULL);
		// updateStrategy.UpdateTransform(m_geolocatedParent.transform, TangentBasis.PointEcef, Vector3.zero, rotation, 0.0f, ApplyFlattening);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_11 = V_0;
		bool L_12 = __this->get_ApplyFlattening_5();
		// updateStrategy.UpdateTransform(m_geolocatedParent.transform, TangentBasis.PointEcef, Vector3.zero, rotation, 0.0f, ApplyFlattening);
		NullCheck(L_5);
		InterfaceActionInvoker6< Transform_t3600365921 *, DoubleVector3_t761704365 , Vector3_t3722313464 , Quaternion_t2301928331 , float, bool >::Invoke(0 /* System.Void Wrld.Space.ITransformUpdateStrategy::UpdateTransform(UnityEngine.Transform,Wrld.Common.Maths.DoubleVector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Boolean) */, ITransformUpdateStrategy_t2466850383_il2cpp_TypeInfo_var, L_5, L_7, L_9, L_10, L_11, (0.0f), L_12);
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::SetPosition(Wrld.Space.LatLong)
extern "C"  void GeographicTransform_SetPosition_m3741136924 (GeographicTransform_t2262143282 * __this, LatLong_t2936018554  ___latLong0, const RuntimeMethod* method)
{
	{
		// SetPosition(latLong.ToECEF());
		// SetPosition(latLong.ToECEF());
		DoubleVector3_t761704365  L_0 = LatLong_ToECEF_m3030091887((&___latLong0), /*hidden argument*/NULL);
		// SetPosition(latLong.ToECEF());
		GeographicTransform_SetPosition_m1949716587(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::SetPosition(Wrld.Common.Maths.DoubleVector3)
extern "C"  void GeographicTransform_SetPosition_m1949716587 (GeographicTransform_t2262143282 * __this, DoubleVector3_t761704365  ___ecefPosition0, const RuntimeMethod* method)
{
	{
		// TangentBasis.SetPoint(ecefPosition);
		// TangentBasis.SetPoint(ecefPosition);
		EcefTangentBasis_t256737685 * L_0 = GeographicTransform_get_TangentBasis_m1779212057(__this, /*hidden argument*/NULL);
		DoubleVector3_t761704365  L_1 = ___ecefPosition0;
		// TangentBasis.SetPoint(ecefPosition);
		NullCheck(L_0);
		EcefTangentBasis_SetPoint_m3708257628(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.GeographicTransform::SetHeading(System.Single)
extern "C"  void GeographicTransform_SetHeading_m1502374924 (GeographicTransform_t2262143282 * __this, float ___headingInDegrees0, const RuntimeMethod* method)
{
	{
		// TangentBasis = EcefHelpers.EcefTangentBasisFromPointAndHeading(TangentBasis.PointEcef, headingInDegrees);
		// TangentBasis = EcefHelpers.EcefTangentBasisFromPointAndHeading(TangentBasis.PointEcef, headingInDegrees);
		EcefTangentBasis_t256737685 * L_0 = GeographicTransform_get_TangentBasis_m1779212057(__this, /*hidden argument*/NULL);
		// TangentBasis = EcefHelpers.EcefTangentBasisFromPointAndHeading(TangentBasis.PointEcef, headingInDegrees);
		NullCheck(L_0);
		DoubleVector3_t761704365  L_1 = EcefTangentBasis_get_PointEcef_m273637096(L_0, /*hidden argument*/NULL);
		float L_2 = ___headingInDegrees0;
		// TangentBasis = EcefHelpers.EcefTangentBasisFromPointAndHeading(TangentBasis.PointEcef, headingInDegrees);
		EcefTangentBasis_t256737685 * L_3 = EcefHelpers_EcefTangentBasisFromPointAndHeading_m2386421953(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		// TangentBasis = EcefHelpers.EcefTangentBasisFromPointAndHeading(TangentBasis.PointEcef, headingInDegrees);
		GeographicTransform_set_TangentBasis_m978748852(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Wrld.Space.LatLong Wrld.Space.GeographicTransform::GetLatLong()
extern "C"  LatLong_t2936018554  GeographicTransform_GetLatLong_m380039368 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001  V_0;
	memset(&V_0, 0, sizeof(V_0));
	LatLong_t2936018554  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// return CoordinateConversions.ConvertEcefToLatLongAltitude(TangentBasis.PointEcef).GetLatLong();
		// return CoordinateConversions.ConvertEcefToLatLongAltitude(TangentBasis.PointEcef).GetLatLong();
		EcefTangentBasis_t256737685 * L_0 = GeographicTransform_get_TangentBasis_m1779212057(__this, /*hidden argument*/NULL);
		// return CoordinateConversions.ConvertEcefToLatLongAltitude(TangentBasis.PointEcef).GetLatLong();
		NullCheck(L_0);
		DoubleVector3_t761704365  L_1 = EcefTangentBasis_get_PointEcef_m273637096(L_0, /*hidden argument*/NULL);
		// return CoordinateConversions.ConvertEcefToLatLongAltitude(TangentBasis.PointEcef).GetLatLong();
		LatLongAltitude_t944891001  L_2 = CoordinateConversions_ConvertEcefToLatLongAltitude_m3101309193(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return CoordinateConversions.ConvertEcefToLatLongAltitude(TangentBasis.PointEcef).GetLatLong();
		LatLong_t2936018554  L_3 = LatLongAltitude_GetLatLong_m87485461((&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		LatLong_t2936018554  L_4 = V_1;
		return L_4;
	}
}
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.GeographicTransform::GetEcefPosition()
extern "C"  DoubleVector3_t761704365  GeographicTransform_GetEcefPosition_m1812018781 (GeographicTransform_t2262143282 * __this, const RuntimeMethod* method)
{
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return TangentBasis.PointEcef;
		// return TangentBasis.PointEcef;
		EcefTangentBasis_t256737685 * L_0 = GeographicTransform_get_TangentBasis_m1779212057(__this, /*hidden argument*/NULL);
		// return TangentBasis.PointEcef;
		NullCheck(L_0);
		DoubleVector3_t761704365  L_1 = EcefTangentBasis_get_PointEcef_m273637096(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		DoubleVector3_t761704365  L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.LatLong::.ctor(System.Double,System.Double)
extern "C"  void LatLong__ctor_m839127672 (LatLong_t2936018554 * __this, double ___latitudeInDegrees0, double ___longitudeInDegrees1, const RuntimeMethod* method)
{
	{
		// m_latitudeInDegrees = latitudeInDegrees;
		double L_0 = ___latitudeInDegrees0;
		__this->set_m_latitudeInDegrees_0(L_0);
		// m_longitudeInDegrees = longitudeInDegrees;
		double L_1 = ___longitudeInDegrees1;
		__this->set_m_longitudeInDegrees_1(L_1);
		// }
		return;
	}
}
extern "C"  void LatLong__ctor_m839127672_AdjustorThunk (RuntimeObject * __this, double ___latitudeInDegrees0, double ___longitudeInDegrees1, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	LatLong__ctor_m839127672(_thisAdjusted, ___latitudeInDegrees0, ___longitudeInDegrees1, method);
}
// System.Double Wrld.Space.LatLong::GetLatitudeInRadians()
extern "C"  double LatLong_GetLatitudeInRadians_m2500370041 (LatLong_t2936018554 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// public double GetLatitudeInRadians() { return Helpers.MathsHelpers.Deg2Rad(m_latitudeInDegrees); }
		double L_0 = __this->get_m_latitudeInDegrees_0();
		// public double GetLatitudeInRadians() { return Helpers.MathsHelpers.Deg2Rad(m_latitudeInDegrees); }
		double L_1 = MathsHelpers_Deg2Rad_m3093923714(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public double GetLatitudeInRadians() { return Helpers.MathsHelpers.Deg2Rad(m_latitudeInDegrees); }
		double L_2 = V_0;
		return L_2;
	}
}
extern "C"  double LatLong_GetLatitudeInRadians_m2500370041_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	return LatLong_GetLatitudeInRadians_m2500370041(_thisAdjusted, method);
}
// System.Double Wrld.Space.LatLong::GetLongitudeInRadians()
extern "C"  double LatLong_GetLongitudeInRadians_m579521360 (LatLong_t2936018554 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// public double GetLongitudeInRadians() { return Helpers.MathsHelpers.Deg2Rad(m_longitudeInDegrees); }
		double L_0 = __this->get_m_longitudeInDegrees_1();
		// public double GetLongitudeInRadians() { return Helpers.MathsHelpers.Deg2Rad(m_longitudeInDegrees); }
		double L_1 = MathsHelpers_Deg2Rad_m3093923714(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public double GetLongitudeInRadians() { return Helpers.MathsHelpers.Deg2Rad(m_longitudeInDegrees); }
		double L_2 = V_0;
		return L_2;
	}
}
extern "C"  double LatLong_GetLongitudeInRadians_m579521360_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	return LatLong_GetLongitudeInRadians_m579521360(_thisAdjusted, method);
}
// System.Void Wrld.Space.LatLong::SetLatitudeInRadians(System.Double)
extern "C"  void LatLong_SetLatitudeInRadians_m374851290 (LatLong_t2936018554 * __this, double ___latitudeInRadians0, const RuntimeMethod* method)
{
	{
		// public void SetLatitudeInRadians(double latitudeInRadians) { m_latitudeInDegrees = Helpers.MathsHelpers.Rad2Deg(latitudeInRadians); }
		double L_0 = ___latitudeInRadians0;
		// public void SetLatitudeInRadians(double latitudeInRadians) { m_latitudeInDegrees = Helpers.MathsHelpers.Rad2Deg(latitudeInRadians); }
		double L_1 = MathsHelpers_Rad2Deg_m41225180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_latitudeInDegrees_0(L_1);
		// public void SetLatitudeInRadians(double latitudeInRadians) { m_latitudeInDegrees = Helpers.MathsHelpers.Rad2Deg(latitudeInRadians); }
		return;
	}
}
extern "C"  void LatLong_SetLatitudeInRadians_m374851290_AdjustorThunk (RuntimeObject * __this, double ___latitudeInRadians0, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	LatLong_SetLatitudeInRadians_m374851290(_thisAdjusted, ___latitudeInRadians0, method);
}
// System.Void Wrld.Space.LatLong::SetLongitudeInRadians(System.Double)
extern "C"  void LatLong_SetLongitudeInRadians_m2012635323 (LatLong_t2936018554 * __this, double ___longitudeInRadians0, const RuntimeMethod* method)
{
	{
		// public void SetLongitudeInRadians(double longitudeInRadians) { m_longitudeInDegrees = Helpers.MathsHelpers.Rad2Deg(longitudeInRadians); }
		double L_0 = ___longitudeInRadians0;
		// public void SetLongitudeInRadians(double longitudeInRadians) { m_longitudeInDegrees = Helpers.MathsHelpers.Rad2Deg(longitudeInRadians); }
		double L_1 = MathsHelpers_Rad2Deg_m41225180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_longitudeInDegrees_1(L_1);
		// public void SetLongitudeInRadians(double longitudeInRadians) { m_longitudeInDegrees = Helpers.MathsHelpers.Rad2Deg(longitudeInRadians); }
		return;
	}
}
extern "C"  void LatLong_SetLongitudeInRadians_m2012635323_AdjustorThunk (RuntimeObject * __this, double ___longitudeInRadians0, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	LatLong_SetLongitudeInRadians_m2012635323(_thisAdjusted, ___longitudeInRadians0, method);
}
// System.Void Wrld.Space.LatLong::SetLatitude(System.Double)
extern "C"  void LatLong_SetLatitude_m1131139776 (LatLong_t2936018554 * __this, double ___latitudeInDegrees0, const RuntimeMethod* method)
{
	{
		// public void SetLatitude(double latitudeInDegrees) { m_latitudeInDegrees = latitudeInDegrees; }
		double L_0 = ___latitudeInDegrees0;
		__this->set_m_latitudeInDegrees_0(L_0);
		// public void SetLatitude(double latitudeInDegrees) { m_latitudeInDegrees = latitudeInDegrees; }
		return;
	}
}
extern "C"  void LatLong_SetLatitude_m1131139776_AdjustorThunk (RuntimeObject * __this, double ___latitudeInDegrees0, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	LatLong_SetLatitude_m1131139776(_thisAdjusted, ___latitudeInDegrees0, method);
}
// System.Void Wrld.Space.LatLong::SetLongitude(System.Double)
extern "C"  void LatLong_SetLongitude_m4176551337 (LatLong_t2936018554 * __this, double ___longitudeInDegrees0, const RuntimeMethod* method)
{
	{
		// public void SetLongitude(double longitudeInDegrees) { m_longitudeInDegrees = longitudeInDegrees; }
		double L_0 = ___longitudeInDegrees0;
		__this->set_m_longitudeInDegrees_1(L_0);
		// public void SetLongitude(double longitudeInDegrees) { m_longitudeInDegrees = longitudeInDegrees; }
		return;
	}
}
extern "C"  void LatLong_SetLongitude_m4176551337_AdjustorThunk (RuntimeObject * __this, double ___longitudeInDegrees0, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	LatLong_SetLongitude_m4176551337(_thisAdjusted, ___longitudeInDegrees0, method);
}
// System.Double Wrld.Space.LatLong::GetLatitude()
extern "C"  double LatLong_GetLatitude_m3536532606 (LatLong_t2936018554 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// public double GetLatitude() { return m_latitudeInDegrees; }
		double L_0 = __this->get_m_latitudeInDegrees_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public double GetLatitude() { return m_latitudeInDegrees; }
		double L_1 = V_0;
		return L_1;
	}
}
extern "C"  double LatLong_GetLatitude_m3536532606_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	return LatLong_GetLatitude_m3536532606(_thisAdjusted, method);
}
// System.Double Wrld.Space.LatLong::GetLongitude()
extern "C"  double LatLong_GetLongitude_m3347807967 (LatLong_t2936018554 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// public double GetLongitude() { return m_longitudeInDegrees; }
		double L_0 = __this->get_m_longitudeInDegrees_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public double GetLongitude() { return m_longitudeInDegrees; }
		double L_1 = V_0;
		return L_1;
	}
}
extern "C"  double LatLong_GetLongitude_m3347807967_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	return LatLong_GetLongitude_m3347807967(_thisAdjusted, method);
}
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.LatLong::ToECEF()
extern "C"  DoubleVector3_t761704365  LatLong_ToECEF_m3030091887 (LatLong_t2936018554 * __this, const RuntimeMethod* method)
{
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return CoordinateConversions.ConvertLatLongAltitudeToEcef(Helpers.MathsHelpers.Deg2Rad(m_latitudeInDegrees), Helpers.MathsHelpers.Deg2Rad(m_longitudeInDegrees), 0.0f);
		double L_0 = __this->get_m_latitudeInDegrees_0();
		// return CoordinateConversions.ConvertLatLongAltitudeToEcef(Helpers.MathsHelpers.Deg2Rad(m_latitudeInDegrees), Helpers.MathsHelpers.Deg2Rad(m_longitudeInDegrees), 0.0f);
		double L_1 = MathsHelpers_Deg2Rad_m3093923714(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		double L_2 = __this->get_m_longitudeInDegrees_1();
		// return CoordinateConversions.ConvertLatLongAltitudeToEcef(Helpers.MathsHelpers.Deg2Rad(m_latitudeInDegrees), Helpers.MathsHelpers.Deg2Rad(m_longitudeInDegrees), 0.0f);
		double L_3 = MathsHelpers_Deg2Rad_m3093923714(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		// return CoordinateConversions.ConvertLatLongAltitudeToEcef(Helpers.MathsHelpers.Deg2Rad(m_latitudeInDegrees), Helpers.MathsHelpers.Deg2Rad(m_longitudeInDegrees), 0.0f);
		DoubleVector3_t761704365  L_4 = CoordinateConversions_ConvertLatLongAltitudeToEcef_m3731996007(NULL /*static, unused*/, L_1, L_3, (0.0), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		DoubleVector3_t761704365  L_5 = V_0;
		return L_5;
	}
}
extern "C"  DoubleVector3_t761704365  LatLong_ToECEF_m3030091887_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	return LatLong_ToECEF_m3030091887(_thisAdjusted, method);
}
// System.Double Wrld.Space.LatLong::BearingTo(Wrld.Space.LatLong)
extern "C"  double LatLong_BearingTo_m496978908 (LatLong_t2936018554 * __this, LatLong_t2936018554  ___toPoint0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// double deltaLong = toPoint.GetLongitudeInRadians() - GetLongitudeInRadians();
		// double deltaLong = toPoint.GetLongitudeInRadians() - GetLongitudeInRadians();
		double L_0 = LatLong_GetLongitudeInRadians_m579521360((&___toPoint0), /*hidden argument*/NULL);
		// double deltaLong = toPoint.GetLongitudeInRadians() - GetLongitudeInRadians();
		double L_1 = LatLong_GetLongitudeInRadians_m579521360(__this, /*hidden argument*/NULL);
		V_0 = ((double)il2cpp_codegen_subtract((double)L_0, (double)L_1));
		// double toLatitudeInRadians = toPoint.GetLatitudeInRadians();
		// double toLatitudeInRadians = toPoint.GetLatitudeInRadians();
		double L_2 = LatLong_GetLatitudeInRadians_m2500370041((&___toPoint0), /*hidden argument*/NULL);
		V_1 = L_2;
		// double y = Math.Sin(deltaLong) * Math.Cos(toLatitudeInRadians);
		double L_3 = V_0;
		// double y = Math.Sin(deltaLong) * Math.Cos(toLatitudeInRadians);
		double L_4 = sin(L_3);
		double L_5 = V_1;
		// double y = Math.Sin(deltaLong) * Math.Cos(toLatitudeInRadians);
		double L_6 = cos(L_5);
		V_2 = ((double)il2cpp_codegen_multiply((double)L_4, (double)L_6));
		// double x = Math.Cos(GetLatitudeInRadians()) * Math.Sin(toLatitudeInRadians) - Math.Sin(GetLatitudeInRadians()) * Math.Cos(toLatitudeInRadians) * Math.Cos(deltaLong);
		// double x = Math.Cos(GetLatitudeInRadians()) * Math.Sin(toLatitudeInRadians) - Math.Sin(GetLatitudeInRadians()) * Math.Cos(toLatitudeInRadians) * Math.Cos(deltaLong);
		double L_7 = LatLong_GetLatitudeInRadians_m2500370041(__this, /*hidden argument*/NULL);
		// double x = Math.Cos(GetLatitudeInRadians()) * Math.Sin(toLatitudeInRadians) - Math.Sin(GetLatitudeInRadians()) * Math.Cos(toLatitudeInRadians) * Math.Cos(deltaLong);
		double L_8 = cos(L_7);
		double L_9 = V_1;
		// double x = Math.Cos(GetLatitudeInRadians()) * Math.Sin(toLatitudeInRadians) - Math.Sin(GetLatitudeInRadians()) * Math.Cos(toLatitudeInRadians) * Math.Cos(deltaLong);
		double L_10 = sin(L_9);
		// double x = Math.Cos(GetLatitudeInRadians()) * Math.Sin(toLatitudeInRadians) - Math.Sin(GetLatitudeInRadians()) * Math.Cos(toLatitudeInRadians) * Math.Cos(deltaLong);
		double L_11 = LatLong_GetLatitudeInRadians_m2500370041(__this, /*hidden argument*/NULL);
		// double x = Math.Cos(GetLatitudeInRadians()) * Math.Sin(toLatitudeInRadians) - Math.Sin(GetLatitudeInRadians()) * Math.Cos(toLatitudeInRadians) * Math.Cos(deltaLong);
		double L_12 = sin(L_11);
		double L_13 = V_1;
		// double x = Math.Cos(GetLatitudeInRadians()) * Math.Sin(toLatitudeInRadians) - Math.Sin(GetLatitudeInRadians()) * Math.Cos(toLatitudeInRadians) * Math.Cos(deltaLong);
		double L_14 = cos(L_13);
		double L_15 = V_0;
		// double x = Math.Cos(GetLatitudeInRadians()) * Math.Sin(toLatitudeInRadians) - Math.Sin(GetLatitudeInRadians()) * Math.Cos(toLatitudeInRadians) * Math.Cos(deltaLong);
		double L_16 = cos(L_15);
		V_3 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_8, (double)L_10)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_12, (double)L_14)), (double)L_16))));
		// double bearing = Math.Atan2(y, x);
		double L_17 = V_2;
		double L_18 = V_3;
		// double bearing = Math.Atan2(y, x);
		double L_19 = atan2(L_17, L_18);
		V_4 = L_19;
		// return MathsHelpers.Rad2Deg((bearing + Math.PI * 2) % (Math.PI * 2));
		double L_20 = V_4;
		// return MathsHelpers.Rad2Deg((bearing + Math.PI * 2) % (Math.PI * 2));
		double L_21 = MathsHelpers_Rad2Deg_m41225180(NULL /*static, unused*/, (fmod(((double)il2cpp_codegen_add((double)L_20, (double)(6.2831853071795862))), (6.2831853071795862))), /*hidden argument*/NULL);
		V_5 = L_21;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		double L_22 = V_5;
		return L_22;
	}
}
extern "C"  double LatLong_BearingTo_m496978908_AdjustorThunk (RuntimeObject * __this, LatLong_t2936018554  ___toPoint0, const RuntimeMethod* method)
{
	LatLong_t2936018554 * _thisAdjusted = reinterpret_cast<LatLong_t2936018554 *>(__this + 1);
	return LatLong_BearingTo_m496978908(_thisAdjusted, ___toPoint0, method);
}
// System.Double Wrld.Space.LatLong::EstimateGreatCircleDistance(Wrld.Space.LatLong,Wrld.Space.LatLong)
extern "C"  double LatLong_EstimateGreatCircleDistance_m2972869740 (RuntimeObject * __this /* static, unused */, LatLong_t2936018554  ___a0, LatLong_t2936018554  ___b1, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// return EstimateGreatCircleDistance(ref a, ref b, EarthConstants.Radius);
		// return EstimateGreatCircleDistance(ref a, ref b, EarthConstants.Radius);
		double L_0 = LatLong_EstimateGreatCircleDistance_m2966940974(NULL /*static, unused*/, (&___a0), (&___b1), (6378100.0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		double L_1 = V_0;
		return L_1;
	}
}
// Wrld.Space.LatLong Wrld.Space.LatLong::FromECEF(Wrld.Common.Maths.DoubleVector3)
extern "C"  LatLong_t2936018554  LatLong_FromECEF_m1087962703 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ___world0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001  V_0;
	memset(&V_0, 0, sizeof(V_0));
	LatLong_t2936018554  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// return CoordinateConversions.ConvertEcefToLatLongAltitude(world).GetLatLong();
		DoubleVector3_t761704365  L_0 = ___world0;
		// return CoordinateConversions.ConvertEcefToLatLongAltitude(world).GetLatLong();
		LatLongAltitude_t944891001  L_1 = CoordinateConversions_ConvertEcefToLatLongAltitude_m3101309193(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return CoordinateConversions.ConvertEcefToLatLongAltitude(world).GetLatLong();
		LatLong_t2936018554  L_2 = LatLongAltitude_GetLatLong_m87485461((&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		LatLong_t2936018554  L_3 = V_1;
		return L_3;
	}
}
// Wrld.Space.LatLong Wrld.Space.LatLong::FromDegrees(System.Double,System.Double)
extern "C"  LatLong_t2936018554  LatLong_FromDegrees_m795494841 (RuntimeObject * __this /* static, unused */, double ___latitudeInDegrees0, double ___longitudeInDegrees1, const RuntimeMethod* method)
{
	LatLong_t2936018554  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return new LatLong(latitudeInDegrees, longitudeInDegrees);
		double L_0 = ___latitudeInDegrees0;
		double L_1 = ___longitudeInDegrees1;
		// return new LatLong(latitudeInDegrees, longitudeInDegrees);
		LatLong_t2936018554  L_2;
		memset(&L_2, 0, sizeof(L_2));
		LatLong__ctor_m839127672((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		LatLong_t2936018554  L_3 = V_0;
		return L_3;
	}
}
// Wrld.Space.LatLong Wrld.Space.LatLong::FromRadians(System.Double,System.Double)
extern "C"  LatLong_t2936018554  LatLong_FromRadians_m2344849543 (RuntimeObject * __this /* static, unused */, double ___latitudeInRadians0, double ___longitudeInRadians1, const RuntimeMethod* method)
{
	LatLong_t2936018554  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return new LatLong(Helpers.MathsHelpers.Rad2Deg(latitudeInRadians), Helpers.MathsHelpers.Rad2Deg(longitudeInRadians));
		double L_0 = ___latitudeInRadians0;
		// return new LatLong(Helpers.MathsHelpers.Rad2Deg(latitudeInRadians), Helpers.MathsHelpers.Rad2Deg(longitudeInRadians));
		double L_1 = MathsHelpers_Rad2Deg_m41225180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		double L_2 = ___longitudeInRadians1;
		// return new LatLong(Helpers.MathsHelpers.Rad2Deg(latitudeInRadians), Helpers.MathsHelpers.Rad2Deg(longitudeInRadians));
		double L_3 = MathsHelpers_Rad2Deg_m41225180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		// return new LatLong(Helpers.MathsHelpers.Rad2Deg(latitudeInRadians), Helpers.MathsHelpers.Rad2Deg(longitudeInRadians));
		LatLong_t2936018554  L_4;
		memset(&L_4, 0, sizeof(L_4));
		LatLong__ctor_m839127672((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		LatLong_t2936018554  L_5 = V_0;
		return L_5;
	}
}
// Wrld.Space.LatLongAltitude Wrld.Space.LatLong::op_Implicit(Wrld.Space.LatLong)
extern "C"  LatLongAltitude_t944891001  LatLong_op_Implicit_m2586896045 (RuntimeObject * __this /* static, unused */, LatLong_t2936018554  ___ll0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return new LatLongAltitude(ll.m_latitudeInDegrees, ll.m_longitudeInDegrees, 0.0);
		double L_0 = (&___ll0)->get_m_latitudeInDegrees_0();
		double L_1 = (&___ll0)->get_m_longitudeInDegrees_1();
		// return new LatLongAltitude(ll.m_latitudeInDegrees, ll.m_longitudeInDegrees, 0.0);
		LatLongAltitude_t944891001  L_2;
		memset(&L_2, 0, sizeof(L_2));
		LatLongAltitude__ctor_m3077043531((&L_2), L_0, L_1, (0.0), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		LatLongAltitude_t944891001  L_3 = V_0;
		return L_3;
	}
}
extern "C" double DEFAULT_CALL EstimateGreatCircleDistance(LatLong_t2936018554 *, LatLong_t2936018554 *, double);
// System.Double Wrld.Space.LatLong::EstimateGreatCircleDistance(Wrld.Space.LatLong&,Wrld.Space.LatLong&,System.Double)
extern "C"  double LatLong_EstimateGreatCircleDistance_m2966940974 (RuntimeObject * __this /* static, unused */, LatLong_t2936018554 * ___a0, LatLong_t2936018554 * ___b1, double ___sphereRadius2, const RuntimeMethod* method)
{
	typedef double (DEFAULT_CALL *PInvokeFunc) (LatLong_t2936018554 *, LatLong_t2936018554 *, double);

	// Native function invocation
	double returnValue = reinterpret_cast<PInvokeFunc>(EstimateGreatCircleDistance)(___a0, ___b1, ___sphereRadius2);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.LatLongAltitude::.ctor(System.Double,System.Double,System.Double)
extern "C"  void LatLongAltitude__ctor_m3077043531 (LatLongAltitude_t944891001 * __this, double ___latitudeInDegrees0, double ___longitudeInDegrees1, double ___altitudeInMetres2, const RuntimeMethod* method)
{
	{
		// m_latLong = new LatLong(latitudeInDegrees, longitudeInDegrees);
		double L_0 = ___latitudeInDegrees0;
		double L_1 = ___longitudeInDegrees1;
		// m_latLong = new LatLong(latitudeInDegrees, longitudeInDegrees);
		LatLong_t2936018554  L_2;
		memset(&L_2, 0, sizeof(L_2));
		LatLong__ctor_m839127672((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_latLong_0(L_2);
		// m_altitude = altitudeInMetres;
		double L_3 = ___altitudeInMetres2;
		__this->set_m_altitude_1(L_3);
		// }
		return;
	}
}
extern "C"  void LatLongAltitude__ctor_m3077043531_AdjustorThunk (RuntimeObject * __this, double ___latitudeInDegrees0, double ___longitudeInDegrees1, double ___altitudeInMetres2, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	LatLongAltitude__ctor_m3077043531(_thisAdjusted, ___latitudeInDegrees0, ___longitudeInDegrees1, ___altitudeInMetres2, method);
}
// Wrld.Space.LatLong Wrld.Space.LatLongAltitude::GetLatLong()
extern "C"  LatLong_t2936018554  LatLongAltitude_GetLatLong_m87485461 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method)
{
	LatLong_t2936018554  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public LatLong GetLatLong() { return m_latLong; }
		LatLong_t2936018554  L_0 = __this->get_m_latLong_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public LatLong GetLatLong() { return m_latLong; }
		LatLong_t2936018554  L_1 = V_0;
		return L_1;
	}
}
extern "C"  LatLong_t2936018554  LatLongAltitude_GetLatLong_m87485461_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	return LatLongAltitude_GetLatLong_m87485461(_thisAdjusted, method);
}
// System.Double Wrld.Space.LatLongAltitude::GetAltitude()
extern "C"  double LatLongAltitude_GetAltitude_m1194096332 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// public double GetAltitude() { return m_altitude; }
		double L_0 = __this->get_m_altitude_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public double GetAltitude() { return m_altitude; }
		double L_1 = V_0;
		return L_1;
	}
}
extern "C"  double LatLongAltitude_GetAltitude_m1194096332_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	return LatLongAltitude_GetAltitude_m1194096332(_thisAdjusted, method);
}
// System.Void Wrld.Space.LatLongAltitude::SetAltitude(System.Double)
extern "C"  void LatLongAltitude_SetAltitude_m3974140244 (LatLongAltitude_t944891001 * __this, double ___altitudeInMetres0, const RuntimeMethod* method)
{
	{
		// public void SetAltitude(double altitudeInMetres) { m_altitude = altitudeInMetres; }
		double L_0 = ___altitudeInMetres0;
		__this->set_m_altitude_1(L_0);
		// public void SetAltitude(double altitudeInMetres) { m_altitude = altitudeInMetres; }
		return;
	}
}
extern "C"  void LatLongAltitude_SetAltitude_m3974140244_AdjustorThunk (RuntimeObject * __this, double ___altitudeInMetres0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	LatLongAltitude_SetAltitude_m3974140244(_thisAdjusted, ___altitudeInMetres0, method);
}
// System.Double Wrld.Space.LatLongAltitude::GetLatitudeInRadians()
extern "C"  double LatLongAltitude_GetLatitudeInRadians_m491998726 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// public double GetLatitudeInRadians() { return m_latLong.GetLatitudeInRadians(); }
		LatLong_t2936018554 * L_0 = __this->get_address_of_m_latLong_0();
		// public double GetLatitudeInRadians() { return m_latLong.GetLatitudeInRadians(); }
		double L_1 = LatLong_GetLatitudeInRadians_m2500370041(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public double GetLatitudeInRadians() { return m_latLong.GetLatitudeInRadians(); }
		double L_2 = V_0;
		return L_2;
	}
}
extern "C"  double LatLongAltitude_GetLatitudeInRadians_m491998726_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	return LatLongAltitude_GetLatitudeInRadians_m491998726(_thisAdjusted, method);
}
// System.Double Wrld.Space.LatLongAltitude::GetLongitudeInRadians()
extern "C"  double LatLongAltitude_GetLongitudeInRadians_m1540906305 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// public double GetLongitudeInRadians() { return m_latLong.GetLongitudeInRadians(); }
		LatLong_t2936018554 * L_0 = __this->get_address_of_m_latLong_0();
		// public double GetLongitudeInRadians() { return m_latLong.GetLongitudeInRadians(); }
		double L_1 = LatLong_GetLongitudeInRadians_m579521360(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public double GetLongitudeInRadians() { return m_latLong.GetLongitudeInRadians(); }
		double L_2 = V_0;
		return L_2;
	}
}
extern "C"  double LatLongAltitude_GetLongitudeInRadians_m1540906305_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	return LatLongAltitude_GetLongitudeInRadians_m1540906305(_thisAdjusted, method);
}
// System.Void Wrld.Space.LatLongAltitude::SetLatitudeInRadians(System.Double)
extern "C"  void LatLongAltitude_SetLatitudeInRadians_m3480952343 (LatLongAltitude_t944891001 * __this, double ___latitudeInRadians0, const RuntimeMethod* method)
{
	{
		// public void SetLatitudeInRadians(double latitudeInRadians) { m_latLong.SetLatitudeInRadians(latitudeInRadians); }
		LatLong_t2936018554 * L_0 = __this->get_address_of_m_latLong_0();
		double L_1 = ___latitudeInRadians0;
		// public void SetLatitudeInRadians(double latitudeInRadians) { m_latLong.SetLatitudeInRadians(latitudeInRadians); }
		LatLong_SetLatitudeInRadians_m374851290(L_0, L_1, /*hidden argument*/NULL);
		// public void SetLatitudeInRadians(double latitudeInRadians) { m_latLong.SetLatitudeInRadians(latitudeInRadians); }
		return;
	}
}
extern "C"  void LatLongAltitude_SetLatitudeInRadians_m3480952343_AdjustorThunk (RuntimeObject * __this, double ___latitudeInRadians0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	LatLongAltitude_SetLatitudeInRadians_m3480952343(_thisAdjusted, ___latitudeInRadians0, method);
}
// System.Void Wrld.Space.LatLongAltitude::SetLongitudeInRadians(System.Double)
extern "C"  void LatLongAltitude_SetLongitudeInRadians_m316922379 (LatLongAltitude_t944891001 * __this, double ___longitudeInRadians0, const RuntimeMethod* method)
{
	{
		// public void SetLongitudeInRadians(double longitudeInRadians) { m_latLong.SetLongitudeInRadians(longitudeInRadians); }
		LatLong_t2936018554 * L_0 = __this->get_address_of_m_latLong_0();
		double L_1 = ___longitudeInRadians0;
		// public void SetLongitudeInRadians(double longitudeInRadians) { m_latLong.SetLongitudeInRadians(longitudeInRadians); }
		LatLong_SetLongitudeInRadians_m2012635323(L_0, L_1, /*hidden argument*/NULL);
		// public void SetLongitudeInRadians(double longitudeInRadians) { m_latLong.SetLongitudeInRadians(longitudeInRadians); }
		return;
	}
}
extern "C"  void LatLongAltitude_SetLongitudeInRadians_m316922379_AdjustorThunk (RuntimeObject * __this, double ___longitudeInRadians0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	LatLongAltitude_SetLongitudeInRadians_m316922379(_thisAdjusted, ___longitudeInRadians0, method);
}
// System.Void Wrld.Space.LatLongAltitude::SetLatitude(System.Double)
extern "C"  void LatLongAltitude_SetLatitude_m1228531711 (LatLongAltitude_t944891001 * __this, double ___latitudeInDegrees0, const RuntimeMethod* method)
{
	{
		// public void SetLatitude(double latitudeInDegrees) { m_latLong.SetLatitude(latitudeInDegrees); }
		LatLong_t2936018554 * L_0 = __this->get_address_of_m_latLong_0();
		double L_1 = ___latitudeInDegrees0;
		// public void SetLatitude(double latitudeInDegrees) { m_latLong.SetLatitude(latitudeInDegrees); }
		LatLong_SetLatitude_m1131139776(L_0, L_1, /*hidden argument*/NULL);
		// public void SetLatitude(double latitudeInDegrees) { m_latLong.SetLatitude(latitudeInDegrees); }
		return;
	}
}
extern "C"  void LatLongAltitude_SetLatitude_m1228531711_AdjustorThunk (RuntimeObject * __this, double ___latitudeInDegrees0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	LatLongAltitude_SetLatitude_m1228531711(_thisAdjusted, ___latitudeInDegrees0, method);
}
// System.Void Wrld.Space.LatLongAltitude::SetLongitude(System.Double)
extern "C"  void LatLongAltitude_SetLongitude_m1042320802 (LatLongAltitude_t944891001 * __this, double ___longitudeInDegrees0, const RuntimeMethod* method)
{
	{
		// public void SetLongitude(double longitudeInDegrees) { m_latLong.SetLongitude(longitudeInDegrees); }
		LatLong_t2936018554 * L_0 = __this->get_address_of_m_latLong_0();
		double L_1 = ___longitudeInDegrees0;
		// public void SetLongitude(double longitudeInDegrees) { m_latLong.SetLongitude(longitudeInDegrees); }
		LatLong_SetLongitude_m4176551337(L_0, L_1, /*hidden argument*/NULL);
		// public void SetLongitude(double longitudeInDegrees) { m_latLong.SetLongitude(longitudeInDegrees); }
		return;
	}
}
extern "C"  void LatLongAltitude_SetLongitude_m1042320802_AdjustorThunk (RuntimeObject * __this, double ___longitudeInDegrees0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	LatLongAltitude_SetLongitude_m1042320802(_thisAdjusted, ___longitudeInDegrees0, method);
}
// System.Double Wrld.Space.LatLongAltitude::GetLatitude()
extern "C"  double LatLongAltitude_GetLatitude_m2772881645 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// public double GetLatitude() { return m_latLong.GetLatitude(); }
		LatLong_t2936018554 * L_0 = __this->get_address_of_m_latLong_0();
		// public double GetLatitude() { return m_latLong.GetLatitude(); }
		double L_1 = LatLong_GetLatitude_m3536532606(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public double GetLatitude() { return m_latLong.GetLatitude(); }
		double L_2 = V_0;
		return L_2;
	}
}
extern "C"  double LatLongAltitude_GetLatitude_m2772881645_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	return LatLongAltitude_GetLatitude_m2772881645(_thisAdjusted, method);
}
// System.Double Wrld.Space.LatLongAltitude::GetLongitude()
extern "C"  double LatLongAltitude_GetLongitude_m3807199853 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// public double GetLongitude() { return m_latLong.GetLongitude(); }
		LatLong_t2936018554 * L_0 = __this->get_address_of_m_latLong_0();
		// public double GetLongitude() { return m_latLong.GetLongitude(); }
		double L_1 = LatLong_GetLongitude_m3347807967(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public double GetLongitude() { return m_latLong.GetLongitude(); }
		double L_2 = V_0;
		return L_2;
	}
}
extern "C"  double LatLongAltitude_GetLongitude_m3807199853_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	return LatLongAltitude_GetLongitude_m3807199853(_thisAdjusted, method);
}
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.LatLongAltitude::ToECEF()
extern "C"  DoubleVector3_t761704365  LatLongAltitude_ToECEF_m3897686018 (LatLongAltitude_t944891001 * __this, const RuntimeMethod* method)
{
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return CoordinateConversions.ConvertLatLongAltitudeToEcef(GetLatitudeInRadians(), GetLongitudeInRadians(), GetAltitude());
		// return CoordinateConversions.ConvertLatLongAltitudeToEcef(GetLatitudeInRadians(), GetLongitudeInRadians(), GetAltitude());
		double L_0 = LatLongAltitude_GetLatitudeInRadians_m491998726(__this, /*hidden argument*/NULL);
		// return CoordinateConversions.ConvertLatLongAltitudeToEcef(GetLatitudeInRadians(), GetLongitudeInRadians(), GetAltitude());
		double L_1 = LatLongAltitude_GetLongitudeInRadians_m1540906305(__this, /*hidden argument*/NULL);
		// return CoordinateConversions.ConvertLatLongAltitudeToEcef(GetLatitudeInRadians(), GetLongitudeInRadians(), GetAltitude());
		double L_2 = LatLongAltitude_GetAltitude_m1194096332(__this, /*hidden argument*/NULL);
		// return CoordinateConversions.ConvertLatLongAltitudeToEcef(GetLatitudeInRadians(), GetLongitudeInRadians(), GetAltitude());
		DoubleVector3_t761704365  L_3 = CoordinateConversions_ConvertLatLongAltitudeToEcef_m3731996007(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		DoubleVector3_t761704365  L_4 = V_0;
		return L_4;
	}
}
extern "C"  DoubleVector3_t761704365  LatLongAltitude_ToECEF_m3897686018_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	return LatLongAltitude_ToECEF_m3897686018(_thisAdjusted, method);
}
// System.Double Wrld.Space.LatLongAltitude::BearingTo(Wrld.Space.LatLong)
extern "C"  double LatLongAltitude_BearingTo_m3735118124 (LatLongAltitude_t944891001 * __this, LatLong_t2936018554  ___toPoint0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// return m_latLong.BearingTo(toPoint);
		LatLong_t2936018554 * L_0 = __this->get_address_of_m_latLong_0();
		LatLong_t2936018554  L_1 = ___toPoint0;
		// return m_latLong.BearingTo(toPoint);
		double L_2 = LatLong_BearingTo_m496978908(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		double L_3 = V_0;
		return L_3;
	}
}
extern "C"  double LatLongAltitude_BearingTo_m3735118124_AdjustorThunk (RuntimeObject * __this, LatLong_t2936018554  ___toPoint0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001 * _thisAdjusted = reinterpret_cast<LatLongAltitude_t944891001 *>(__this + 1);
	return LatLongAltitude_BearingTo_m3735118124(_thisAdjusted, ___toPoint0, method);
}
// Wrld.Space.LatLongAltitude Wrld.Space.LatLongAltitude::FromDegrees(System.Double,System.Double,System.Double)
extern "C"  LatLongAltitude_t944891001  LatLongAltitude_FromDegrees_m1498799372 (RuntimeObject * __this /* static, unused */, double ___latitudeInDegrees0, double ___longitudeInDegrees1, double ___altitudeInMetres2, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return new LatLongAltitude(latitudeInDegrees, longitudeInDegrees, altitudeInMetres);
		double L_0 = ___latitudeInDegrees0;
		double L_1 = ___longitudeInDegrees1;
		double L_2 = ___altitudeInMetres2;
		// return new LatLongAltitude(latitudeInDegrees, longitudeInDegrees, altitudeInMetres);
		LatLongAltitude_t944891001  L_3;
		memset(&L_3, 0, sizeof(L_3));
		LatLongAltitude__ctor_m3077043531((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		LatLongAltitude_t944891001  L_4 = V_0;
		return L_4;
	}
}
// Wrld.Space.LatLongAltitude Wrld.Space.LatLongAltitude::FromRadians(System.Double,System.Double,System.Double)
extern "C"  LatLongAltitude_t944891001  LatLongAltitude_FromRadians_m303748098 (RuntimeObject * __this /* static, unused */, double ___latitudeInRadians0, double ___longitudeInRadians1, double ___altitudeInMetres2, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return new LatLongAltitude(Helpers.MathsHelpers.Rad2Deg(latitudeInRadians), Helpers.MathsHelpers.Rad2Deg(longitudeInRadians), altitudeInMetres);
		double L_0 = ___latitudeInRadians0;
		// return new LatLongAltitude(Helpers.MathsHelpers.Rad2Deg(latitudeInRadians), Helpers.MathsHelpers.Rad2Deg(longitudeInRadians), altitudeInMetres);
		double L_1 = MathsHelpers_Rad2Deg_m41225180(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		double L_2 = ___longitudeInRadians1;
		// return new LatLongAltitude(Helpers.MathsHelpers.Rad2Deg(latitudeInRadians), Helpers.MathsHelpers.Rad2Deg(longitudeInRadians), altitudeInMetres);
		double L_3 = MathsHelpers_Rad2Deg_m41225180(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		double L_4 = ___altitudeInMetres2;
		// return new LatLongAltitude(Helpers.MathsHelpers.Rad2Deg(latitudeInRadians), Helpers.MathsHelpers.Rad2Deg(longitudeInRadians), altitudeInMetres);
		LatLongAltitude_t944891001  L_5;
		memset(&L_5, 0, sizeof(L_5));
		LatLongAltitude__ctor_m3077043531((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		LatLongAltitude_t944891001  L_6 = V_0;
		return L_6;
	}
}
// Wrld.Space.LatLongAltitude Wrld.Space.LatLongAltitude::FromECEF(Wrld.Common.Maths.DoubleVector3)
extern "C"  LatLongAltitude_t944891001  LatLongAltitude_FromECEF_m2872636096 (RuntimeObject * __this /* static, unused */, DoubleVector3_t761704365  ___world0, const RuntimeMethod* method)
{
	LatLong_t2936018554  V_0;
	memset(&V_0, 0, sizeof(V_0));
	double V_1 = 0.0;
	LatLongAltitude_t944891001  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// LatLong latLong = LatLong.FromECEF(world);
		DoubleVector3_t761704365  L_0 = ___world0;
		// LatLong latLong = LatLong.FromECEF(world);
		LatLong_t2936018554  L_1 = LatLong_FromECEF_m1087962703(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// double altitude = world.magnitude - EarthConstants.Radius;
		// double altitude = world.magnitude - EarthConstants.Radius;
		double L_2 = DoubleVector3_get_magnitude_m3917016803((&___world0), /*hidden argument*/NULL);
		V_1 = ((double)il2cpp_codegen_subtract((double)L_2, (double)(6378100.0)));
		// return new LatLongAltitude(latLong.GetLatitude(), latLong.GetLongitude(), altitude);
		// return new LatLongAltitude(latLong.GetLatitude(), latLong.GetLongitude(), altitude);
		double L_3 = LatLong_GetLatitude_m3536532606((&V_0), /*hidden argument*/NULL);
		// return new LatLongAltitude(latLong.GetLatitude(), latLong.GetLongitude(), altitude);
		double L_4 = LatLong_GetLongitude_m3347807967((&V_0), /*hidden argument*/NULL);
		double L_5 = V_1;
		// return new LatLongAltitude(latLong.GetLatitude(), latLong.GetLongitude(), altitude);
		LatLongAltitude_t944891001  L_6;
		memset(&L_6, 0, sizeof(L_6));
		LatLongAltitude__ctor_m3077043531((&L_6), L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		LatLongAltitude_t944891001  L_7 = V_2;
		return L_7;
	}
}
// Wrld.Space.LatLongAltitude Wrld.Space.LatLongAltitude::Lerp(Wrld.Space.LatLongAltitude,Wrld.Space.LatLongAltitude,System.Single)
extern "C"  LatLongAltitude_t944891001  LatLongAltitude_Lerp_m2267650384 (RuntimeObject * __this /* static, unused */, LatLongAltitude_t944891001  ___from0, LatLongAltitude_t944891001  ___to1, float ___time2, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return new LatLongAltitude(
		// from.GetLatitude() + ((to.GetLatitude() - from.GetLatitude()) * time),
		double L_0 = LatLongAltitude_GetLatitude_m2772881645((&___from0), /*hidden argument*/NULL);
		// from.GetLatitude() + ((to.GetLatitude() - from.GetLatitude()) * time),
		double L_1 = LatLongAltitude_GetLatitude_m2772881645((&___to1), /*hidden argument*/NULL);
		// from.GetLatitude() + ((to.GetLatitude() - from.GetLatitude()) * time),
		double L_2 = LatLongAltitude_GetLatitude_m2772881645((&___from0), /*hidden argument*/NULL);
		float L_3 = ___time2;
		// from.GetLongitude() + ((to.GetLongitude() - from.GetLongitude()) * time),
		double L_4 = LatLongAltitude_GetLongitude_m3807199853((&___from0), /*hidden argument*/NULL);
		// from.GetLongitude() + ((to.GetLongitude() - from.GetLongitude()) * time),
		double L_5 = LatLongAltitude_GetLongitude_m3807199853((&___to1), /*hidden argument*/NULL);
		// from.GetLongitude() + ((to.GetLongitude() - from.GetLongitude()) * time),
		double L_6 = LatLongAltitude_GetLongitude_m3807199853((&___from0), /*hidden argument*/NULL);
		float L_7 = ___time2;
		// from.GetAltitude() + ((to.GetAltitude() - from.GetAltitude()) * time));
		double L_8 = LatLongAltitude_GetAltitude_m1194096332((&___from0), /*hidden argument*/NULL);
		// from.GetAltitude() + ((to.GetAltitude() - from.GetAltitude()) * time));
		double L_9 = LatLongAltitude_GetAltitude_m1194096332((&___to1), /*hidden argument*/NULL);
		// from.GetAltitude() + ((to.GetAltitude() - from.GetAltitude()) * time));
		double L_10 = LatLongAltitude_GetAltitude_m1194096332((&___from0), /*hidden argument*/NULL);
		float L_11 = ___time2;
		// return new LatLongAltitude(
		LatLongAltitude_t944891001  L_12;
		memset(&L_12, 0, sizeof(L_12));
		LatLongAltitude__ctor_m3077043531((&L_12), ((double)il2cpp_codegen_add((double)L_0, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_1, (double)L_2)), (double)(((double)((double)L_3))))))), ((double)il2cpp_codegen_add((double)L_4, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_5, (double)L_6)), (double)(((double)((double)L_7))))))), ((double)il2cpp_codegen_add((double)L_8, (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_9, (double)L_10)), (double)(((double)((double)L_11))))))), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_005a;
	}

IL_005a:
	{
		// }
		LatLongAltitude_t944891001  L_13 = V_0;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.Positioners.Positioner::.ctor(Wrld.Space.Positioners.PositionerApiInternal,System.Int32,System.Boolean)
extern "C"  void Positioner__ctor_m1503101260 (Positioner_t1752774946 * __this, PositionerApiInternal_t1500108320 * ___positionerApiInternal0, int32_t ___id1, bool ___usingFloorId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Positioner__ctor_m1503101260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Positioner(
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// if (positionerApiInternal == null)
		PositionerApiInternal_t1500108320 * L_0 = ___positionerApiInternal0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException("positionerApiInternal");
		// throw new ArgumentNullException("positionerApiInternal");
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2843664123, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0019:
	{
		// if (id == InvalidId)
		int32_t L_2 = ___id1;
		IL2CPP_RUNTIME_CLASS_INIT(Positioner_t1752774946_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Positioner_t1752774946_StaticFields*)il2cpp_codegen_static_fields_for(Positioner_t1752774946_il2cpp_TypeInfo_var))->get_InvalidId_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		// throw new ArgumentException("invalid id");
		// throw new ArgumentException("invalid id");
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral3578039371, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0030:
	{
		// this.m_positionerApiInternal = positionerApiInternal;
		PositionerApiInternal_t1500108320 * L_5 = ___positionerApiInternal0;
		__this->set_m_positionerApiInternal_2(L_5);
		// this.Id = id;
		int32_t L_6 = ___id1;
		// this.Id = id;
		Positioner_set_Id_m4230244818(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Wrld.Space.Positioners.Positioner::get_Id()
extern "C"  int32_t Positioner_get_Id_m101133727 (Positioner_t1752774946 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int Id { get; private set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Space.Positioners.Positioner::set_Id(System.Int32)
extern "C"  void Positioner_set_Id_m4230244818 (Positioner_t1752774946 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.Positioners.Positioner::GetECEFLocation()
extern "C"  DoubleVector3_t761704365  Positioner_GetECEFLocation_m3701390223 (Positioner_t1752774946 * __this, const RuntimeMethod* method)
{
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return m_positionerECEFLocation;
		DoubleVector3_t761704365  L_0 = __this->get_m_positionerECEFLocation_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		DoubleVector3_t761704365  L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Space.Positioners.Positioner::SetLocation(System.Double,System.Double)
extern "C"  void Positioner_SetLocation_m3241336246 (Positioner_t1752774946 * __this, double ___latitudeDegrees0, double ___longitudeDegrees1, const RuntimeMethod* method)
{
	{
		// m_positionerApiInternal.SetPositionerLocation(this, latitudeDegrees, longitudeDegrees);
		PositionerApiInternal_t1500108320 * L_0 = __this->get_m_positionerApiInternal_2();
		double L_1 = ___latitudeDegrees0;
		double L_2 = ___longitudeDegrees1;
		// m_positionerApiInternal.SetPositionerLocation(this, latitudeDegrees, longitudeDegrees);
		NullCheck(L_0);
		PositionerApiInternal_SetPositionerLocation_m4021232775(L_0, __this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.Positioner::SetElevation(System.Double)
extern "C"  void Positioner_SetElevation_m3041969008 (Positioner_t1752774946 * __this, double ___elevation0, const RuntimeMethod* method)
{
	{
		// m_positionerApiInternal.SetPositionerElevation(this, elevation);
		PositionerApiInternal_t1500108320 * L_0 = __this->get_m_positionerApiInternal_2();
		double L_1 = ___elevation0;
		// m_positionerApiInternal.SetPositionerElevation(this, elevation);
		NullCheck(L_0);
		PositionerApiInternal_SetPositionerElevation_m1420501201(L_0, __this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.Positioner::SetElevationMode(Wrld.Space.ElevationMode)
extern "C"  void Positioner_SetElevationMode_m2614097957 (Positioner_t1752774946 * __this, int32_t ___elevationMode0, const RuntimeMethod* method)
{
	{
		// m_positionerApiInternal.SetPositionerElevationMode(this, elevationMode);
		PositionerApiInternal_t1500108320 * L_0 = __this->get_m_positionerApiInternal_2();
		int32_t L_1 = ___elevationMode0;
		// m_positionerApiInternal.SetPositionerElevationMode(this, elevationMode);
		NullCheck(L_0);
		PositionerApiInternal_SetPositionerElevationMode_m751369844(L_0, __this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.Positioner::SetIndoorMap(System.String,System.Int32)
extern "C"  void Positioner_SetIndoorMap_m2146891016 (Positioner_t1752774946 * __this, String_t* ___indoorMapId0, int32_t ___indoorMapFloorId1, const RuntimeMethod* method)
{
	{
		// m_positionerApiInternal.SetPositionerIndoorMap(this, indoorMapId, indoorMapFloorId);
		PositionerApiInternal_t1500108320 * L_0 = __this->get_m_positionerApiInternal_2();
		String_t* L_1 = ___indoorMapId0;
		int32_t L_2 = ___indoorMapFloorId1;
		// m_positionerApiInternal.SetPositionerIndoorMap(this, indoorMapId, indoorMapFloorId);
		NullCheck(L_0);
		PositionerApiInternal_SetPositionerIndoorMap_m582027490(L_0, __this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.Positioner::SetECEFLocation(Wrld.Common.Maths.DoubleVector3)
extern "C"  void Positioner_SetECEFLocation_m3511299767 (Positioner_t1752774946 * __this, DoubleVector3_t761704365  ___ecefLocation0, const RuntimeMethod* method)
{
	{
		// m_positionerECEFLocation = ecefLocation;
		DoubleVector3_t761704365  L_0 = ___ecefLocation0;
		__this->set_m_positionerECEFLocation_3(L_0);
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.Positioner::Discard()
extern "C"  void Positioner_Discard_m4267620145 (Positioner_t1752774946 * __this, const RuntimeMethod* method)
{
	{
		// m_positionerApiInternal.DestroyPositioner(this);
		PositionerApiInternal_t1500108320 * L_0 = __this->get_m_positionerApiInternal_2();
		// m_positionerApiInternal.DestroyPositioner(this);
		NullCheck(L_0);
		PositionerApiInternal_DestroyPositioner_m3264874376(L_0, __this, /*hidden argument*/NULL);
		// InvalidateId();
		// InvalidateId();
		Positioner_InvalidateId_m316806239(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.Positioner::InvalidateId()
extern "C"  void Positioner_InvalidateId_m316806239 (Positioner_t1752774946 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Positioner_InvalidateId_m316806239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Id = InvalidId;
		IL2CPP_RUNTIME_CLASS_INIT(Positioner_t1752774946_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Positioner_t1752774946_StaticFields*)il2cpp_codegen_static_fields_for(Positioner_t1752774946_il2cpp_TypeInfo_var))->get_InvalidId_1();
		// Id = InvalidId;
		Positioner_set_Id_m4230244818(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.Positioner::.cctor()
extern "C"  void Positioner__cctor_m943065637 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Positioner__cctor_m943065637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int InvalidId = 0;
		((Positioner_t1752774946_StaticFields*)il2cpp_codegen_static_fields_for(Positioner_t1752774946_il2cpp_TypeInfo_var))->set_InvalidId_1(0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.Positioners.PositionerApi::.ctor(Wrld.Space.Positioners.PositionerApiInternal)
extern "C"  void PositionerApi__ctor_m1098470327 (PositionerApi_t2770033165 * __this, PositionerApiInternal_t1500108320 * ___apiInternal0, const RuntimeMethod* method)
{
	{
		// internal PositionerApi(PositionerApiInternal apiInternal)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_apiInternal = apiInternal;
		PositionerApiInternal_t1500108320 * L_0 = ___apiInternal0;
		__this->set_m_apiInternal_0(L_0);
		// }
		return;
	}
}
// Wrld.Space.Positioners.Positioner Wrld.Space.Positioners.PositionerApi::CreatePositioner(Wrld.Space.Positioners.PositionerOptions)
extern "C"  Positioner_t1752774946 * PositionerApi_CreatePositioner_m1110245731 (PositionerApi_t2770033165 * __this, PositionerOptions_t660970786 * ___positionerOptions0, const RuntimeMethod* method)
{
	Positioner_t1752774946 * V_0 = NULL;
	{
		// return m_apiInternal.CreatePositioner(positionerOptions);
		PositionerApiInternal_t1500108320 * L_0 = __this->get_m_apiInternal_0();
		PositionerOptions_t660970786 * L_1 = ___positionerOptions0;
		// return m_apiInternal.CreatePositioner(positionerOptions);
		NullCheck(L_0);
		Positioner_t1752774946 * L_2 = PositionerApiInternal_CreatePositioner_m3277400250(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		Positioner_t1752774946 * L_3 = V_0;
		return L_3;
	}
}
// Wrld.Space.Positioners.PositionerApiInternal Wrld.Space.Positioners.PositionerApi::GetApiInternal()
extern "C"  PositionerApiInternal_t1500108320 * PositionerApi_GetApiInternal_m3380137253 (PositionerApi_t2770033165 * __this, const RuntimeMethod* method)
{
	PositionerApiInternal_t1500108320 * V_0 = NULL;
	{
		// return m_apiInternal;
		PositionerApiInternal_t1500108320 * L_0 = __this->get_m_apiInternal_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		PositionerApiInternal_t1500108320 * L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PositionerApiInternal_OnPositionerUpdated_m4205083120(intptr_t ___positionerApiHandle0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	PositionerApiInternal_OnPositionerUpdated_m4205083120(NULL, ___positionerApiHandle0, NULL);

}
// System.Void Wrld.Space.Positioners.PositionerApiInternal::.ctor()
extern "C"  void PositionerApiInternal__ctor_m2618780664 (PositionerApiInternal_t1500108320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal__ctor_m2618780664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IDictionary<int, Positioner> m_positionerIdToObject = new Dictionary<int, Positioner>();
		// private IDictionary<int, Positioner> m_positionerIdToObject = new Dictionary<int, Positioner>();
		Dictionary_2_t641488277 * L_0 = (Dictionary_2_t641488277 *)il2cpp_codegen_object_new(Dictionary_2_t641488277_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m368023328(L_0, /*hidden argument*/Dictionary_2__ctor_m368023328_RuntimeMethod_var);
		__this->set_m_positionerIdToObject_0(L_0);
		// internal PositionerApiInternal()
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_handleToSelf = NativeInteropHelpers.AllocateNativeHandleForObject(this);
		// m_handleToSelf = NativeInteropHelpers.AllocateNativeHandleForObject(this);
		intptr_t L_1 = NativeInteropHelpers_AllocateNativeHandleForObject_m3143731542(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->set_m_handleToSelf_1(L_1);
		// }
		return;
	}
}
// System.IntPtr Wrld.Space.Positioners.PositionerApiInternal::GetHandle()
extern "C"  intptr_t PositionerApiInternal_GetHandle_m1980749844 (PositionerApiInternal_t1500108320 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return m_handleToSelf;
		intptr_t L_0 = __this->get_m_handleToSelf_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal::Destroy()
extern "C"  void PositionerApiInternal_Destroy_m1377255418 (PositionerApiInternal_t1500108320 * __this, const RuntimeMethod* method)
{
	{
		// NativeInteropHelpers.FreeNativeHandle(m_handleToSelf);
		intptr_t L_0 = __this->get_m_handleToSelf_1();
		// NativeInteropHelpers.FreeNativeHandle(m_handleToSelf);
		NativeInteropHelpers_FreeNativeHandle_m4202217538(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Wrld.Space.Positioners.Positioner Wrld.Space.Positioners.PositionerApiInternal::CreatePositioner(Wrld.Space.Positioners.PositionerOptions)
extern "C"  Positioner_t1752774946 * PositionerApiInternal_CreatePositioner_m3277400250 (PositionerApiInternal_t1500108320 * __this, PositionerOptions_t660970786 * ___positionerOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal_CreatePositioner_m3277400250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PositionerCreateParamsInterop_t3667260723  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PositionerCreateParamsInterop_t3667260723  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Positioner_t1752774946 * V_3 = NULL;
	DoubleVector3_t761704365  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Positioner_t1752774946 * V_5 = NULL;
	{
		// var createParamsInterop = new PositionerCreateParamsInterop
		il2cpp_codegen_initobj((&V_1), sizeof(PositionerCreateParamsInterop_t3667260723 ));
		// ElevationMode = positionerOptions.GetElevationMode(),
		PositionerOptions_t660970786 * L_0 = ___positionerOptions0;
		// ElevationMode = positionerOptions.GetElevationMode(),
		NullCheck(L_0);
		int32_t L_1 = PositionerOptions_GetElevationMode_m2263133047(L_0, /*hidden argument*/NULL);
		(&V_1)->set_ElevationMode_0(L_1);
		// LatitudeDegrees = positionerOptions.GetLatitudeDegrees(),
		PositionerOptions_t660970786 * L_2 = ___positionerOptions0;
		// LatitudeDegrees = positionerOptions.GetLatitudeDegrees(),
		NullCheck(L_2);
		double L_3 = PositionerOptions_GetLatitudeDegrees_m1942920284(L_2, /*hidden argument*/NULL);
		(&V_1)->set_LatitudeDegrees_1(L_3);
		// LongitudeDegrees = positionerOptions.GetLongitudeDegrees(),
		PositionerOptions_t660970786 * L_4 = ___positionerOptions0;
		// LongitudeDegrees = positionerOptions.GetLongitudeDegrees(),
		NullCheck(L_4);
		double L_5 = PositionerOptions_GetLongitudeDegrees_m3220370985(L_4, /*hidden argument*/NULL);
		(&V_1)->set_LongitudeDegrees_2(L_5);
		// Elevation = positionerOptions.GetElevation(),
		PositionerOptions_t660970786 * L_6 = ___positionerOptions0;
		// Elevation = positionerOptions.GetElevation(),
		NullCheck(L_6);
		double L_7 = PositionerOptions_GetElevation_m4164359178(L_6, /*hidden argument*/NULL);
		(&V_1)->set_Elevation_3(L_7);
		// IndoorMapId = positionerOptions.GetIndoorMapId(),
		PositionerOptions_t660970786 * L_8 = ___positionerOptions0;
		// IndoorMapId = positionerOptions.GetIndoorMapId(),
		NullCheck(L_8);
		String_t* L_9 = PositionerOptions_GetIndoorMapId_m1191244953(L_8, /*hidden argument*/NULL);
		(&V_1)->set_IndoorMapId_5(L_9);
		// IndoorMapFloorId = positionerOptions.GetIndoorMapFloorId(),
		PositionerOptions_t660970786 * L_10 = ___positionerOptions0;
		// IndoorMapFloorId = positionerOptions.GetIndoorMapFloorId(),
		NullCheck(L_10);
		int32_t L_11 = PositionerOptions_GetIndoorMapFloorId_m2307439851(L_10, /*hidden argument*/NULL);
		(&V_1)->set_IndoorMapFloorId_4(L_11);
		// UsingFloorId = positionerOptions.IsUsingFloorId()
		PositionerOptions_t660970786 * L_12 = ___positionerOptions0;
		// UsingFloorId = positionerOptions.IsUsingFloorId()
		NullCheck(L_12);
		bool L_13 = PositionerOptions_IsUsingFloorId_m803689757(L_12, /*hidden argument*/NULL);
		(&V_1)->set_UsingFloorId_6(L_13);
		PositionerCreateParamsInterop_t3667260723  L_14 = V_1;
		V_0 = L_14;
		// var positionerId = NativePositionerApi_CreatePositioner(NativePluginRunner.API, ref createParamsInterop);
		intptr_t L_15 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		// var positionerId = NativePositionerApi_CreatePositioner(NativePluginRunner.API, ref createParamsInterop);
		int32_t L_16 = PositionerApiInternal_NativePositionerApi_CreatePositioner_m3948937893(NULL /*static, unused*/, L_15, (&V_0), /*hidden argument*/NULL);
		V_2 = L_16;
		// var positioner = new Positioner(
		int32_t L_17 = V_2;
		PositionerOptions_t660970786 * L_18 = ___positionerOptions0;
		// positionerOptions.IsUsingFloorId());
		NullCheck(L_18);
		bool L_19 = PositionerOptions_IsUsingFloorId_m803689757(L_18, /*hidden argument*/NULL);
		// var positioner = new Positioner(
		Positioner_t1752774946 * L_20 = (Positioner_t1752774946 *)il2cpp_codegen_object_new(Positioner_t1752774946_il2cpp_TypeInfo_var);
		Positioner__ctor_m1503101260(L_20, __this, L_17, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		// m_positionerIdToObject.Add(positionerId, positioner);
		RuntimeObject* L_21 = __this->get_m_positionerIdToObject_0();
		int32_t L_22 = V_2;
		Positioner_t1752774946 * L_23 = V_3;
		// m_positionerIdToObject.Add(positionerId, positioner);
		NullCheck(L_21);
		InterfaceActionInvoker2< int32_t, Positioner_t1752774946 * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::Add(!0,!1) */, IDictionary_2_t3400306964_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		// if (TryFetchECEFLocationForPositioner(positioner.Id, out positionerECEFLocation))
		Positioner_t1752774946 * L_24 = V_3;
		// if (TryFetchECEFLocationForPositioner(positioner.Id, out positionerECEFLocation))
		NullCheck(L_24);
		int32_t L_25 = Positioner_get_Id_m101133727(L_24, /*hidden argument*/NULL);
		// if (TryFetchECEFLocationForPositioner(positioner.Id, out positionerECEFLocation))
		bool L_26 = PositionerApiInternal_TryFetchECEFLocationForPositioner_m1328294574(__this, L_25, (&V_4), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ab;
		}
	}
	{
		// positioner.SetECEFLocation(positionerECEFLocation);
		Positioner_t1752774946 * L_27 = V_3;
		DoubleVector3_t761704365  L_28 = V_4;
		// positioner.SetECEFLocation(positionerECEFLocation);
		NullCheck(L_27);
		Positioner_SetECEFLocation_m3511299767(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// return positioner;
		Positioner_t1752774946 * L_29 = V_3;
		V_5 = L_29;
		goto IL_00b3;
	}

IL_00b3:
	{
		// }
		Positioner_t1752774946 * L_30 = V_5;
		return L_30;
	}
}
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::TryFetchECEFLocationForPositioner(System.Int32,Wrld.Common.Maths.DoubleVector3&)
extern "C"  bool PositionerApiInternal_TryFetchECEFLocationForPositioner_m1328294574 (PositionerApiInternal_t1500108320 * __this, int32_t ___positionerId0, DoubleVector3_t761704365 * ___positionerECEFLocation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal_TryFetchECEFLocationForPositioner_m1328294574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DoubleVector3Interop_t1528464399  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// DoubleVector3Interop positionerECEFLocationInterop = new DoubleVector3Interop();
		il2cpp_codegen_initobj((&V_0), sizeof(DoubleVector3Interop_t1528464399 ));
		// var success = NativePositionerApi_TryFetchECEFLocationForPositioner(NativePluginRunner.API, positionerId, ref positionerECEFLocationInterop);
		intptr_t L_0 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		int32_t L_1 = ___positionerId0;
		// var success = NativePositionerApi_TryFetchECEFLocationForPositioner(NativePluginRunner.API, positionerId, ref positionerECEFLocationInterop);
		bool L_2 = PositionerApiInternal_NativePositionerApi_TryFetchECEFLocationForPositioner_m478713026(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		// if (success)
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// positionerECEFLocation.x = positionerECEFLocationInterop.x;
		DoubleVector3_t761704365 * L_4 = ___positionerECEFLocation1;
		double L_5 = (&V_0)->get_x_0();
		L_4->set_x_3(L_5);
		// positionerECEFLocation.y = positionerECEFLocationInterop.y;
		DoubleVector3_t761704365 * L_6 = ___positionerECEFLocation1;
		double L_7 = (&V_0)->get_y_1();
		L_6->set_y_4(L_7);
		// positionerECEFLocation.z = positionerECEFLocationInterop.z;
		DoubleVector3_t761704365 * L_8 = ___positionerECEFLocation1;
		double L_9 = (&V_0)->get_z_2();
		L_8->set_z_5(L_9);
		// return true;
		V_2 = (bool)1;
		goto IL_005e;
	}

IL_004c:
	{
		// positionerECEFLocation = DoubleVector3.zero;
		DoubleVector3_t761704365 * L_10 = ___positionerECEFLocation1;
		IL2CPP_RUNTIME_CLASS_INIT(DoubleVector3_t761704365_il2cpp_TypeInfo_var);
		DoubleVector3_t761704365  L_11 = ((DoubleVector3_t761704365_StaticFields*)il2cpp_codegen_static_fields_for(DoubleVector3_t761704365_il2cpp_TypeInfo_var))->get_zero_1();
		*(DoubleVector3_t761704365 *)L_10 = L_11;
		// return false;
		V_2 = (bool)0;
		goto IL_005e;
	}

IL_005e:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal::NotifyPositionerProjectionsChanged()
extern "C"  void PositionerApiInternal_NotifyPositionerProjectionsChanged_m2214404331 (PositionerApiInternal_t1500108320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal_NotifyPositionerProjectionsChanged_m2214404331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Positioner_t1752774946 * V_2 = NULL;
	DoubleVector3_t761704365  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// foreach(int positionerId in m_positionerIdToObject.Keys)
		RuntimeObject* L_0 = __this->get_m_positionerIdToObject_0();
		// foreach(int positionerId in m_positionerIdToObject.Keys)
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::get_Keys() */, IDictionary_2_t3400306964_il2cpp_TypeInfo_var, L_0);
		// foreach(int positionerId in m_positionerIdToObject.Keys)
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t1930798642_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0018:
		{
			// foreach(int positionerId in m_positionerIdToObject.Keys)
			RuntimeObject* L_3 = V_1;
			// foreach(int positionerId in m_positionerIdToObject.Keys)
			NullCheck(L_3);
			int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t3383516221_il2cpp_TypeInfo_var, L_3);
			V_0 = L_4;
			// var positioner = m_positionerIdToObject[positionerId];
			RuntimeObject* L_5 = __this->get_m_positionerIdToObject_0();
			int32_t L_6 = V_0;
			// var positioner = m_positionerIdToObject[positionerId];
			NullCheck(L_5);
			Positioner_t1752774946 * L_7 = InterfaceFuncInvoker1< Positioner_t1752774946 *, int32_t >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::get_Item(!0) */, IDictionary_2_t3400306964_il2cpp_TypeInfo_var, L_5, L_6);
			V_2 = L_7;
			// if (TryFetchECEFLocationForPositioner(positioner.Id, out positionerECEFLocation))
			Positioner_t1752774946 * L_8 = V_2;
			// if (TryFetchECEFLocationForPositioner(positioner.Id, out positionerECEFLocation))
			NullCheck(L_8);
			int32_t L_9 = Positioner_get_Id_m101133727(L_8, /*hidden argument*/NULL);
			// if (TryFetchECEFLocationForPositioner(positioner.Id, out positionerECEFLocation))
			bool L_10 = PositionerApiInternal_TryFetchECEFLocationForPositioner_m1328294574(__this, L_9, (&V_3), /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0049;
			}
		}

IL_0040:
		{
			// positioner.SetECEFLocation(positionerECEFLocation);
			Positioner_t1752774946 * L_11 = V_2;
			DoubleVector3_t761704365  L_12 = V_3;
			// positioner.SetECEFLocation(positionerECEFLocation);
			NullCheck(L_11);
			Positioner_SetECEFLocation_m3511299767(L_11, L_12, /*hidden argument*/NULL);
		}

IL_0049:
		{
		}

IL_004a:
		{
			RuntimeObject* L_13 = V_1;
			// foreach(int positionerId in m_positionerIdToObject.Keys)
			NullCheck(L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0018;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x67, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_1;
			if (!L_15)
			{
				goto IL_0066;
			}
		}

IL_0060:
		{
			RuntimeObject* L_16 = V_1;
			// foreach(int positionerId in m_positionerIdToObject.Keys)
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
		}

IL_0066:
		{
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal::DestroyPositioner(Wrld.Space.Positioners.Positioner)
extern "C"  void PositionerApiInternal_DestroyPositioner_m3264874376 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal_DestroyPositioner_m3264874376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!m_positionerIdToObject.ContainsKey(positioner.Id))
		RuntimeObject* L_0 = __this->get_m_positionerIdToObject_0();
		Positioner_t1752774946 * L_1 = ___positioner0;
		// if(!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_1);
		int32_t L_2 = Positioner_get_Id_m101133727(L_1, /*hidden argument*/NULL);
		// if(!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_0);
		bool L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::ContainsKey(!0) */, IDictionary_2_t3400306964_il2cpp_TypeInfo_var, L_0, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		goto IL_0040;
	}

IL_001d:
	{
		// m_positionerIdToObject.Remove(positioner.Id);
		RuntimeObject* L_4 = __this->get_m_positionerIdToObject_0();
		Positioner_t1752774946 * L_5 = ___positioner0;
		// m_positionerIdToObject.Remove(positioner.Id);
		NullCheck(L_5);
		int32_t L_6 = Positioner_get_Id_m101133727(L_5, /*hidden argument*/NULL);
		// m_positionerIdToObject.Remove(positioner.Id);
		NullCheck(L_4);
		InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::Remove(!0) */, IDictionary_2_t3400306964_il2cpp_TypeInfo_var, L_4, L_6);
		// NativePositionerApi_DestroyPositioner(NativePluginRunner.API, positioner.Id);
		intptr_t L_7 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		Positioner_t1752774946 * L_8 = ___positioner0;
		// NativePositionerApi_DestroyPositioner(NativePluginRunner.API, positioner.Id);
		NullCheck(L_8);
		int32_t L_9 = Positioner_get_Id_m101133727(L_8, /*hidden argument*/NULL);
		// NativePositionerApi_DestroyPositioner(NativePluginRunner.API, positioner.Id);
		PositionerApiInternal_NativePositionerApi_DestroyPositioner_m3815455153(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal::SetPositionerLocation(Wrld.Space.Positioners.Positioner,System.Double,System.Double)
extern "C"  void PositionerApiInternal_SetPositionerLocation_m4021232775 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, double ___latitudeDegrees1, double ___longitudeDegrees2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal_SetPositionerLocation_m4021232775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		RuntimeObject* L_0 = __this->get_m_positionerIdToObject_0();
		Positioner_t1752774946 * L_1 = ___positioner0;
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_1);
		int32_t L_2 = Positioner_get_Id_m101133727(L_1, /*hidden argument*/NULL);
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_0);
		bool L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::ContainsKey(!0) */, IDictionary_2_t3400306964_il2cpp_TypeInfo_var, L_0, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		goto IL_0030;
	}

IL_001d:
	{
		// NativePositionerApi_SetLocation(NativePluginRunner.API, positioner.Id, latitudeDegrees, longitudeDegrees);
		intptr_t L_4 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		Positioner_t1752774946 * L_5 = ___positioner0;
		// NativePositionerApi_SetLocation(NativePluginRunner.API, positioner.Id, latitudeDegrees, longitudeDegrees);
		NullCheck(L_5);
		int32_t L_6 = Positioner_get_Id_m101133727(L_5, /*hidden argument*/NULL);
		double L_7 = ___latitudeDegrees1;
		double L_8 = ___longitudeDegrees2;
		// NativePositionerApi_SetLocation(NativePluginRunner.API, positioner.Id, latitudeDegrees, longitudeDegrees);
		PositionerApiInternal_NativePositionerApi_SetLocation_m3410753386(NULL /*static, unused*/, L_4, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal::SetPositionerElevation(Wrld.Space.Positioners.Positioner,System.Double)
extern "C"  void PositionerApiInternal_SetPositionerElevation_m1420501201 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, double ___elevation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal_SetPositionerElevation_m1420501201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		RuntimeObject* L_0 = __this->get_m_positionerIdToObject_0();
		Positioner_t1752774946 * L_1 = ___positioner0;
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_1);
		int32_t L_2 = Positioner_get_Id_m101133727(L_1, /*hidden argument*/NULL);
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_0);
		bool L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::ContainsKey(!0) */, IDictionary_2_t3400306964_il2cpp_TypeInfo_var, L_0, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		goto IL_002f;
	}

IL_001d:
	{
		// NativePositionerApi_SetElevation(NativePluginRunner.API, positioner.Id, elevation);
		intptr_t L_4 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		Positioner_t1752774946 * L_5 = ___positioner0;
		// NativePositionerApi_SetElevation(NativePluginRunner.API, positioner.Id, elevation);
		NullCheck(L_5);
		int32_t L_6 = Positioner_get_Id_m101133727(L_5, /*hidden argument*/NULL);
		double L_7 = ___elevation1;
		// NativePositionerApi_SetElevation(NativePluginRunner.API, positioner.Id, elevation);
		PositionerApiInternal_NativePositionerApi_SetElevation_m3975816551(NULL /*static, unused*/, L_4, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal::SetPositionerElevationMode(Wrld.Space.Positioners.Positioner,Wrld.Space.ElevationMode)
extern "C"  void PositionerApiInternal_SetPositionerElevationMode_m751369844 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, int32_t ___elevationMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal_SetPositionerElevationMode_m751369844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		RuntimeObject* L_0 = __this->get_m_positionerIdToObject_0();
		Positioner_t1752774946 * L_1 = ___positioner0;
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_1);
		int32_t L_2 = Positioner_get_Id_m101133727(L_1, /*hidden argument*/NULL);
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_0);
		bool L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::ContainsKey(!0) */, IDictionary_2_t3400306964_il2cpp_TypeInfo_var, L_0, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		goto IL_002f;
	}

IL_001d:
	{
		// NativePositionerApi_SetElevationMode(NativePluginRunner.API, positioner.Id, elevationMode);
		intptr_t L_4 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		Positioner_t1752774946 * L_5 = ___positioner0;
		// NativePositionerApi_SetElevationMode(NativePluginRunner.API, positioner.Id, elevationMode);
		NullCheck(L_5);
		int32_t L_6 = Positioner_get_Id_m101133727(L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___elevationMode1;
		// NativePositionerApi_SetElevationMode(NativePluginRunner.API, positioner.Id, elevationMode);
		PositionerApiInternal_NativePositionerApi_SetElevationMode_m1710511137(NULL /*static, unused*/, L_4, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal::SetPositionerIndoorMap(Wrld.Space.Positioners.Positioner,System.String,System.Int32)
extern "C"  void PositionerApiInternal_SetPositionerIndoorMap_m582027490 (PositionerApiInternal_t1500108320 * __this, Positioner_t1752774946 * ___positioner0, String_t* ___indoorMapId1, int32_t ___indoorMapFloorId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal_SetPositionerIndoorMap_m582027490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		RuntimeObject* L_0 = __this->get_m_positionerIdToObject_0();
		Positioner_t1752774946 * L_1 = ___positioner0;
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_1);
		int32_t L_2 = Positioner_get_Id_m101133727(L_1, /*hidden argument*/NULL);
		// if (!m_positionerIdToObject.ContainsKey(positioner.Id))
		NullCheck(L_0);
		bool L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Wrld.Space.Positioners.Positioner>::ContainsKey(!0) */, IDictionary_2_t3400306964_il2cpp_TypeInfo_var, L_0, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		goto IL_0030;
	}

IL_001d:
	{
		// NativePositionerApi_SetIndoorMap(NativePluginRunner.API, positioner.Id, indoorMapId, indoorMapFloorId);
		intptr_t L_4 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		Positioner_t1752774946 * L_5 = ___positioner0;
		// NativePositionerApi_SetIndoorMap(NativePluginRunner.API, positioner.Id, indoorMapId, indoorMapFloorId);
		NullCheck(L_5);
		int32_t L_6 = Positioner_get_Id_m101133727(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___indoorMapId1;
		int32_t L_8 = ___indoorMapFloorId2;
		// NativePositionerApi_SetIndoorMap(NativePluginRunner.API, positioner.Id, indoorMapId, indoorMapFloorId);
		PositionerApiInternal_NativePositionerApi_SetIndoorMap_m2433804066(NULL /*static, unused*/, L_4, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal::OnPositionerUpdated(System.IntPtr)
extern "C"  void PositionerApiInternal_OnPositionerUpdated_m4205083120 (RuntimeObject * __this /* static, unused */, intptr_t ___positionerApiHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerApiInternal_OnPositionerUpdated_m4205083120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PositionerApiInternal_t1500108320 * V_0 = NULL;
	{
		// var positionerApiInternal = positionerApiHandle.NativeHandleToObject<PositionerApiInternal>();
		intptr_t L_0 = ___positionerApiHandle0;
		// var positionerApiInternal = positionerApiHandle.NativeHandleToObject<PositionerApiInternal>();
		PositionerApiInternal_t1500108320 * L_1 = NativeInteropExtensions_NativeHandleToObject_TisPositionerApiInternal_t1500108320_m2783742380(NULL /*static, unused*/, L_0, /*hidden argument*/NativeInteropExtensions_NativeHandleToObject_TisPositionerApiInternal_t1500108320_m2783742380_RuntimeMethod_var);
		V_0 = L_1;
		// positionerApiInternal.NotifyPositionerProjectionsChanged();
		PositionerApiInternal_t1500108320 * L_2 = V_0;
		// positionerApiInternal.NotifyPositionerProjectionsChanged();
		NullCheck(L_2);
		PositionerApiInternal_NotifyPositionerProjectionsChanged_m2214404331(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
extern "C" int32_t STDCALL NativePositionerApi_CreatePositioner(intptr_t, PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke*);
// System.Int32 Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_CreatePositioner(System.IntPtr,Wrld.Space.Positioners.PositionerCreateParamsInterop&)
extern "C"  int32_t PositionerApiInternal_NativePositionerApi_CreatePositioner_m3948937893 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, PositionerCreateParamsInterop_t3667260723 * ___createParamsInterop1, const RuntimeMethod* method)
{


	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t, PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke*);

	// Marshaling of parameter '___createParamsInterop1' to native representation
	PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke* ____createParamsInterop1_marshaled = NULL;
	PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke ____createParamsInterop1_marshaled_dereferenced = {};
	PositionerCreateParamsInterop_t3667260723_marshal_pinvoke(*___createParamsInterop1, ____createParamsInterop1_marshaled_dereferenced);
	____createParamsInterop1_marshaled = &____createParamsInterop1_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NativePositionerApi_CreatePositioner)(___ptr0, ____createParamsInterop1_marshaled);

	// Marshaling of parameter '___createParamsInterop1' back from native representation
	PositionerCreateParamsInterop_t3667260723  _____createParamsInterop1_marshaled_unmarshaled_dereferenced;
	memset(&_____createParamsInterop1_marshaled_unmarshaled_dereferenced, 0, sizeof(_____createParamsInterop1_marshaled_unmarshaled_dereferenced));
	PositionerCreateParamsInterop_t3667260723_marshal_pinvoke_back(*____createParamsInterop1_marshaled, _____createParamsInterop1_marshaled_unmarshaled_dereferenced);
	*___createParamsInterop1 = _____createParamsInterop1_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___createParamsInterop1' native representation
	PositionerCreateParamsInterop_t3667260723_marshal_pinvoke_cleanup(*____createParamsInterop1_marshaled);

	return returnValue;
}
extern "C" int32_t STDCALL NativePositionerApi_TryFetchECEFLocationForPositioner(intptr_t, int32_t, DoubleVector3Interop_t1528464399 *);
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_TryFetchECEFLocationForPositioner(System.IntPtr,System.Int32,Wrld.Space.Positioners.DoubleVector3Interop&)
extern "C"  bool PositionerApiInternal_NativePositionerApi_TryFetchECEFLocationForPositioner_m478713026 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, DoubleVector3Interop_t1528464399 * ___out_positionerECEFLocationInterop2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t, int32_t, DoubleVector3Interop_t1528464399 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NativePositionerApi_TryFetchECEFLocationForPositioner)(___ptr0, ___positionerId1, ___out_positionerECEFLocationInterop2);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t STDCALL NativePositionerApi_DestroyPositioner(intptr_t, int32_t);
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_DestroyPositioner(System.IntPtr,System.Int32)
extern "C"  bool PositionerApiInternal_NativePositionerApi_DestroyPositioner_m3815455153 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NativePositionerApi_DestroyPositioner)(___ptr0, ___positionerId1);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t STDCALL NativePositionerApi_SetLocation(intptr_t, int32_t, double, double);
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_SetLocation(System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  bool PositionerApiInternal_NativePositionerApi_SetLocation_m3410753386 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, double ___latitudeDegrees2, double ___longitudeDegrees3, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t, int32_t, double, double);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NativePositionerApi_SetLocation)(___ptr0, ___positionerId1, ___latitudeDegrees2, ___longitudeDegrees3);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t STDCALL NativePositionerApi_SetElevation(intptr_t, int32_t, double);
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_SetElevation(System.IntPtr,System.Int32,System.Double)
extern "C"  bool PositionerApiInternal_NativePositionerApi_SetElevation_m3975816551 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, double ___elevation2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t, int32_t, double);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NativePositionerApi_SetElevation)(___ptr0, ___positionerId1, ___elevation2);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t STDCALL NativePositionerApi_SetElevationMode(intptr_t, int32_t, int32_t);
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_SetElevationMode(System.IntPtr,System.Int32,Wrld.Space.ElevationMode)
extern "C"  bool PositionerApiInternal_NativePositionerApi_SetElevationMode_m1710511137 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, int32_t ___elevationMode2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NativePositionerApi_SetElevationMode)(___ptr0, ___positionerId1, ___elevationMode2);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t STDCALL NativePositionerApi_SetIndoorMap(intptr_t, int32_t, char*, int32_t);
// System.Boolean Wrld.Space.Positioners.PositionerApiInternal::NativePositionerApi_SetIndoorMap(System.IntPtr,System.Int32,System.String,System.Int32)
extern "C"  bool PositionerApiInternal_NativePositionerApi_SetIndoorMap_m2433804066 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, int32_t ___positionerId1, String_t* ___indoorMapId2, int32_t ___indoorMapFloorId3, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t, int32_t, char*, int32_t);

	// Marshaling of parameter '___indoorMapId2' to native representation
	char* ____indoorMapId2_marshaled = NULL;
	____indoorMapId2_marshaled = il2cpp_codegen_marshal_string(___indoorMapId2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NativePositionerApi_SetIndoorMap)(___ptr0, ___positionerId1, ____indoorMapId2_marshaled, ___indoorMapFloorId3);

	// Marshaling cleanup of parameter '___indoorMapId2' native representation
	il2cpp_codegen_marshal_free(____indoorMapId2_marshaled);
	____indoorMapId2_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_PositionerProjectionChangedDelegate_t1663436742 (PositionerProjectionChangedDelegate_t1663436742 * __this, intptr_t ___positionerApiHandle0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___positionerApiHandle0);

}
// System.Void Wrld.Space.Positioners.PositionerApiInternal/PositionerProjectionChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void PositionerProjectionChangedDelegate__ctor_m998594762 (PositionerProjectionChangedDelegate_t1663436742 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal/PositionerProjectionChangedDelegate::Invoke(System.IntPtr)
extern "C"  void PositionerProjectionChangedDelegate_Invoke_m1141778084 (PositionerProjectionChangedDelegate_t1663436742 * __this, intptr_t ___positionerApiHandle0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		PositionerProjectionChangedDelegate_Invoke_m1141778084((PositionerProjectionChangedDelegate_t1663436742 *)__this->get_prev_9(), ___positionerApiHandle0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___positionerApiHandle0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___positionerApiHandle0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___positionerApiHandle0, targetMethod);
		}
	}
}
// System.IAsyncResult Wrld.Space.Positioners.PositionerApiInternal/PositionerProjectionChangedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* PositionerProjectionChangedDelegate_BeginInvoke_m2536493793 (PositionerProjectionChangedDelegate_t1663436742 * __this, intptr_t ___positionerApiHandle0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerProjectionChangedDelegate_BeginInvoke_m2536493793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___positionerApiHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Wrld.Space.Positioners.PositionerApiInternal/PositionerProjectionChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void PositionerProjectionChangedDelegate_EndInvoke_m3446331381 (PositionerProjectionChangedDelegate_t1663436742 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Wrld.Space.Positioners.PositionerCreateParamsInterop
extern "C" void PositionerCreateParamsInterop_t3667260723_marshal_pinvoke(const PositionerCreateParamsInterop_t3667260723& unmarshaled, PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke& marshaled)
{
	marshaled.___ElevationMode_0 = unmarshaled.get_ElevationMode_0();
	marshaled.___LatitudeDegrees_1 = unmarshaled.get_LatitudeDegrees_1();
	marshaled.___LongitudeDegrees_2 = unmarshaled.get_LongitudeDegrees_2();
	marshaled.___Elevation_3 = unmarshaled.get_Elevation_3();
	marshaled.___IndoorMapFloorId_4 = unmarshaled.get_IndoorMapFloorId_4();
	marshaled.___IndoorMapId_5 = il2cpp_codegen_marshal_string(unmarshaled.get_IndoorMapId_5());
	marshaled.___UsingFloorId_6 = static_cast<int8_t>(unmarshaled.get_UsingFloorId_6());
}
extern "C" void PositionerCreateParamsInterop_t3667260723_marshal_pinvoke_back(const PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke& marshaled, PositionerCreateParamsInterop_t3667260723& unmarshaled)
{
	int32_t unmarshaled_ElevationMode_temp_0 = 0;
	unmarshaled_ElevationMode_temp_0 = marshaled.___ElevationMode_0;
	unmarshaled.set_ElevationMode_0(unmarshaled_ElevationMode_temp_0);
	double unmarshaled_LatitudeDegrees_temp_1 = 0.0;
	unmarshaled_LatitudeDegrees_temp_1 = marshaled.___LatitudeDegrees_1;
	unmarshaled.set_LatitudeDegrees_1(unmarshaled_LatitudeDegrees_temp_1);
	double unmarshaled_LongitudeDegrees_temp_2 = 0.0;
	unmarshaled_LongitudeDegrees_temp_2 = marshaled.___LongitudeDegrees_2;
	unmarshaled.set_LongitudeDegrees_2(unmarshaled_LongitudeDegrees_temp_2);
	double unmarshaled_Elevation_temp_3 = 0.0;
	unmarshaled_Elevation_temp_3 = marshaled.___Elevation_3;
	unmarshaled.set_Elevation_3(unmarshaled_Elevation_temp_3);
	int32_t unmarshaled_IndoorMapFloorId_temp_4 = 0;
	unmarshaled_IndoorMapFloorId_temp_4 = marshaled.___IndoorMapFloorId_4;
	unmarshaled.set_IndoorMapFloorId_4(unmarshaled_IndoorMapFloorId_temp_4);
	unmarshaled.set_IndoorMapId_5(il2cpp_codegen_marshal_string_result(marshaled.___IndoorMapId_5));
	bool unmarshaled_UsingFloorId_temp_6 = false;
	unmarshaled_UsingFloorId_temp_6 = static_cast<bool>(marshaled.___UsingFloorId_6);
	unmarshaled.set_UsingFloorId_6(unmarshaled_UsingFloorId_temp_6);
}
// Conversion method for clean up from marshalling of: Wrld.Space.Positioners.PositionerCreateParamsInterop
extern "C" void PositionerCreateParamsInterop_t3667260723_marshal_pinvoke_cleanup(PositionerCreateParamsInterop_t3667260723_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___IndoorMapId_5);
	marshaled.___IndoorMapId_5 = NULL;
}
// Conversion methods for marshalling of: Wrld.Space.Positioners.PositionerCreateParamsInterop
extern "C" void PositionerCreateParamsInterop_t3667260723_marshal_com(const PositionerCreateParamsInterop_t3667260723& unmarshaled, PositionerCreateParamsInterop_t3667260723_marshaled_com& marshaled)
{
	marshaled.___ElevationMode_0 = unmarshaled.get_ElevationMode_0();
	marshaled.___LatitudeDegrees_1 = unmarshaled.get_LatitudeDegrees_1();
	marshaled.___LongitudeDegrees_2 = unmarshaled.get_LongitudeDegrees_2();
	marshaled.___Elevation_3 = unmarshaled.get_Elevation_3();
	marshaled.___IndoorMapFloorId_4 = unmarshaled.get_IndoorMapFloorId_4();
	marshaled.___IndoorMapId_5 = il2cpp_codegen_marshal_string(unmarshaled.get_IndoorMapId_5());
	marshaled.___UsingFloorId_6 = static_cast<int8_t>(unmarshaled.get_UsingFloorId_6());
}
extern "C" void PositionerCreateParamsInterop_t3667260723_marshal_com_back(const PositionerCreateParamsInterop_t3667260723_marshaled_com& marshaled, PositionerCreateParamsInterop_t3667260723& unmarshaled)
{
	int32_t unmarshaled_ElevationMode_temp_0 = 0;
	unmarshaled_ElevationMode_temp_0 = marshaled.___ElevationMode_0;
	unmarshaled.set_ElevationMode_0(unmarshaled_ElevationMode_temp_0);
	double unmarshaled_LatitudeDegrees_temp_1 = 0.0;
	unmarshaled_LatitudeDegrees_temp_1 = marshaled.___LatitudeDegrees_1;
	unmarshaled.set_LatitudeDegrees_1(unmarshaled_LatitudeDegrees_temp_1);
	double unmarshaled_LongitudeDegrees_temp_2 = 0.0;
	unmarshaled_LongitudeDegrees_temp_2 = marshaled.___LongitudeDegrees_2;
	unmarshaled.set_LongitudeDegrees_2(unmarshaled_LongitudeDegrees_temp_2);
	double unmarshaled_Elevation_temp_3 = 0.0;
	unmarshaled_Elevation_temp_3 = marshaled.___Elevation_3;
	unmarshaled.set_Elevation_3(unmarshaled_Elevation_temp_3);
	int32_t unmarshaled_IndoorMapFloorId_temp_4 = 0;
	unmarshaled_IndoorMapFloorId_temp_4 = marshaled.___IndoorMapFloorId_4;
	unmarshaled.set_IndoorMapFloorId_4(unmarshaled_IndoorMapFloorId_temp_4);
	unmarshaled.set_IndoorMapId_5(il2cpp_codegen_marshal_string_result(marshaled.___IndoorMapId_5));
	bool unmarshaled_UsingFloorId_temp_6 = false;
	unmarshaled_UsingFloorId_temp_6 = static_cast<bool>(marshaled.___UsingFloorId_6);
	unmarshaled.set_UsingFloorId_6(unmarshaled_UsingFloorId_temp_6);
}
// Conversion method for clean up from marshalling of: Wrld.Space.Positioners.PositionerCreateParamsInterop
extern "C" void PositionerCreateParamsInterop_t3667260723_marshal_com_cleanup(PositionerCreateParamsInterop_t3667260723_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___IndoorMapId_5);
	marshaled.___IndoorMapId_5 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.Positioners.PositionerOptions::.ctor()
extern "C"  void PositionerOptions__ctor_m2616955568 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionerOptions__ctor_m2616955568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private ElevationMode m_elevationMode = ElevationMode.HeightAboveGround;
		__this->set_m_elevationMode_3(1);
		// private string m_indoorMapId = "";
		__this->set_m_indoorMapId_4(_stringLiteral757602046);
		// private bool m_usingFloorId = false;
		__this->set_m_usingFloorId_6((bool)0);
		// public PositionerOptions()
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Wrld.Space.Positioners.PositionerOptions Wrld.Space.Positioners.PositionerOptions::LatitudeDegrees(System.Double)
extern "C"  PositionerOptions_t660970786 * PositionerOptions_LatitudeDegrees_m2241897533 (PositionerOptions_t660970786 * __this, double ___latitudeDegrees0, const RuntimeMethod* method)
{
	PositionerOptions_t660970786 * V_0 = NULL;
	{
		// m_latitudeDegrees = latitudeDegrees;
		double L_0 = ___latitudeDegrees0;
		__this->set_m_latitudeDegrees_0(L_0);
		// return this;
		V_0 = __this;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		PositionerOptions_t660970786 * L_1 = V_0;
		return L_1;
	}
}
// Wrld.Space.Positioners.PositionerOptions Wrld.Space.Positioners.PositionerOptions::LongitudeDegrees(System.Double)
extern "C"  PositionerOptions_t660970786 * PositionerOptions_LongitudeDegrees_m4208142807 (PositionerOptions_t660970786 * __this, double ___longitudeDegrees0, const RuntimeMethod* method)
{
	PositionerOptions_t660970786 * V_0 = NULL;
	{
		// m_longitudeDegrees = longitudeDegrees;
		double L_0 = ___longitudeDegrees0;
		__this->set_m_longitudeDegrees_1(L_0);
		// return this;
		V_0 = __this;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		PositionerOptions_t660970786 * L_1 = V_0;
		return L_1;
	}
}
// Wrld.Space.Positioners.PositionerOptions Wrld.Space.Positioners.PositionerOptions::ElevationAboveGround(System.Double)
extern "C"  PositionerOptions_t660970786 * PositionerOptions_ElevationAboveGround_m3429443651 (PositionerOptions_t660970786 * __this, double ___elevation0, const RuntimeMethod* method)
{
	PositionerOptions_t660970786 * V_0 = NULL;
	{
		// m_elevation = elevation;
		double L_0 = ___elevation0;
		__this->set_m_elevation_2(L_0);
		// m_elevationMode = ElevationMode.HeightAboveGround;
		__this->set_m_elevationMode_3(1);
		// return this;
		V_0 = __this;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		PositionerOptions_t660970786 * L_1 = V_0;
		return L_1;
	}
}
// Wrld.Space.Positioners.PositionerOptions Wrld.Space.Positioners.PositionerOptions::ElevationAboveSeaLevel(System.Double)
extern "C"  PositionerOptions_t660970786 * PositionerOptions_ElevationAboveSeaLevel_m886478037 (PositionerOptions_t660970786 * __this, double ___elevation0, const RuntimeMethod* method)
{
	PositionerOptions_t660970786 * V_0 = NULL;
	{
		// m_elevation = elevation;
		double L_0 = ___elevation0;
		__this->set_m_elevation_2(L_0);
		// m_elevationMode = ElevationMode.HeightAboveSeaLevel;
		__this->set_m_elevationMode_3(0);
		// return this;
		V_0 = __this;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		PositionerOptions_t660970786 * L_1 = V_0;
		return L_1;
	}
}
// Wrld.Space.Positioners.PositionerOptions Wrld.Space.Positioners.PositionerOptions::IndoorMap(System.String)
extern "C"  PositionerOptions_t660970786 * PositionerOptions_IndoorMap_m3588490157 (PositionerOptions_t660970786 * __this, String_t* ___indoorMapId0, const RuntimeMethod* method)
{
	PositionerOptions_t660970786 * V_0 = NULL;
	{
		// m_indoorMapId = indoorMapId;
		String_t* L_0 = ___indoorMapId0;
		__this->set_m_indoorMapId_4(L_0);
		// m_indoorMapFloorId = 0;
		__this->set_m_indoorMapFloorId_5(0);
		// m_usingFloorId = false;
		__this->set_m_usingFloorId_6((bool)0);
		// return this;
		V_0 = __this;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		PositionerOptions_t660970786 * L_1 = V_0;
		return L_1;
	}
}
// Wrld.Space.Positioners.PositionerOptions Wrld.Space.Positioners.PositionerOptions::IndoorMapWithFloorId(System.String,System.Int32)
extern "C"  PositionerOptions_t660970786 * PositionerOptions_IndoorMapWithFloorId_m289817811 (PositionerOptions_t660970786 * __this, String_t* ___indoorMapId0, int32_t ___indoorMapFloorId1, const RuntimeMethod* method)
{
	PositionerOptions_t660970786 * V_0 = NULL;
	{
		// m_indoorMapId = indoorMapId;
		String_t* L_0 = ___indoorMapId0;
		__this->set_m_indoorMapId_4(L_0);
		// m_indoorMapFloorId = indoorMapFloorId;
		int32_t L_1 = ___indoorMapFloorId1;
		__this->set_m_indoorMapFloorId_5(L_1);
		// m_usingFloorId = true;
		__this->set_m_usingFloorId_6((bool)1);
		// return this;
		V_0 = __this;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		PositionerOptions_t660970786 * L_2 = V_0;
		return L_2;
	}
}
// Wrld.Space.ElevationMode Wrld.Space.Positioners.PositionerOptions::GetElevationMode()
extern "C"  int32_t PositionerOptions_GetElevationMode_m2263133047 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return m_elevationMode;
		int32_t L_0 = __this->get_m_elevationMode_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Double Wrld.Space.Positioners.PositionerOptions::GetLatitudeDegrees()
extern "C"  double PositionerOptions_GetLatitudeDegrees_m1942920284 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// return m_latitudeDegrees;
		double L_0 = __this->get_m_latitudeDegrees_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		double L_1 = V_0;
		return L_1;
	}
}
// System.Double Wrld.Space.Positioners.PositionerOptions::GetLongitudeDegrees()
extern "C"  double PositionerOptions_GetLongitudeDegrees_m3220370985 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// return m_longitudeDegrees;
		double L_0 = __this->get_m_longitudeDegrees_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		double L_1 = V_0;
		return L_1;
	}
}
// System.Double Wrld.Space.Positioners.PositionerOptions::GetElevation()
extern "C"  double PositionerOptions_GetElevation_m4164359178 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// return m_elevation;
		double L_0 = __this->get_m_elevation_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		double L_1 = V_0;
		return L_1;
	}
}
// System.String Wrld.Space.Positioners.PositionerOptions::GetIndoorMapId()
extern "C"  String_t* PositionerOptions_GetIndoorMapId_m1191244953 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return m_indoorMapId;
		String_t* L_0 = __this->get_m_indoorMapId_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Wrld.Space.Positioners.PositionerOptions::GetIndoorMapFloorId()
extern "C"  int32_t PositionerOptions_GetIndoorMapFloorId_m2307439851 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return m_indoorMapFloorId;
		int32_t L_0 = __this->get_m_indoorMapFloorId_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Wrld.Space.Positioners.PositionerOptions::IsUsingFloorId()
extern "C"  bool PositionerOptions_IsUsingFloorId_m803689757 (PositionerOptions_t660970786 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return m_usingFloorId;
		bool L_0 = __this->get_m_usingFloorId_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.Positioners.PositionerUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void PositionerUpdatedDelegate__ctor_m3234607937 (PositionerUpdatedDelegate_t1913896330 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wrld.Space.Positioners.PositionerUpdatedDelegate::Invoke(Wrld.Space.Positioners.Positioner)
extern "C"  void PositionerUpdatedDelegate_Invoke_m2107752770 (PositionerUpdatedDelegate_t1913896330 * __this, Positioner_t1752774946 * ___positioner0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		PositionerUpdatedDelegate_Invoke_m2107752770((PositionerUpdatedDelegate_t1913896330 *)__this->get_prev_9(), ___positioner0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, Positioner_t1752774946 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___positioner0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, Positioner_t1752774946 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___positioner0, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, Positioner_t1752774946 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___positioner0, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (Positioner_t1752774946 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___positioner0, targetMethod);
		}
	}
}
// System.IAsyncResult Wrld.Space.Positioners.PositionerUpdatedDelegate::BeginInvoke(Wrld.Space.Positioners.Positioner,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* PositionerUpdatedDelegate_BeginInvoke_m2102029665 (PositionerUpdatedDelegate_t1913896330 * __this, Positioner_t1752774946 * ___positioner0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___positioner0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Wrld.Space.Positioners.PositionerUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void PositionerUpdatedDelegate_EndInvoke_m2544327661 (PositionerUpdatedDelegate_t1913896330 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.SpacesApi::.ctor()
extern "C"  void SpacesApi__ctor_m1386990998 (SpacesApi_t463405772 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Assets.Wrld.Scripts.Maths.DoubleRay Wrld.Space.SpacesApi::ScreenPointToRay(UnityEngine.Vector2)
extern "C"  DoubleRay_t1286935159  SpacesApi_ScreenPointToRay_m2501436891 (SpacesApi_t463405772 * __this, Vector2_t2156229523  ___screenPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpacesApi_ScreenPointToRay_m2501436891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DoubleRay_t1286935159  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DoubleRay_t1286935159  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// var screenPointOriginTopLeft = new Vector2(screenPoint.x, Screen.height - screenPoint.y);
		float L_0 = (&___screenPoint0)->get_x_0();
		// var screenPointOriginTopLeft = new Vector2(screenPoint.x, Screen.height - screenPoint.y);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (&___screenPoint0)->get_y_1();
		// var screenPointOriginTopLeft = new Vector2(screenPoint.x, Screen.height - screenPoint.y);
		Vector2__ctor_m3970636864((&V_0), L_0, ((float)il2cpp_codegen_subtract((float)(((float)((float)L_1))), (float)L_2)), /*hidden argument*/NULL);
		// DoubleRay ray = NativeSpacesApi_ScreenPointToRay(NativePluginRunner.API, ref screenPointOriginTopLeft);
		intptr_t L_3 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		// DoubleRay ray = NativeSpacesApi_ScreenPointToRay(NativePluginRunner.API, ref screenPointOriginTopLeft);
		DoubleRay_t1286935159  L_4 = SpacesApi_NativeSpacesApi_ScreenPointToRay_m1513835467(NULL /*static, unused*/, L_3, (&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		// return ray;
		DoubleRay_t1286935159  L_5 = V_1;
		V_2 = L_5;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		DoubleRay_t1286935159  L_6 = V_2;
		return L_6;
	}
}
// Assets.Wrld.Scripts.Maths.DoubleRay Wrld.Space.SpacesApi::LatLongToVerticallyDownRay(Wrld.Space.LatLong)
extern "C"  DoubleRay_t1286935159  SpacesApi_LatLongToVerticallyDownRay_m3659442385 (SpacesApi_t463405772 * __this, LatLong_t2936018554  ___latLong0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpacesApi_LatLongToVerticallyDownRay_m3659442385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LatLongInterop_t1185496937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DoubleRay_t1286935159  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DoubleRay_t1286935159  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// var latLongInterop = latLong.ToLatLongInterop();
		LatLong_t2936018554  L_0 = ___latLong0;
		// var latLongInterop = latLong.ToLatLongInterop();
		LatLongInterop_t1185496937  L_1 = InteropExtensions_ToLatLongInterop_m2896569814(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// DoubleRay ray = NativeSpacesApi_LatLongToVerticallyDownRay(NativePluginRunner.API, ref latLongInterop);
		intptr_t L_2 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		// DoubleRay ray = NativeSpacesApi_LatLongToVerticallyDownRay(NativePluginRunner.API, ref latLongInterop);
		DoubleRay_t1286935159  L_3 = SpacesApi_NativeSpacesApi_LatLongToVerticallyDownRay_m3191432859(NULL /*static, unused*/, L_2, (&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		// return ray;
		DoubleRay_t1286935159  L_4 = V_1;
		V_2 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		DoubleRay_t1286935159  L_5 = V_2;
		return L_5;
	}
}
extern "C" DoubleRay_t1286935159  STDCALL NativeSpacesApi_ScreenPointToRay(intptr_t, Vector2_t2156229523 *);
// Assets.Wrld.Scripts.Maths.DoubleRay Wrld.Space.SpacesApi::NativeSpacesApi_ScreenPointToRay(System.IntPtr,UnityEngine.Vector2&)
extern "C"  DoubleRay_t1286935159  SpacesApi_NativeSpacesApi_ScreenPointToRay_m1513835467 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, Vector2_t2156229523 * ___screenPoint1, const RuntimeMethod* method)
{
	typedef DoubleRay_t1286935159  (STDCALL *PInvokeFunc) (intptr_t, Vector2_t2156229523 *);

	// Native function invocation
	DoubleRay_t1286935159  returnValue = reinterpret_cast<PInvokeFunc>(NativeSpacesApi_ScreenPointToRay)(___ptr0, ___screenPoint1);

	return returnValue;
}
extern "C" DoubleRay_t1286935159  STDCALL NativeSpacesApi_LatLongToVerticallyDownRay(intptr_t, LatLongInterop_t1185496937 *);
// Assets.Wrld.Scripts.Maths.DoubleRay Wrld.Space.SpacesApi::NativeSpacesApi_LatLongToVerticallyDownRay(System.IntPtr,Wrld.Interop.LatLongInterop&)
extern "C"  DoubleRay_t1286935159  SpacesApi_NativeSpacesApi_LatLongToVerticallyDownRay_m3191432859 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, LatLongInterop_t1185496937 * ___latLongInterop1, const RuntimeMethod* method)
{
	typedef DoubleRay_t1286935159  (STDCALL *PInvokeFunc) (intptr_t, LatLongInterop_t1185496937 *);

	// Native function invocation
	DoubleRay_t1286935159  returnValue = reinterpret_cast<PInvokeFunc>(NativeSpacesApi_LatLongToVerticallyDownRay)(___ptr0, ___latLongInterop1);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.TransformHelper::.ctor()
extern "C"  void TransformHelper__ctor_m4288479166 (TransformHelper_t3089836435 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wrld.Space.TransformHelper::ApplyTransform(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  void TransformHelper_ApplyTransform_m3531692701 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___objectTransform0, Vector3_t3722313464  ___parentPosition1, Vector3_t3722313464  ___parentScale2, Quaternion_t2301928331  ___parentRotation3, Quaternion_t2301928331  ___childRotation4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_t3600365921 * V_2 = NULL;
	{
		// objectTransform.localPosition = parentPosition;
		Transform_t3600365921 * L_0 = ___objectTransform0;
		Vector3_t3722313464  L_1 = ___parentPosition1;
		// objectTransform.localPosition = parentPosition;
		NullCheck(L_0);
		Transform_set_localPosition_m4128471975(L_0, L_1, /*hidden argument*/NULL);
		// objectTransform.localRotation = parentRotation;
		Transform_t3600365921 * L_2 = ___objectTransform0;
		Quaternion_t2301928331  L_3 = ___parentRotation3;
		// objectTransform.localRotation = parentRotation;
		NullCheck(L_2);
		Transform_set_localRotation_m19445462(L_2, L_3, /*hidden argument*/NULL);
		// objectTransform.localScale = parentScale;
		Transform_t3600365921 * L_4 = ___objectTransform0;
		Vector3_t3722313464  L_5 = ___parentScale2;
		// objectTransform.localScale = parentScale;
		NullCheck(L_4);
		Transform_set_localScale_m3053443106(L_4, L_5, /*hidden argument*/NULL);
		// int childCount = objectTransform.childCount;
		Transform_t3600365921 * L_6 = ___objectTransform0;
		// int childCount = objectTransform.childCount;
		NullCheck(L_6);
		int32_t L_7 = Transform_get_childCount_m3145433196(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// for (int childIndex = 0; childIndex < childCount; ++childIndex)
		V_1 = 0;
		goto IL_003a;
	}

IL_0024:
	{
		// var child = objectTransform.GetChild(childIndex);
		Transform_t3600365921 * L_8 = ___objectTransform0;
		int32_t L_9 = V_1;
		// var child = objectTransform.GetChild(childIndex);
		NullCheck(L_8);
		Transform_t3600365921 * L_10 = Transform_GetChild_m1092972975(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// child.localRotation = childRotation;
		Transform_t3600365921 * L_11 = V_2;
		Quaternion_t2301928331  L_12 = ___childRotation4;
		// child.localRotation = childRotation;
		NullCheck(L_11);
		Transform_set_localRotation_m19445462(L_11, L_12, /*hidden argument*/NULL);
		// for (int childIndex = 0; childIndex < childCount; ++childIndex)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003a:
	{
		// for (int childIndex = 0; childIndex < childCount; ++childIndex)
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0024;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::.ctor(Wrld.Space.LatLongAltitude)
extern "C"  void UnityWorldSpaceCoordinateFrame__ctor_m3227294009 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, LatLongAltitude_t944891001  ___centralPoint0, const RuntimeMethod* method)
{
	{
		// public UnityWorldSpaceCoordinateFrame(LatLongAltitude centralPoint)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// SetCentralPoint(centralPoint);
		LatLongAltitude_t944891001  L_0 = ___centralPoint0;
		// SetCentralPoint(centralPoint);
		UnityWorldSpaceCoordinateFrame_SetCentralPoint_m3255142567(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::get_OriginECEF()
extern "C"  DoubleVector3_t761704365  UnityWorldSpaceCoordinateFrame_get_OriginECEF_m3735490717 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, const RuntimeMethod* method)
{
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public DoubleVector3 OriginECEF { get { return m_originECEF; } }
		DoubleVector3_t761704365  L_0 = __this->get_m_originECEF_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public DoubleVector3 OriginECEF { get { return m_originECEF; } }
		DoubleVector3_t761704365  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::get_ECEFToLocalRotation()
extern "C"  Quaternion_t2301928331  UnityWorldSpaceCoordinateFrame_get_ECEFToLocalRotation_m1977956869 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public Quaternion ECEFToLocalRotation { get; private set; }
		Quaternion_t2301928331  L_0 = __this->get_U3CECEFToLocalRotationU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Quaternion_t2301928331  L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::set_ECEFToLocalRotation(UnityEngine.Quaternion)
extern "C"  void UnityWorldSpaceCoordinateFrame_set_ECEFToLocalRotation_m538682458 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion ECEFToLocalRotation { get; private set; }
		Quaternion_t2301928331  L_0 = ___value0;
		__this->set_U3CECEFToLocalRotationU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::get_LocalToECEFRotation()
extern "C"  Quaternion_t2301928331  UnityWorldSpaceCoordinateFrame_get_LocalToECEFRotation_m1480440645 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public Quaternion LocalToECEFRotation { get; private set; }
		Quaternion_t2301928331  L_0 = __this->get_U3CLocalToECEFRotationU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Quaternion_t2301928331  L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::set_LocalToECEFRotation(UnityEngine.Quaternion)
extern "C"  void UnityWorldSpaceCoordinateFrame_set_LocalToECEFRotation_m342114734 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion LocalToECEFRotation { get; private set; }
		Quaternion_t2301928331  L_0 = ___value0;
		__this->set_U3CLocalToECEFRotationU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::SetCentralPoint(Wrld.Space.LatLongAltitude)
extern "C"  void UnityWorldSpaceCoordinateFrame_SetCentralPoint_m3255142567 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, LatLongAltitude_t944891001  ___latLongAlt0, const RuntimeMethod* method)
{
	{
		// SetCentralPoint(latLongAlt.ToECEF(), latLongAlt);
		// SetCentralPoint(latLongAlt.ToECEF(), latLongAlt);
		DoubleVector3_t761704365  L_0 = LatLongAltitude_ToECEF_m3897686018((&___latLongAlt0), /*hidden argument*/NULL);
		LatLongAltitude_t944891001  L_1 = ___latLongAlt0;
		// SetCentralPoint(latLongAlt.ToECEF(), latLongAlt);
		UnityWorldSpaceCoordinateFrame_SetCentralPoint_m398641478(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::SetCentralPoint(Wrld.Common.Maths.DoubleVector3)
extern "C"  void UnityWorldSpaceCoordinateFrame_SetCentralPoint_m2438869702 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, DoubleVector3_t761704365  ___ecefOrigin0, const RuntimeMethod* method)
{
	{
		// SetCentralPoint(ecefOrigin, LatLongAltitude.FromECEF(ecefOrigin));
		DoubleVector3_t761704365  L_0 = ___ecefOrigin0;
		DoubleVector3_t761704365  L_1 = ___ecefOrigin0;
		// SetCentralPoint(ecefOrigin, LatLongAltitude.FromECEF(ecefOrigin));
		LatLongAltitude_t944891001  L_2 = LatLongAltitude_FromECEF_m2872636096(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// SetCentralPoint(ecefOrigin, LatLongAltitude.FromECEF(ecefOrigin));
		UnityWorldSpaceCoordinateFrame_SetCentralPoint_m398641478(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::CreateQuaternionFromBasisVectors(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  UnityWorldSpaceCoordinateFrame_CreateQuaternionFromBasisVectors_m2317032641 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___right0, Vector3_t3722313464  ___up1, Vector3_t3722313464  ___forward2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWorldSpaceCoordinateFrame_CreateQuaternionFromBasisVectors_m2317032641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// var basis = Matrix4x4.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_0 = Matrix4x4_get_identity_m1406790249(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// basis.SetRow(0, new Vector4(right.x, right.y, right.z, 0.0f));
		float L_1 = (&___right0)->get_x_1();
		float L_2 = (&___right0)->get_y_2();
		float L_3 = (&___right0)->get_z_3();
		// basis.SetRow(0, new Vector4(right.x, right.y, right.z, 0.0f));
		Vector4_t3319028937  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector4__ctor_m2498754347((&L_4), L_1, L_2, L_3, (0.0f), /*hidden argument*/NULL);
		// basis.SetRow(0, new Vector4(right.x, right.y, right.z, 0.0f));
		Matrix4x4_SetRow_m2327530647((&V_0), 0, L_4, /*hidden argument*/NULL);
		// basis.SetRow(1, new Vector4(up.x, up.y, up.z, 0.0f));
		float L_5 = (&___up1)->get_x_1();
		float L_6 = (&___up1)->get_y_2();
		float L_7 = (&___up1)->get_z_3();
		// basis.SetRow(1, new Vector4(up.x, up.y, up.z, 0.0f));
		Vector4_t3319028937  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m2498754347((&L_8), L_5, L_6, L_7, (0.0f), /*hidden argument*/NULL);
		// basis.SetRow(1, new Vector4(up.x, up.y, up.z, 0.0f));
		Matrix4x4_SetRow_m2327530647((&V_0), 1, L_8, /*hidden argument*/NULL);
		// basis.SetRow(2, new Vector4(forward.x, forward.y, forward.z, 0.0f));
		float L_9 = (&___forward2)->get_x_1();
		float L_10 = (&___forward2)->get_y_2();
		float L_11 = (&___forward2)->get_z_3();
		// basis.SetRow(2, new Vector4(forward.x, forward.y, forward.z, 0.0f));
		Vector4_t3319028937  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector4__ctor_m2498754347((&L_12), L_9, L_10, L_11, (0.0f), /*hidden argument*/NULL);
		// basis.SetRow(2, new Vector4(forward.x, forward.y, forward.z, 0.0f));
		Matrix4x4_SetRow_m2327530647((&V_0), 2, L_12, /*hidden argument*/NULL);
		// return basis.ToQuaternion();
		Matrix4x4_t1817901843  L_13 = V_0;
		// return basis.ToQuaternion();
		Quaternion_t2301928331  L_14 = Matrix4x4Extensions_ToQuaternion_m2271654808(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_0088;
	}

IL_0088:
	{
		// }
		Quaternion_t2301928331  L_15 = V_1;
		return L_15;
	}
}
// System.Void Wrld.Space.UnityWorldSpaceCoordinateFrame::SetCentralPoint(Wrld.Common.Maths.DoubleVector3,Wrld.Space.LatLongAltitude)
extern "C"  void UnityWorldSpaceCoordinateFrame_SetCentralPoint_m398641478 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, DoubleVector3_t761704365  ___ecefOrigin0, LatLongAltitude_t944891001  ___latLongAltOrigin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWorldSpaceCoordinateFrame_SetCentralPoint_m398641478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DoubleVector3_t761704365  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DoubleVector3_t761704365  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DoubleVector3_t761704365  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DoubleVector3_t761704365  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		// m_originECEF = ecefOrigin;
		DoubleVector3_t761704365  L_0 = ___ecefOrigin0;
		__this->set_m_originECEF_2(L_0);
		// var upEcef = m_originECEF.normalized;
		DoubleVector3_t761704365 * L_1 = __this->get_address_of_m_originECEF_2();
		// var upEcef = m_originECEF.normalized;
		DoubleVector3_t761704365  L_2 = DoubleVector3_get_normalized_m277955098(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var northPole = new DoubleVector3(0.0, 1.0, 0.0);
		// var northPole = new DoubleVector3(0.0, 1.0, 0.0);
		DoubleVector3__ctor_m393031433((&V_1), (0.0), (1.0), (0.0), /*hidden argument*/NULL);
		// var toNorthPole = (northPole - upEcef).normalized;
		DoubleVector3_t761704365  L_3 = V_1;
		DoubleVector3_t761704365  L_4 = V_0;
		// var toNorthPole = (northPole - upEcef).normalized;
		IL2CPP_RUNTIME_CLASS_INIT(DoubleVector3_t761704365_il2cpp_TypeInfo_var);
		DoubleVector3_t761704365  L_5 = DoubleVector3_op_Subtraction_m1122701270(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		// var toNorthPole = (northPole - upEcef).normalized;
		DoubleVector3_t761704365  L_6 = DoubleVector3_get_normalized_m277955098((&V_3), /*hidden argument*/NULL);
		V_2 = L_6;
		// m_upECEF = upEcef.ToSingleVector();
		DoubleVector3_t761704365  L_7 = V_0;
		// m_upECEF = upEcef.ToSingleVector();
		Vector3_t3722313464  L_8 = DoubleVector3Extensions_ToSingleVector_m1142520591(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		__this->set_m_upECEF_3(L_8);
		// m_rightECEF = -DoubleVector3.Cross(toNorthPole, upEcef).normalized.ToSingleVector();
		DoubleVector3_t761704365  L_9 = V_2;
		DoubleVector3_t761704365  L_10 = V_0;
		// m_rightECEF = -DoubleVector3.Cross(toNorthPole, upEcef).normalized.ToSingleVector();
		DoubleVector3_t761704365  L_11 = DoubleVector3_Cross_m1774742975(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// m_rightECEF = -DoubleVector3.Cross(toNorthPole, upEcef).normalized.ToSingleVector();
		DoubleVector3_t761704365  L_12 = DoubleVector3_get_normalized_m277955098((&V_4), /*hidden argument*/NULL);
		// m_rightECEF = -DoubleVector3.Cross(toNorthPole, upEcef).normalized.ToSingleVector();
		Vector3_t3722313464  L_13 = DoubleVector3Extensions_ToSingleVector_m1142520591(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		// m_rightECEF = -DoubleVector3.Cross(toNorthPole, upEcef).normalized.ToSingleVector();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_14 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		__this->set_m_rightECEF_4(L_14);
		// m_forwardECEF = -Vector3.Cross(m_upECEF, m_rightECEF);
		Vector3_t3722313464  L_15 = __this->get_m_upECEF_3();
		Vector3_t3722313464  L_16 = __this->get_m_rightECEF_4();
		// m_forwardECEF = -Vector3.Cross(m_upECEF, m_rightECEF);
		Vector3_t3722313464  L_17 = Vector3_Cross_m418170344(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		// m_forwardECEF = -Vector3.Cross(m_upECEF, m_rightECEF);
		Vector3_t3722313464  L_18 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		__this->set_m_forwardECEF_5(L_18);
		// ECEFToLocalRotation = CreateQuaternionFromBasisVectors(m_rightECEF, m_upECEF, m_forwardECEF);
		Vector3_t3722313464  L_19 = __this->get_m_rightECEF_4();
		Vector3_t3722313464  L_20 = __this->get_m_upECEF_3();
		Vector3_t3722313464  L_21 = __this->get_m_forwardECEF_5();
		// ECEFToLocalRotation = CreateQuaternionFromBasisVectors(m_rightECEF, m_upECEF, m_forwardECEF);
		Quaternion_t2301928331  L_22 = UnityWorldSpaceCoordinateFrame_CreateQuaternionFromBasisVectors_m2317032641(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		// ECEFToLocalRotation = CreateQuaternionFromBasisVectors(m_rightECEF, m_upECEF, m_forwardECEF);
		UnityWorldSpaceCoordinateFrame_set_ECEFToLocalRotation_m538682458(__this, L_22, /*hidden argument*/NULL);
		// LocalToECEFRotation = Quaternion.Inverse(ECEFToLocalRotation);
		// LocalToECEFRotation = Quaternion.Inverse(ECEFToLocalRotation);
		Quaternion_t2301928331  L_23 = UnityWorldSpaceCoordinateFrame_get_ECEFToLocalRotation_m1977956869(__this, /*hidden argument*/NULL);
		// LocalToECEFRotation = Quaternion.Inverse(ECEFToLocalRotation);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_24 = Quaternion_Inverse_m1311579081(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		// LocalToECEFRotation = Quaternion.Inverse(ECEFToLocalRotation);
		UnityWorldSpaceCoordinateFrame_set_LocalToECEFRotation_m342114734(__this, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::ECEFToLocalSpace(Wrld.Common.Maths.DoubleVector3)
extern "C"  Vector3_t3722313464  UnityWorldSpaceCoordinateFrame_ECEFToLocalSpace_m3518368515 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, DoubleVector3_t761704365  ___ecef0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWorldSpaceCoordinateFrame_ECEFToLocalSpace_m3518368515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// Vector3 offsetFromOrigin = (ecef - m_originECEF).ToSingleVector();
		DoubleVector3_t761704365  L_0 = ___ecef0;
		DoubleVector3_t761704365  L_1 = __this->get_m_originECEF_2();
		// Vector3 offsetFromOrigin = (ecef - m_originECEF).ToSingleVector();
		IL2CPP_RUNTIME_CLASS_INIT(DoubleVector3_t761704365_il2cpp_TypeInfo_var);
		DoubleVector3_t761704365  L_2 = DoubleVector3_op_Subtraction_m1122701270(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		// Vector3 offsetFromOrigin = (ecef - m_originECEF).ToSingleVector();
		Vector3_t3722313464  L_3 = DoubleVector3Extensions_ToSingleVector_m1142520591(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// return ECEFToLocalRotation * offsetFromOrigin;
		// return ECEFToLocalRotation * offsetFromOrigin;
		Quaternion_t2301928331  L_4 = UnityWorldSpaceCoordinateFrame_get_ECEFToLocalRotation_m1977956869(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = V_0;
		// return ECEFToLocalRotation * offsetFromOrigin;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		Vector3_t3722313464  L_7 = V_1;
		return L_7;
	}
}
// Wrld.Common.Maths.DoubleVector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::LocalSpaceToECEF(UnityEngine.Vector3)
extern "C"  DoubleVector3_t761704365  UnityWorldSpaceCoordinateFrame_LocalSpaceToECEF_m2113838158 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, Vector3_t3722313464  ___localSpace0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWorldSpaceCoordinateFrame_LocalSpaceToECEF_m2113838158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return m_originECEF + LocalToECEFRotation * localSpace;
		DoubleVector3_t761704365  L_0 = __this->get_m_originECEF_2();
		// return m_originECEF + LocalToECEFRotation * localSpace;
		Quaternion_t2301928331  L_1 = UnityWorldSpaceCoordinateFrame_get_LocalToECEFRotation_m1480440645(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = ___localSpace0;
		// return m_originECEF + LocalToECEFRotation * localSpace;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		// return m_originECEF + LocalToECEFRotation * localSpace;
		IL2CPP_RUNTIME_CLASS_INIT(DoubleVector3_t761704365_il2cpp_TypeInfo_var);
		DoubleVector3_t761704365  L_4 = DoubleVector3_op_Implicit_m245241895(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		// return m_originECEF + LocalToECEFRotation * localSpace;
		DoubleVector3_t761704365  L_5 = DoubleVector3_op_Addition_m3339173121(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		DoubleVector3_t761704365  L_6 = V_0;
		return L_6;
	}
}
// Wrld.Space.LatLongAltitude Wrld.Space.UnityWorldSpaceCoordinateFrame::LocalSpaceToLatLongAltitude(UnityEngine.Vector3)
extern "C"  LatLongAltitude_t944891001  UnityWorldSpaceCoordinateFrame_LocalSpaceToLatLongAltitude_m3509019134 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, Vector3_t3722313464  ___localSpace0, const RuntimeMethod* method)
{
	LatLongAltitude_t944891001  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return LatLongAltitude.FromECEF(LocalSpaceToECEF(localSpace));
		Vector3_t3722313464  L_0 = ___localSpace0;
		// return LatLongAltitude.FromECEF(LocalSpaceToECEF(localSpace));
		DoubleVector3_t761704365  L_1 = UnityWorldSpaceCoordinateFrame_LocalSpaceToECEF_m2113838158(__this, L_0, /*hidden argument*/NULL);
		// return LatLongAltitude.FromECEF(LocalSpaceToECEF(localSpace));
		LatLongAltitude_t944891001  L_2 = LatLongAltitude_FromECEF_m2872636096(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		LatLongAltitude_t944891001  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::LatLongAltitudeToLocalSpace(Wrld.Space.LatLongAltitude)
extern "C"  Vector3_t3722313464  UnityWorldSpaceCoordinateFrame_LatLongAltitudeToLocalSpace_m1172088342 (UnityWorldSpaceCoordinateFrame_t1382732960 * __this, LatLongAltitude_t944891001  ___latLongAlt0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return ECEFToLocalSpace(latLongAlt.ToECEF());
		// return ECEFToLocalSpace(latLongAlt.ToECEF());
		DoubleVector3_t761704365  L_0 = LatLongAltitude_ToECEF_m3897686018((&___latLongAlt0), /*hidden argument*/NULL);
		// return ECEFToLocalSpace(latLongAlt.ToECEF());
		Vector3_t3722313464  L_1 = UnityWorldSpaceCoordinateFrame_ECEFToLocalSpace_m3518368515(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		Vector3_t3722313464  L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Space.UnityWorldSpaceTransformUpdateStrategy::.ctor(Wrld.Space.UnityWorldSpaceCoordinateFrame,System.Single)
extern "C"  void UnityWorldSpaceTransformUpdateStrategy__ctor_m3308198668 (UnityWorldSpaceTransformUpdateStrategy_t501792395 * __this, UnityWorldSpaceCoordinateFrame_t1382732960 * ___frame0, float ___scale1, const RuntimeMethod* method)
{
	{
		// public UnityWorldSpaceTransformUpdateStrategy(UnityWorldSpaceCoordinateFrame frame, float scale)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_frame = frame;
		UnityWorldSpaceCoordinateFrame_t1382732960 * L_0 = ___frame0;
		__this->set_m_frame_0(L_0);
		// m_flattenScale = scale;
		float L_1 = ___scale1;
		__this->set_m_flattenScale_1(L_1);
		// }
		return;
	}
}
// System.Void Wrld.Space.UnityWorldSpaceTransformUpdateStrategy::UpdateTransform(UnityEngine.Transform,Wrld.Common.Maths.DoubleVector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Boolean)
extern "C"  void UnityWorldSpaceTransformUpdateStrategy_UpdateTransform_m3272805986 (UnityWorldSpaceTransformUpdateStrategy_t501792395 * __this, Transform_t3600365921 * ___objectTransform0, DoubleVector3_t761704365  ___objectOriginECEF1, Vector3_t3722313464  ___translationOffsetECEF2, Quaternion_t2301928331  ___orientationECEF3, float ___heightOffset4, bool ___applyFlattening5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWorldSpaceTransformUpdateStrategy_UpdateTransform_m3272805986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t2301928331  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Quaternion_t2301928331  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Quaternion_t2301928331  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Quaternion_t2301928331  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		// var finalPositionECEF = objectOriginECEF + translationOffsetECEF;
		DoubleVector3_t761704365  L_0 = ___objectOriginECEF1;
		Vector3_t3722313464  L_1 = ___translationOffsetECEF2;
		// var finalPositionECEF = objectOriginECEF + translationOffsetECEF;
		IL2CPP_RUNTIME_CLASS_INIT(DoubleVector3_t761704365_il2cpp_TypeInfo_var);
		DoubleVector3_t761704365  L_2 = DoubleVector3_op_Implicit_m245241895(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// var finalPositionECEF = objectOriginECEF + translationOffsetECEF;
		DoubleVector3_t761704365  L_3 = DoubleVector3_op_Addition_m3339173121(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var resourceUp = m_frame.ECEFToLocalRotation * objectOriginECEF.normalized.ToSingleVector();
		UnityWorldSpaceCoordinateFrame_t1382732960 * L_4 = __this->get_m_frame_0();
		// var resourceUp = m_frame.ECEFToLocalRotation * objectOriginECEF.normalized.ToSingleVector();
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = UnityWorldSpaceCoordinateFrame_get_ECEFToLocalRotation_m1977956869(L_4, /*hidden argument*/NULL);
		// var resourceUp = m_frame.ECEFToLocalRotation * objectOriginECEF.normalized.ToSingleVector();
		DoubleVector3_t761704365  L_6 = DoubleVector3_get_normalized_m277955098((&___objectOriginECEF1), /*hidden argument*/NULL);
		// var resourceUp = m_frame.ECEFToLocalRotation * objectOriginECEF.normalized.ToSingleVector();
		Vector3_t3722313464  L_7 = DoubleVector3Extensions_ToSingleVector_m1142520591(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		// var resourceUp = m_frame.ECEFToLocalRotation * objectOriginECEF.normalized.ToSingleVector();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// var localPosition = m_frame.ECEFToLocalSpace(finalPositionECEF) + Vector3.up * heightOffset;
		UnityWorldSpaceCoordinateFrame_t1382732960 * L_9 = __this->get_m_frame_0();
		DoubleVector3_t761704365  L_10 = V_0;
		// var localPosition = m_frame.ECEFToLocalSpace(finalPositionECEF) + Vector3.up * heightOffset;
		NullCheck(L_9);
		Vector3_t3722313464  L_11 = UnityWorldSpaceCoordinateFrame_ECEFToLocalSpace_m3518368515(L_9, L_10, /*hidden argument*/NULL);
		// var localPosition = m_frame.ECEFToLocalSpace(finalPositionECEF) + Vector3.up * heightOffset;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = ___heightOffset4;
		// var localPosition = m_frame.ECEFToLocalSpace(finalPositionECEF) + Vector3.up * heightOffset;
		Vector3_t3722313464  L_14 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		// var localPosition = m_frame.ECEFToLocalSpace(finalPositionECEF) + Vector3.up * heightOffset;
		Vector3_t3722313464  L_15 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// var localRotation = m_frame.ECEFToLocalRotation * orientationECEF;
		UnityWorldSpaceCoordinateFrame_t1382732960 * L_16 = __this->get_m_frame_0();
		// var localRotation = m_frame.ECEFToLocalRotation * orientationECEF;
		NullCheck(L_16);
		Quaternion_t2301928331  L_17 = UnityWorldSpaceCoordinateFrame_get_ECEFToLocalRotation_m1977956869(L_16, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_18 = ___orientationECEF3;
		// var localRotation = m_frame.ECEFToLocalRotation * orientationECEF;
		Quaternion_t2301928331  L_19 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		// if (applyFlattening && m_flattenScale != 1.0f)
		bool L_20 = ___applyFlattening5;
		if (!L_20)
		{
			goto IL_00be;
		}
	}
	{
		float L_21 = __this->get_m_flattenScale_1();
		if ((((float)L_21) == ((float)(1.0f))))
		{
			goto IL_00be;
		}
	}
	{
		// var resourceToLocal = Quaternion.FromToRotation(resourceUp, Vector3.up);
		Vector3_t3722313464  L_22 = V_1;
		// var resourceToLocal = Quaternion.FromToRotation(resourceUp, Vector3.up);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		// var resourceToLocal = Quaternion.FromToRotation(resourceUp, Vector3.up);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_24 = Quaternion_FromToRotation_m3769621427(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		// var localToResource = Quaternion.Inverse(resourceToLocal);
		Quaternion_t2301928331  L_25 = V_4;
		// var localToResource = Quaternion.Inverse(resourceToLocal);
		Quaternion_t2301928331  L_26 = Quaternion_Inverse_m1311579081(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		// var innerRotation = resourceToLocal * localRotation;
		Quaternion_t2301928331  L_27 = V_4;
		Quaternion_t2301928331  L_28 = V_3;
		// var innerRotation = resourceToLocal * localRotation;
		Quaternion_t2301928331  L_29 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		V_6 = L_29;
		// var scaleVec = new Vector3(1, m_flattenScale, 1);
		float L_30 = __this->get_m_flattenScale_1();
		// var scaleVec = new Vector3(1, m_flattenScale, 1);
		Vector3__ctor_m3353183577((&V_7), (1.0f), L_30, (1.0f), /*hidden argument*/NULL);
		// TransformHelper.ApplyTransform(objectTransform, localPosition, scaleVec, localToResource, innerRotation);
		Transform_t3600365921 * L_31 = ___objectTransform0;
		Vector3_t3722313464  L_32 = V_2;
		Vector3_t3722313464  L_33 = V_7;
		Quaternion_t2301928331  L_34 = V_5;
		Quaternion_t2301928331  L_35 = V_6;
		// TransformHelper.ApplyTransform(objectTransform, localPosition, scaleVec, localToResource, innerRotation);
		TransformHelper_ApplyTransform_m3531692701(NULL /*static, unused*/, L_31, L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00be:
	{
		// TransformHelper.ApplyTransform(objectTransform, localPosition, Vector3.one, localRotation, Quaternion.identity);
		Transform_t3600365921 * L_36 = ___objectTransform0;
		Vector3_t3722313464  L_37 = V_2;
		// TransformHelper.ApplyTransform(objectTransform, localPosition, Vector3.one, localRotation, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_38 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_39 = V_3;
		// TransformHelper.ApplyTransform(objectTransform, localPosition, Vector3.one, localRotation, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_40 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// TransformHelper.ApplyTransform(objectTransform, localPosition, Vector3.one, localRotation, Quaternion.identity);
		TransformHelper_ApplyTransform_m3531692701(NULL /*static, unused*/, L_36, L_37, L_38, L_39, L_40, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Streaming.GameObjectFactory::.ctor(UnityEngine.Transform)
extern "C"  void GameObjectFactory__ctor_m1830047161 (GameObjectFactory_t2478326784 * __this, Transform_t3600365921 * ___parentTransform0, const RuntimeMethod* method)
{
	{
		// public GameObjectFactory(Transform parentTransform)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_parentTransform = parentTransform;
		Transform_t3600365921 * L_0 = ___parentTransform0;
		__this->set_m_parentTransform_0(L_0);
		// }
		return;
	}
}
// System.String Wrld.Streaming.GameObjectFactory::CreateGameObjectName(System.String,System.Int32)
extern "C"  String_t* GameObjectFactory_CreateGameObjectName_m779350472 (RuntimeObject * __this /* static, unused */, String_t* ___baseName0, int32_t ___meshIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectFactory_CreateGameObjectName_m779350472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}_INDEX{1}", baseName, meshIndex);
		String_t* L_0 = ___baseName0;
		int32_t L_1 = ___meshIndex1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		// return string.Format("{0}_INDEX{1}", baseName, meshIndex);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2490343439, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.GameObject Wrld.Streaming.GameObjectFactory::CreateGameObject(UnityEngine.Mesh,UnityEngine.Material,System.String,UnityEngine.Transform,Wrld.Streaming.CollisionStreamingType)
extern "C"  GameObject_t1113636619 * GameObjectFactory_CreateGameObject_m3026154899 (GameObjectFactory_t2478326784 * __this, Mesh_t3648964284 * ___mesh0, Material_t340375123 * ___material1, String_t* ___objectName2, Transform_t3600365921 * ___parentTransform3, int32_t ___collisionType4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectFactory_CreateGameObject_m3026154899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		// var gameObject = new GameObject(objectName);
		String_t* L_0 = ___objectName2;
		// var gameObject = new GameObject(objectName);
		GameObject_t1113636619 * L_1 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// gameObject.SetActive(false);
		GameObject_t1113636619 * L_2 = V_0;
		// gameObject.SetActive(false);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		// gameObject.transform.SetParent(parentTransform, false);
		GameObject_t1113636619 * L_3 = V_0;
		// gameObject.transform.SetParent(parentTransform, false);
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = ___parentTransform3;
		// gameObject.transform.SetParent(parentTransform, false);
		NullCheck(L_4);
		Transform_SetParent_m273471670(L_4, L_5, (bool)0, /*hidden argument*/NULL);
		// gameObject.AddComponent<MeshFilter>().sharedMesh = mesh;
		GameObject_t1113636619 * L_6 = V_0;
		// gameObject.AddComponent<MeshFilter>().sharedMesh = mesh;
		NullCheck(L_6);
		MeshFilter_t3523625662 * L_7 = GameObject_AddComponent_TisMeshFilter_t3523625662_m262607486(L_6, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t3523625662_m262607486_RuntimeMethod_var);
		Mesh_t3648964284 * L_8 = ___mesh0;
		// gameObject.AddComponent<MeshFilter>().sharedMesh = mesh;
		NullCheck(L_7);
		MeshFilter_set_sharedMesh_m2173122548(L_7, L_8, /*hidden argument*/NULL);
		// if (objectName.ToLower().Contains("interior"))
		String_t* L_9 = ___objectName2;
		// if (objectName.ToLower().Contains("interior"))
		NullCheck(L_9);
		String_t* L_10 = String_ToLower_m2029374922(L_9, /*hidden argument*/NULL);
		// if (objectName.ToLower().Contains("interior"))
		NullCheck(L_10);
		bool L_11 = String_Contains_m1147431944(L_10, _stringLiteral1540537748, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// gameObject.AddComponent<MeshRenderer>().sharedMaterial = new Material(material);
		GameObject_t1113636619 * L_12 = V_0;
		// gameObject.AddComponent<MeshRenderer>().sharedMaterial = new Material(material);
		NullCheck(L_12);
		MeshRenderer_t587009260 * L_13 = GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113(L_12, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113_RuntimeMethod_var);
		Material_t340375123 * L_14 = ___material1;
		// gameObject.AddComponent<MeshRenderer>().sharedMaterial = new Material(material);
		Material_t340375123 * L_15 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_15, L_14, /*hidden argument*/NULL);
		// gameObject.AddComponent<MeshRenderer>().sharedMaterial = new Material(material);
		NullCheck(L_13);
		Renderer_set_sharedMaterial_m2374163090(L_13, L_15, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_0056:
	{
		// gameObject.AddComponent<MeshRenderer>().sharedMaterial = material;
		GameObject_t1113636619 * L_16 = V_0;
		// gameObject.AddComponent<MeshRenderer>().sharedMaterial = material;
		NullCheck(L_16);
		MeshRenderer_t587009260 * L_17 = GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113(L_16, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113_RuntimeMethod_var);
		Material_t340375123 * L_18 = ___material1;
		// gameObject.AddComponent<MeshRenderer>().sharedMaterial = material;
		NullCheck(L_17);
		Renderer_set_sharedMaterial_m2374163090(L_17, L_18, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// {
		int32_t L_19 = ___collisionType4;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_20 = ___collisionType4;
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_008b;
		}
	}
	{
		goto IL_00a2;
	}

IL_0079:
	{
		// gameObject.AddComponent<MeshCollider>().sharedMesh = mesh;
		GameObject_t1113636619 * L_21 = V_0;
		// gameObject.AddComponent<MeshCollider>().sharedMesh = mesh;
		NullCheck(L_21);
		MeshCollider_t903564387 * L_22 = GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173(L_21, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173_RuntimeMethod_var);
		Mesh_t3648964284 * L_23 = ___mesh0;
		// gameObject.AddComponent<MeshCollider>().sharedMesh = mesh;
		NullCheck(L_22);
		MeshCollider_set_sharedMesh_m1986498669(L_22, L_23, /*hidden argument*/NULL);
		// break;
		goto IL_00a2;
	}

IL_008b:
	{
		// gameObject.AddComponent<MeshCollider>().sharedMesh = CreateDoubleSidedCollisionMesh(mesh);
		GameObject_t1113636619 * L_24 = V_0;
		// gameObject.AddComponent<MeshCollider>().sharedMesh = CreateDoubleSidedCollisionMesh(mesh);
		NullCheck(L_24);
		MeshCollider_t903564387 * L_25 = GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173(L_24, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173_RuntimeMethod_var);
		Mesh_t3648964284 * L_26 = ___mesh0;
		// gameObject.AddComponent<MeshCollider>().sharedMesh = CreateDoubleSidedCollisionMesh(mesh);
		Mesh_t3648964284 * L_27 = GameObjectFactory_CreateDoubleSidedCollisionMesh_m442641907(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		// gameObject.AddComponent<MeshCollider>().sharedMesh = CreateDoubleSidedCollisionMesh(mesh);
		NullCheck(L_25);
		MeshCollider_set_sharedMesh_m1986498669(L_25, L_27, /*hidden argument*/NULL);
		// break;
		goto IL_00a2;
	}

IL_00a2:
	{
		// return gameObject;
		GameObject_t1113636619 * L_28 = V_0;
		V_1 = L_28;
		goto IL_00a9;
	}

IL_00a9:
	{
		// }
		GameObject_t1113636619 * L_29 = V_1;
		return L_29;
	}
}
// UnityEngine.GameObject[] Wrld.Streaming.GameObjectFactory::CreateGameObjects(UnityEngine.Mesh[],UnityEngine.Material,UnityEngine.Transform,Wrld.Streaming.CollisionStreamingType)
extern "C"  GameObjectU5BU5D_t3328599146* GameObjectFactory_CreateGameObjects_m3856069314 (GameObjectFactory_t2478326784 * __this, MeshU5BU5D_t3972987605* ___meshes0, Material_t340375123 * ___material1, Transform_t3600365921 * ___parentTransform2, int32_t ___collisionType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectFactory_CreateGameObjects_m3856069314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3328599146* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	GameObjectU5BU5D_t3328599146* V_3 = NULL;
	{
		// var gameObjects = new GameObject[meshes.Length];
		MeshU5BU5D_t3972987605* L_0 = ___meshes0;
		NullCheck(L_0);
		V_0 = ((GameObjectU5BU5D_t3328599146*)SZArrayNew(GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		// for (int meshIndex = 0; meshIndex < meshes.Length; ++meshIndex)
		V_1 = 0;
		goto IL_0037;
	}

IL_0011:
	{
		// var name = CreateGameObjectName(meshes[meshIndex].name, meshIndex);
		MeshU5BU5D_t3972987605* L_1 = ___meshes0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t3648964284 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var name = CreateGameObjectName(meshes[meshIndex].name, meshIndex);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m4211327027(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		// var name = CreateGameObjectName(meshes[meshIndex].name, meshIndex);
		String_t* L_7 = GameObjectFactory_CreateGameObjectName_m779350472(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// gameObjects[meshIndex] = CreateGameObject(meshes[meshIndex], material, name, parentTransform, collisionType);
		GameObjectU5BU5D_t3328599146* L_8 = V_0;
		int32_t L_9 = V_1;
		MeshU5BU5D_t3972987605* L_10 = ___meshes0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Mesh_t3648964284 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Material_t340375123 * L_14 = ___material1;
		String_t* L_15 = V_2;
		Transform_t3600365921 * L_16 = ___parentTransform2;
		int32_t L_17 = ___collisionType3;
		// gameObjects[meshIndex] = CreateGameObject(meshes[meshIndex], material, name, parentTransform, collisionType);
		GameObject_t1113636619 * L_18 = GameObjectFactory_CreateGameObject_m3026154899(__this, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_18);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (GameObject_t1113636619 *)L_18);
		// for (int meshIndex = 0; meshIndex < meshes.Length; ++meshIndex)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0037:
	{
		// for (int meshIndex = 0; meshIndex < meshes.Length; ++meshIndex)
		int32_t L_20 = V_1;
		MeshU5BU5D_t3972987605* L_21 = ___meshes0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		// return gameObjects;
		GameObjectU5BU5D_t3328599146* L_22 = V_0;
		V_3 = L_22;
		goto IL_0047;
	}

IL_0047:
	{
		// }
		GameObjectU5BU5D_t3328599146* L_23 = V_3;
		return L_23;
	}
}
// UnityEngine.Mesh Wrld.Streaming.GameObjectFactory::CreateDoubleSidedCollisionMesh(UnityEngine.Mesh)
extern "C"  Mesh_t3648964284 * GameObjectFactory_CreateDoubleSidedCollisionMesh_m442641907 (RuntimeObject * __this /* static, unused */, Mesh_t3648964284 * ___sourceMesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectFactory_CreateDoubleSidedCollisionMesh_m442641907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t3648964284 * V_0 = NULL;
	Int32U5BU5D_t385246372* V_1 = NULL;
	int32_t V_2 = 0;
	Int32U5BU5D_t385246372* V_3 = NULL;
	int32_t V_4 = 0;
	Mesh_t3648964284 * V_5 = NULL;
	{
		// Mesh mesh = new Mesh();
		Mesh_t3648964284 * L_0 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// mesh.name = sourceMesh.name;
		Mesh_t3648964284 * L_1 = V_0;
		Mesh_t3648964284 * L_2 = ___sourceMesh0;
		// mesh.name = sourceMesh.name;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m4211327027(L_2, /*hidden argument*/NULL);
		// mesh.name = sourceMesh.name;
		NullCheck(L_1);
		Object_set_name_m291480324(L_1, L_3, /*hidden argument*/NULL);
		// mesh.vertices = sourceMesh.vertices;
		Mesh_t3648964284 * L_4 = V_0;
		Mesh_t3648964284 * L_5 = ___sourceMesh0;
		// mesh.vertices = sourceMesh.vertices;
		NullCheck(L_5);
		Vector3U5BU5D_t1718750761* L_6 = Mesh_get_vertices_m3585684815(L_5, /*hidden argument*/NULL);
		// mesh.vertices = sourceMesh.vertices;
		NullCheck(L_4);
		Mesh_set_vertices_m2084450642(L_4, L_6, /*hidden argument*/NULL);
		// int[] sourceTriangles = sourceMesh.triangles;
		Mesh_t3648964284 * L_7 = ___sourceMesh0;
		// int[] sourceTriangles = sourceMesh.triangles;
		NullCheck(L_7);
		Int32U5BU5D_t385246372* L_8 = Mesh_get_triangles_m3059934743(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// int triangleCount = sourceTriangles.Length;
		Int32U5BU5D_t385246372* L_9 = V_1;
		NullCheck(L_9);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))));
		// int[] triangles = new int[triangleCount * 2];
		int32_t L_10 = V_2;
		V_3 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2))));
		// for (int index=0; index<triangleCount; index += 3)
		V_4 = 0;
		goto IL_0089;
	}

IL_003b:
	{
		// triangles[index+0] = sourceTriangles[index+0];
		Int32U5BU5D_t385246372* L_11 = V_3;
		int32_t L_12 = V_4;
		Int32U5BU5D_t385246372* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_16);
		// triangles[index+1] = sourceTriangles[index+1];
		Int32U5BU5D_t385246372* L_17 = V_3;
		int32_t L_18 = V_4;
		Int32U5BU5D_t385246372* L_19 = V_1;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1))), (int32_t)L_22);
		// triangles[index+2] = sourceTriangles[index+2];
		Int32U5BU5D_t385246372* L_23 = V_3;
		int32_t L_24 = V_4;
		Int32U5BU5D_t385246372* L_25 = V_1;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)2));
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2))), (int32_t)L_28);
		// triangles[triangleCount + index + 0] = sourceTriangles[index+0];
		Int32U5BU5D_t385246372* L_29 = V_3;
		int32_t L_30 = V_2;
		int32_t L_31 = V_4;
		Int32U5BU5D_t385246372* L_32 = V_1;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31))), (int32_t)L_35);
		// triangles[triangleCount + index + 1] = sourceTriangles[index+2];
		Int32U5BU5D_t385246372* L_36 = V_3;
		int32_t L_37 = V_2;
		int32_t L_38 = V_4;
		Int32U5BU5D_t385246372* L_39 = V_1;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)2));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)), (int32_t)1))), (int32_t)L_42);
		// triangles[triangleCount + index + 2] = sourceTriangles[index+1];
		Int32U5BU5D_t385246372* L_43 = V_3;
		int32_t L_44 = V_2;
		int32_t L_45 = V_4;
		Int32U5BU5D_t385246372* L_46 = V_1;
		int32_t L_47 = V_4;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45)), (int32_t)2))), (int32_t)L_49);
		// for (int index=0; index<triangleCount; index += 3)
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)3));
	}

IL_0089:
	{
		// for (int index=0; index<triangleCount; index += 3)
		int32_t L_51 = V_4;
		int32_t L_52 = V_2;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_003b;
		}
	}
	{
		// mesh.triangles = triangles;
		Mesh_t3648964284 * L_53 = V_0;
		Int32U5BU5D_t385246372* L_54 = V_3;
		// mesh.triangles = triangles;
		NullCheck(L_53);
		Mesh_set_triangles_m255556250(L_53, L_54, /*hidden argument*/NULL);
		// return mesh;
		Mesh_t3648964284 * L_55 = V_0;
		V_5 = L_55;
		goto IL_00a0;
	}

IL_00a0:
	{
		// }
		Mesh_t3648964284 * L_56 = V_5;
		return L_56;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Streaming.GameObjectRecord::.ctor()
extern "C"  void GameObjectRecord__ctor_m979568528 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Wrld.Common.Maths.DoubleVector3 Wrld.Streaming.GameObjectRecord::get_OriginECEF()
extern "C"  DoubleVector3_t761704365  GameObjectRecord_get_OriginECEF_m4169325908 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method)
{
	DoubleVector3_t761704365  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public DoubleVector3 OriginECEF { get; set; }
		DoubleVector3_t761704365  L_0 = __this->get_U3COriginECEFU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		DoubleVector3_t761704365  L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Streaming.GameObjectRecord::set_OriginECEF(Wrld.Common.Maths.DoubleVector3)
extern "C"  void GameObjectRecord_set_OriginECEF_m20611134 (GameObjectRecord_t2871914821 * __this, DoubleVector3_t761704365  ___value0, const RuntimeMethod* method)
{
	{
		// public DoubleVector3 OriginECEF { get; set; }
		DoubleVector3_t761704365  L_0 = ___value0;
		__this->set_U3COriginECEFU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Quaternion Wrld.Streaming.GameObjectRecord::get_OrientationECEF()
extern "C"  Quaternion_t2301928331  GameObjectRecord_get_OrientationECEF_m505436636 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public Quaternion OrientationECEF { get; set; }
		Quaternion_t2301928331  L_0 = __this->get_U3COrientationECEFU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Quaternion_t2301928331  L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Streaming.GameObjectRecord::set_OrientationECEF(UnityEngine.Quaternion)
extern "C"  void GameObjectRecord_set_OrientationECEF_m2643822069 (GameObjectRecord_t2871914821 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion OrientationECEF { get; set; }
		Quaternion_t2301928331  L_0 = ___value0;
		__this->set_U3COrientationECEFU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Vector3 Wrld.Streaming.GameObjectRecord::get_TranslationOffsetECEF()
extern "C"  Vector3_t3722313464  GameObjectRecord_get_TranslationOffsetECEF_m297893326 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public Vector3 TranslationOffsetECEF { get; set; }
		Vector3_t3722313464  L_0 = __this->get_U3CTranslationOffsetECEFU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Streaming.GameObjectRecord::set_TranslationOffsetECEF(UnityEngine.Vector3)
extern "C"  void GameObjectRecord_set_TranslationOffsetECEF_m2354121186 (GameObjectRecord_t2871914821 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 TranslationOffsetECEF { get; set; }
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CTranslationOffsetECEFU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.GameObject Wrld.Streaming.GameObjectRecord::get_RootGameObject()
extern "C"  GameObject_t1113636619 * GameObjectRecord_get_RootGameObject_m4027813460 (GameObjectRecord_t2871914821 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		// public GameObject RootGameObject { get; set; }
		GameObject_t1113636619 * L_0 = __this->get_U3CRootGameObjectU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		GameObject_t1113636619 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Streaming.GameObjectRecord::set_RootGameObject(UnityEngine.GameObject)
extern "C"  void GameObjectRecord_set_RootGameObject_m3108814383 (GameObjectRecord_t2871914821 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject RootGameObject { get; set; }
		GameObject_t1113636619 * L_0 = ___value0;
		__this->set_U3CRootGameObjectU3Ek__BackingField_3(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Streaming.GameObjectRepository::.ctor(System.String,UnityEngine.Transform,Wrld.Materials.MaterialRepository,System.Boolean)
extern "C"  void GameObjectRepository__ctor_m3567348473 (GameObjectRepository_t3760691595 * __this, String_t* ___rootName0, Transform_t3600365921 * ___parentForStreamedObjects1, MaterialRepository_t701520604 * ___materialRepository2, bool ___applyFlattening3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectRepository__ctor_m3567348473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, GameObjectRecord> m_gameObjectsById = new Dictionary<string, GameObjectRecord>();
		// private Dictionary<string, GameObjectRecord> m_gameObjectsById = new Dictionary<string, GameObjectRecord>();
		Dictionary_2_t2657171120 * L_0 = (Dictionary_2_t2657171120 *)il2cpp_codegen_object_new(Dictionary_2_t2657171120_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2592226818(L_0, /*hidden argument*/Dictionary_2__ctor_m2592226818_RuntimeMethod_var);
		__this->set_m_gameObjectsById_0(L_0);
		// public GameObjectRepository(string rootName, Transform parentForStreamedObjects, MaterialRepository materialRepository, bool applyFlattening)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_root = new GameObject(rootName);
		String_t* L_1 = ___rootName0;
		// m_root = new GameObject(rootName);
		GameObject_t1113636619 * L_2 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_2, L_1, /*hidden argument*/NULL);
		__this->set_m_root_1(L_2);
		// m_root.transform.SetParent(parentForStreamedObjects, false);
		GameObject_t1113636619 * L_3 = __this->get_m_root_1();
		// m_root.transform.SetParent(parentForStreamedObjects, false);
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = ___parentForStreamedObjects1;
		// m_root.transform.SetParent(parentForStreamedObjects, false);
		NullCheck(L_4);
		Transform_SetParent_m273471670(L_4, L_5, (bool)0, /*hidden argument*/NULL);
		// m_materialRepository = materialRepository;
		MaterialRepository_t701520604 * L_6 = ___materialRepository2;
		__this->set_m_materialRepository_2(L_6);
		// m_applyFlattening = applyFlattening;
		bool L_7 = ___applyFlattening3;
		__this->set_m_applyFlattening_3(L_7);
		// }
		return;
	}
}
// UnityEngine.GameObject Wrld.Streaming.GameObjectRepository::get_Root()
extern "C"  GameObject_t1113636619 * GameObjectRepository_get_Root_m815556018 (GameObjectRepository_t3760691595 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		// public GameObject Root { get { return m_root; } }
		GameObject_t1113636619 * L_0 = __this->get_m_root_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public GameObject Root { get { return m_root; } }
		GameObject_t1113636619 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Wrld.Streaming.GameObjectRepository::Add(System.String,Wrld.Common.Maths.DoubleVector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.GameObject)
extern "C"  void GameObjectRepository_Add_m985221079 (GameObjectRepository_t3760691595 * __this, String_t* ___id0, DoubleVector3_t761704365  ___originECEF1, Vector3_t3722313464  ___translationOffsetECEF2, Quaternion_t2301928331  ___orientationECEF3, GameObject_t1113636619 * ___rootGameObject4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectRepository_Add_m985221079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectRecord_t2871914821 * V_0 = NULL;
	GameObjectRecord_t2871914821 * V_1 = NULL;
	{
		// if (Contains(id))
		String_t* L_0 = ___id0;
		// if (Contains(id))
		bool L_1 = GameObjectRepository_Contains_m502542647(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return; // :TODO: fix
		goto IL_0046;
	}

IL_0013:
	{
		// var record = new GameObjectRecord { OriginECEF = originECEF, TranslationOffsetECEF = translationOffsetECEF, OrientationECEF = orientationECEF, RootGameObject = rootGameObject };
		GameObjectRecord_t2871914821 * L_2 = (GameObjectRecord_t2871914821 *)il2cpp_codegen_object_new(GameObjectRecord_t2871914821_il2cpp_TypeInfo_var);
		GameObjectRecord__ctor_m979568528(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// var record = new GameObjectRecord { OriginECEF = originECEF, TranslationOffsetECEF = translationOffsetECEF, OrientationECEF = orientationECEF, RootGameObject = rootGameObject };
		GameObjectRecord_t2871914821 * L_3 = V_1;
		DoubleVector3_t761704365  L_4 = ___originECEF1;
		// var record = new GameObjectRecord { OriginECEF = originECEF, TranslationOffsetECEF = translationOffsetECEF, OrientationECEF = orientationECEF, RootGameObject = rootGameObject };
		NullCheck(L_3);
		GameObjectRecord_set_OriginECEF_m20611134(L_3, L_4, /*hidden argument*/NULL);
		// var record = new GameObjectRecord { OriginECEF = originECEF, TranslationOffsetECEF = translationOffsetECEF, OrientationECEF = orientationECEF, RootGameObject = rootGameObject };
		GameObjectRecord_t2871914821 * L_5 = V_1;
		Vector3_t3722313464  L_6 = ___translationOffsetECEF2;
		// var record = new GameObjectRecord { OriginECEF = originECEF, TranslationOffsetECEF = translationOffsetECEF, OrientationECEF = orientationECEF, RootGameObject = rootGameObject };
		NullCheck(L_5);
		GameObjectRecord_set_TranslationOffsetECEF_m2354121186(L_5, L_6, /*hidden argument*/NULL);
		// var record = new GameObjectRecord { OriginECEF = originECEF, TranslationOffsetECEF = translationOffsetECEF, OrientationECEF = orientationECEF, RootGameObject = rootGameObject };
		GameObjectRecord_t2871914821 * L_7 = V_1;
		Quaternion_t2301928331  L_8 = ___orientationECEF3;
		// var record = new GameObjectRecord { OriginECEF = originECEF, TranslationOffsetECEF = translationOffsetECEF, OrientationECEF = orientationECEF, RootGameObject = rootGameObject };
		NullCheck(L_7);
		GameObjectRecord_set_OrientationECEF_m2643822069(L_7, L_8, /*hidden argument*/NULL);
		// var record = new GameObjectRecord { OriginECEF = originECEF, TranslationOffsetECEF = translationOffsetECEF, OrientationECEF = orientationECEF, RootGameObject = rootGameObject };
		GameObjectRecord_t2871914821 * L_9 = V_1;
		GameObject_t1113636619 * L_10 = ___rootGameObject4;
		// var record = new GameObjectRecord { OriginECEF = originECEF, TranslationOffsetECEF = translationOffsetECEF, OrientationECEF = orientationECEF, RootGameObject = rootGameObject };
		NullCheck(L_9);
		GameObjectRecord_set_RootGameObject_m3108814383(L_9, L_10, /*hidden argument*/NULL);
		GameObjectRecord_t2871914821 * L_11 = V_1;
		V_0 = L_11;
		// m_gameObjectsById.Add(id, record);
		Dictionary_2_t2657171120 * L_12 = __this->get_m_gameObjectsById_0();
		String_t* L_13 = ___id0;
		GameObjectRecord_t2871914821 * L_14 = V_0;
		// m_gameObjectsById.Add(id, record);
		NullCheck(L_12);
		Dictionary_2_Add_m820329418(L_12, L_13, L_14, /*hidden argument*/Dictionary_2_Add_m820329418_RuntimeMethod_var);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Boolean Wrld.Streaming.GameObjectRepository::Contains(System.String)
extern "C"  bool GameObjectRepository_Contains_m502542647 (GameObjectRepository_t3760691595 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectRepository_Contains_m502542647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return m_gameObjectsById.ContainsKey(id);
		Dictionary_2_t2657171120 * L_0 = __this->get_m_gameObjectsById_0();
		String_t* L_1 = ___id0;
		// return m_gameObjectsById.ContainsKey(id);
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m2896692998(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2896692998_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Wrld.Streaming.GameObjectRepository::DestroyGameObject(UnityEngine.GameObject)
extern "C"  void GameObjectRepository_DestroyGameObject_m1658238485 (GameObjectRepository_t3760691595 * __this, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectRepository_DestroyGameObject_m1658238485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_t3600365921 * V_2 = NULL;
	MeshFilter_t3523625662 * V_3 = NULL;
	MeshRenderer_t587009260 * V_4 = NULL;
	Material_t340375123 * V_5 = NULL;
	{
		// int childCount = gameObject.transform.childCount;
		GameObject_t1113636619 * L_0 = ___gameObject0;
		// int childCount = gameObject.transform.childCount;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		// int childCount = gameObject.transform.childCount;
		NullCheck(L_1);
		int32_t L_2 = Transform_get_childCount_m3145433196(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// for (int childIndex = 0; childIndex < childCount; ++childIndex)
		V_1 = 0;
		goto IL_0033;
	}

IL_0014:
	{
		// var child = gameObject.transform.GetChild(childIndex);
		GameObject_t1113636619 * L_3 = ___gameObject0;
		// var child = gameObject.transform.GetChild(childIndex);
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		// var child = gameObject.transform.GetChild(childIndex);
		NullCheck(L_4);
		Transform_t3600365921 * L_6 = Transform_GetChild_m1092972975(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// DestroyGameObject(child.gameObject);
		Transform_t3600365921 * L_7 = V_2;
		// DestroyGameObject(child.gameObject);
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		// DestroyGameObject(child.gameObject);
		GameObjectRepository_DestroyGameObject_m1658238485(__this, L_8, /*hidden argument*/NULL);
		// for (int childIndex = 0; childIndex < childCount; ++childIndex)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0033:
	{
		// for (int childIndex = 0; childIndex < childCount; ++childIndex)
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0014;
		}
	}
	{
		// gameObject.transform.DetachChildren();
		GameObject_t1113636619 * L_12 = ___gameObject0;
		// gameObject.transform.DetachChildren();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		// gameObject.transform.DetachChildren();
		NullCheck(L_13);
		Transform_DetachChildren_m3266231651(L_13, /*hidden argument*/NULL);
		// var mesh = gameObject.GetComponent<MeshFilter>();
		GameObject_t1113636619 * L_14 = ___gameObject0;
		// var mesh = gameObject.GetComponent<MeshFilter>();
		NullCheck(L_14);
		MeshFilter_t3523625662 * L_15 = GameObject_GetComponent_TisMeshFilter_t3523625662_m3102725183(L_14, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t3523625662_m3102725183_RuntimeMethod_var);
		V_3 = L_15;
		// if (mesh != null)
		MeshFilter_t3523625662 * L_16 = V_3;
		// if (mesh != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		// GameObject.DestroyImmediate(mesh.sharedMesh);
		MeshFilter_t3523625662 * L_18 = V_3;
		// GameObject.DestroyImmediate(mesh.sharedMesh);
		NullCheck(L_18);
		Mesh_t3648964284 * L_19 = MeshFilter_get_sharedMesh_m1726897210(L_18, /*hidden argument*/NULL);
		// GameObject.DestroyImmediate(mesh.sharedMesh);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// var meshRenderer = gameObject.GetComponent<MeshRenderer>();
		GameObject_t1113636619 * L_20 = ___gameObject0;
		// var meshRenderer = gameObject.GetComponent<MeshRenderer>();
		NullCheck(L_20);
		MeshRenderer_t587009260 * L_21 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_20, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		V_4 = L_21;
		// if (meshRenderer != null)
		MeshRenderer_t587009260 * L_22 = V_4;
		// if (meshRenderer != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_22, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00a6;
		}
	}
	{
		// var material = meshRenderer.sharedMaterial;
		MeshRenderer_t587009260 * L_24 = V_4;
		// var material = meshRenderer.sharedMaterial;
		NullCheck(L_24);
		Material_t340375123 * L_25 = Renderer_get_sharedMaterial_m1936632411(L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		// if (material != null)
		Material_t340375123 * L_26 = V_5;
		// if (material != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_26, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00a5;
		}
	}
	{
		// m_materialRepository.ReleaseMaterial(material.name);
		MaterialRepository_t701520604 * L_28 = __this->get_m_materialRepository_2();
		Material_t340375123 * L_29 = V_5;
		// m_materialRepository.ReleaseMaterial(material.name);
		NullCheck(L_29);
		String_t* L_30 = Object_get_name_m4211327027(L_29, /*hidden argument*/NULL);
		// m_materialRepository.ReleaseMaterial(material.name);
		NullCheck(L_28);
		MaterialRepository_ReleaseMaterial_m1289739415(L_28, L_30, /*hidden argument*/NULL);
	}

IL_00a5:
	{
	}

IL_00a6:
	{
		// GameObject.DestroyImmediate(gameObject);
		GameObject_t1113636619 * L_31 = ___gameObject0;
		// GameObject.DestroyImmediate(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Wrld.Streaming.GameObjectRepository::Remove(System.String)
extern "C"  bool GameObjectRepository_Remove_m1283273531 (GameObjectRepository_t3760691595 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectRepository_Remove_m1283273531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectRecord_t2871914821 * V_0 = NULL;
	bool V_1 = false;
	{
		// if (m_gameObjectsById.TryGetValue(id, out value))
		Dictionary_2_t2657171120 * L_0 = __this->get_m_gameObjectsById_0();
		String_t* L_1 = ___id0;
		// if (m_gameObjectsById.TryGetValue(id, out value))
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m1207034816(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1207034816_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// m_gameObjectsById.Remove(id);
		Dictionary_2_t2657171120 * L_3 = __this->get_m_gameObjectsById_0();
		String_t* L_4 = ___id0;
		// m_gameObjectsById.Remove(id);
		NullCheck(L_3);
		Dictionary_2_Remove_m2695770459(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m2695770459_RuntimeMethod_var);
		// DestroyGameObject(value.RootGameObject);
		GameObjectRecord_t2871914821 * L_5 = V_0;
		// DestroyGameObject(value.RootGameObject);
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = GameObjectRecord_get_RootGameObject_m4027813460(L_5, /*hidden argument*/NULL);
		// DestroyGameObject(value.RootGameObject);
		GameObjectRepository_DestroyGameObject_m1658238485(__this, L_6, /*hidden argument*/NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_003c;
	}

IL_0035:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void Wrld.Streaming.GameObjectRepository::UpdateTransforms(Wrld.Space.ITransformUpdateStrategy,System.Single)
extern "C"  void GameObjectRepository_UpdateTransforms_m334866038 (GameObjectRepository_t3760691595 * __this, RuntimeObject* ___transformUpdateStrategy0, float ___heightOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectRepository_UpdateTransforms_m334866038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectRecord_t2871914821 * V_0 = NULL;
	Enumerator_t3226064777  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// foreach (var record in m_gameObjectsById.Values)
		Dictionary_2_t2657171120 * L_0 = __this->get_m_gameObjectsById_0();
		// foreach (var record in m_gameObjectsById.Values)
		NullCheck(L_0);
		ValueCollection_t78248142 * L_1 = Dictionary_2_get_Values_m1239576671(L_0, /*hidden argument*/Dictionary_2_get_Values_m1239576671_RuntimeMethod_var);
		// foreach (var record in m_gameObjectsById.Values)
		NullCheck(L_1);
		Enumerator_t3226064777  L_2 = ValueCollection_GetEnumerator_m3665573136(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m3665573136_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0018:
		{
			// foreach (var record in m_gameObjectsById.Values)
			// foreach (var record in m_gameObjectsById.Values)
			GameObjectRecord_t2871914821 * L_3 = Enumerator_get_Current_m3322199052((&V_1), /*hidden argument*/Enumerator_get_Current_m3322199052_RuntimeMethod_var);
			V_0 = L_3;
			// transformUpdateStrategy.UpdateTransform(record.RootGameObject.transform, record.OriginECEF, record.TranslationOffsetECEF, record.OrientationECEF, heightOffset, m_applyFlattening);
			RuntimeObject* L_4 = ___transformUpdateStrategy0;
			GameObjectRecord_t2871914821 * L_5 = V_0;
			// transformUpdateStrategy.UpdateTransform(record.RootGameObject.transform, record.OriginECEF, record.TranslationOffsetECEF, record.OrientationECEF, heightOffset, m_applyFlattening);
			NullCheck(L_5);
			GameObject_t1113636619 * L_6 = GameObjectRecord_get_RootGameObject_m4027813460(L_5, /*hidden argument*/NULL);
			// transformUpdateStrategy.UpdateTransform(record.RootGameObject.transform, record.OriginECEF, record.TranslationOffsetECEF, record.OrientationECEF, heightOffset, m_applyFlattening);
			NullCheck(L_6);
			Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
			GameObjectRecord_t2871914821 * L_8 = V_0;
			// transformUpdateStrategy.UpdateTransform(record.RootGameObject.transform, record.OriginECEF, record.TranslationOffsetECEF, record.OrientationECEF, heightOffset, m_applyFlattening);
			NullCheck(L_8);
			DoubleVector3_t761704365  L_9 = GameObjectRecord_get_OriginECEF_m4169325908(L_8, /*hidden argument*/NULL);
			GameObjectRecord_t2871914821 * L_10 = V_0;
			// transformUpdateStrategy.UpdateTransform(record.RootGameObject.transform, record.OriginECEF, record.TranslationOffsetECEF, record.OrientationECEF, heightOffset, m_applyFlattening);
			NullCheck(L_10);
			Vector3_t3722313464  L_11 = GameObjectRecord_get_TranslationOffsetECEF_m297893326(L_10, /*hidden argument*/NULL);
			GameObjectRecord_t2871914821 * L_12 = V_0;
			// transformUpdateStrategy.UpdateTransform(record.RootGameObject.transform, record.OriginECEF, record.TranslationOffsetECEF, record.OrientationECEF, heightOffset, m_applyFlattening);
			NullCheck(L_12);
			Quaternion_t2301928331  L_13 = GameObjectRecord_get_OrientationECEF_m505436636(L_12, /*hidden argument*/NULL);
			float L_14 = ___heightOffset1;
			bool L_15 = __this->get_m_applyFlattening_3();
			// transformUpdateStrategy.UpdateTransform(record.RootGameObject.transform, record.OriginECEF, record.TranslationOffsetECEF, record.OrientationECEF, heightOffset, m_applyFlattening);
			NullCheck(L_4);
			InterfaceActionInvoker6< Transform_t3600365921 *, DoubleVector3_t761704365 , Vector3_t3722313464 , Quaternion_t2301928331 , float, bool >::Invoke(0 /* System.Void Wrld.Space.ITransformUpdateStrategy::UpdateTransform(UnityEngine.Transform,Wrld.Common.Maths.DoubleVector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Boolean) */, ITransformUpdateStrategy_t2466850383_il2cpp_TypeInfo_var, L_4, L_7, L_9, L_11, L_13, L_14, L_15);
		}

IL_004c:
		{
			// foreach (var record in m_gameObjectsById.Values)
			bool L_16 = Enumerator_MoveNext_m2094685146((&V_1), /*hidden argument*/Enumerator_MoveNext_m2094685146_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0018;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		// foreach (var record in m_gameObjectsById.Values)
		Enumerator_Dispose_m4161287529((&V_1), /*hidden argument*/Enumerator_Dispose_m4161287529_RuntimeMethod_var);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006b:
	{
		// }
		return;
	}
}
// Wrld.Streaming.GameObjectRecord Wrld.Streaming.GameObjectRepository::GetObjectRecord(System.String)
extern "C"  GameObjectRecord_t2871914821 * GameObjectRepository_GetObjectRecord_m1518046775 (GameObjectRepository_t3760691595 * __this, String_t* ___objectID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectRepository_GetObjectRecord_m1518046775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectRecord_t2871914821 * V_0 = NULL;
	GameObjectRecord_t2871914821 * V_1 = NULL;
	{
		// if (m_gameObjectsById.TryGetValue(objectID, out record))
		Dictionary_2_t2657171120 * L_0 = __this->get_m_gameObjectsById_0();
		String_t* L_1 = ___objectID0;
		// if (m_gameObjectsById.TryGetValue(objectID, out record))
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m1207034816(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1207034816_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return record;
		GameObjectRecord_t2871914821 * L_3 = V_0;
		V_1 = L_3;
		goto IL_0023;
	}

IL_001c:
	{
		// return null;
		V_1 = (GameObjectRecord_t2871914821 *)NULL;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		GameObjectRecord_t2871914821 * L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Wrld.Streaming.GameObjectRepository::TryGetGameObject(System.String,UnityEngine.GameObject&)
extern "C"  bool GameObjectRepository_TryGetGameObject_m1271184210 (GameObjectRepository_t3760691595 * __this, String_t* ___objectID0, GameObject_t1113636619 ** ___gameObject1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectRepository_TryGetGameObject_m1271184210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectRecord_t2871914821 * V_0 = NULL;
	bool V_1 = false;
	{
		// GameObjectRecord record = GetObjectRecord(objectID);
		String_t* L_0 = ___objectID0;
		// GameObjectRecord record = GetObjectRecord(objectID);
		GameObjectRecord_t2871914821 * L_1 = GameObjectRepository_GetObjectRecord_m1518046775(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (record != null)
		GameObjectRecord_t2871914821 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// gameObject = record.RootGameObject;
		GameObject_t1113636619 ** L_3 = ___gameObject1;
		GameObjectRecord_t2871914821 * L_4 = V_0;
		// gameObject = record.RootGameObject;
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = GameObjectRecord_get_RootGameObject_m4027813460(L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)L_5);
		// return true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_001f:
	{
		// Debug.LogFormat("Failed to get objects with id {0}", objectID);
		ObjectU5BU5D_t2843939325* L_6 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_7 = ___objectID0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		// Debug.LogFormat("Failed to get objects with id {0}", objectID);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral1891609748, L_6, /*hidden argument*/NULL);
		// gameObject = null;
		GameObject_t1113636619 ** L_8 = ___gameObject1;
		*((RuntimeObject **)(L_8)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_8), (RuntimeObject *)NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Streaming.GameObjectStreamer::.ctor(System.String,Wrld.Materials.MaterialRepository,UnityEngine.Transform,Wrld.Streaming.CollisionStreamingType,System.Boolean)
extern "C"  void GameObjectStreamer__ctor_m1631410861 (GameObjectStreamer_t3452608707 * __this, String_t* ___rootObjectName0, MaterialRepository_t701520604 * ___materialRepository1, Transform_t3600365921 * ___parentForStreamedObjects2, int32_t ___collisions3, bool ___supportsFlattening4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectStreamer__ctor_m1631410861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObjectStreamer(string rootObjectName, MaterialRepository materialRepository, Transform parentForStreamedObjects, CollisionStreamingType collisions, bool supportsFlattening)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_materialRepository = materialRepository;
		MaterialRepository_t701520604 * L_0 = ___materialRepository1;
		__this->set_m_materialRepository_1(L_0);
		// m_parentForStreamedObjects = parentForStreamedObjects;
		Transform_t3600365921 * L_1 = ___parentForStreamedObjects2;
		__this->set_m_parentForStreamedObjects_3(L_1);
		// m_gameObjectRepository = new GameObjectRepository(rootObjectName, parentForStreamedObjects, materialRepository, supportsFlattening);
		String_t* L_2 = ___rootObjectName0;
		Transform_t3600365921 * L_3 = ___parentForStreamedObjects2;
		MaterialRepository_t701520604 * L_4 = ___materialRepository1;
		bool L_5 = ___supportsFlattening4;
		// m_gameObjectRepository = new GameObjectRepository(rootObjectName, parentForStreamedObjects, materialRepository, supportsFlattening);
		GameObjectRepository_t3760691595 * L_6 = (GameObjectRepository_t3760691595 *)il2cpp_codegen_object_new(GameObjectRepository_t3760691595_il2cpp_TypeInfo_var);
		GameObjectRepository__ctor_m3567348473(L_6, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set_m_gameObjectRepository_0(L_6);
		// m_gameObjectCreator = new GameObjectFactory(m_gameObjectRepository.Root.transform);
		GameObjectRepository_t3760691595 * L_7 = __this->get_m_gameObjectRepository_0();
		// m_gameObjectCreator = new GameObjectFactory(m_gameObjectRepository.Root.transform);
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = GameObjectRepository_get_Root_m815556018(L_7, /*hidden argument*/NULL);
		// m_gameObjectCreator = new GameObjectFactory(m_gameObjectRepository.Root.transform);
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		// m_gameObjectCreator = new GameObjectFactory(m_gameObjectRepository.Root.transform);
		GameObjectFactory_t2478326784 * L_10 = (GameObjectFactory_t2478326784 *)il2cpp_codegen_object_new(GameObjectFactory_t2478326784_il2cpp_TypeInfo_var);
		GameObjectFactory__ctor_m1830047161(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_gameObjectCreator_2(L_10);
		// m_collisions = collisions;
		int32_t L_11 = ___collisions3;
		__this->set_m_collisions_4(L_11);
		// }
		return;
	}
}
// System.Void Wrld.Streaming.GameObjectStreamer::Destroy()
extern "C"  void GameObjectStreamer_Destroy_m2619727865 (GameObjectStreamer_t3452608707 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectStreamer_Destroy_m2619727865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object.Destroy(m_gameObjectRepository.Root);
		GameObjectRepository_t3760691595 * L_0 = __this->get_m_gameObjectRepository_0();
		// Object.Destroy(m_gameObjectRepository.Root);
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = GameObjectRepository_get_Root_m815556018(L_0, /*hidden argument*/NULL);
		// Object.Destroy(m_gameObjectRepository.Root);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject[] Wrld.Streaming.GameObjectStreamer::AddObjectsForMeshes(System.String,UnityEngine.Mesh[],Wrld.Common.Maths.DoubleVector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.String)
extern "C"  GameObjectU5BU5D_t3328599146* GameObjectStreamer_AddObjectsForMeshes_m3591439113 (GameObjectStreamer_t3452608707 * __this, String_t* ___objectID0, MeshU5BU5D_t3972987605* ___meshes1, DoubleVector3_t761704365  ___originECEF2, Vector3_t3722313464  ___translationOffsetECEF3, Quaternion_t2301928331  ___rotationECEF4, String_t* ___materialName5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectStreamer_AddObjectsForMeshes_m3591439113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3328599146* V_0 = NULL;
	Material_t340375123 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	GameObjectU5BU5D_t3328599146* V_3 = NULL;
	{
		// if (m_gameObjectRepository.Contains(objectID))
		GameObjectRepository_t3760691595 * L_0 = __this->get_m_gameObjectRepository_0();
		String_t* L_1 = ___objectID0;
		// if (m_gameObjectRepository.Contains(objectID))
		NullCheck(L_0);
		bool L_2 = GameObjectRepository_Contains_m502542647(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		V_0 = (GameObjectU5BU5D_t3328599146*)NULL;
		goto IL_007f;
	}

IL_001a:
	{
		// var material = m_materialRepository.LoadOrCreateMaterial(objectID, materialName);
		MaterialRepository_t701520604 * L_3 = __this->get_m_materialRepository_1();
		String_t* L_4 = ___objectID0;
		String_t* L_5 = ___materialName5;
		// var material = m_materialRepository.LoadOrCreateMaterial(objectID, materialName);
		NullCheck(L_3);
		Material_t340375123 * L_6 = MaterialRepository_LoadOrCreateMaterial_m3103985425(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var parent = new GameObject(objectID);
		String_t* L_7 = ___objectID0;
		// var parent = new GameObject(objectID);
		GameObject_t1113636619 * L_8 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_8, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// parent.transform.SetParent(m_gameObjectRepository.Root.transform, false);
		GameObject_t1113636619 * L_9 = V_2;
		// parent.transform.SetParent(m_gameObjectRepository.Root.transform, false);
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		GameObjectRepository_t3760691595 * L_11 = __this->get_m_gameObjectRepository_0();
		// parent.transform.SetParent(m_gameObjectRepository.Root.transform, false);
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = GameObjectRepository_get_Root_m815556018(L_11, /*hidden argument*/NULL);
		// parent.transform.SetParent(m_gameObjectRepository.Root.transform, false);
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		// parent.transform.SetParent(m_gameObjectRepository.Root.transform, false);
		NullCheck(L_10);
		Transform_SetParent_m273471670(L_10, L_13, (bool)0, /*hidden argument*/NULL);
		// var gameObjects = m_gameObjectCreator.CreateGameObjects(meshes, material, parent.transform, m_collisions);
		GameObjectFactory_t2478326784 * L_14 = __this->get_m_gameObjectCreator_2();
		MeshU5BU5D_t3972987605* L_15 = ___meshes1;
		Material_t340375123 * L_16 = V_1;
		GameObject_t1113636619 * L_17 = V_2;
		// var gameObjects = m_gameObjectCreator.CreateGameObjects(meshes, material, parent.transform, m_collisions);
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = GameObject_get_transform_m1369836730(L_17, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_m_collisions_4();
		// var gameObjects = m_gameObjectCreator.CreateGameObjects(meshes, material, parent.transform, m_collisions);
		NullCheck(L_14);
		GameObjectU5BU5D_t3328599146* L_20 = GameObjectFactory_CreateGameObjects_m3856069314(L_14, L_15, L_16, L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		// m_gameObjectRepository.Add(objectID, originECEF, translationOffsetECEF, rotationECEF, parent);
		GameObjectRepository_t3760691595 * L_21 = __this->get_m_gameObjectRepository_0();
		String_t* L_22 = ___objectID0;
		DoubleVector3_t761704365  L_23 = ___originECEF2;
		Vector3_t3722313464  L_24 = ___translationOffsetECEF3;
		Quaternion_t2301928331  L_25 = ___rotationECEF4;
		GameObject_t1113636619 * L_26 = V_2;
		// m_gameObjectRepository.Add(objectID, originECEF, translationOffsetECEF, rotationECEF, parent);
		NullCheck(L_21);
		GameObjectRepository_Add_m985221079(L_21, L_22, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		// return gameObjects;
		GameObjectU5BU5D_t3328599146* L_27 = V_3;
		V_0 = L_27;
		goto IL_007f;
	}

IL_007f:
	{
		// }
		GameObjectU5BU5D_t3328599146* L_28 = V_0;
		return L_28;
	}
}
// System.Boolean Wrld.Streaming.GameObjectStreamer::RemoveObjects(System.String)
extern "C"  bool GameObjectStreamer_RemoveObjects_m1907381515 (GameObjectStreamer_t3452608707 * __this, String_t* ___objectID0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return m_gameObjectRepository.Remove(objectID);
		GameObjectRepository_t3760691595 * L_0 = __this->get_m_gameObjectRepository_0();
		String_t* L_1 = ___objectID0;
		// return m_gameObjectRepository.Remove(objectID);
		NullCheck(L_0);
		bool L_2 = GameObjectRepository_Remove_m1283273531(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.GameObject Wrld.Streaming.GameObjectStreamer::GetObject(System.String)
extern "C"  GameObject_t1113636619 * GameObjectStreamer_GetObject_m2947042161 (GameObjectStreamer_t3452608707 * __this, String_t* ___objectID0, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		// m_gameObjectRepository.TryGetGameObject(objectID, out gameObject);
		GameObjectRepository_t3760691595 * L_0 = __this->get_m_gameObjectRepository_0();
		String_t* L_1 = ___objectID0;
		// m_gameObjectRepository.TryGetGameObject(objectID, out gameObject);
		NullCheck(L_0);
		GameObjectRepository_TryGetGameObject_m1271184210(L_0, L_1, (&V_0), /*hidden argument*/NULL);
		// return gameObject;
		GameObject_t1113636619 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		GameObject_t1113636619 * L_3 = V_1;
		return L_3;
	}
}
// System.Void Wrld.Streaming.GameObjectStreamer::UpdateTransforms(Wrld.Space.ITransformUpdateStrategy,System.Single)
extern "C"  void GameObjectStreamer_UpdateTransforms_m1763675535 (GameObjectStreamer_t3452608707 * __this, RuntimeObject* ___transformUpdateStrategy0, float ___heightOffset1, const RuntimeMethod* method)
{
	{
		// m_gameObjectRepository.UpdateTransforms(transformUpdateStrategy, heightOffset);
		GameObjectRepository_t3760691595 * L_0 = __this->get_m_gameObjectRepository_0();
		RuntimeObject* L_1 = ___transformUpdateStrategy0;
		float L_2 = ___heightOffset1;
		// m_gameObjectRepository.UpdateTransforms(transformUpdateStrategy, heightOffset);
		NullCheck(L_0);
		GameObjectRepository_UpdateTransforms_m334866038(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.Streaming.GameObjectStreamer::SetVisible(System.String,System.Boolean)
extern "C"  void GameObjectStreamer_SetVisible_m2758524825 (GameObjectStreamer_t3452608707 * __this, String_t* ___objectID0, bool ___visible1, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		// if (m_gameObjectRepository.TryGetGameObject(objectID, out gameObject))
		GameObjectRepository_t3760691595 * L_0 = __this->get_m_gameObjectRepository_0();
		String_t* L_1 = ___objectID0;
		// if (m_gameObjectRepository.TryGetGameObject(objectID, out gameObject))
		NullCheck(L_0);
		bool L_2 = GameObjectRepository_TryGetGameObject_m1271184210(L_0, L_1, (&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// gameObject.SetActiveRecursively(visible);
		GameObject_t1113636619 * L_3 = V_0;
		bool L_4 = ___visible1;
		// gameObject.SetActiveRecursively(visible);
		NullCheck(L_3);
		GameObject_SetActiveRecursively_m1439425356(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Wrld.Streaming.GameObjectStreamer::ChangeCollision(Wrld.Streaming.CollisionStreamingType)
extern "C"  void GameObjectStreamer_ChangeCollision_m14173059 (GameObjectStreamer_t3452608707 * __this, int32_t ___collision0, const RuntimeMethod* method)
{
	{
		// m_collisions = collision;
		int32_t L_0 = ___collision0;
		__this->set_m_collisions_4(L_0);
		// }
		return;
	}
}
// System.Void Wrld.Streaming.GameObjectStreamer::SetTranslation(System.String,UnityEngine.Vector3)
extern "C"  void GameObjectStreamer_SetTranslation_m1707589067 (GameObjectStreamer_t3452608707 * __this, String_t* ___objectID0, Vector3_t3722313464  ___translation1, const RuntimeMethod* method)
{
	GameObjectRecord_t2871914821 * V_0 = NULL;
	{
		// GameObjectRecord record = m_gameObjectRepository.GetObjectRecord(objectID);
		GameObjectRepository_t3760691595 * L_0 = __this->get_m_gameObjectRepository_0();
		String_t* L_1 = ___objectID0;
		// GameObjectRecord record = m_gameObjectRepository.GetObjectRecord(objectID);
		NullCheck(L_0);
		GameObjectRecord_t2871914821 * L_2 = GameObjectRepository_GetObjectRecord_m1518046775(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (record != null)
		GameObjectRecord_t2871914821 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// record.TranslationOffsetECEF = translation;
		GameObjectRecord_t2871914821 * L_4 = V_0;
		Vector3_t3722313464  L_5 = ___translation1;
		// record.TranslationOffsetECEF = translation;
		NullCheck(L_4);
		GameObjectRecord_set_TranslationOffsetECEF_m2354121186(L_4, L_5, /*hidden argument*/NULL);
		// record.RootGameObject.transform.localPosition = translation;
		GameObjectRecord_t2871914821 * L_6 = V_0;
		// record.RootGameObject.transform.localPosition = translation;
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = GameObjectRecord_get_RootGameObject_m4027813460(L_6, /*hidden argument*/NULL);
		// record.RootGameObject.transform.localPosition = translation;
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = ___translation1;
		// record.RootGameObject.transform.localPosition = translation;
		NullCheck(L_8);
		Transform_set_localPosition_m4128471975(L_8, L_9, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Wrld.Streaming.GameObjectStreamer::SetOrientation(System.String,UnityEngine.Quaternion)
extern "C"  void GameObjectStreamer_SetOrientation_m3603790300 (GameObjectStreamer_t3452608707 * __this, String_t* ___objectID0, Quaternion_t2301928331  ___orientationECEF1, const RuntimeMethod* method)
{
	GameObjectRecord_t2871914821 * V_0 = NULL;
	{
		// GameObjectRecord record = m_gameObjectRepository.GetObjectRecord(objectID);
		GameObjectRepository_t3760691595 * L_0 = __this->get_m_gameObjectRepository_0();
		String_t* L_1 = ___objectID0;
		// GameObjectRecord record = m_gameObjectRepository.GetObjectRecord(objectID);
		NullCheck(L_0);
		GameObjectRecord_t2871914821 * L_2 = GameObjectRepository_GetObjectRecord_m1518046775(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (record != null)
		GameObjectRecord_t2871914821 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// record.OrientationECEF = orientationECEF;
		GameObjectRecord_t2871914821 * L_4 = V_0;
		Quaternion_t2301928331  L_5 = ___orientationECEF1;
		// record.OrientationECEF = orientationECEF;
		NullCheck(L_4);
		GameObjectRecord_set_OrientationECEF_m2643822069(L_4, L_5, /*hidden argument*/NULL);
		// record.RootGameObject.transform.localRotation = orientationECEF;
		GameObjectRecord_t2871914821 * L_6 = V_0;
		// record.RootGameObject.transform.localRotation = orientationECEF;
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = GameObjectRecord_get_RootGameObject_m4027813460(L_6, /*hidden argument*/NULL);
		// record.RootGameObject.transform.localRotation = orientationECEF;
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_9 = ___orientationECEF1;
		// record.RootGameObject.transform.localRotation = orientationECEF;
		NullCheck(L_8);
		Transform_set_localRotation_m19445462(L_8, L_9, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Wrld.Streaming.GameObjectStreamer::SetColor(System.String,UnityEngine.Color)
extern "C"  void GameObjectStreamer_SetColor_m1105866105 (GameObjectStreamer_t3452608707 * __this, String_t* ___objectID0, Color_t2555686324  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectStreamer_SetColor_m1105866105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	MeshRendererU5BU5D_t2132764133* V_1 = NULL;
	MeshRenderer_t587009260 * V_2 = NULL;
	MeshRendererU5BU5D_t2132764133* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// var rootObject = GetObject(objectID);
		String_t* L_0 = ___objectID0;
		// var rootObject = GetObject(objectID);
		GameObject_t1113636619 * L_1 = GameObjectStreamer_GetObject_m2947042161(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (rootObject != null)
		GameObject_t1113636619 * L_2 = V_0;
		// if (rootObject != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00c2;
		}
	}
	{
		// var meshRenderers = rootObject.GetComponentsInChildren<MeshRenderer>(true);
		GameObject_t1113636619 * L_4 = V_0;
		// var meshRenderers = rootObject.GetComponentsInChildren<MeshRenderer>(true);
		NullCheck(L_4);
		MeshRendererU5BU5D_t2132764133* L_5 = GameObject_GetComponentsInChildren_TisMeshRenderer_t587009260_m4169215646(L_4, (bool)1, /*hidden argument*/GameObject_GetComponentsInChildren_TisMeshRenderer_t587009260_m4169215646_RuntimeMethod_var);
		V_1 = L_5;
		// foreach (MeshRenderer meshRenderer in meshRenderers)
		MeshRendererU5BU5D_t2132764133* L_6 = V_1;
		V_3 = L_6;
		V_4 = 0;
		goto IL_00b7;
	}

IL_0029:
	{
		// foreach (MeshRenderer meshRenderer in meshRenderers)
		MeshRendererU5BU5D_t2132764133* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MeshRenderer_t587009260 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// if (meshRenderer != null)
		MeshRenderer_t587009260 * L_11 = V_2;
		// if (meshRenderer != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00b0;
		}
	}
	{
		// if (color.a >= 1.0f)
		float L_13 = (&___color1)->get_a_3();
		if ((!(((float)L_13) >= ((float)(1.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		// meshRenderer.sharedMaterial.DisableKeyword(fadeRenderMode);
		MeshRenderer_t587009260 * L_14 = V_2;
		// meshRenderer.sharedMaterial.DisableKeyword(fadeRenderMode);
		NullCheck(L_14);
		Material_t340375123 * L_15 = Renderer_get_sharedMaterial_m1936632411(L_14, /*hidden argument*/NULL);
		// meshRenderer.sharedMaterial.DisableKeyword(fadeRenderMode);
		NullCheck(L_15);
		Material_DisableKeyword_m1245091008(L_15, _stringLiteral3949742573, /*hidden argument*/NULL);
		// meshRenderer.enabled = true;
		MeshRenderer_t587009260 * L_16 = V_2;
		// meshRenderer.enabled = true;
		NullCheck(L_16);
		Renderer_set_enabled_m1727253150(L_16, (bool)1, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_006b:
	{
		// else if (color.a > 0.0f)
		float L_17 = (&___color1)->get_a_3();
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		// meshRenderer.sharedMaterial.EnableKeyword(fadeRenderMode);
		MeshRenderer_t587009260 * L_18 = V_2;
		// meshRenderer.sharedMaterial.EnableKeyword(fadeRenderMode);
		NullCheck(L_18);
		Material_t340375123 * L_19 = Renderer_get_sharedMaterial_m1936632411(L_18, /*hidden argument*/NULL);
		// meshRenderer.sharedMaterial.EnableKeyword(fadeRenderMode);
		NullCheck(L_19);
		Material_EnableKeyword_m329692301(L_19, _stringLiteral3949742573, /*hidden argument*/NULL);
		// meshRenderer.enabled = true;
		MeshRenderer_t587009260 * L_20 = V_2;
		// meshRenderer.enabled = true;
		NullCheck(L_20);
		Renderer_set_enabled_m1727253150(L_20, (bool)1, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_009a:
	{
		// meshRenderer.enabled = false;
		MeshRenderer_t587009260 * L_21 = V_2;
		// meshRenderer.enabled = false;
		NullCheck(L_21);
		Renderer_set_enabled_m1727253150(L_21, (bool)0, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// meshRenderer.sharedMaterial.color = color;
		MeshRenderer_t587009260 * L_22 = V_2;
		// meshRenderer.sharedMaterial.color = color;
		NullCheck(L_22);
		Material_t340375123 * L_23 = Renderer_get_sharedMaterial_m1936632411(L_22, /*hidden argument*/NULL);
		Color_t2555686324  L_24 = ___color1;
		// meshRenderer.sharedMaterial.color = color;
		NullCheck(L_23);
		Material_set_color_m1794818007(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// foreach (MeshRenderer meshRenderer in meshRenderers)
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00b7:
	{
		int32_t L_26 = V_4;
		MeshRendererU5BU5D_t2132764133* L_27 = V_3;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Void Wrld.Streaming.GameObjectStreamer::SetScale(System.String,UnityEngine.Vector3)
extern "C"  void GameObjectStreamer_SetScale_m1914701548 (GameObjectStreamer_t3452608707 * __this, String_t* ___objectID0, Vector3_t3722313464  ___scale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectStreamer_SetScale_m1914701548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Transform_t3600365921 * V_3 = NULL;
	{
		// var gameObject = GetObject(objectID);
		String_t* L_0 = ___objectID0;
		// var gameObject = GetObject(objectID);
		GameObject_t1113636619 * L_1 = GameObjectStreamer_GetObject_m2947042161(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (gameObject != null)
		GameObject_t1113636619 * L_2 = V_0;
		// if (gameObject != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// int childCount = gameObject.transform.childCount;
		GameObject_t1113636619 * L_4 = V_0;
		// int childCount = gameObject.transform.childCount;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		// int childCount = gameObject.transform.childCount;
		NullCheck(L_5);
		int32_t L_6 = Transform_get_childCount_m3145433196(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int childIndex = 0; childIndex < childCount; ++childIndex)
		V_2 = 0;
		goto IL_0043;
	}

IL_0029:
	{
		// var child = gameObject.transform.GetChild(childIndex);
		GameObject_t1113636619 * L_7 = V_0;
		// var child = gameObject.transform.GetChild(childIndex);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		// var child = gameObject.transform.GetChild(childIndex);
		NullCheck(L_8);
		Transform_t3600365921 * L_10 = Transform_GetChild_m1092972975(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// child.localScale = scale;
		Transform_t3600365921 * L_11 = V_3;
		Vector3_t3722313464  L_12 = ___scale1;
		// child.localScale = scale;
		NullCheck(L_11);
		Transform_set_localScale_m3053443106(L_11, L_12, /*hidden argument*/NULL);
		// for (int childIndex = 0; childIndex < childCount; ++childIndex)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0043:
	{
		// for (int childIndex = 0; childIndex < childCount; ++childIndex)
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0029;
		}
	}
	{
	}

IL_004b:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.Streaming.ResourceCeilingProvider::.ctor(Wrld.Resources.Terrain.Heights.TerrainHeightProvider)
extern "C"  void ResourceCeilingProvider__ctor_m548693690 (ResourceCeilingProvider_t2554508737 * __this, TerrainHeightProvider_t517848921 * ___terrainHeightProvider0, const RuntimeMethod* method)
{
	{
		// public ResourceCeilingProvider(TerrainHeightProvider terrainHeightProvider)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_terrainHeightProvider = terrainHeightProvider;
		TerrainHeightProvider_t517848921 * L_0 = ___terrainHeightProvider0;
		__this->set_m_terrainHeightProvider_0(L_0);
		// }
		return;
	}
}
// System.Single Wrld.Streaming.ResourceCeilingProvider::GetApproximateResourceCeilingAltitude()
extern "C"  float ResourceCeilingProvider_GetApproximateResourceCeilingAltitude_m3720125532 (ResourceCeilingProvider_t2554508737 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return m_terrainHeightProvider.GetMaxHeight();
		TerrainHeightProvider_t517848921 * L_0 = __this->get_m_terrainHeightProvider_0();
		// return m_terrainHeightProvider.GetMaxHeight();
		NullCheck(L_0);
		float L_1 = TerrainHeightProvider_GetMaxHeight_m3541930250(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Wrld.Streaming.ResourceCeilingProvider::GetApproximateResourceFloorAltitude()
extern "C"  float ResourceCeilingProvider_GetApproximateResourceFloorAltitude_m1141832487 (ResourceCeilingProvider_t2554508737 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return m_terrainHeightProvider.GetMinHeight();
		TerrainHeightProvider_t517848921 * L_0 = __this->get_m_terrainHeightProvider_0();
		// return m_terrainHeightProvider.GetMinHeight();
		NullCheck(L_0);
		float L_1 = TerrainHeightProvider_GetMinHeight_m246132978(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wrld.StreamingUpdater::.ctor()
extern "C"  void StreamingUpdater__ctor_m1872847337 (StreamingUpdater_t530401876 * __this, const RuntimeMethod* method)
{
	{
		// private int m_screenWidth = 0;
		__this->set_m_screenWidth_0(0);
		// private int m_screenHeight = 0;
		__this->set_m_screenHeight_1(0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL SetCustomStreamingCameraState(intptr_t, CameraState_t2128520787_marshaled_pinvoke*);
// System.Void Wrld.StreamingUpdater::SetCustomStreamingCameraState(System.IntPtr,Wrld.MapCamera.CameraState)
extern "C"  void StreamingUpdater_SetCustomStreamingCameraState_m2125845139 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, CameraState_t2128520787 * ___state1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, CameraState_t2128520787_marshaled_pinvoke*);

	// Marshaling of parameter '___state1' to native representation
	CameraState_t2128520787_marshaled_pinvoke ____state1_marshaled = {};
	if (___state1 != NULL) CameraState_t2128520787_marshal_pinvoke(*___state1, ____state1_marshaled);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetCustomStreamingCameraState)(___ptr0, ___state1 != NULL ? &____state1_marshaled : NULL);

	// Marshaling cleanup of parameter '___state1' native representation
	if (___state1 != NULL) CameraState_t2128520787_marshal_pinvoke_cleanup(____state1_marshaled);

}
extern "C" void DEFAULT_CALL ClearCustomStreamingCamera(intptr_t);
// System.Void Wrld.StreamingUpdater::ClearCustomStreamingCamera(System.IntPtr)
extern "C"  void StreamingUpdater_ClearCustomStreamingCamera_m4284485926 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ClearCustomStreamingCamera)(___ptr0);

}
extern "C" void DEFAULT_CALL NotifyScreenSizeChanged(intptr_t, float, float);
// System.Void Wrld.StreamingUpdater::NotifyScreenSizeChanged(System.IntPtr,System.Single,System.Single)
extern "C"  void StreamingUpdater_NotifyScreenSizeChanged_m2457555807 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, float ___screenWidth1, float ___screenHeight2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NotifyScreenSizeChanged)(___ptr0, ___screenWidth1, ___screenHeight2);

}
// System.Void Wrld.StreamingUpdater::Update(UnityEngine.Camera,Wrld.Common.Maths.DoubleVector3,Wrld.Common.Maths.DoubleVector3)
extern "C"  void StreamingUpdater_Update_m1030478889 (StreamingUpdater_t530401876 * __this, Camera_t4157153871 * ___zeroBasedCameraECEF0, DoubleVector3_t761704365  ___cameraOriginECEF1, DoubleVector3_t761704365  ___interestPointECEF2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamingUpdater_Update_m1030478889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraState_t2128520787 * V_0 = NULL;
	{
		// if (InterestPointProvider.ClampInterestPointToValidRangeIfRequired(ref interestPointECEF))
		// if (InterestPointProvider.ClampInterestPointToValidRangeIfRequired(ref interestPointECEF))
		bool L_0 = InterestPointProvider_ClampInterestPointToValidRangeIfRequired_m2877792219(NULL /*static, unused*/, (&___interestPointECEF2), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Interest point had too high an altitude, clamping to valid range.");
		// Debug.LogWarning("Interest point had too high an altitude, clamping to valid range.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral4166659676, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// UpdateScreenSize();
		// UpdateScreenSize();
		StreamingUpdater_UpdateScreenSize_m2400682235(__this, /*hidden argument*/NULL);
		// if (IsValidStreamingCamera(zeroBasedCameraECEF))
		Camera_t4157153871 * L_1 = ___zeroBasedCameraECEF0;
		// if (IsValidStreamingCamera(zeroBasedCameraECEF))
		bool L_2 = StreamingUpdater_IsValidStreamingCamera_m3603289713(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// var cameraState = new CameraState(
		DoubleVector3_t761704365  L_3 = ___cameraOriginECEF1;
		DoubleVector3_t761704365  L_4 = ___interestPointECEF2;
		Camera_t4157153871 * L_5 = ___zeroBasedCameraECEF0;
		// zeroBasedCameraECEF.worldToCameraMatrix,
		NullCheck(L_5);
		Matrix4x4_t1817901843  L_6 = Camera_get_worldToCameraMatrix_m22661425(L_5, /*hidden argument*/NULL);
		Camera_t4157153871 * L_7 = ___zeroBasedCameraECEF0;
		// zeroBasedCameraECEF.projectionMatrix
		NullCheck(L_7);
		Matrix4x4_t1817901843  L_8 = Camera_get_projectionMatrix_m667780853(L_7, /*hidden argument*/NULL);
		// var cameraState = new CameraState(
		CameraState_t2128520787 * L_9 = (CameraState_t2128520787 *)il2cpp_codegen_object_new(CameraState_t2128520787_il2cpp_TypeInfo_var);
		CameraState__ctor_m1786065660(L_9, L_3, L_4, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// SetCustomStreamingCameraState(NativePluginRunner.API, cameraState);
		intptr_t L_10 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		CameraState_t2128520787 * L_11 = V_0;
		// SetCustomStreamingCameraState(NativePluginRunner.API, cameraState);
		StreamingUpdater_SetCustomStreamingCameraState_m2125845139(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Wrld.StreamingUpdater::UpdateForBuiltInCamera()
extern "C"  void StreamingUpdater_UpdateForBuiltInCamera_m3720861171 (StreamingUpdater_t530401876 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamingUpdater_UpdateForBuiltInCamera_m3720861171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateScreenSize();
		// UpdateScreenSize();
		StreamingUpdater_UpdateScreenSize_m2400682235(__this, /*hidden argument*/NULL);
		// ClearCustomStreamingCamera(NativePluginRunner.API);
		intptr_t L_0 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		// ClearCustomStreamingCamera(NativePluginRunner.API);
		StreamingUpdater_ClearCustomStreamingCamera_m4284485926(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wrld.StreamingUpdater::UpdateScreenSize()
extern "C"  void StreamingUpdater_UpdateScreenSize_m2400682235 (StreamingUpdater_t530401876 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamingUpdater_UpdateScreenSize_m2400682235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Screen.width != m_screenWidth || Screen.height != m_screenHeight)
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_m_screenWidth_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		// if (Screen.width != m_screenWidth || Screen.height != m_screenHeight)
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_m_screenHeight_1();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_004f;
		}
	}

IL_0021:
	{
		// m_screenWidth = Screen.width;
		// m_screenWidth = Screen.width;
		int32_t L_4 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_screenWidth_0(L_4);
		// m_screenHeight = Screen.height;
		// m_screenHeight = Screen.height;
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_screenHeight_1(L_5);
		// NotifyScreenSizeChanged(NativePluginRunner.API, Screen.width, Screen.height);
		intptr_t L_6 = ((NativePluginRunner_t3528041536_StaticFields*)il2cpp_codegen_static_fields_for(NativePluginRunner_t3528041536_il2cpp_TypeInfo_var))->get_API_1();
		// NotifyScreenSizeChanged(NativePluginRunner.API, Screen.width, Screen.height);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		// NotifyScreenSizeChanged(NativePluginRunner.API, Screen.width, Screen.height);
		int32_t L_8 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		// NotifyScreenSizeChanged(NativePluginRunner.API, Screen.width, Screen.height);
		StreamingUpdater_NotifyScreenSizeChanged_m2457555807(NULL /*static, unused*/, L_6, (((float)((float)L_7))), (((float)((float)L_8))), /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Boolean Wrld.StreamingUpdater::IsValidStreamingCamera(UnityEngine.Camera)
extern "C"  bool StreamingUpdater_IsValidStreamingCamera_m3603289713 (StreamingUpdater_t530401876 * __this, Camera_t4157153871 * ___zeroBasedCameraECEF0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamingUpdater_IsValidStreamingCamera_m3603289713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B9_0 = 0;
	{
		// if (zeroBasedCameraECEF == null)
		Camera_t4157153871 * L_0 = ___zeroBasedCameraECEF0;
		// if (zeroBasedCameraECEF == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0076;
	}

IL_0015:
	{
		// var isZeroBased = zeroBasedCameraECEF.transform.position.sqrMagnitude < 0.000001f;
		Camera_t4157153871 * L_2 = ___zeroBasedCameraECEF0;
		// var isZeroBased = zeroBasedCameraECEF.transform.position.sqrMagnitude < 0.000001f;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		// var isZeroBased = zeroBasedCameraECEF.transform.position.sqrMagnitude < 0.000001f;
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// var isZeroBased = zeroBasedCameraECEF.transform.position.sqrMagnitude < 0.000001f;
		float L_5 = Vector3_get_sqrMagnitude_m1474274574((&V_2), /*hidden argument*/NULL);
		V_1 = (bool)((((float)L_5) < ((float)(1.0E-06f)))? 1 : 0);
		// var hasNonzeroSize = zeroBasedCameraECEF.orthographicSize > 0;
		Camera_t4157153871 * L_6 = ___zeroBasedCameraECEF0;
		// var hasNonzeroSize = zeroBasedCameraECEF.orthographicSize > 0;
		NullCheck(L_6);
		float L_7 = Camera_get_orthographicSize_m3903216845(L_6, /*hidden argument*/NULL);
		V_3 = (bool)((((float)L_7) > ((float)(0.0f)))? 1 : 0);
		// if (!isZeroBased)
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.LogError("Expected a camera with zero translation (position should be represented in cameraOriginECEF).");
		// Debug.LogError("Expected a camera with zero translation (position should be represented in cameraOriginECEF).");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral841412930, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// if (!hasNonzeroSize)
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		// Debug.LogError("Camera Orthographic Size must be greater than 0 for correct frustum calculation");
		// Debug.LogError("Camera Orthographic Size must be greater than 0 for correct frustum calculation");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3437651385, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// bool isValid = (isZeroBased && hasNonzeroSize);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		bool L_11 = V_3;
		G_B9_0 = ((int32_t)(L_11));
		goto IL_006c;
	}

IL_006b:
	{
		G_B9_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B9_0;
		// return isValid;
		bool L_12 = V_4;
		V_0 = L_12;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		bool L_13 = V_0;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Wrld.TextureCallbacks
extern "C" void TextureCallbacks_t2889231718_marshal_pinvoke(const TextureCallbacks_t2889231718& unmarshaled, TextureCallbacks_t2889231718_marshaled_pinvoke& marshaled)
{
	marshaled.___textureServiceHandle_0 = unmarshaled.get_textureServiceHandle_0();
	marshaled.___allocateTextureBuffer_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_allocateTextureBuffer_1()));
	marshaled.___beginUploadTextureBuffer_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_beginUploadTextureBuffer_2()));
	marshaled.___onTextureReceived_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_onTextureReceived_3()));
	marshaled.___releaseTexture_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_releaseTexture_4()));
	marshaled.___createCubemapFromFaces_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_createCubemapFromFaces_5()));
}
extern "C" void TextureCallbacks_t2889231718_marshal_pinvoke_back(const TextureCallbacks_t2889231718_marshaled_pinvoke& marshaled, TextureCallbacks_t2889231718& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureCallbacks_t2889231718_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_textureServiceHandle_temp_0;
	memset(&unmarshaled_textureServiceHandle_temp_0, 0, sizeof(unmarshaled_textureServiceHandle_temp_0));
	unmarshaled_textureServiceHandle_temp_0 = marshaled.___textureServiceHandle_0;
	unmarshaled.set_textureServiceHandle_0(unmarshaled_textureServiceHandle_temp_0);
	unmarshaled.set_allocateTextureBuffer_1(il2cpp_codegen_marshal_function_ptr_to_delegate<AllocateTextureBufferCallback_t109657048>(marshaled.___allocateTextureBuffer_1, AllocateTextureBufferCallback_t109657048_il2cpp_TypeInfo_var));
	unmarshaled.set_beginUploadTextureBuffer_2(il2cpp_codegen_marshal_function_ptr_to_delegate<BeginUploadTextureBufferCallback_t3016670851>(marshaled.___beginUploadTextureBuffer_2, BeginUploadTextureBufferCallback_t3016670851_il2cpp_TypeInfo_var));
	unmarshaled.set_onTextureReceived_3(il2cpp_codegen_marshal_function_ptr_to_delegate<OnTextureReceivedCallback_t1016964503>(marshaled.___onTextureReceived_3, OnTextureReceivedCallback_t1016964503_il2cpp_TypeInfo_var));
	unmarshaled.set_releaseTexture_4(il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseTextureCallback_t388032167>(marshaled.___releaseTexture_4, ReleaseTextureCallback_t388032167_il2cpp_TypeInfo_var));
	unmarshaled.set_createCubemapFromFaces_5(il2cpp_codegen_marshal_function_ptr_to_delegate<CreateCubemapFromFacesCallback_t2834185402>(marshaled.___createCubemapFromFaces_5, CreateCubemapFromFacesCallback_t2834185402_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Wrld.TextureCallbacks
extern "C" void TextureCallbacks_t2889231718_marshal_pinvoke_cleanup(TextureCallbacks_t2889231718_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Wrld.TextureCallbacks
extern "C" void TextureCallbacks_t2889231718_marshal_com(const TextureCallbacks_t2889231718& unmarshaled, TextureCallbacks_t2889231718_marshaled_com& marshaled)
{
	marshaled.___textureServiceHandle_0 = unmarshaled.get_textureServiceHandle_0();
	marshaled.___allocateTextureBuffer_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_allocateTextureBuffer_1()));
	marshaled.___beginUploadTextureBuffer_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_beginUploadTextureBuffer_2()));
	marshaled.___onTextureReceived_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_onTextureReceived_3()));
	marshaled.___releaseTexture_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_releaseTexture_4()));
	marshaled.___createCubemapFromFaces_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_createCubemapFromFaces_5()));
}
extern "C" void TextureCallbacks_t2889231718_marshal_com_back(const TextureCallbacks_t2889231718_marshaled_com& marshaled, TextureCallbacks_t2889231718& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureCallbacks_t2889231718_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_textureServiceHandle_temp_0;
	memset(&unmarshaled_textureServiceHandle_temp_0, 0, sizeof(unmarshaled_textureServiceHandle_temp_0));
	unmarshaled_textureServiceHandle_temp_0 = marshaled.___textureServiceHandle_0;
	unmarshaled.set_textureServiceHandle_0(unmarshaled_textureServiceHandle_temp_0);
	unmarshaled.set_allocateTextureBuffer_1(il2cpp_codegen_marshal_function_ptr_to_delegate<AllocateTextureBufferCallback_t109657048>(marshaled.___allocateTextureBuffer_1, AllocateTextureBufferCallback_t109657048_il2cpp_TypeInfo_var));
	unmarshaled.set_beginUploadTextureBuffer_2(il2cpp_codegen_marshal_function_ptr_to_delegate<BeginUploadTextureBufferCallback_t3016670851>(marshaled.___beginUploadTextureBuffer_2, BeginUploadTextureBufferCallback_t3016670851_il2cpp_TypeInfo_var));
	unmarshaled.set_onTextureReceived_3(il2cpp_codegen_marshal_function_ptr_to_delegate<OnTextureReceivedCallback_t1016964503>(marshaled.___onTextureReceived_3, OnTextureReceivedCallback_t1016964503_il2cpp_TypeInfo_var));
	unmarshaled.set_releaseTexture_4(il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseTextureCallback_t388032167>(marshaled.___releaseTexture_4, ReleaseTextureCallback_t388032167_il2cpp_TypeInfo_var));
	unmarshaled.set_createCubemapFromFaces_5(il2cpp_codegen_marshal_function_ptr_to_delegate<CreateCubemapFromFacesCallback_t2834185402>(marshaled.___createCubemapFromFaces_5, CreateCubemapFromFacesCallback_t2834185402_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Wrld.TextureCallbacks
extern "C" void TextureCallbacks_t2889231718_marshal_com_cleanup(TextureCallbacks_t2889231718_marshaled_com& marshaled)
{
}
// System.Void Wrld.TextureCallbacks::.ctor(System.IntPtr,Wrld.Materials.TextureLoadHandler/AllocateTextureBufferCallback,Wrld.Materials.TextureLoadHandler/BeginUploadTextureBufferCallback,Wrld.Resources.IndoorMaps.IndoorMapTextureStreamingService/OnTextureReceivedCallback,Wrld.Materials.TextureLoadHandler/ReleaseTextureCallback,Wrld.Materials.TextureLoadHandler/CreateCubemapFromFacesCallback)
extern "C"  void TextureCallbacks__ctor_m1846889886 (TextureCallbacks_t2889231718 * __this, intptr_t ____textureServiceHandle0, AllocateTextureBufferCallback_t109657048 * ____allocateTextureBuffer1, BeginUploadTextureBufferCallback_t3016670851 * ____beginUploadTextureBuffer2, OnTextureReceivedCallback_t1016964503 * ____onTextureReceived3, ReleaseTextureCallback_t388032167 * ____releaseTexture4, CreateCubemapFromFacesCallback_t2834185402 * ____createCubemapFromFaces5, const RuntimeMethod* method)
{
	{
		// textureServiceHandle = _textureServiceHandle;
		intptr_t L_0 = ____textureServiceHandle0;
		__this->set_textureServiceHandle_0(L_0);
		// allocateTextureBuffer = _allocateTextureBuffer;
		AllocateTextureBufferCallback_t109657048 * L_1 = ____allocateTextureBuffer1;
		__this->set_allocateTextureBuffer_1(L_1);
		// beginUploadTextureBuffer = _beginUploadTextureBuffer;
		BeginUploadTextureBufferCallback_t3016670851 * L_2 = ____beginUploadTextureBuffer2;
		__this->set_beginUploadTextureBuffer_2(L_2);
		// onTextureReceived = _onTextureReceived;
		OnTextureReceivedCallback_t1016964503 * L_3 = ____onTextureReceived3;
		__this->set_onTextureReceived_3(L_3);
		// releaseTexture = _releaseTexture;
		ReleaseTextureCallback_t388032167 * L_4 = ____releaseTexture4;
		__this->set_releaseTexture_4(L_4);
		// createCubemapFromFaces = _createCubemapFromFaces;
		CreateCubemapFromFacesCallback_t2834185402 * L_5 = ____createCubemapFromFaces5;
		__this->set_createCubemapFromFaces_5(L_5);
		// }
		return;
	}
}
extern "C"  void TextureCallbacks__ctor_m1846889886_AdjustorThunk (RuntimeObject * __this, intptr_t ____textureServiceHandle0, AllocateTextureBufferCallback_t109657048 * ____allocateTextureBuffer1, BeginUploadTextureBufferCallback_t3016670851 * ____beginUploadTextureBuffer2, OnTextureReceivedCallback_t1016964503 * ____onTextureReceived3, ReleaseTextureCallback_t388032167 * ____releaseTexture4, CreateCubemapFromFacesCallback_t2834185402 * ____createCubemapFromFaces5, const RuntimeMethod* method)
{
	TextureCallbacks_t2889231718 * _thisAdjusted = reinterpret_cast<TextureCallbacks_t2889231718 *>(__this + 1);
	TextureCallbacks__ctor_m1846889886(_thisAdjusted, ____textureServiceHandle0, ____allocateTextureBuffer1, ____beginUploadTextureBuffer2, ____onTextureReceived3, ____releaseTexture4, ____createCubemapFromFaces5, method);
}
// Wrld.TextureCallbacks Wrld.TextureCallbacks::Create(System.IntPtr)
extern "C"  TextureCallbacks_t2889231718  TextureCallbacks_Create_m3926649034 (RuntimeObject * __this /* static, unused */, intptr_t ___textureServiceHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureCallbacks_Create_m3926649034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextureCallbacks_t2889231718  V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	AllocateTextureBufferCallback_t109657048 * G_B4_0 = NULL;
	intptr_t G_B4_1;
	memset(&G_B4_1, 0, sizeof(G_B4_1));
	AllocateTextureBufferCallback_t109657048 * G_B3_0 = NULL;
	intptr_t G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	BeginUploadTextureBufferCallback_t3016670851 * G_B6_0 = NULL;
	AllocateTextureBufferCallback_t109657048 * G_B6_1 = NULL;
	intptr_t G_B6_2;
	memset(&G_B6_2, 0, sizeof(G_B6_2));
	BeginUploadTextureBufferCallback_t3016670851 * G_B5_0 = NULL;
	AllocateTextureBufferCallback_t109657048 * G_B5_1 = NULL;
	intptr_t G_B5_2;
	memset(&G_B5_2, 0, sizeof(G_B5_2));
	OnTextureReceivedCallback_t1016964503 * G_B8_0 = NULL;
	BeginUploadTextureBufferCallback_t3016670851 * G_B8_1 = NULL;
	AllocateTextureBufferCallback_t109657048 * G_B8_2 = NULL;
	intptr_t G_B8_3;
	memset(&G_B8_3, 0, sizeof(G_B8_3));
	OnTextureReceivedCallback_t1016964503 * G_B7_0 = NULL;
	BeginUploadTextureBufferCallback_t3016670851 * G_B7_1 = NULL;
	AllocateTextureBufferCallback_t109657048 * G_B7_2 = NULL;
	intptr_t G_B7_3;
	memset(&G_B7_3, 0, sizeof(G_B7_3));
	ReleaseTextureCallback_t388032167 * G_B10_0 = NULL;
	OnTextureReceivedCallback_t1016964503 * G_B10_1 = NULL;
	BeginUploadTextureBufferCallback_t3016670851 * G_B10_2 = NULL;
	AllocateTextureBufferCallback_t109657048 * G_B10_3 = NULL;
	intptr_t G_B10_4;
	memset(&G_B10_4, 0, sizeof(G_B10_4));
	ReleaseTextureCallback_t388032167 * G_B9_0 = NULL;
	OnTextureReceivedCallback_t1016964503 * G_B9_1 = NULL;
	BeginUploadTextureBufferCallback_t3016670851 * G_B9_2 = NULL;
	AllocateTextureBufferCallback_t109657048 * G_B9_3 = NULL;
	intptr_t G_B9_4;
	memset(&G_B9_4, 0, sizeof(G_B9_4));
	{
		// return new TextureCallbacks(
		intptr_t L_0 = ___textureServiceHandle0;
		AllocateTextureBufferCallback_t109657048 * L_1 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001a;
		}
	}
	{
		intptr_t L_2 = (intptr_t)TextureLoadHandler_AllocateTextureBuffer_m1386010403_RuntimeMethod_var;
		AllocateTextureBufferCallback_t109657048 * L_3 = (AllocateTextureBufferCallback_t109657048 *)il2cpp_codegen_object_new(AllocateTextureBufferCallback_t109657048_il2cpp_TypeInfo_var);
		AllocateTextureBufferCallback__ctor_m3089161838(L_3, NULL, L_2, /*hidden argument*/NULL);
		((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_6(L_3);
		G_B2_0 = G_B1_0;
	}

IL_001a:
	{
		AllocateTextureBufferCallback_t109657048 * L_4 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		BeginUploadTextureBufferCallback_t3016670851 * L_5 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = L_4;
			G_B4_1 = G_B2_0;
			goto IL_0037;
		}
	}
	{
		intptr_t L_6 = (intptr_t)TextureLoadHandler_BeginUploadTextureBuffer_m1857616132_RuntimeMethod_var;
		BeginUploadTextureBufferCallback_t3016670851 * L_7 = (BeginUploadTextureBufferCallback_t3016670851 *)il2cpp_codegen_object_new(BeginUploadTextureBufferCallback_t3016670851_il2cpp_TypeInfo_var);
		BeginUploadTextureBufferCallback__ctor_m2275122704(L_7, NULL, L_6, /*hidden argument*/NULL);
		((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_7(L_7);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0037:
	{
		BeginUploadTextureBufferCallback_t3016670851 * L_8 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		OnTextureReceivedCallback_t1016964503 * L_9 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_8();
		G_B5_0 = L_8;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		if (L_9)
		{
			G_B6_0 = L_8;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			goto IL_0054;
		}
	}
	{
		intptr_t L_10 = (intptr_t)IndoorMapTextureStreamingService_OnTextureReceived_m691274669_RuntimeMethod_var;
		OnTextureReceivedCallback_t1016964503 * L_11 = (OnTextureReceivedCallback_t1016964503 *)il2cpp_codegen_object_new(OnTextureReceivedCallback_t1016964503_il2cpp_TypeInfo_var);
		OnTextureReceivedCallback__ctor_m1038892917(L_11, NULL, L_10, /*hidden argument*/NULL);
		((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_8(L_11);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0054:
	{
		OnTextureReceivedCallback_t1016964503 * L_12 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_8();
		ReleaseTextureCallback_t388032167 * L_13 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_9();
		G_B7_0 = L_12;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		if (L_13)
		{
			G_B8_0 = L_12;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			G_B8_3 = G_B6_2;
			goto IL_0071;
		}
	}
	{
		intptr_t L_14 = (intptr_t)TextureLoadHandler_ReleaseTexture_m3904019126_RuntimeMethod_var;
		ReleaseTextureCallback_t388032167 * L_15 = (ReleaseTextureCallback_t388032167 *)il2cpp_codegen_object_new(ReleaseTextureCallback_t388032167_il2cpp_TypeInfo_var);
		ReleaseTextureCallback__ctor_m3468623728(L_15, NULL, L_14, /*hidden argument*/NULL);
		((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_9(L_15);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0071:
	{
		ReleaseTextureCallback_t388032167 * L_16 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_9();
		CreateCubemapFromFacesCallback_t2834185402 * L_17 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_10();
		G_B9_0 = L_16;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
		if (L_17)
		{
			G_B10_0 = L_16;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			G_B10_3 = G_B8_2;
			G_B10_4 = G_B8_3;
			goto IL_008e;
		}
	}
	{
		intptr_t L_18 = (intptr_t)TextureLoadHandler_CreateCubemapFromFaces_m4182605382_RuntimeMethod_var;
		CreateCubemapFromFacesCallback_t2834185402 * L_19 = (CreateCubemapFromFacesCallback_t2834185402 *)il2cpp_codegen_object_new(CreateCubemapFromFacesCallback_t2834185402_il2cpp_TypeInfo_var);
		CreateCubemapFromFacesCallback__ctor_m1893239485(L_19, NULL, L_18, /*hidden argument*/NULL);
		((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache4_10(L_19);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
	}

IL_008e:
	{
		CreateCubemapFromFacesCallback_t2834185402 * L_20 = ((TextureCallbacks_t2889231718_StaticFields*)il2cpp_codegen_static_fields_for(TextureCallbacks_t2889231718_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_10();
		// return new TextureCallbacks(
		TextureCallbacks_t2889231718  L_21;
		memset(&L_21, 0, sizeof(L_21));
		TextureCallbacks__ctor_m1846889886((&L_21), G_B10_4, G_B10_3, G_B10_2, G_B10_1, G_B10_0, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		TextureCallbacks_t2889231718  L_22 = V_0;
		return L_22;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Wrld.ThreadServiceCallbacks
extern "C" void ThreadServiceCallbacks_t3456159097_marshal_pinvoke(const ThreadServiceCallbacks_t3456159097& unmarshaled, ThreadServiceCallbacks_t3456159097_marshaled_pinvoke& marshaled)
{
	marshaled.___threadServiceHandle_0 = unmarshaled.get_threadServiceHandle_0();
	marshaled.___createThread_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_createThread_1()));
	marshaled.___joinThread_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_joinThread_2()));
}
extern "C" void ThreadServiceCallbacks_t3456159097_marshal_pinvoke_back(const ThreadServiceCallbacks_t3456159097_marshaled_pinvoke& marshaled, ThreadServiceCallbacks_t3456159097& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadServiceCallbacks_t3456159097_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_threadServiceHandle_temp_0;
	memset(&unmarshaled_threadServiceHandle_temp_0, 0, sizeof(unmarshaled_threadServiceHandle_temp_0));
	unmarshaled_threadServiceHandle_temp_0 = marshaled.___threadServiceHandle_0;
	unmarshaled.set_threadServiceHandle_0(unmarshaled_threadServiceHandle_temp_0);
	unmarshaled.set_createThread_1(il2cpp_codegen_marshal_function_ptr_to_delegate<CreateThreadDelegate_t2573395908>(marshaled.___createThread_1, CreateThreadDelegate_t2573395908_il2cpp_TypeInfo_var));
	unmarshaled.set_joinThread_2(il2cpp_codegen_marshal_function_ptr_to_delegate<JoinThreadDelegate_t1262337526>(marshaled.___joinThread_2, JoinThreadDelegate_t1262337526_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Wrld.ThreadServiceCallbacks
extern "C" void ThreadServiceCallbacks_t3456159097_marshal_pinvoke_cleanup(ThreadServiceCallbacks_t3456159097_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Wrld.ThreadServiceCallbacks
extern "C" void ThreadServiceCallbacks_t3456159097_marshal_com(const ThreadServiceCallbacks_t3456159097& unmarshaled, ThreadServiceCallbacks_t3456159097_marshaled_com& marshaled)
{
	marshaled.___threadServiceHandle_0 = unmarshaled.get_threadServiceHandle_0();
	marshaled.___createThread_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_createThread_1()));
	marshaled.___joinThread_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_joinThread_2()));
}
extern "C" void ThreadServiceCallbacks_t3456159097_marshal_com_back(const ThreadServiceCallbacks_t3456159097_marshaled_com& marshaled, ThreadServiceCallbacks_t3456159097& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadServiceCallbacks_t3456159097_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_threadServiceHandle_temp_0;
	memset(&unmarshaled_threadServiceHandle_temp_0, 0, sizeof(unmarshaled_threadServiceHandle_temp_0));
	unmarshaled_threadServiceHandle_temp_0 = marshaled.___threadServiceHandle_0;
	unmarshaled.set_threadServiceHandle_0(unmarshaled_threadServiceHandle_temp_0);
	unmarshaled.set_createThread_1(il2cpp_codegen_marshal_function_ptr_to_delegate<CreateThreadDelegate_t2573395908>(marshaled.___createThread_1, CreateThreadDelegate_t2573395908_il2cpp_TypeInfo_var));
	unmarshaled.set_joinThread_2(il2cpp_codegen_marshal_function_ptr_to_delegate<JoinThreadDelegate_t1262337526>(marshaled.___joinThread_2, JoinThreadDelegate_t1262337526_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Wrld.ThreadServiceCallbacks
extern "C" void ThreadServiceCallbacks_t3456159097_marshal_com_cleanup(ThreadServiceCallbacks_t3456159097_marshaled_com& marshaled)
{
}
// System.Void Wrld.ThreadServiceCallbacks::.ctor(System.IntPtr,Wrld.Concurrency.ThreadService/CreateThreadDelegate,Wrld.Concurrency.ThreadService/JoinThreadDelegate)
extern "C"  void ThreadServiceCallbacks__ctor_m4063513272 (ThreadServiceCallbacks_t3456159097 * __this, intptr_t ____threadServiceHandle0, CreateThreadDelegate_t2573395908 * ____createThread1, JoinThreadDelegate_t1262337526 * ____joinThread2, const RuntimeMethod* method)
{
	{
		// threadServiceHandle = _threadServiceHandle;
		intptr_t L_0 = ____threadServiceHandle0;
		__this->set_threadServiceHandle_0(L_0);
		// createThread = _createThread;
		CreateThreadDelegate_t2573395908 * L_1 = ____createThread1;
		__this->set_createThread_1(L_1);
		// joinThread = _joinThread;
		JoinThreadDelegate_t1262337526 * L_2 = ____joinThread2;
		__this->set_joinThread_2(L_2);
		// }
		return;
	}
}
extern "C"  void ThreadServiceCallbacks__ctor_m4063513272_AdjustorThunk (RuntimeObject * __this, intptr_t ____threadServiceHandle0, CreateThreadDelegate_t2573395908 * ____createThread1, JoinThreadDelegate_t1262337526 * ____joinThread2, const RuntimeMethod* method)
{
	ThreadServiceCallbacks_t3456159097 * _thisAdjusted = reinterpret_cast<ThreadServiceCallbacks_t3456159097 *>(__this + 1);
	ThreadServiceCallbacks__ctor_m4063513272(_thisAdjusted, ____threadServiceHandle0, ____createThread1, ____joinThread2, method);
}
// Wrld.ThreadServiceCallbacks Wrld.ThreadServiceCallbacks::Create(System.IntPtr)
extern "C"  ThreadServiceCallbacks_t3456159097  ThreadServiceCallbacks_Create_m1486201568 (RuntimeObject * __this /* static, unused */, intptr_t ___threadServiceHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadServiceCallbacks_Create_m1486201568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ThreadServiceCallbacks_t3456159097  V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	CreateThreadDelegate_t2573395908 * G_B4_0 = NULL;
	intptr_t G_B4_1;
	memset(&G_B4_1, 0, sizeof(G_B4_1));
	CreateThreadDelegate_t2573395908 * G_B3_0 = NULL;
	intptr_t G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	{
		// return new ThreadServiceCallbacks(
		intptr_t L_0 = ___threadServiceHandle0;
		CreateThreadDelegate_t2573395908 * L_1 = ((ThreadServiceCallbacks_t3456159097_StaticFields*)il2cpp_codegen_static_fields_for(ThreadServiceCallbacks_t3456159097_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001a;
		}
	}
	{
		intptr_t L_2 = (intptr_t)ThreadService_CreateThread_m3570449930_RuntimeMethod_var;
		CreateThreadDelegate_t2573395908 * L_3 = (CreateThreadDelegate_t2573395908 *)il2cpp_codegen_object_new(CreateThreadDelegate_t2573395908_il2cpp_TypeInfo_var);
		CreateThreadDelegate__ctor_m4131810534(L_3, NULL, L_2, /*hidden argument*/NULL);
		((ThreadServiceCallbacks_t3456159097_StaticFields*)il2cpp_codegen_static_fields_for(ThreadServiceCallbacks_t3456159097_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_3(L_3);
		G_B2_0 = G_B1_0;
	}

IL_001a:
	{
		CreateThreadDelegate_t2573395908 * L_4 = ((ThreadServiceCallbacks_t3456159097_StaticFields*)il2cpp_codegen_static_fields_for(ThreadServiceCallbacks_t3456159097_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		JoinThreadDelegate_t1262337526 * L_5 = ((ThreadServiceCallbacks_t3456159097_StaticFields*)il2cpp_codegen_static_fields_for(ThreadServiceCallbacks_t3456159097_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_4();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = L_4;
			G_B4_1 = G_B2_0;
			goto IL_0037;
		}
	}
	{
		intptr_t L_6 = (intptr_t)ThreadService_JoinThread_m1805523832_RuntimeMethod_var;
		JoinThreadDelegate_t1262337526 * L_7 = (JoinThreadDelegate_t1262337526 *)il2cpp_codegen_object_new(JoinThreadDelegate_t1262337526_il2cpp_TypeInfo_var);
		JoinThreadDelegate__ctor_m3258663343(L_7, NULL, L_6, /*hidden argument*/NULL);
		((ThreadServiceCallbacks_t3456159097_StaticFields*)il2cpp_codegen_static_fields_for(ThreadServiceCallbacks_t3456159097_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_4(L_7);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0037:
	{
		JoinThreadDelegate_t1262337526 * L_8 = ((ThreadServiceCallbacks_t3456159097_StaticFields*)il2cpp_codegen_static_fields_for(ThreadServiceCallbacks_t3456159097_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_4();
		// return new ThreadServiceCallbacks(
		ThreadServiceCallbacks_t3456159097  L_9;
		memset(&L_9, 0, sizeof(L_9));
		ThreadServiceCallbacks__ctor_m4063513272((&L_9), G_B4_1, G_B4_0, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0047;
	}

IL_0047:
	{
		// }
		ThreadServiceCallbacks_t3456159097  L_10 = V_0;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Wrld.Utilities.NativeInteropHelpers::AllocateNativeHandleForObject(System.Object)
extern "C"  intptr_t NativeInteropHelpers_AllocateNativeHandleForObject_m3143731542 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// var handle = GCHandle.Alloc(input);
		RuntimeObject * L_0 = ___input0;
		// var handle = GCHandle.Alloc(input);
		GCHandle_t3351438187  L_1 = GCHandle_Alloc_m3053200191(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return GCHandle.ToIntPtr(handle);
		GCHandle_t3351438187  L_2 = V_0;
		// return GCHandle.ToIntPtr(handle);
		intptr_t L_3 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		intptr_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Wrld.Utilities.NativeInteropHelpers::FreeNativeHandle(System.IntPtr)
extern "C"  void NativeInteropHelpers_FreeNativeHandle_m4202217538 (RuntimeObject * __this /* static, unused */, intptr_t ___handlePointer0, const RuntimeMethod* method)
{
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// var handle = GCHandle.FromIntPtr(handlePointer);
		intptr_t L_0 = ___handlePointer0;
		// var handle = GCHandle.FromIntPtr(handlePointer);
		GCHandle_t3351438187  L_1 = GCHandle_FromIntPtr_m3880792486(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// handle.Free();
		// handle.Free();
		GCHandle_Free_m1457699368((&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WrldMap::.ctor()
extern "C"  void WrldMap__ctor_m2151610663 (WrldMap_t2502476010 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WrldMap__ctor_m2151610663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Camera m_streamingCamera = null;
		__this->set_m_streamingCamera_2((Camera_t4157153871 *)NULL);
		// private double m_latitudeDegrees = 37.771092;
		__this->set_m_latitudeDegrees_4((37.771092));
		// private double m_longitudeDegrees = -122.468385;
		__this->set_m_longitudeDegrees_5((-122.468385));
		// private double m_distanceToInterest = 1781.0;
		__this->set_m_distanceToInterest_6((1781.0));
		// private double m_headingDegrees = 0.0;
		__this->set_m_headingDegrees_7((0.0));
		// private CoordinateSystem m_coordSystem = CoordinateSystem.UnityWorld;
		__this->set_m_coordSystem_8(0);
		// private bool m_streamingLodBasedOnDistance = false;
		__this->set_m_streamingLodBasedOnDistance_9((bool)0);
		// private string m_materialDirectory = "WrldMaterials/";
		__this->set_m_materialDirectory_10(_stringLiteral2177073374);
		// private Material m_overrideLandmarkMaterial = null;
		__this->set_m_overrideLandmarkMaterial_11((Material_t340375123 *)NULL);
		// private bool m_useBuiltInCameraControls = true;
		__this->set_m_useBuiltInCameraControls_12((bool)1);
		// private bool m_terrainCollisions = false;
		__this->set_m_terrainCollisions_13((bool)0);
		// private bool m_roadCollisions = false;
		__this->set_m_roadCollisions_14((bool)0);
		// private bool m_buildingCollisions = false;
		__this->set_m_buildingCollisions_15((bool)0);
		// private bool m_enableLabels = false;
		__this->set_m_enableLabels_16((bool)0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WrldMap::Awake()
extern "C"  void WrldMap_Awake_m2829353039 (WrldMap_t2502476010 * __this, const RuntimeMethod* method)
{
	{
		// SetupApi();
		// SetupApi();
		WrldMap_SetupApi_m3608385571(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WrldMap::OnEnable()
extern "C"  void WrldMap_OnEnable_m1239584823 (WrldMap_t2502476010 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WrldMap_OnEnable_m1239584823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Api.Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(Api_t1190036922_il2cpp_TypeInfo_var);
		Api_t1190036922 * L_0 = ((Api_t1190036922_StaticFields*)il2cpp_codegen_static_fields_for(Api_t1190036922_il2cpp_TypeInfo_var))->get_Instance_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SetupApi();
		// SetupApi();
		WrldMap_SetupApi_m3608385571(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// m_api.SetEnabled(true);
		Api_t1190036922 * L_1 = __this->get_m_api_17();
		// m_api.SetEnabled(true);
		NullCheck(L_1);
		Api_SetEnabled_m725939101(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WrldMap::OnDisable()
extern "C"  void WrldMap_OnDisable_m1268468287 (WrldMap_t2502476010 * __this, const RuntimeMethod* method)
{
	{
		// m_api.SetEnabled(false);
		Api_t1190036922 * L_0 = __this->get_m_api_17();
		// m_api.SetEnabled(false);
		NullCheck(L_0);
		Api_SetEnabled_m725939101(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String WrldMap::GetApiKey()
extern "C"  String_t* WrldMap_GetApiKey_m3036891609 (WrldMap_t2502476010 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WrldMap_GetApiKey_m3036891609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (APIKeyHelpers.AppearsValid(m_apiKey))
		String_t* L_0 = __this->get_m_apiKey_3();
		// if (APIKeyHelpers.AppearsValid(m_apiKey))
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		bool L_1 = APIKeyHelpers_AppearsValid_m169516127(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// APIKeyHelpers.CacheAPIKey(m_apiKey);
		String_t* L_2 = __this->get_m_apiKey_3();
		// APIKeyHelpers.CacheAPIKey(m_apiKey);
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		APIKeyHelpers_CacheAPIKey_m3817519100(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_0023:
	{
		// var cachedAPIKey = APIKeyHelpers.GetCachedAPIKey();
		IL2CPP_RUNTIME_CLASS_INIT(APIKeyHelpers_t4091981690_il2cpp_TypeInfo_var);
		String_t* L_3 = APIKeyHelpers_GetCachedAPIKey_m2319953939(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (cachedAPIKey != null)
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// m_apiKey = cachedAPIKey;
		String_t* L_5 = V_0;
		__this->set_m_apiKey_3(L_5);
	}

IL_0039:
	{
	}

IL_003a:
	{
		// return m_apiKey;
		String_t* L_6 = __this->get_m_apiKey_3();
		V_1 = L_6;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Void WrldMap::SetupApi()
extern "C"  void WrldMap_SetupApi_m3608385571 (WrldMap_t2502476010 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WrldMap_SetupApi_m3608385571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConfigParams_t592212086  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// var config = ConfigParams.MakeDefaultConfig();
		ConfigParams_t592212086  L_0 = ConfigParams_MakeDefaultConfig_m1184309901(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// config.DistanceToInterest = m_distanceToInterest;
		double L_1 = __this->get_m_distanceToInterest_6();
		// config.DistanceToInterest = m_distanceToInterest;
		ConfigParams_set_DistanceToInterest_m2240845259((&V_0), L_1, /*hidden argument*/NULL);
		// config.LatitudeDegrees = m_latitudeDegrees;
		double L_2 = __this->get_m_latitudeDegrees_4();
		// config.LatitudeDegrees = m_latitudeDegrees;
		ConfigParams_set_LatitudeDegrees_m191161488((&V_0), L_2, /*hidden argument*/NULL);
		// config.LongitudeDegrees = m_longitudeDegrees;
		double L_3 = __this->get_m_longitudeDegrees_5();
		// config.LongitudeDegrees = m_longitudeDegrees;
		ConfigParams_set_LongitudeDegrees_m232648108((&V_0), L_3, /*hidden argument*/NULL);
		// config.HeadingDegrees = m_headingDegrees;
		double L_4 = __this->get_m_headingDegrees_7();
		// config.HeadingDegrees = m_headingDegrees;
		ConfigParams_set_HeadingDegrees_m443737848((&V_0), L_4, /*hidden argument*/NULL);
		// config.StreamingLodBasedOnDistance = m_streamingLodBasedOnDistance;
		bool L_5 = __this->get_m_streamingLodBasedOnDistance_9();
		// config.StreamingLodBasedOnDistance = m_streamingLodBasedOnDistance;
		ConfigParams_set_StreamingLodBasedOnDistance_m3638004160((&V_0), L_5, /*hidden argument*/NULL);
		// config.MaterialsDirectory = m_materialDirectory;
		String_t* L_6 = __this->get_m_materialDirectory_10();
		(&V_0)->set_MaterialsDirectory_1(L_6);
		// config.OverrideLandmarkMaterial = m_overrideLandmarkMaterial;
		Material_t340375123 * L_7 = __this->get_m_overrideLandmarkMaterial_11();
		(&V_0)->set_OverrideLandmarkMaterial_2(L_7);
		// config.Collisions.TerrainCollision = m_terrainCollisions;
		CollisionConfig_t3653208188 * L_8 = (&V_0)->get_address_of_Collisions_5();
		bool L_9 = __this->get_m_terrainCollisions_13();
		// config.Collisions.TerrainCollision = m_terrainCollisions;
		CollisionConfig_set_TerrainCollision_m1283021126(L_8, L_9, /*hidden argument*/NULL);
		// config.Collisions.RoadCollision = m_roadCollisions;
		CollisionConfig_t3653208188 * L_10 = (&V_0)->get_address_of_Collisions_5();
		bool L_11 = __this->get_m_roadCollisions_14();
		// config.Collisions.RoadCollision = m_roadCollisions;
		CollisionConfig_set_RoadCollision_m3962151911(L_10, L_11, /*hidden argument*/NULL);
		// config.Collisions.BuildingCollision = m_buildingCollisions;
		CollisionConfig_t3653208188 * L_12 = (&V_0)->get_address_of_Collisions_5();
		bool L_13 = __this->get_m_buildingCollisions_15();
		// config.Collisions.BuildingCollision = m_buildingCollisions;
		CollisionConfig_set_BuildingCollision_m153433081(L_12, L_13, /*hidden argument*/NULL);
		// config.EnableLabels = m_enableLabels;
		bool L_14 = __this->get_m_enableLabels_16();
		// config.EnableLabels = m_enableLabels;
		ConfigParams_set_EnableLabels_m650675635((&V_0), L_14, /*hidden argument*/NULL);
	}

IL_00a5:
	try
	{ // begin try (depth: 1)
		// Api.Create(GetApiKey(), m_coordSystem, transform, config);
		// Api.Create(GetApiKey(), m_coordSystem, transform, config);
		String_t* L_15 = WrldMap_GetApiKey_m3036891609(__this, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_m_coordSystem_8();
		// Api.Create(GetApiKey(), m_coordSystem, transform, config);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		ConfigParams_t592212086  L_18 = V_0;
		// Api.Create(GetApiKey(), m_coordSystem, transform, config);
		IL2CPP_RUNTIME_CLASS_INIT(Api_t1190036922_il2cpp_TypeInfo_var);
		Api_Create_m3141181851(NULL /*static, unused*/, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		// catch (InvalidApiKeyException)
		goto IL_00c8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidApiKeyException_t175683051_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c4;
		throw e;
	}

CATCH_00c4:
	{ // begin catch(Wrld.Scripts.Utilities.InvalidApiKeyException)
		// throw;
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local);
	} // end catch (depth: 1)

IL_00c8:
	{
		// m_api = Api.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(Api_t1190036922_il2cpp_TypeInfo_var);
		Api_t1190036922 * L_19 = ((Api_t1190036922_StaticFields*)il2cpp_codegen_static_fields_for(Api_t1190036922_il2cpp_TypeInfo_var))->get_Instance_0();
		__this->set_m_api_17(L_19);
		// if (m_useBuiltInCameraControls)
		bool L_20 = __this->get_m_useBuiltInCameraControls_12();
		if (!L_20)
		{
			goto IL_00f6;
		}
	}
	{
		// m_api.CameraApi.SetControlledCamera(m_streamingCamera);
		Api_t1190036922 * L_21 = __this->get_m_api_17();
		// m_api.CameraApi.SetControlledCamera(m_streamingCamera);
		NullCheck(L_21);
		CameraApi_t3006904385 * L_22 = Api_get_CameraApi_m3686379629(L_21, /*hidden argument*/NULL);
		Camera_t4157153871 * L_23 = __this->get_m_streamingCamera_2();
		// m_api.CameraApi.SetControlledCamera(m_streamingCamera);
		NullCheck(L_22);
		CameraApi_SetControlledCamera_m697069180(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// }
		return;
	}
}
// System.Void WrldMap::Update()
extern "C"  void WrldMap_Update_m3803674609 (WrldMap_t2502476010 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WrldMap_Update_m3803674609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_useBuiltInCameraControls && (m_streamingCamera == m_api.CameraApi.GetControlledCamera()))
		bool L_0 = __this->get_m_useBuiltInCameraControls_12();
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		Camera_t4157153871 * L_1 = __this->get_m_streamingCamera_2();
		Api_t1190036922 * L_2 = __this->get_m_api_17();
		// if (m_useBuiltInCameraControls && (m_streamingCamera == m_api.CameraApi.GetControlledCamera()))
		NullCheck(L_2);
		CameraApi_t3006904385 * L_3 = Api_get_CameraApi_m3686379629(L_2, /*hidden argument*/NULL);
		// if (m_useBuiltInCameraControls && (m_streamingCamera == m_api.CameraApi.GetControlledCamera()))
		NullCheck(L_3);
		Camera_t4157153871 * L_4 = CameraApi_GetControlledCamera_m489287234(L_3, /*hidden argument*/NULL);
		// if (m_useBuiltInCameraControls && (m_streamingCamera == m_api.CameraApi.GetControlledCamera()))
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// m_api.StreamResourcesForBuiltInCamera(m_streamingCamera);
		Api_t1190036922 * L_6 = __this->get_m_api_17();
		Camera_t4157153871 * L_7 = __this->get_m_streamingCamera_2();
		// m_api.StreamResourcesForBuiltInCamera(m_streamingCamera);
		NullCheck(L_6);
		Api_StreamResourcesForBuiltInCamera_m2380658629(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0044:
	{
		// m_api.StreamResourcesForCamera(m_streamingCamera);
		Api_t1190036922 * L_8 = __this->get_m_api_17();
		Camera_t4157153871 * L_9 = __this->get_m_streamingCamera_2();
		// m_api.StreamResourcesForCamera(m_streamingCamera);
		NullCheck(L_8);
		Api_StreamResourcesForCamera_m1752875543(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// m_api.Update();
		Api_t1190036922 * L_10 = __this->get_m_api_17();
		// m_api.Update();
		NullCheck(L_10);
		Api_Update_m1762022946(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WrldMap::OnDestroy()
extern "C"  void WrldMap_OnDestroy_m3378423967 (WrldMap_t2502476010 * __this, const RuntimeMethod* method)
{
	{
		// if (m_api != null)
		Api_t1190036922 * L_0 = __this->get_m_api_17();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_api.Destroy();
		Api_t1190036922 * L_1 = __this->get_m_api_17();
		// m_api.Destroy();
		NullCheck(L_1);
		Api_Destroy_m2663251274(L_1, /*hidden argument*/NULL);
		// m_api = null;
		__this->set_m_api_17((Api_t1190036922 *)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void WrldMap::OnApplicationPause(System.Boolean)
extern "C"  void WrldMap_OnApplicationPause_m110949014 (WrldMap_t2502476010 * __this, bool ___isPaused0, const RuntimeMethod* method)
{
	{
		// SetApplicationPaused(isPaused);
		bool L_0 = ___isPaused0;
		// SetApplicationPaused(isPaused);
		WrldMap_SetApplicationPaused_m1055874497(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WrldMap::OnApplicationFocus(System.Boolean)
extern "C"  void WrldMap_OnApplicationFocus_m1093340881 (WrldMap_t2502476010 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	{
		// SetApplicationPaused(!hasFocus);
		bool L_0 = ___hasFocus0;
		// SetApplicationPaused(!hasFocus);
		WrldMap_SetApplicationPaused_m1055874497(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WrldMap::SetApplicationPaused(System.Boolean)
extern "C"  void WrldMap_SetApplicationPaused_m1055874497 (WrldMap_t2502476010 * __this, bool ___isPaused0, const RuntimeMethod* method)
{
	{
		// if (isPaused)
		bool L_0 = ___isPaused0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_api.OnApplicationPaused();
		Api_t1190036922 * L_1 = __this->get_m_api_17();
		// m_api.OnApplicationPaused();
		NullCheck(L_1);
		Api_OnApplicationPaused_m3460699407(L_1, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0019:
	{
		// m_api.OnApplicationResumed();
		Api_t1190036922 * L_2 = __this->get_m_api_17();
		// m_api.OnApplicationResumed();
		NullCheck(L_2);
		Api_OnApplicationResumed_m2647988865(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
