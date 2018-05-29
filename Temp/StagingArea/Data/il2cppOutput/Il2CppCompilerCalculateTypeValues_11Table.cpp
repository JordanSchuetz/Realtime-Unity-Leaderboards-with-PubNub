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


// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1575011174;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4221220734;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.ComponentModel.ListEntry
struct ListEntry_t1182276877;
// System.Delegate
struct Delegate_t1188392813;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.WeakReference
struct WeakReference_t1334886716;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t88602298;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3244362832;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t2651755546;
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
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t2272350267;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2091847364;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1693217257;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t417719465;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2278158832;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4164928659;
// System.ComponentModel.IComponent
struct IComponent_t2320218252;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3232077895;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2184948248;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;




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
#ifndef MEMBERDESCRIPTORCOMPARER_T861557818_H
#define MEMBERDESCRIPTORCOMPARER_T861557818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t861557818  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T861557818_H
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

struct MemberDescriptor_t3815403747_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3815403747_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3815403747_H
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
#ifndef LOCALE_T4128636109_H
#define LOCALE_T4128636109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t4128636109  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T4128636109_H
#ifndef EVENTDESCRIPTORCOLLECTION_T2278158832_H
#define EVENTDESCRIPTORCOLLECTION_T2278158832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t2278158832  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t2718874744 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___eventList_0)); }
	inline ArrayList_t2718874744 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t2718874744 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t2718874744 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t2278158832_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t2278158832 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2278158832_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t2278158832 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t2278158832 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t2278158832 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T2278158832_H
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
#ifndef WEAKOBJECTWRAPPER_T827463650_H
#define WEAKOBJECTWRAPPER_T827463650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapper
struct  WeakObjectWrapper_t827463650  : public RuntimeObject
{
public:
	// System.Int32 System.ComponentModel.WeakObjectWrapper::<TargetHashCode>k__BackingField
	int32_t ___U3CTargetHashCodeU3Ek__BackingField_0;
	// System.WeakReference System.ComponentModel.WeakObjectWrapper::<Weak>k__BackingField
	WeakReference_t1334886716 * ___U3CWeakU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t827463650, ___U3CTargetHashCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTargetHashCodeU3Ek__BackingField_0() const { return ___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTargetHashCodeU3Ek__BackingField_0() { return &___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline void set_U3CTargetHashCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTargetHashCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CWeakU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t827463650, ___U3CWeakU3Ek__BackingField_1)); }
	inline WeakReference_t1334886716 * get_U3CWeakU3Ek__BackingField_1() const { return ___U3CWeakU3Ek__BackingField_1; }
	inline WeakReference_t1334886716 ** get_address_of_U3CWeakU3Ek__BackingField_1() { return &___U3CWeakU3Ek__BackingField_1; }
	inline void set_U3CWeakU3Ek__BackingField_1(WeakReference_t1334886716 * value)
	{
		___U3CWeakU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWeakU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPER_T827463650_H
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
	// System.ComponentModel.EventDescriptor System.ComponentModel.Info::_defaultEvent
	EventDescriptor_t88602298 * ____defaultEvent_1;
	// System.Boolean System.ComponentModel.Info::_gotDefaultEvent
	bool ____gotDefaultEvent_2;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.Info::_defaultProperty
	PropertyDescriptor_t3244362832 * ____defaultProperty_3;
	// System.Boolean System.ComponentModel.Info::_gotDefaultProperty
	bool ____gotDefaultProperty_4;
	// System.ComponentModel.AttributeCollection System.ComponentModel.Info::_attributes
	AttributeCollection_t4221220734 * ____attributes_5;

public:
	inline static int32_t get_offset_of__infoType_0() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____infoType_0)); }
	inline Type_t * get__infoType_0() const { return ____infoType_0; }
	inline Type_t ** get_address_of__infoType_0() { return &____infoType_0; }
	inline void set__infoType_0(Type_t * value)
	{
		____infoType_0 = value;
		Il2CppCodeGenWriteBarrier((&____infoType_0), value);
	}

	inline static int32_t get_offset_of__defaultEvent_1() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____defaultEvent_1)); }
	inline EventDescriptor_t88602298 * get__defaultEvent_1() const { return ____defaultEvent_1; }
	inline EventDescriptor_t88602298 ** get_address_of__defaultEvent_1() { return &____defaultEvent_1; }
	inline void set__defaultEvent_1(EventDescriptor_t88602298 * value)
	{
		____defaultEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultEvent_1), value);
	}

	inline static int32_t get_offset_of__gotDefaultEvent_2() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____gotDefaultEvent_2)); }
	inline bool get__gotDefaultEvent_2() const { return ____gotDefaultEvent_2; }
	inline bool* get_address_of__gotDefaultEvent_2() { return &____gotDefaultEvent_2; }
	inline void set__gotDefaultEvent_2(bool value)
	{
		____gotDefaultEvent_2 = value;
	}

	inline static int32_t get_offset_of__defaultProperty_3() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____defaultProperty_3)); }
	inline PropertyDescriptor_t3244362832 * get__defaultProperty_3() const { return ____defaultProperty_3; }
	inline PropertyDescriptor_t3244362832 ** get_address_of__defaultProperty_3() { return &____defaultProperty_3; }
	inline void set__defaultProperty_3(PropertyDescriptor_t3244362832 * value)
	{
		____defaultProperty_3 = value;
		Il2CppCodeGenWriteBarrier((&____defaultProperty_3), value);
	}

	inline static int32_t get_offset_of__gotDefaultProperty_4() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____gotDefaultProperty_4)); }
	inline bool get__gotDefaultProperty_4() const { return ____gotDefaultProperty_4; }
	inline bool* get_address_of__gotDefaultProperty_4() { return &____gotDefaultProperty_4; }
	inline void set__gotDefaultProperty_4(bool value)
	{
		____gotDefaultProperty_4 = value;
	}

	inline static int32_t get_offset_of__attributes_5() { return static_cast<int32_t>(offsetof(Info_t3260944019, ____attributes_5)); }
	inline AttributeCollection_t4221220734 * get__attributes_5() const { return ____attributes_5; }
	inline AttributeCollection_t4221220734 ** get_address_of__attributes_5() { return &____attributes_5; }
	inline void set__attributes_5(AttributeCollection_t4221220734 * value)
	{
		____attributes_5 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFO_T3260944019_H
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
	// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::descriptorHandler
	RuntimeObject* ___descriptorHandler_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t1853889766 * ___componentTable_3;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t1853889766 * ___typeTable_4;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::editors
	Hashtable_t1853889766 * ___editors_5;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	RuntimeObject * ___typeDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t221103672 * ___typeDescriptionProviders_7;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	RuntimeObject * ___componentDescriptionProvidersLock_8;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t1364470182 * ___componentDescriptionProviders_9;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t1348719766 * ___onDispose_10;
	// System.ComponentModel.RefreshEventHandler System.ComponentModel.TypeDescriptor::Refreshed
	RefreshEventHandler_t3637242902 * ___Refreshed_11;

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

	inline static int32_t get_offset_of_descriptorHandler_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___descriptorHandler_2)); }
	inline RuntimeObject* get_descriptorHandler_2() const { return ___descriptorHandler_2; }
	inline RuntimeObject** get_address_of_descriptorHandler_2() { return &___descriptorHandler_2; }
	inline void set_descriptorHandler_2(RuntimeObject* value)
	{
		___descriptorHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___descriptorHandler_2), value);
	}

	inline static int32_t get_offset_of_componentTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___componentTable_3)); }
	inline Hashtable_t1853889766 * get_componentTable_3() const { return ___componentTable_3; }
	inline Hashtable_t1853889766 ** get_address_of_componentTable_3() { return &___componentTable_3; }
	inline void set_componentTable_3(Hashtable_t1853889766 * value)
	{
		___componentTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___componentTable_3), value);
	}

	inline static int32_t get_offset_of_typeTable_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___typeTable_4)); }
	inline Hashtable_t1853889766 * get_typeTable_4() const { return ___typeTable_4; }
	inline Hashtable_t1853889766 ** get_address_of_typeTable_4() { return &___typeTable_4; }
	inline void set_typeTable_4(Hashtable_t1853889766 * value)
	{
		___typeTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeTable_4), value);
	}

	inline static int32_t get_offset_of_editors_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___editors_5)); }
	inline Hashtable_t1853889766 * get_editors_5() const { return ___editors_5; }
	inline Hashtable_t1853889766 ** get_address_of_editors_5() { return &___editors_5; }
	inline void set_editors_5(Hashtable_t1853889766 * value)
	{
		___editors_5 = value;
		Il2CppCodeGenWriteBarrier((&___editors_5), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProvidersLock_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___typeDescriptionProvidersLock_6)); }
	inline RuntimeObject * get_typeDescriptionProvidersLock_6() const { return ___typeDescriptionProvidersLock_6; }
	inline RuntimeObject ** get_address_of_typeDescriptionProvidersLock_6() { return &___typeDescriptionProvidersLock_6; }
	inline void set_typeDescriptionProvidersLock_6(RuntimeObject * value)
	{
		___typeDescriptionProvidersLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProvidersLock_6), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProviders_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___typeDescriptionProviders_7)); }
	inline Dictionary_2_t221103672 * get_typeDescriptionProviders_7() const { return ___typeDescriptionProviders_7; }
	inline Dictionary_2_t221103672 ** get_address_of_typeDescriptionProviders_7() { return &___typeDescriptionProviders_7; }
	inline void set_typeDescriptionProviders_7(Dictionary_2_t221103672 * value)
	{
		___typeDescriptionProviders_7 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProviders_7), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProvidersLock_8() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___componentDescriptionProvidersLock_8)); }
	inline RuntimeObject * get_componentDescriptionProvidersLock_8() const { return ___componentDescriptionProvidersLock_8; }
	inline RuntimeObject ** get_address_of_componentDescriptionProvidersLock_8() { return &___componentDescriptionProvidersLock_8; }
	inline void set_componentDescriptionProvidersLock_8(RuntimeObject * value)
	{
		___componentDescriptionProvidersLock_8 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProvidersLock_8), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProviders_9() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___componentDescriptionProviders_9)); }
	inline Dictionary_2_t1364470182 * get_componentDescriptionProviders_9() const { return ___componentDescriptionProviders_9; }
	inline Dictionary_2_t1364470182 ** get_address_of_componentDescriptionProviders_9() { return &___componentDescriptionProviders_9; }
	inline void set_componentDescriptionProviders_9(Dictionary_2_t1364470182 * value)
	{
		___componentDescriptionProviders_9 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProviders_9), value);
	}

	inline static int32_t get_offset_of_onDispose_10() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___onDispose_10)); }
	inline EventHandler_t1348719766 * get_onDispose_10() const { return ___onDispose_10; }
	inline EventHandler_t1348719766 ** get_address_of_onDispose_10() { return &___onDispose_10; }
	inline void set_onDispose_10(EventHandler_t1348719766 * value)
	{
		___onDispose_10 = value;
		Il2CppCodeGenWriteBarrier((&___onDispose_10), value);
	}

	inline static int32_t get_offset_of_Refreshed_11() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___Refreshed_11)); }
	inline RefreshEventHandler_t3637242902 * get_Refreshed_11() const { return ___Refreshed_11; }
	inline RefreshEventHandler_t3637242902 ** get_address_of_Refreshed_11() { return &___Refreshed_11; }
	inline void set_Refreshed_11(RefreshEventHandler_t3637242902 * value)
	{
		___Refreshed_11 = value;
		Il2CppCodeGenWriteBarrier((&___Refreshed_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T3066613587_H
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
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t3232077895 * ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t3232077895, ____parent_0)); }
	inline TypeDescriptionProvider_t3232077895 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t3232077895 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t3232077895 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T3232077895_H
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
#ifndef DICTIONARYNODE_T417719465_H
#define DICTIONARYNODE_T417719465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t417719465  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t417719465 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___next_2)); }
	inline DictionaryNode_t417719465 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t417719465 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t417719465 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T417719465_H
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
#ifndef DICTIONARYNODEENUMERATOR_T1673829610_H
#define DICTIONARYNODEENUMERATOR_T1673829610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t1673829610  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t1624492310 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t417719465 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___dict_0)); }
	inline ListDictionary_t1624492310 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1624492310 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1624492310 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___current_2)); }
	inline DictionaryNode_t417719465 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t417719465 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t417719465 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1673829610, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODEENUMERATOR_T1673829610_H
#ifndef HYBRIDDICTIONARY_T4070033136_H
#define HYBRIDDICTIONARY_T4070033136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t4070033136  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t1853889766 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1624492310 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___hashtable_1)); }
	inline Hashtable_t1853889766 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t1853889766 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t1853889766 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___list_2)); }
	inline ListDictionary_t1624492310 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t1624492310 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t1624492310 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T4070033136_H
#ifndef LISTDICTIONARY_T1624492310_H
#define LISTDICTIONARY_T1624492310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1624492310  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t417719465 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___head_2)); }
	inline DictionaryNode_t417719465 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t417719465 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t417719465 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T1624492310_H
#ifndef EVENTDESCRIPTOR_T88602298_H
#define EVENTDESCRIPTOR_T88602298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t88602298  : public MemberDescriptor_t3815403747
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T88602298_H
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
#ifndef MONOTODOATTRIBUTE_T4131080582_H
#define MONOTODOATTRIBUTE_T4131080582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080582  : public Attribute_t861562559
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t4131080582, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080582_H
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
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeInfo::_events
	EventDescriptorCollection_t2278158832 * ____events_6;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::_properties
	PropertyDescriptorCollection_t4164928659 * ____properties_7;

public:
	inline static int32_t get_offset_of__events_6() { return static_cast<int32_t>(offsetof(TypeInfo_t323385814, ____events_6)); }
	inline EventDescriptorCollection_t2278158832 * get__events_6() const { return ____events_6; }
	inline EventDescriptorCollection_t2278158832 ** get_address_of__events_6() { return &____events_6; }
	inline void set__events_6(EventDescriptorCollection_t2278158832 * value)
	{
		____events_6 = value;
		Il2CppCodeGenWriteBarrier((&____events_6), value);
	}

	inline static int32_t get_offset_of__properties_7() { return static_cast<int32_t>(offsetof(TypeInfo_t323385814, ____properties_7)); }
	inline PropertyDescriptorCollection_t4164928659 * get__properties_7() const { return ____properties_7; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of__properties_7() { return &____properties_7; }
	inline void set__properties_7(PropertyDescriptorCollection_t4164928659 * value)
	{
		____properties_7 = value;
		Il2CppCodeGenWriteBarrier((&____properties_7), value);
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
	RuntimeObject* ____component_6;
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ComponentInfo::_events
	EventDescriptorCollection_t2278158832 * ____events_7;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::_properties
	PropertyDescriptorCollection_t4164928659 * ____properties_8;

public:
	inline static int32_t get_offset_of__component_6() { return static_cast<int32_t>(offsetof(ComponentInfo_t1259248179, ____component_6)); }
	inline RuntimeObject* get__component_6() const { return ____component_6; }
	inline RuntimeObject** get_address_of__component_6() { return &____component_6; }
	inline void set__component_6(RuntimeObject* value)
	{
		____component_6 = value;
		Il2CppCodeGenWriteBarrier((&____component_6), value);
	}

	inline static int32_t get_offset_of__events_7() { return static_cast<int32_t>(offsetof(ComponentInfo_t1259248179, ____events_7)); }
	inline EventDescriptorCollection_t2278158832 * get__events_7() const { return ____events_7; }
	inline EventDescriptorCollection_t2278158832 ** get_address_of__events_7() { return &____events_7; }
	inline void set__events_7(EventDescriptorCollection_t2278158832 * value)
	{
		____events_7 = value;
		Il2CppCodeGenWriteBarrier((&____events_7), value);
	}

	inline static int32_t get_offset_of__properties_8() { return static_cast<int32_t>(offsetof(ComponentInfo_t1259248179, ____properties_8)); }
	inline PropertyDescriptorCollection_t4164928659 * get__properties_8() const { return ____properties_8; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of__properties_8() { return &____properties_8; }
	inline void set__properties_8(PropertyDescriptorCollection_t4164928659 * value)
	{
		____properties_8 = value;
		Il2CppCodeGenWriteBarrier((&____properties_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTINFO_T1259248179_H
#ifndef DEFAULTTYPEDESCRIPTIONPROVIDER_T675274121_H
#define DEFAULTTYPEDESCRIPTIONPROVIDER_T675274121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider
struct  DefaultTypeDescriptionProvider_t675274121  : public TypeDescriptionProvider_t3232077895
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTYPEDESCRIPTIONPROVIDER_T675274121_H
#ifndef WRAPPEDTYPEDESCRIPTIONPROVIDER_T3047182012_H
#define WRAPPEDTYPEDESCRIPTIONPROVIDER_T3047182012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider
struct  WrappedTypeDescriptionProvider_t3047182012  : public TypeDescriptionProvider_t3232077895
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::<Wrapped>k__BackingField
	TypeDescriptionProvider_t3232077895 * ___U3CWrappedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CWrappedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WrappedTypeDescriptionProvider_t3047182012, ___U3CWrappedU3Ek__BackingField_1)); }
	inline TypeDescriptionProvider_t3232077895 * get_U3CWrappedU3Ek__BackingField_1() const { return ___U3CWrappedU3Ek__BackingField_1; }
	inline TypeDescriptionProvider_t3232077895 ** get_address_of_U3CWrappedU3Ek__BackingField_1() { return &___U3CWrappedU3Ek__BackingField_1; }
	inline void set_U3CWrappedU3Ek__BackingField_1(TypeDescriptionProvider_t3232077895 * value)
	{
		___U3CWrappedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWrappedU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPPEDTYPEDESCRIPTIONPROVIDER_T3047182012_H
#ifndef ATTRIBUTEPROVIDER_T1593068408_H
#define ATTRIBUTEPROVIDER_T1593068408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/AttributeProvider
struct  AttributeProvider_t1593068408  : public TypeDescriptionProvider_t3232077895
{
public:
	// System.Attribute[] System.ComponentModel.TypeDescriptor/AttributeProvider::attributes
	AttributeU5BU5D_t1575011174* ___attributes_1;

public:
	inline static int32_t get_offset_of_attributes_1() { return static_cast<int32_t>(offsetof(AttributeProvider_t1593068408, ___attributes_1)); }
	inline AttributeU5BU5D_t1575011174* get_attributes_1() const { return ___attributes_1; }
	inline AttributeU5BU5D_t1575011174** get_address_of_attributes_1() { return &___attributes_1; }
	inline void set_attributes_1(AttributeU5BU5D_t1575011174* value)
	{
		___attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEPROVIDER_T1593068408_H
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
#ifndef UINT64CONVERTER_T4189949036_H
#define UINT64CONVERTER_T4189949036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t4189949036  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T4189949036_H
#ifndef UINT32CONVERTER_T3472493373_H
#define UINT32CONVERTER_T3472493373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t3472493373  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T3472493373_H
#ifndef MONONOTSUPPORTEDATTRIBUTE_T2563528020_H
#define MONONOTSUPPORTEDATTRIBUTE_T2563528020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoNotSupportedAttribute
struct  MonoNotSupportedAttribute_t2563528020  : public MonoTODOAttribute_t4131080582
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONONOTSUPPORTEDATTRIBUTE_T2563528020_H
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
#ifndef UINT16CONVERTER_T819459975_H
#define UINT16CONVERTER_T819459975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t819459975  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T819459975_H
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
	PropertyInfo_t * ____member_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_6;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ____member_4)); }
	inline PropertyInfo_t * get__member_4() const { return ____member_4; }
	inline PropertyInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(PropertyInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3529497203, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((&____propertyType_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROPERTYDESCRIPTOR_T3529497203_H
#ifndef REFLECTIONEVENTDESCRIPTOR_T659576852_H
#define REFLECTIONEVENTDESCRIPTOR_T659576852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionEventDescriptor
struct  ReflectionEventDescriptor_t659576852  : public EventDescriptor_t88602298
{
public:
	// System.Type System.ComponentModel.ReflectionEventDescriptor::_eventType
	Type_t * ____eventType_4;
	// System.Type System.ComponentModel.ReflectionEventDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Reflection.EventInfo System.ComponentModel.ReflectionEventDescriptor::_eventInfo
	EventInfo_t * ____eventInfo_6;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectionEventDescriptor::add_method
	MethodInfo_t * ___add_method_7;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectionEventDescriptor::remove_method
	MethodInfo_t * ___remove_method_8;

public:
	inline static int32_t get_offset_of__eventType_4() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ____eventType_4)); }
	inline Type_t * get__eventType_4() const { return ____eventType_4; }
	inline Type_t ** get_address_of__eventType_4() { return &____eventType_4; }
	inline void set__eventType_4(Type_t * value)
	{
		____eventType_4 = value;
		Il2CppCodeGenWriteBarrier((&____eventType_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__eventInfo_6() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ____eventInfo_6)); }
	inline EventInfo_t * get__eventInfo_6() const { return ____eventInfo_6; }
	inline EventInfo_t ** get_address_of__eventInfo_6() { return &____eventInfo_6; }
	inline void set__eventInfo_6(EventInfo_t * value)
	{
		____eventInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____eventInfo_6), value);
	}

	inline static int32_t get_offset_of_add_method_7() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ___add_method_7)); }
	inline MethodInfo_t * get_add_method_7() const { return ___add_method_7; }
	inline MethodInfo_t ** get_address_of_add_method_7() { return &___add_method_7; }
	inline void set_add_method_7(MethodInfo_t * value)
	{
		___add_method_7 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_7), value);
	}

	inline static int32_t get_offset_of_remove_method_8() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t659576852, ___remove_method_8)); }
	inline MethodInfo_t * get_remove_method_8() const { return ___remove_method_8; }
	inline MethodInfo_t ** get_address_of_remove_method_8() { return &___remove_method_8; }
	inline void set_remove_method_8(MethodInfo_t * value)
	{
		___remove_method_8 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONEVENTDESCRIPTOR_T659576852_H
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
	int32_t ___index_4;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_5;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t157990669, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_array_type_5() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t157990669, ___array_type_5)); }
	inline Type_t * get_array_type_5() const { return ___array_type_5; }
	inline Type_t ** get_address_of_array_type_5() { return &___array_type_5; }
	inline void set_array_type_5(Type_t * value)
	{
		___array_type_5 = value;
		Il2CppCodeGenWriteBarrier((&___array_type_5), value);
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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (Locale_t4128636109), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1101 = { sizeof (MonoTODOAttribute_t4131080582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1101[1] = 
{
	MonoTODOAttribute_t4131080582::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1102 = { sizeof (MonoNotSupportedAttribute_t2563528020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1103 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1103[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1104 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1104[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1105 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1105[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1106 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1106[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1107 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1107[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1108[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1109[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (HybridDictionary_t4070033136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1110[3] = 
{
	HybridDictionary_t4070033136::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t4070033136::get_offset_of_hashtable_1(),
	HybridDictionary_t4070033136::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (ListDictionary_t1624492310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1111[4] = 
{
	ListDictionary_t1624492310::get_offset_of_count_0(),
	ListDictionary_t1624492310::get_offset_of_version_1(),
	ListDictionary_t1624492310::get_offset_of_head_2(),
	ListDictionary_t1624492310::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (DictionaryNode_t417719465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1112[3] = 
{
	DictionaryNode_t417719465::get_offset_of_key_0(),
	DictionaryNode_t417719465::get_offset_of_value_1(),
	DictionaryNode_t417719465::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (DictionaryNodeEnumerator_t1673829610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1113[4] = 
{
	DictionaryNodeEnumerator_t1673829610::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t1673829610::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t1673829610::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t1673829610::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (DictionaryNodeCollection_t819283804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1114[2] = 
{
	DictionaryNodeCollection_t819283804::get_offset_of_dict_0(),
	DictionaryNodeCollection_t819283804::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (DictionaryNodeCollectionEnumerator_t2863182637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1115[2] = 
{
	DictionaryNodeCollectionEnumerator_t2863182637::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t2863182637::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (NameObjectCollectionBase_t2091847364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1116[10] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { sizeof (_Item_t2272350267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[2] = 
{
	_Item_t2272350267::get_offset_of_key_0(),
	_Item_t2272350267::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (_KeysEnumerator_t4246666432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[2] = 
{
	_KeysEnumerator_t4246666432::get_offset_of_m_collection_0(),
	_KeysEnumerator_t4246666432::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (KeysCollection_t1318642398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1119[1] = 
{
	KeysCollection_t1318642398::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { sizeof (NameValueCollection_t407452768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1120[2] = 
{
	NameValueCollection_t407452768::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t407452768::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (InstanceDescriptor_t657473484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1121[3] = 
{
	InstanceDescriptor_t657473484::get_offset_of_member_0(),
	InstanceDescriptor_t657473484::get_offset_of_arguments_1(),
	InstanceDescriptor_t657473484::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { sizeof (ArrayConverter_t1750795769), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { sizeof (ArrayPropertyDescriptor_t157990669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1127[2] = 
{
	ArrayPropertyDescriptor_t157990669::get_offset_of_index_4(),
	ArrayPropertyDescriptor_t157990669::get_offset_of_array_type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (AttributeCollection_t4221220734), -1, sizeof(AttributeCollection_t4221220734_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1128[2] = 
{
	AttributeCollection_t4221220734::get_offset_of_attrList_0(),
	AttributeCollection_t4221220734_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (BaseNumberConverter_t312147029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1129[1] = 
{
	BaseNumberConverter_t312147029::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (BooleanConverter_t941538927), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (BrowsableAttribute_t3407396667), -1, sizeof(BrowsableAttribute_t3407396667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1131[4] = 
{
	BrowsableAttribute_t3407396667::get_offset_of_browsable_0(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t3407396667_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (ByteConverter_t1408362843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (CharConverter_t747842913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (CollectionConverter_t3078846443), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (Component_t3620823400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1135[3] = 
{
	Component_t3620823400::get_offset_of_event_handlers_1(),
	Component_t3620823400::get_offset_of_mySite_2(),
	Component_t3620823400::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (ComponentCollection_t1445440302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (CultureInfoConverter_t81550636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1137[1] = 
{
	CultureInfoConverter_t81550636::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (CultureInfoComparer_t1184699714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (DateTimeConverter_t2298802450), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (DecimalConverter_t3574141665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (DefaultEventAttribute_t3124666540), -1, sizeof(DefaultEventAttribute_t3124666540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1141[2] = 
{
	DefaultEventAttribute_t3124666540::get_offset_of_eventName_0(),
	DefaultEventAttribute_t3124666540_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (DefaultPropertyAttribute_t1952442862), -1, sizeof(DefaultPropertyAttribute_t1952442862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1142[2] = 
{
	DefaultPropertyAttribute_t1952442862::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t1952442862_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (DefaultValueAttribute_t587583663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1143[1] = 
{
	DefaultValueAttribute_t587583663::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (DescriptionAttribute_t874390736), -1, sizeof(DescriptionAttribute_t874390736_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1144[2] = 
{
	DescriptionAttribute_t874390736::get_offset_of_desc_0(),
	DescriptionAttribute_t874390736_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (DesignerAttribute_t2079716647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1145[2] = 
{
	DesignerAttribute_t2079716647::get_offset_of_name_0(),
	DesignerAttribute_t2079716647::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (DesignerCategoryAttribute_t2912925731), -1, sizeof(DesignerCategoryAttribute_t2912925731_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1146[5] = 
{
	DesignerCategoryAttribute_t2912925731::get_offset_of_category_0(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t2912925731_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (DesignerSerializationVisibility_t3481291396)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1147[4] = 
{
	DesignerSerializationVisibility_t3481291396::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (DesignerSerializationVisibilityAttribute_t4084246596), -1, sizeof(DesignerSerializationVisibilityAttribute_t4084246596_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1148[5] = 
{
	DesignerSerializationVisibilityAttribute_t4084246596::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t4084246596_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (DoubleConverter_t805142290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (EditorAttribute_t1332199665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1150[2] = 
{
	EditorAttribute_t1332199665::get_offset_of_name_0(),
	EditorAttribute_t1332199665::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (EditorBrowsableAttribute_t1475454531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1151[1] = 
{
	EditorBrowsableAttribute_t1475454531::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (EditorBrowsableState_t2839071299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1152[4] = 
{
	EditorBrowsableState_t2839071299::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (EnumConverter_t1688858217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1153[2] = 
{
	EnumConverter_t1688858217::get_offset_of_type_0(),
	EnumConverter_t1688858217::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (EnumComparer_t557155003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (EventDescriptor_t88602298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (EventDescriptorCollection_t2278158832), -1, sizeof(EventDescriptorCollection_t2278158832_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1156[3] = 
{
	EventDescriptorCollection_t2278158832::get_offset_of_eventList_0(),
	EventDescriptorCollection_t2278158832::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t2278158832_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (ListEntry_t1182276877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1157[3] = 
{
	ListEntry_t1182276877::get_offset_of_key_0(),
	ListEntry_t1182276877::get_offset_of_value_1(),
	ListEntry_t1182276877::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (EventHandlerList_t1108123056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1158[2] = 
{
	EventHandlerList_t1108123056::get_offset_of_entries_0(),
	EventHandlerList_t1108123056::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (ExpandableObjectConverter_t420832579), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (GuidConverter_t3396672461), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { sizeof (Int16Converter_t1119562914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { sizeof (Int32Converter_t677227065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { sizeof (Int64Converter_t1092099567), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { sizeof (MemberDescriptor_t3815403747), -1, sizeof(MemberDescriptor_t3815403747_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1171[4] = 
{
	MemberDescriptor_t3815403747::get_offset_of_name_0(),
	MemberDescriptor_t3815403747::get_offset_of_attrs_1(),
	MemberDescriptor_t3815403747::get_offset_of_attrCollection_2(),
	MemberDescriptor_t3815403747_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { sizeof (MemberDescriptorComparer_t861557818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { sizeof (NullableConverter_t1985728604), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1173[3] = 
{
	NullableConverter_t1985728604::get_offset_of_nullableType_0(),
	NullableConverter_t1985728604::get_offset_of_underlyingType_1(),
	NullableConverter_t1985728604::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { sizeof (PropertyDescriptor_t3244362832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { sizeof (PropertyDescriptorCollection_t4164928659), -1, sizeof(PropertyDescriptorCollection_t4164928659_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1175[3] = 
{
	PropertyDescriptorCollection_t4164928659_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t4164928659::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (ReadOnlyAttribute_t1907441566), -1, sizeof(ReadOnlyAttribute_t1907441566_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1176[4] = 
{
	ReadOnlyAttribute_t1907441566::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (ReferenceConverter_t1811933861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1177[1] = 
{
	ReferenceConverter_t1811933861::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (ReflectionEventDescriptor_t659576852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1178[5] = 
{
	ReflectionEventDescriptor_t659576852::get_offset_of__eventType_4(),
	ReflectionEventDescriptor_t659576852::get_offset_of__componentType_5(),
	ReflectionEventDescriptor_t659576852::get_offset_of__eventInfo_6(),
	ReflectionEventDescriptor_t659576852::get_offset_of_add_method_7(),
	ReflectionEventDescriptor_t659576852::get_offset_of_remove_method_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (ReflectionPropertyDescriptor_t3529497203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1179[3] = 
{
	ReflectionPropertyDescriptor_t3529497203::get_offset_of__member_4(),
	ReflectionPropertyDescriptor_t3529497203::get_offset_of__componentType_5(),
	ReflectionPropertyDescriptor_t3529497203::get_offset_of__propertyType_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (RefreshEventArgs_t9288056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1180[2] = 
{
	RefreshEventArgs_t9288056::get_offset_of_component_1(),
	RefreshEventArgs_t9288056::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (SByteConverter_t2970182448), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (SingleConverter_t902207630), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (StringConverter_t3216726494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (TimeSpanConverter_t3504031848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (TypeConverter_t2249118273), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (StandardValuesCollection_t2184948248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1186[1] = 
{
	StandardValuesCollection_t2184948248::get_offset_of_values_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (TypeConverterAttribute_t3271584429), -1, sizeof(TypeConverterAttribute_t3271584429_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1187[2] = 
{
	TypeConverterAttribute_t3271584429_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t3271584429::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (TypeDescriptionProvider_t3232077895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1188[1] = 
{
	TypeDescriptionProvider_t3232077895::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (TypeDescriptor_t3066613587), -1, sizeof(TypeDescriptor_t3066613587_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1189[12] = 
{
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_creatingDefaultConverters_0(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_defaultConverters_1(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_descriptorHandler_2(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_componentTable_3(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_typeTable_4(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_editors_5(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_typeDescriptionProvidersLock_6(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_typeDescriptionProviders_7(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_componentDescriptionProvidersLock_8(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_componentDescriptionProviders_9(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_onDispose_10(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_Refreshed_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (AttributeProvider_t1593068408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1190[1] = 
{
	AttributeProvider_t1593068408::get_offset_of_attributes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (WrappedTypeDescriptionProvider_t3047182012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[1] = 
{
	WrappedTypeDescriptionProvider_t3047182012::get_offset_of_U3CWrappedU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (DefaultTypeDescriptionProvider_t675274121), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (Info_t3260944019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1193[6] = 
{
	Info_t3260944019::get_offset_of__infoType_0(),
	Info_t3260944019::get_offset_of__defaultEvent_1(),
	Info_t3260944019::get_offset_of__gotDefaultEvent_2(),
	Info_t3260944019::get_offset_of__defaultProperty_3(),
	Info_t3260944019::get_offset_of__gotDefaultProperty_4(),
	Info_t3260944019::get_offset_of__attributes_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (ComponentInfo_t1259248179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1194[3] = 
{
	ComponentInfo_t1259248179::get_offset_of__component_6(),
	ComponentInfo_t1259248179::get_offset_of__events_7(),
	ComponentInfo_t1259248179::get_offset_of__properties_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { sizeof (TypeInfo_t323385814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1195[2] = 
{
	TypeInfo_t323385814::get_offset_of__events_6(),
	TypeInfo_t323385814::get_offset_of__properties_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (UInt16Converter_t819459975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (UInt32Converter_t3472493373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { sizeof (UInt64Converter_t4189949036), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { sizeof (WeakObjectWrapper_t827463650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1199[2] = 
{
	WeakObjectWrapper_t827463650::get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0(),
	WeakObjectWrapper_t827463650::get_offset_of_U3CWeakU3Ek__BackingField_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
