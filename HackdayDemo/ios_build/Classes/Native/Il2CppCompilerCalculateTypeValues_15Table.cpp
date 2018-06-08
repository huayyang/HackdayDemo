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


// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.ComponentModel.ListEntry
struct ListEntry_t1182276877;
// System.Delegate
struct Delegate_t1188392813;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4221220734;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t221103672;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1364470182;
// System.EventHandler
struct EventHandler_t1348719766;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t3637242902;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2091847364;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1693217257;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t2272350267;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4164928659;
// System.ComponentModel.IComponent
struct IComponent_t2320218252;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2184948248;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t39585132;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;




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
#ifndef DICTIONARYNODECOLLECTION_T819283804_H
#define DICTIONARYNODECOLLECTION_T819283804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t819283804  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t1624492310 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t819283804, ___dict_0)); }
	inline ListDictionary_t1624492310 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1624492310 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1624492310 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t819283804, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTION_T819283804_H
#ifndef ENUMCOMPARER_T557155003_H
#define ENUMCOMPARER_T557155003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t557155003  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T557155003_H
#ifndef EVENTHANDLERLIST_T1108123056_H
#define EVENTHANDLERLIST_T1108123056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1108123056  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t1182276877 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t1188392813 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1108123056, ___entries_0)); }
	inline ListEntry_t1182276877 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t1182276877 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t1182276877 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1108123056, ___null_entry_1)); }
	inline Delegate_t1188392813 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t1188392813 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t1188392813 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T1108123056_H
#ifndef MARSHALBYVALUECOMPONENT_T828052580_H
#define MARSHALBYVALUECOMPONENT_T828052580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t828052580  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t1108123056 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___eventList_0)); }
	inline EventHandlerList_t1108123056 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t1108123056 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t1108123056 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___disposedEvent_2)); }
	inline RuntimeObject * get_disposedEvent_2() const { return ___disposedEvent_2; }
	inline RuntimeObject ** get_address_of_disposedEvent_2() { return &___disposedEvent_2; }
	inline void set_disposedEvent_2(RuntimeObject * value)
	{
		___disposedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T828052580_H
#ifndef MEMBERDESCRIPTOR_T3815403747_H
#define MEMBERDESCRIPTOR_T3815403747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3815403747  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t1575011174* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t4221220734 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attrs_1)); }
	inline AttributeU5BU5D_t1575011174* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t1575011174** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t1575011174* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747, ___attrCollection_2)); }
	inline AttributeCollection_t4221220734 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t4221220734 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t4221220734 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3815403747_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#define PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t4164928659  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t2718874744 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___properties_1)); }
	inline ArrayList_t2718874744 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t2718874744 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t2718874744 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t4164928659_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t4164928659 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t4164928659_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t4164928659 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t4164928659 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T4164928659_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
#ifndef STANDARDVALUESCOLLECTION_T2184948248_H
#define STANDARDVALUESCOLLECTION_T2184948248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct  StandardValuesCollection_t2184948248  : public RuntimeObject
{
public:
	// System.Collections.ICollection System.ComponentModel.TypeConverter/StandardValuesCollection::values
	RuntimeObject* ___values_0;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t2184948248, ___values_0)); }
	inline RuntimeObject* get_values_0() const { return ___values_0; }
	inline RuntimeObject** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(RuntimeObject* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDVALUESCOLLECTION_T2184948248_H
#ifndef TYPEDESCRIPTIONPROVIDER_T3232077895_H
#define TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t3232077895  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifndef TYPEDESCRIPTOR_T3066613587_H
#define TYPEDESCRIPTOR_T3066613587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t3066613587  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t3066613587_StaticFields
{
public:
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	RuntimeObject * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t2718874744 * ___defaultConverters_1;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t1853889766 * ___componentTable_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t1853889766 * ___typeTable_3;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	RuntimeObject * ___typeDescriptionProvidersLock_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t221103672 * ___typeDescriptionProviders_5;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	RuntimeObject * ___componentDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t1364470182 * ___componentDescriptionProviders_7;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t1348719766 * ___onDispose_8;
	// System.ComponentModel.RefreshEventHandler System.ComponentModel.TypeDescriptor::Refreshed
	RefreshEventHandler_t3637242902 * ___Refreshed_9;

public:
	inline static int32_t get_offset_of_creatingDefaultConverters_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___creatingDefaultConverters_0)); }
	inline RuntimeObject * get_creatingDefaultConverters_0() const { return ___creatingDefaultConverters_0; }
	inline RuntimeObject ** get_address_of_creatingDefaultConverters_0() { return &___creatingDefaultConverters_0; }
	inline void set_creatingDefaultConverters_0(RuntimeObject * value)
	{
		___creatingDefaultConverters_0 = value;
		Il2CppCodeGenWriteBarrier((&___creatingDefaultConverters_0), value);
	}

	inline static int32_t get_offset_of_defaultConverters_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___defaultConverters_1)); }
	inline ArrayList_t2718874744 * get_defaultConverters_1() const { return ___defaultConverters_1; }
	inline ArrayList_t2718874744 ** get_address_of_defaultConverters_1() { return &___defaultConverters_1; }
	inline void set_defaultConverters_1(ArrayList_t2718874744 * value)
	{
		___defaultConverters_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultConverters_1), value);
	}

	inline static int32_t get_offset_of_componentTable_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___componentTable_2)); }
	inline Hashtable_t1853889766 * get_componentTable_2() const { return ___componentTable_2; }
	inline Hashtable_t1853889766 ** get_address_of_componentTable_2() { return &___componentTable_2; }
	inline void set_componentTable_2(Hashtable_t1853889766 * value)
	{
		___componentTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___componentTable_2), value);
	}

	inline static int32_t get_offset_of_typeTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___typeTable_3)); }
	inline Hashtable_t1853889766 * get_typeTable_3() const { return ___typeTable_3; }
	inline Hashtable_t1853889766 ** get_address_of_typeTable_3() { return &___typeTable_3; }
	inline void set_typeTable_3(Hashtable_t1853889766 * value)
	{
		___typeTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeTable_3), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProvidersLock_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___typeDescriptionProvidersLock_4)); }
	inline RuntimeObject * get_typeDescriptionProvidersLock_4() const { return ___typeDescriptionProvidersLock_4; }
	inline RuntimeObject ** get_address_of_typeDescriptionProvidersLock_4() { return &___typeDescriptionProvidersLock_4; }
	inline void set_typeDescriptionProvidersLock_4(RuntimeObject * value)
	{
		___typeDescriptionProvidersLock_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProvidersLock_4), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProviders_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___typeDescriptionProviders_5)); }
	inline Dictionary_2_t221103672 * get_typeDescriptionProviders_5() const { return ___typeDescriptionProviders_5; }
	inline Dictionary_2_t221103672 ** get_address_of_typeDescriptionProviders_5() { return &___typeDescriptionProviders_5; }
	inline void set_typeDescriptionProviders_5(Dictionary_2_t221103672 * value)
	{
		___typeDescriptionProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProviders_5), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProvidersLock_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___componentDescriptionProvidersLock_6)); }
	inline RuntimeObject * get_componentDescriptionProvidersLock_6() const { return ___componentDescriptionProvidersLock_6; }
	inline RuntimeObject ** get_address_of_componentDescriptionProvidersLock_6() { return &___componentDescriptionProvidersLock_6; }
	inline void set_componentDescriptionProvidersLock_6(RuntimeObject * value)
	{
		___componentDescriptionProvidersLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProvidersLock_6), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProviders_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___componentDescriptionProviders_7)); }
	inline Dictionary_2_t1364470182 * get_componentDescriptionProviders_7() const { return ___componentDescriptionProviders_7; }
	inline Dictionary_2_t1364470182 ** get_address_of_componentDescriptionProviders_7() { return &___componentDescriptionProviders_7; }
	inline void set_componentDescriptionProviders_7(Dictionary_2_t1364470182 * value)
	{
		___componentDescriptionProviders_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProviders_7), value);
	}

	inline static int32_t get_offset_of_onDispose_8() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___onDispose_8)); }
	inline EventHandler_t1348719766 * get_onDispose_8() const { return ___onDispose_8; }
	inline EventHandler_t1348719766 ** get_address_of_onDispose_8() { return &___onDispose_8; }
	inline void set_onDispose_8(EventHandler_t1348719766 * value)
	{
		___onDispose_8 = value;
		Il2CppCodeGenWriteBarrier((&___onDispose_8), value);
	}

	inline static int32_t get_offset_of_Refreshed_9() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___Refreshed_9)); }
	inline RefreshEventHandler_t3637242902 * get_Refreshed_9() const { return ___Refreshed_9; }
	inline RefreshEventHandler_t3637242902 ** get_address_of_Refreshed_9() { return &___Refreshed_9; }
	inline void set_Refreshed_9(RefreshEventHandler_t3637242902 * value)
	{
		___Refreshed_9 = value;
		Il2CppCodeGenWriteBarrier((&___Refreshed_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T3066613587_H
#ifndef INFO_T3260944019_H
#define INFO_T3260944019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Info
struct  Info_t3260944019  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.Info::_infoType
	Type_t * ____infoType_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.Info::_attributes
	AttributeCollection_t4221220734 * ____attributes_1;

public:
	inline static int32_t get_offset_of__infoType_0() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____infoType_0)); }
	inline Type_t * get__infoType_0() const { return ____infoType_0; }
	inline Type_t ** get_address_of__infoType_0() { return &____infoType_0; }
	inline void set__infoType_0(Type_t * value)
	{
		____infoType_0 = value;
		Il2CppCodeGenWriteBarrier((&____infoType_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____attributes_1)); }
	inline AttributeCollection_t4221220734 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t4221220734 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t4221220734 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFO_T3260944019_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef READONLYCOLLECTIONBASE_T1836743899_H
#define READONLYCOLLECTIONBASE_T1836743899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t1836743899  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t1836743899, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T1836743899_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
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
#ifndef INSTANCEDESCRIPTOR_T657473484_H
#define INSTANCEDESCRIPTOR_T657473484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t657473484  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T657473484_H
#ifndef CULTUREINFOCOMPARER_T1184699714_H
#define CULTUREINFOCOMPARER_T1184699714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t1184699714  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T1184699714_H
#ifndef LISTENTRY_T1182276877_H
#define LISTENTRY_T1182276877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t1182276877  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t1188392813 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t1182276877 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t1182276877, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t1182276877, ___value_1)); }
	inline Delegate_t1188392813 * get_value_1() const { return ___value_1; }
	inline Delegate_t1188392813 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t1188392813 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t1182276877, ___next_2)); }
	inline ListEntry_t1182276877 * get_next_2() const { return ___next_2; }
	inline ListEntry_t1182276877 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t1182276877 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T1182276877_H
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
#ifndef KEYSCOLLECTION_T1318642398_H
#define KEYSCOLLECTION_T1318642398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1318642398  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t2091847364 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1318642398, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2091847364 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2091847364 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1318642398_H
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T2863182637_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T2863182637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t2863182637  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t2863182637, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t2863182637, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T2863182637_H
#ifndef _KEYSENUMERATOR_T4246666432_H
#define _KEYSENUMERATOR_T4246666432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t4246666432  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t2091847364 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t4246666432, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2091847364 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2091847364 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t4246666432, ___m_position_1)); }
	inline int32_t get_m_position_1() const { return ___m_position_1; }
	inline int32_t* get_address_of_m_position_1() { return &___m_position_1; }
	inline void set_m_position_1(int32_t value)
	{
		___m_position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _KEYSENUMERATOR_T4246666432_H
#ifndef STRINGCOLLECTION_T167406615_H
#define STRINGCOLLECTION_T167406615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t167406615  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t2718874744 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t167406615, ___data_0)); }
	inline ArrayList_t2718874744 * get_data_0() const { return ___data_0; }
	inline ArrayList_t2718874744 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t2718874744 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T167406615_H
#ifndef STRINGDICTIONARY_T120437468_H
#define STRINGDICTIONARY_T120437468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t120437468  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t1853889766 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t120437468, ___contents_0)); }
	inline Hashtable_t1853889766 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t1853889766 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t1853889766 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T120437468_H
#ifndef ATTRIBUTECOLLECTION_T4221220734_H
#define ATTRIBUTECOLLECTION_T4221220734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t4221220734  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t2718874744 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734, ___attrList_0)); }
	inline ArrayList_t2718874744 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t2718874744 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t2718874744 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t4221220734_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t4221220734 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t4221220734_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t4221220734 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t4221220734 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t4221220734 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T4221220734_H
#ifndef STRINGENUMERATOR_T3934291441_H
#define STRINGENUMERATOR_T3934291441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringEnumerator
struct  StringEnumerator_t3934291441  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Collections.Specialized.StringEnumerator::enumerable
	RuntimeObject* ___enumerable_0;

public:
	inline static int32_t get_offset_of_enumerable_0() { return static_cast<int32_t>(offsetof(StringEnumerator_t3934291441, ___enumerable_0)); }
	inline RuntimeObject* get_enumerable_0() const { return ___enumerable_0; }
	inline RuntimeObject** get_address_of_enumerable_0() { return &___enumerable_0; }
	inline void set_enumerable_0(RuntimeObject* value)
	{
		___enumerable_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGENUMERATOR_T3934291441_H
#ifndef _ITEM_T2272350267_H
#define _ITEM_T2272350267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t2272350267  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t2272350267, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t2272350267, ___value_1)); }
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
#endif // _ITEM_T2272350267_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#define NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2091847364  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t1853889766 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t2272350267 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t2718874744 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t950877179 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t1318642398 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsContainer_0)); }
	inline Hashtable_t1853889766 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t1853889766 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t1853889766 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_NullKeyItem_1)); }
	inline _Item_t2272350267 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t2272350267 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t2272350267 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsArray_2)); }
	inline ArrayList_t2718874744 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t2718874744 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t2718874744 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___infoCopy_7)); }
	inline SerializationInfo_t950877179 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t950877179 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t950877179 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___keyscoll_8)); }
	inline KeysCollection_t1318642398 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t1318642398 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t1318642398 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifndef GUIDCONVERTER_T3396672461_H
#define GUIDCONVERTER_T3396672461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t3396672461  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T3396672461_H
#ifndef TYPEINFO_T323385814_H
#define TYPEINFO_T323385814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeInfo
struct  TypeInfo_t323385814  : public Info_t3260944019
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::_properties
	PropertyDescriptorCollection_t4164928659 * ____properties_2;

public:
	inline static int32_t get_offset_of__properties_2() { return static_cast<int32_t>(offsetof(TypeInfo_t323385814, ____properties_2)); }
	inline PropertyDescriptorCollection_t4164928659 * get__properties_2() const { return ____properties_2; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of__properties_2() { return &____properties_2; }
	inline void set__properties_2(PropertyDescriptorCollection_t4164928659 * value)
	{
		____properties_2 = value;
		Il2CppCodeGenWriteBarrier((&____properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T323385814_H
#ifndef COMPONENTINFO_T1259248179_H
#define COMPONENTINFO_T1259248179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentInfo
struct  ComponentInfo_t1259248179  : public Info_t3260944019
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.ComponentInfo::_component
	RuntimeObject* ____component_2;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::_properties
	PropertyDescriptorCollection_t4164928659 * ____properties_3;

public:
	inline static int32_t get_offset_of__component_2() { return static_cast<int32_t>(offsetof(ComponentInfo_t1259248179, ____component_2)); }
	inline RuntimeObject* get__component_2() const { return ____component_2; }
	inline RuntimeObject** get_address_of__component_2() { return &____component_2; }
	inline void set__component_2(RuntimeObject* value)
	{
		____component_2 = value;
		Il2CppCodeGenWriteBarrier((&____component_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(ComponentInfo_t1259248179, ____properties_3)); }
	inline PropertyDescriptorCollection_t4164928659 * get__properties_3() const { return ____properties_3; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyDescriptorCollection_t4164928659 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTINFO_T1259248179_H
#ifndef LISTBINDABLEATTRIBUTE_T2461184386_H
#define LISTBINDABLEATTRIBUTE_T2461184386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t2461184386  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t2461184386_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t2461184386 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t2461184386 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t2461184386 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t2461184386 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t2461184386 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t2461184386 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t2461184386 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t2461184386 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t2461184386 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2461184386_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t2461184386 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t2461184386 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t2461184386 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T2461184386_H
#ifndef BASENUMBERCONVERTER_T312147029_H
#define BASENUMBERCONVERTER_T312147029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t312147029  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t312147029, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T312147029_H
#ifndef EXPANDABLEOBJECTCONVERTER_T420832579_H
#define EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t420832579  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T476798118_H
#define MERGABLEPROPERTYATTRIBUTE_T476798118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t476798118  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t476798118_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t476798118 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t476798118 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t476798118 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t476798118 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t476798118 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t476798118 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t476798118 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t476798118 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t476798118 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t476798118_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t476798118 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t476798118 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t476798118 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T476798118_H
#ifndef NULLABLECONVERTER_T1985728604_H
#define NULLABLECONVERTER_T1985728604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t1985728604  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t2249118273 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t1985728604, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t2249118273 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t2249118273 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t2249118273 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T1985728604_H
#ifndef PROPERTYCHANGEDEVENTARGS_T3313059048_H
#define PROPERTYCHANGEDEVENTARGS_T3313059048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t3313059048  : public EventArgs_t3591816995
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t3313059048, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T3313059048_H
#ifndef PROPERTYDESCRIPTOR_T3244362832_H
#define PROPERTYDESCRIPTOR_T3244362832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3244362832  : public MemberDescriptor_t3815403747
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3244362832_H
#ifndef READONLYATTRIBUTE_T1907441566_H
#define READONLYATTRIBUTE_T1907441566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t1907441566  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t1907441566_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t1907441566 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t1907441566 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t1907441566 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t1907441566 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t1907441566 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t1907441566 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t1907441566 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t1907441566 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t1907441566 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T1907441566_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t279829077  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t279829077_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t279829077 * ___Default_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t279829077 * ___No_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t279829077 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___Default_1)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_Default_1() const { return ___Default_1; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___No_2)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_No_2() const { return ___No_2; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___Yes_3)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_Yes_3() const { return ___Yes_3; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#ifndef REFERENCECONVERTER_T1811933861_H
#define REFERENCECONVERTER_T1811933861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1811933861  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1811933861_H
#ifndef TYPECONVERTERATTRIBUTE_T3271584429_H
#define TYPECONVERTERATTRIBUTE_T3271584429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t3271584429  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::converter_type
	String_t* ___converter_type_1;

public:
	inline static int32_t get_offset_of_converter_type_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3271584429, ___converter_type_1)); }
	inline String_t* get_converter_type_1() const { return ___converter_type_1; }
	inline String_t** get_address_of_converter_type_1() { return &___converter_type_1; }
	inline void set_converter_type_1(String_t* value)
	{
		___converter_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___converter_type_1), value);
	}
};

struct TypeConverterAttribute_t3271584429_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t3271584429 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3271584429_StaticFields, ___Default_0)); }
	inline TypeConverterAttribute_t3271584429 * get_Default_0() const { return ___Default_0; }
	inline TypeConverterAttribute_t3271584429 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TypeConverterAttribute_t3271584429 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T3271584429_H
#ifndef REFRESHEVENTARGS_T9288056_H
#define REFRESHEVENTARGS_T9288056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t9288056  : public EventArgs_t3591816995
{
public:
	// System.Object System.ComponentModel.RefreshEventArgs::component
	RuntimeObject * ___component_1;
	// System.Type System.ComponentModel.RefreshEventArgs::type
	Type_t * ___type_2;

public:
	inline static int32_t get_offset_of_component_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t9288056, ___component_1)); }
	inline RuntimeObject * get_component_1() const { return ___component_1; }
	inline RuntimeObject ** get_address_of_component_1() { return &___component_1; }
	inline void set_component_1(RuntimeObject * value)
	{
		___component_1 = value;
		Il2CppCodeGenWriteBarrier((&___component_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t9288056, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((&___type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTARGS_T9288056_H
#ifndef TOOLBOXITEMATTRIBUTE_T243705872_H
#define TOOLBOXITEMATTRIBUTE_T243705872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemAttribute
struct  ToolboxItemAttribute_t243705872  : public Attribute_t861562559
{
public:
	// System.Type System.ComponentModel.ToolboxItemAttribute::itemType
	Type_t * ___itemType_2;
	// System.String System.ComponentModel.ToolboxItemAttribute::itemTypeName
	String_t* ___itemTypeName_3;

public:
	inline static int32_t get_offset_of_itemType_2() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t243705872, ___itemType_2)); }
	inline Type_t * get_itemType_2() const { return ___itemType_2; }
	inline Type_t ** get_address_of_itemType_2() { return &___itemType_2; }
	inline void set_itemType_2(Type_t * value)
	{
		___itemType_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_2), value);
	}

	inline static int32_t get_offset_of_itemTypeName_3() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t243705872, ___itemTypeName_3)); }
	inline String_t* get_itemTypeName_3() const { return ___itemTypeName_3; }
	inline String_t** get_address_of_itemTypeName_3() { return &___itemTypeName_3; }
	inline void set_itemTypeName_3(String_t* value)
	{
		___itemTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___itemTypeName_3), value);
	}
};

struct ToolboxItemAttribute_t243705872_StaticFields
{
public:
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::Default
	ToolboxItemAttribute_t243705872 * ___Default_0;
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::None
	ToolboxItemAttribute_t243705872 * ___None_1;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t243705872_StaticFields, ___Default_0)); }
	inline ToolboxItemAttribute_t243705872 * get_Default_0() const { return ___Default_0; }
	inline ToolboxItemAttribute_t243705872 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ToolboxItemAttribute_t243705872 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t243705872_StaticFields, ___None_1)); }
	inline ToolboxItemAttribute_t243705872 * get_None_1() const { return ___None_1; }
	inline ToolboxItemAttribute_t243705872 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(ToolboxItemAttribute_t243705872 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((&___None_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMATTRIBUTE_T243705872_H
#ifndef BOOLEANCONVERTER_T941538927_H
#define BOOLEANCONVERTER_T941538927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t941538927  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T941538927_H
#ifndef BROWSABLEATTRIBUTE_T3407396667_H
#define BROWSABLEATTRIBUTE_T3407396667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t3407396667  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t3407396667_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t3407396667 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t3407396667 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t3407396667 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t3407396667 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t3407396667 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t3407396667 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t3407396667 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3407396667_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t3407396667 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t3407396667 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t3407396667 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T3407396667_H
#ifndef NAMEVALUECOLLECTION_T407452768_H
#define NAMEVALUECOLLECTION_T407452768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t407452768  : public NameObjectCollectionBase_t2091847364
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t1281789340* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t1281789340* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t1281789340* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t1281789340* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAll_11)); }
	inline StringU5BU5D_t1281789340* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t1281789340* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T407452768_H
#ifndef TIMESPANCONVERTER_T3504031848_H
#define TIMESPANCONVERTER_T3504031848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t3504031848  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T3504031848_H
#ifndef COLLECTIONCONVERTER_T3078846443_H
#define COLLECTIONCONVERTER_T3078846443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t3078846443  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T3078846443_H
#ifndef COMPONENTCOLLECTION_T1445440302_H
#define COMPONENTCOLLECTION_T1445440302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t1445440302  : public ReadOnlyCollectionBase_t1836743899
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T1445440302_H
#ifndef COMPONENT_T3620823400_H
#define COMPONENT_T3620823400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3620823400  : public MarshalByRefObject_t2760389100
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1108123056 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___event_handlers_1)); }
	inline EventHandlerList_t1108123056 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1108123056 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1108123056 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3620823400_H
#ifndef CULTUREINFOCONVERTER_T81550636_H
#define CULTUREINFOCONVERTER_T81550636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t81550636  : public TypeConverter_t2249118273
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t2184948248 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t81550636, ____standardValues_0)); }
	inline StandardValuesCollection_t2184948248 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t2184948248 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t2184948248 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T81550636_H
#ifndef CHARCONVERTER_T747842913_H
#define CHARCONVERTER_T747842913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t747842913  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T747842913_H
#ifndef DATETIMECONVERTER_T2298802450_H
#define DATETIMECONVERTER_T2298802450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t2298802450  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T2298802450_H
#ifndef DEFAULTEVENTATTRIBUTE_T3124666540_H
#define DEFAULTEVENTATTRIBUTE_T3124666540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t3124666540  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3124666540, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t3124666540_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t3124666540 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3124666540_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t3124666540 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t3124666540 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t3124666540 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T3124666540_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#define DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1952442862  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1952442862, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t1952442862_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1952442862 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1952442862_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1952442862 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1952442862 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1952442862 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1952442862_H
#ifndef DEFAULTVALUEATTRIBUTE_T587583663_H
#define DEFAULTVALUEATTRIBUTE_T587583663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t587583663  : public Attribute_t861562559
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t587583663, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T587583663_H
#ifndef DESCRIPTIONATTRIBUTE_T874390736_H
#define DESCRIPTIONATTRIBUTE_T874390736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t874390736  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t874390736_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t874390736 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t874390736 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t874390736 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t874390736 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T874390736_H
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
#ifndef DESIGNERATTRIBUTE_T2079716647_H
#define DESIGNERATTRIBUTE_T2079716647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t2079716647  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2079716647, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2079716647, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T2079716647_H
#ifndef DESIGNONLYATTRIBUTE_T1017827538_H
#define DESIGNONLYATTRIBUTE_T1017827538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t1017827538  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t1017827538_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t1017827538 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t1017827538 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t1017827538 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t1017827538 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t1017827538 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t1017827538 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t1017827538 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t1017827538 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t1017827538 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t1017827538_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t1017827538 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t1017827538 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t1017827538 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T1017827538_H
#ifndef DESIGNERSERIALIZERATTRIBUTE_T1570548024_H
#define DESIGNERSERIALIZERATTRIBUTE_T1570548024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.DesignerSerializerAttribute
struct  DesignerSerializerAttribute_t1570548024  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_0;
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::baseSerializerTypeName
	String_t* ___baseSerializerTypeName_1;

public:
	inline static int32_t get_offset_of_serializerTypeName_0() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t1570548024, ___serializerTypeName_0)); }
	inline String_t* get_serializerTypeName_0() const { return ___serializerTypeName_0; }
	inline String_t** get_address_of_serializerTypeName_0() { return &___serializerTypeName_0; }
	inline void set_serializerTypeName_0(String_t* value)
	{
		___serializerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypeName_0), value);
	}

	inline static int32_t get_offset_of_baseSerializerTypeName_1() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t1570548024, ___baseSerializerTypeName_1)); }
	inline String_t* get_baseSerializerTypeName_1() const { return ___baseSerializerTypeName_1; }
	inline String_t** get_address_of_baseSerializerTypeName_1() { return &___baseSerializerTypeName_1; }
	inline void set_baseSerializerTypeName_1(String_t* value)
	{
		___baseSerializerTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___baseSerializerTypeName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZERATTRIBUTE_T1570548024_H
#ifndef CATEGORYATTRIBUTE_T39585132_H
#define CATEGORYATTRIBUTE_T39585132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t39585132  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t39585132_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t39585132 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_3;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___def_2)); }
	inline CategoryAttribute_t39585132 * get_def_2() const { return ___def_2; }
	inline CategoryAttribute_t39585132 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(CategoryAttribute_t39585132 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier((&___def_2), value);
	}

	inline static int32_t get_offset_of_lockobj_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___lockobj_3)); }
	inline RuntimeObject * get_lockobj_3() const { return ___lockobj_3; }
	inline RuntimeObject ** get_address_of_lockobj_3() { return &___lockobj_3; }
	inline void set_lockobj_3(RuntimeObject * value)
	{
		___lockobj_3 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T39585132_H
#ifndef ROOTDESIGNERSERIALIZERATTRIBUTE_T3074689342_H
#define ROOTDESIGNERSERIALIZERATTRIBUTE_T3074689342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct  RootDesignerSerializerAttribute_t3074689342  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializer
	String_t* ___serializer_0;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::baseserializer
	String_t* ___baseserializer_1;
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::reload
	bool ___reload_2;

public:
	inline static int32_t get_offset_of_serializer_0() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___serializer_0)); }
	inline String_t* get_serializer_0() const { return ___serializer_0; }
	inline String_t** get_address_of_serializer_0() { return &___serializer_0; }
	inline void set_serializer_0(String_t* value)
	{
		___serializer_0 = value;
		Il2CppCodeGenWriteBarrier((&___serializer_0), value);
	}

	inline static int32_t get_offset_of_baseserializer_1() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___baseserializer_1)); }
	inline String_t* get_baseserializer_1() const { return ___baseserializer_1; }
	inline String_t** get_address_of_baseserializer_1() { return &___baseserializer_1; }
	inline void set_baseserializer_1(String_t* value)
	{
		___baseserializer_1 = value;
		Il2CppCodeGenWriteBarrier((&___baseserializer_1), value);
	}

	inline static int32_t get_offset_of_reload_2() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___reload_2)); }
	inline bool get_reload_2() const { return ___reload_2; }
	inline bool* get_address_of_reload_2() { return &___reload_2; }
	inline void set_reload_2(bool value)
	{
		___reload_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOTDESIGNERSERIALIZERATTRIBUTE_T3074689342_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T2841844458_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T2841844458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t2841844458  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t2841844458_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t2841844458 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t2841844458 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t2841844458 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t2841844458 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t2841844458 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t2841844458 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t2841844458 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t2841844458 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t2841844458 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2841844458_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t2841844458 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t2841844458 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t2841844458 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T2841844458_H
#ifndef EDITORATTRIBUTE_T1332199665_H
#define EDITORATTRIBUTE_T1332199665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t1332199665  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t1332199665, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t1332199665, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T1332199665_H
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
#ifndef ENUMCONVERTER_T1688858217_H
#define ENUMCONVERTER_T1688858217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1688858217  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t2184948248 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t1688858217, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t1688858217, ___stdValues_1)); }
	inline StandardValuesCollection_t2184948248 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t2184948248 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t2184948248 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T1688858217_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#define DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t2912925731  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t2912925731_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t2912925731 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t2912925731 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t2912925731 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t2912925731 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2912925731_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t2912925731 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t2912925731 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t2912925731 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T2912925731_H
#ifndef STRINGCONVERTER_T3216726494_H
#define STRINGCONVERTER_T3216726494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t3216726494  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T3216726494_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T157990669_H
#define ARRAYPROPERTYDESCRIPTOR_T157990669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t157990669  : public PropertyDescriptor_t3244362832
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_3;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_4;

public:
	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t157990669, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_array_type_4() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t157990669, ___array_type_4)); }
	inline Type_t * get_array_type_4() const { return ___array_type_4; }
	inline Type_t ** get_address_of_array_type_4() { return &___array_type_4; }
	inline void set_array_type_4(Type_t * value)
	{
		___array_type_4 = value;
		Il2CppCodeGenWriteBarrier((&___array_type_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYPROPERTYDESCRIPTOR_T157990669_H
#ifndef ARRAYCONVERTER_T1750795769_H
#define ARRAYCONVERTER_T1750795769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t1750795769  : public CollectionConverter_t3078846443
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T1750795769_H
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
#ifndef LISTCHANGEDTYPE_T2971046703_H
#define LISTCHANGEDTYPE_T2971046703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedType
struct  ListChangedType_t2971046703 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListChangedType_t2971046703, ___value___1)); }
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
#endif // LISTCHANGEDTYPE_T2971046703_H
#ifndef SBYTECONVERTER_T2970182448_H
#define SBYTECONVERTER_T2970182448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t2970182448  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T2970182448_H
#ifndef COMPONENTCONVERTER_T118941221_H
#define COMPONENTCONVERTER_T118941221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t118941221  : public ReferenceConverter_t1811933861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T118941221_H
#ifndef DECIMALCONVERTER_T3574141665_H
#define DECIMALCONVERTER_T3574141665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t3574141665  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T3574141665_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3481291396 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3481291396, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3481291396_H
#ifndef DOUBLECONVERTER_T805142290_H
#define DOUBLECONVERTER_T805142290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t805142290  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T805142290_H
#ifndef EDITORBROWSABLESTATE_T2839071299_H
#define EDITORBROWSABLESTATE_T2839071299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t2839071299 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t2839071299, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T2839071299_H
#ifndef BYTECONVERTER_T1408362843_H
#define BYTECONVERTER_T1408362843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t1408362843  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T1408362843_H
#ifndef SINGLECONVERTER_T902207630_H
#define SINGLECONVERTER_T902207630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t902207630  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T902207630_H
#ifndef INT32CONVERTER_T677227065_H
#define INT32CONVERTER_T677227065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t677227065  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T677227065_H
#ifndef INT16CONVERTER_T1119562914_H
#define INT16CONVERTER_T1119562914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t1119562914  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T1119562914_H
#ifndef COLLECTIONCHANGEACTION_T1145968582_H
#define COLLECTIONCHANGEACTION_T1145968582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t1145968582 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t1145968582, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T1145968582_H
#ifndef LISTSORTDIRECTION_T852779204_H
#define LISTSORTDIRECTION_T852779204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t852779204 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t852779204, ___value___1)); }
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
#endif // LISTSORTDIRECTION_T852779204_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T3529497203_H
#define REFLECTIONPROPERTYDESCRIPTOR_T3529497203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t3529497203  : public PropertyDescriptor_t3244362832
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_3;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_5;

public:
	inline static int32_t get_offset_of__member_3() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ____member_3)); }
	inline PropertyInfo_t * get__member_3() const { return ____member_3; }
	inline PropertyInfo_t ** get_address_of__member_3() { return &____member_3; }
	inline void set__member_3(PropertyInfo_t * value)
	{
		____member_3 = value;
		Il2CppCodeGenWriteBarrier((&____member_3), value);
	}

	inline static int32_t get_offset_of__componentType_4() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ____componentType_4)); }
	inline Type_t * get__componentType_4() const { return ____componentType_4; }
	inline Type_t ** get_address_of__componentType_4() { return &____componentType_4; }
	inline void set__componentType_4(Type_t * value)
	{
		____componentType_4 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_4), value);
	}

	inline static int32_t get_offset_of__propertyType_5() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ____propertyType_5)); }
	inline Type_t * get__propertyType_5() const { return ____propertyType_5; }
	inline Type_t ** get_address_of__propertyType_5() { return &____propertyType_5; }
	inline void set__propertyType_5(Type_t * value)
	{
		____propertyType_5 = value;
		Il2CppCodeGenWriteBarrier((&____propertyType_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROPERTYDESCRIPTOR_T3529497203_H
#ifndef REFRESHPROPERTIES_T2310254728_H
#define REFRESHPROPERTIES_T2310254728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t2310254728 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshProperties_t2310254728, ___value___1)); }
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
#endif // REFRESHPROPERTIES_T2310254728_H
#ifndef INT64CONVERTER_T1092099567_H
#define INT64CONVERTER_T1092099567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t1092099567  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T1092099567_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#define INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t2634129013  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T2634129013_H
#ifndef LISTCHANGEDEVENTARGS_T1328006001_H
#define LISTCHANGEDEVENTARGS_T1328006001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t1328006001  : public EventArgs_t3591816995
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::changedType
	int32_t ___changedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_3;

public:
	inline static int32_t get_offset_of_changedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___changedType_1)); }
	inline int32_t get_changedType_1() const { return ___changedType_1; }
	inline int32_t* get_address_of_changedType_1() { return &___changedType_1; }
	inline void set_changedType_1(int32_t value)
	{
		___changedType_1 = value;
	}

	inline static int32_t get_offset_of_oldIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___oldIndex_2)); }
	inline int32_t get_oldIndex_2() const { return ___oldIndex_2; }
	inline int32_t* get_address_of_oldIndex_2() { return &___oldIndex_2; }
	inline void set_oldIndex_2(int32_t value)
	{
		___oldIndex_2 = value;
	}

	inline static int32_t get_offset_of_newIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1328006001, ___newIndex_3)); }
	inline int32_t get_newIndex_3() const { return ___newIndex_3; }
	inline int32_t* get_address_of_newIndex_3() { return &___newIndex_3; }
	inline void set_newIndex_3(int32_t value)
	{
		___newIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTARGS_T1328006001_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1475454531_H
#define EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1475454531  : public Attribute_t861562559
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1475454531, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1475454531_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t4084246596  : public Attribute_t861562559
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t4084246596_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t4084246596 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t4084246596 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t4084246596 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t4084246596 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T4084246596_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T2078493172_H
#define REFRESHPROPERTIESATTRIBUTE_T2078493172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t2078493172  : public Attribute_t861562559
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t2078493172_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t2078493172 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t2078493172 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t2078493172 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t2078493172 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t2078493172 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t2078493172 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier((&___All_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t2078493172 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t2078493172 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t2078493172 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2078493172_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t2078493172 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t2078493172 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t2078493172 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T2078493172_H
#ifndef COLLECTIONCHANGEEVENTARGS_T1870286136_H
#define COLLECTIONCHANGEEVENTARGS_T1870286136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1870286136  : public EventArgs_t3591816995
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1870286136, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1870286136, ___theElement_2)); }
	inline RuntimeObject * get_theElement_2() const { return ___theElement_2; }
	inline RuntimeObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(RuntimeObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier((&___theElement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T1870286136_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (DictionaryNodeCollection_t819283804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1500[2] = 
{
	DictionaryNodeCollection_t819283804::get_offset_of_dict_0(),
	DictionaryNodeCollection_t819283804::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (DictionaryNodeCollectionEnumerator_t2863182637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1501[2] = 
{
	DictionaryNodeCollectionEnumerator_t2863182637::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t2863182637::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (NameObjectCollectionBase_t2091847364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1502[10] = 
{
	NameObjectCollectionBase_t2091847364::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t2091847364::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t2091847364::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t2091847364::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t2091847364::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (_Item_t2272350267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1503[2] = 
{
	_Item_t2272350267::get_offset_of_key_0(),
	_Item_t2272350267::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (_KeysEnumerator_t4246666432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1504[2] = 
{
	_KeysEnumerator_t4246666432::get_offset_of_m_collection_0(),
	_KeysEnumerator_t4246666432::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (KeysCollection_t1318642398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1505[1] = 
{
	KeysCollection_t1318642398::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (NameValueCollection_t407452768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1506[2] = 
{
	NameValueCollection_t407452768::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t407452768::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (StringCollection_t167406615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1507[1] = 
{
	StringCollection_t167406615::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (StringDictionary_t120437468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1508[1] = 
{
	StringDictionary_t120437468::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (StringEnumerator_t3934291441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1509[1] = 
{
	StringEnumerator_t3934291441::get_offset_of_enumerable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (ArrayConverter_t1750795769), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (ArrayPropertyDescriptor_t157990669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1511[2] = 
{
	ArrayPropertyDescriptor_t157990669::get_offset_of_index_3(),
	ArrayPropertyDescriptor_t157990669::get_offset_of_array_type_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (AttributeCollection_t4221220734), -1, sizeof(AttributeCollection_t4221220734_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1512[2] = 
{
	AttributeCollection_t4221220734::get_offset_of_attrList_0(),
	AttributeCollection_t4221220734_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (BaseNumberConverter_t312147029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1513[1] = 
{
	BaseNumberConverter_t312147029::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (BooleanConverter_t941538927), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (BrowsableAttribute_t3407396667), -1, sizeof(BrowsableAttribute_t3407396667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1515[4] = 
{
	BrowsableAttribute_t3407396667::get_offset_of_browsable_0(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (ByteConverter_t1408362843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (CategoryAttribute_t39585132), -1, sizeof(CategoryAttribute_t39585132_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1517[4] = 
{
	CategoryAttribute_t39585132::get_offset_of_category_0(),
	CategoryAttribute_t39585132::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_def_2(),
	CategoryAttribute_t39585132_StaticFields::get_offset_of_lockobj_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (CharConverter_t747842913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (CollectionChangeAction_t1145968582)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1519[4] = 
{
	CollectionChangeAction_t1145968582::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (CollectionChangeEventArgs_t1870286136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1520[2] = 
{
	CollectionChangeEventArgs_t1870286136::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t1870286136::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (CollectionConverter_t3078846443), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (ComponentCollection_t1445440302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (ComponentConverter_t118941221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (Component_t3620823400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1524[3] = 
{
	Component_t3620823400::get_offset_of_event_handlers_1(),
	Component_t3620823400::get_offset_of_mySite_2(),
	Component_t3620823400::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { sizeof (CultureInfoConverter_t81550636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1525[1] = 
{
	CultureInfoConverter_t81550636::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (CultureInfoComparer_t1184699714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (DateTimeConverter_t2298802450), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (DecimalConverter_t3574141665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (DefaultEventAttribute_t3124666540), -1, sizeof(DefaultEventAttribute_t3124666540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1529[2] = 
{
	DefaultEventAttribute_t3124666540::get_offset_of_eventName_0(),
	DefaultEventAttribute_t3124666540_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (DefaultPropertyAttribute_t1952442862), -1, sizeof(DefaultPropertyAttribute_t1952442862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1530[2] = 
{
	DefaultPropertyAttribute_t1952442862::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t1952442862_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (DefaultValueAttribute_t587583663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1531[1] = 
{
	DefaultValueAttribute_t587583663::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { sizeof (DescriptionAttribute_t874390736), -1, sizeof(DescriptionAttribute_t874390736_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1532[2] = 
{
	DescriptionAttribute_t874390736::get_offset_of_desc_0(),
	DescriptionAttribute_t874390736_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { sizeof (DesignerAttribute_t2079716647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1533[2] = 
{
	DesignerAttribute_t2079716647::get_offset_of_name_0(),
	DesignerAttribute_t2079716647::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { sizeof (DesignerCategoryAttribute_t2912925731), -1, sizeof(DesignerCategoryAttribute_t2912925731_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1534[5] = 
{
	DesignerCategoryAttribute_t2912925731::get_offset_of_category_0(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (DesignerSerializationVisibilityAttribute_t4084246596), -1, sizeof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1535[5] = 
{
	DesignerSerializationVisibilityAttribute_t4084246596::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (DesignerSerializationVisibility_t3481291396)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1536[4] = 
{
	DesignerSerializationVisibility_t3481291396::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { sizeof (DesignOnlyAttribute_t1017827538), -1, sizeof(DesignOnlyAttribute_t1017827538_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1542[4] = 
{
	DesignOnlyAttribute_t1017827538::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t1017827538_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t1017827538_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t1017827538_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (DesignerSerializerAttribute_t1570548024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1543[2] = 
{
	DesignerSerializerAttribute_t1570548024::get_offset_of_serializerTypeName_0(),
	DesignerSerializerAttribute_t1570548024::get_offset_of_baseSerializerTypeName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (InstanceDescriptor_t657473484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1544[3] = 
{
	InstanceDescriptor_t657473484::get_offset_of_member_0(),
	InstanceDescriptor_t657473484::get_offset_of_arguments_1(),
	InstanceDescriptor_t657473484::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { sizeof (RootDesignerSerializerAttribute_t3074689342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1545[3] = 
{
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_serializer_0(),
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_baseserializer_1(),
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_reload_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (DesignTimeVisibleAttribute_t2841844458), -1, sizeof(DesignTimeVisibleAttribute_t2841844458_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1546[4] = 
{
	DesignTimeVisibleAttribute_t2841844458::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t2841844458_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t2841844458_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t2841844458_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (DoubleConverter_t805142290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { sizeof (EditorAttribute_t1332199665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1548[2] = 
{
	EditorAttribute_t1332199665::get_offset_of_name_0(),
	EditorAttribute_t1332199665::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { sizeof (EditorBrowsableAttribute_t1475454531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1549[1] = 
{
	EditorBrowsableAttribute_t1475454531::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (EditorBrowsableState_t2839071299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1550[4] = 
{
	EditorBrowsableState_t2839071299::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { sizeof (EnumConverter_t1688858217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1551[2] = 
{
	EnumConverter_t1688858217::get_offset_of_type_0(),
	EnumConverter_t1688858217::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { sizeof (EnumComparer_t557155003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { sizeof (ListEntry_t1182276877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1553[3] = 
{
	ListEntry_t1182276877::get_offset_of_key_0(),
	ListEntry_t1182276877::get_offset_of_value_1(),
	ListEntry_t1182276877::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { sizeof (EventHandlerList_t1108123056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1554[2] = 
{
	EventHandlerList_t1108123056::get_offset_of_entries_0(),
	EventHandlerList_t1108123056::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { sizeof (ExpandableObjectConverter_t420832579), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { sizeof (GuidConverter_t3396672461), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (Int16Converter_t1119562914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (Int32Converter_t677227065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (Int64Converter_t1092099567), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (InvalidEnumArgumentException_t2634129013), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { sizeof (ListBindableAttribute_t2461184386), -1, sizeof(ListBindableAttribute_t2461184386_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1569[4] = 
{
	ListBindableAttribute_t2461184386_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t2461184386_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t2461184386_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t2461184386::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { sizeof (ListChangedEventArgs_t1328006001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1570[3] = 
{
	ListChangedEventArgs_t1328006001::get_offset_of_changedType_1(),
	ListChangedEventArgs_t1328006001::get_offset_of_oldIndex_2(),
	ListChangedEventArgs_t1328006001::get_offset_of_newIndex_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { sizeof (ListChangedType_t2971046703)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1571[9] = 
{
	ListChangedType_t2971046703::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (ListSortDirection_t852779204)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1572[3] = 
{
	ListSortDirection_t852779204::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { sizeof (MarshalByValueComponent_t828052580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1573[3] = 
{
	MarshalByValueComponent_t828052580::get_offset_of_eventList_0(),
	MarshalByValueComponent_t828052580::get_offset_of_mySite_1(),
	MarshalByValueComponent_t828052580::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (MemberDescriptor_t3815403747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1574[3] = 
{
	MemberDescriptor_t3815403747::get_offset_of_name_0(),
	MemberDescriptor_t3815403747::get_offset_of_attrs_1(),
	MemberDescriptor_t3815403747::get_offset_of_attrCollection_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (MergablePropertyAttribute_t476798118), -1, sizeof(MergablePropertyAttribute_t476798118_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1575[4] = 
{
	MergablePropertyAttribute_t476798118::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t476798118_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t476798118_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t476798118_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (NullableConverter_t1985728604), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1576[3] = 
{
	NullableConverter_t1985728604::get_offset_of_nullableType_0(),
	NullableConverter_t1985728604::get_offset_of_underlyingType_1(),
	NullableConverter_t1985728604::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (PropertyChangedEventArgs_t3313059048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1577[1] = 
{
	PropertyChangedEventArgs_t3313059048::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { sizeof (PropertyDescriptorCollection_t4164928659), -1, sizeof(PropertyDescriptorCollection_t4164928659_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1578[3] = 
{
	PropertyDescriptorCollection_t4164928659_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { sizeof (PropertyDescriptor_t3244362832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { sizeof (ReadOnlyAttribute_t1907441566), -1, sizeof(ReadOnlyAttribute_t1907441566_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1580[4] = 
{
	ReadOnlyAttribute_t1907441566::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { sizeof (RecommendedAsConfigurableAttribute_t279829077), -1, sizeof(RecommendedAsConfigurableAttribute_t279829077_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1581[4] = 
{
	RecommendedAsConfigurableAttribute_t279829077::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_Default_1(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_No_2(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (ReferenceConverter_t1811933861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1582[1] = 
{
	ReferenceConverter_t1811933861::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (ReflectionPropertyDescriptor_t3529497203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1583[3] = 
{
	ReflectionPropertyDescriptor_t3529497203::get_offset_of__member_3(),
	ReflectionPropertyDescriptor_t3529497203::get_offset_of__componentType_4(),
	ReflectionPropertyDescriptor_t3529497203::get_offset_of__propertyType_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { sizeof (RefreshEventArgs_t9288056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1584[2] = 
{
	RefreshEventArgs_t9288056::get_offset_of_component_1(),
	RefreshEventArgs_t9288056::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { sizeof (RefreshPropertiesAttribute_t2078493172), -1, sizeof(RefreshPropertiesAttribute_t2078493172_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1585[4] = 
{
	RefreshPropertiesAttribute_t2078493172::get_offset_of_refresh_0(),
	RefreshPropertiesAttribute_t2078493172_StaticFields::get_offset_of_All_1(),
	RefreshPropertiesAttribute_t2078493172_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t2078493172_StaticFields::get_offset_of_Repaint_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (RefreshProperties_t2310254728)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1586[4] = 
{
	RefreshProperties_t2310254728::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (SByteConverter_t2970182448), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { sizeof (SingleConverter_t902207630), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { sizeof (StringConverter_t3216726494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (TimeSpanConverter_t3504031848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { sizeof (ToolboxItemAttribute_t243705872), -1, sizeof(ToolboxItemAttribute_t243705872_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1591[4] = 
{
	ToolboxItemAttribute_t243705872_StaticFields::get_offset_of_Default_0(),
	ToolboxItemAttribute_t243705872_StaticFields::get_offset_of_None_1(),
	ToolboxItemAttribute_t243705872::get_offset_of_itemType_2(),
	ToolboxItemAttribute_t243705872::get_offset_of_itemTypeName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { sizeof (TypeConverterAttribute_t3271584429), -1, sizeof(TypeConverterAttribute_t3271584429_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1592[2] = 
{
	TypeConverterAttribute_t3271584429_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t3271584429::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (TypeConverter_t2249118273), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { sizeof (StandardValuesCollection_t2184948248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1594[1] = 
{
	StandardValuesCollection_t2184948248::get_offset_of_values_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { sizeof (TypeDescriptionProvider_t3232077895), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { sizeof (TypeDescriptor_t3066613587), -1, sizeof(TypeDescriptor_t3066613587_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1596[10] = 
{
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_creatingDefaultConverters_0(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_defaultConverters_1(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_componentTable_2(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_typeTable_3(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_typeDescriptionProvidersLock_4(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_typeDescriptionProviders_5(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_componentDescriptionProvidersLock_6(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_componentDescriptionProviders_7(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_onDispose_8(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_Refreshed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { sizeof (Info_t3260944019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1597[2] = 
{
	Info_t3260944019::get_offset_of__infoType_0(),
	Info_t3260944019::get_offset_of__attributes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { sizeof (ComponentInfo_t1259248179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1598[2] = 
{
	ComponentInfo_t1259248179::get_offset_of__component_2(),
	ComponentInfo_t1259248179::get_offset_of__properties_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (TypeInfo_t323385814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1599[1] = 
{
	TypeInfo_t323385814::get_offset_of__properties_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
