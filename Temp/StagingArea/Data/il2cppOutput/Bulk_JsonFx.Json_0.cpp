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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t949931907;
// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t3837617027;
// System.Type
struct Type_t;
// Pathfinding.Serialization.JsonFx.JsonReader
struct JsonReader_t3266634654;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// Pathfinding.Serialization.JsonFx.JsonDeserializationException
struct JsonDeserializationException_t2406110853;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.JsonSerializationException
struct JsonSerializationException_t3109053593;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.ArgumentException
struct ArgumentException_t132251570;
// Pathfinding.Serialization.JsonFx.JsonNameAttribute
struct JsonNameAttribute_t425422381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Attribute
struct Attribute_t861562559;
// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t2493837886;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.Stack`1<System.Collections.ArrayList>
struct Stack_1_t3562264199;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t347344375;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_t3165258040;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.StringComparer
struct StringComparer_t3301955079;
// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>
struct List_1_t2422006649;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// Pathfinding.Serialization.JsonFx.JsonSpecifiedPropertyAttribute
struct JsonSpecifiedPropertyAttribute_t115917564;
// Pathfinding.Serialization.JsonFx.JsonTypeCoercionException
struct JsonTypeCoercionException_t4151781493;
// System.Exception
struct Exception_t;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t3483137480;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IO.StringWriter
struct StringWriter_t802263757;
// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct WriteDelegate_1_t4077604362;
// System.Enum
struct Enum_t4135868527;
// System.Enum[]
struct EnumU5BU5D_t596894966;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Uri
struct Uri_t100236324;
// System.Version
struct Version_t3456873960;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Reflection.AssemblyName
struct AssemblyName_t270931938;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Collections.Generic.List`1<System.Enum>
struct List_1_t1312975973;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct Dictionary_2_t1314637808;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Reflection.MemberInfo,System.Collections.DictionaryEntry>
struct Transform_1_t152506148;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.ArrayList[]
struct ArrayListU5BU5D_t588196521;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// Pathfinding.Serialization.JsonFx.JsonConverter[]
struct JsonConverterU5BU5D_t3910822674;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>[]
struct Dictionary_2U5BU5D_t1256487657;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t296309482;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.Collections.DictionaryEntry>
struct Transform_1_t1536982668;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1750446691;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3411219591;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern const RuntimeType* JsonIgnoreAttribute_t316361994_0_0_0_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* ICustomAttributeProvider_t1530824137_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t JsonIgnoreAttribute_IsJsonIgnore_m638233806_MetadataUsageId;
extern const RuntimeType* JsonNameAttribute_t425422381_0_0_0_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonNameAttribute_t425422381_il2cpp_TypeInfo_var;
extern const uint32_t JsonNameAttribute_GetJsonName_m3272941041_MetadataUsageId;
extern RuntimeClass* JsonReaderSettings_t2493837886_il2cpp_TypeInfo_var;
extern const uint32_t JsonReader__ctor_m2503642600_MetadataUsageId;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_1_t3562264199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1__ctor_m2612972609_RuntimeMethod_var;
extern const uint32_t JsonReader__ctor_m1487403671_MetadataUsageId;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeType* Dictionary_2_t2865362463_0_0_0_var;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var;
extern RuntimeClass* Console_t3208230065_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2138047601;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral2647588310;
extern String_t* _stringLiteral670053913;
extern String_t* _stringLiteral2385296252;
extern String_t* _stringLiteral3079778386;
extern const uint32_t JsonReader_Read_m2473083464_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Count_m2934127733_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3762517327_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m2730968292_RuntimeMethod_var;
extern String_t* _stringLiteral2747695202;
extern String_t* _stringLiteral4213774559;
extern const uint32_t JsonReader_ReadObject_m778351444_MetadataUsageId;
extern const RuntimeType* String_t_0_0_0_var;
extern RuntimeClass* JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3414374386;
extern String_t* _stringLiteral2492308818;
extern const uint32_t JsonReader_GetGenericDictionaryType_m796749635_MetadataUsageId;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m2287542950_RuntimeMethod_var;
extern String_t* _stringLiteral785454394;
extern String_t* _stringLiteral1910126379;
extern String_t* _stringLiteral3247304688;
extern String_t* _stringLiteral1378472873;
extern String_t* _stringLiteral3633384747;
extern String_t* _stringLiteral2376253809;
extern const uint32_t JsonReader_PopulateObject_m1813506123_MetadataUsageId;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1_get_Count_m396621852_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m2156809409_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m3824829859_RuntimeMethod_var;
extern String_t* _stringLiteral4205860656;
extern String_t* _stringLiteral2224422865;
extern const uint32_t JsonReader_ReadArray_m1334971453_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* NumberFormatInfo_t435877138_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral514668375;
extern String_t* _stringLiteral2905194509;
extern const uint32_t JsonReader_ReadString_m1735479335_MetadataUsageId;
extern const RuntimeType* Decimal_t2948259380_0_0_0_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2912911974;
extern const uint32_t JsonReader_ReadNumber_m226931756_MetadataUsageId;
extern RuntimeClass* JsonReader_t3266634654_il2cpp_TypeInfo_var;
extern const uint32_t JsonReader_Deserialize_m1913124879_MetadataUsageId;
extern String_t* _stringLiteral3450910593;
extern String_t* _stringLiteral2768708586;
extern String_t* _stringLiteral3450582913;
extern String_t* _stringLiteral2046860218;
extern String_t* _stringLiteral3450582918;
extern String_t* _stringLiteral3453007779;
extern const uint32_t JsonReader_Tokenize_m3740989926_MetadataUsageId;
extern RuntimeClass* StringComparer_t3301955079_il2cpp_TypeInfo_var;
extern const uint32_t JsonReaderSettings_IsTypeHintName_m280374552_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m1904888016_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3926730779_RuntimeMethod_var;
extern const uint32_t JsonReaderSettings_GetConverter_m2765855980_MetadataUsageId;
extern RuntimeClass* TypeCoercionUtility_t347344375_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2422006649_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2916482698_RuntimeMethod_var;
extern const uint32_t JsonReaderSettings__ctor_m4161459_MetadataUsageId;
extern const RuntimeType* JsonSpecifiedPropertyAttribute_t115917564_0_0_0_var;
extern RuntimeClass* JsonSpecifiedPropertyAttribute_t115917564_il2cpp_TypeInfo_var;
extern const uint32_t JsonSpecifiedPropertyAttribute_GetJsonSpecifiedProperty_m3177035715_MetadataUsageId;
extern RuntimeClass* JsonWriterSettings_t3483137480_il2cpp_TypeInfo_var;
extern const uint32_t JsonWriter__ctor_m2625422002_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* StringWriter_t802263757_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1975106570;
extern String_t* _stringLiteral3588954345;
extern const uint32_t JsonWriter__ctor_m94315965_MetadataUsageId;
extern RuntimeClass* JsonWriter_t3837617027_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t JsonWriter_Serialize_m2865883582_MetadataUsageId;
extern RuntimeClass* IJsonSerializable_t2955010683_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonSerializationException_t3109053593_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* Version_t3456873960_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3602970396;
extern const uint32_t JsonWriter_Write_m2669424010_MetadataUsageId;
extern const RuntimeMethod* WriteDelegate_1_Invoke_m3174722131_RuntimeMethod_var;
extern String_t* _stringLiteral458512160;
extern String_t* _stringLiteral453924640;
extern const uint32_t JsonWriter_Write_m3280208291_MetadataUsageId;
extern String_t* _stringLiteral3452614620;
extern const uint32_t JsonWriter_Write_m2611716318_MetadataUsageId;
extern const RuntimeType* FlagsAttribute_t2262502849_0_0_0_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614586;
extern String_t* _stringLiteral3450517380;
extern const uint32_t JsonWriter_Write_m4285848228_MetadataUsageId;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3455432692;
extern String_t* _stringLiteral3451303928;
extern const uint32_t JsonWriter_Write_m1926659931_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m3191060035_MetadataUsageId;
extern String_t* _stringLiteral3452614585;
extern const uint32_t JsonWriter_Write_m3494363828_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m2864239550_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m1887754804_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m2224805734_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m3857254344_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m297332272_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m3051012970_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m684828457_MetadataUsageId;
extern String_t* _stringLiteral3452614606;
extern const uint32_t JsonWriter_Write_m1130403249_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m3883806249_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m4052531007_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t JsonWriter_WriteArray_m1436810601_MetadataUsageId;
extern RuntimeClass* IDictionaryEnumerator_t1693217257_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3959998165_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m3716971248_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1279427033_RuntimeMethod_var;
extern String_t* _stringLiteral2661900808;
extern const uint32_t JsonWriter_WriteDictionary_m2899446293_MetadataUsageId;
extern String_t* _stringLiteral3410467453;
extern String_t* _stringLiteral15954665;
extern String_t* _stringLiteral1093966344;
extern String_t* _stringLiteral1703019870;
extern String_t* _stringLiteral3752218755;
extern String_t* _stringLiteral1653389075;
extern String_t* _stringLiteral1340805833;
extern String_t* _stringLiteral822204849;
extern String_t* _stringLiteral1083846209;
extern const uint32_t JsonWriter_WriteObject_m3041493761_MetadataUsageId;
extern const RuntimeType* JsonOptInAttribute_t2827491814_0_0_0_var;
extern const RuntimeType* JsonMemberAttribute_t3353731244_0_0_0_var;
extern String_t* _stringLiteral1085139274;
extern const uint32_t JsonWriter_IsIgnored_m796319191_MetadataUsageId;
extern const RuntimeType* DefaultValueAttribute_t587583663_0_0_0_var;
extern RuntimeClass* DefaultValueAttribute_t587583663_il2cpp_TypeInfo_var;
extern const uint32_t JsonWriter_IsDefaultValue_m3781132218_MetadataUsageId;
extern RuntimeClass* List_1_t1312975973_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m146283286_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1999211601_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m368538830_RuntimeMethod_var;
extern const uint32_t JsonWriter_GetFlagList_m3518029825_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const uint32_t JsonWriter_InvalidIeee754_m153058136_MetadataUsageId;
extern const uint32_t JsonWriterSettings_GetConverter_m1997901241_MetadataUsageId;
extern String_t* _stringLiteral3452614567;
extern const uint32_t JsonWriterSettings__ctor_m1149145536_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1314637808_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3109603953_RuntimeMethod_var;
extern const uint32_t TypeCoercionUtility_get_MemberMapCache_m3398197512_MetadataUsageId;
extern const uint32_t TypeCoercionUtility_ProcessTypeHint_m1443685319_MetadataUsageId;
extern RuntimeClass* TargetInvocationException_t4266643902_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3337732209;
extern String_t* _stringLiteral2086024746;
extern String_t* _stringLiteral1561730681;
extern const uint32_t TypeCoercionUtility_InstantiateObject_m1943029821_MetadataUsageId;
extern const RuntimeType* IDictionary_t1363984059_0_0_0_var;
extern const uint32_t TypeCoercionUtility_GetMemberMap_m3192982815_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3165258040_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2344095753_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3244001480_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m409945335_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1203754317_RuntimeMethod_var;
extern const uint32_t TypeCoercionUtility_CreateMemberMap_m1180892943_MetadataUsageId;
extern RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m692485511_RuntimeMethod_var;
extern const uint32_t TypeCoercionUtility_GetMemberInfo_m2445066772_MetadataUsageId;
extern const uint32_t TypeCoercionUtility_SetMemberValue_m1035860574_MetadataUsageId;
extern const RuntimeType* IEnumerable_t1941168011_0_0_0_var;
extern const RuntimeType* DateTime_t3738529785_0_0_0_var;
extern const RuntimeType* Guid_t_0_0_0_var;
extern const RuntimeType* Char_t3634460470_0_0_0_var;
extern const RuntimeType* Uri_t100236324_0_0_0_var;
extern const RuntimeType* Version_t3456873960_0_0_0_var;
extern const RuntimeType* TimeSpan_t881159249_0_0_0_var;
extern const RuntimeType* Int64_t3736567304_0_0_0_var;
extern RuntimeClass* DateTimeFormatInfo_t2405853701_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeDescriptor_t3066613587_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1836155974;
extern String_t* _stringLiteral79253704;
extern const uint32_t TypeCoercionUtility_CoerceType_m977820981_MetadataUsageId;
extern const uint32_t TypeCoercionUtility_CoerceType_m1299671266_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2719708339;
extern String_t* _stringLiteral2296873508;
extern String_t* _stringLiteral3265744085;
extern String_t* _stringLiteral3308199957;
extern const uint32_t TypeCoercionUtility_CoerceList_m2158031047_MetadataUsageId;
extern const uint32_t TypeCoercionUtility_CoerceArray_m867967496_MetadataUsageId;
extern const RuntimeType* Nullable_1_t3772285925_0_0_0_var;
extern const uint32_t TypeCoercionUtility_IsNullable_m2799635471_MetadataUsageId;

struct TypeU5BU5D_t3940880105;
struct ObjectU5BU5D_t2843939325;
struct EnumU5BU5D_t596894966;
struct StringU5BU5D_t1281789340;
struct PropertyInfoU5BU5D_t1461822886;
struct FieldInfoU5BU5D_t846150980;
struct ParameterInfoU5BU5D_t390618515;
struct ConstructorInfoU5BU5D_t881249896;


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
#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef TYPECOERCIONUTILITY_T347344375_H
#define TYPECOERCIONUTILITY_T347344375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct  TypeCoercionUtility_t347344375  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::memberMapCache
	Dictionary_2_t1314637808 * ___memberMapCache_0;
	// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::allowNullValueTypes
	bool ___allowNullValueTypes_1;

public:
	inline static int32_t get_offset_of_memberMapCache_0() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t347344375, ___memberMapCache_0)); }
	inline Dictionary_2_t1314637808 * get_memberMapCache_0() const { return ___memberMapCache_0; }
	inline Dictionary_2_t1314637808 ** get_address_of_memberMapCache_0() { return &___memberMapCache_0; }
	inline void set_memberMapCache_0(Dictionary_2_t1314637808 * value)
	{
		___memberMapCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___memberMapCache_0), value);
	}

	inline static int32_t get_offset_of_allowNullValueTypes_1() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t347344375, ___allowNullValueTypes_1)); }
	inline bool get_allowNullValueTypes_1() const { return ___allowNullValueTypes_1; }
	inline bool* get_address_of_allowNullValueTypes_1() { return &___allowNullValueTypes_1; }
	inline void set_allowNullValueTypes_1(bool value)
	{
		___allowNullValueTypes_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECOERCIONUTILITY_T347344375_H
#ifndef DICTIONARY_2_T3165258040_H
#define DICTIONARY_2_T3165258040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct  Dictionary_2_t3165258040  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	MemberInfoU5BU5D_t1302094432* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___valueSlots_7)); }
	inline MemberInfoU5BU5D_t1302094432* get_valueSlots_7() const { return ___valueSlots_7; }
	inline MemberInfoU5BU5D_t1302094432** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(MemberInfoU5BU5D_t1302094432* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3165258040_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t152506148 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3165258040_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t152506148 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t152506148 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t152506148 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3165258040_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_30)); }
	inline UriParser_t3890150400 * get_parser_30() const { return ___parser_30; }
	inline UriParser_t3890150400 ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_t3890150400 * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_31() const { return ___U3CU3Ef__switchU24map12_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_31() { return &___U3CU3Ef__switchU24map12_31; }
	inline void set_U3CU3Ef__switchU24map12_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_32() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_32() const { return ___U3CU3Ef__switchU24map13_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_32() { return &___U3CU3Ef__switchU24map13_32; }
	inline void set_U3CU3Ef__switchU24map13_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_33() const { return ___U3CU3Ef__switchU24map14_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_33() { return &___U3CU3Ef__switchU24map14_33; }
	inline void set_U3CU3Ef__switchU24map14_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_34() const { return ___U3CU3Ef__switchU24map15_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_34() { return &___U3CU3Ef__switchU24map15_34; }
	inline void set_U3CU3Ef__switchU24map15_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_35() const { return ___U3CU3Ef__switchU24map16_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_35() { return &___U3CU3Ef__switchU24map16_35; }
	inline void set_U3CU3Ef__switchU24map16_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef STACK_1_T3562264199_H
#define STACK_1_T3562264199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Collections.ArrayList>
struct  Stack_1_t3562264199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ArrayListU5BU5D_t588196521* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3562264199, ____array_0)); }
	inline ArrayListU5BU5D_t588196521* get__array_0() const { return ____array_0; }
	inline ArrayListU5BU5D_t588196521** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ArrayListU5BU5D_t588196521* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3562264199, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3562264199, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3562264199_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
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
#ifndef JSONREADERSETTINGS_T2493837886_H
#define JSONREADERSETTINGS_T2493837886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct  JsonReaderSettings_t2493837886  : public RuntimeObject
{
public:
	// Pathfinding.Serialization.JsonFx.TypeCoercionUtility Pathfinding.Serialization.JsonFx.JsonReaderSettings::Coercion
	TypeCoercionUtility_t347344375 * ___Coercion_0;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::allowUnquotedObjectKeys
	bool ___allowUnquotedObjectKeys_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonReaderSettings::typeHintName
	String_t* ___typeHintName_2;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::<HandleCyclicReferences>k__BackingField
	bool ___U3CHandleCyclicReferencesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter> Pathfinding.Serialization.JsonFx.JsonReaderSettings::converters
	List_1_t2422006649 * ___converters_4;

public:
	inline static int32_t get_offset_of_Coercion_0() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2493837886, ___Coercion_0)); }
	inline TypeCoercionUtility_t347344375 * get_Coercion_0() const { return ___Coercion_0; }
	inline TypeCoercionUtility_t347344375 ** get_address_of_Coercion_0() { return &___Coercion_0; }
	inline void set_Coercion_0(TypeCoercionUtility_t347344375 * value)
	{
		___Coercion_0 = value;
		Il2CppCodeGenWriteBarrier((&___Coercion_0), value);
	}

	inline static int32_t get_offset_of_allowUnquotedObjectKeys_1() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2493837886, ___allowUnquotedObjectKeys_1)); }
	inline bool get_allowUnquotedObjectKeys_1() const { return ___allowUnquotedObjectKeys_1; }
	inline bool* get_address_of_allowUnquotedObjectKeys_1() { return &___allowUnquotedObjectKeys_1; }
	inline void set_allowUnquotedObjectKeys_1(bool value)
	{
		___allowUnquotedObjectKeys_1 = value;
	}

	inline static int32_t get_offset_of_typeHintName_2() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2493837886, ___typeHintName_2)); }
	inline String_t* get_typeHintName_2() const { return ___typeHintName_2; }
	inline String_t** get_address_of_typeHintName_2() { return &___typeHintName_2; }
	inline void set_typeHintName_2(String_t* value)
	{
		___typeHintName_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeHintName_2), value);
	}

	inline static int32_t get_offset_of_U3CHandleCyclicReferencesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2493837886, ___U3CHandleCyclicReferencesU3Ek__BackingField_3)); }
	inline bool get_U3CHandleCyclicReferencesU3Ek__BackingField_3() const { return ___U3CHandleCyclicReferencesU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHandleCyclicReferencesU3Ek__BackingField_3() { return &___U3CHandleCyclicReferencesU3Ek__BackingField_3; }
	inline void set_U3CHandleCyclicReferencesU3Ek__BackingField_3(bool value)
	{
		___U3CHandleCyclicReferencesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_converters_4() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2493837886, ___converters_4)); }
	inline List_1_t2422006649 * get_converters_4() const { return ___converters_4; }
	inline List_1_t2422006649 ** get_address_of_converters_4() { return &___converters_4; }
	inline void set_converters_4(List_1_t2422006649 * value)
	{
		___converters_4 = value;
		Il2CppCodeGenWriteBarrier((&___converters_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONREADERSETTINGS_T2493837886_H
#ifndef VERSION_T3456873960_H
#define VERSION_T3456873960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t3456873960  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3456873960_H
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
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_2)); }
	inline TextWriter_t3478189236 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t3478189236 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t3478189236 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef JSONWRITERSETTINGS_T3483137480_H
#define JSONWRITERSETTINGS_T3483137480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct  JsonWriterSettings_t3483137480  : public RuntimeObject
{
public:
	// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime> Pathfinding.Serialization.JsonFx.JsonWriterSettings::dateTimeSerializer
	WriteDelegate_1_t4077604362 * ___dateTimeSerializer_0;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::maxDepth
	int32_t ___maxDepth_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::newLine
	String_t* ___newLine_2;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::prettyPrint
	bool ___prettyPrint_3;
	// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::tab
	String_t* ___tab_4;
	// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::typeHintName
	String_t* ___typeHintName_5;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::useXmlSerializationAttributes
	bool ___useXmlSerializationAttributes_6;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::<HandleCyclicReferences>k__BackingField
	bool ___U3CHandleCyclicReferencesU3Ek__BackingField_7;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::<DebugMode>k__BackingField
	bool ___U3CDebugModeU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter> Pathfinding.Serialization.JsonFx.JsonWriterSettings::converters
	List_1_t2422006649 * ___converters_9;

public:
	inline static int32_t get_offset_of_dateTimeSerializer_0() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___dateTimeSerializer_0)); }
	inline WriteDelegate_1_t4077604362 * get_dateTimeSerializer_0() const { return ___dateTimeSerializer_0; }
	inline WriteDelegate_1_t4077604362 ** get_address_of_dateTimeSerializer_0() { return &___dateTimeSerializer_0; }
	inline void set_dateTimeSerializer_0(WriteDelegate_1_t4077604362 * value)
	{
		___dateTimeSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeSerializer_0), value);
	}

	inline static int32_t get_offset_of_maxDepth_1() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___maxDepth_1)); }
	inline int32_t get_maxDepth_1() const { return ___maxDepth_1; }
	inline int32_t* get_address_of_maxDepth_1() { return &___maxDepth_1; }
	inline void set_maxDepth_1(int32_t value)
	{
		___maxDepth_1 = value;
	}

	inline static int32_t get_offset_of_newLine_2() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___newLine_2)); }
	inline String_t* get_newLine_2() const { return ___newLine_2; }
	inline String_t** get_address_of_newLine_2() { return &___newLine_2; }
	inline void set_newLine_2(String_t* value)
	{
		___newLine_2 = value;
		Il2CppCodeGenWriteBarrier((&___newLine_2), value);
	}

	inline static int32_t get_offset_of_prettyPrint_3() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___prettyPrint_3)); }
	inline bool get_prettyPrint_3() const { return ___prettyPrint_3; }
	inline bool* get_address_of_prettyPrint_3() { return &___prettyPrint_3; }
	inline void set_prettyPrint_3(bool value)
	{
		___prettyPrint_3 = value;
	}

	inline static int32_t get_offset_of_tab_4() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___tab_4)); }
	inline String_t* get_tab_4() const { return ___tab_4; }
	inline String_t** get_address_of_tab_4() { return &___tab_4; }
	inline void set_tab_4(String_t* value)
	{
		___tab_4 = value;
		Il2CppCodeGenWriteBarrier((&___tab_4), value);
	}

	inline static int32_t get_offset_of_typeHintName_5() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___typeHintName_5)); }
	inline String_t* get_typeHintName_5() const { return ___typeHintName_5; }
	inline String_t** get_address_of_typeHintName_5() { return &___typeHintName_5; }
	inline void set_typeHintName_5(String_t* value)
	{
		___typeHintName_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeHintName_5), value);
	}

	inline static int32_t get_offset_of_useXmlSerializationAttributes_6() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___useXmlSerializationAttributes_6)); }
	inline bool get_useXmlSerializationAttributes_6() const { return ___useXmlSerializationAttributes_6; }
	inline bool* get_address_of_useXmlSerializationAttributes_6() { return &___useXmlSerializationAttributes_6; }
	inline void set_useXmlSerializationAttributes_6(bool value)
	{
		___useXmlSerializationAttributes_6 = value;
	}

	inline static int32_t get_offset_of_U3CHandleCyclicReferencesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___U3CHandleCyclicReferencesU3Ek__BackingField_7)); }
	inline bool get_U3CHandleCyclicReferencesU3Ek__BackingField_7() const { return ___U3CHandleCyclicReferencesU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CHandleCyclicReferencesU3Ek__BackingField_7() { return &___U3CHandleCyclicReferencesU3Ek__BackingField_7; }
	inline void set_U3CHandleCyclicReferencesU3Ek__BackingField_7(bool value)
	{
		___U3CHandleCyclicReferencesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDebugModeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___U3CDebugModeU3Ek__BackingField_8)); }
	inline bool get_U3CDebugModeU3Ek__BackingField_8() const { return ___U3CDebugModeU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CDebugModeU3Ek__BackingField_8() { return &___U3CDebugModeU3Ek__BackingField_8; }
	inline void set_U3CDebugModeU3Ek__BackingField_8(bool value)
	{
		___U3CDebugModeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_converters_9() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3483137480, ___converters_9)); }
	inline List_1_t2422006649 * get_converters_9() const { return ___converters_9; }
	inline List_1_t2422006649 ** get_address_of_converters_9() { return &___converters_9; }
	inline void set_converters_9(List_1_t2422006649 * value)
	{
		___converters_9 = value;
		Il2CppCodeGenWriteBarrier((&___converters_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONWRITERSETTINGS_T3483137480_H
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
#ifndef LIST_1_T2422006649_H
#define LIST_1_T2422006649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>
struct  List_1_t2422006649  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonConverterU5BU5D_t3910822674* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2422006649, ____items_1)); }
	inline JsonConverterU5BU5D_t3910822674* get__items_1() const { return ____items_1; }
	inline JsonConverterU5BU5D_t3910822674** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonConverterU5BU5D_t3910822674* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2422006649, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2422006649, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2422006649_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	JsonConverterU5BU5D_t3910822674* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2422006649_StaticFields, ___EmptyArray_4)); }
	inline JsonConverterU5BU5D_t3910822674* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline JsonConverterU5BU5D_t3910822674** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(JsonConverterU5BU5D_t3910822674* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2422006649_H
#ifndef STRINGCOMPARER_T3301955079_H
#define STRINGCOMPARER_T3301955079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3301955079  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3301955079_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3301955079 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3301955079 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3301955079 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3301955079 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3301955079 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3301955079 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3301955079 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3301955079 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3301955079 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3301955079 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3301955079 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3301955079 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3301955079 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3301955079 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3301955079_H
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_0;
	// System.String System.Globalization.NumberFormatInfo::decimalFormats
	String_t* ___decimalFormats_1;
	// System.String System.Globalization.NumberFormatInfo::currencyFormats
	String_t* ___currencyFormats_2;
	// System.String System.Globalization.NumberFormatInfo::percentFormats
	String_t* ___percentFormats_3;
	// System.String System.Globalization.NumberFormatInfo::digitPattern
	String_t* ___digitPattern_4;
	// System.String System.Globalization.NumberFormatInfo::zeroPattern
	String_t* ___zeroPattern_5;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_6;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t385246372* ___currencyGroupSizes_9;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_10;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_11;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_12;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_15;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_16;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_17;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_18;
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t385246372* ___numberGroupSizes_19;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_20;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_21;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_22;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_23;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_24;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_27;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_28;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_29;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_30;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_31;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_32;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_34;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_35;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1281789340* ___nativeDigits_36;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_37;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_decimalFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___decimalFormats_1)); }
	inline String_t* get_decimalFormats_1() const { return ___decimalFormats_1; }
	inline String_t** get_address_of_decimalFormats_1() { return &___decimalFormats_1; }
	inline void set_decimalFormats_1(String_t* value)
	{
		___decimalFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_1), value);
	}

	inline static int32_t get_offset_of_currencyFormats_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyFormats_2)); }
	inline String_t* get_currencyFormats_2() const { return ___currencyFormats_2; }
	inline String_t** get_address_of_currencyFormats_2() { return &___currencyFormats_2; }
	inline void set_currencyFormats_2(String_t* value)
	{
		___currencyFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyFormats_2), value);
	}

	inline static int32_t get_offset_of_percentFormats_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentFormats_3)); }
	inline String_t* get_percentFormats_3() const { return ___percentFormats_3; }
	inline String_t** get_address_of_percentFormats_3() { return &___percentFormats_3; }
	inline void set_percentFormats_3(String_t* value)
	{
		___percentFormats_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentFormats_3), value);
	}

	inline static int32_t get_offset_of_digitPattern_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitPattern_4)); }
	inline String_t* get_digitPattern_4() const { return ___digitPattern_4; }
	inline String_t** get_address_of_digitPattern_4() { return &___digitPattern_4; }
	inline void set_digitPattern_4(String_t* value)
	{
		___digitPattern_4 = value;
		Il2CppCodeGenWriteBarrier((&___digitPattern_4), value);
	}

	inline static int32_t get_offset_of_zeroPattern_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___zeroPattern_5)); }
	inline String_t* get_zeroPattern_5() const { return ___zeroPattern_5; }
	inline String_t** get_address_of_zeroPattern_5() { return &___zeroPattern_5; }
	inline void set_zeroPattern_5(String_t* value)
	{
		___zeroPattern_5 = value;
		Il2CppCodeGenWriteBarrier((&___zeroPattern_5), value);
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_6)); }
	inline int32_t get_currencyDecimalDigits_6() const { return ___currencyDecimalDigits_6; }
	inline int32_t* get_address_of_currencyDecimalDigits_6() { return &___currencyDecimalDigits_6; }
	inline void set_currencyDecimalDigits_6(int32_t value)
	{
		___currencyDecimalDigits_6 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_7)); }
	inline String_t* get_currencyDecimalSeparator_7() const { return ___currencyDecimalSeparator_7; }
	inline String_t** get_address_of_currencyDecimalSeparator_7() { return &___currencyDecimalSeparator_7; }
	inline void set_currencyDecimalSeparator_7(String_t* value)
	{
		___currencyDecimalSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_9)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_9() const { return ___currencyGroupSizes_9; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_9() { return &___currencyGroupSizes_9; }
	inline void set_currencyGroupSizes_9(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_9), value);
	}

	inline static int32_t get_offset_of_currencyNegativePattern_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_10)); }
	inline int32_t get_currencyNegativePattern_10() const { return ___currencyNegativePattern_10; }
	inline int32_t* get_address_of_currencyNegativePattern_10() { return &___currencyNegativePattern_10; }
	inline void set_currencyNegativePattern_10(int32_t value)
	{
		___currencyNegativePattern_10 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_11)); }
	inline int32_t get_currencyPositivePattern_11() const { return ___currencyPositivePattern_11; }
	inline int32_t* get_address_of_currencyPositivePattern_11() { return &___currencyPositivePattern_11; }
	inline void set_currencyPositivePattern_11(int32_t value)
	{
		___currencyPositivePattern_11 = value;
	}

	inline static int32_t get_offset_of_currencySymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_12)); }
	inline String_t* get_currencySymbol_12() const { return ___currencySymbol_12; }
	inline String_t** get_address_of_currencySymbol_12() { return &___currencySymbol_12; }
	inline void set_currencySymbol_12(String_t* value)
	{
		___currencySymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_12), value);
	}

	inline static int32_t get_offset_of_nanSymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_13)); }
	inline String_t* get_nanSymbol_13() const { return ___nanSymbol_13; }
	inline String_t** get_address_of_nanSymbol_13() { return &___nanSymbol_13; }
	inline void set_nanSymbol_13(String_t* value)
	{
		___nanSymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_negativeSign_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_15)); }
	inline String_t* get_negativeSign_15() const { return ___negativeSign_15; }
	inline String_t** get_address_of_negativeSign_15() { return &___negativeSign_15; }
	inline void set_negativeSign_15(String_t* value)
	{
		___negativeSign_15 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_15), value);
	}

	inline static int32_t get_offset_of_numberDecimalDigits_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_16)); }
	inline int32_t get_numberDecimalDigits_16() const { return ___numberDecimalDigits_16; }
	inline int32_t* get_address_of_numberDecimalDigits_16() { return &___numberDecimalDigits_16; }
	inline void set_numberDecimalDigits_16(int32_t value)
	{
		___numberDecimalDigits_16 = value;
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_17)); }
	inline String_t* get_numberDecimalSeparator_17() const { return ___numberDecimalSeparator_17; }
	inline String_t** get_address_of_numberDecimalSeparator_17() { return &___numberDecimalSeparator_17; }
	inline void set_numberDecimalSeparator_17(String_t* value)
	{
		___numberDecimalSeparator_17 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_17), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_18)); }
	inline String_t* get_numberGroupSeparator_18() const { return ___numberGroupSeparator_18; }
	inline String_t** get_address_of_numberGroupSeparator_18() { return &___numberGroupSeparator_18; }
	inline void set_numberGroupSeparator_18(String_t* value)
	{
		___numberGroupSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_18), value);
	}

	inline static int32_t get_offset_of_numberGroupSizes_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_19)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_19() const { return ___numberGroupSizes_19; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_19() { return &___numberGroupSizes_19; }
	inline void set_numberGroupSizes_19(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_19 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_19), value);
	}

	inline static int32_t get_offset_of_numberNegativePattern_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_20)); }
	inline int32_t get_numberNegativePattern_20() const { return ___numberNegativePattern_20; }
	inline int32_t* get_address_of_numberNegativePattern_20() { return &___numberNegativePattern_20; }
	inline void set_numberNegativePattern_20(int32_t value)
	{
		___numberNegativePattern_20 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_21)); }
	inline int32_t get_percentDecimalDigits_21() const { return ___percentDecimalDigits_21; }
	inline int32_t* get_address_of_percentDecimalDigits_21() { return &___percentDecimalDigits_21; }
	inline void set_percentDecimalDigits_21(int32_t value)
	{
		___percentDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_22)); }
	inline String_t* get_percentDecimalSeparator_22() const { return ___percentDecimalSeparator_22; }
	inline String_t** get_address_of_percentDecimalSeparator_22() { return &___percentDecimalSeparator_22; }
	inline void set_percentDecimalSeparator_22(String_t* value)
	{
		___percentDecimalSeparator_22 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_22), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_23)); }
	inline String_t* get_percentGroupSeparator_23() const { return ___percentGroupSeparator_23; }
	inline String_t** get_address_of_percentGroupSeparator_23() { return &___percentGroupSeparator_23; }
	inline void set_percentGroupSeparator_23(String_t* value)
	{
		___percentGroupSeparator_23 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_23), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_24)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_24() const { return ___percentGroupSizes_24; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_24() { return &___percentGroupSizes_24; }
	inline void set_percentGroupSizes_24(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_24 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_24), value);
	}

	inline static int32_t get_offset_of_percentNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_25)); }
	inline int32_t get_percentNegativePattern_25() const { return ___percentNegativePattern_25; }
	inline int32_t* get_address_of_percentNegativePattern_25() { return &___percentNegativePattern_25; }
	inline void set_percentNegativePattern_25(int32_t value)
	{
		___percentNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentSymbol_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_27)); }
	inline String_t* get_percentSymbol_27() const { return ___percentSymbol_27; }
	inline String_t** get_address_of_percentSymbol_27() { return &___percentSymbol_27; }
	inline void set_percentSymbol_27(String_t* value)
	{
		___percentSymbol_27 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_27), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_28)); }
	inline String_t* get_perMilleSymbol_28() const { return ___perMilleSymbol_28; }
	inline String_t** get_address_of_perMilleSymbol_28() { return &___perMilleSymbol_28; }
	inline void set_perMilleSymbol_28(String_t* value)
	{
		___perMilleSymbol_28 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_28), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_29)); }
	inline String_t* get_positiveInfinitySymbol_29() const { return ___positiveInfinitySymbol_29; }
	inline String_t** get_address_of_positiveInfinitySymbol_29() { return &___positiveInfinitySymbol_29; }
	inline void set_positiveInfinitySymbol_29(String_t* value)
	{
		___positiveInfinitySymbol_29 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_29), value);
	}

	inline static int32_t get_offset_of_positiveSign_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_30)); }
	inline String_t* get_positiveSign_30() const { return ___positiveSign_30; }
	inline String_t** get_address_of_positiveSign_30() { return &___positiveSign_30; }
	inline void set_positiveSign_30(String_t* value)
	{
		___positiveSign_30 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_30), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_31)); }
	inline String_t* get_ansiCurrencySymbol_31() const { return ___ansiCurrencySymbol_31; }
	inline String_t** get_address_of_ansiCurrencySymbol_31() { return &___ansiCurrencySymbol_31; }
	inline void set_ansiCurrencySymbol_31(String_t* value)
	{
		___ansiCurrencySymbol_31 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_31), value);
	}

	inline static int32_t get_offset_of_m_dataItem_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_32)); }
	inline int32_t get_m_dataItem_32() const { return ___m_dataItem_32; }
	inline int32_t* get_address_of_m_dataItem_32() { return &___m_dataItem_32; }
	inline void set_m_dataItem_32(int32_t value)
	{
		___m_dataItem_32 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_33)); }
	inline bool get_m_useUserOverride_33() const { return ___m_useUserOverride_33; }
	inline bool* get_address_of_m_useUserOverride_33() { return &___m_useUserOverride_33; }
	inline void set_m_useUserOverride_33(bool value)
	{
		___m_useUserOverride_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_34)); }
	inline bool get_validForParseAsNumber_34() const { return ___validForParseAsNumber_34; }
	inline bool* get_address_of_validForParseAsNumber_34() { return &___validForParseAsNumber_34; }
	inline void set_validForParseAsNumber_34(bool value)
	{
		___validForParseAsNumber_34 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_35() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_35)); }
	inline bool get_validForParseAsCurrency_35() const { return ___validForParseAsCurrency_35; }
	inline bool* get_address_of_validForParseAsCurrency_35() { return &___validForParseAsCurrency_35; }
	inline void set_validForParseAsCurrency_35(bool value)
	{
		___validForParseAsCurrency_35 = value;
	}

	inline static int32_t get_offset_of_nativeDigits_36() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_36)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_36() const { return ___nativeDigits_36; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_36() { return &___nativeDigits_36; }
	inline void set_nativeDigits_36(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_36 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_36), value);
	}

	inline static int32_t get_offset_of_digitSubstitution_37() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_37)); }
	inline int32_t get_digitSubstitution_37() const { return ___digitSubstitution_37; }
	inline int32_t* get_address_of_digitSubstitution_37() { return &___digitSubstitution_37; }
	inline void set_digitSubstitution_37(int32_t value)
	{
		___digitSubstitution_37 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.String[] System.Globalization.NumberFormatInfo::invariantNativeDigits
	StringU5BU5D_t1281789340* ___invariantNativeDigits_38;

public:
	inline static int32_t get_offset_of_invariantNativeDigits_38() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantNativeDigits_38)); }
	inline StringU5BU5D_t1281789340* get_invariantNativeDigits_38() const { return ___invariantNativeDigits_38; }
	inline StringU5BU5D_t1281789340** get_address_of_invariantNativeDigits_38() { return &___invariantNativeDigits_38; }
	inline void set_invariantNativeDigits_38(StringU5BU5D_t1281789340* value)
	{
		___invariantNativeDigits_38 = value;
		Il2CppCodeGenWriteBarrier((&___invariantNativeDigits_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef JSONREADER_T3266634654_H
#define JSONREADER_T3266634654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonReader
struct  JsonReader_t3266634654  : public RuntimeObject
{
public:
	// Pathfinding.Serialization.JsonFx.JsonReaderSettings Pathfinding.Serialization.JsonFx.JsonReader::Settings
	JsonReaderSettings_t2493837886 * ___Settings_0;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::Source
	String_t* ___Source_1;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonReader::SourceLength
	int32_t ___SourceLength_2;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonReader::index
	int32_t ___index_3;
	// System.Collections.Generic.List`1<System.Object> Pathfinding.Serialization.JsonFx.JsonReader::previouslyDeserialized
	List_1_t257213610 * ___previouslyDeserialized_4;
	// System.Collections.Generic.Stack`1<System.Collections.ArrayList> Pathfinding.Serialization.JsonFx.JsonReader::jsArrays
	Stack_1_t3562264199 * ___jsArrays_5;

public:
	inline static int32_t get_offset_of_Settings_0() { return static_cast<int32_t>(offsetof(JsonReader_t3266634654, ___Settings_0)); }
	inline JsonReaderSettings_t2493837886 * get_Settings_0() const { return ___Settings_0; }
	inline JsonReaderSettings_t2493837886 ** get_address_of_Settings_0() { return &___Settings_0; }
	inline void set_Settings_0(JsonReaderSettings_t2493837886 * value)
	{
		___Settings_0 = value;
		Il2CppCodeGenWriteBarrier((&___Settings_0), value);
	}

	inline static int32_t get_offset_of_Source_1() { return static_cast<int32_t>(offsetof(JsonReader_t3266634654, ___Source_1)); }
	inline String_t* get_Source_1() const { return ___Source_1; }
	inline String_t** get_address_of_Source_1() { return &___Source_1; }
	inline void set_Source_1(String_t* value)
	{
		___Source_1 = value;
		Il2CppCodeGenWriteBarrier((&___Source_1), value);
	}

	inline static int32_t get_offset_of_SourceLength_2() { return static_cast<int32_t>(offsetof(JsonReader_t3266634654, ___SourceLength_2)); }
	inline int32_t get_SourceLength_2() const { return ___SourceLength_2; }
	inline int32_t* get_address_of_SourceLength_2() { return &___SourceLength_2; }
	inline void set_SourceLength_2(int32_t value)
	{
		___SourceLength_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(JsonReader_t3266634654, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_previouslyDeserialized_4() { return static_cast<int32_t>(offsetof(JsonReader_t3266634654, ___previouslyDeserialized_4)); }
	inline List_1_t257213610 * get_previouslyDeserialized_4() const { return ___previouslyDeserialized_4; }
	inline List_1_t257213610 ** get_address_of_previouslyDeserialized_4() { return &___previouslyDeserialized_4; }
	inline void set_previouslyDeserialized_4(List_1_t257213610 * value)
	{
		___previouslyDeserialized_4 = value;
		Il2CppCodeGenWriteBarrier((&___previouslyDeserialized_4), value);
	}

	inline static int32_t get_offset_of_jsArrays_5() { return static_cast<int32_t>(offsetof(JsonReader_t3266634654, ___jsArrays_5)); }
	inline Stack_1_t3562264199 * get_jsArrays_5() const { return ___jsArrays_5; }
	inline Stack_1_t3562264199 ** get_address_of_jsArrays_5() { return &___jsArrays_5; }
	inline void set_jsArrays_5(Stack_1_t3562264199 * value)
	{
		___jsArrays_5 = value;
		Il2CppCodeGenWriteBarrier((&___jsArrays_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONREADER_T3266634654_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef JSONWRITER_T3837617027_H
#define JSONWRITER_T3837617027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonWriter
struct  JsonWriter_t3837617027  : public RuntimeObject
{
public:
	// System.IO.TextWriter Pathfinding.Serialization.JsonFx.JsonWriter::Writer
	TextWriter_t3478189236 * ___Writer_0;
	// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.JsonFx.JsonWriter::settings
	JsonWriterSettings_t3483137480 * ___settings_1;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriter::depth
	int32_t ___depth_2;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> Pathfinding.Serialization.JsonFx.JsonWriter::previouslySerializedObjects
	Dictionary_2_t3384741 * ___previouslySerializedObjects_3;

public:
	inline static int32_t get_offset_of_Writer_0() { return static_cast<int32_t>(offsetof(JsonWriter_t3837617027, ___Writer_0)); }
	inline TextWriter_t3478189236 * get_Writer_0() const { return ___Writer_0; }
	inline TextWriter_t3478189236 ** get_address_of_Writer_0() { return &___Writer_0; }
	inline void set_Writer_0(TextWriter_t3478189236 * value)
	{
		___Writer_0 = value;
		Il2CppCodeGenWriteBarrier((&___Writer_0), value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(JsonWriter_t3837617027, ___settings_1)); }
	inline JsonWriterSettings_t3483137480 * get_settings_1() const { return ___settings_1; }
	inline JsonWriterSettings_t3483137480 ** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(JsonWriterSettings_t3483137480 * value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier((&___settings_1), value);
	}

	inline static int32_t get_offset_of_depth_2() { return static_cast<int32_t>(offsetof(JsonWriter_t3837617027, ___depth_2)); }
	inline int32_t get_depth_2() const { return ___depth_2; }
	inline int32_t* get_address_of_depth_2() { return &___depth_2; }
	inline void set_depth_2(int32_t value)
	{
		___depth_2 = value;
	}

	inline static int32_t get_offset_of_previouslySerializedObjects_3() { return static_cast<int32_t>(offsetof(JsonWriter_t3837617027, ___previouslySerializedObjects_3)); }
	inline Dictionary_2_t3384741 * get_previouslySerializedObjects_3() const { return ___previouslySerializedObjects_3; }
	inline Dictionary_2_t3384741 ** get_address_of_previouslySerializedObjects_3() { return &___previouslySerializedObjects_3; }
	inline void set_previouslySerializedObjects_3(Dictionary_2_t3384741 * value)
	{
		___previouslySerializedObjects_3 = value;
		Il2CppCodeGenWriteBarrier((&___previouslySerializedObjects_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONWRITER_T3837617027_H
#ifndef JSONCONVERTER_T949931907_H
#define JSONCONVERTER_T949931907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonConverter
struct  JsonConverter_t949931907  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONCONVERTER_T949931907_H
#ifndef DICTIONARY_2_T1314637808_H
#define DICTIONARY_2_T1314637808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct  Dictionary_2_t1314637808  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Dictionary_2U5BU5D_t1256487657* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___valueSlots_7)); }
	inline Dictionary_2U5BU5D_t1256487657* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Dictionary_2U5BU5D_t1256487657** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Dictionary_2U5BU5D_t1256487657* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1314637808_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1536982668 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1314637808_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1536982668 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1536982668 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1536982668 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1314637808_H
#ifndef DICTIONARY_2_T3384741_H
#define DICTIONARY_2_T3384741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t3384741  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3384741_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1750446691 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1750446691 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1750446691 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1750446691 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3384741_H
#ifndef LIST_1_T1312975973_H
#define LIST_1_T1312975973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Enum>
struct  List_1_t1312975973  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnumU5BU5D_t596894966* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1312975973, ____items_1)); }
	inline EnumU5BU5D_t596894966* get__items_1() const { return ____items_1; }
	inline EnumU5BU5D_t596894966** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnumU5BU5D_t596894966* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1312975973, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1312975973, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1312975973_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EnumU5BU5D_t596894966* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1312975973_StaticFields, ___EmptyArray_4)); }
	inline EnumU5BU5D_t596894966* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EnumU5BU5D_t596894966** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EnumU5BU5D_t596894966* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1312975973_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_2)); }
	inline int16_t get_m_value_2() const { return ___m_value_2; }
	inline int16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
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
#ifndef DICTIONARYENTRY_T3123975638_H
#define DICTIONARYENTRY_T3123975638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3123975638 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3123975638_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef TARGETINVOCATIONEXCEPTION_T4266643902_H
#define TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4266643902  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
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
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
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
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
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
#ifndef JSONOPTINATTRIBUTE_T2827491814_H
#define JSONOPTINATTRIBUTE_T2827491814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonOptInAttribute
struct  JsonOptInAttribute_t2827491814  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONOPTINATTRIBUTE_T2827491814_H
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
#ifndef JSONNAMEATTRIBUTE_T425422381_H
#define JSONNAMEATTRIBUTE_T425422381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonNameAttribute
struct  JsonNameAttribute_t425422381  : public Attribute_t861562559
{
public:
	// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::jsonName
	String_t* ___jsonName_0;

public:
	inline static int32_t get_offset_of_jsonName_0() { return static_cast<int32_t>(offsetof(JsonNameAttribute_t425422381, ___jsonName_0)); }
	inline String_t* get_jsonName_0() const { return ___jsonName_0; }
	inline String_t** get_address_of_jsonName_0() { return &___jsonName_0; }
	inline void set_jsonName_0(String_t* value)
	{
		___jsonName_0 = value;
		Il2CppCodeGenWriteBarrier((&___jsonName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNAMEATTRIBUTE_T425422381_H
#ifndef JSONMEMBERATTRIBUTE_T3353731244_H
#define JSONMEMBERATTRIBUTE_T3353731244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonMemberAttribute
struct  JsonMemberAttribute_t3353731244  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONMEMBERATTRIBUTE_T3353731244_H
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
#ifndef JSONIGNOREATTRIBUTE_T316361994_H
#define JSONIGNOREATTRIBUTE_T316361994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonIgnoreAttribute
struct  JsonIgnoreAttribute_t316361994  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONIGNOREATTRIBUTE_T316361994_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef STRINGWRITER_T802263757_H
#define STRINGWRITER_T802263757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t802263757  : public TextWriter_t3478189236
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T802263757_H
#ifndef JSONSPECIFIEDPROPERTYATTRIBUTE_T115917564_H
#define JSONSPECIFIEDPROPERTYATTRIBUTE_T115917564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonSpecifiedPropertyAttribute
struct  JsonSpecifiedPropertyAttribute_t115917564  : public Attribute_t861562559
{
public:
	// System.String Pathfinding.Serialization.JsonFx.JsonSpecifiedPropertyAttribute::specifiedProperty
	String_t* ___specifiedProperty_0;

public:
	inline static int32_t get_offset_of_specifiedProperty_0() { return static_cast<int32_t>(offsetof(JsonSpecifiedPropertyAttribute_t115917564, ___specifiedProperty_0)); }
	inline String_t* get_specifiedProperty_0() const { return ___specifiedProperty_0; }
	inline String_t** get_address_of_specifiedProperty_0() { return &___specifiedProperty_0; }
	inline void set_specifiedProperty_0(String_t* value)
	{
		___specifiedProperty_0 = value;
		Il2CppCodeGenWriteBarrier((&___specifiedProperty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONSPECIFIEDPROPERTYATTRIBUTE_T115917564_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_13;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_14;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_15;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_16;

public:
	inline static int32_t get_offset_of_flags_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_13)); }
	inline uint32_t get_flags_13() const { return ___flags_13; }
	inline uint32_t* get_address_of_flags_13() { return &___flags_13; }
	inline void set_flags_13(uint32_t value)
	{
		___flags_13 = value;
	}

	inline static int32_t get_offset_of_hi_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_14)); }
	inline uint32_t get_hi_14() const { return ___hi_14; }
	inline uint32_t* get_address_of_hi_14() { return &___hi_14; }
	inline void set_hi_14(uint32_t value)
	{
		___hi_14 = value;
	}

	inline static int32_t get_offset_of_lo_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_15)); }
	inline uint32_t get_lo_15() const { return ___lo_15; }
	inline uint32_t* get_address_of_lo_15() { return &___lo_15; }
	inline void set_lo_15(uint32_t value)
	{
		___lo_15 = value;
	}

	inline static int32_t get_offset_of_mid_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_16)); }
	inline uint32_t get_mid_16() const { return ___mid_16; }
	inline uint32_t* get_address_of_mid_16() { return &___mid_16; }
	inline void set_mid_16(uint32_t value)
	{
		___mid_16 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_12;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_4)); }
	inline Decimal_t2948259380  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t2948259380 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t2948259380  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_12)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_12() const { return ___MaxValueDiv10_12; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_12() { return &___MaxValueDiv10_12; }
	inline void set_MaxValueDiv10_12(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t766556580 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t766556580, ___value___1)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifndef DATETIMESTYLES_T840957420_H
#define DATETIMESTYLES_T840957420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t840957420 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeStyles_t840957420, ___value___1)); }
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
#endif // DATETIMESTYLES_T840957420_H
#ifndef URIKIND_T3816567336_H
#define URIKIND_T3816567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t3816567336 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t3816567336, ___value___1)); }
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
#endif // URIKIND_T3816567336_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef DATETIMEFORMATFLAGS_T1884407083_H
#define DATETIMEFORMATFLAGS_T1884407083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t1884407083 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t1884407083, ___value___1)); }
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
#endif // DATETIMEFORMATFLAGS_T1884407083_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
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
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef ASSEMBLYHASHALGORITHM_T1216504064_H
#define ASSEMBLYHASHALGORITHM_T1216504064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1216504064 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1216504064, ___value___1)); }
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
#endif // ASSEMBLYHASHALGORITHM_T1216504064_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef PROCESSORARCHITECTURE_T305929193_H
#define PROCESSORARCHITECTURE_T305929193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t305929193 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t305929193, ___value___1)); }
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
#endif // PROCESSORARCHITECTURE_T305929193_H
#ifndef ASSEMBLYNAMEFLAGS_T3675421470_H
#define ASSEMBLYNAMEFLAGS_T3675421470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3675421470 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3675421470, ___value___1)); }
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
#endif // ASSEMBLYNAMEFLAGS_T3675421470_H
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
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef JSONTOKEN_T3228770929_H
#define JSONTOKEN_T3228770929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonToken
struct  JsonToken_t3228770929 
{
public:
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonToken::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JsonToken_t3228770929, ___value___1)); }
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
#endif // JSONTOKEN_T3228770929_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
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
#endif // NUMBERSTYLES_T617258130_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___1)); }
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
#endif // TYPECODE_T2987224087_H
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
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef JSONTYPECOERCIONEXCEPTION_T4151781493_H
#define JSONTYPECOERCIONEXCEPTION_T4151781493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonTypeCoercionException
struct  JsonTypeCoercionException_t4151781493  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONTYPECOERCIONEXCEPTION_T4151781493_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef DATETIMEFORMATINFO_T2405853701_H
#define DATETIMEFORMATINFO_T2405853701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t2405853701  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_10;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_11;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_13;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_14;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_15;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_16;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_17;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_18;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_19;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_20;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_21;
	// System.String System.Globalization.DateTimeFormatInfo::_RFC1123Pattern
	String_t* ____RFC1123Pattern_22;
	// System.String System.Globalization.DateTimeFormatInfo::_SortableDateTimePattern
	String_t* ____SortableDateTimePattern_23;
	// System.String System.Globalization.DateTimeFormatInfo::_UniversalSortableDateTimePattern
	String_t* ____UniversalSortableDateTimePattern_24;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_25;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t1661121569 * ___calendar_26;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t1281789340* ___abbreviatedDayNames_28;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t1281789340* ___dayNames_29;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t1281789340* ___monthNames_30;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t1281789340* ___abbreviatedMonthNames_31;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t1281789340* ___allShortDatePatterns_32;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t1281789340* ___allLongDatePatterns_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t1281789340* ___allShortTimePatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t1281789340* ___allLongTimePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthDayPatterns
	StringU5BU5D_t1281789340* ___monthDayPatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::yearMonthPatterns
	StringU5BU5D_t1281789340* ___yearMonthPatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::shortDayNames
	StringU5BU5D_t1281789340* ___shortDayNames_38;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_39;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_40;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_41;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_43;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_44;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_45;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t1281789340* ___m_eraNames_46;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEraNames_47;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEnglishEraNames_48;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t1281789340* ___m_dateWords_49;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t385246372* ___optionalCalendars_50;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t1281789340* ___m_superShortDayNames_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t1281789340* ___genitiveMonthNames_52;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t1281789340* ___m_genitiveAbbreviatedMonthNames_53;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t1281789340* ___leapYearMonthNames_54;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_55;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_56;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::all_date_time_patterns
	StringU5BU5D_t1281789340* ___all_date_time_patterns_57;

public:
	inline static int32_t get_offset_of_m_isReadOnly_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isReadOnly_10)); }
	inline bool get_m_isReadOnly_10() const { return ___m_isReadOnly_10; }
	inline bool* get_address_of_m_isReadOnly_10() { return &___m_isReadOnly_10; }
	inline void set_m_isReadOnly_10(bool value)
	{
		___m_isReadOnly_10 = value;
	}

	inline static int32_t get_offset_of_amDesignator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___amDesignator_11)); }
	inline String_t* get_amDesignator_11() const { return ___amDesignator_11; }
	inline String_t** get_address_of_amDesignator_11() { return &___amDesignator_11; }
	inline void set_amDesignator_11(String_t* value)
	{
		___amDesignator_11 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_11), value);
	}

	inline static int32_t get_offset_of_pmDesignator_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___pmDesignator_12)); }
	inline String_t* get_pmDesignator_12() const { return ___pmDesignator_12; }
	inline String_t** get_address_of_pmDesignator_12() { return &___pmDesignator_12; }
	inline void set_pmDesignator_12(String_t* value)
	{
		___pmDesignator_12 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_12), value);
	}

	inline static int32_t get_offset_of_dateSeparator_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateSeparator_13)); }
	inline String_t* get_dateSeparator_13() const { return ___dateSeparator_13; }
	inline String_t** get_address_of_dateSeparator_13() { return &___dateSeparator_13; }
	inline void set_dateSeparator_13(String_t* value)
	{
		___dateSeparator_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_13), value);
	}

	inline static int32_t get_offset_of_timeSeparator_14() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___timeSeparator_14)); }
	inline String_t* get_timeSeparator_14() const { return ___timeSeparator_14; }
	inline String_t** get_address_of_timeSeparator_14() { return &___timeSeparator_14; }
	inline void set_timeSeparator_14(String_t* value)
	{
		___timeSeparator_14 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_14), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_15() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDatePattern_15)); }
	inline String_t* get_shortDatePattern_15() const { return ___shortDatePattern_15; }
	inline String_t** get_address_of_shortDatePattern_15() { return &___shortDatePattern_15; }
	inline void set_shortDatePattern_15(String_t* value)
	{
		___shortDatePattern_15 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_15), value);
	}

	inline static int32_t get_offset_of_longDatePattern_16() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longDatePattern_16)); }
	inline String_t* get_longDatePattern_16() const { return ___longDatePattern_16; }
	inline String_t** get_address_of_longDatePattern_16() { return &___longDatePattern_16; }
	inline void set_longDatePattern_16(String_t* value)
	{
		___longDatePattern_16 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_16), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortTimePattern_17)); }
	inline String_t* get_shortTimePattern_17() const { return ___shortTimePattern_17; }
	inline String_t** get_address_of_shortTimePattern_17() { return &___shortTimePattern_17; }
	inline void set_shortTimePattern_17(String_t* value)
	{
		___shortTimePattern_17 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_17), value);
	}

	inline static int32_t get_offset_of_longTimePattern_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longTimePattern_18)); }
	inline String_t* get_longTimePattern_18() const { return ___longTimePattern_18; }
	inline String_t** get_address_of_longTimePattern_18() { return &___longTimePattern_18; }
	inline void set_longTimePattern_18(String_t* value)
	{
		___longTimePattern_18 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_18), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPattern_19)); }
	inline String_t* get_monthDayPattern_19() const { return ___monthDayPattern_19; }
	inline String_t** get_address_of_monthDayPattern_19() { return &___monthDayPattern_19; }
	inline void set_monthDayPattern_19(String_t* value)
	{
		___monthDayPattern_19 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_19), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPattern_20)); }
	inline String_t* get_yearMonthPattern_20() const { return ___yearMonthPattern_20; }
	inline String_t** get_address_of_yearMonthPattern_20() { return &___yearMonthPattern_20; }
	inline void set_yearMonthPattern_20(String_t* value)
	{
		___yearMonthPattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_20), value);
	}

	inline static int32_t get_offset_of_fullDateTimePattern_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___fullDateTimePattern_21)); }
	inline String_t* get_fullDateTimePattern_21() const { return ___fullDateTimePattern_21; }
	inline String_t** get_address_of_fullDateTimePattern_21() { return &___fullDateTimePattern_21; }
	inline void set_fullDateTimePattern_21(String_t* value)
	{
		___fullDateTimePattern_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_21), value);
	}

	inline static int32_t get_offset_of__RFC1123Pattern_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____RFC1123Pattern_22)); }
	inline String_t* get__RFC1123Pattern_22() const { return ____RFC1123Pattern_22; }
	inline String_t** get_address_of__RFC1123Pattern_22() { return &____RFC1123Pattern_22; }
	inline void set__RFC1123Pattern_22(String_t* value)
	{
		____RFC1123Pattern_22 = value;
		Il2CppCodeGenWriteBarrier((&____RFC1123Pattern_22), value);
	}

	inline static int32_t get_offset_of__SortableDateTimePattern_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____SortableDateTimePattern_23)); }
	inline String_t* get__SortableDateTimePattern_23() const { return ____SortableDateTimePattern_23; }
	inline String_t** get_address_of__SortableDateTimePattern_23() { return &____SortableDateTimePattern_23; }
	inline void set__SortableDateTimePattern_23(String_t* value)
	{
		____SortableDateTimePattern_23 = value;
		Il2CppCodeGenWriteBarrier((&____SortableDateTimePattern_23), value);
	}

	inline static int32_t get_offset_of__UniversalSortableDateTimePattern_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____UniversalSortableDateTimePattern_24)); }
	inline String_t* get__UniversalSortableDateTimePattern_24() const { return ____UniversalSortableDateTimePattern_24; }
	inline String_t** get_address_of__UniversalSortableDateTimePattern_24() { return &____UniversalSortableDateTimePattern_24; }
	inline void set__UniversalSortableDateTimePattern_24(String_t* value)
	{
		____UniversalSortableDateTimePattern_24 = value;
		Il2CppCodeGenWriteBarrier((&____UniversalSortableDateTimePattern_24), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___firstDayOfWeek_25)); }
	inline int32_t get_firstDayOfWeek_25() const { return ___firstDayOfWeek_25; }
	inline int32_t* get_address_of_firstDayOfWeek_25() { return &___firstDayOfWeek_25; }
	inline void set_firstDayOfWeek_25(int32_t value)
	{
		___firstDayOfWeek_25 = value;
	}

	inline static int32_t get_offset_of_calendar_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendar_26)); }
	inline Calendar_t1661121569 * get_calendar_26() const { return ___calendar_26; }
	inline Calendar_t1661121569 ** get_address_of_calendar_26() { return &___calendar_26; }
	inline void set_calendar_26(Calendar_t1661121569 * value)
	{
		___calendar_26 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_26), value);
	}

	inline static int32_t get_offset_of_calendarWeekRule_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendarWeekRule_27)); }
	inline int32_t get_calendarWeekRule_27() const { return ___calendarWeekRule_27; }
	inline int32_t* get_address_of_calendarWeekRule_27() { return &___calendarWeekRule_27; }
	inline void set_calendarWeekRule_27(int32_t value)
	{
		___calendarWeekRule_27 = value;
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedDayNames_28)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedDayNames_28() const { return ___abbreviatedDayNames_28; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedDayNames_28() { return &___abbreviatedDayNames_28; }
	inline void set_abbreviatedDayNames_28(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedDayNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_28), value);
	}

	inline static int32_t get_offset_of_dayNames_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dayNames_29)); }
	inline StringU5BU5D_t1281789340* get_dayNames_29() const { return ___dayNames_29; }
	inline StringU5BU5D_t1281789340** get_address_of_dayNames_29() { return &___dayNames_29; }
	inline void set_dayNames_29(StringU5BU5D_t1281789340* value)
	{
		___dayNames_29 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_29), value);
	}

	inline static int32_t get_offset_of_monthNames_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthNames_30)); }
	inline StringU5BU5D_t1281789340* get_monthNames_30() const { return ___monthNames_30; }
	inline StringU5BU5D_t1281789340** get_address_of_monthNames_30() { return &___monthNames_30; }
	inline void set_monthNames_30(StringU5BU5D_t1281789340* value)
	{
		___monthNames_30 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_30), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedMonthNames_31)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedMonthNames_31() const { return ___abbreviatedMonthNames_31; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedMonthNames_31() { return &___abbreviatedMonthNames_31; }
	inline void set_abbreviatedMonthNames_31(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedMonthNames_31 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_31), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortDatePatterns_32)); }
	inline StringU5BU5D_t1281789340* get_allShortDatePatterns_32() const { return ___allShortDatePatterns_32; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortDatePatterns_32() { return &___allShortDatePatterns_32; }
	inline void set_allShortDatePatterns_32(StringU5BU5D_t1281789340* value)
	{
		___allShortDatePatterns_32 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_32), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongDatePatterns_33)); }
	inline StringU5BU5D_t1281789340* get_allLongDatePatterns_33() const { return ___allLongDatePatterns_33; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongDatePatterns_33() { return &___allLongDatePatterns_33; }
	inline void set_allLongDatePatterns_33(StringU5BU5D_t1281789340* value)
	{
		___allLongDatePatterns_33 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_33), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortTimePatterns_34)); }
	inline StringU5BU5D_t1281789340* get_allShortTimePatterns_34() const { return ___allShortTimePatterns_34; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortTimePatterns_34() { return &___allShortTimePatterns_34; }
	inline void set_allShortTimePatterns_34(StringU5BU5D_t1281789340* value)
	{
		___allShortTimePatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_34), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongTimePatterns_35)); }
	inline StringU5BU5D_t1281789340* get_allLongTimePatterns_35() const { return ___allLongTimePatterns_35; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongTimePatterns_35() { return &___allLongTimePatterns_35; }
	inline void set_allLongTimePatterns_35(StringU5BU5D_t1281789340* value)
	{
		___allLongTimePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_35), value);
	}

	inline static int32_t get_offset_of_monthDayPatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPatterns_36)); }
	inline StringU5BU5D_t1281789340* get_monthDayPatterns_36() const { return ___monthDayPatterns_36; }
	inline StringU5BU5D_t1281789340** get_address_of_monthDayPatterns_36() { return &___monthDayPatterns_36; }
	inline void set_monthDayPatterns_36(StringU5BU5D_t1281789340* value)
	{
		___monthDayPatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPatterns_36), value);
	}

	inline static int32_t get_offset_of_yearMonthPatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPatterns_37)); }
	inline StringU5BU5D_t1281789340* get_yearMonthPatterns_37() const { return ___yearMonthPatterns_37; }
	inline StringU5BU5D_t1281789340** get_address_of_yearMonthPatterns_37() { return &___yearMonthPatterns_37; }
	inline void set_yearMonthPatterns_37(StringU5BU5D_t1281789340* value)
	{
		___yearMonthPatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPatterns_37), value);
	}

	inline static int32_t get_offset_of_shortDayNames_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDayNames_38)); }
	inline StringU5BU5D_t1281789340* get_shortDayNames_38() const { return ___shortDayNames_38; }
	inline StringU5BU5D_t1281789340** get_address_of_shortDayNames_38() { return &___shortDayNames_38; }
	inline void set_shortDayNames_38(StringU5BU5D_t1281789340* value)
	{
		___shortDayNames_38 = value;
		Il2CppCodeGenWriteBarrier((&___shortDayNames_38), value);
	}

	inline static int32_t get_offset_of_nDataItem_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___nDataItem_39)); }
	inline int32_t get_nDataItem_39() const { return ___nDataItem_39; }
	inline int32_t* get_address_of_nDataItem_39() { return &___nDataItem_39; }
	inline void set_nDataItem_39(int32_t value)
	{
		___nDataItem_39 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_useUserOverride_40)); }
	inline bool get_m_useUserOverride_40() const { return ___m_useUserOverride_40; }
	inline bool* get_address_of_m_useUserOverride_40() { return &___m_useUserOverride_40; }
	inline void set_m_useUserOverride_40(bool value)
	{
		___m_useUserOverride_40 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isDefaultCalendar_41)); }
	inline bool get_m_isDefaultCalendar_41() const { return ___m_isDefaultCalendar_41; }
	inline bool* get_address_of_m_isDefaultCalendar_41() { return &___m_isDefaultCalendar_41; }
	inline void set_m_isDefaultCalendar_41(bool value)
	{
		___m_isDefaultCalendar_41 = value;
	}

	inline static int32_t get_offset_of_CultureID_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___CultureID_42)); }
	inline int32_t get_CultureID_42() const { return ___CultureID_42; }
	inline int32_t* get_address_of_CultureID_42() { return &___CultureID_42; }
	inline void set_CultureID_42(int32_t value)
	{
		___CultureID_42 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_43() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___bUseCalendarInfo_43)); }
	inline bool get_bUseCalendarInfo_43() const { return ___bUseCalendarInfo_43; }
	inline bool* get_address_of_bUseCalendarInfo_43() { return &___bUseCalendarInfo_43; }
	inline void set_bUseCalendarInfo_43(bool value)
	{
		___bUseCalendarInfo_43 = value;
	}

	inline static int32_t get_offset_of_generalShortTimePattern_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalShortTimePattern_44)); }
	inline String_t* get_generalShortTimePattern_44() const { return ___generalShortTimePattern_44; }
	inline String_t** get_address_of_generalShortTimePattern_44() { return &___generalShortTimePattern_44; }
	inline void set_generalShortTimePattern_44(String_t* value)
	{
		___generalShortTimePattern_44 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_44), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalLongTimePattern_45)); }
	inline String_t* get_generalLongTimePattern_45() const { return ___generalLongTimePattern_45; }
	inline String_t** get_address_of_generalLongTimePattern_45() { return &___generalLongTimePattern_45; }
	inline void set_generalLongTimePattern_45(String_t* value)
	{
		___generalLongTimePattern_45 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_45), value);
	}

	inline static int32_t get_offset_of_m_eraNames_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_eraNames_46)); }
	inline StringU5BU5D_t1281789340* get_m_eraNames_46() const { return ___m_eraNames_46; }
	inline StringU5BU5D_t1281789340** get_address_of_m_eraNames_46() { return &___m_eraNames_46; }
	inline void set_m_eraNames_46(StringU5BU5D_t1281789340* value)
	{
		___m_eraNames_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_46), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEraNames_47)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEraNames_47() const { return ___m_abbrevEraNames_47; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEraNames_47() { return &___m_abbrevEraNames_47; }
	inline void set_m_abbrevEraNames_47(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEraNames_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_47), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEnglishEraNames_48)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEnglishEraNames_48() const { return ___m_abbrevEnglishEraNames_48; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEnglishEraNames_48() { return &___m_abbrevEnglishEraNames_48; }
	inline void set_m_abbrevEnglishEraNames_48(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEnglishEraNames_48 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_48), value);
	}

	inline static int32_t get_offset_of_m_dateWords_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dateWords_49)); }
	inline StringU5BU5D_t1281789340* get_m_dateWords_49() const { return ___m_dateWords_49; }
	inline StringU5BU5D_t1281789340** get_address_of_m_dateWords_49() { return &___m_dateWords_49; }
	inline void set_m_dateWords_49(StringU5BU5D_t1281789340* value)
	{
		___m_dateWords_49 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_49), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___optionalCalendars_50)); }
	inline Int32U5BU5D_t385246372* get_optionalCalendars_50() const { return ___optionalCalendars_50; }
	inline Int32U5BU5D_t385246372** get_address_of_optionalCalendars_50() { return &___optionalCalendars_50; }
	inline void set_optionalCalendars_50(Int32U5BU5D_t385246372* value)
	{
		___optionalCalendars_50 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_50), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_superShortDayNames_51)); }
	inline StringU5BU5D_t1281789340* get_m_superShortDayNames_51() const { return ___m_superShortDayNames_51; }
	inline StringU5BU5D_t1281789340** get_address_of_m_superShortDayNames_51() { return &___m_superShortDayNames_51; }
	inline void set_m_superShortDayNames_51(StringU5BU5D_t1281789340* value)
	{
		___m_superShortDayNames_51 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_51), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___genitiveMonthNames_52)); }
	inline StringU5BU5D_t1281789340* get_genitiveMonthNames_52() const { return ___genitiveMonthNames_52; }
	inline StringU5BU5D_t1281789340** get_address_of_genitiveMonthNames_52() { return &___genitiveMonthNames_52; }
	inline void set_genitiveMonthNames_52(StringU5BU5D_t1281789340* value)
	{
		___genitiveMonthNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_52), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_genitiveAbbreviatedMonthNames_53)); }
	inline StringU5BU5D_t1281789340* get_m_genitiveAbbreviatedMonthNames_53() const { return ___m_genitiveAbbreviatedMonthNames_53; }
	inline StringU5BU5D_t1281789340** get_address_of_m_genitiveAbbreviatedMonthNames_53() { return &___m_genitiveAbbreviatedMonthNames_53; }
	inline void set_m_genitiveAbbreviatedMonthNames_53(StringU5BU5D_t1281789340* value)
	{
		___m_genitiveAbbreviatedMonthNames_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_53), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___leapYearMonthNames_54)); }
	inline StringU5BU5D_t1281789340* get_leapYearMonthNames_54() const { return ___leapYearMonthNames_54; }
	inline StringU5BU5D_t1281789340** get_address_of_leapYearMonthNames_54() { return &___leapYearMonthNames_54; }
	inline void set_leapYearMonthNames_54(StringU5BU5D_t1281789340* value)
	{
		___leapYearMonthNames_54 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_54), value);
	}

	inline static int32_t get_offset_of_formatFlags_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___formatFlags_55)); }
	inline int32_t get_formatFlags_55() const { return ___formatFlags_55; }
	inline int32_t* get_address_of_formatFlags_55() { return &___formatFlags_55; }
	inline void set_formatFlags_55(int32_t value)
	{
		___formatFlags_55 = value;
	}

	inline static int32_t get_offset_of_m_name_56() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_name_56)); }
	inline String_t* get_m_name_56() const { return ___m_name_56; }
	inline String_t** get_address_of_m_name_56() { return &___m_name_56; }
	inline void set_m_name_56(String_t* value)
	{
		___m_name_56 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_56), value);
	}

	inline static int32_t get_offset_of_all_date_time_patterns_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___all_date_time_patterns_57)); }
	inline StringU5BU5D_t1281789340* get_all_date_time_patterns_57() const { return ___all_date_time_patterns_57; }
	inline StringU5BU5D_t1281789340** get_address_of_all_date_time_patterns_57() { return &___all_date_time_patterns_57; }
	inline void set_all_date_time_patterns_57(StringU5BU5D_t1281789340* value)
	{
		___all_date_time_patterns_57 = value;
		Il2CppCodeGenWriteBarrier((&___all_date_time_patterns_57), value);
	}
};

struct DateTimeFormatInfo_t2405853701_StaticFields
{
public:
	// System.String System.Globalization.DateTimeFormatInfo::MSG_READONLY
	String_t* ___MSG_READONLY_1;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_MONTH
	String_t* ___MSG_ARRAYSIZE_MONTH_2;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_DAY
	String_t* ___MSG_ARRAYSIZE_DAY_3;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_ABBREVIATED_DAY_NAMES_4;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_DAY_NAMES_5;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_MONTH_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_ABBREVIATED_MONTH_NAMES_6;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_MONTH_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_MONTH_NAMES_7;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_SHORT_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_SHORT_DAY_NAMES_8;
	// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::theInvariantDateTimeFormatInfo
	DateTimeFormatInfo_t2405853701 * ___theInvariantDateTimeFormatInfo_9;

public:
	inline static int32_t get_offset_of_MSG_READONLY_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_READONLY_1)); }
	inline String_t* get_MSG_READONLY_1() const { return ___MSG_READONLY_1; }
	inline String_t** get_address_of_MSG_READONLY_1() { return &___MSG_READONLY_1; }
	inline void set_MSG_READONLY_1(String_t* value)
	{
		___MSG_READONLY_1 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_1), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_MONTH_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_ARRAYSIZE_MONTH_2)); }
	inline String_t* get_MSG_ARRAYSIZE_MONTH_2() const { return ___MSG_ARRAYSIZE_MONTH_2; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_MONTH_2() { return &___MSG_ARRAYSIZE_MONTH_2; }
	inline void set_MSG_ARRAYSIZE_MONTH_2(String_t* value)
	{
		___MSG_ARRAYSIZE_MONTH_2 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_MONTH_2), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_DAY_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_ARRAYSIZE_DAY_3)); }
	inline String_t* get_MSG_ARRAYSIZE_DAY_3() const { return ___MSG_ARRAYSIZE_DAY_3; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_DAY_3() { return &___MSG_ARRAYSIZE_DAY_3; }
	inline void set_MSG_ARRAYSIZE_DAY_3(String_t* value)
	{
		___MSG_ARRAYSIZE_DAY_3 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_DAY_3), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_ABBREVIATED_DAY_NAMES_4)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_ABBREVIATED_DAY_NAMES_4() const { return ___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return &___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline void set_INVARIANT_ABBREVIATED_DAY_NAMES_4(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_ABBREVIATED_DAY_NAMES_4 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_DAY_NAMES_4), value);
	}

	inline static int32_t get_offset_of_INVARIANT_DAY_NAMES_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_DAY_NAMES_5)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_DAY_NAMES_5() const { return ___INVARIANT_DAY_NAMES_5; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_DAY_NAMES_5() { return &___INVARIANT_DAY_NAMES_5; }
	inline void set_INVARIANT_DAY_NAMES_5(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_DAY_NAMES_5 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_DAY_NAMES_5), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_ABBREVIATED_MONTH_NAMES_6)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_ABBREVIATED_MONTH_NAMES_6() const { return ___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return &___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline void set_INVARIANT_ABBREVIATED_MONTH_NAMES_6(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_ABBREVIATED_MONTH_NAMES_6 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_MONTH_NAMES_6), value);
	}

	inline static int32_t get_offset_of_INVARIANT_MONTH_NAMES_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_MONTH_NAMES_7)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_MONTH_NAMES_7() const { return ___INVARIANT_MONTH_NAMES_7; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_MONTH_NAMES_7() { return &___INVARIANT_MONTH_NAMES_7; }
	inline void set_INVARIANT_MONTH_NAMES_7(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_MONTH_NAMES_7 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_MONTH_NAMES_7), value);
	}

	inline static int32_t get_offset_of_INVARIANT_SHORT_DAY_NAMES_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_SHORT_DAY_NAMES_8)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_SHORT_DAY_NAMES_8() const { return ___INVARIANT_SHORT_DAY_NAMES_8; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_SHORT_DAY_NAMES_8() { return &___INVARIANT_SHORT_DAY_NAMES_8; }
	inline void set_INVARIANT_SHORT_DAY_NAMES_8(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_SHORT_DAY_NAMES_8 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_SHORT_DAY_NAMES_8), value);
	}

	inline static int32_t get_offset_of_theInvariantDateTimeFormatInfo_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___theInvariantDateTimeFormatInfo_9)); }
	inline DateTimeFormatInfo_t2405853701 * get_theInvariantDateTimeFormatInfo_9() const { return ___theInvariantDateTimeFormatInfo_9; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_theInvariantDateTimeFormatInfo_9() { return &___theInvariantDateTimeFormatInfo_9; }
	inline void set_theInvariantDateTimeFormatInfo_9(DateTimeFormatInfo_t2405853701 * value)
	{
		___theInvariantDateTimeFormatInfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___theInvariantDateTimeFormatInfo_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T2405853701_H
#ifndef JSONSERIALIZATIONEXCEPTION_T3109053593_H
#define JSONSERIALIZATIONEXCEPTION_T3109053593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonSerializationException
struct  JsonSerializationException_t3109053593  : public InvalidOperationException_t56020091
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONSERIALIZATIONEXCEPTION_T3109053593_H
#ifndef ASSEMBLYNAME_T270931938_H
#define ASSEMBLYNAME_T270931938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t270931938  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t4157843068 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t4116647657* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t4116647657* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t3456873960 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___cultureinfo_6)); }
	inline CultureInfo_t4157843068 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t4157843068 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t4157843068 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keypair_9)); }
	inline StrongNameKeyPair_t3411219591 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t3411219591 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t3411219591 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___publicKey_10)); }
	inline ByteU5BU5D_t4116647657* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t4116647657* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keyToken_11)); }
	inline ByteU5BU5D_t4116647657* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t4116647657* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___version_13)); }
	inline Version_t3456873960 * get_version_13() const { return ___version_13; }
	inline Version_t3456873960 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t3456873960 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T270931938_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
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
#ifndef WRITEDELEGATE_1_T4077604362_H
#define WRITEDELEGATE_1_T4077604362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct  WriteDelegate_1_t4077604362  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEDELEGATE_1_T4077604362_H
#ifndef JSONDESERIALIZATIONEXCEPTION_T2406110853_H
#define JSONDESERIALIZATIONEXCEPTION_T2406110853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonDeserializationException
struct  JsonDeserializationException_t2406110853  : public JsonSerializationException_t3109053593
{
public:
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonDeserializationException::index
	int32_t ___index_12;

public:
	inline static int32_t get_offset_of_index_12() { return static_cast<int32_t>(offsetof(JsonDeserializationException_t2406110853, ___index_12)); }
	inline int32_t get_index_12() const { return ___index_12; }
	inline int32_t* get_address_of_index_12() { return &___index_12; }
	inline void set_index_12(int32_t value)
	{
		___index_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONDESERIALIZATIONEXCEPTION_T2406110853_H
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// System.Enum[]
struct EnumU5BU5D_t596894966  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Enum_t4135868527 * m_Items[1];

public:
	inline Enum_t4135868527 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Enum_t4135868527 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Enum_t4135868527 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Enum_t4135868527 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Enum_t4135868527 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Enum_t4135868527 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstructorInfo_t5769829 * m_Items[1];

public:
	inline ConstructorInfo_t5769829 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ConstructorInfo_t5769829 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C"  void Stack_1__ctor_m3164958980_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C"  int32_t Stack_1_get_Count_m1599740434_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C"  RuntimeObject * Stack_1_Pop_m756553478_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C"  void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::Invoke(Pathfinding.Serialization.JsonFx.JsonWriter,T)
extern "C"  void WriteDelegate_1_Invoke_m3174722131_gshared (WriteDelegate_1_t4077604362 * __this, JsonWriter_t3837617027 * p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3959998165_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3716971248_gshared (Dictionary_2_t3384741 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m1279427033_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object)
extern "C"  void JsonWriter_Write_m2813745558 (JsonWriter_t3837617027 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonSerializationException::.ctor(System.String)
extern "C"  void JsonSerializationException__ctor_m2877834310 (JsonSerializationException_t3109053593 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C"  bool Type_get_IsEnum_m208091508 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::GetName(System.Type,System.Object)
extern "C"  String_t* Enum_GetName_m2151614395 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C"  FieldInfo_t * Type_GetField_m2961003358 (Type_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor()
extern "C"  void ArgumentException__ctor_m3698743796 (ArgumentException_t132251570 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C"  bool Attribute_IsDefined_m3363303722 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C"  Attribute_t861562559 * Attribute_GetCustomAttribute_m4034845276 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::get_Name()
extern "C"  String_t* JsonNameAttribute_get_Name_m1986309512 (JsonNameAttribute_t425422381 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::.ctor()
extern "C"  void JsonReaderSettings__ctor_m4161459 (JsonReaderSettings_t2493837886 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String,Pathfinding.Serialization.JsonFx.JsonReaderSettings)
extern "C"  void JsonReader__ctor_m1487403671 (JsonReader_t3266634654 * __this, String_t* ___input0, JsonReaderSettings_t2493837886 * ___settings1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
#define List_1__ctor_m2321703786(__this, method) ((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Collections.ArrayList>::.ctor()
#define Stack_1__ctor_m2612972609(__this, method) ((  void (*) (Stack_1_t3562264199 *, const RuntimeMethod*))Stack_1__ctor_m3164958980_gshared)(__this, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Read(System.Type,System.Boolean)
extern "C"  RuntimeObject * JsonReader_Read_m2473083464 (JsonReader_t3266634654 * __this, Type_t * ___expectedType0, bool ___typeIsHint1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize()
extern "C"  int32_t JsonReader_Tokenize_m427789809 (JsonReader_t3266634654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C"  bool Type_get_IsPrimitive_m1114712797 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  RuntimeObject * JsonConverter_Read_m3050530960 (JsonConverter_t949931907 * __this, JsonReader_t3266634654 * ___reader0, Type_t * ___type1, Dictionary_2_t2865362463 * ___value2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String)
extern "C"  void Console_WriteLine_m4182570127 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadObject(System.Type)
extern "C"  RuntimeObject * JsonReader_ReadObject_m778351444 (JsonReader_t3266634654 * __this, Type_t * ___objectType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Pathfinding.Serialization.JsonFx.JsonReader::ReadArray(System.Type)
extern "C"  RuntimeObject* JsonReader_ReadArray_m1334971453 (JsonReader_t3266634654 * __this, Type_t * ___arrayType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadString(System.Type)
extern "C"  RuntimeObject * JsonReader_ReadString_m1735479335 (JsonReader_t3266634654 * __this, Type_t * ___expectedType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadNumber(System.Type)
extern "C"  RuntimeObject * JsonReader_ReadNumber_m226931756 (JsonReader_t3266634654 * __this, Type_t * ___expectedType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  RuntimeObject * TypeCoercionUtility_InstantiateObject_m1943029821 (TypeCoercionUtility_t347344375 * __this, Type_t * ___objectType0, Dictionary_2_t3165258040 ** ___memberMap1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
#define List_1_get_Count_m2934127733(__this, method) ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debug::WriteLine(System.String)
extern "C"  void Debug_WriteLine_m3834261362 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
#define List_1_Add_m3338814081(__this, p0, method) ((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Type Pathfinding.Serialization.JsonFx.JsonReader::GetGenericDictionaryType(System.Type)
extern "C"  Type_t * JsonReader_GetGenericDictionaryType_m796749635 (JsonReader_t3266634654 * __this, Type_t * ___objectType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m3762517327(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::PopulateObject(System.Object&,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.Type)
extern "C"  void JsonReader_PopulateObject_m1813506123 (JsonReader_t3266634654 * __this, RuntimeObject ** ___result0, Type_t * ___objectType1, Dictionary_2_t3165258040 * ___memberMap2, Type_t * ___genericDictionaryType3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m2730968292(__this, p0, method) ((  void (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Type System.Type::GetInterface(System.String)
extern "C"  Type_t * Type_GetInterface_m23870712 (Type_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonDeserializationException::.ctor(System.String,System.Int32)
extern "C"  void JsonDeserializationException__ctor_m3032603050 (JsonDeserializationException_t2406110853 * __this, String_t* ___message0, int32_t ___index1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_AllowUnquotedObjectKeys()
extern "C"  bool JsonReaderSettings_get_AllowUnquotedObjectKeys_m1425807238 (JsonReaderSettings_t2493837886 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize(System.Boolean)
extern "C"  int32_t JsonReader_Tokenize_m3740989926 (JsonReader_t3266634654 * __this, bool ___allowUnquotedString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonReader::ReadUnquotedKey()
extern "C"  String_t* JsonReader_ReadUnquotedKey_m3107698739 (JsonReader_t3266634654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberInfo(System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.String,System.Reflection.MemberInfo&)
extern "C"  Type_t * TypeCoercionUtility_GetMemberInfo_m2445066772 (RuntimeObject * __this /* static, unused */, Dictionary_2_t3165258040 * ___memberMap0, String_t* ___memberName1, MemberInfo_t ** ___memberInfo2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_HandleCyclicReferences()
extern "C"  bool JsonReaderSettings_get_HandleCyclicReferences_m880688794 (JsonReaderSettings_t2493837886 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
#define List_1_get_Item_m2287542950(__this, p0, method) ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::IsTypeHintName(System.String)
extern "C"  bool JsonReaderSettings_IsTypeHintName_m280374552 (JsonReaderSettings_t2493837886 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Collections.IDictionary,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  RuntimeObject * TypeCoercionUtility_ProcessTypeHint_m1443685319 (TypeCoercionUtility_t347344375 * __this, RuntimeObject* ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_t3165258040 ** ___memberMap3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::SetMemberValue(System.Object,System.Type,System.Reflection.MemberInfo,System.Object)
extern "C"  void TypeCoercionUtility_SetMemberValue_m1035860574 (TypeCoercionUtility_t347344375 * __this, RuntimeObject * ___result0, Type_t * ___memberType1, MemberInfo_t * ___memberInfo2, RuntimeObject * ___value3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_HasElementType()
extern "C"  bool Type_get_HasElementType_m710151977 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.ArrayList>::get_Count()
#define Stack_1_get_Count_m396621852(__this, method) ((  int32_t (*) (Stack_1_t3562264199 *, const RuntimeMethod*))Stack_1_get_Count_m1599740434_gshared)(__this, method)
// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<System.Collections.ArrayList>::Pop()
#define Stack_1_Pop_m2156809409(__this, method) ((  ArrayList_t2718874744 * (*) (Stack_1_t3562264199 *, const RuntimeMethod*))Stack_1_Pop_m756553478_gshared)(__this, method)
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.ArrayList>::Push(!0)
#define Stack_1_Push_m3824829859(__this, p0, method) ((  void (*) (Stack_1_t3562264199 *, ArrayList_t2718874744 *, const RuntimeMethod*))Stack_1_Push_m1669856732_gshared)(__this, p0, method)
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C"  StringBuilder_t * StringBuilder_Append_m3214161208 (StringBuilder_t * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C"  NumberFormatInfo_t435877138 * NumberFormatInfo_get_InvariantInfo_m349577018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
extern "C"  bool Int32_TryParse_m135955795 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, int32_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ConvertFromUtf32(System.Int32)
extern "C"  String_t* Char_ConvertFromUtf32_m2726544766 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Object)
extern "C"  RuntimeObject * TypeCoercionUtility_CoerceType_m977820981 (TypeCoercionUtility_t347344375 * __this, Type_t * ___targetType0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m3646673943 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  Decimal_t2948259380  Decimal_Parse_m942471224 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
extern "C"  void Decimal__ctor_m1256289983 (Decimal_t2948259380 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThanOrEqual(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_GreaterThanOrEqual_m1217153501 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, Decimal_t2948259380  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThanOrEqual(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_LessThanOrEqual_m3936545906 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, Decimal_t2948259380  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int32_t Decimal_op_Explicit_m1842265407 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
extern "C"  void Decimal__ctor_m450048609 (Decimal_t2948259380 * __this, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int64_t Decimal_op_Explicit_m438967917 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  double Double_Parse_m1135962389 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String)
extern "C"  void JsonReader__ctor_m2503642600 (JsonReader_t3266634654 * __this, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.Int32,System.Type)
extern "C"  RuntimeObject * JsonReader_Deserialize_m1280985629 (JsonReader_t3266634654 * __this, int32_t ___start0, Type_t * ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C"  bool Char_IsWhiteSpace_m2148390798 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReader::MatchLiteral(System.String)
extern "C"  bool JsonReader_MatchLiteral_m3606078180 (JsonReader_t3266634654 * __this, String_t* ___literal0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_Ordinal()
extern "C"  StringComparer_t3301955079 * StringComparer_get_Ordinal_m2103862281 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>::get_Item(System.Int32)
#define List_1_get_Item_m1904888016(__this, p0, method) ((  JsonConverter_t949931907 * (*) (List_1_t2422006649 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>::get_Count()
#define List_1_get_Count_m3926730779(__this, method) ((  int32_t (*) (List_1_t2422006649 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::.ctor()
extern "C"  void TypeCoercionUtility__ctor_m2083287854 (TypeCoercionUtility_t347344375 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>::.ctor()
#define List_1__ctor_m2916482698(__this, method) ((  void (*) (List_1_t2422006649 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonSpecifiedPropertyAttribute::get_SpecifiedProperty()
extern "C"  String_t* JsonSpecifiedPropertyAttribute_get_SpecifiedProperty_m1398343820 (JsonSpecifiedPropertyAttribute_t115917564 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C"  void ArgumentException__ctor_m1535060261 (ArgumentException_t132251570 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriterSettings::.ctor()
extern "C"  void JsonWriterSettings__ctor_m1149145536 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::.ctor(System.Text.StringBuilder,Pathfinding.Serialization.JsonFx.JsonWriterSettings)
extern "C"  void JsonWriter__ctor_m94315965 (JsonWriter_t3837617027 * __this, StringBuilder_t * ___output0, JsonWriterSettings_t3483137480 * ___settings1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C"  void StringWriter__ctor_m3987072682 (StringWriter_t802263757 * __this, StringBuilder_t * p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::.ctor(System.Text.StringBuilder)
extern "C"  void JsonWriter__ctor_m2625422002 (JsonWriter_t3837617027 * __this, StringBuilder_t * ___output0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.JsonFx.JsonWriter::get_Settings()
extern "C"  JsonWriterSettings_t3483137480 * JsonWriter_get_Settings_m1175525012 (JsonWriter_t3837617027 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonConverter::Write(Pathfinding.Serialization.JsonFx.JsonWriter,System.Type,System.Object)
extern "C"  void JsonConverter_Write_m748514951 (JsonConverter_t949931907 * __this, JsonWriter_t3837617027 * ___writer0, Type_t * ___type1, RuntimeObject * ___value2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C"  int32_t Type_GetTypeCode_m480753082 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::Invoke(Pathfinding.Serialization.JsonFx.JsonWriter,T)
#define WriteDelegate_1_Invoke_m3174722131(__this, p0, p1, method) ((  void (*) (WriteDelegate_1_t4077604362 *, JsonWriter_t3837617027 *, DateTime_t3738529785 , const RuntimeMethod*))WriteDelegate_1_Invoke_m3174722131_gshared)(__this, p0, p1, method)
// System.DateTimeKind System.DateTime::get_Kind()
extern "C"  int32_t DateTime_get_Kind_m2154871796 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C"  DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String)
extern "C"  String_t* Guid_ToString_m4056316049 (Guid_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
extern "C"  bool Enum_IsDefined_m1442314461 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Enum[] Pathfinding.Serialization.JsonFx.JsonWriter::GetFlagList(System.Type,System.Object)
extern "C"  EnumU5BU5D_t596894966* JsonWriter_GetFlagList_m3518029825 (RuntimeObject * __this /* static, unused */, Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::GetJsonName(System.Object)
extern "C"  String_t* JsonNameAttribute_GetJsonName_m3272941041 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String)
extern "C"  String_t* Enum_ToString_m2477889358 (RuntimeObject * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::ConvertToUtf32(System.String,System.Int32)
extern "C"  int32_t Char_ConvertToUtf32_m2897437866 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
extern "C"  String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Byte_ToString_m4063101981 (uint8_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* SByte_ToString_m2708934884 (int8_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Int16_ToString_m1931491687 (int16_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt16::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt16_ToString_m760649087 (uint16_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Int32_ToString_m2507389746 (int32_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
extern "C"  Decimal_t2948259380  Decimal_op_Implicit_m3873897383 (RuntimeObject * __this /* static, unused */, uint32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt32_ToString_m2420423038 (uint32_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C"  Decimal_t2948259380  Decimal_op_Implicit_m1349849065 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Int64_ToString_m2085073918 (int64_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C"  Decimal_t2948259380  Decimal_op_Implicit_m2299919277 (RuntimeObject * __this /* static, unused */, uint64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt64_ToString_m1695188334 (uint64_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsNaN(System.Single)
extern "C"  bool Single_IsNaN_m4024467661 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsInfinity(System.Single)
extern "C"  bool Single_IsInfinity_m936314085 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Single_ToString_m543431371 (float* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNaN(System.Double)
extern "C"  bool Double_IsNaN_m649024406 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsInfinity(System.Double)
extern "C"  bool Double_IsInfinity_m820013146 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Double_ToString_m1051753975 (double* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Decimal_ToString_m14270257 (Decimal_t2948259380 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C"  int64_t TimeSpan_get_Ticks_m2137362016 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_HandleCyclicReferences()
extern "C"  bool JsonWriterSettings_get_HandleCyclicReferences_m1118343241 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3959998165(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m3959998165_gshared)(__this, p0, p1, method)
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectProperty(System.String,System.Object)
extern "C"  void JsonWriter_WriteObjectProperty_m2063146684 (JsonWriter_t3837617027 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m3716971248(__this, method) ((  int32_t (*) (Dictionary_2_t3384741 *, const RuntimeMethod*))Dictionary_2_get_Count_m3716971248_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
#define Dictionary_2_Add_m1279427033(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))Dictionary_2_Add_m1279427033_gshared)(__this, p0, p1, method)
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C"  RuntimeObject * DictionaryEntry_get_Key_m3117378551 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object)
extern "C"  String_t* Convert_ToString_m2219349533 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C"  RuntimeObject * DictionaryEntry_get_Value_m618120527 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C"  String_t* AssemblyName_get_Name_m4072373679 (AssemblyName_t270931938 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
extern "C"  PropertyInfoU5BU5D_t1461822886* Type_GetProperties_m1538559489 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::IsIgnored(System.Type,System.Reflection.MemberInfo,System.Object)
extern "C"  bool JsonWriter_IsIgnored_m796319191 (JsonWriter_t3837617027 * __this, Type_t * ___objType0, MemberInfo_t * ___member1, RuntimeObject * ___obj2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::IsDefaultValue(System.Reflection.MemberInfo,System.Object)
extern "C"  bool JsonWriter_IsDefaultValue_m3781132218 (JsonWriter_t3837617027 * __this, MemberInfo_t * ___member0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Type::GetFields()
extern "C"  FieldInfoU5BU5D_t846150980* Type_GetFields_m3709891696 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
extern "C"  bool FieldInfo_get_IsPublic_m3378038140 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C"  bool FieldInfo_get_IsStatic_m3482711189 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonIgnoreAttribute::IsJsonIgnore(System.Object)
extern "C"  bool JsonIgnoreAttribute_IsJsonIgnore_m638233806 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonSpecifiedPropertyAttribute::GetJsonSpecifiedProperty(System.Reflection.MemberInfo)
extern "C"  String_t* JsonSpecifiedPropertyAttribute_GetJsonSpecifiedProperty_m3177035715 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C"  PropertyInfo_t * Type_GetProperty_m3414567179 (Type_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object)
extern "C"  bool Convert_ToBoolean_m2072772931 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonIgnoreAttribute::IsXmlIgnore(System.Object)
extern "C"  bool JsonIgnoreAttribute_IsXmlIgnore_m758430558 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object)
extern "C"  uint64_t Convert_ToUInt64_m1841050714 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array System.Enum::GetValues(System.Type)
extern "C"  RuntimeArray * Enum_GetValues_m4192343468 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Enum>::.ctor(System.Int32)
#define List_1__ctor_m146283286(__this, p0, method) ((  void (*) (List_1_t1312975973 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method)
// System.Object System.Convert::ChangeType(System.Object,System.Type)
extern "C"  RuntimeObject * Convert_ChangeType_m739676612 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Enum>::Add(!0)
#define List_1_Add_m1999211601(__this, p0, method) ((  void (*) (List_1_t1312975973 *, Enum_t4135868527 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<System.Enum>::ToArray()
#define List_1_ToArray_m368538830(__this, method) ((  EnumU5BU5D_t596894966* (*) (List_1_t1312975973 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// System.Object System.Array::GetValue(System.Int32)
extern "C"  RuntimeObject * Array_GetValue_m2528546681 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt64)
extern "C"  RuntimeObject * Enum_ToObject_m121831801 (RuntimeObject * __this /* static, unused */, Type_t * p0, uint64_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C"  double Decimal_op_Explicit_m2816896069 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C"  Decimal_t2948259380  Decimal_op_Explicit_m2433293820 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_Inequality_m3543190500 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, Decimal_t2948259380  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C"  void TextWriter_Dispose_m2495808722 (TextWriter_t3478189236 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m3211016485 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::.ctor()
#define Dictionary_2__ctor_m3109603953(__this, method) ((  void (*) (Dictionary_2_t1314637808 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C"  Type_t * Type_GetType_m3605423543 (RuntimeObject * __this /* static, unused */, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Collections.IDictionary,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  RuntimeObject * TypeCoercionUtility_CoerceType_m1299671266 (TypeCoercionUtility_t347344375 * __this, Type_t * ___targetType0, RuntimeObject* ___value1, Dictionary_2_t3165258040 ** ___memberMap2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C"  bool Type_get_IsInterface_m3284996719 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C"  bool Type_get_IsAbstract_m1120089130 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String)
extern "C"  void JsonTypeCoercionException__ctor_m2620875090 (JsonTypeCoercionException_t4151781493 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C"  ConstructorInfo_t5769829 * Type_GetConstructor_m2219014380 (Type_t * __this, TypeU5BU5D_t3940880105* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern "C"  RuntimeObject * ConstructorInfo_Invoke_m4089836896 (ConstructorInfo_t5769829 * __this, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C"  Exception_t * Exception_get_InnerException_m3836775 (Exception_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String,System.Exception)
extern "C"  void JsonTypeCoercionException__ctor_m1127814158 (JsonTypeCoercionException_t4151781493 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberMap(System.Type)
extern "C"  Dictionary_2_t3165258040 * TypeCoercionUtility_GetMemberMap_m3192982815 (TypeCoercionUtility_t347344375 * __this, Type_t * ___objectType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CreateMemberMap(System.Type)
extern "C"  Dictionary_2_t3165258040 * TypeCoercionUtility_CreateMemberMap_m1180892943 (TypeCoercionUtility_t347344375 * __this, Type_t * ___objectType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::get_MemberMapCache()
extern "C"  Dictionary_2_t1314637808 * TypeCoercionUtility_get_MemberMapCache_m3398197512 (TypeCoercionUtility_t347344375 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m2344095753(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t1314637808 *, Type_t *, Dictionary_2_t3165258040 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::.ctor()
#define Dictionary_2__ctor_m3244001480(__this, method) ((  void (*) (Dictionary_2_t3165258040 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m409945335(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3165258040 *, String_t*, MemberInfo_t *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m1203754317(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1314637808 *, Type_t *, Dictionary_2_t3165258040 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m692485511(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3165258040 *, String_t*, MemberInfo_t **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C"  void FieldInfo_SetValue_m2460171138 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::IsNullable(System.Type)
extern "C"  bool TypeCoercionUtility_IsNullable_m2799635471 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::Parse(System.Type,System.String)
extern "C"  RuntimeObject * Enum_Parse_m1871331077 (RuntimeObject * __this /* static, unused */, Type_t * p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::GetUnderlyingType(System.Type)
extern "C"  Type_t * Enum_GetUnderlyingType_m2480312097 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Object)
extern "C"  RuntimeObject * Enum_ToObject_m1628250250 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceList(System.Type,System.Type,System.Collections.IEnumerable)
extern "C"  RuntimeObject * TypeCoercionUtility_CoerceList_m2158031047 (TypeCoercionUtility_t347344375 * __this, Type_t * ___targetType0, Type_t * ___arrayType1, RuntimeObject* ___value2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C"  DateTimeFormatInfo_t2405853701 * DateTimeFormatInfo_get_InvariantInfo_m2329875772 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::TryParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
extern "C"  bool DateTime_TryParse_m1691789376 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject* p1, int32_t p2, DateTime_t3738529785 * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.String)
extern "C"  void Guid__ctor_m2423264394 (Guid_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
extern "C"  bool Uri_TryCreate_m385949523 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, Uri_t100236324 ** p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C"  void Version__ctor_m1394137037 (Version_t3456873960 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C"  void TimeSpan__ctor_m1896986612 (TimeSpan_t881159249 * __this, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C"  TypeConverter_t2249118273 * TypeDescriptor_GetConverter_m3748618295 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern "C"  bool TypeConverter_CanConvertFrom_m322337685 (TypeConverter_t2249118273 * __this, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern "C"  RuntimeObject * TypeConverter_ConvertFrom_m415439298 (TypeConverter_t2249118273 * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.Type)
extern "C"  bool TypeConverter_CanConvertTo_m183459680 (TypeConverter_t2249118273 * __this, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.Object,System.Type)
extern "C"  RuntimeObject * TypeConverter_ConvertTo_m3877504043 (TypeConverter_t2249118273 * __this, RuntimeObject * p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceArray(System.Type,System.Collections.IEnumerable)
extern "C"  RuntimeArray * TypeCoercionUtility_CoerceArray_m867967496 (TypeCoercionUtility_t347344375 * __this, Type_t * ___elementType0, RuntimeObject* ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
extern "C"  ConstructorInfoU5BU5D_t881249896* Type_GetConstructors_m1172352582 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C"  MethodInfo_t * Type_GetMethod_m2019726356 (Type_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void Pathfinding.Serialization.JsonFx.JsonConverter::Write(Pathfinding.Serialization.JsonFx.JsonWriter,System.Type,System.Object)
extern "C"  void JsonConverter_Write_m748514951 (JsonConverter_t949931907 * __this, JsonWriter_t3837617027 * ___writer0, Type_t * ___type1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	Dictionary_2_t2865362463 * V_0 = NULL;
	{
		Type_t * L_0 = ___type1;
		RuntimeObject * L_1 = ___value2;
		Dictionary_2_t2865362463 * L_2 = VirtFuncInvoker2< Dictionary_2_t2865362463 *, Type_t *, RuntimeObject * >::Invoke(5 /* System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.JsonFx.JsonConverter::WriteJson(System.Type,System.Object) */, __this, L_0, L_1);
		V_0 = L_2;
		JsonWriter_t3837617027 * L_3 = ___writer0;
		Dictionary_2_t2865362463 * L_4 = V_0;
		JsonWriter_Write_m2813745558(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  RuntimeObject * JsonConverter_Read_m3050530960 (JsonConverter_t949931907 * __this, JsonReader_t3266634654 * ___reader0, Type_t * ___type1, Dictionary_2_t2865362463 * ___value2, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Type_t * L_0 = ___type1;
		Dictionary_2_t2865362463 * L_1 = ___value2;
		RuntimeObject * L_2 = VirtFuncInvoker2< RuntimeObject *, Type_t *, Dictionary_2_t2865362463 * >::Invoke(6 /* System.Object Pathfinding.Serialization.JsonFx.JsonConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, __this, L_0, L_1);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
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
// System.Void Pathfinding.Serialization.JsonFx.JsonDeserializationException::.ctor(System.String,System.Int32)
extern "C"  void JsonDeserializationException__ctor_m3032603050 (JsonDeserializationException_t2406110853 * __this, String_t* ___message0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		__this->set_index_12((-1));
		String_t* L_0 = ___message0;
		JsonSerializationException__ctor_m2877834310(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___index1;
		__this->set_index_12(L_1);
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
// System.Boolean Pathfinding.Serialization.JsonFx.JsonIgnoreAttribute::IsJsonIgnore(System.Object)
extern "C"  bool JsonIgnoreAttribute_IsJsonIgnore_m638233806 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonIgnoreAttribute_IsJsonIgnore_m638233806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeObject * L_0 = ___value0;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0063;
	}

IL_000e:
	{
		RuntimeObject * L_2 = ___value0;
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = (RuntimeObject*)NULL;
		Type_t * L_4 = V_0;
		bool L_5 = Type_get_IsEnum_m208091508(L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_7 = V_0;
		Type_t * L_8 = V_0;
		RuntimeObject * L_9 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		String_t* L_10 = Enum_GetName_m2151614395(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		FieldInfo_t * L_11 = Type_GetField_m2961003358(L_7, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_003e;
	}

IL_0035:
	{
		RuntimeObject * L_12 = ___value0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, ICustomAttributeProvider_t1530824137_il2cpp_TypeInfo_var));
	}

IL_003e:
	{
		RuntimeObject* L_13 = V_1;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_13) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_t132251570 * L_15 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
	}

IL_004f:
	{
		RuntimeObject* L_16 = V_1;
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (JsonIgnoreAttribute_t316361994_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		bool L_19 = InterfaceFuncInvoker2< bool, Type_t *, bool >::Invoke(1 /* System.Boolean System.Reflection.ICustomAttributeProvider::IsDefined(System.Type,System.Boolean) */, ICustomAttributeProvider_t1530824137_il2cpp_TypeInfo_var, L_16, L_18, (bool)1);
		V_3 = L_19;
		goto IL_0063;
	}

IL_0063:
	{
		bool L_20 = V_3;
		return L_20;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonIgnoreAttribute::IsXmlIgnore(System.Object)
extern "C"  bool JsonIgnoreAttribute_IsXmlIgnore_m758430558 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___value0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0019;
	}

IL_000e:
	{
		RuntimeObject * L_2 = ___value0;
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_2 = (bool)0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_4 = V_2;
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
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::get_Name()
extern "C"  String_t* JsonNameAttribute_get_Name_m1986309512 (JsonNameAttribute_t425422381 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_jsonName_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::GetJsonName(System.Object)
extern "C"  String_t* JsonNameAttribute_GetJsonName_m3272941041 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonNameAttribute_GetJsonName_m3272941041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	MemberInfo_t * V_1 = NULL;
	JsonNameAttribute_t425422381 * V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		RuntimeObject * L_0 = ___value0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_4 = (String_t*)NULL;
		goto IL_00a9;
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___value0;
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = (MemberInfo_t *)NULL;
		Type_t * L_4 = V_0;
		bool L_5 = Type_get_IsEnum_m208091508(L_4, /*hidden argument*/NULL);
		V_5 = L_5;
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		Type_t * L_7 = V_0;
		RuntimeObject * L_8 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		String_t* L_9 = Enum_GetName_m2151614395(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_6 = L_9;
		String_t* L_10 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_7 = L_11;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_0044;
		}
	}
	{
		V_4 = (String_t*)NULL;
		goto IL_00a9;
	}

IL_0044:
	{
		Type_t * L_13 = V_0;
		String_t* L_14 = V_6;
		FieldInfo_t * L_15 = Type_GetField_m2961003358(L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0059;
	}

IL_0050:
	{
		RuntimeObject * L_16 = ___value0;
		V_1 = ((MemberInfo_t *)IsInstClass((RuntimeObject*)L_16, MemberInfo_t_il2cpp_TypeInfo_var));
	}

IL_0059:
	{
		MemberInfo_t * L_17 = V_1;
		V_8 = (bool)((((RuntimeObject*)(MemberInfo_t *)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		ArgumentException_t132251570 * L_19 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19);
	}

IL_006a:
	{
		MemberInfo_t * L_20 = V_1;
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (JsonNameAttribute_t425422381_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		bool L_23 = Attribute_IsDefined_m3363303722(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_0089;
		}
	}
	{
		V_4 = (String_t*)NULL;
		goto IL_00a9;
	}

IL_0089:
	{
		MemberInfo_t * L_25 = V_1;
		RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (JsonNameAttribute_t425422381_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Attribute_t861562559 * L_28 = Attribute_GetCustomAttribute_m4034845276(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
		V_2 = ((JsonNameAttribute_t425422381 *)CastclassClass((RuntimeObject*)L_28, JsonNameAttribute_t425422381_il2cpp_TypeInfo_var));
		JsonNameAttribute_t425422381 * L_29 = V_2;
		String_t* L_30 = JsonNameAttribute_get_Name_m1986309512(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		goto IL_00a9;
	}

IL_00a9:
	{
		String_t* L_31 = V_4;
		return L_31;
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
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String)
extern "C"  void JsonReader__ctor_m2503642600 (JsonReader_t3266634654 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_m2503642600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		JsonReaderSettings_t2493837886 * L_1 = (JsonReaderSettings_t2493837886 *)il2cpp_codegen_object_new(JsonReaderSettings_t2493837886_il2cpp_TypeInfo_var);
		JsonReaderSettings__ctor_m4161459(L_1, /*hidden argument*/NULL);
		JsonReader__ctor_m1487403671(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String,Pathfinding.Serialization.JsonFx.JsonReaderSettings)
extern "C"  void JsonReader__ctor_m1487403671 (JsonReader_t3266634654 * __this, String_t* ___input0, JsonReaderSettings_t2493837886 * ___settings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_m1487403671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReaderSettings_t2493837886 * L_0 = (JsonReaderSettings_t2493837886 *)il2cpp_codegen_object_new(JsonReaderSettings_t2493837886_il2cpp_TypeInfo_var);
		JsonReaderSettings__ctor_m4161459(L_0, /*hidden argument*/NULL);
		__this->set_Settings_0(L_0);
		__this->set_Source_1((String_t*)NULL);
		__this->set_SourceLength_2(0);
		List_1_t257213610 * L_1 = (List_1_t257213610 *)il2cpp_codegen_object_new(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(L_1, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		__this->set_previouslyDeserialized_4(L_1);
		Stack_1_t3562264199 * L_2 = (Stack_1_t3562264199 *)il2cpp_codegen_object_new(Stack_1_t3562264199_il2cpp_TypeInfo_var);
		Stack_1__ctor_m2612972609(L_2, /*hidden argument*/Stack_1__ctor_m2612972609_RuntimeMethod_var);
		__this->set_jsArrays_5(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		JsonReaderSettings_t2493837886 * L_3 = ___settings1;
		__this->set_Settings_0(L_3);
		String_t* L_4 = ___input0;
		__this->set_Source_1(L_4);
		String_t* L_5 = __this->get_Source_1();
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		__this->set_SourceLength_2(L_6);
		return;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.Int32,System.Type)
extern "C"  RuntimeObject * JsonReader_Deserialize_m1280985629 (JsonReader_t3266634654 * __this, int32_t ___start0, Type_t * ___type1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = ___start0;
		__this->set_index_3(L_0);
		Type_t * L_1 = ___type1;
		RuntimeObject * L_2 = JsonReader_Read_m2473083464(__this, L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Read(System.Type,System.Boolean)
extern "C"  RuntimeObject * JsonReader_Read_m2473083464 (JsonReader_t3266634654 * __this, Type_t * ___expectedType0, bool ___typeIsHint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Read_m2473083464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	JsonConverter_t949931907 * V_3 = NULL;
	bool V_4 = false;
	RuntimeObject * V_5 = NULL;
	Dictionary_2_t2865362463 * V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	bool V_8 = false;
	RuntimeObject * V_9 = NULL;
	JsonTypeCoercionException_t4151781493 * V_10 = NULL;
	int32_t V_11 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	JsonReader_t3266634654 * G_B18_0 = NULL;
	JsonReader_t3266634654 * G_B17_0 = NULL;
	Type_t * G_B19_0 = NULL;
	JsonReader_t3266634654 * G_B19_1 = NULL;
	JsonReader_t3266634654 * G_B22_0 = NULL;
	JsonReader_t3266634654 * G_B21_0 = NULL;
	Type_t * G_B23_0 = NULL;
	JsonReader_t3266634654 * G_B23_1 = NULL;
	JsonReader_t3266634654 * G_B26_0 = NULL;
	JsonReader_t3266634654 * G_B25_0 = NULL;
	Type_t * G_B27_0 = NULL;
	JsonReader_t3266634654 * G_B27_1 = NULL;
	JsonReader_t3266634654 * G_B30_0 = NULL;
	JsonReader_t3266634654 * G_B29_0 = NULL;
	Type_t * G_B31_0 = NULL;
	JsonReader_t3266634654 * G_B31_1 = NULL;
	{
		Type_t * L_0 = ___expectedType0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		___expectedType0 = (Type_t *)NULL;
	}

IL_0017:
	{
		int32_t L_4 = JsonReader_Tokenize_m427789809(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = ___expectedType0;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Type_t * L_6 = ___expectedType0;
		bool L_7 = Type_get_IsPrimitive_m1114712797(L_6, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00b0;
		}
	}
	{
		JsonReaderSettings_t2493837886 * L_9 = __this->get_Settings_0();
		Type_t * L_10 = ___expectedType0;
		JsonConverter_t949931907 * L_11 = VirtFuncInvoker1< JsonConverter_t949931907 *, Type_t * >::Invoke(4 /* Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonReaderSettings::GetConverter(System.Type) */, L_9, L_10);
		V_3 = L_11;
		JsonConverter_t949931907 * L_12 = V_3;
		V_4 = (bool)((!(((RuntimeObject*)(JsonConverter_t949931907 *)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			RuntimeTypeHandle_t3027515415  L_14 = { reinterpret_cast<intptr_t> (Dictionary_2_t2865362463_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_15 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			RuntimeObject * L_16 = JsonReader_Read_m2473083464(__this, L_15, (bool)0, /*hidden argument*/NULL);
			V_5 = L_16;
			RuntimeObject * L_17 = V_5;
			V_6 = ((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_17, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
			Dictionary_2_t2865362463 * L_18 = V_6;
			V_8 = (bool)((((RuntimeObject*)(Dictionary_2_t2865362463 *)L_18) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_19 = V_8;
			if (!L_19)
			{
				goto IL_007a;
			}
		}

IL_0072:
		{
			V_9 = NULL;
			goto IL_0252;
		}

IL_007a:
		{
			JsonConverter_t949931907 * L_20 = V_3;
			Type_t * L_21 = ___expectedType0;
			Dictionary_2_t2865362463 * L_22 = V_6;
			RuntimeObject * L_23 = JsonConverter_Read_m3050530960(L_20, __this, L_21, L_22, /*hidden argument*/NULL);
			V_7 = L_23;
			RuntimeObject * L_24 = V_7;
			V_9 = L_24;
			goto IL_0252;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008f;
		throw e;
	}

CATCH_008f:
	{ // begin catch(Pathfinding.Serialization.JsonFx.JsonTypeCoercionException)
		V_10 = ((JsonTypeCoercionException_t4151781493 *)__exception_local);
		JsonTypeCoercionException_t4151781493 * L_25 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2138047601, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m4182570127(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		goto IL_00a7;
	} // end catch (depth: 1)

IL_00a7:
	{
		V_9 = NULL;
		goto IL_0252;
	}

IL_00af:
	{
	}

IL_00b0:
	{
		int32_t L_27 = V_0;
		V_11 = L_27;
		int32_t L_28 = V_11;
		switch (L_28)
		{
			case 0:
			{
				goto IL_024c;
			}
			case 1:
			{
				goto IL_022f;
			}
			case 2:
			{
				goto IL_0191;
			}
			case 3:
			{
				goto IL_0147;
			}
			case 4:
			{
				goto IL_016c;
			}
			case 5:
			{
				goto IL_01b1;
			}
			case 6:
			{
				goto IL_01db;
			}
			case 7:
			{
				goto IL_0205;
			}
			case 8:
			{
				goto IL_0132;
			}
			case 9:
			{
				goto IL_011d;
			}
			case 10:
			{
				goto IL_0108;
			}
			case 11:
			{
				goto IL_024c;
			}
			case 12:
			{
				goto IL_00f3;
			}
		}
	}
	{
		goto IL_024c;
	}

IL_00f3:
	{
		bool L_29 = ___typeIsHint1;
		G_B17_0 = __this;
		if (L_29)
		{
			G_B18_0 = __this;
			goto IL_00fb;
		}
	}
	{
		Type_t * L_30 = ___expectedType0;
		G_B19_0 = L_30;
		G_B19_1 = G_B17_0;
		goto IL_00fc;
	}

IL_00fb:
	{
		G_B19_0 = ((Type_t *)(NULL));
		G_B19_1 = G_B18_0;
	}

IL_00fc:
	{
		RuntimeObject * L_31 = JsonReader_ReadObject_m778351444(G_B19_1, G_B19_0, /*hidden argument*/NULL);
		V_9 = L_31;
		goto IL_0252;
	}

IL_0108:
	{
		bool L_32 = ___typeIsHint1;
		G_B21_0 = __this;
		if (L_32)
		{
			G_B22_0 = __this;
			goto IL_0110;
		}
	}
	{
		Type_t * L_33 = ___expectedType0;
		G_B23_0 = L_33;
		G_B23_1 = G_B21_0;
		goto IL_0111;
	}

IL_0110:
	{
		G_B23_0 = ((Type_t *)(NULL));
		G_B23_1 = G_B22_0;
	}

IL_0111:
	{
		RuntimeObject* L_34 = JsonReader_ReadArray_m1334971453(G_B23_1, G_B23_0, /*hidden argument*/NULL);
		V_9 = L_34;
		goto IL_0252;
	}

IL_011d:
	{
		bool L_35 = ___typeIsHint1;
		G_B25_0 = __this;
		if (L_35)
		{
			G_B26_0 = __this;
			goto IL_0125;
		}
	}
	{
		Type_t * L_36 = ___expectedType0;
		G_B27_0 = L_36;
		G_B27_1 = G_B25_0;
		goto IL_0126;
	}

IL_0125:
	{
		G_B27_0 = ((Type_t *)(NULL));
		G_B27_1 = G_B26_0;
	}

IL_0126:
	{
		RuntimeObject * L_37 = JsonReader_ReadString_m1735479335(G_B27_1, G_B27_0, /*hidden argument*/NULL);
		V_9 = L_37;
		goto IL_0252;
	}

IL_0132:
	{
		bool L_38 = ___typeIsHint1;
		G_B29_0 = __this;
		if (L_38)
		{
			G_B30_0 = __this;
			goto IL_013a;
		}
	}
	{
		Type_t * L_39 = ___expectedType0;
		G_B31_0 = L_39;
		G_B31_1 = G_B29_0;
		goto IL_013b;
	}

IL_013a:
	{
		G_B31_0 = ((Type_t *)(NULL));
		G_B31_1 = G_B30_0;
	}

IL_013b:
	{
		RuntimeObject * L_40 = JsonReader_ReadNumber_m226931756(G_B31_1, G_B31_0, /*hidden argument*/NULL);
		V_9 = L_40;
		goto IL_0252;
	}

IL_0147:
	{
		int32_t L_41 = __this->get_index_3();
		int32_t L_42 = String_get_Length_m3847582255(_stringLiteral3875954633, /*hidden argument*/NULL);
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42)));
		bool L_43 = ((bool)0);
		RuntimeObject * L_44 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_43);
		V_9 = L_44;
		goto IL_0252;
	}

IL_016c:
	{
		int32_t L_45 = __this->get_index_3();
		int32_t L_46 = String_get_Length_m3847582255(_stringLiteral4002445229, /*hidden argument*/NULL);
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46)));
		bool L_47 = ((bool)1);
		RuntimeObject * L_48 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_47);
		V_9 = L_48;
		goto IL_0252;
	}

IL_0191:
	{
		int32_t L_49 = __this->get_index_3();
		int32_t L_50 = String_get_Length_m3847582255(_stringLiteral1202628576, /*hidden argument*/NULL);
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50)));
		V_9 = NULL;
		goto IL_0252;
	}

IL_01b1:
	{
		int32_t L_51 = __this->get_index_3();
		int32_t L_52 = String_get_Length_m3847582255(_stringLiteral2647588310, /*hidden argument*/NULL);
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52)));
		double L_53 = (std::numeric_limits<double>::quiet_NaN());
		RuntimeObject * L_54 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_53);
		V_9 = L_54;
		goto IL_0252;
	}

IL_01db:
	{
		int32_t L_55 = __this->get_index_3();
		int32_t L_56 = String_get_Length_m3847582255(_stringLiteral670053913, /*hidden argument*/NULL);
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56)));
		double L_57 = (std::numeric_limits<double>::infinity());
		RuntimeObject * L_58 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_57);
		V_9 = L_58;
		goto IL_0252;
	}

IL_0205:
	{
		int32_t L_59 = __this->get_index_3();
		int32_t L_60 = String_get_Length_m3847582255(_stringLiteral2385296252, /*hidden argument*/NULL);
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)L_60)));
		double L_61 = (-std::numeric_limits<double>::infinity());
		RuntimeObject * L_62 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_61);
		V_9 = L_62;
		goto IL_0252;
	}

IL_022f:
	{
		int32_t L_63 = __this->get_index_3();
		int32_t L_64 = String_get_Length_m3847582255(_stringLiteral3079778386, /*hidden argument*/NULL);
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64)));
		V_9 = NULL;
		goto IL_0252;
	}

IL_024c:
	{
		V_9 = NULL;
		goto IL_0252;
	}

IL_0252:
	{
		RuntimeObject * L_65 = V_9;
		return L_65;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadObject(System.Type)
extern "C"  RuntimeObject * JsonReader_ReadObject_m778351444 (JsonReader_t3266634654 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ReadObject_m778351444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Dictionary_2_t3165258040 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	RuntimeObject * V_7 = NULL;
	{
		V_0 = (Type_t *)NULL;
		V_1 = (Dictionary_2_t3165258040 *)NULL;
		Type_t * L_0 = ___objectType0;
		V_4 = (bool)((!(((RuntimeObject*)(Type_t *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		JsonReaderSettings_t2493837886 * L_2 = __this->get_Settings_0();
		TypeCoercionUtility_t347344375 * L_3 = L_2->get_Coercion_0();
		Type_t * L_4 = ___objectType0;
		RuntimeObject * L_5 = TypeCoercionUtility_InstantiateObject_m1943029821(L_3, L_4, (&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		RuntimeObject * L_6 = V_2;
		List_1_t257213610 * L_7 = __this->get_previouslyDeserialized_4();
		int32_t L_8 = List_1_get_Count_m2934127733(L_7, /*hidden argument*/List_1_get_Count_m2934127733_RuntimeMethod_var);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2747695202, L_6, L_10, /*hidden argument*/NULL);
		Debug_WriteLine_m3834261362(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		List_1_t257213610 * L_12 = __this->get_previouslyDeserialized_4();
		RuntimeObject * L_13 = V_2;
		List_1_Add_m3338814081(L_12, L_13, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
		Dictionary_2_t3165258040 * L_14 = V_1;
		V_5 = (bool)((((RuntimeObject*)(Dictionary_2_t3165258040 *)L_14) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_16 = ___objectType0;
		Type_t * L_17 = JsonReader_GetGenericDictionaryType_m796749635(__this, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0066:
	{
		goto IL_0071;
	}

IL_0069:
	{
		Dictionary_2_t2865362463 * L_18 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3762517327(L_18, /*hidden argument*/Dictionary_2__ctor_m3762517327_RuntimeMethod_var);
		V_2 = L_18;
	}

IL_0071:
	{
		RuntimeObject * L_19 = V_2;
		V_3 = L_19;
		Type_t * L_20 = ___objectType0;
		Dictionary_2_t3165258040 * L_21 = V_1;
		Type_t * L_22 = V_0;
		JsonReader_PopulateObject_m1813506123(__this, (&V_2), L_20, L_21, L_22, /*hidden argument*/NULL);
		RuntimeObject * L_23 = V_3;
		RuntimeObject * L_24 = V_2;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject *)L_23) == ((RuntimeObject*)(RuntimeObject *)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00c8;
		}
	}
	{
		RuntimeObject * L_26 = V_2;
		List_1_t257213610 * L_27 = __this->get_previouslyDeserialized_4();
		int32_t L_28 = List_1_get_Count_m2934127733(L_27, /*hidden argument*/List_1_get_Count_m2934127733_RuntimeMethod_var);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_29);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral4213774559, L_26, L_30, /*hidden argument*/NULL);
		Debug_WriteLine_m3834261362(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		List_1_t257213610 * L_32 = __this->get_previouslyDeserialized_4();
		List_1_t257213610 * L_33 = __this->get_previouslyDeserialized_4();
		int32_t L_34 = List_1_get_Count_m2934127733(L_33, /*hidden argument*/List_1_get_Count_m2934127733_RuntimeMethod_var);
		List_1_RemoveAt_m2730968292(L_32, ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_m2730968292_RuntimeMethod_var);
	}

IL_00c8:
	{
		RuntimeObject * L_35 = V_2;
		V_7 = L_35;
		goto IL_00cd;
	}

IL_00cd:
	{
		RuntimeObject * L_36 = V_7;
		return L_36;
	}
}
// System.Type Pathfinding.Serialization.JsonFx.JsonReader::GetGenericDictionaryType(System.Type)
extern "C"  Type_t * JsonReader_GetGenericDictionaryType_m796749635 (JsonReader_t3266634654 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_GetGenericDictionaryType_m796749635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	TypeU5BU5D_t3940880105* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t * V_6 = NULL;
	{
		Type_t * L_0 = ___objectType0;
		Type_t * L_1 = Type_GetInterface_m23870712(L_0, _stringLiteral3414374386, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Type_t *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		Type_t * L_4 = V_0;
		TypeU5BU5D_t3940880105* L_5 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(86 /* System.Type[] System.Type::GetGenericArguments() */, L_4);
		V_2 = L_5;
		TypeU5BU5D_t3940880105* L_6 = V_2;
		V_3 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))))) == ((int32_t)2))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_8 = V_2;
		int32_t L_9 = 0;
		Type_t * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_10) == ((RuntimeObject*)(Type_t *)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_14 = ___objectType0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2492308818, L_14, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_17 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_17, L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_0058:
	{
		TypeU5BU5D_t3940880105* L_18 = V_2;
		int32_t L_19 = 1;
		Type_t * L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_20) == ((RuntimeObject*)(Type_t *)L_22))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0078;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_24 = V_2;
		int32_t L_25 = 1;
		Type_t * L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		goto IL_007f;
	}

IL_0078:
	{
	}

IL_0079:
	{
	}

IL_007a:
	{
		V_6 = (Type_t *)NULL;
		goto IL_007f;
	}

IL_007f:
	{
		Type_t * L_27 = V_6;
		return L_27;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::PopulateObject(System.Object&,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.Type)
extern "C"  void JsonReader_PopulateObject_m1813506123 (JsonReader_t3266634654 * __this, RuntimeObject ** ___result0, Type_t * ___objectType1, Dictionary_2_t3165258040 * ___memberMap2, Type_t * ___genericDictionaryType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_PopulateObject_m1813506123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Type_t * V_4 = NULL;
	MemberInfo_t * V_5 = NULL;
	String_t* V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	String_t* G_B19_0 = NULL;
	int32_t G_B22_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B38_0 = 0;
	{
		String_t* L_0 = __this->get_Source_1();
		int32_t L_1 = __this->get_index_3();
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)123)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_5 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_5, _stringLiteral785454394, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_002f:
	{
		RuntimeObject ** L_6 = ___result0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)(*((RuntimeObject **)L_6)), IDictionary_t1363984059_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_0;
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		Type_t * L_8 = ___objectType1;
		Type_t * L_9 = Type_GetInterface_m23870712(L_8, _stringLiteral3414374386, /*hidden argument*/NULL);
		G_B5_0 = ((!(((RuntimeObject*)(Type_t *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 0;
	}

IL_004b:
	{
		V_3 = (bool)G_B5_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		Type_t * L_11 = ___objectType1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1910126379, L_11, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_14 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_14, L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_0067:
	{
		int32_t L_15 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		int32_t L_16 = __this->get_index_3();
		int32_t L_17 = __this->get_SourceLength_2();
		V_8 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_19 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_20 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_20, _stringLiteral3247304688, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20);
	}

IL_009f:
	{
		JsonReaderSettings_t2493837886 * L_21 = __this->get_Settings_0();
		bool L_22 = JsonReaderSettings_get_AllowUnquotedObjectKeys_m1425807238(L_21, /*hidden argument*/NULL);
		int32_t L_23 = JsonReader_Tokenize_m3740989926(__this, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		V_9 = (bool)((((int32_t)L_24) == ((int32_t)((int32_t)13)))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_0277;
	}

IL_00c2:
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)9))))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_27 = V_1;
		G_B14_0 = ((((int32_t)((((int32_t)L_27) == ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d2;
	}

IL_00d1:
	{
		G_B14_0 = 0;
	}

IL_00d2:
	{
		V_10 = (bool)G_B14_0;
		bool L_28 = V_10;
		if (!L_28)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_29 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_30 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_30, _stringLiteral1378472873, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30);
	}

IL_00ea:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)9))))
		{
			goto IL_00f7;
		}
	}
	{
		String_t* L_32 = JsonReader_ReadUnquotedKey_m3107698739(__this, /*hidden argument*/NULL);
		G_B19_0 = L_32;
		goto IL_0103;
	}

IL_00f7:
	{
		RuntimeObject * L_33 = JsonReader_ReadString_m1735479335(__this, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B19_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var));
	}

IL_0103:
	{
		V_6 = G_B19_0;
		Type_t * L_34 = ___genericDictionaryType3;
		if (L_34)
		{
			goto IL_010f;
		}
	}
	{
		Dictionary_2_t3165258040 * L_35 = ___memberMap2;
		G_B22_0 = ((!(((RuntimeObject*)(Dictionary_2_t3165258040 *)L_35) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0110;
	}

IL_010f:
	{
		G_B22_0 = 0;
	}

IL_0110:
	{
		V_11 = (bool)G_B22_0;
		bool L_36 = V_11;
		if (!L_36)
		{
			goto IL_0126;
		}
	}
	{
		Dictionary_2_t3165258040 * L_37 = ___memberMap2;
		String_t* L_38 = V_6;
		Type_t * L_39 = TypeCoercionUtility_GetMemberInfo_m2445066772(NULL /*static, unused*/, L_37, L_38, (&V_5), /*hidden argument*/NULL);
		V_4 = L_39;
		goto IL_012f;
	}

IL_0126:
	{
		Type_t * L_40 = ___genericDictionaryType3;
		V_4 = L_40;
		V_5 = (MemberInfo_t *)NULL;
	}

IL_012f:
	{
		int32_t L_41 = JsonReader_Tokenize_m427789809(__this, /*hidden argument*/NULL);
		V_1 = L_41;
		int32_t L_42 = V_1;
		V_12 = (bool)((((int32_t)((((int32_t)L_42) == ((int32_t)((int32_t)14)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_0156;
		}
	}
	{
		int32_t L_44 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_45 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_45, _stringLiteral3633384747, L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45);
	}

IL_0156:
	{
		int32_t L_46 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)));
		int32_t L_47 = __this->get_index_3();
		int32_t L_48 = __this->get_SourceLength_2();
		V_13 = (bool)((((int32_t)((((int32_t)L_47) < ((int32_t)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_50 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_51 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_51, _stringLiteral3247304688, L_50, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51);
	}

IL_018d:
	{
		JsonReaderSettings_t2493837886 * L_52 = __this->get_Settings_0();
		bool L_53 = JsonReaderSettings_get_HandleCyclicReferences_m880688794(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01a8;
		}
	}
	{
		String_t* L_54 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_55 = String_op_Equality_m920492651(NULL /*static, unused*/, L_54, _stringLiteral2376253809, /*hidden argument*/NULL);
		G_B32_0 = ((int32_t)(L_55));
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B32_0 = 0;
	}

IL_01a9:
	{
		V_14 = (bool)G_B32_0;
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_01e3;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_57 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		RuntimeObject * L_59 = JsonReader_Read_m2473083464(__this, L_58, (bool)0, /*hidden argument*/NULL);
		V_15 = ((*(int32_t*)((int32_t*)UnBox(L_59, Int32_t2950945753_il2cpp_TypeInfo_var))));
		RuntimeObject ** L_60 = ___result0;
		List_1_t257213610 * L_61 = __this->get_previouslyDeserialized_4();
		int32_t L_62 = V_15;
		RuntimeObject * L_63 = List_1_get_Item_m2287542950(L_61, L_62, /*hidden argument*/List_1_get_Item_m2287542950_RuntimeMethod_var);
		*((RuntimeObject **)(L_60)) = (RuntimeObject *)L_63;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_60), (RuntimeObject *)L_63);
		int32_t L_64 = JsonReader_Tokenize_m427789809(__this, /*hidden argument*/NULL);
		V_1 = L_64;
		goto IL_0269;
	}

IL_01e3:
	{
		Type_t * L_65 = V_4;
		RuntimeObject * L_66 = JsonReader_Read_m2473083464(__this, L_65, (bool)0, /*hidden argument*/NULL);
		V_7 = L_66;
		RuntimeObject* L_67 = V_0;
		V_16 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_67) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_68 = V_16;
		if (!L_68)
		{
			goto IL_0246;
		}
	}
	{
		Type_t * L_69 = ___objectType1;
		if (L_69)
		{
			goto IL_020d;
		}
	}
	{
		JsonReaderSettings_t2493837886 * L_70 = __this->get_Settings_0();
		String_t* L_71 = V_6;
		bool L_72 = JsonReaderSettings_IsTypeHintName_m280374552(L_70, L_71, /*hidden argument*/NULL);
		G_B38_0 = ((int32_t)(L_72));
		goto IL_020e;
	}

IL_020d:
	{
		G_B38_0 = 0;
	}

IL_020e:
	{
		V_17 = (bool)G_B38_0;
		bool L_73 = V_17;
		if (!L_73)
		{
			goto IL_0236;
		}
	}
	{
		RuntimeObject ** L_74 = ___result0;
		JsonReaderSettings_t2493837886 * L_75 = __this->get_Settings_0();
		TypeCoercionUtility_t347344375 * L_76 = L_75->get_Coercion_0();
		RuntimeObject* L_77 = V_0;
		RuntimeObject * L_78 = V_7;
		RuntimeObject * L_79 = TypeCoercionUtility_ProcessTypeHint_m1443685319(L_76, L_77, ((String_t*)IsInstSealed((RuntimeObject*)L_78, String_t_il2cpp_TypeInfo_var)), (&___objectType1), (&___memberMap2), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_74)) = (RuntimeObject *)L_79;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_74), (RuntimeObject *)L_79);
		goto IL_0243;
	}

IL_0236:
	{
		RuntimeObject* L_80 = V_0;
		String_t* L_81 = V_6;
		RuntimeObject * L_82 = V_7;
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_80, L_81, L_82);
	}

IL_0243:
	{
		goto IL_0261;
	}

IL_0246:
	{
		JsonReaderSettings_t2493837886 * L_83 = __this->get_Settings_0();
		TypeCoercionUtility_t347344375 * L_84 = L_83->get_Coercion_0();
		RuntimeObject ** L_85 = ___result0;
		Type_t * L_86 = V_4;
		MemberInfo_t * L_87 = V_5;
		RuntimeObject * L_88 = V_7;
		TypeCoercionUtility_SetMemberValue_m1035860574(L_84, (*((RuntimeObject **)L_85)), L_86, L_87, L_88, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_89 = JsonReader_Tokenize_m427789809(__this, /*hidden argument*/NULL);
		V_1 = L_89;
	}

IL_0269:
	{
		int32_t L_90 = V_1;
		V_18 = (bool)((((int32_t)L_90) == ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_91 = V_18;
		if (L_91)
		{
			goto IL_0067;
		}
	}

IL_0277:
	{
		int32_t L_92 = V_1;
		V_19 = (bool)((((int32_t)((((int32_t)L_92) == ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_93 = V_19;
		if (!L_93)
		{
			goto IL_0297;
		}
	}
	{
		int32_t L_94 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_95 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_95, _stringLiteral3247304688, L_94, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_95);
	}

IL_0297:
	{
		int32_t L_96 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1)));
		return;
	}
}
// System.Collections.IEnumerable Pathfinding.Serialization.JsonFx.JsonReader::ReadArray(System.Type)
extern "C"  RuntimeObject* JsonReader_ReadArray_m1334971453 (JsonReader_t3266634654 * __this, Type_t * ___arrayType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ReadArray_m1334971453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Type_t * V_2 = NULL;
	ArrayList_t2718874744 * V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	TypeU5BU5D_t3940880105* V_9 = NULL;
	bool V_10 = false;
	RuntimeObject * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	RuntimeObject* V_22 = NULL;
	ArrayList_t2718874744 * G_B13_0 = NULL;
	int32_t G_B22_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B41_0 = 0;
	{
		String_t* L_0 = __this->get_Source_1();
		int32_t L_1 = __this->get_index_3();
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)91)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_5 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_5, _stringLiteral4205860656, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0031:
	{
		Type_t * L_6 = ___arrayType0;
		V_0 = (bool)((!(((RuntimeObject*)(Type_t *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_7 = V_0;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		V_2 = (Type_t *)NULL;
		bool L_8 = V_0;
		V_6 = L_8;
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0087;
		}
	}
	{
		Type_t * L_10 = ___arrayType0;
		bool L_11 = Type_get_HasElementType_m710151977(L_10, /*hidden argument*/NULL);
		V_7 = L_11;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_13 = ___arrayType0;
		Type_t * L_14 = VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_13);
		V_2 = L_14;
		goto IL_0086;
	}

IL_005c:
	{
		Type_t * L_15 = ___arrayType0;
		bool L_16 = VirtFuncInvoker0< bool >::Invoke(90 /* System.Boolean System.Type::get_IsGenericType() */, L_15);
		V_8 = L_16;
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_0086;
		}
	}
	{
		Type_t * L_18 = ___arrayType0;
		TypeU5BU5D_t3940880105* L_19 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(86 /* System.Type[] System.Type::GetGenericArguments() */, L_18);
		V_9 = L_19;
		TypeU5BU5D_t3940880105* L_20 = V_9;
		V_10 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length))))) == ((int32_t)1))? 1 : 0);
		bool L_21 = V_10;
		if (!L_21)
		{
			goto IL_0085;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_22 = V_9;
		int32_t L_23 = 0;
		Type_t * L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_2 = L_24;
	}

IL_0085:
	{
	}

IL_0086:
	{
	}

IL_0087:
	{
		Stack_1_t3562264199 * L_25 = __this->get_jsArrays_5();
		int32_t L_26 = Stack_1_get_Count_m396621852(L_25, /*hidden argument*/Stack_1_get_Count_m396621852_RuntimeMethod_var);
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		ArrayList_t2718874744 * L_27 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_27, /*hidden argument*/NULL);
		G_B13_0 = L_27;
		goto IL_00a7;
	}

IL_009c:
	{
		Stack_1_t3562264199 * L_28 = __this->get_jsArrays_5();
		ArrayList_t2718874744 * L_29 = Stack_1_Pop_m2156809409(L_28, /*hidden argument*/Stack_1_Pop_m2156809409_RuntimeMethod_var);
		G_B13_0 = L_29;
	}

IL_00a7:
	{
		V_3 = G_B13_0;
		ArrayList_t2718874744 * L_30 = V_3;
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_30);
	}

IL_00af:
	{
		int32_t L_31 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
		int32_t L_32 = __this->get_index_3();
		int32_t L_33 = __this->get_SourceLength_2();
		V_12 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)L_33))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_35 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_36 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_36, _stringLiteral2224422865, L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36);
	}

IL_00e7:
	{
		int32_t L_37 = JsonReader_Tokenize_m427789809(__this, /*hidden argument*/NULL);
		V_4 = L_37;
		int32_t L_38 = V_4;
		V_13 = (bool)((((int32_t)L_38) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_39 = V_13;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_01ae;
	}

IL_0101:
	{
		Type_t * L_40 = V_2;
		bool L_41 = V_1;
		RuntimeObject * L_42 = JsonReader_Read_m2473083464(__this, L_40, L_41, /*hidden argument*/NULL);
		V_11 = L_42;
		ArrayList_t2718874744 * L_43 = V_3;
		RuntimeObject * L_44 = V_11;
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		RuntimeObject * L_45 = V_11;
		V_14 = (bool)((((RuntimeObject*)(RuntimeObject *)L_45) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_46 = V_14;
		if (!L_46)
		{
			goto IL_013b;
		}
	}
	{
		Type_t * L_47 = V_2;
		if (!L_47)
		{
			goto IL_012b;
		}
	}
	{
		Type_t * L_48 = V_2;
		bool L_49 = Type_get_IsValueType_m3108065642(L_48, /*hidden argument*/NULL);
		G_B22_0 = ((int32_t)(L_49));
		goto IL_012c;
	}

IL_012b:
	{
		G_B22_0 = 0;
	}

IL_012c:
	{
		V_15 = (bool)G_B22_0;
		bool L_50 = V_15;
		if (!L_50)
		{
			goto IL_0136;
		}
	}
	{
		V_2 = (Type_t *)NULL;
	}

IL_0136:
	{
		V_0 = (bool)1;
		goto IL_0196;
	}

IL_013b:
	{
		Type_t * L_51 = V_2;
		if (!L_51)
		{
			goto IL_0150;
		}
	}
	{
		Type_t * L_52 = V_2;
		RuntimeObject * L_53 = V_11;
		Type_t * L_54 = Object_GetType_m88164663(L_53, /*hidden argument*/NULL);
		bool L_55 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_52, L_54);
		G_B28_0 = ((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
		goto IL_0151;
	}

IL_0150:
	{
		G_B28_0 = 0;
	}

IL_0151:
	{
		V_16 = (bool)G_B28_0;
		bool L_56 = V_16;
		if (!L_56)
		{
			goto IL_0180;
		}
	}
	{
		RuntimeObject * L_57 = V_11;
		Type_t * L_58 = Object_GetType_m88164663(L_57, /*hidden argument*/NULL);
		Type_t * L_59 = V_2;
		bool L_60 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_58, L_59);
		V_17 = L_60;
		bool L_61 = V_17;
		if (!L_61)
		{
			goto IL_0177;
		}
	}
	{
		RuntimeObject * L_62 = V_11;
		Type_t * L_63 = Object_GetType_m88164663(L_62, /*hidden argument*/NULL);
		V_2 = L_63;
		goto IL_017d;
	}

IL_0177:
	{
		V_2 = (Type_t *)NULL;
		V_0 = (bool)1;
	}

IL_017d:
	{
		goto IL_0196;
	}

IL_0180:
	{
		bool L_64 = V_0;
		V_18 = (bool)((((int32_t)L_64) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_18;
		if (!L_65)
		{
			goto IL_0196;
		}
	}
	{
		RuntimeObject * L_66 = V_11;
		Type_t * L_67 = Object_GetType_m88164663(L_66, /*hidden argument*/NULL);
		V_2 = L_67;
		V_0 = (bool)1;
	}

IL_0196:
	{
		int32_t L_68 = JsonReader_Tokenize_m427789809(__this, /*hidden argument*/NULL);
		V_4 = L_68;
		int32_t L_69 = V_4;
		V_19 = (bool)((((int32_t)L_69) == ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_70 = V_19;
		if (L_70)
		{
			goto IL_00af;
		}
	}

IL_01ae:
	{
		int32_t L_71 = V_4;
		V_20 = (bool)((((int32_t)((((int32_t)L_71) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_72 = V_20;
		if (!L_72)
		{
			goto IL_01cf;
		}
	}
	{
		int32_t L_73 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_74 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_74, _stringLiteral2224422865, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74);
	}

IL_01cf:
	{
		int32_t L_75 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1)));
		Stack_1_t3562264199 * L_76 = __this->get_jsArrays_5();
		ArrayList_t2718874744 * L_77 = V_3;
		Stack_1_Push_m3824829859(L_76, L_77, /*hidden argument*/Stack_1_Push_m3824829859_RuntimeMethod_var);
		Type_t * L_78 = V_2;
		if (!L_78)
		{
			goto IL_01ff;
		}
	}
	{
		Type_t * L_79 = V_2;
		RuntimeTypeHandle_t3027515415  L_80 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_81 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
		G_B41_0 = ((((int32_t)((((RuntimeObject*)(Type_t *)L_79) == ((RuntimeObject*)(Type_t *)L_81))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0200;
	}

IL_01ff:
	{
		G_B41_0 = 0;
	}

IL_0200:
	{
		V_21 = (bool)G_B41_0;
		bool L_82 = V_21;
		if (!L_82)
		{
			goto IL_0212;
		}
	}
	{
		ArrayList_t2718874744 * L_83 = V_3;
		Type_t * L_84 = V_2;
		RuntimeArray * L_85 = VirtFuncInvoker1< RuntimeArray *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_83, L_84);
		V_22 = L_85;
		goto IL_021c;
	}

IL_0212:
	{
		ArrayList_t2718874744 * L_86 = V_3;
		ObjectU5BU5D_t2843939325* L_87 = VirtFuncInvoker0< ObjectU5BU5D_t2843939325* >::Invoke(47 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_86);
		V_22 = (RuntimeObject*)L_87;
		goto IL_021c;
	}

IL_021c:
	{
		RuntimeObject* L_88 = V_22;
		return L_88;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonReader::ReadUnquotedKey()
extern "C"  String_t* JsonReader_ReadUnquotedKey_m3107698739 (JsonReader_t3266634654 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_index_3();
		V_0 = L_0;
	}

IL_0008:
	{
		int32_t L_1 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = JsonReader_Tokenize_m3740989926(__this, (bool)1, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_4 = __this->get_Source_1();
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_index_3();
		int32_t L_7 = V_0;
		String_t* L_8 = String_Substring_m1610150815(L_4, L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_003e;
	}

IL_003e:
	{
		String_t* L_9 = V_2;
		return L_9;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadString(System.Type)
extern "C"  RuntimeObject * JsonReader_ReadString_m1735479335 (JsonReader_t3266634654 * __this, Type_t * ___expectedType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ReadString_m1735479335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	StringBuilder_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	RuntimeObject * V_14 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B47_0 = 0;
	{
		String_t* L_0 = __this->get_Source_1();
		int32_t L_1 = __this->get_index_3();
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)34))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_3 = __this->get_Source_1();
		int32_t L_4 = __this->get_index_3();
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)((int32_t)39)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 0;
	}

IL_0031:
	{
		V_3 = (bool)G_B3_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_8 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_8, _stringLiteral514668375, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0047:
	{
		String_t* L_9 = __this->get_Source_1();
		int32_t L_10 = __this->get_index_3();
		Il2CppChar L_11 = String_get_Chars_m2986988803(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		int32_t L_13 = __this->get_index_3();
		int32_t L_14 = __this->get_SourceLength_2();
		V_4 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_16 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_17 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_17, _stringLiteral2905194509, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_0090:
	{
		int32_t L_18 = __this->get_index_3();
		V_1 = L_18;
		StringBuilder_t * L_19 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_19, /*hidden argument*/NULL);
		V_2 = L_19;
		goto IL_02cb;
	}

IL_00a2:
	{
		String_t* L_20 = __this->get_Source_1();
		int32_t L_21 = __this->get_index_3();
		Il2CppChar L_22 = String_get_Chars_m2986988803(L_20, L_21, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)92)))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0291;
		}
	}
	{
		StringBuilder_t * L_24 = V_2;
		String_t* L_25 = __this->get_Source_1();
		int32_t L_26 = V_1;
		int32_t L_27 = __this->get_index_3();
		int32_t L_28 = V_1;
		StringBuilder_Append_m3214161208(L_24, L_25, L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28)), /*hidden argument*/NULL);
		int32_t L_29 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
		int32_t L_30 = __this->get_index_3();
		int32_t L_31 = __this->get_SourceLength_2();
		V_6 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_33 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_34 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_34, _stringLiteral2905194509, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34);
	}

IL_010f:
	{
		String_t* L_35 = __this->get_Source_1();
		int32_t L_36 = __this->get_index_3();
		Il2CppChar L_37 = String_get_Chars_m2986988803(L_35, L_36, /*hidden argument*/NULL);
		V_7 = L_37;
		Il2CppChar L_38 = V_7;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)98)))))
		{
			goto IL_013b;
		}
	}
	{
		Il2CppChar L_39 = V_7;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)48))))
		{
			goto IL_016a;
		}
	}
	{
		goto IL_0130;
	}

IL_0130:
	{
		Il2CppChar L_40 = V_7;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)98))))
		{
			goto IL_0170;
		}
	}
	{
		goto IL_0235;
	}

IL_013b:
	{
		Il2CppChar L_41 = V_7;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)102))))
		{
			goto IL_017e;
		}
	}
	{
		goto IL_0143;
	}

IL_0143:
	{
		Il2CppChar L_42 = V_7;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)110))))
		{
			goto IL_018d;
		}
	}
	{
		goto IL_014b;
	}

IL_014b:
	{
		Il2CppChar L_43 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_019c;
			}
			case 1:
			{
				goto IL_0235;
			}
			case 2:
			{
				goto IL_01ab;
			}
			case 3:
			{
				goto IL_01ba;
			}
		}
	}
	{
		goto IL_0235;
	}

IL_016a:
	{
		goto IL_0250;
	}

IL_0170:
	{
		StringBuilder_t * L_44 = V_2;
		StringBuilder_Append_m2383614642(L_44, 8, /*hidden argument*/NULL);
		goto IL_0250;
	}

IL_017e:
	{
		StringBuilder_t * L_45 = V_2;
		StringBuilder_Append_m2383614642(L_45, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0250;
	}

IL_018d:
	{
		StringBuilder_t * L_46 = V_2;
		StringBuilder_Append_m2383614642(L_46, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0250;
	}

IL_019c:
	{
		StringBuilder_t * L_47 = V_2;
		StringBuilder_Append_m2383614642(L_47, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0250;
	}

IL_01ab:
	{
		StringBuilder_t * L_48 = V_2;
		StringBuilder_Append_m2383614642(L_48, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0250;
	}

IL_01ba:
	{
		int32_t L_49 = __this->get_index_3();
		int32_t L_50 = __this->get_SourceLength_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)4))) >= ((int32_t)L_50)))
		{
			goto IL_01f2;
		}
	}
	{
		String_t* L_51 = __this->get_Source_1();
		int32_t L_52 = __this->get_index_3();
		String_t* L_53 = String_Substring_m1610150815(L_51, ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_54 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_55 = Int32_TryParse_m135955795(NULL /*static, unused*/, L_53, ((int32_t)512), L_54, (&V_8), /*hidden argument*/NULL);
		G_B31_0 = ((int32_t)(L_55));
		goto IL_01f3;
	}

IL_01f2:
	{
		G_B31_0 = 0;
	}

IL_01f3:
	{
		V_9 = (bool)G_B31_0;
		bool L_56 = V_9;
		if (!L_56)
		{
			goto IL_0219;
		}
	}
	{
		StringBuilder_t * L_57 = V_2;
		int32_t L_58 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		String_t* L_59 = Char_ConvertFromUtf32_m2726544766(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_57, L_59, /*hidden argument*/NULL);
		int32_t L_60 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)4)));
		goto IL_0233;
	}

IL_0219:
	{
		StringBuilder_t * L_61 = V_2;
		String_t* L_62 = __this->get_Source_1();
		int32_t L_63 = __this->get_index_3();
		Il2CppChar L_64 = String_get_Chars_m2986988803(L_62, L_63, /*hidden argument*/NULL);
		StringBuilder_Append_m2383614642(L_61, L_64, /*hidden argument*/NULL);
	}

IL_0233:
	{
		goto IL_0250;
	}

IL_0235:
	{
		StringBuilder_t * L_65 = V_2;
		String_t* L_66 = __this->get_Source_1();
		int32_t L_67 = __this->get_index_3();
		Il2CppChar L_68 = String_get_Chars_m2986988803(L_66, L_67, /*hidden argument*/NULL);
		StringBuilder_Append_m2383614642(L_65, L_68, /*hidden argument*/NULL);
		goto IL_0250;
	}

IL_0250:
	{
		int32_t L_69 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1)));
		int32_t L_70 = __this->get_index_3();
		int32_t L_71 = __this->get_SourceLength_2();
		V_10 = (bool)((((int32_t)((((int32_t)L_70) < ((int32_t)L_71))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_72 = V_10;
		if (!L_72)
		{
			goto IL_0287;
		}
	}
	{
		int32_t L_73 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_74 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_74, _stringLiteral2905194509, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74);
	}

IL_0287:
	{
		int32_t L_75 = __this->get_index_3();
		V_1 = L_75;
		goto IL_02ca;
	}

IL_0291:
	{
		int32_t L_76 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1)));
		int32_t L_77 = __this->get_index_3();
		int32_t L_78 = __this->get_SourceLength_2();
		V_11 = (bool)((((int32_t)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_79 = V_11;
		if (!L_79)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_80 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_81 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_81, _stringLiteral2905194509, L_80, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81);
	}

IL_02c9:
	{
	}

IL_02ca:
	{
	}

IL_02cb:
	{
		String_t* L_82 = __this->get_Source_1();
		int32_t L_83 = __this->get_index_3();
		Il2CppChar L_84 = String_get_Chars_m2986988803(L_82, L_83, /*hidden argument*/NULL);
		Il2CppChar L_85 = V_0;
		V_12 = (bool)((((int32_t)((((int32_t)L_84) == ((int32_t)L_85))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_86 = V_12;
		if (L_86)
		{
			goto IL_00a2;
		}
	}
	{
		StringBuilder_t * L_87 = V_2;
		String_t* L_88 = __this->get_Source_1();
		int32_t L_89 = V_1;
		int32_t L_90 = __this->get_index_3();
		int32_t L_91 = V_1;
		StringBuilder_Append_m3214161208(L_87, L_88, L_89, ((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)L_91)), /*hidden argument*/NULL);
		int32_t L_92 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1)));
		Type_t * L_93 = ___expectedType0;
		if (!L_93)
		{
			goto IL_0324;
		}
	}
	{
		Type_t * L_94 = ___expectedType0;
		RuntimeTypeHandle_t3027515415  L_95 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_96 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		G_B47_0 = ((((int32_t)((((RuntimeObject*)(Type_t *)L_94) == ((RuntimeObject*)(Type_t *)L_96))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0325;
	}

IL_0324:
	{
		G_B47_0 = 0;
	}

IL_0325:
	{
		V_13 = (bool)G_B47_0;
		bool L_97 = V_13;
		if (!L_97)
		{
			goto IL_0347;
		}
	}
	{
		JsonReaderSettings_t2493837886 * L_98 = __this->get_Settings_0();
		TypeCoercionUtility_t347344375 * L_99 = L_98->get_Coercion_0();
		Type_t * L_100 = ___expectedType0;
		StringBuilder_t * L_101 = V_2;
		String_t* L_102 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_101);
		RuntimeObject * L_103 = TypeCoercionUtility_CoerceType_m977820981(L_99, L_100, L_102, /*hidden argument*/NULL);
		V_14 = L_103;
		goto IL_0351;
	}

IL_0347:
	{
		StringBuilder_t * L_104 = V_2;
		String_t* L_105 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_104);
		V_14 = L_105;
		goto IL_0351;
	}

IL_0351:
	{
		RuntimeObject * L_106 = V_14;
		return L_106;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadNumber(System.Type)
extern "C"  RuntimeObject * JsonReader_ReadNumber_m226931756 (JsonReader_t3266634654 * __this, Type_t * ___expectedType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ReadNumber_m226931756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Decimal_t2948259380  V_20;
	memset(&V_20, 0, sizeof(V_20));
	bool V_21 = false;
	RuntimeObject * V_22 = NULL;
	bool V_23 = false;
	bool V_24 = false;
	double V_25 = 0.0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B32_1 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B65_0 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B76_0 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		int32_t L_0 = __this->get_index_3();
		V_2 = L_0;
		V_3 = 0;
		V_4 = 0;
		String_t* L_1 = __this->get_Source_1();
		int32_t L_2 = __this->get_index_3();
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_3) == ((int32_t)((int32_t)45)))? 1 : 0);
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_5 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = __this->get_index_3();
		int32_t L_7 = __this->get_SourceLength_2();
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_8 = __this->get_Source_1();
		int32_t L_9 = __this->get_index_3();
		Il2CppChar L_10 = String_get_Chars_m2986988803(L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_11 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B4_0 = 1;
	}

IL_0065:
	{
		V_7 = (bool)G_B4_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_13 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_14 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_14, _stringLiteral2912911974, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_007c:
	{
	}

IL_007d:
	{
		goto IL_008f;
	}

IL_007f:
	{
		int32_t L_15 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
	}

IL_008f:
	{
		int32_t L_16 = __this->get_index_3();
		int32_t L_17 = __this->get_SourceLength_2();
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_00b5;
		}
	}
	{
		String_t* L_18 = __this->get_Source_1();
		int32_t L_19 = __this->get_index_3();
		Il2CppChar L_20 = String_get_Chars_m2986988803(L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_21 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_21));
		goto IL_00b6;
	}

IL_00b5:
	{
		G_B12_0 = 0;
	}

IL_00b6:
	{
		V_8 = (bool)G_B12_0;
		bool L_22 = V_8;
		if (L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = __this->get_index_3();
		int32_t L_24 = __this->get_SourceLength_2();
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_00e1;
		}
	}
	{
		String_t* L_25 = __this->get_Source_1();
		int32_t L_26 = __this->get_index_3();
		Il2CppChar L_27 = String_get_Chars_m2986988803(L_25, L_26, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_27) == ((int32_t)((int32_t)46)))? 1 : 0);
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B16_0 = 0;
	}

IL_00e2:
	{
		V_9 = (bool)G_B16_0;
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_017e;
		}
	}
	{
		V_0 = (bool)1;
		int32_t L_29 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
		int32_t L_30 = __this->get_index_3();
		int32_t L_31 = __this->get_SourceLength_2();
		if ((((int32_t)L_30) >= ((int32_t)L_31)))
		{
			goto IL_0125;
		}
	}
	{
		String_t* L_32 = __this->get_Source_1();
		int32_t L_33 = __this->get_index_3();
		Il2CppChar L_34 = String_get_Chars_m2986988803(L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_35 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		G_B20_0 = ((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		goto IL_0126;
	}

IL_0125:
	{
		G_B20_0 = 1;
	}

IL_0126:
	{
		V_10 = (bool)G_B20_0;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_37 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_38 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_38, _stringLiteral2912911974, L_37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38);
	}

IL_013e:
	{
		goto IL_0150;
	}

IL_0140:
	{
		int32_t L_39 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
	}

IL_0150:
	{
		int32_t L_40 = __this->get_index_3();
		int32_t L_41 = __this->get_SourceLength_2();
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_0176;
		}
	}
	{
		String_t* L_42 = __this->get_Source_1();
		int32_t L_43 = __this->get_index_3();
		Il2CppChar L_44 = String_get_Chars_m2986988803(L_42, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_45 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		G_B27_0 = ((int32_t)(L_45));
		goto IL_0177;
	}

IL_0176:
	{
		G_B27_0 = 0;
	}

IL_0177:
	{
		V_11 = (bool)G_B27_0;
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_0140;
		}
	}
	{
	}

IL_017e:
	{
		int32_t L_47 = __this->get_index_3();
		int32_t L_48 = V_2;
		bool L_49 = V_0;
		G_B30_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_48));
		if (L_49)
		{
			G_B31_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_48));
			goto IL_018c;
		}
	}
	{
		G_B32_0 = 0;
		G_B32_1 = G_B30_0;
		goto IL_018d;
	}

IL_018c:
	{
		G_B32_0 = 1;
		G_B32_1 = G_B31_0;
	}

IL_018d:
	{
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)G_B32_1, (int32_t)G_B32_0));
		int32_t L_50 = __this->get_index_3();
		int32_t L_51 = __this->get_SourceLength_2();
		if ((((int32_t)L_50) >= ((int32_t)L_51)))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_52 = __this->get_Source_1();
		int32_t L_53 = __this->get_index_3();
		Il2CppChar L_54 = String_get_Chars_m2986988803(L_52, L_53, /*hidden argument*/NULL);
		if ((((int32_t)L_54) == ((int32_t)((int32_t)101))))
		{
			goto IL_01c9;
		}
	}
	{
		String_t* L_55 = __this->get_Source_1();
		int32_t L_56 = __this->get_index_3();
		Il2CppChar L_57 = String_get_Chars_m2986988803(L_55, L_56, /*hidden argument*/NULL);
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)((int32_t)69)))? 1 : 0);
		goto IL_01ca;
	}

IL_01c9:
	{
		G_B36_0 = 1;
	}

IL_01ca:
	{
		G_B38_0 = G_B36_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B38_0 = 0;
	}

IL_01cd:
	{
		V_12 = (bool)G_B38_0;
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_0336;
		}
	}
	{
		V_1 = (bool)1;
		int32_t L_59 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1)));
		int32_t L_60 = __this->get_index_3();
		int32_t L_61 = __this->get_SourceLength_2();
		V_14 = (bool)((((int32_t)((((int32_t)L_60) < ((int32_t)L_61))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_0210;
		}
	}
	{
		int32_t L_63 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_64 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_64, _stringLiteral2912911974, L_63, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64);
	}

IL_0210:
	{
		int32_t L_65 = __this->get_index_3();
		V_13 = L_65;
		String_t* L_66 = __this->get_Source_1();
		int32_t L_67 = __this->get_index_3();
		Il2CppChar L_68 = String_get_Chars_m2986988803(L_66, L_67, /*hidden argument*/NULL);
		if ((((int32_t)L_68) == ((int32_t)((int32_t)45))))
		{
			goto IL_0244;
		}
	}
	{
		String_t* L_69 = __this->get_Source_1();
		int32_t L_70 = __this->get_index_3();
		Il2CppChar L_71 = String_get_Chars_m2986988803(L_69, L_70, /*hidden argument*/NULL);
		G_B44_0 = ((((int32_t)L_71) == ((int32_t)((int32_t)43)))? 1 : 0);
		goto IL_0245;
	}

IL_0244:
	{
		G_B44_0 = 1;
	}

IL_0245:
	{
		V_15 = (bool)G_B44_0;
		bool L_72 = V_15;
		if (!L_72)
		{
			goto IL_029f;
		}
	}
	{
		int32_t L_73 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1)));
		int32_t L_74 = __this->get_index_3();
		int32_t L_75 = __this->get_SourceLength_2();
		if ((((int32_t)L_74) >= ((int32_t)L_75)))
		{
			goto IL_0283;
		}
	}
	{
		String_t* L_76 = __this->get_Source_1();
		int32_t L_77 = __this->get_index_3();
		Il2CppChar L_78 = String_get_Chars_m2986988803(L_76, L_77, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_79 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_78, /*hidden argument*/NULL);
		G_B48_0 = ((((int32_t)L_79) == ((int32_t)0))? 1 : 0);
		goto IL_0284;
	}

IL_0283:
	{
		G_B48_0 = 1;
	}

IL_0284:
	{
		V_16 = (bool)G_B48_0;
		bool L_80 = V_16;
		if (!L_80)
		{
			goto IL_029c;
		}
	}
	{
		int32_t L_81 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_82 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_82, _stringLiteral2912911974, L_81, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_82);
	}

IL_029c:
	{
		goto IL_02d2;
	}

IL_029f:
	{
		String_t* L_83 = __this->get_Source_1();
		int32_t L_84 = __this->get_index_3();
		Il2CppChar L_85 = String_get_Chars_m2986988803(L_83, L_84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_86 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		V_17 = (bool)((((int32_t)L_86) == ((int32_t)0))? 1 : 0);
		bool L_87 = V_17;
		if (!L_87)
		{
			goto IL_02d1;
		}
	}
	{
		int32_t L_88 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_89 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_89, _stringLiteral2912911974, L_88, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_89);
	}

IL_02d1:
	{
	}

IL_02d2:
	{
		goto IL_02e4;
	}

IL_02d4:
	{
		int32_t L_90 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1)));
	}

IL_02e4:
	{
		int32_t L_91 = __this->get_index_3();
		int32_t L_92 = __this->get_SourceLength_2();
		if ((((int32_t)L_91) >= ((int32_t)L_92)))
		{
			goto IL_030a;
		}
	}
	{
		String_t* L_93 = __this->get_Source_1();
		int32_t L_94 = __this->get_index_3();
		Il2CppChar L_95 = String_get_Chars_m2986988803(L_93, L_94, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_96 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		G_B59_0 = ((int32_t)(L_96));
		goto IL_030b;
	}

IL_030a:
	{
		G_B59_0 = 0;
	}

IL_030b:
	{
		V_18 = (bool)G_B59_0;
		bool L_97 = V_18;
		if (L_97)
		{
			goto IL_02d4;
		}
	}
	{
		String_t* L_98 = __this->get_Source_1();
		int32_t L_99 = V_13;
		int32_t L_100 = __this->get_index_3();
		int32_t L_101 = V_13;
		String_t* L_102 = String_Substring_m1610150815(L_98, L_99, ((int32_t)il2cpp_codegen_subtract((int32_t)L_100, (int32_t)L_101)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_103 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		Int32_TryParse_m135955795(NULL /*static, unused*/, L_102, 7, L_103, (&V_4), /*hidden argument*/NULL);
	}

IL_0336:
	{
		String_t* L_104 = __this->get_Source_1();
		int32_t L_105 = V_2;
		int32_t L_106 = __this->get_index_3();
		int32_t L_107 = V_2;
		String_t* L_108 = String_Substring_m1610150815(L_104, L_105, ((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)L_107)), /*hidden argument*/NULL);
		V_5 = L_108;
		bool L_109 = V_0;
		if (L_109)
		{
			goto IL_0359;
		}
	}
	{
		bool L_110 = V_1;
		if (L_110)
		{
			goto IL_0359;
		}
	}
	{
		int32_t L_111 = V_3;
		G_B65_0 = ((((int32_t)L_111) < ((int32_t)((int32_t)19)))? 1 : 0);
		goto IL_035a;
	}

IL_0359:
	{
		G_B65_0 = 0;
	}

IL_035a:
	{
		V_19 = (bool)G_B65_0;
		bool L_112 = V_19;
		if (!L_112)
		{
			goto IL_042f;
		}
	}
	{
		String_t* L_113 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_114 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_115 = Decimal_Parse_m942471224(NULL /*static, unused*/, L_113, 7, L_114, /*hidden argument*/NULL);
		V_20 = L_115;
		Type_t * L_116 = ___expectedType0;
		V_21 = (bool)((!(((RuntimeObject*)(Type_t *)L_116) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_117 = V_21;
		if (!L_117)
		{
			goto IL_039d;
		}
	}
	{
		JsonReaderSettings_t2493837886 * L_118 = __this->get_Settings_0();
		TypeCoercionUtility_t347344375 * L_119 = L_118->get_Coercion_0();
		Type_t * L_120 = ___expectedType0;
		Decimal_t2948259380  L_121 = V_20;
		Decimal_t2948259380  L_122 = L_121;
		RuntimeObject * L_123 = Box(Decimal_t2948259380_il2cpp_TypeInfo_var, &L_122);
		RuntimeObject * L_124 = TypeCoercionUtility_CoerceType_m977820981(L_119, L_120, L_123, /*hidden argument*/NULL);
		V_22 = L_124;
		goto IL_04a3;
	}

IL_039d:
	{
		Decimal_t2948259380  L_125 = V_20;
		Decimal_t2948259380  L_126;
		memset(&L_126, 0, sizeof(L_126));
		Decimal__ctor_m1256289983((&L_126), ((int32_t)-2147483648LL), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		bool L_127 = Decimal_op_GreaterThanOrEqual_m1217153501(NULL /*static, unused*/, L_125, L_126, /*hidden argument*/NULL);
		if (!L_127)
		{
			goto IL_03c3;
		}
	}
	{
		Decimal_t2948259380  L_128 = V_20;
		Decimal_t2948259380  L_129;
		memset(&L_129, 0, sizeof(L_129));
		Decimal__ctor_m1256289983((&L_129), ((int32_t)2147483647LL), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		bool L_130 = Decimal_op_LessThanOrEqual_m3936545906(NULL /*static, unused*/, L_128, L_129, /*hidden argument*/NULL);
		G_B71_0 = ((int32_t)(L_130));
		goto IL_03c4;
	}

IL_03c3:
	{
		G_B71_0 = 0;
	}

IL_03c4:
	{
		V_23 = (bool)G_B71_0;
		bool L_131 = V_23;
		if (!L_131)
		{
			goto IL_03de;
		}
	}
	{
		Decimal_t2948259380  L_132 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		int32_t L_133 = Decimal_op_Explicit_m1842265407(NULL /*static, unused*/, L_132, /*hidden argument*/NULL);
		int32_t L_134 = L_133;
		RuntimeObject * L_135 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_134);
		V_22 = L_135;
		goto IL_04a3;
	}

IL_03de:
	{
		Decimal_t2948259380  L_136 = V_20;
		Decimal_t2948259380  L_137;
		memset(&L_137, 0, sizeof(L_137));
		Decimal__ctor_m450048609((&L_137), ((int64_t)std::numeric_limits<int64_t>::min()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		bool L_138 = Decimal_op_GreaterThanOrEqual_m1217153501(NULL /*static, unused*/, L_136, L_137, /*hidden argument*/NULL);
		if (!L_138)
		{
			goto IL_040c;
		}
	}
	{
		Decimal_t2948259380  L_139 = V_20;
		Decimal_t2948259380  L_140;
		memset(&L_140, 0, sizeof(L_140));
		Decimal__ctor_m450048609((&L_140), ((int64_t)std::numeric_limits<int64_t>::max()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		bool L_141 = Decimal_op_LessThanOrEqual_m3936545906(NULL /*static, unused*/, L_139, L_140, /*hidden argument*/NULL);
		G_B76_0 = ((int32_t)(L_141));
		goto IL_040d;
	}

IL_040c:
	{
		G_B76_0 = 0;
	}

IL_040d:
	{
		V_24 = (bool)G_B76_0;
		bool L_142 = V_24;
		if (!L_142)
		{
			goto IL_0424;
		}
	}
	{
		Decimal_t2948259380  L_143 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		int64_t L_144 = Decimal_op_Explicit_m438967917(NULL /*static, unused*/, L_143, /*hidden argument*/NULL);
		int64_t L_145 = L_144;
		RuntimeObject * L_146 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_145);
		V_22 = L_146;
		goto IL_04a3;
	}

IL_0424:
	{
		Decimal_t2948259380  L_147 = V_20;
		Decimal_t2948259380  L_148 = L_147;
		RuntimeObject * L_149 = Box(Decimal_t2948259380_il2cpp_TypeInfo_var, &L_148);
		V_22 = L_149;
		goto IL_04a3;
	}

IL_042f:
	{
		Type_t * L_150 = ___expectedType0;
		RuntimeTypeHandle_t3027515415  L_151 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_152 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_151, /*hidden argument*/NULL);
		V_26 = (bool)((((RuntimeObject*)(Type_t *)L_150) == ((RuntimeObject*)(Type_t *)L_152))? 1 : 0);
		bool L_153 = V_26;
		if (!L_153)
		{
			goto IL_045e;
		}
	}
	{
		String_t* L_154 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_155 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_156 = Decimal_Parse_m942471224(NULL /*static, unused*/, L_154, ((int32_t)167), L_155, /*hidden argument*/NULL);
		Decimal_t2948259380  L_157 = L_156;
		RuntimeObject * L_158 = Box(Decimal_t2948259380_il2cpp_TypeInfo_var, &L_157);
		V_22 = L_158;
		goto IL_04a3;
	}

IL_045e:
	{
		String_t* L_159 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_160 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_161 = Double_Parse_m1135962389(NULL /*static, unused*/, L_159, ((int32_t)167), L_160, /*hidden argument*/NULL);
		V_25 = L_161;
		Type_t * L_162 = ___expectedType0;
		V_27 = (bool)((!(((RuntimeObject*)(Type_t *)L_162) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_163 = V_27;
		if (!L_163)
		{
			goto IL_0498;
		}
	}
	{
		JsonReaderSettings_t2493837886 * L_164 = __this->get_Settings_0();
		TypeCoercionUtility_t347344375 * L_165 = L_164->get_Coercion_0();
		Type_t * L_166 = ___expectedType0;
		double L_167 = V_25;
		double L_168 = L_167;
		RuntimeObject * L_169 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_168);
		RuntimeObject * L_170 = TypeCoercionUtility_CoerceType_m977820981(L_165, L_166, L_169, /*hidden argument*/NULL);
		V_22 = L_170;
		goto IL_04a3;
	}

IL_0498:
	{
		double L_171 = V_25;
		double L_172 = L_171;
		RuntimeObject * L_173 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_172);
		V_22 = L_173;
		goto IL_04a3;
	}

IL_04a3:
	{
		RuntimeObject * L_174 = V_22;
		return L_174;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.String,System.Int32,System.Type)
extern "C"  RuntimeObject * JsonReader_Deserialize_m1913124879 (RuntimeObject * __this /* static, unused */, String_t* ___value0, int32_t ___start1, Type_t * ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Deserialize_m1913124879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___value0;
		JsonReader_t3266634654 * L_1 = (JsonReader_t3266634654 *)il2cpp_codegen_object_new(JsonReader_t3266634654_il2cpp_TypeInfo_var);
		JsonReader__ctor_m2503642600(L_1, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___start1;
		Type_t * L_3 = ___type2;
		RuntimeObject * L_4 = JsonReader_Deserialize_m1280985629(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize()
extern "C"  int32_t JsonReader_Tokenize_m427789809 (JsonReader_t3266634654 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = JsonReader_Tokenize_m3740989926(__this, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize(System.Boolean)
extern "C"  int32_t JsonReader_Tokenize_m3740989926 (JsonReader_t3266634654 * __this, bool ___allowUnquotedString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Tokenize_m3740989926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	Il2CppChar V_21 = 0x0;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	int32_t G_B24_0 = 0;
	int32_t G_B76_0 = 0;
	int32_t G_B78_0 = 0;
	{
		int32_t L_0 = __this->get_index_3();
		int32_t L_1 = __this->get_SourceLength_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		V_1 = 0;
		goto IL_04ed;
	}

IL_001e:
	{
		goto IL_004d;
	}

IL_0020:
	{
		int32_t L_3 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = __this->get_index_3();
		int32_t L_5 = __this->get_SourceLength_2();
		V_2 = (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		V_1 = 0;
		goto IL_04ed;
	}

IL_004c:
	{
	}

IL_004d:
	{
		String_t* L_7 = __this->get_Source_1();
		int32_t L_8 = __this->get_index_3();
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_12 = __this->get_Source_1();
		int32_t L_13 = __this->get_index_3();
		Il2CppChar L_14 = String_get_Chars_m2986988803(L_12, L_13, /*hidden argument*/NULL);
		Il2CppChar L_15 = String_get_Chars_m2986988803(_stringLiteral3450910593, 0, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_17 = __this->get_index_3();
		int32_t L_18 = __this->get_SourceLength_2();
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1))) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_20 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_21 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_21, _stringLiteral2768708586, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21);
	}

IL_00ba:
	{
		int32_t L_22 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		V_5 = (bool)0;
		String_t* L_23 = __this->get_Source_1();
		int32_t L_24 = __this->get_index_3();
		Il2CppChar L_25 = String_get_Chars_m2986988803(L_23, L_24, /*hidden argument*/NULL);
		Il2CppChar L_26 = String_get_Chars_m2986988803(_stringLiteral3450910593, 1, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_25) == ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00f6;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_012f;
	}

IL_00f6:
	{
		String_t* L_28 = __this->get_Source_1();
		int32_t L_29 = __this->get_index_3();
		Il2CppChar L_30 = String_get_Chars_m2986988803(L_28, L_29, /*hidden argument*/NULL);
		Il2CppChar L_31 = String_get_Chars_m2986988803(_stringLiteral3450582913, 1, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_30) == ((int32_t)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_33 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_34 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_34, _stringLiteral2768708586, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34);
	}

IL_012f:
	{
		int32_t L_35 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
		bool L_36 = V_5;
		V_9 = L_36;
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_0230;
		}
	}
	{
		int32_t L_38 = __this->get_index_3();
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)2));
		int32_t L_39 = __this->get_index_3();
		int32_t L_40 = __this->get_SourceLength_2();
		V_11 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1))) < ((int32_t)L_40))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_11;
		if (!L_41)
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_42 = V_10;
		JsonDeserializationException_t2406110853 * L_43 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_43, _stringLiteral2046860218, L_42, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43);
	}

IL_017a:
	{
		goto IL_01b3;
	}

IL_017c:
	{
		int32_t L_44 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1)));
		int32_t L_45 = __this->get_index_3();
		int32_t L_46 = __this->get_SourceLength_2();
		V_12 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1))) < ((int32_t)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_12;
		if (!L_47)
		{
			goto IL_01b2;
		}
	}
	{
		int32_t L_48 = V_10;
		JsonDeserializationException_t2406110853 * L_49 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_49, _stringLiteral2046860218, L_48, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49);
	}

IL_01b2:
	{
	}

IL_01b3:
	{
		String_t* L_50 = __this->get_Source_1();
		int32_t L_51 = __this->get_index_3();
		Il2CppChar L_52 = String_get_Chars_m2986988803(L_50, L_51, /*hidden argument*/NULL);
		Il2CppChar L_53 = String_get_Chars_m2986988803(_stringLiteral3450582918, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01f6;
		}
	}
	{
		String_t* L_54 = __this->get_Source_1();
		int32_t L_55 = __this->get_index_3();
		Il2CppChar L_56 = String_get_Chars_m2986988803(L_54, ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1)), /*hidden argument*/NULL);
		Il2CppChar L_57 = String_get_Chars_m2986988803(_stringLiteral3450582918, 1, /*hidden argument*/NULL);
		G_B24_0 = ((((int32_t)((((int32_t)L_56) == ((int32_t)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01f7;
	}

IL_01f6:
	{
		G_B24_0 = 1;
	}

IL_01f7:
	{
		V_13 = (bool)G_B24_0;
		bool L_58 = V_13;
		if (L_58)
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_59 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)2)));
		int32_t L_60 = __this->get_index_3();
		int32_t L_61 = __this->get_SourceLength_2();
		V_14 = (bool)((((int32_t)((((int32_t)L_60) < ((int32_t)L_61))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_022d;
		}
	}
	{
		V_1 = 0;
		goto IL_04ed;
	}

IL_022d:
	{
		goto IL_0287;
	}

IL_0230:
	{
		goto IL_0262;
	}

IL_0233:
	{
		int32_t L_63 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1)));
		int32_t L_64 = __this->get_index_3();
		int32_t L_65 = __this->get_SourceLength_2();
		V_15 = (bool)((((int32_t)((((int32_t)L_64) < ((int32_t)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_0261;
		}
	}
	{
		V_1 = 0;
		goto IL_04ed;
	}

IL_0261:
	{
	}

IL_0262:
	{
		String_t* L_67 = __this->get_Source_1();
		int32_t L_68 = __this->get_index_3();
		Il2CppChar L_69 = String_get_Chars_m2986988803(L_67, L_68, /*hidden argument*/NULL);
		int32_t L_70 = String_IndexOf_m363431711(_stringLiteral3453007779, L_69, /*hidden argument*/NULL);
		V_16 = (bool)((((int32_t)L_70) < ((int32_t)0))? 1 : 0);
		bool L_71 = V_16;
		if (L_71)
		{
			goto IL_0233;
		}
	}
	{
	}

IL_0287:
	{
		goto IL_02b8;
	}

IL_0289:
	{
		int32_t L_72 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1)));
		int32_t L_73 = __this->get_index_3();
		int32_t L_74 = __this->get_SourceLength_2();
		V_17 = (bool)((((int32_t)((((int32_t)L_73) < ((int32_t)L_74))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_75 = V_17;
		if (!L_75)
		{
			goto IL_02b7;
		}
	}
	{
		V_1 = 0;
		goto IL_04ed;
	}

IL_02b7:
	{
	}

IL_02b8:
	{
		String_t* L_76 = __this->get_Source_1();
		int32_t L_77 = __this->get_index_3();
		Il2CppChar L_78 = String_get_Chars_m2986988803(L_76, L_77, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_79 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_78, /*hidden argument*/NULL);
		V_18 = L_79;
		bool L_80 = V_18;
		if (L_80)
		{
			goto IL_0289;
		}
	}
	{
	}

IL_02d5:
	{
		String_t* L_81 = __this->get_Source_1();
		int32_t L_82 = __this->get_index_3();
		Il2CppChar L_83 = String_get_Chars_m2986988803(L_81, L_82, /*hidden argument*/NULL);
		V_19 = (bool)((((int32_t)L_83) == ((int32_t)((int32_t)43)))? 1 : 0);
		bool L_84 = V_19;
		if (!L_84)
		{
			goto IL_031f;
		}
	}
	{
		int32_t L_85 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1)));
		int32_t L_86 = __this->get_index_3();
		int32_t L_87 = __this->get_SourceLength_2();
		V_20 = (bool)((((int32_t)((((int32_t)L_86) < ((int32_t)L_87))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_88 = V_20;
		if (!L_88)
		{
			goto IL_031e;
		}
	}
	{
		V_1 = 0;
		goto IL_04ed;
	}

IL_031e:
	{
	}

IL_031f:
	{
		String_t* L_89 = __this->get_Source_1();
		int32_t L_90 = __this->get_index_3();
		Il2CppChar L_91 = String_get_Chars_m2986988803(L_89, L_90, /*hidden argument*/NULL);
		V_21 = L_91;
		Il2CppChar L_92 = V_21;
		if ((!(((uint32_t)L_92) <= ((uint32_t)((int32_t)58)))))
		{
			goto IL_035e;
		}
	}
	{
		Il2CppChar L_93 = V_21;
		if ((!(((uint32_t)L_93) <= ((uint32_t)((int32_t)39)))))
		{
			goto IL_034e;
		}
	}
	{
		Il2CppChar L_94 = V_21;
		if ((((int32_t)L_94) == ((int32_t)((int32_t)34))))
		{
			goto IL_03a8;
		}
	}
	{
		goto IL_0346;
	}

IL_0346:
	{
		Il2CppChar L_95 = V_21;
		if ((((int32_t)L_95) == ((int32_t)((int32_t)39))))
		{
			goto IL_03a8;
		}
	}
	{
		goto IL_03c3;
	}

IL_034e:
	{
		Il2CppChar L_96 = V_21;
		if ((((int32_t)L_96) == ((int32_t)((int32_t)44))))
		{
			goto IL_03b1;
		}
	}
	{
		goto IL_0356;
	}

IL_0356:
	{
		Il2CppChar L_97 = V_21;
		if ((((int32_t)L_97) == ((int32_t)((int32_t)58))))
		{
			goto IL_03ba;
		}
	}
	{
		goto IL_03c3;
	}

IL_035e:
	{
		Il2CppChar L_98 = V_21;
		if ((!(((uint32_t)L_98) <= ((uint32_t)((int32_t)93)))))
		{
			goto IL_0374;
		}
	}
	{
		Il2CppChar L_99 = V_21;
		if ((((int32_t)L_99) == ((int32_t)((int32_t)91))))
		{
			goto IL_0384;
		}
	}
	{
		goto IL_036c;
	}

IL_036c:
	{
		Il2CppChar L_100 = V_21;
		if ((((int32_t)L_100) == ((int32_t)((int32_t)93))))
		{
			goto IL_038d;
		}
	}
	{
		goto IL_03c3;
	}

IL_0374:
	{
		Il2CppChar L_101 = V_21;
		if ((((int32_t)L_101) == ((int32_t)((int32_t)123))))
		{
			goto IL_0396;
		}
	}
	{
		goto IL_037c;
	}

IL_037c:
	{
		Il2CppChar L_102 = V_21;
		if ((((int32_t)L_102) == ((int32_t)((int32_t)125))))
		{
			goto IL_039f;
		}
	}
	{
		goto IL_03c3;
	}

IL_0384:
	{
		V_1 = ((int32_t)10);
		goto IL_04ed;
	}

IL_038d:
	{
		V_1 = ((int32_t)11);
		goto IL_04ed;
	}

IL_0396:
	{
		V_1 = ((int32_t)12);
		goto IL_04ed;
	}

IL_039f:
	{
		V_1 = ((int32_t)13);
		goto IL_04ed;
	}

IL_03a8:
	{
		V_1 = ((int32_t)9);
		goto IL_04ed;
	}

IL_03b1:
	{
		V_1 = ((int32_t)15);
		goto IL_04ed;
	}

IL_03ba:
	{
		V_1 = ((int32_t)14);
		goto IL_04ed;
	}

IL_03c3:
	{
		goto IL_03c6;
	}

IL_03c6:
	{
		String_t* L_103 = __this->get_Source_1();
		int32_t L_104 = __this->get_index_3();
		Il2CppChar L_105 = String_get_Chars_m2986988803(L_103, L_104, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_106 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		if (L_106)
		{
			goto IL_0420;
		}
	}
	{
		String_t* L_107 = __this->get_Source_1();
		int32_t L_108 = __this->get_index_3();
		Il2CppChar L_109 = String_get_Chars_m2986988803(L_107, L_108, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_109) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_041d;
		}
	}
	{
		int32_t L_110 = __this->get_index_3();
		int32_t L_111 = __this->get_SourceLength_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1))) >= ((int32_t)L_111)))
		{
			goto IL_041d;
		}
	}
	{
		String_t* L_112 = __this->get_Source_1();
		int32_t L_113 = __this->get_index_3();
		Il2CppChar L_114 = String_get_Chars_m2986988803(L_112, ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_115 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_114, /*hidden argument*/NULL);
		G_B76_0 = ((int32_t)(L_115));
		goto IL_041e;
	}

IL_041d:
	{
		G_B76_0 = 0;
	}

IL_041e:
	{
		G_B78_0 = G_B76_0;
		goto IL_0421;
	}

IL_0420:
	{
		G_B78_0 = 1;
	}

IL_0421:
	{
		V_22 = (bool)G_B78_0;
		bool L_116 = V_22;
		if (!L_116)
		{
			goto IL_042f;
		}
	}
	{
		V_1 = 8;
		goto IL_04ed;
	}

IL_042f:
	{
		bool L_117 = JsonReader_MatchLiteral_m3606078180(__this, _stringLiteral3875954633, /*hidden argument*/NULL);
		V_23 = L_117;
		bool L_118 = V_23;
		if (!L_118)
		{
			goto IL_0448;
		}
	}
	{
		V_1 = 3;
		goto IL_04ed;
	}

IL_0448:
	{
		bool L_119 = JsonReader_MatchLiteral_m3606078180(__this, _stringLiteral4002445229, /*hidden argument*/NULL);
		V_24 = L_119;
		bool L_120 = V_24;
		if (!L_120)
		{
			goto IL_0461;
		}
	}
	{
		V_1 = 4;
		goto IL_04ed;
	}

IL_0461:
	{
		bool L_121 = JsonReader_MatchLiteral_m3606078180(__this, _stringLiteral1202628576, /*hidden argument*/NULL);
		V_25 = L_121;
		bool L_122 = V_25;
		if (!L_122)
		{
			goto IL_0477;
		}
	}
	{
		V_1 = 2;
		goto IL_04ed;
	}

IL_0477:
	{
		bool L_123 = JsonReader_MatchLiteral_m3606078180(__this, _stringLiteral2647588310, /*hidden argument*/NULL);
		V_26 = L_123;
		bool L_124 = V_26;
		if (!L_124)
		{
			goto IL_048d;
		}
	}
	{
		V_1 = 5;
		goto IL_04ed;
	}

IL_048d:
	{
		bool L_125 = JsonReader_MatchLiteral_m3606078180(__this, _stringLiteral670053913, /*hidden argument*/NULL);
		V_27 = L_125;
		bool L_126 = V_27;
		if (!L_126)
		{
			goto IL_04a3;
		}
	}
	{
		V_1 = 6;
		goto IL_04ed;
	}

IL_04a3:
	{
		bool L_127 = JsonReader_MatchLiteral_m3606078180(__this, _stringLiteral2385296252, /*hidden argument*/NULL);
		V_28 = L_127;
		bool L_128 = V_28;
		if (!L_128)
		{
			goto IL_04b9;
		}
	}
	{
		V_1 = 7;
		goto IL_04ed;
	}

IL_04b9:
	{
		bool L_129 = JsonReader_MatchLiteral_m3606078180(__this, _stringLiteral3079778386, /*hidden argument*/NULL);
		V_29 = L_129;
		bool L_130 = V_29;
		if (!L_130)
		{
			goto IL_04cf;
		}
	}
	{
		V_1 = 1;
		goto IL_04ed;
	}

IL_04cf:
	{
		bool L_131 = ___allowUnquotedString0;
		V_30 = L_131;
		bool L_132 = V_30;
		if (!L_132)
		{
			goto IL_04dc;
		}
	}
	{
		V_1 = ((int32_t)16);
		goto IL_04ed;
	}

IL_04dc:
	{
		int32_t L_133 = __this->get_index_3();
		JsonDeserializationException_t2406110853 * L_134 = (JsonDeserializationException_t2406110853 *)il2cpp_codegen_object_new(JsonDeserializationException_t2406110853_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m3032603050(L_134, _stringLiteral2768708586, L_133, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_134);
	}

IL_04ed:
	{
		int32_t L_135 = V_1;
		return L_135;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReader::MatchLiteral(System.String)
extern "C"  bool JsonReader_MatchLiteral_m3606078180 (JsonReader_t3266634654 * __this, String_t* ___literal0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B7_0 = 0;
	{
		String_t* L_0 = ___literal0;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		int32_t L_2 = __this->get_index_3();
		V_2 = L_2;
		goto IL_003f;
	}

IL_0013:
	{
		String_t* L_3 = ___literal0;
		int32_t L_4 = V_1;
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_Source_1();
		int32_t L_7 = V_2;
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_005a;
	}

IL_0036:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = __this->get_SourceLength_2();
		G_B7_0 = ((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B7_0 = 0;
	}

IL_004f:
	{
		V_5 = (bool)G_B7_0;
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0013;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_005a;
	}

IL_005a:
	{
		bool L_17 = V_4;
		return L_17;
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
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_HandleCyclicReferences()
extern "C"  bool JsonReaderSettings_get_HandleCyclicReferences_m880688794 (JsonReaderSettings_t2493837886 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHandleCyclicReferencesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_AllowUnquotedObjectKeys()
extern "C"  bool JsonReaderSettings_get_AllowUnquotedObjectKeys_m1425807238 (JsonReaderSettings_t2493837886 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_allowUnquotedObjectKeys_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::IsTypeHintName(System.String)
extern "C"  bool JsonReaderSettings_IsTypeHintName_m280374552 (JsonReaderSettings_t2493837886 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReaderSettings_IsTypeHintName_m280374552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = __this->get_typeHintName_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t3301955079_il2cpp_TypeInfo_var);
		StringComparer_t3301955079 * L_4 = StringComparer_get_Ordinal_m2103862281(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_typeHintName_2();
		String_t* L_6 = ___name0;
		bool L_7 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(11 /* System.Boolean System.StringComparer::Equals(System.String,System.String) */, L_4, L_5, L_6);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B4_0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonReaderSettings::GetConverter(System.Type)
extern "C"  JsonConverter_t949931907 * JsonReaderSettings_GetConverter_m2765855980 (JsonReaderSettings_t2493837886 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReaderSettings_GetConverter_m2765855980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	JsonConverter_t949931907 * V_2 = NULL;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_002e;
	}

IL_0005:
	{
		List_1_t2422006649 * L_0 = __this->get_converters_4();
		int32_t L_1 = V_0;
		JsonConverter_t949931907 * L_2 = List_1_get_Item_m1904888016(L_0, L_1, /*hidden argument*/List_1_get_Item_m1904888016_RuntimeMethod_var);
		Type_t * L_3 = ___type0;
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(4 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonConverter::CanConvert(System.Type) */, L_2, L_3);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		List_1_t2422006649 * L_6 = __this->get_converters_4();
		int32_t L_7 = V_0;
		JsonConverter_t949931907 * L_8 = List_1_get_Item_m1904888016(L_6, L_7, /*hidden argument*/List_1_get_Item_m1904888016_RuntimeMethod_var);
		V_2 = L_8;
		goto IL_0044;
	}

IL_002a:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		List_1_t2422006649 * L_11 = __this->get_converters_4();
		int32_t L_12 = List_1_get_Count_m3926730779(L_11, /*hidden argument*/List_1_get_Count_m3926730779_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (JsonConverter_t949931907 *)NULL;
		goto IL_0044;
	}

IL_0044:
	{
		JsonConverter_t949931907 * L_14 = V_2;
		return L_14;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::.ctor()
extern "C"  void JsonReaderSettings__ctor_m4161459 (JsonReaderSettings_t2493837886 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReaderSettings__ctor_m4161459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeCoercionUtility_t347344375 * L_0 = (TypeCoercionUtility_t347344375 *)il2cpp_codegen_object_new(TypeCoercionUtility_t347344375_il2cpp_TypeInfo_var);
		TypeCoercionUtility__ctor_m2083287854(L_0, /*hidden argument*/NULL);
		__this->set_Coercion_0(L_0);
		__this->set_allowUnquotedObjectKeys_1((bool)0);
		List_1_t2422006649 * L_1 = (List_1_t2422006649 *)il2cpp_codegen_object_new(List_1_t2422006649_il2cpp_TypeInfo_var);
		List_1__ctor_m2916482698(L_1, /*hidden argument*/List_1__ctor_m2916482698_RuntimeMethod_var);
		__this->set_converters_4(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Serialization.JsonFx.JsonSerializationException::.ctor(System.String)
extern "C"  void JsonSerializationException__ctor_m2877834310 (JsonSerializationException_t3109053593 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		InvalidOperationException__ctor_m237278729(__this, L_0, /*hidden argument*/NULL);
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
// System.String Pathfinding.Serialization.JsonFx.JsonSpecifiedPropertyAttribute::get_SpecifiedProperty()
extern "C"  String_t* JsonSpecifiedPropertyAttribute_get_SpecifiedProperty_m1398343820 (JsonSpecifiedPropertyAttribute_t115917564 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_specifiedProperty_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonSpecifiedPropertyAttribute::GetJsonSpecifiedProperty(System.Reflection.MemberInfo)
extern "C"  String_t* JsonSpecifiedPropertyAttribute_GetJsonSpecifiedProperty_m3177035715 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonSpecifiedPropertyAttribute_GetJsonSpecifiedProperty_m3177035715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonSpecifiedPropertyAttribute_t115917564 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		MemberInfo_t * L_0 = ___memberInfo0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		MemberInfo_t * L_1 = ___memberInfo0;
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (JsonSpecifiedPropertyAttribute_t115917564_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		bool L_4 = Attribute_IsDefined_m3363303722(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		V_2 = (String_t*)NULL;
		goto IL_0042;
	}

IL_0023:
	{
		MemberInfo_t * L_6 = ___memberInfo0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (JsonSpecifiedPropertyAttribute_t115917564_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Attribute_t861562559 * L_9 = Attribute_GetCustomAttribute_m4034845276(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		V_0 = ((JsonSpecifiedPropertyAttribute_t115917564 *)CastclassClass((RuntimeObject*)L_9, JsonSpecifiedPropertyAttribute_t115917564_il2cpp_TypeInfo_var));
		JsonSpecifiedPropertyAttribute_t115917564 * L_10 = V_0;
		String_t* L_11 = JsonSpecifiedPropertyAttribute_get_SpecifiedProperty_m1398343820(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_0042;
	}

IL_0042:
	{
		String_t* L_12 = V_2;
		return L_12;
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
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String)
extern "C"  void JsonTypeCoercionException__ctor_m2620875090 (JsonTypeCoercionException_t4151781493 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ArgumentException__ctor_m1312628991(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String,System.Exception)
extern "C"  void JsonTypeCoercionException__ctor_m1127814158 (JsonTypeCoercionException_t4151781493 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		ArgumentException__ctor_m1535060261(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::.ctor(System.Text.StringBuilder)
extern "C"  void JsonWriter__ctor_m2625422002 (JsonWriter_t3837617027 * __this, StringBuilder_t * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__ctor_m2625422002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___output0;
		JsonWriterSettings_t3483137480 * L_1 = (JsonWriterSettings_t3483137480 *)il2cpp_codegen_object_new(JsonWriterSettings_t3483137480_il2cpp_TypeInfo_var);
		JsonWriterSettings__ctor_m1149145536(L_1, /*hidden argument*/NULL);
		JsonWriter__ctor_m94315965(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::.ctor(System.Text.StringBuilder,Pathfinding.Serialization.JsonFx.JsonWriterSettings)
extern "C"  void JsonWriter__ctor_m94315965 (JsonWriter_t3837617027 * __this, StringBuilder_t * ___output0, JsonWriterSettings_t3483137480 * ___settings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__ctor_m94315965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = ___output0;
		V_0 = (bool)((((RuntimeObject*)(StringBuilder_t *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral1975106570, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_001c:
	{
		JsonWriterSettings_t3483137480 * L_3 = ___settings1;
		V_1 = (bool)((((RuntimeObject*)(JsonWriterSettings_t3483137480 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_5 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_5, _stringLiteral3588954345, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0030:
	{
		StringBuilder_t * L_6 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringWriter_t802263757 * L_8 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m3987072682(L_8, L_6, L_7, /*hidden argument*/NULL);
		__this->set_Writer_0(L_8);
		JsonWriterSettings_t3483137480 * L_9 = ___settings1;
		__this->set_settings_1(L_9);
		TextWriter_t3478189236 * L_10 = __this->get_Writer_0();
		JsonWriterSettings_t3483137480 * L_11 = __this->get_settings_1();
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_NewLine() */, L_11);
		VirtActionInvoker1< String_t* >::Invoke(7 /* System.Void System.IO.TextWriter::set_NewLine(System.String) */, L_10, L_12);
		return;
	}
}
// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.JsonFx.JsonWriter::get_Settings()
extern "C"  JsonWriterSettings_t3483137480 * JsonWriter_get_Settings_m1175525012 (JsonWriter_t3837617027 * __this, const RuntimeMethod* method)
{
	JsonWriterSettings_t3483137480 * V_0 = NULL;
	{
		JsonWriterSettings_t3483137480 * L_0 = __this->get_settings_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		JsonWriterSettings_t3483137480 * L_1 = V_0;
		return L_1;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonWriter::Serialize(System.Object)
extern "C"  String_t* JsonWriter_Serialize_m2865883582 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Serialize_m2865883582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	JsonWriter_t3837617027 * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		JsonWriter_t3837617027 * L_2 = (JsonWriter_t3837617027 *)il2cpp_codegen_object_new(JsonWriter_t3837617027_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m2625422002(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		JsonWriter_t3837617027 * L_3 = V_1;
		RuntimeObject * L_4 = ___value0;
		JsonWriter_Write_m2813745558(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x25, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			JsonWriter_t3837617027 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			JsonWriter_t3837617027 * L_6 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_6);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		StringBuilder_t * L_7 = V_0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_2 = L_8;
		goto IL_002e;
	}

IL_002e:
	{
		String_t* L_9 = V_2;
		return L_9;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object)
extern "C"  void JsonWriter_Write_m2813745558 (JsonWriter_t3837617027 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		VirtActionInvoker2< RuntimeObject *, bool >::Invoke(5 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object,System.Boolean) */, __this, L_0, (bool)0);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object,System.Boolean)
extern "C"  void JsonWriter_Write_m2669424010 (JsonWriter_t3837617027 * __this, RuntimeObject * ___value0, bool ___isProperty1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m2669424010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	JsonConverter_t949931907 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___isProperty1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		JsonWriterSettings_t3483137480 * L_1 = __this->get_settings_1();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_PrettyPrint() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		TextWriter_t3478189236 * L_4 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_4, ((int32_t)32));
	}

IL_0026:
	{
		RuntimeObject * L_5 = ___value0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		TextWriter_t3478189236 * L_7 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, _stringLiteral1202628576);
		goto IL_05a6;
	}

IL_0045:
	{
		RuntimeObject * L_8 = ___value0;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IJsonSerializable_t2955010683_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_00e0;
		}
	}
	{
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			bool L_10 = ___isProperty1;
			V_5 = L_10;
			bool L_11 = V_5;
			if (!L_11)
			{
				goto IL_00b1;
			}
		}

IL_0060:
		{
			int32_t L_12 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
			int32_t L_13 = __this->get_depth_2();
			JsonWriterSettings_t3483137480 * L_14 = __this->get_settings_1();
			int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_14);
			V_6 = (bool)((((int32_t)L_13) > ((int32_t)L_15))? 1 : 0);
			bool L_16 = V_6;
			if (!L_16)
			{
				goto IL_00a9;
			}
		}

IL_0088:
		{
			JsonWriterSettings_t3483137480 * L_17 = __this->get_settings_1();
			int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_17);
			int32_t L_19 = L_18;
			RuntimeObject * L_20 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_19);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3602970396, L_20, /*hidden argument*/NULL);
			JsonSerializationException_t3109053593 * L_22 = (JsonSerializationException_t3109053593 *)il2cpp_codegen_object_new(JsonSerializationException_t3109053593_il2cpp_TypeInfo_var);
			JsonSerializationException__ctor_m2877834310(L_22, L_21, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_22);
		}

IL_00a9:
		{
			VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
		}

IL_00b1:
		{
			RuntimeObject * L_23 = ___value0;
			InterfaceActionInvoker1< JsonWriter_t3837617027 * >::Invoke(0 /* System.Void Pathfinding.Serialization.JsonFx.IJsonSerializable::WriteJson(Pathfinding.Serialization.JsonFx.JsonWriter) */, IJsonSerializable_t2955010683_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_23, IJsonSerializable_t2955010683_il2cpp_TypeInfo_var)), __this);
			IL2CPP_LEAVE(0xDB, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		{
			bool L_24 = ___isProperty1;
			V_7 = L_24;
			bool L_25 = V_7;
			if (!L_25)
			{
				goto IL_00d9;
			}
		}

IL_00c9:
		{
			int32_t L_26 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)));
		}

IL_00d9:
		{
			IL2CPP_END_FINALLY(193)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_JUMP_TBL(0xDB, IL_00db)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00db:
	{
		goto IL_05a6;
	}

IL_00e0:
	{
		RuntimeObject * L_27 = ___value0;
		V_8 = (bool)((!(((RuntimeObject*)(Enum_t4135868527 *)((Enum_t4135868527 *)IsInstClass((RuntimeObject*)L_27, Enum_t4135868527_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_0102;
		}
	}
	{
		RuntimeObject * L_29 = ___value0;
		VirtActionInvoker1< Enum_t4135868527 * >::Invoke(8 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Enum) */, __this, ((Enum_t4135868527 *)CastclassClass((RuntimeObject*)L_29, Enum_t4135868527_il2cpp_TypeInfo_var)));
		goto IL_05a6;
	}

IL_0102:
	{
		RuntimeObject * L_30 = ___value0;
		Type_t * L_31 = Object_GetType_m88164663(L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		JsonWriterSettings_t3483137480 * L_32 = JsonWriter_get_Settings_m1175525012(__this, /*hidden argument*/NULL);
		Type_t * L_33 = V_0;
		JsonConverter_t949931907 * L_34 = VirtFuncInvoker1< JsonConverter_t949931907 *, Type_t * >::Invoke(12 /* Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonWriterSettings::GetConverter(System.Type) */, L_32, L_33);
		V_1 = L_34;
		JsonConverter_t949931907 * L_35 = V_1;
		V_9 = (bool)((!(((RuntimeObject*)(JsonConverter_t949931907 *)L_35) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_0130;
		}
	}
	{
		JsonConverter_t949931907 * L_37 = V_1;
		Type_t * L_38 = V_0;
		RuntimeObject * L_39 = ___value0;
		JsonConverter_Write_m748514951(L_37, __this, L_38, L_39, /*hidden argument*/NULL);
		goto IL_05a6;
	}

IL_0130:
	{
		Type_t * L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_41 = Type_GetTypeCode_m480753082(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_10 = L_41;
		int32_t L_42 = V_10;
		switch (L_42)
		{
			case 0:
			{
				goto IL_01dc;
			}
			case 1:
			{
				goto IL_02c4;
			}
			case 2:
			{
				goto IL_01dc;
			}
			case 3:
			{
				goto IL_0190;
			}
			case 4:
			{
				goto IL_01b6;
			}
			case 5:
			{
				goto IL_0252;
			}
			case 6:
			{
				goto IL_01a3;
			}
			case 7:
			{
				goto IL_0219;
			}
			case 8:
			{
				goto IL_028b;
			}
			case 9:
			{
				goto IL_022c;
			}
			case 10:
			{
				goto IL_029e;
			}
			case 11:
			{
				goto IL_023f;
			}
			case 12:
			{
				goto IL_02b1;
			}
			case 13:
			{
				goto IL_0265;
			}
			case 14:
			{
				goto IL_0206;
			}
			case 15:
			{
				goto IL_01f3;
			}
			case 16:
			{
				goto IL_01c9;
			}
			case 17:
			{
				goto IL_02c4;
			}
			case 18:
			{
				goto IL_0278;
			}
		}
	}
	{
		goto IL_02c4;
	}

IL_0190:
	{
		RuntimeObject * L_43 = ___value0;
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Boolean) */, __this, ((*(bool*)((bool*)UnBox(L_43, Boolean_t97287965_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_01a3:
	{
		RuntimeObject * L_44 = ___value0;
		VirtActionInvoker1< uint8_t >::Invoke(11 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Byte) */, __this, ((*(uint8_t*)((uint8_t*)UnBox(L_44, Byte_t1134296376_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_01b6:
	{
		RuntimeObject * L_45 = ___value0;
		VirtActionInvoker1< Il2CppChar >::Invoke(22 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Char) */, __this, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_45, Char_t3634460470_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_01c9:
	{
		RuntimeObject * L_46 = ___value0;
		VirtActionInvoker1< DateTime_t3738529785  >::Invoke(6 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.DateTime) */, __this, ((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_46, DateTime_t3738529785_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_01dc:
	{
		TextWriter_t3478189236 * L_47 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_47, _stringLiteral1202628576);
		goto IL_05a6;
	}

IL_01f3:
	{
		RuntimeObject * L_48 = ___value0;
		VirtActionInvoker1< Decimal_t2948259380  >::Invoke(21 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Decimal) */, __this, ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_48, Decimal_t2948259380_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_0206:
	{
		RuntimeObject * L_49 = ___value0;
		VirtActionInvoker1< double >::Invoke(20 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Double) */, __this, ((*(double*)((double*)UnBox(L_49, Double_t594665363_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_0219:
	{
		RuntimeObject * L_50 = ___value0;
		VirtActionInvoker1< int16_t >::Invoke(13 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int16) */, __this, ((*(int16_t*)((int16_t*)UnBox(L_50, Int16_t2552820387_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_022c:
	{
		RuntimeObject * L_51 = ___value0;
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int32) */, __this, ((*(int32_t*)((int32_t*)UnBox(L_51, Int32_t2950945753_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_023f:
	{
		RuntimeObject * L_52 = ___value0;
		VirtActionInvoker1< int64_t >::Invoke(17 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int64) */, __this, ((*(int64_t*)((int64_t*)UnBox(L_52, Int64_t3736567304_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_0252:
	{
		RuntimeObject * L_53 = ___value0;
		VirtActionInvoker1< int8_t >::Invoke(12 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.SByte) */, __this, ((*(int8_t*)((int8_t*)UnBox(L_53, SByte_t1669577662_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_0265:
	{
		RuntimeObject * L_54 = ___value0;
		VirtActionInvoker1< float >::Invoke(19 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Single) */, __this, ((*(float*)((float*)UnBox(L_54, Single_t1397266774_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_0278:
	{
		RuntimeObject * L_55 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, ((String_t*)CastclassSealed((RuntimeObject*)L_55, String_t_il2cpp_TypeInfo_var)));
		goto IL_05a6;
	}

IL_028b:
	{
		RuntimeObject * L_56 = ___value0;
		VirtActionInvoker1< uint16_t >::Invoke(14 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt16) */, __this, ((*(uint16_t*)((uint16_t*)UnBox(L_56, UInt16_t2177724958_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_029e:
	{
		RuntimeObject * L_57 = ___value0;
		VirtActionInvoker1< uint32_t >::Invoke(16 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt32) */, __this, ((*(uint32_t*)((uint32_t*)UnBox(L_57, UInt32_t2560061978_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_02b1:
	{
		RuntimeObject * L_58 = ___value0;
		VirtActionInvoker1< uint64_t >::Invoke(18 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt64) */, __this, ((*(uint64_t*)((uint64_t*)UnBox(L_58, UInt64_t4134040092_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_02c4:
	{
		goto IL_02c7;
	}

IL_02c7:
	{
		RuntimeObject * L_59 = ___value0;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_59, Guid_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_60 = V_11;
		if (!L_60)
		{
			goto IL_02e9;
		}
	}
	{
		RuntimeObject * L_61 = ___value0;
		VirtActionInvoker1< Guid_t  >::Invoke(7 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Guid) */, __this, ((*(Guid_t *)((Guid_t *)UnBox(L_61, Guid_t_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_02e9:
	{
		RuntimeObject * L_62 = ___value0;
		V_12 = (bool)((!(((RuntimeObject*)(Uri_t100236324 *)((Uri_t100236324 *)IsInstClass((RuntimeObject*)L_62, Uri_t100236324_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeObject * L_64 = ___value0;
		VirtActionInvoker1< Uri_t100236324 * >::Invoke(24 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Uri) */, __this, ((Uri_t100236324 *)CastclassClass((RuntimeObject*)L_64, Uri_t100236324_il2cpp_TypeInfo_var)));
		goto IL_05a6;
	}

IL_030b:
	{
		RuntimeObject * L_65 = ___value0;
		V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_65, TimeSpan_t881159249_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_66 = V_13;
		if (!L_66)
		{
			goto IL_032d;
		}
	}
	{
		RuntimeObject * L_67 = ___value0;
		VirtActionInvoker1< TimeSpan_t881159249  >::Invoke(23 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.TimeSpan) */, __this, ((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_67, TimeSpan_t881159249_il2cpp_TypeInfo_var)))));
		goto IL_05a6;
	}

IL_032d:
	{
		RuntimeObject * L_68 = ___value0;
		V_14 = (bool)((!(((RuntimeObject*)(Version_t3456873960 *)((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_68, Version_t3456873960_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_69 = V_14;
		if (!L_69)
		{
			goto IL_034f;
		}
	}
	{
		RuntimeObject * L_70 = ___value0;
		VirtActionInvoker1< Version_t3456873960 * >::Invoke(25 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Version) */, __this, ((Version_t3456873960 *)CastclassSealed((RuntimeObject*)L_70, Version_t3456873960_il2cpp_TypeInfo_var)));
		goto IL_05a6;
	}

IL_034f:
	{
		RuntimeObject * L_71 = ___value0;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_71, IDictionary_t1363984059_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_72 = V_15;
		if (!L_72)
		{
			goto IL_03ea;
		}
	}
	{
	}

IL_0362:
	try
	{ // begin try (depth: 1)
		{
			bool L_73 = ___isProperty1;
			V_16 = L_73;
			bool L_74 = V_16;
			if (!L_74)
			{
				goto IL_03bb;
			}
		}

IL_036a:
		{
			int32_t L_75 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1)));
			int32_t L_76 = __this->get_depth_2();
			JsonWriterSettings_t3483137480 * L_77 = __this->get_settings_1();
			int32_t L_78 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_77);
			V_17 = (bool)((((int32_t)L_76) > ((int32_t)L_78))? 1 : 0);
			bool L_79 = V_17;
			if (!L_79)
			{
				goto IL_03b3;
			}
		}

IL_0392:
		{
			JsonWriterSettings_t3483137480 * L_80 = __this->get_settings_1();
			int32_t L_81 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_80);
			int32_t L_82 = L_81;
			RuntimeObject * L_83 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_82);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_84 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3602970396, L_83, /*hidden argument*/NULL);
			JsonSerializationException_t3109053593 * L_85 = (JsonSerializationException_t3109053593 *)il2cpp_codegen_object_new(JsonSerializationException_t3109053593_il2cpp_TypeInfo_var);
			JsonSerializationException__ctor_m2877834310(L_85, L_84, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_85);
		}

IL_03b3:
		{
			VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
		}

IL_03bb:
		{
			RuntimeObject * L_86 = ___value0;
			VirtActionInvoker1< RuntimeObject* >::Invoke(28 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Collections.IDictionary) */, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_86, IDictionary_t1363984059_il2cpp_TypeInfo_var)));
			IL2CPP_LEAVE(0x3E5, FINALLY_03cb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03cb;
	}

FINALLY_03cb:
	{ // begin finally (depth: 1)
		{
			bool L_87 = ___isProperty1;
			V_18 = L_87;
			bool L_88 = V_18;
			if (!L_88)
			{
				goto IL_03e3;
			}
		}

IL_03d3:
		{
			int32_t L_89 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1)));
		}

IL_03e3:
		{
			IL2CPP_END_FINALLY(971)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(971)
	{
		IL2CPP_JUMP_TBL(0x3E5, IL_03e5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03e5:
	{
		goto IL_05a6;
	}

IL_03ea:
	{
		Type_t * L_90 = V_0;
		Type_t * L_91 = VirtFuncInvoker2< Type_t *, String_t*, bool >::Invoke(41 /* System.Type System.Type::GetInterface(System.String,System.Boolean) */, L_90, _stringLiteral3414374386, (bool)0);
		V_19 = (bool)((!(((RuntimeObject*)(Type_t *)L_91) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_92 = V_19;
		if (!L_92)
		{
			goto IL_048b;
		}
	}
	{
	}

IL_0403:
	try
	{ // begin try (depth: 1)
		{
			bool L_93 = ___isProperty1;
			V_20 = L_93;
			bool L_94 = V_20;
			if (!L_94)
			{
				goto IL_045c;
			}
		}

IL_040b:
		{
			int32_t L_95 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1)));
			int32_t L_96 = __this->get_depth_2();
			JsonWriterSettings_t3483137480 * L_97 = __this->get_settings_1();
			int32_t L_98 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_97);
			V_21 = (bool)((((int32_t)L_96) > ((int32_t)L_98))? 1 : 0);
			bool L_99 = V_21;
			if (!L_99)
			{
				goto IL_0454;
			}
		}

IL_0433:
		{
			JsonWriterSettings_t3483137480 * L_100 = __this->get_settings_1();
			int32_t L_101 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_100);
			int32_t L_102 = L_101;
			RuntimeObject * L_103 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_102);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_104 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3602970396, L_103, /*hidden argument*/NULL);
			JsonSerializationException_t3109053593 * L_105 = (JsonSerializationException_t3109053593 *)il2cpp_codegen_object_new(JsonSerializationException_t3109053593_il2cpp_TypeInfo_var);
			JsonSerializationException__ctor_m2877834310(L_105, L_104, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_105);
		}

IL_0454:
		{
			VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
		}

IL_045c:
		{
			RuntimeObject * L_106 = ___value0;
			VirtActionInvoker1< RuntimeObject* >::Invoke(29 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteDictionary(System.Collections.IEnumerable) */, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_106, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
			IL2CPP_LEAVE(0x486, FINALLY_046c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_046c;
	}

FINALLY_046c:
	{ // begin finally (depth: 1)
		{
			bool L_107 = ___isProperty1;
			V_22 = L_107;
			bool L_108 = V_22;
			if (!L_108)
			{
				goto IL_0484;
			}
		}

IL_0474:
		{
			int32_t L_109 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_109, (int32_t)1)));
		}

IL_0484:
		{
			IL2CPP_END_FINALLY(1132)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1132)
	{
		IL2CPP_JUMP_TBL(0x486, IL_0486)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0486:
	{
		goto IL_05a6;
	}

IL_048b:
	{
		RuntimeObject * L_110 = ___value0;
		V_23 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_110, IEnumerable_t1941168011_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_111 = V_23;
		if (!L_111)
		{
			goto IL_0526;
		}
	}
	{
	}

IL_049e:
	try
	{ // begin try (depth: 1)
		{
			bool L_112 = ___isProperty1;
			V_24 = L_112;
			bool L_113 = V_24;
			if (!L_113)
			{
				goto IL_04f7;
			}
		}

IL_04a6:
		{
			int32_t L_114 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1)));
			int32_t L_115 = __this->get_depth_2();
			JsonWriterSettings_t3483137480 * L_116 = __this->get_settings_1();
			int32_t L_117 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_116);
			V_25 = (bool)((((int32_t)L_115) > ((int32_t)L_117))? 1 : 0);
			bool L_118 = V_25;
			if (!L_118)
			{
				goto IL_04ef;
			}
		}

IL_04ce:
		{
			JsonWriterSettings_t3483137480 * L_119 = __this->get_settings_1();
			int32_t L_120 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_119);
			int32_t L_121 = L_120;
			RuntimeObject * L_122 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_121);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_123 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3602970396, L_122, /*hidden argument*/NULL);
			JsonSerializationException_t3109053593 * L_124 = (JsonSerializationException_t3109053593 *)il2cpp_codegen_object_new(JsonSerializationException_t3109053593_il2cpp_TypeInfo_var);
			JsonSerializationException__ctor_m2877834310(L_124, L_123, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_124);
		}

IL_04ef:
		{
			VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
		}

IL_04f7:
		{
			RuntimeObject * L_125 = ___value0;
			VirtActionInvoker1< RuntimeObject* >::Invoke(26 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArray(System.Collections.IEnumerable) */, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_125, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
			IL2CPP_LEAVE(0x521, FINALLY_0507);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0507;
	}

FINALLY_0507:
	{ // begin finally (depth: 1)
		{
			bool L_126 = ___isProperty1;
			V_26 = L_126;
			bool L_127 = V_26;
			if (!L_127)
			{
				goto IL_051f;
			}
		}

IL_050f:
		{
			int32_t L_128 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_128, (int32_t)1)));
		}

IL_051f:
		{
			IL2CPP_END_FINALLY(1287)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1287)
	{
		IL2CPP_JUMP_TBL(0x521, IL_0521)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0521:
	{
		goto IL_05a6;
	}

IL_0526:
	{
	}

IL_0527:
	try
	{ // begin try (depth: 1)
		{
			bool L_129 = ___isProperty1;
			V_27 = L_129;
			bool L_130 = V_27;
			if (!L_130)
			{
				goto IL_0580;
			}
		}

IL_052f:
		{
			int32_t L_131 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1)));
			int32_t L_132 = __this->get_depth_2();
			JsonWriterSettings_t3483137480 * L_133 = __this->get_settings_1();
			int32_t L_134 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_133);
			V_28 = (bool)((((int32_t)L_132) > ((int32_t)L_134))? 1 : 0);
			bool L_135 = V_28;
			if (!L_135)
			{
				goto IL_0578;
			}
		}

IL_0557:
		{
			JsonWriterSettings_t3483137480 * L_136 = __this->get_settings_1();
			int32_t L_137 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_136);
			int32_t L_138 = L_137;
			RuntimeObject * L_139 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_138);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_140 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3602970396, L_139, /*hidden argument*/NULL);
			JsonSerializationException_t3109053593 * L_141 = (JsonSerializationException_t3109053593 *)il2cpp_codegen_object_new(JsonSerializationException_t3109053593_il2cpp_TypeInfo_var);
			JsonSerializationException__ctor_m2877834310(L_141, L_140, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_141);
		}

IL_0578:
		{
			VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
		}

IL_0580:
		{
			RuntimeObject * L_142 = ___value0;
			Type_t * L_143 = V_0;
			VirtActionInvoker2< RuntimeObject *, Type_t * >::Invoke(32 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Object,System.Type) */, __this, L_142, L_143);
			IL2CPP_LEAVE(0x5A6, FINALLY_058c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_058c;
	}

FINALLY_058c:
	{ // begin finally (depth: 1)
		{
			bool L_144 = ___isProperty1;
			V_29 = L_144;
			bool L_145 = V_29;
			if (!L_145)
			{
				goto IL_05a4;
			}
		}

IL_0594:
		{
			int32_t L_146 = __this->get_depth_2();
			__this->set_depth_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_146, (int32_t)1)));
		}

IL_05a4:
		{
			IL2CPP_END_FINALLY(1420)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1420)
	{
		IL2CPP_JUMP_TBL(0x5A6, IL_05a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_05a6:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.DateTime)
extern "C"  void JsonWriter_Write_m3280208291 (JsonWriter_t3837617027 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m3280208291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		JsonWriterSettings_t3483137480 * L_0 = __this->get_settings_1();
		WriteDelegate_1_t4077604362 * L_1 = VirtFuncInvoker0< WriteDelegate_1_t4077604362 * >::Invoke(10 /* Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime> Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DateTimeSerializer() */, L_0);
		V_0 = (bool)((!(((RuntimeObject*)(WriteDelegate_1_t4077604362 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		JsonWriterSettings_t3483137480 * L_3 = __this->get_settings_1();
		WriteDelegate_1_t4077604362 * L_4 = VirtFuncInvoker0< WriteDelegate_1_t4077604362 * >::Invoke(10 /* Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime> Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DateTimeSerializer() */, L_3);
		DateTime_t3738529785  L_5 = ___value0;
		WriteDelegate_1_Invoke_m3174722131(L_4, __this, L_5, /*hidden argument*/WriteDelegate_1_Invoke_m3174722131_RuntimeMethod_var);
		goto IL_007d;
	}

IL_0029:
	{
		int32_t L_6 = DateTime_get_Kind_m2154871796((&___value0), /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0063;
	}

IL_003d:
	{
		DateTime_t3738529785  L_9 = DateTime_ToUniversalTime_m1945318289((&___value0), /*hidden argument*/NULL);
		___value0 = L_9;
		goto IL_0049;
	}

IL_0049:
	{
		DateTime_t3738529785  L_10 = ___value0;
		DateTime_t3738529785  L_11 = L_10;
		RuntimeObject * L_12 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral458512160, L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_13);
		goto IL_007d;
	}

IL_0063:
	{
		DateTime_t3738529785  L_14 = ___value0;
		DateTime_t3738529785  L_15 = L_14;
		RuntimeObject * L_16 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral453924640, L_16, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_17);
		goto IL_007d;
	}

IL_007d:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Guid)
extern "C"  void JsonWriter_Write_m2611716318 (JsonWriter_t3837617027 * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m2611716318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Guid_ToString_m4056316049((&___value0), _stringLiteral3452614620, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_0);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Enum)
extern "C"  void JsonWriter_Write_m4285848228 (JsonWriter_t3837617027 * __this, Enum_t4135868527 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m4285848228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	EnumU5BU5D_t596894966* V_3 = NULL;
	StringU5BU5D_t1281789340* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		V_0 = (String_t*)NULL;
		Enum_t4135868527 * L_0 = ___value0;
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Type_t * L_2 = V_1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (FlagsAttribute_t2262502849_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_5 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_2, L_4, (bool)1);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Type_t * L_6 = V_1;
		Enum_t4135868527 * L_7 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		bool L_8 = Enum_IsDefined_m1442314461(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_009e;
		}
	}
	{
		Type_t * L_10 = V_1;
		Enum_t4135868527 * L_11 = ___value0;
		EnumU5BU5D_t596894966* L_12 = JsonWriter_GetFlagList_m3518029825(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		EnumU5BU5D_t596894966* L_13 = V_3;
		V_4 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))))));
		V_5 = 0;
		goto IL_0081;
	}

IL_0046:
	{
		StringU5BU5D_t1281789340* L_14 = V_4;
		int32_t L_15 = V_5;
		EnumU5BU5D_t596894966* L_16 = V_3;
		int32_t L_17 = V_5;
		int32_t L_18 = L_17;
		Enum_t4135868527 * L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20 = JsonNameAttribute_GetJsonName_m3272941041(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_14, L_20);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (String_t*)L_20);
		StringU5BU5D_t1281789340* L_21 = V_4;
		int32_t L_22 = V_5;
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_007a;
		}
	}
	{
		StringU5BU5D_t1281789340* L_27 = V_4;
		int32_t L_28 = V_5;
		EnumU5BU5D_t596894966* L_29 = V_3;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		Enum_t4135868527 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		String_t* L_33 = Enum_ToString_m2477889358(L_32, _stringLiteral3452614586, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_27, L_33);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (String_t*)L_33);
	}

IL_007a:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0081:
	{
		int32_t L_35 = V_5;
		EnumU5BU5D_t596894966* L_36 = V_3;
		V_7 = (bool)((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length))))))? 1 : 0);
		bool L_37 = V_7;
		if (L_37)
		{
			goto IL_0046;
		}
	}
	{
		StringU5BU5D_t1281789340* L_38 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3450517380, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_00c1;
	}

IL_009e:
	{
		Enum_t4135868527 * L_40 = ___value0;
		String_t* L_41 = JsonNameAttribute_GetJsonName_m3272941041(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_0 = L_41;
		String_t* L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		V_8 = L_43;
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_00c0;
		}
	}
	{
		Enum_t4135868527 * L_45 = ___value0;
		String_t* L_46 = Enum_ToString_m2477889358(L_45, _stringLiteral3452614586, /*hidden argument*/NULL);
		V_0 = L_46;
	}

IL_00c0:
	{
	}

IL_00c1:
	{
		String_t* L_47 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_47);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String)
extern "C"  void JsonWriter_Write_m1926659931 (JsonWriter_t3837617027 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m1926659931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	bool V_5 = false;
	bool V_6 = false;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B9_0 = 0;
	{
		String_t* L_0 = ___value0;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		TextWriter_t3478189236 * L_2 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, _stringLiteral1202628576);
		goto IL_01d3;
	}

IL_0020:
	{
		V_0 = 0;
		String_t* L_3 = ___value0;
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		TextWriter_t3478189236 * L_5 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)34));
		int32_t L_6 = V_0;
		V_3 = L_6;
		goto IL_0196;
	}

IL_003e:
	{
		String_t* L_7 = ___value0;
		int32_t L_8 = V_3;
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_7, L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		Il2CppChar L_10 = V_4;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0068;
		}
	}
	{
		Il2CppChar L_11 = V_4;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)127))))
		{
			goto IL_0068;
		}
	}
	{
		Il2CppChar L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)60))))
		{
			goto IL_0068;
		}
	}
	{
		Il2CppChar L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_0068;
		}
	}
	{
		Il2CppChar L_14 = V_4;
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)((int32_t)92)))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B9_0 = 1;
	}

IL_0069:
	{
		V_5 = (bool)G_B9_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0191;
		}
	}
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_0;
		V_6 = (bool)((((int32_t)L_16) > ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0095;
		}
	}
	{
		TextWriter_t3478189236 * L_19 = __this->get_Writer_0();
		String_t* L_20 = ___value0;
		int32_t L_21 = V_0;
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		String_t* L_24 = String_Substring_m1610150815(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, L_24);
	}

IL_0095:
	{
		int32_t L_25 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		Il2CppChar L_26 = V_4;
		V_7 = L_26;
		Il2CppChar L_27 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00f5;
			}
			case 1:
			{
				goto IL_0148;
			}
			case 2:
			{
				goto IL_0120;
			}
			case 3:
			{
				goto IL_015c;
			}
			case 4:
			{
				goto IL_010c;
			}
			case 5:
			{
				goto IL_0134;
			}
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		Il2CppChar L_28 = V_7;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_00c8;
	}

IL_00c8:
	{
		Il2CppChar L_29 = V_7;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)92))))
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_015c;
	}

IL_00d3:
	{
		TextWriter_t3478189236 * L_30 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_30, ((int32_t)92));
		TextWriter_t3478189236 * L_31 = __this->get_Writer_0();
		Il2CppChar L_32 = V_4;
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_31, L_32);
		goto IL_0192;
	}

IL_00f5:
	{
		TextWriter_t3478189236 * L_33 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_33, _stringLiteral3454580724);
		goto IL_0192;
	}

IL_010c:
	{
		TextWriter_t3478189236 * L_34 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteral3454318580);
		goto IL_0192;
	}

IL_0120:
	{
		TextWriter_t3478189236 * L_35 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_35, _stringLiteral3454842868);
		goto IL_0192;
	}

IL_0134:
	{
		TextWriter_t3478189236 * L_36 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_36, _stringLiteral3455629300);
		goto IL_0192;
	}

IL_0148:
	{
		TextWriter_t3478189236 * L_37 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, _stringLiteral3455498228);
		goto IL_0192;
	}

IL_015c:
	{
		TextWriter_t3478189236 * L_38 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_38, _stringLiteral3455432692);
		TextWriter_t3478189236 * L_39 = __this->get_Writer_0();
		String_t* L_40 = ___value0;
		int32_t L_41 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		int32_t L_42 = Char_ConvertToUtf32_m2897437866(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		String_t* L_43 = Int32_ToString_m372259452((&V_8), _stringLiteral3451303928, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_39, L_43);
		goto IL_0192;
	}

IL_0191:
	{
	}

IL_0192:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0196:
	{
		int32_t L_45 = V_3;
		int32_t L_46 = V_1;
		V_9 = (bool)((((int32_t)L_45) < ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_9;
		if (L_47)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_48 = V_1;
		int32_t L_49 = V_0;
		V_10 = (bool)((((int32_t)L_48) > ((int32_t)L_49))? 1 : 0);
		bool L_50 = V_10;
		if (!L_50)
		{
			goto IL_01c5;
		}
	}
	{
		TextWriter_t3478189236 * L_51 = __this->get_Writer_0();
		String_t* L_52 = ___value0;
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		int32_t L_55 = V_0;
		String_t* L_56 = String_Substring_m1610150815(L_52, L_53, ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_55)), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_51, L_56);
	}

IL_01c5:
	{
		TextWriter_t3478189236 * L_57 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_57, ((int32_t)34));
	}

IL_01d3:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Boolean)
extern "C"  void JsonWriter_Write_m3191060035 (JsonWriter_t3837617027 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m3191060035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextWriter_t3478189236 * G_B2_0 = NULL;
	TextWriter_t3478189236 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TextWriter_t3478189236 * G_B3_1 = NULL;
	{
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = _stringLiteral3875954633;
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = _stringLiteral4002445229;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B3_1, G_B3_0);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Byte)
extern "C"  void JsonWriter_Write_m3494363828 (JsonWriter_t3837617027 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m3494363828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = Byte_ToString_m4063101981((&___value0), _stringLiteral3452614585, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.SByte)
extern "C"  void JsonWriter_Write_m2864239550 (JsonWriter_t3837617027 * __this, int8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m2864239550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = SByte_ToString_m2708934884((&___value0), _stringLiteral3452614585, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int16)
extern "C"  void JsonWriter_Write_m1887754804 (JsonWriter_t3837617027 * __this, int16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m1887754804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = Int16_ToString_m1931491687((&___value0), _stringLiteral3452614585, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt16)
extern "C"  void JsonWriter_Write_m2224805734 (JsonWriter_t3837617027 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m2224805734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = UInt16_ToString_m760649087((&___value0), _stringLiteral3452614585, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int32)
extern "C"  void JsonWriter_Write_m3857254344 (JsonWriter_t3837617027 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m3857254344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = Int32_ToString_m2507389746((&___value0), _stringLiteral3452614585, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt32)
extern "C"  void JsonWriter_Write_m297332272 (JsonWriter_t3837617027 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m297332272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Decimal_op_Implicit_m3873897383(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = VirtFuncInvoker1< bool, Decimal_t2948259380  >::Invoke(36 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::InvalidIeee754(System.Decimal) */, __this, L_1);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_4 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = UInt32_ToString_m2420423038((&___value0), _stringLiteral3452614585, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_5);
		goto IL_0049;
	}

IL_002c:
	{
		TextWriter_t3478189236 * L_6 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = UInt32_ToString_m2420423038((&___value0), _stringLiteral3452614585, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_8);
	}

IL_0049:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int64)
extern "C"  void JsonWriter_Write_m3051012970 (JsonWriter_t3837617027 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m3051012970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int64_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Decimal_op_Implicit_m1349849065(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = VirtFuncInvoker1< bool, Decimal_t2948259380  >::Invoke(36 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::InvalidIeee754(System.Decimal) */, __this, L_1);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_4 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = Int64_ToString_m2085073918((&___value0), _stringLiteral3452614585, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_5);
		goto IL_0049;
	}

IL_002c:
	{
		TextWriter_t3478189236 * L_6 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = Int64_ToString_m2085073918((&___value0), _stringLiteral3452614585, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_8);
	}

IL_0049:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt64)
extern "C"  void JsonWriter_Write_m684828457 (JsonWriter_t3837617027 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m684828457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint64_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Decimal_op_Implicit_m2299919277(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = VirtFuncInvoker1< bool, Decimal_t2948259380  >::Invoke(36 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::InvalidIeee754(System.Decimal) */, __this, L_1);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_4 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = UInt64_ToString_m1695188334((&___value0), _stringLiteral3452614585, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_5);
		goto IL_0049;
	}

IL_002c:
	{
		TextWriter_t3478189236 * L_6 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = UInt64_ToString_m1695188334((&___value0), _stringLiteral3452614585, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_8);
	}

IL_0049:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Single)
extern "C"  void JsonWriter_Write_m1130403249 (JsonWriter_t3837617027 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m1130403249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		bool L_1 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		float L_2 = ___value0;
		bool L_3 = Single_IsInfinity_m936314085(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		TextWriter_t3478189236 * L_5 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral1202628576);
		goto IL_004a;
	}

IL_002b:
	{
		TextWriter_t3478189236 * L_6 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = Single_ToString_m543431371((&___value0), _stringLiteral3452614606, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_8);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Double)
extern "C"  void JsonWriter_Write_m3883806249 (JsonWriter_t3837617027 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m3883806249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		double L_0 = ___value0;
		bool L_1 = Double_IsNaN_m649024406(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		double L_2 = ___value0;
		bool L_3 = Double_IsInfinity_m820013146(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		TextWriter_t3478189236 * L_5 = __this->get_Writer_0();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral1202628576);
		goto IL_004a;
	}

IL_002b:
	{
		TextWriter_t3478189236 * L_6 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = Double_ToString_m1051753975((&___value0), _stringLiteral3452614606, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_8);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Decimal)
extern "C"  void JsonWriter_Write_m4052531007 (JsonWriter_t3837617027 * __this, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m4052531007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Decimal_t2948259380  L_0 = ___value0;
		bool L_1 = VirtFuncInvoker1< bool, Decimal_t2948259380  >::Invoke(36 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::InvalidIeee754(System.Decimal) */, __this, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Decimal_ToString_m14270257((&___value0), _stringLiteral3452614585, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_4);
		goto IL_0044;
	}

IL_0027:
	{
		TextWriter_t3478189236 * L_5 = __this->get_Writer_0();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_6 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_7 = Decimal_ToString_m14270257((&___value0), _stringLiteral3452614585, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, L_7);
	}

IL_0044:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Char)
extern "C"  void JsonWriter_Write_m1078053530 (JsonWriter_t3837617027 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___value0;
		String_t* L_1 = String_CreateString_m1262864254(NULL, L_0, 1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_1);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.TimeSpan)
extern "C"  void JsonWriter_Write_m3841162473 (JsonWriter_t3837617027 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = TimeSpan_get_Ticks_m2137362016((&___value0), /*hidden argument*/NULL);
		VirtActionInvoker1< int64_t >::Invoke(17 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int64) */, __this, L_0);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Uri)
extern "C"  void JsonWriter_Write_m2561289255 (JsonWriter_t3837617027 * __this, Uri_t100236324 * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___value0;
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_1);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Version)
extern "C"  void JsonWriter_Write_m931506992 (JsonWriter_t3837617027 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___value0;
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_1);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArray(System.Collections.IEnumerable)
extern "C"  void JsonWriter_WriteArray_m1436810601 (JsonWriter_t3837617027 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteArray_m1436810601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)91));
		int32_t L_1 = __this->get_depth_2();
		__this->set_depth_2(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = __this->get_depth_2();
		JsonWriterSettings_t3483137480 * L_3 = __this->get_settings_1();
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_3);
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		JsonWriterSettings_t3483137480 * L_6 = __this->get_settings_1();
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3602970396, L_9, /*hidden argument*/NULL);
		JsonSerializationException_t3109053593 * L_11 = (JsonSerializationException_t3109053593 *)il2cpp_codegen_object_new(JsonSerializationException_t3109053593_il2cpp_TypeInfo_var);
		JsonSerializationException__ctor_m2877834310(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_0057:
	{
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_12 = ___value0;
			RuntimeObject* L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_12);
			V_2 = L_13;
		}

IL_0061:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0091;
			}

IL_0063:
			{
				RuntimeObject* L_14 = V_2;
				RuntimeObject * L_15 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
				V_3 = L_15;
				bool L_16 = V_0;
				V_4 = L_16;
				bool L_17 = V_4;
				if (!L_17)
				{
					goto IL_007d;
				}
			}

IL_0072:
			{
				VirtActionInvoker0::Invoke(33 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItemDelim() */, __this);
				goto IL_0081;
			}

IL_007d:
			{
				V_0 = (bool)1;
			}

IL_0081:
			{
				VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
				RuntimeObject * L_18 = V_3;
				VirtActionInvoker1< RuntimeObject * >::Invoke(27 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItem(System.Object) */, __this, L_18);
			}

IL_0091:
			{
				RuntimeObject* L_19 = V_2;
				bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0063;
				}
			}

IL_0099:
			{
				IL2CPP_LEAVE(0xB0, FINALLY_009b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009b;
		}

FINALLY_009b:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_21 = V_2;
				V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				RuntimeObject* L_22 = V_5;
				if (!L_22)
				{
					goto IL_00af;
				}
			}

IL_00a7:
			{
				RuntimeObject* L_23 = V_5;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
			}

IL_00af:
			{
				IL2CPP_END_FINALLY(155)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(155)
		{
			IL2CPP_JUMP_TBL(0xB0, IL_00b0)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00b0:
		{
			IL2CPP_LEAVE(0xC4, FINALLY_00b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b3;
	}

FINALLY_00b3:
	{ // begin finally (depth: 1)
		int32_t L_24 = __this->get_depth_2();
		__this->set_depth_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)));
		IL2CPP_END_FINALLY(179)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(179)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c4:
	{
		bool L_25 = V_0;
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00d4;
		}
	}
	{
		VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
	}

IL_00d4:
	{
		TextWriter_t3478189236 * L_27 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, ((int32_t)93));
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItem(System.Object)
extern "C"  void JsonWriter_WriteArrayItem_m1081050669 (JsonWriter_t3837617027 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item0;
		VirtActionInvoker2< RuntimeObject *, bool >::Invoke(5 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object,System.Boolean) */, __this, L_0, (bool)0);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Collections.IDictionary)
extern "C"  void JsonWriter_WriteObject_m1203429653 (JsonWriter_t3837617027 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(29 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteDictionary(System.Collections.IEnumerable) */, __this, L_0);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteDictionary(System.Collections.IEnumerable)
extern "C"  void JsonWriter_WriteDictionary_m2899446293 (JsonWriter_t3837617027 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteDictionary_m2899446293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	DictionaryEntry_t3123975638  V_8;
	memset(&V_8, 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___value0;
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_0);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDictionaryEnumerator_t1693217257_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_4 = ___value0;
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2661900808, L_5, /*hidden argument*/NULL);
		JsonSerializationException_t3109053593 * L_7 = (JsonSerializationException_t3109053593 *)il2cpp_codegen_object_new(JsonSerializationException_t3109053593_il2cpp_TypeInfo_var);
		JsonSerializationException__ctor_m2877834310(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_002c:
	{
		V_1 = (bool)0;
		JsonWriterSettings_t3483137480 * L_8 = __this->get_settings_1();
		bool L_9 = JsonWriterSettings_get_HandleCyclicReferences_m1118343241(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		V_4 = 0;
		Dictionary_2_t3384741 * L_11 = __this->get_previouslySerializedObjects_3();
		RuntimeObject* L_12 = ___value0;
		bool L_13 = Dictionary_2_TryGetValue_m3959998165(L_11, L_12, (&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m3959998165_RuntimeMethod_var);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		TextWriter_t3478189236 * L_15 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_15, ((int32_t)123));
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_17);
		JsonWriter_WriteObjectProperty_m2063146684(__this, _stringLiteral2376253809, L_18, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
		TextWriter_t3478189236 * L_19 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, ((int32_t)125));
		goto IL_0186;
	}

IL_0091:
	{
		Dictionary_2_t3384741 * L_20 = __this->get_previouslySerializedObjects_3();
		RuntimeObject* L_21 = ___value0;
		Dictionary_2_t3384741 * L_22 = __this->get_previouslySerializedObjects_3();
		int32_t L_23 = Dictionary_2_get_Count_m3716971248(L_22, /*hidden argument*/Dictionary_2_get_Count_m3716971248_RuntimeMethod_var);
		Dictionary_2_Add_m1279427033(L_20, L_21, L_23, /*hidden argument*/Dictionary_2_Add_m1279427033_RuntimeMethod_var);
	}

IL_00ac:
	{
		TextWriter_t3478189236 * L_24 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_24, ((int32_t)123));
		int32_t L_25 = __this->get_depth_2();
		__this->set_depth_2(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		int32_t L_26 = __this->get_depth_2();
		JsonWriterSettings_t3483137480 * L_27 = __this->get_settings_1();
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_27);
		V_6 = (bool)((((int32_t)L_26) > ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0102;
		}
	}
	{
		JsonWriterSettings_t3483137480 * L_30 = __this->get_settings_1();
		int32_t L_31 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_30);
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_32);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3602970396, L_33, /*hidden argument*/NULL);
		JsonSerializationException_t3109053593 * L_35 = (JsonSerializationException_t3109053593 *)il2cpp_codegen_object_new(JsonSerializationException_t3109053593_il2cpp_TypeInfo_var);
		JsonSerializationException__ctor_m2877834310(L_35, L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35);
	}

IL_0102:
	{
	}

IL_0103:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0148;
		}

IL_0106:
		{
			bool L_36 = V_1;
			V_7 = L_36;
			bool L_37 = V_7;
			if (!L_37)
			{
				goto IL_0119;
			}
		}

IL_010e:
		{
			VirtActionInvoker0::Invoke(34 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyDelim() */, __this);
			goto IL_011d;
		}

IL_0119:
		{
			V_1 = (bool)1;
		}

IL_011d:
		{
			RuntimeObject* L_38 = V_0;
			DictionaryEntry_t3123975638  L_39 = InterfaceFuncInvoker0< DictionaryEntry_t3123975638  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1693217257_il2cpp_TypeInfo_var, L_38);
			V_8 = L_39;
			RuntimeObject * L_40 = DictionaryEntry_get_Key_m3117378551((&V_8), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
			String_t* L_41 = Convert_ToString_m2219349533(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
			RuntimeObject* L_42 = V_0;
			DictionaryEntry_t3123975638  L_43 = InterfaceFuncInvoker0< DictionaryEntry_t3123975638  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1693217257_il2cpp_TypeInfo_var, L_42);
			V_8 = L_43;
			RuntimeObject * L_44 = DictionaryEntry_get_Value_m618120527((&V_8), /*hidden argument*/NULL);
			JsonWriter_WriteObjectProperty_m2063146684(__this, L_41, L_44, /*hidden argument*/NULL);
		}

IL_0148:
		{
			RuntimeObject* L_45 = V_0;
			bool L_46 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_45);
			V_9 = L_46;
			bool L_47 = V_9;
			if (L_47)
			{
				goto IL_0106;
			}
		}

IL_0154:
		{
			IL2CPP_LEAVE(0x168, FINALLY_0157);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0157;
	}

FINALLY_0157:
	{ // begin finally (depth: 1)
		int32_t L_48 = __this->get_depth_2();
		__this->set_depth_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)));
		IL2CPP_END_FINALLY(343)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(343)
	{
		IL2CPP_JUMP_TBL(0x168, IL_0168)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0168:
	{
		bool L_49 = V_1;
		V_10 = L_49;
		bool L_50 = V_10;
		if (!L_50)
		{
			goto IL_0178;
		}
	}
	{
		VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
	}

IL_0178:
	{
		TextWriter_t3478189236 * L_51 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_51, ((int32_t)125));
	}

IL_0186:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectProperty(System.String,System.Object)
extern "C"  void JsonWriter_WriteObjectProperty_m2063146684 (JsonWriter_t3837617027 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
		String_t* L_0 = ___key0;
		VirtActionInvoker1< String_t* >::Invoke(30 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyName(System.String) */, __this, L_0);
		TextWriter_t3478189236 * L_1 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)58));
		RuntimeObject * L_2 = ___value1;
		VirtActionInvoker1< RuntimeObject * >::Invoke(31 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyValue(System.Object) */, __this, L_2);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyName(System.String)
extern "C"  void JsonWriter_WriteObjectPropertyName_m3138514002 (JsonWriter_t3837617027 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String) */, __this, L_0);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyValue(System.Object)
extern "C"  void JsonWriter_WriteObjectPropertyValue_m1348578008 (JsonWriter_t3837617027 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		VirtActionInvoker2< RuntimeObject *, bool >::Invoke(5 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object,System.Boolean) */, __this, L_0, (bool)1);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Object,System.Type)
extern "C"  void JsonWriter_WriteObject_m3041493761 (JsonWriter_t3837617027 * __this, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteObject_m3041493761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	PropertyInfoU5BU5D_t1461822886* V_6 = NULL;
	FieldInfoU5BU5D_t846150980* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	PropertyInfoU5BU5D_t1461822886* V_10 = NULL;
	int32_t V_11 = 0;
	PropertyInfo_t * V_12 = NULL;
	RuntimeObject * V_13 = NULL;
	String_t* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	FieldInfoU5BU5D_t846150980* V_27 = NULL;
	int32_t V_28 = 0;
	FieldInfo_t * V_29 = NULL;
	RuntimeObject * V_30 = NULL;
	String_t* V_31 = NULL;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B54_0 = 0;
	{
		V_0 = (bool)0;
		JsonWriterSettings_t3483137480 * L_0 = __this->get_settings_1();
		bool L_1 = JsonWriterSettings_get_HandleCyclicReferences_m1118343241(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Type_t * L_2 = ___type1;
		bool L_3 = Type_get_IsValueType_m3108065642(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_008b;
		}
	}
	{
		V_2 = 0;
		Dictionary_2_t3384741 * L_5 = __this->get_previouslySerializedObjects_3();
		RuntimeObject * L_6 = ___value0;
		bool L_7 = Dictionary_2_TryGetValue_m3959998165(L_5, L_6, (&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m3959998165_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0070;
		}
	}
	{
		TextWriter_t3478189236 * L_9 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)123));
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		JsonWriter_WriteObjectProperty_m2063146684(__this, _stringLiteral2376253809, L_12, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
		TextWriter_t3478189236 * L_13 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)125));
		goto IL_04ac;
	}

IL_0070:
	{
		Dictionary_2_t3384741 * L_14 = __this->get_previouslySerializedObjects_3();
		RuntimeObject * L_15 = ___value0;
		Dictionary_2_t3384741 * L_16 = __this->get_previouslySerializedObjects_3();
		int32_t L_17 = Dictionary_2_get_Count_m3716971248(L_16, /*hidden argument*/Dictionary_2_get_Count_m3716971248_RuntimeMethod_var);
		Dictionary_2_Add_m1279427033(L_14, L_15, L_17, /*hidden argument*/Dictionary_2_Add_m1279427033_RuntimeMethod_var);
	}

IL_008b:
	{
		TextWriter_t3478189236 * L_18 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_18, ((int32_t)123));
		int32_t L_19 = __this->get_depth_2();
		__this->set_depth_2(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
		int32_t L_20 = __this->get_depth_2();
		JsonWriterSettings_t3483137480 * L_21 = __this->get_settings_1();
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_21);
		V_4 = (bool)((((int32_t)L_20) > ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00e1;
		}
	}
	{
		JsonWriterSettings_t3483137480 * L_24 = __this->get_settings_1();
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth() */, L_24);
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3602970396, L_27, /*hidden argument*/NULL);
		JsonSerializationException_t3109053593 * L_29 = (JsonSerializationException_t3109053593 *)il2cpp_codegen_object_new(JsonSerializationException_t3109053593_il2cpp_TypeInfo_var);
		JsonSerializationException__ctor_m2877834310(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29);
	}

IL_00e1:
	{
	}

IL_00e2:
	try
	{ // begin try (depth: 1)
		{
			JsonWriterSettings_t3483137480 * L_30 = __this->get_settings_1();
			String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_TypeHintName() */, L_30);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_32 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
			V_8 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
			bool L_33 = V_8;
			if (!L_33)
			{
				goto IL_0146;
			}
		}

IL_00fc:
		{
			bool L_34 = V_0;
			V_9 = L_34;
			bool L_35 = V_9;
			if (!L_35)
			{
				goto IL_010f;
			}
		}

IL_0104:
		{
			VirtActionInvoker0::Invoke(34 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyDelim() */, __this);
			goto IL_0113;
		}

IL_010f:
		{
			V_0 = (bool)1;
		}

IL_0113:
		{
			JsonWriterSettings_t3483137480 * L_36 = __this->get_settings_1();
			String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_TypeHintName() */, L_36);
			Type_t * L_38 = ___type1;
			String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_38);
			Type_t * L_40 = ___type1;
			Assembly_t * L_41 = VirtFuncInvoker0< Assembly_t * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_40);
			AssemblyName_t270931938 * L_42 = VirtFuncInvoker0< AssemblyName_t270931938 * >::Invoke(17 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_41);
			String_t* L_43 = AssemblyName_get_Name_m4072373679(L_42, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_44 = String_Concat_m3755062657(NULL /*static, unused*/, L_39, _stringLiteral3450517380, L_43, /*hidden argument*/NULL);
			JsonWriter_WriteObjectProperty_m2063146684(__this, L_37, L_44, /*hidden argument*/NULL);
		}

IL_0146:
		{
			Type_t * L_45 = ___type1;
			bool L_46 = VirtFuncInvoker0< bool >::Invoke(90 /* System.Boolean System.Type::get_IsGenericType() */, L_45);
			if (!L_46)
			{
				goto IL_0160;
			}
		}

IL_014e:
		{
			Type_t * L_47 = ___type1;
			String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_47);
			bool L_49 = String_StartsWith_m1759067526(L_48, _stringLiteral3410467453, /*hidden argument*/NULL);
			G_B18_0 = ((int32_t)(L_49));
			goto IL_0161;
		}

IL_0160:
		{
			G_B18_0 = 0;
		}

IL_0161:
		{
			V_5 = (bool)G_B18_0;
			Type_t * L_50 = ___type1;
			PropertyInfoU5BU5D_t1461822886* L_51 = Type_GetProperties_m1538559489(L_50, /*hidden argument*/NULL);
			V_6 = L_51;
			PropertyInfoU5BU5D_t1461822886* L_52 = V_6;
			V_10 = L_52;
			V_11 = 0;
			goto IL_0322;
		}

IL_0178:
		{
			PropertyInfoU5BU5D_t1461822886* L_53 = V_10;
			int32_t L_54 = V_11;
			int32_t L_55 = L_54;
			PropertyInfo_t * L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
			V_12 = L_56;
			PropertyInfo_t * L_57 = V_12;
			bool L_58 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_57);
			V_15 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
			bool L_59 = V_15;
			if (!L_59)
			{
				goto IL_01c3;
			}
		}

IL_0190:
		{
			JsonWriterSettings_t3483137480 * L_60 = JsonWriter_get_Settings_m1175525012(__this, /*hidden argument*/NULL);
			bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode() */, L_60);
			V_16 = L_61;
			bool L_62 = V_16;
			if (!L_62)
			{
				goto IL_01be;
			}
		}

IL_01a2:
		{
			PropertyInfo_t * L_63 = V_12;
			String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_63);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_65 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral15954665, L_64, _stringLiteral1093966344, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
			Console_WriteLine_m4182570127(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		}

IL_01be:
		{
			goto IL_031c;
		}

IL_01c3:
		{
			PropertyInfo_t * L_66 = V_12;
			bool L_67 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_66);
			if (L_67)
			{
				goto IL_01d3;
			}
		}

IL_01cc:
		{
			bool L_68 = V_5;
			G_B26_0 = ((((int32_t)L_68) == ((int32_t)0))? 1 : 0);
			goto IL_01d4;
		}

IL_01d3:
		{
			G_B26_0 = 0;
		}

IL_01d4:
		{
			V_17 = (bool)G_B26_0;
			bool L_69 = V_17;
			if (!L_69)
			{
				goto IL_020d;
			}
		}

IL_01da:
		{
			JsonWriterSettings_t3483137480 * L_70 = JsonWriter_get_Settings_m1175525012(__this, /*hidden argument*/NULL);
			bool L_71 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode() */, L_70);
			V_18 = L_71;
			bool L_72 = V_18;
			if (!L_72)
			{
				goto IL_0208;
			}
		}

IL_01ec:
		{
			PropertyInfo_t * L_73 = V_12;
			String_t* L_74 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_73);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_75 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral15954665, L_74, _stringLiteral1703019870, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
			Console_WriteLine_m4182570127(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		}

IL_0208:
		{
			goto IL_031c;
		}

IL_020d:
		{
			Type_t * L_76 = ___type1;
			PropertyInfo_t * L_77 = V_12;
			RuntimeObject * L_78 = ___value0;
			bool L_79 = JsonWriter_IsIgnored_m796319191(__this, L_76, L_77, L_78, /*hidden argument*/NULL);
			V_19 = L_79;
			bool L_80 = V_19;
			if (!L_80)
			{
				goto IL_0250;
			}
		}

IL_021d:
		{
			JsonWriterSettings_t3483137480 * L_81 = JsonWriter_get_Settings_m1175525012(__this, /*hidden argument*/NULL);
			bool L_82 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode() */, L_81);
			V_20 = L_82;
			bool L_83 = V_20;
			if (!L_83)
			{
				goto IL_024b;
			}
		}

IL_022f:
		{
			PropertyInfo_t * L_84 = V_12;
			String_t* L_85 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_84);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_86 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral15954665, L_85, _stringLiteral3752218755, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
			Console_WriteLine_m4182570127(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
		}

IL_024b:
		{
			goto IL_031c;
		}

IL_0250:
		{
			PropertyInfo_t * L_87 = V_12;
			ParameterInfoU5BU5D_t390618515* L_88 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(21 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_87);
			V_21 = (bool)((!(((uint32_t)(((RuntimeArray *)L_88)->max_length)) <= ((uint32_t)0)))? 1 : 0);
			bool L_89 = V_21;
			if (!L_89)
			{
				goto IL_0294;
			}
		}

IL_0261:
		{
			JsonWriterSettings_t3483137480 * L_90 = JsonWriter_get_Settings_m1175525012(__this, /*hidden argument*/NULL);
			bool L_91 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode() */, L_90);
			V_22 = L_91;
			bool L_92 = V_22;
			if (!L_92)
			{
				goto IL_028f;
			}
		}

IL_0273:
		{
			PropertyInfo_t * L_93 = V_12;
			String_t* L_94 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_93);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_95 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral15954665, L_94, _stringLiteral1653389075, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
			Console_WriteLine_m4182570127(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		}

IL_028f:
		{
			goto IL_031c;
		}

IL_0294:
		{
			PropertyInfo_t * L_96 = V_12;
			RuntimeObject * L_97 = ___value0;
			RuntimeObject * L_98 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(23 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_96, L_97, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
			V_13 = L_98;
			PropertyInfo_t * L_99 = V_12;
			RuntimeObject * L_100 = V_13;
			bool L_101 = JsonWriter_IsDefaultValue_m3781132218(__this, L_99, L_100, /*hidden argument*/NULL);
			V_23 = L_101;
			bool L_102 = V_23;
			if (!L_102)
			{
				goto IL_02df;
			}
		}

IL_02af:
		{
			JsonWriterSettings_t3483137480 * L_103 = JsonWriter_get_Settings_m1175525012(__this, /*hidden argument*/NULL);
			bool L_104 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode() */, L_103);
			V_24 = L_104;
			bool L_105 = V_24;
			if (!L_105)
			{
				goto IL_02dd;
			}
		}

IL_02c1:
		{
			PropertyInfo_t * L_106 = V_12;
			String_t* L_107 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_106);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_108 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral15954665, L_107, _stringLiteral1340805833, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
			Console_WriteLine_m4182570127(NULL /*static, unused*/, L_108, /*hidden argument*/NULL);
		}

IL_02dd:
		{
			goto IL_031c;
		}

IL_02df:
		{
			bool L_109 = V_0;
			V_25 = L_109;
			bool L_110 = V_25;
			if (!L_110)
			{
				goto IL_02ef;
			}
		}

IL_02e6:
		{
			VirtActionInvoker0::Invoke(34 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyDelim() */, __this);
			goto IL_02f1;
		}

IL_02ef:
		{
			V_0 = (bool)1;
		}

IL_02f1:
		{
			PropertyInfo_t * L_111 = V_12;
			String_t* L_112 = JsonNameAttribute_GetJsonName_m3272941041(NULL /*static, unused*/, L_111, /*hidden argument*/NULL);
			V_14 = L_112;
			String_t* L_113 = V_14;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_114 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_113, /*hidden argument*/NULL);
			V_26 = L_114;
			bool L_115 = V_26;
			if (!L_115)
			{
				goto IL_0310;
			}
		}

IL_0307:
		{
			PropertyInfo_t * L_116 = V_12;
			String_t* L_117 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_116);
			V_14 = L_117;
		}

IL_0310:
		{
			String_t* L_118 = V_14;
			RuntimeObject * L_119 = V_13;
			JsonWriter_WriteObjectProperty_m2063146684(__this, L_118, L_119, /*hidden argument*/NULL);
		}

IL_031c:
		{
			int32_t L_120 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
		}

IL_0322:
		{
			int32_t L_121 = V_11;
			PropertyInfoU5BU5D_t1461822886* L_122 = V_10;
			if ((((int32_t)L_121) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_122)->max_length)))))))
			{
				goto IL_0178;
			}
		}

IL_032d:
		{
			Type_t * L_123 = ___type1;
			FieldInfoU5BU5D_t846150980* L_124 = Type_GetFields_m3709891696(L_123, /*hidden argument*/NULL);
			V_7 = L_124;
			FieldInfoU5BU5D_t846150980* L_125 = V_7;
			V_27 = L_125;
			V_28 = 0;
			goto IL_0471;
		}

IL_0342:
		{
			FieldInfoU5BU5D_t846150980* L_126 = V_27;
			int32_t L_127 = V_28;
			int32_t L_128 = L_127;
			FieldInfo_t * L_129 = (L_126)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_128));
			V_29 = L_129;
			FieldInfo_t * L_130 = V_29;
			bool L_131 = FieldInfo_get_IsPublic_m3378038140(L_130, /*hidden argument*/NULL);
			if (!L_131)
			{
				goto IL_035c;
			}
		}

IL_0353:
		{
			FieldInfo_t * L_132 = V_29;
			bool L_133 = FieldInfo_get_IsStatic_m3482711189(L_132, /*hidden argument*/NULL);
			G_B54_0 = ((int32_t)(L_133));
			goto IL_035d;
		}

IL_035c:
		{
			G_B54_0 = 1;
		}

IL_035d:
		{
			V_32 = (bool)G_B54_0;
			bool L_134 = V_32;
			if (!L_134)
			{
				goto IL_0396;
			}
		}

IL_0363:
		{
			JsonWriterSettings_t3483137480 * L_135 = JsonWriter_get_Settings_m1175525012(__this, /*hidden argument*/NULL);
			bool L_136 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode() */, L_135);
			V_33 = L_136;
			bool L_137 = V_33;
			if (!L_137)
			{
				goto IL_0391;
			}
		}

IL_0375:
		{
			FieldInfo_t * L_138 = V_29;
			String_t* L_139 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_138);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_140 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral15954665, L_139, _stringLiteral822204849, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
			Console_WriteLine_m4182570127(NULL /*static, unused*/, L_140, /*hidden argument*/NULL);
		}

IL_0391:
		{
			goto IL_046b;
		}

IL_0396:
		{
			Type_t * L_141 = ___type1;
			FieldInfo_t * L_142 = V_29;
			RuntimeObject * L_143 = ___value0;
			bool L_144 = JsonWriter_IsIgnored_m796319191(__this, L_141, L_142, L_143, /*hidden argument*/NULL);
			V_34 = L_144;
			bool L_145 = V_34;
			if (!L_145)
			{
				goto IL_03d9;
			}
		}

IL_03a6:
		{
			JsonWriterSettings_t3483137480 * L_146 = JsonWriter_get_Settings_m1175525012(__this, /*hidden argument*/NULL);
			bool L_147 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode() */, L_146);
			V_35 = L_147;
			bool L_148 = V_35;
			if (!L_148)
			{
				goto IL_03d4;
			}
		}

IL_03b8:
		{
			FieldInfo_t * L_149 = V_29;
			String_t* L_150 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_149);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_151 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral15954665, L_150, _stringLiteral1083846209, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
			Console_WriteLine_m4182570127(NULL /*static, unused*/, L_151, /*hidden argument*/NULL);
		}

IL_03d4:
		{
			goto IL_046b;
		}

IL_03d9:
		{
			FieldInfo_t * L_152 = V_29;
			RuntimeObject * L_153 = ___value0;
			RuntimeObject * L_154 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_152, L_153);
			V_30 = L_154;
			FieldInfo_t * L_155 = V_29;
			RuntimeObject * L_156 = V_30;
			bool L_157 = JsonWriter_IsDefaultValue_m3781132218(__this, L_155, L_156, /*hidden argument*/NULL);
			V_36 = L_157;
			bool L_158 = V_36;
			if (!L_158)
			{
				goto IL_0423;
			}
		}

IL_03f3:
		{
			JsonWriterSettings_t3483137480 * L_159 = JsonWriter_get_Settings_m1175525012(__this, /*hidden argument*/NULL);
			bool L_160 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode() */, L_159);
			V_37 = L_160;
			bool L_161 = V_37;
			if (!L_161)
			{
				goto IL_0421;
			}
		}

IL_0405:
		{
			FieldInfo_t * L_162 = V_29;
			String_t* L_163 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_162);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_164 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral15954665, L_163, _stringLiteral1340805833, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
			Console_WriteLine_m4182570127(NULL /*static, unused*/, L_164, /*hidden argument*/NULL);
		}

IL_0421:
		{
			goto IL_046b;
		}

IL_0423:
		{
			bool L_165 = V_0;
			V_38 = L_165;
			bool L_166 = V_38;
			if (!L_166)
			{
				goto IL_043c;
			}
		}

IL_042a:
		{
			VirtActionInvoker0::Invoke(34 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyDelim() */, __this);
			VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
			goto IL_0440;
		}

IL_043c:
		{
			V_0 = (bool)1;
		}

IL_0440:
		{
			FieldInfo_t * L_167 = V_29;
			String_t* L_168 = JsonNameAttribute_GetJsonName_m3272941041(NULL /*static, unused*/, L_167, /*hidden argument*/NULL);
			V_31 = L_168;
			String_t* L_169 = V_31;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_170 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_169, /*hidden argument*/NULL);
			V_39 = L_170;
			bool L_171 = V_39;
			if (!L_171)
			{
				goto IL_045f;
			}
		}

IL_0456:
		{
			FieldInfo_t * L_172 = V_29;
			String_t* L_173 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_172);
			V_31 = L_173;
		}

IL_045f:
		{
			String_t* L_174 = V_31;
			RuntimeObject * L_175 = V_30;
			JsonWriter_WriteObjectProperty_m2063146684(__this, L_174, L_175, /*hidden argument*/NULL);
		}

IL_046b:
		{
			int32_t L_176 = V_28;
			V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1));
		}

IL_0471:
		{
			int32_t L_177 = V_28;
			FieldInfoU5BU5D_t846150980* L_178 = V_27;
			if ((((int32_t)L_177) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_178)->max_length)))))))
			{
				goto IL_0342;
			}
		}

IL_047c:
		{
			IL2CPP_LEAVE(0x490, FINALLY_047f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_047f;
	}

FINALLY_047f:
	{ // begin finally (depth: 1)
		int32_t L_179 = __this->get_depth_2();
		__this->set_depth_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_179, (int32_t)1)));
		IL2CPP_END_FINALLY(1151)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1151)
	{
		IL2CPP_JUMP_TBL(0x490, IL_0490)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0490:
	{
		bool L_180 = V_0;
		V_40 = L_180;
		bool L_181 = V_40;
		if (!L_181)
		{
			goto IL_049e;
		}
	}
	{
		VirtActionInvoker0::Invoke(35 /* System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine() */, __this);
	}

IL_049e:
	{
		TextWriter_t3478189236 * L_182 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_182, ((int32_t)125));
	}

IL_04ac:
	{
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItemDelim()
extern "C"  void JsonWriter_WriteArrayItemDelim_m4056935568 (JsonWriter_t3837617027 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)44));
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyDelim()
extern "C"  void JsonWriter_WriteObjectPropertyDelim_m647218892 (JsonWriter_t3837617027 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)44));
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine()
extern "C"  void JsonWriter_WriteLine_m3712993509 (JsonWriter_t3837617027 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		JsonWriterSettings_t3483137480 * L_0 = __this->get_settings_1();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_PrettyPrint() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0050;
	}

IL_0016:
	{
		TextWriter_t3478189236 * L_3 = __this->get_Writer_0();
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine() */, L_3);
		V_1 = 0;
		goto IL_0043;
	}

IL_0026:
	{
		TextWriter_t3478189236 * L_4 = __this->get_Writer_0();
		JsonWriterSettings_t3483137480 * L_5 = __this->get_settings_1();
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_Tab() */, L_5);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_depth_2();
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0026;
		}
	}

IL_0050:
	{
		return;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::IsIgnored(System.Type,System.Reflection.MemberInfo,System.Object)
extern "C"  bool JsonWriter_IsIgnored_m796319191 (JsonWriter_t3837617027 * __this, Type_t * ___objType0, MemberInfo_t * ___member1, RuntimeObject * ___obj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_IsIgnored_m796319191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	PropertyInfo_t * V_4 = NULL;
	bool V_5 = false;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	PropertyInfo_t * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	RuntimeObject * V_14 = NULL;
	bool V_15 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B22_0 = 0;
	{
		MemberInfo_t * L_0 = ___member1;
		bool L_1 = JsonIgnoreAttribute_IsJsonIgnore_m638233806(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0124;
	}

IL_0013:
	{
		MemberInfo_t * L_3 = ___member1;
		String_t* L_4 = JsonSpecifiedPropertyAttribute_GetJsonSpecifiedProperty_m3177035715(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_8 = ___objType0;
		String_t* L_9 = V_0;
		PropertyInfo_t * L_10 = Type_GetProperty_m3414567179(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		PropertyInfo_t * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(PropertyInfo_t *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		PropertyInfo_t * L_13 = V_4;
		RuntimeObject * L_14 = ___obj2;
		RuntimeObject * L_15 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(23 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_13, L_14, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		V_6 = L_15;
		RuntimeObject * L_16 = V_6;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject * L_17 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_18 = Convert_ToBoolean_m2072772931(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_005e;
	}

IL_005d:
	{
		G_B7_0 = 0;
	}

IL_005e:
	{
		V_7 = (bool)G_B7_0;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0124;
	}

IL_006c:
	{
	}

IL_006d:
	{
	}

IL_006e:
	{
		Type_t * L_20 = ___objType0;
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (JsonOptInAttribute_t2827491814_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_23 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_20, L_22, (bool)1);
		V_8 = (bool)((!(((uint32_t)(((RuntimeArray *)L_23)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00ab;
		}
	}
	{
		MemberInfo_t * L_25 = ___member1;
		RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (JsonMemberAttribute_t3353731244_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_28 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_25, L_27, (bool)1);
		V_9 = (bool)((((int32_t)(((RuntimeArray *)L_28)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0124;
	}

IL_00aa:
	{
	}

IL_00ab:
	{
		JsonWriterSettings_t3483137480 * L_30 = __this->get_settings_1();
		bool L_31 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_UseXmlSerializationAttributes() */, L_30);
		V_10 = L_31;
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_0120;
		}
	}
	{
		MemberInfo_t * L_33 = ___member1;
		bool L_34 = JsonIgnoreAttribute_IsXmlIgnore_m758430558(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_12 = L_34;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_00ce;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0124;
	}

IL_00ce:
	{
		Type_t * L_36 = ___objType0;
		MemberInfo_t * L_37 = ___member1;
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_37);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Concat_m3937257545(NULL /*static, unused*/, L_38, _stringLiteral1085139274, /*hidden argument*/NULL);
		PropertyInfo_t * L_40 = Type_GetProperty_m3414567179(L_36, L_39, /*hidden argument*/NULL);
		V_11 = L_40;
		PropertyInfo_t * L_41 = V_11;
		V_13 = (bool)((!(((RuntimeObject*)(PropertyInfo_t *)L_41) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_011f;
		}
	}
	{
		PropertyInfo_t * L_43 = V_11;
		RuntimeObject * L_44 = ___obj2;
		RuntimeObject * L_45 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(23 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_43, L_44, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		V_14 = L_45;
		RuntimeObject * L_46 = V_14;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_46, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_0112;
		}
	}
	{
		RuntimeObject * L_47 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_48 = Convert_ToBoolean_m2072772931(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		G_B22_0 = ((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
		goto IL_0113;
	}

IL_0112:
	{
		G_B22_0 = 0;
	}

IL_0113:
	{
		V_15 = (bool)G_B22_0;
		bool L_49 = V_15;
		if (!L_49)
		{
			goto IL_011e;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0124;
	}

IL_011e:
	{
	}

IL_011f:
	{
	}

IL_0120:
	{
		V_2 = (bool)0;
		goto IL_0124;
	}

IL_0124:
	{
		bool L_50 = V_2;
		return L_50;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::IsDefaultValue(System.Reflection.MemberInfo,System.Object)
extern "C"  bool JsonWriter_IsDefaultValue_m3781132218 (JsonWriter_t3837617027 * __this, MemberInfo_t * ___member0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_IsDefaultValue_m3781132218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DefaultValueAttribute_t587583663 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		MemberInfo_t * L_0 = ___member0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (DefaultValueAttribute_t587583663_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Attribute_t861562559 * L_3 = Attribute_GetCustomAttribute_m4034845276(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		V_0 = ((DefaultValueAttribute_t587583663 *)IsInstClass((RuntimeObject*)L_3, DefaultValueAttribute_t587583663_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t587583663 * L_4 = V_0;
		V_1 = (bool)((((RuntimeObject*)(DefaultValueAttribute_t587583663 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0048;
	}

IL_0024:
	{
		DefaultValueAttribute_t587583663 * L_6 = V_0;
		RuntimeObject * L_7 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, L_6);
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_9 = ___value1;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject *)L_9) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0048;
	}

IL_0039:
	{
		DefaultValueAttribute_t587583663 * L_10 = V_0;
		RuntimeObject * L_11 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, L_10);
		RuntimeObject * L_12 = ___value1;
		bool L_13 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_11, L_12);
		V_2 = L_13;
		goto IL_0048;
	}

IL_0048:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Enum[] Pathfinding.Serialization.JsonFx.JsonWriter::GetFlagList(System.Type,System.Object)
extern "C"  EnumU5BU5D_t596894966* JsonWriter_GetFlagList_m3518029825 (RuntimeObject * __this /* static, unused */, Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_GetFlagList_m3518029825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	RuntimeArray * V_1 = NULL;
	List_1_t1312975973 * V_2 = NULL;
	bool V_3 = false;
	EnumU5BU5D_t596894966* V_4 = NULL;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject * L_0 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m1841050714(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___enumType0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeArray * L_3 = Enum_GetValues_m4192343468(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeArray * L_4 = V_1;
		int32_t L_5 = Array_get_Length_m21610649(L_4, /*hidden argument*/NULL);
		List_1_t1312975973 * L_6 = (List_1_t1312975973 *)il2cpp_codegen_object_new(List_1_t1312975973_il2cpp_TypeInfo_var);
		List_1__ctor_m146283286(L_6, L_5, /*hidden argument*/List_1__ctor_m146283286_RuntimeMethod_var);
		V_2 = L_6;
		uint64_t L_7 = V_0;
		V_3 = (bool)((((int64_t)L_7) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		List_1_t1312975973 * L_9 = V_2;
		RuntimeObject * L_10 = ___value1;
		Type_t * L_11 = ___enumType0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_12 = Convert_ChangeType_m739676612(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		List_1_Add_m1999211601(L_9, ((Enum_t4135868527 *)CastclassClass((RuntimeObject*)L_12, Enum_t4135868527_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m1999211601_RuntimeMethod_var);
		List_1_t1312975973 * L_13 = V_2;
		EnumU5BU5D_t596894966* L_14 = List_1_ToArray_m368538830(L_13, /*hidden argument*/List_1_ToArray_m368538830_RuntimeMethod_var);
		V_4 = L_14;
		goto IL_00df;
	}

IL_0045:
	{
		RuntimeArray * L_15 = V_1;
		int32_t L_16 = Array_get_Length_m21610649(L_15, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		goto IL_00a7;
	}

IL_0051:
	{
		RuntimeArray * L_17 = V_1;
		int32_t L_18 = V_5;
		RuntimeObject * L_19 = Array_GetValue_m2528546681(L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_20 = Convert_ToUInt64_m1841050714(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		int32_t L_21 = V_5;
		if (L_21)
		{
			goto IL_006d;
		}
	}
	{
		uint64_t L_22 = V_6;
		G_B6_0 = ((((int64_t)L_22) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B6_0 = 0;
	}

IL_006e:
	{
		V_7 = (bool)G_B6_0;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_0077;
		}
	}
	{
		goto IL_00a1;
	}

IL_0077:
	{
		uint64_t L_24 = V_0;
		uint64_t L_25 = V_6;
		uint64_t L_26 = V_6;
		V_8 = (bool)((((int64_t)((int64_t)((int64_t)L_24&(int64_t)L_25))) == ((int64_t)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00a0;
		}
	}
	{
		uint64_t L_28 = V_0;
		uint64_t L_29 = V_6;
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_28, (int64_t)L_29));
		List_1_t1312975973 * L_30 = V_2;
		RuntimeArray * L_31 = V_1;
		int32_t L_32 = V_5;
		RuntimeObject * L_33 = Array_GetValue_m2528546681(L_31, L_32, /*hidden argument*/NULL);
		List_1_Add_m1999211601(L_30, ((Enum_t4135868527 *)IsInstClass((RuntimeObject*)L_33, Enum_t4135868527_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m1999211601_RuntimeMethod_var);
	}

IL_00a0:
	{
	}

IL_00a1:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_35 = V_5;
		V_9 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_9;
		if (L_36)
		{
			goto IL_0051;
		}
	}
	{
		uint64_t L_37 = V_0;
		V_10 = (bool)((!(((uint64_t)L_37) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
		bool L_38 = V_10;
		if (!L_38)
		{
			goto IL_00d5;
		}
	}
	{
		List_1_t1312975973 * L_39 = V_2;
		Type_t * L_40 = ___enumType0;
		uint64_t L_41 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeObject * L_42 = Enum_ToObject_m121831801(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		List_1_Add_m1999211601(L_39, ((Enum_t4135868527 *)IsInstClass((RuntimeObject*)L_42, Enum_t4135868527_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m1999211601_RuntimeMethod_var);
	}

IL_00d5:
	{
		List_1_t1312975973 * L_43 = V_2;
		EnumU5BU5D_t596894966* L_44 = List_1_ToArray_m368538830(L_43, /*hidden argument*/List_1_ToArray_m368538830_RuntimeMethod_var);
		V_4 = L_44;
		goto IL_00df;
	}

IL_00df:
	{
		EnumU5BU5D_t596894966* L_45 = V_4;
		return L_45;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::InvalidIeee754(System.Decimal)
extern "C"  bool JsonWriter_InvalidIeee754_m153058136 (JsonWriter_t3837617027 * __this, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_InvalidIeee754_m153058136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		Decimal_t2948259380  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		double L_1 = Decimal_op_Explicit_m2816896069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Decimal_t2948259380  L_2 = Decimal_op_Explicit_m2433293820(NULL /*static, unused*/, (((double)((double)L_1))), /*hidden argument*/NULL);
		Decimal_t2948259380  L_3 = ___value0;
		bool L_4 = Decimal_op_Inequality_m3543190500(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0017;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Object)
		V_0 = (bool)1;
		goto IL_001d;
	} // end catch (depth: 1)

IL_001d:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::System.IDisposable.Dispose()
extern "C"  void JsonWriter_System_IDisposable_Dispose_m2899612877 (JsonWriter_t3837617027 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TextWriter_t3478189236 * L_0 = __this->get_Writer_0();
		V_0 = (bool)((!(((RuntimeObject*)(TextWriter_t3478189236 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		TextWriter_t3478189236 * L_2 = __this->get_Writer_0();
		TextWriter_Dispose_m2495808722(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
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
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_HandleCyclicReferences()
extern "C"  bool JsonWriterSettings_get_HandleCyclicReferences_m1118343241 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHandleCyclicReferencesU3Ek__BackingField_7();
		return L_0;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_TypeHintName()
extern "C"  String_t* JsonWriterSettings_get_TypeHintName_m332162099 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_typeHintName_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_PrettyPrint()
extern "C"  bool JsonWriterSettings_get_PrettyPrint_m3469406155 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_prettyPrint_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_Tab()
extern "C"  String_t* JsonWriterSettings_get_Tab_m3758689283 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_tab_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_NewLine()
extern "C"  String_t* JsonWriterSettings_get_NewLine_m3334005495 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_newLine_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth()
extern "C"  int32_t JsonWriterSettings_get_MaxDepth_m877674160 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_maxDepth_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_UseXmlSerializationAttributes()
extern "C"  bool JsonWriterSettings_get_UseXmlSerializationAttributes_m2782844562 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_useXmlSerializationAttributes_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime> Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DateTimeSerializer()
extern "C"  WriteDelegate_1_t4077604362 * JsonWriterSettings_get_DateTimeSerializer_m319890800 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	WriteDelegate_1_t4077604362 * V_0 = NULL;
	{
		WriteDelegate_1_t4077604362 * L_0 = __this->get_dateTimeSerializer_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		WriteDelegate_1_t4077604362 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode()
extern "C"  bool JsonWriterSettings_get_DebugMode_m2827025650 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CDebugModeU3Ek__BackingField_8();
		return L_0;
	}
}
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonWriterSettings::GetConverter(System.Type)
extern "C"  JsonConverter_t949931907 * JsonWriterSettings_GetConverter_m1997901241 (JsonWriterSettings_t3483137480 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriterSettings_GetConverter_m1997901241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	JsonConverter_t949931907 * V_2 = NULL;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_002e;
	}

IL_0005:
	{
		List_1_t2422006649 * L_0 = __this->get_converters_9();
		int32_t L_1 = V_0;
		JsonConverter_t949931907 * L_2 = List_1_get_Item_m1904888016(L_0, L_1, /*hidden argument*/List_1_get_Item_m1904888016_RuntimeMethod_var);
		Type_t * L_3 = ___type0;
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(4 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonConverter::CanConvert(System.Type) */, L_2, L_3);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		List_1_t2422006649 * L_6 = __this->get_converters_9();
		int32_t L_7 = V_0;
		JsonConverter_t949931907 * L_8 = List_1_get_Item_m1904888016(L_6, L_7, /*hidden argument*/List_1_get_Item_m1904888016_RuntimeMethod_var);
		V_2 = L_8;
		goto IL_0044;
	}

IL_002a:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		List_1_t2422006649 * L_11 = __this->get_converters_9();
		int32_t L_12 = List_1_get_Count_m3926730779(L_11, /*hidden argument*/List_1_get_Count_m3926730779_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (JsonConverter_t949931907 *)NULL;
		goto IL_0044;
	}

IL_0044:
	{
		JsonConverter_t949931907 * L_14 = V_2;
		return L_14;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonWriterSettings::.ctor()
extern "C"  void JsonWriterSettings__ctor_m1149145536 (JsonWriterSettings_t3483137480 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriterSettings__ctor_m1149145536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_maxDepth_1(((int32_t)25));
		String_t* L_0 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_newLine_2(L_0);
		__this->set_tab_4(_stringLiteral3452614567);
		List_1_t2422006649 * L_1 = (List_1_t2422006649 *)il2cpp_codegen_object_new(List_1_t2422006649_il2cpp_TypeInfo_var);
		List_1__ctor_m2916482698(L_1, /*hidden argument*/List_1__ctor_m2916482698_RuntimeMethod_var);
		__this->set_converters_9(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::get_MemberMapCache()
extern "C"  Dictionary_2_t1314637808 * TypeCoercionUtility_get_MemberMapCache_m3398197512 (TypeCoercionUtility_t347344375 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_get_MemberMapCache_m3398197512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t1314637808 * V_1 = NULL;
	{
		Dictionary_2_t1314637808 * L_0 = __this->get_memberMapCache_0();
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t1314637808 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Dictionary_2_t1314637808 * L_2 = (Dictionary_2_t1314637808 *)il2cpp_codegen_object_new(Dictionary_2_t1314637808_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3109603953(L_2, /*hidden argument*/Dictionary_2__ctor_m3109603953_RuntimeMethod_var);
		__this->set_memberMapCache_0(L_2);
	}

IL_001b:
	{
		Dictionary_2_t1314637808 * L_3 = __this->get_memberMapCache_0();
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		Dictionary_2_t1314637808 * L_4 = V_1;
		return L_4;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Collections.IDictionary,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  RuntimeObject * TypeCoercionUtility_ProcessTypeHint_m1443685319 (TypeCoercionUtility_t347344375 * __this, RuntimeObject* ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_t3165258040 ** ___memberMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_ProcessTypeHint_m1443685319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	{
		String_t* L_0 = ___typeInfo1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Type_t ** L_3 = ___objectType2;
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)NULL);
		Dictionary_2_t3165258040 ** L_4 = ___memberMap3;
		*((RuntimeObject **)(L_4)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_4), (RuntimeObject *)NULL);
		RuntimeObject* L_5 = ___result0;
		V_2 = L_5;
		goto IL_0043;
	}

IL_0017:
	{
		String_t* L_6 = ___typeInfo1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3605423543, L_6, (bool)0, "JsonFx.Json, Version=1.4.1003.3008, Culture=neutral, PublicKeyToken=null");
		V_0 = L_7;
		Type_t * L_8 = V_0;
		V_3 = (bool)((((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		Type_t ** L_10 = ___objectType2;
		*((RuntimeObject **)(L_10)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_10), (RuntimeObject *)NULL);
		Dictionary_2_t3165258040 ** L_11 = ___memberMap3;
		*((RuntimeObject **)(L_11)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_11), (RuntimeObject *)NULL);
		RuntimeObject* L_12 = ___result0;
		V_2 = L_12;
		goto IL_0043;
	}

IL_0033:
	{
		Type_t ** L_13 = ___objectType2;
		Type_t * L_14 = V_0;
		*((RuntimeObject **)(L_13)) = (RuntimeObject *)L_14;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_13), (RuntimeObject *)L_14);
		Type_t * L_15 = V_0;
		RuntimeObject* L_16 = ___result0;
		Dictionary_2_t3165258040 ** L_17 = ___memberMap3;
		RuntimeObject * L_18 = TypeCoercionUtility_CoerceType_m1299671266(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		goto IL_0043;
	}

IL_0043:
	{
		RuntimeObject * L_19 = V_2;
		return L_19;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  RuntimeObject * TypeCoercionUtility_InstantiateObject_m1943029821 (TypeCoercionUtility_t347344375 * __this, Type_t * ___objectType0, Dictionary_2_t3165258040 ** ___memberMap1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_InstantiateObject_m1943029821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfo_t5769829 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	TargetInvocationException_t4266643902 * V_4 = NULL;
	bool V_5 = false;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B4_0 = 0;
	{
		Type_t * L_0 = ___objectType0;
		bool L_1 = Type_get_IsInterface_m3284996719(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Type_t * L_2 = ___objectType0;
		bool L_3 = Type_get_IsAbstract_m1120089130(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		Type_t * L_4 = ___objectType0;
		bool L_5 = Type_get_IsValueType_m3108065642(L_4, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
	}

IL_001a:
	{
		V_2 = (bool)G_B4_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_7 = ___objectType0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3337732209, L_8, /*hidden argument*/NULL);
		JsonTypeCoercionException_t4151781493 * L_10 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m2620875090(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_0035:
	{
		Type_t * L_11 = ___objectType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_12 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_EmptyTypes_3();
		ConstructorInfo_t5769829 * L_13 = Type_GetConstructor_m2219014380(L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		ConstructorInfo_t5769829 * L_14 = V_0;
		V_3 = (bool)((((RuntimeObject*)(ConstructorInfo_t5769829 *)L_14) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_16 = ___objectType0;
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2086024746, L_17, /*hidden argument*/NULL);
		JsonTypeCoercionException_t4151781493 * L_19 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m2620875090(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19);
	}

IL_0060:
	{
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t5769829 * L_20 = V_0;
		RuntimeObject * L_21 = ConstructorInfo_Invoke_m4089836896(L_20, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL, /*hidden argument*/NULL);
		V_1 = L_21;
		goto IL_00b2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t4266643902_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006d;
		throw e;
	}

CATCH_006d:
	{ // begin catch(System.Reflection.TargetInvocationException)
		{
			V_4 = ((TargetInvocationException_t4266643902 *)__exception_local);
			TargetInvocationException_t4266643902 * L_22 = V_4;
			Exception_t * L_23 = Exception_get_InnerException_m3836775(L_22, /*hidden argument*/NULL);
			V_5 = (bool)((!(((RuntimeObject*)(Exception_t *)L_23) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_24 = V_5;
			if (!L_24)
			{
				goto IL_009a;
			}
		}

IL_0080:
		{
			TargetInvocationException_t4266643902 * L_25 = V_4;
			Exception_t * L_26 = Exception_get_InnerException_m3836775(L_25, /*hidden argument*/NULL);
			String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
			TargetInvocationException_t4266643902 * L_28 = V_4;
			Exception_t * L_29 = Exception_get_InnerException_m3836775(L_28, /*hidden argument*/NULL);
			JsonTypeCoercionException_t4151781493 * L_30 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m1127814158(L_30, L_27, L_29, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_30);
		}

IL_009a:
		{
			Type_t * L_31 = ___objectType0;
			String_t* L_32 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_31);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_33 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1561730681, L_32, /*hidden argument*/NULL);
			TargetInvocationException_t4266643902 * L_34 = V_4;
			JsonTypeCoercionException_t4151781493 * L_35 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m1127814158(L_35, L_33, L_34, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_35);
		}
	} // end catch (depth: 1)

IL_00b2:
	{
		Dictionary_2_t3165258040 ** L_36 = ___memberMap1;
		Type_t * L_37 = ___objectType0;
		Dictionary_2_t3165258040 * L_38 = TypeCoercionUtility_GetMemberMap_m3192982815(__this, L_37, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_36)) = (RuntimeObject *)L_38;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_36), (RuntimeObject *)L_38);
		RuntimeObject * L_39 = V_1;
		V_6 = L_39;
		goto IL_00c0;
	}

IL_00c0:
	{
		RuntimeObject * L_40 = V_6;
		return L_40;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberMap(System.Type)
extern "C"  Dictionary_2_t3165258040 * TypeCoercionUtility_GetMemberMap_m3192982815 (TypeCoercionUtility_t347344375 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_GetMemberMap_m3192982815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t3165258040 * V_1 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IDictionary_t1363984059_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		bool L_3 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = (Dictionary_2_t3165258040 *)NULL;
		goto IL_0025;
	}

IL_001a:
	{
		Type_t * L_5 = ___objectType0;
		Dictionary_2_t3165258040 * L_6 = TypeCoercionUtility_CreateMemberMap_m1180892943(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		Dictionary_2_t3165258040 * L_7 = V_1;
		return L_7;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CreateMemberMap(System.Type)
extern "C"  Dictionary_2_t3165258040 * TypeCoercionUtility_CreateMemberMap_m1180892943 (TypeCoercionUtility_t347344375 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CreateMemberMap_m1180892943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t3165258040 * V_0 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_1 = NULL;
	FieldInfoU5BU5D_t846150980* V_2 = NULL;
	bool V_3 = false;
	Dictionary_2_t3165258040 * V_4 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_5 = NULL;
	int32_t V_6 = 0;
	PropertyInfo_t * V_7 = NULL;
	String_t* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	FieldInfoU5BU5D_t846150980* V_12 = NULL;
	int32_t V_13 = 0;
	FieldInfo_t * V_14 = NULL;
	String_t* V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B6_0 = 0;
	{
		Dictionary_2_t1314637808 * L_0 = TypeCoercionUtility_get_MemberMapCache_m3398197512(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___objectType0;
		bool L_2 = Dictionary_2_TryGetValue_m2344095753(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2344095753_RuntimeMethod_var);
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Dictionary_2_t3165258040 * L_4 = V_0;
		V_4 = L_4;
		goto IL_0143;
	}

IL_001c:
	{
		Dictionary_2_t3165258040 * L_5 = (Dictionary_2_t3165258040 *)il2cpp_codegen_object_new(Dictionary_2_t3165258040_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3244001480(L_5, /*hidden argument*/Dictionary_2__ctor_m3244001480_RuntimeMethod_var);
		V_0 = L_5;
		Type_t * L_6 = ___objectType0;
		PropertyInfoU5BU5D_t1461822886* L_7 = Type_GetProperties_m1538559489(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		PropertyInfoU5BU5D_t1461822886* L_8 = V_1;
		V_5 = L_8;
		V_6 = 0;
		goto IL_00a7;
	}

IL_0032:
	{
		PropertyInfoU5BU5D_t1461822886* L_9 = V_5;
		int32_t L_10 = V_6;
		int32_t L_11 = L_10;
		PropertyInfo_t * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		PropertyInfo_t * L_13 = V_7;
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_13);
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		PropertyInfo_t * L_15 = V_7;
		bool L_16 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_15);
		G_B6_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 1;
	}

IL_0050:
	{
		V_9 = (bool)G_B6_0;
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_00a1;
	}

IL_0059:
	{
		PropertyInfo_t * L_18 = V_7;
		bool L_19 = JsonIgnoreAttribute_IsJsonIgnore_m638233806(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_10 = L_19;
		bool L_20 = V_10;
		if (!L_20)
		{
			goto IL_0069;
		}
	}
	{
		goto IL_00a1;
	}

IL_0069:
	{
		PropertyInfo_t * L_21 = V_7;
		String_t* L_22 = JsonNameAttribute_GetJsonName_m3272941041(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		String_t* L_23 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_11 = L_24;
		bool L_25 = V_11;
		if (!L_25)
		{
			goto IL_0093;
		}
	}
	{
		Dictionary_2_t3165258040 * L_26 = V_0;
		PropertyInfo_t * L_27 = V_7;
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_27);
		PropertyInfo_t * L_29 = V_7;
		Dictionary_2_set_Item_m409945335(L_26, L_28, L_29, /*hidden argument*/Dictionary_2_set_Item_m409945335_RuntimeMethod_var);
		goto IL_00a0;
	}

IL_0093:
	{
		Dictionary_2_t3165258040 * L_30 = V_0;
		String_t* L_31 = V_8;
		PropertyInfo_t * L_32 = V_7;
		Dictionary_2_set_Item_m409945335(L_30, L_31, L_32, /*hidden argument*/Dictionary_2_set_Item_m409945335_RuntimeMethod_var);
	}

IL_00a0:
	{
	}

IL_00a1:
	{
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_34 = V_6;
		PropertyInfoU5BU5D_t1461822886* L_35 = V_5;
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		Type_t * L_36 = ___objectType0;
		FieldInfoU5BU5D_t846150980* L_37 = Type_GetFields_m3709891696(L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		FieldInfoU5BU5D_t846150980* L_38 = V_2;
		V_12 = L_38;
		V_13 = 0;
		goto IL_0128;
	}

IL_00bf:
	{
		FieldInfoU5BU5D_t846150980* L_39 = V_12;
		int32_t L_40 = V_13;
		int32_t L_41 = L_40;
		FieldInfo_t * L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_14 = L_42;
		FieldInfo_t * L_43 = V_14;
		bool L_44 = FieldInfo_get_IsPublic_m3378038140(L_43, /*hidden argument*/NULL);
		V_16 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0122;
	}

IL_00da:
	{
		FieldInfo_t * L_46 = V_14;
		bool L_47 = JsonIgnoreAttribute_IsJsonIgnore_m638233806(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		V_17 = L_47;
		bool L_48 = V_17;
		if (!L_48)
		{
			goto IL_00ea;
		}
	}
	{
		goto IL_0122;
	}

IL_00ea:
	{
		FieldInfo_t * L_49 = V_14;
		String_t* L_50 = JsonNameAttribute_GetJsonName_m3272941041(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		V_15 = L_50;
		String_t* L_51 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_52 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		V_18 = L_52;
		bool L_53 = V_18;
		if (!L_53)
		{
			goto IL_0114;
		}
	}
	{
		Dictionary_2_t3165258040 * L_54 = V_0;
		FieldInfo_t * L_55 = V_14;
		String_t* L_56 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_55);
		FieldInfo_t * L_57 = V_14;
		Dictionary_2_set_Item_m409945335(L_54, L_56, L_57, /*hidden argument*/Dictionary_2_set_Item_m409945335_RuntimeMethod_var);
		goto IL_0121;
	}

IL_0114:
	{
		Dictionary_2_t3165258040 * L_58 = V_0;
		String_t* L_59 = V_15;
		FieldInfo_t * L_60 = V_14;
		Dictionary_2_set_Item_m409945335(L_58, L_59, L_60, /*hidden argument*/Dictionary_2_set_Item_m409945335_RuntimeMethod_var);
	}

IL_0121:
	{
	}

IL_0122:
	{
		int32_t L_61 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0128:
	{
		int32_t L_62 = V_13;
		FieldInfoU5BU5D_t846150980* L_63 = V_12;
		if ((((int32_t)L_62) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_63)->max_length)))))))
		{
			goto IL_00bf;
		}
	}
	{
		Dictionary_2_t1314637808 * L_64 = TypeCoercionUtility_get_MemberMapCache_m3398197512(__this, /*hidden argument*/NULL);
		Type_t * L_65 = ___objectType0;
		Dictionary_2_t3165258040 * L_66 = V_0;
		Dictionary_2_set_Item_m1203754317(L_64, L_65, L_66, /*hidden argument*/Dictionary_2_set_Item_m1203754317_RuntimeMethod_var);
		Dictionary_2_t3165258040 * L_67 = V_0;
		V_4 = L_67;
		goto IL_0143;
	}

IL_0143:
	{
		Dictionary_2_t3165258040 * L_68 = V_4;
		return L_68;
	}
}
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberInfo(System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.String,System.Reflection.MemberInfo&)
extern "C"  Type_t * TypeCoercionUtility_GetMemberInfo_m2445066772 (RuntimeObject * __this /* static, unused */, Dictionary_2_t3165258040 * ___memberMap0, String_t* ___memberName1, MemberInfo_t ** ___memberInfo2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_GetMemberInfo_m2445066772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Type_t * V_2 = NULL;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t3165258040 * L_0 = ___memberMap0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Dictionary_2_t3165258040 * L_1 = ___memberMap0;
		String_t* L_2 = ___memberName1;
		MemberInfo_t ** L_3 = ___memberInfo2;
		bool L_4 = Dictionary_2_TryGetValue_m692485511(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_TryGetValue_m692485511_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		MemberInfo_t ** L_6 = ___memberInfo2;
		V_1 = (bool)((!(((RuntimeObject*)(PropertyInfo_t *)((PropertyInfo_t *)IsInstClass((RuntimeObject*)(*((MemberInfo_t **)L_6)), PropertyInfo_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		MemberInfo_t ** L_8 = ___memberInfo2;
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)(*((MemberInfo_t **)L_8)), PropertyInfo_t_il2cpp_TypeInfo_var)));
		V_2 = L_9;
		goto IL_0058;
	}

IL_0032:
	{
		MemberInfo_t ** L_10 = ___memberInfo2;
		V_3 = (bool)((!(((RuntimeObject*)(FieldInfo_t *)((FieldInfo_t *)IsInstClass((RuntimeObject*)(*((MemberInfo_t **)L_10)), FieldInfo_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		MemberInfo_t ** L_12 = ___memberInfo2;
		Type_t * L_13 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)(*((MemberInfo_t **)L_12)), FieldInfo_t_il2cpp_TypeInfo_var)));
		V_2 = L_13;
		goto IL_0058;
	}

IL_0050:
	{
	}

IL_0051:
	{
		MemberInfo_t ** L_14 = ___memberInfo2;
		*((RuntimeObject **)(L_14)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_14), (RuntimeObject *)NULL);
		V_2 = (Type_t *)NULL;
		goto IL_0058;
	}

IL_0058:
	{
		Type_t * L_15 = V_2;
		return L_15;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::SetMemberValue(System.Object,System.Type,System.Reflection.MemberInfo,System.Object)
extern "C"  void TypeCoercionUtility_SetMemberValue_m1035860574 (TypeCoercionUtility_t347344375 * __this, RuntimeObject * ___result0, Type_t * ___memberType1, MemberInfo_t * ___memberInfo2, RuntimeObject * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_SetMemberValue_m1035860574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		MemberInfo_t * L_0 = ___memberInfo2;
		V_0 = (bool)((!(((RuntimeObject*)(PropertyInfo_t *)((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		MemberInfo_t * L_2 = ___memberInfo2;
		RuntimeObject * L_3 = ___result0;
		Type_t * L_4 = ___memberType1;
		RuntimeObject * L_5 = ___value3;
		RuntimeObject * L_6 = TypeCoercionUtility_CoerceType_m977820981(__this, L_4, L_5, /*hidden argument*/NULL);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(25 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_2, PropertyInfo_t_il2cpp_TypeInfo_var)), L_3, L_6, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		goto IL_004e;
	}

IL_0029:
	{
		MemberInfo_t * L_7 = ___memberInfo2;
		V_1 = (bool)((!(((RuntimeObject*)(FieldInfo_t *)((FieldInfo_t *)IsInstClass((RuntimeObject*)L_7, FieldInfo_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		MemberInfo_t * L_9 = ___memberInfo2;
		RuntimeObject * L_10 = ___result0;
		Type_t * L_11 = ___memberType1;
		RuntimeObject * L_12 = ___value3;
		RuntimeObject * L_13 = TypeCoercionUtility_CoerceType_m977820981(__this, L_11, L_12, /*hidden argument*/NULL);
		FieldInfo_SetValue_m2460171138(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_9, FieldInfo_t_il2cpp_TypeInfo_var)), L_10, L_13, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Object)
extern "C"  RuntimeObject * TypeCoercionUtility_CoerceType_m977820981 (TypeCoercionUtility_t347344375 * __this, Type_t * ___targetType0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CoerceType_m977820981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	TypeConverter_t2249118273 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	RuntimeObject * V_5 = NULL;
	bool V_6 = false;
	TypeU5BU5D_t3940880105* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	FieldInfoU5BU5D_t846150980* V_13 = NULL;
	int32_t V_14 = 0;
	FieldInfo_t * V_15 = NULL;
	String_t* V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	Dictionary_2_t3165258040 * V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	DateTime_t3738529785  V_23;
	memset(&V_23, 0, sizeof(V_23));
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	Uri_t100236324 * V_29 = NULL;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	Exception_t * V_35 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	int32_t G_B30_0 = 0;
	{
		Type_t * L_0 = ___targetType0;
		bool L_1 = TypeCoercionUtility_IsNullable_m2799635471(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = ___value1;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		bool L_4 = __this->get_allowNullValueTypes_1();
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_5 = ___targetType0;
		bool L_6 = Type_get_IsValueType_m3108065642(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		bool L_7 = V_0;
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 0;
	}

IL_0028:
	{
		V_4 = (bool)G_B5_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		Type_t * L_9 = ___targetType0;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1836155974, L_10, /*hidden argument*/NULL);
		JsonTypeCoercionException_t4151781493 * L_12 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m2620875090(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_0045:
	{
		RuntimeObject * L_13 = ___value1;
		V_5 = L_13;
		goto IL_0379;
	}

IL_004d:
	{
		bool L_14 = V_0;
		V_6 = L_14;
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_16 = ___targetType0;
		TypeU5BU5D_t3940880105* L_17 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(86 /* System.Type[] System.Type::GetGenericArguments() */, L_16);
		V_7 = L_17;
		TypeU5BU5D_t3940880105* L_18 = V_7;
		V_8 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length))))) == ((int32_t)1))? 1 : 0);
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_20 = V_7;
		int32_t L_21 = 0;
		Type_t * L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		___targetType0 = L_22;
	}

IL_0072:
	{
	}

IL_0073:
	{
		RuntimeObject * L_23 = ___value1;
		Type_t * L_24 = Object_GetType_m88164663(L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		Type_t * L_25 = ___targetType0;
		Type_t * L_26 = V_1;
		bool L_27 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_25, L_26);
		V_9 = L_27;
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeObject * L_29 = ___value1;
		V_5 = L_29;
		goto IL_0379;
	}

IL_0090:
	{
		Type_t * L_30 = ___targetType0;
		bool L_31 = Type_get_IsEnum_m208091508(L_30, /*hidden argument*/NULL);
		V_10 = L_31;
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_0140;
		}
	}
	{
		RuntimeObject * L_33 = ___value1;
		V_11 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0122;
		}
	}
	{
		Type_t * L_35 = ___targetType0;
		RuntimeObject * L_36 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		bool L_37 = Enum_IsDefined_m1442314461(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_010f;
		}
	}
	{
		Type_t * L_39 = ___targetType0;
		FieldInfoU5BU5D_t846150980* L_40 = Type_GetFields_m3709891696(L_39, /*hidden argument*/NULL);
		V_13 = L_40;
		V_14 = 0;
		goto IL_0106;
	}

IL_00cf:
	{
		FieldInfoU5BU5D_t846150980* L_41 = V_13;
		int32_t L_42 = V_14;
		int32_t L_43 = L_42;
		FieldInfo_t * L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_15 = L_44;
		FieldInfo_t * L_45 = V_15;
		String_t* L_46 = JsonNameAttribute_GetJsonName_m3272941041(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		V_16 = L_46;
		RuntimeObject * L_47 = ___value1;
		String_t* L_48 = V_16;
		bool L_49 = String_Equals_m2270643605(((String_t*)CastclassSealed((RuntimeObject*)L_47, String_t_il2cpp_TypeInfo_var)), L_48, /*hidden argument*/NULL);
		V_17 = L_49;
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_00ff;
		}
	}
	{
		FieldInfo_t * L_51 = V_15;
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_51);
		___value1 = L_52;
		goto IL_010e;
	}

IL_00ff:
	{
		int32_t L_53 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0106:
	{
		int32_t L_54 = V_14;
		FieldInfoU5BU5D_t846150980* L_55 = V_13;
		if ((((int32_t)L_54) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_55)->max_length)))))))
		{
			goto IL_00cf;
		}
	}

IL_010e:
	{
	}

IL_010f:
	{
		Type_t * L_56 = ___targetType0;
		RuntimeObject * L_57 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeObject * L_58 = Enum_Parse_m1871331077(NULL /*static, unused*/, L_56, ((String_t*)CastclassSealed((RuntimeObject*)L_57, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_5 = L_58;
		goto IL_0379;
	}

IL_0122:
	{
		Type_t * L_59 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		Type_t * L_60 = Enum_GetUnderlyingType_m2480312097(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		RuntimeObject * L_61 = ___value1;
		RuntimeObject * L_62 = TypeCoercionUtility_CoerceType_m977820981(__this, L_60, L_61, /*hidden argument*/NULL);
		___value1 = L_62;
		Type_t * L_63 = ___targetType0;
		RuntimeObject * L_64 = ___value1;
		RuntimeObject * L_65 = Enum_ToObject_m1628250250(NULL /*static, unused*/, L_63, L_64, /*hidden argument*/NULL);
		V_5 = L_65;
		goto IL_0379;
	}

IL_0140:
	{
		RuntimeObject * L_66 = ___value1;
		V_18 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_66, IDictionary_t1363984059_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_67 = V_18;
		if (!L_67)
		{
			goto IL_0166;
		}
	}
	{
		Type_t * L_68 = ___targetType0;
		RuntimeObject * L_69 = ___value1;
		RuntimeObject * L_70 = TypeCoercionUtility_CoerceType_m1299671266(__this, L_68, ((RuntimeObject*)Castclass((RuntimeObject*)L_69, IDictionary_t1363984059_il2cpp_TypeInfo_var)), (&V_19), /*hidden argument*/NULL);
		V_5 = L_70;
		goto IL_0379;
	}

IL_0166:
	{
		RuntimeTypeHandle_t3027515415  L_71 = { reinterpret_cast<intptr_t> (IEnumerable_t1941168011_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_72 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		Type_t * L_73 = ___targetType0;
		bool L_74 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_72, L_73);
		if (!L_74)
		{
			goto IL_018a;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_75 = { reinterpret_cast<intptr_t> (IEnumerable_t1941168011_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_76 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		Type_t * L_77 = V_1;
		bool L_78 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_76, L_77);
		G_B30_0 = ((int32_t)(L_78));
		goto IL_018b;
	}

IL_018a:
	{
		G_B30_0 = 0;
	}

IL_018b:
	{
		V_20 = (bool)G_B30_0;
		bool L_79 = V_20;
		if (!L_79)
		{
			goto IL_01a7;
		}
	}
	{
		Type_t * L_80 = ___targetType0;
		Type_t * L_81 = V_1;
		RuntimeObject * L_82 = ___value1;
		RuntimeObject * L_83 = TypeCoercionUtility_CoerceList_m2158031047(__this, L_80, L_81, ((RuntimeObject*)Castclass((RuntimeObject*)L_82, IEnumerable_t1941168011_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_5 = L_83;
		goto IL_0379;
	}

IL_01a7:
	{
		RuntimeObject * L_84 = ___value1;
		V_21 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_84, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_85 = V_21;
		if (!L_85)
		{
			goto IL_02cd;
		}
	}
	{
		Type_t * L_86 = ___targetType0;
		RuntimeTypeHandle_t3027515415  L_87 = { reinterpret_cast<intptr_t> (DateTime_t3738529785_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_88 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		V_22 = (bool)((((RuntimeObject*)(Type_t *)L_86) == ((RuntimeObject*)(Type_t *)L_88))? 1 : 0);
		bool L_89 = V_22;
		if (!L_89)
		{
			goto IL_0200;
		}
	}
	{
		RuntimeObject * L_90 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t2405853701_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t2405853701 * L_91 = DateTimeFormatInfo_get_InvariantInfo_m2329875772(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_92 = DateTime_TryParse_m1691789376(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_90, String_t_il2cpp_TypeInfo_var)), L_91, ((int32_t)143), (&V_23), /*hidden argument*/NULL);
		V_24 = L_92;
		bool L_93 = V_24;
		if (!L_93)
		{
			goto IL_01fa;
		}
	}
	{
		DateTime_t3738529785  L_94 = V_23;
		DateTime_t3738529785  L_95 = L_94;
		RuntimeObject * L_96 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_95);
		V_5 = L_96;
		goto IL_0379;
	}

IL_01fa:
	{
		goto IL_02ca;
	}

IL_0200:
	{
		Type_t * L_97 = ___targetType0;
		RuntimeTypeHandle_t3027515415  L_98 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_99 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_98, /*hidden argument*/NULL);
		V_25 = (bool)((((RuntimeObject*)(Type_t *)L_97) == ((RuntimeObject*)(Type_t *)L_99))? 1 : 0);
		bool L_100 = V_25;
		if (!L_100)
		{
			goto IL_022b;
		}
	}
	{
		RuntimeObject * L_101 = ___value1;
		Guid_t  L_102;
		memset(&L_102, 0, sizeof(L_102));
		Guid__ctor_m2423264394((&L_102), ((String_t*)CastclassSealed((RuntimeObject*)L_101, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Guid_t  L_103 = L_102;
		RuntimeObject * L_104 = Box(Guid_t_il2cpp_TypeInfo_var, &L_103);
		V_5 = L_104;
		goto IL_0379;
	}

IL_022b:
	{
		Type_t * L_105 = ___targetType0;
		RuntimeTypeHandle_t3027515415  L_106 = { reinterpret_cast<intptr_t> (Char_t3634460470_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_107 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_106, /*hidden argument*/NULL);
		V_26 = (bool)((((RuntimeObject*)(Type_t *)L_105) == ((RuntimeObject*)(Type_t *)L_107))? 1 : 0);
		bool L_108 = V_26;
		if (!L_108)
		{
			goto IL_026f;
		}
	}
	{
		RuntimeObject * L_109 = ___value1;
		int32_t L_110 = String_get_Length_m3847582255(((String_t*)CastclassSealed((RuntimeObject*)L_109, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_27 = (bool)((((int32_t)L_110) == ((int32_t)1))? 1 : 0);
		bool L_111 = V_27;
		if (!L_111)
		{
			goto IL_026c;
		}
	}
	{
		RuntimeObject * L_112 = ___value1;
		Il2CppChar L_113 = String_get_Chars_m2986988803(((String_t*)CastclassSealed((RuntimeObject*)L_112, String_t_il2cpp_TypeInfo_var)), 0, /*hidden argument*/NULL);
		Il2CppChar L_114 = L_113;
		RuntimeObject * L_115 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_114);
		V_5 = L_115;
		goto IL_0379;
	}

IL_026c:
	{
		goto IL_02ca;
	}

IL_026f:
	{
		Type_t * L_116 = ___targetType0;
		RuntimeTypeHandle_t3027515415  L_117 = { reinterpret_cast<intptr_t> (Uri_t100236324_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_118 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_117, /*hidden argument*/NULL);
		V_28 = (bool)((((RuntimeObject*)(Type_t *)L_116) == ((RuntimeObject*)(Type_t *)L_118))? 1 : 0);
		bool L_119 = V_28;
		if (!L_119)
		{
			goto IL_02a4;
		}
	}
	{
		RuntimeObject * L_120 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_121 = Uri_TryCreate_m385949523(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_120, String_t_il2cpp_TypeInfo_var)), 0, (&V_29), /*hidden argument*/NULL);
		V_30 = L_121;
		bool L_122 = V_30;
		if (!L_122)
		{
			goto IL_02a1;
		}
	}
	{
		Uri_t100236324 * L_123 = V_29;
		V_5 = L_123;
		goto IL_0379;
	}

IL_02a1:
	{
		goto IL_02ca;
	}

IL_02a4:
	{
		Type_t * L_124 = ___targetType0;
		RuntimeTypeHandle_t3027515415  L_125 = { reinterpret_cast<intptr_t> (Version_t3456873960_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_126 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_125, /*hidden argument*/NULL);
		V_31 = (bool)((((RuntimeObject*)(Type_t *)L_124) == ((RuntimeObject*)(Type_t *)L_126))? 1 : 0);
		bool L_127 = V_31;
		if (!L_127)
		{
			goto IL_02ca;
		}
	}
	{
		RuntimeObject * L_128 = ___value1;
		Version_t3456873960 * L_129 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m1394137037(L_129, ((String_t*)CastclassSealed((RuntimeObject*)L_128, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_5 = L_129;
		goto IL_0379;
	}

IL_02ca:
	{
		goto IL_0305;
	}

IL_02cd:
	{
		Type_t * L_130 = ___targetType0;
		RuntimeTypeHandle_t3027515415  L_131 = { reinterpret_cast<intptr_t> (TimeSpan_t881159249_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_132 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_131, /*hidden argument*/NULL);
		V_32 = (bool)((((RuntimeObject*)(Type_t *)L_130) == ((RuntimeObject*)(Type_t *)L_132))? 1 : 0);
		bool L_133 = V_32;
		if (!L_133)
		{
			goto IL_0305;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_134 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_135 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_134, /*hidden argument*/NULL);
		RuntimeObject * L_136 = ___value1;
		RuntimeObject * L_137 = TypeCoercionUtility_CoerceType_m977820981(__this, L_135, L_136, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_138;
		memset(&L_138, 0, sizeof(L_138));
		TimeSpan__ctor_m1896986612((&L_138), ((*(int64_t*)((int64_t*)UnBox(L_137, Int64_t3736567304_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_139 = L_138;
		RuntimeObject * L_140 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_139);
		V_5 = L_140;
		goto IL_0379;
	}

IL_0305:
	{
		Type_t * L_141 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t3066613587_il2cpp_TypeInfo_var);
		TypeConverter_t2249118273 * L_142 = TypeDescriptor_GetConverter_m3748618295(NULL /*static, unused*/, L_141, /*hidden argument*/NULL);
		V_2 = L_142;
		TypeConverter_t2249118273 * L_143 = V_2;
		Type_t * L_144 = V_1;
		bool L_145 = TypeConverter_CanConvertFrom_m322337685(L_143, L_144, /*hidden argument*/NULL);
		V_33 = L_145;
		bool L_146 = V_33;
		if (!L_146)
		{
			goto IL_0325;
		}
	}
	{
		TypeConverter_t2249118273 * L_147 = V_2;
		RuntimeObject * L_148 = ___value1;
		RuntimeObject * L_149 = TypeConverter_ConvertFrom_m415439298(L_147, L_148, /*hidden argument*/NULL);
		V_5 = L_149;
		goto IL_0379;
	}

IL_0325:
	{
		Type_t * L_150 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t3066613587_il2cpp_TypeInfo_var);
		TypeConverter_t2249118273 * L_151 = TypeDescriptor_GetConverter_m3748618295(NULL /*static, unused*/, L_150, /*hidden argument*/NULL);
		V_2 = L_151;
		TypeConverter_t2249118273 * L_152 = V_2;
		Type_t * L_153 = ___targetType0;
		bool L_154 = TypeConverter_CanConvertTo_m183459680(L_152, L_153, /*hidden argument*/NULL);
		V_34 = L_154;
		bool L_155 = V_34;
		if (!L_155)
		{
			goto IL_0346;
		}
	}
	{
		TypeConverter_t2249118273 * L_156 = V_2;
		RuntimeObject * L_157 = ___value1;
		Type_t * L_158 = ___targetType0;
		RuntimeObject * L_159 = TypeConverter_ConvertTo_m3877504043(L_156, L_157, L_158, /*hidden argument*/NULL);
		V_5 = L_159;
		goto IL_0379;
	}

IL_0346:
	{
	}

IL_0347:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_160 = ___value1;
		Type_t * L_161 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_162 = Convert_ChangeType_m739676612(NULL /*static, unused*/, L_160, L_161, /*hidden argument*/NULL);
		V_5 = L_162;
		goto IL_0379;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0353;
		throw e;
	}

CATCH_0353:
	{ // begin catch(System.Exception)
		V_35 = ((Exception_t *)__exception_local);
		RuntimeObject * L_163 = ___value1;
		Type_t * L_164 = Object_GetType_m88164663(L_163, /*hidden argument*/NULL);
		String_t* L_165 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_164);
		Type_t * L_166 = ___targetType0;
		String_t* L_167 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_166);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_168 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral79253704, L_165, L_167, /*hidden argument*/NULL);
		Exception_t * L_169 = V_35;
		JsonTypeCoercionException_t4151781493 * L_170 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m1127814158(L_170, L_168, L_169, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_170);
	} // end catch (depth: 1)

IL_0379:
	{
		RuntimeObject * L_171 = V_5;
		return L_171;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Collections.IDictionary,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  RuntimeObject * TypeCoercionUtility_CoerceType_m1299671266 (TypeCoercionUtility_t347344375 * __this, Type_t * ___targetType0, RuntimeObject* ___value1, Dictionary_2_t3165258040 ** ___memberMap2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CoerceType_m1299671266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	MemberInfo_t * V_4 = NULL;
	Type_t * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___targetType0;
		Dictionary_2_t3165258040 ** L_1 = ___memberMap2;
		RuntimeObject * L_2 = TypeCoercionUtility_InstantiateObject_m1943029821(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Dictionary_2_t3165258040 ** L_3 = ___memberMap2;
		V_1 = (bool)((!(((RuntimeObject*)(Dictionary_2_t3165258040 *)(*((Dictionary_2_t3165258040 **)L_3))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject* L_5 = ___value1;
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0023:
		{
			RuntimeObject* L_8 = V_2;
			RuntimeObject * L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			V_3 = L_9;
			Dictionary_2_t3165258040 ** L_10 = ___memberMap2;
			RuntimeObject * L_11 = V_3;
			Type_t * L_12 = TypeCoercionUtility_GetMemberInfo_m2445066772(NULL /*static, unused*/, (*((Dictionary_2_t3165258040 **)L_10)), ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var)), (&V_4), /*hidden argument*/NULL);
			V_5 = L_12;
			RuntimeObject * L_13 = V_0;
			Type_t * L_14 = V_5;
			MemberInfo_t * L_15 = V_4;
			RuntimeObject* L_16 = ___value1;
			RuntimeObject * L_17 = V_3;
			RuntimeObject * L_18 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_16, L_17);
			TypeCoercionUtility_SetMemberValue_m1035860574(__this, L_13, L_14, L_15, L_18, /*hidden argument*/NULL);
		}

IL_0050:
		{
			RuntimeObject* L_19 = V_2;
			bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_0023;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_005a);
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
			RuntimeObject* L_21 = V_2;
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_22 = V_6;
			if (!L_22)
			{
				goto IL_006e;
			}
		}

IL_0066:
		{
			RuntimeObject* L_23 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
	}

IL_0070:
	{
		RuntimeObject * L_24 = V_0;
		V_7 = L_24;
		goto IL_0075;
	}

IL_0075:
	{
		RuntimeObject * L_25 = V_7;
		return L_25;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceList(System.Type,System.Type,System.Collections.IEnumerable)
extern "C"  RuntimeObject * TypeCoercionUtility_CoerceList_m2158031047 (TypeCoercionUtility_t347344375 * __this, Type_t * ___targetType0, Type_t * ___arrayType1, RuntimeObject* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CoerceList_m2158031047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfoU5BU5D_t881249896* V_0 = NULL;
	ConstructorInfo_t5769829 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	ParameterInfoU5BU5D_t390618515* V_4 = NULL;
	Type_t * V_5 = NULL;
	bool V_6 = false;
	RuntimeObject * V_7 = NULL;
	ConstructorInfoU5BU5D_t881249896* V_8 = NULL;
	int32_t V_9 = 0;
	ConstructorInfo_t5769829 * V_10 = NULL;
	ParameterInfoU5BU5D_t390618515* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	TargetInvocationException_t4266643902 * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	TargetInvocationException_t4266643902 * V_18 = NULL;
	bool V_19 = false;
	bool V_20 = false;
	RuntimeObject* V_21 = NULL;
	RuntimeObject * V_22 = NULL;
	TargetInvocationException_t4266643902 * V_23 = NULL;
	bool V_24 = false;
	RuntimeObject* V_25 = NULL;
	Exception_t * V_26 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B8_0 = 0;
	ParameterInfoU5BU5D_t390618515* G_B25_0 = NULL;
	Type_t * G_B29_0 = NULL;
	int32_t G_B32_0 = 0;
	ParameterInfoU5BU5D_t390618515* G_B42_0 = NULL;
	Type_t * G_B46_0 = NULL;
	{
		Type_t * L_0 = ___targetType0;
		bool L_1 = Type_get_IsArray_m2591212821(L_0, /*hidden argument*/NULL);
		V_6 = L_1;
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_3 = ___targetType0;
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_3);
		RuntimeObject* L_5 = ___value2;
		RuntimeArray * L_6 = TypeCoercionUtility_CoerceArray_m867967496(__this, L_4, L_5, /*hidden argument*/NULL);
		V_7 = L_6;
		goto IL_02d9;
	}

IL_0022:
	{
		Type_t * L_7 = ___targetType0;
		ConstructorInfoU5BU5D_t881249896* L_8 = Type_GetConstructors_m1172352582(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		V_1 = (ConstructorInfo_t5769829 *)NULL;
		ConstructorInfoU5BU5D_t881249896* L_9 = V_0;
		V_8 = L_9;
		V_9 = 0;
		goto IL_009b;
	}

IL_0034:
	{
		ConstructorInfoU5BU5D_t881249896* L_10 = V_8;
		int32_t L_11 = V_9;
		int32_t L_12 = L_11;
		ConstructorInfo_t5769829 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_10 = L_13;
		ConstructorInfo_t5769829 * L_14 = V_10;
		ParameterInfoU5BU5D_t390618515* L_15 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_14);
		V_11 = L_15;
		ParameterInfoU5BU5D_t390618515* L_16 = V_11;
		V_12 = (bool)((((int32_t)(((RuntimeArray *)L_16)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_12;
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		ConstructorInfo_t5769829 * L_18 = V_10;
		V_1 = L_18;
		goto IL_0095;
	}

IL_0057:
	{
		ParameterInfoU5BU5D_t390618515* L_19 = V_11;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		ParameterInfoU5BU5D_t390618515* L_20 = V_11;
		int32_t L_21 = 0;
		ParameterInfo_t1861056598 * L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Type_t * L_23 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_22);
		Type_t * L_24 = ___arrayType1;
		bool L_25 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_23, L_24);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_0070;
	}

IL_006f:
	{
		G_B8_0 = 0;
	}

IL_0070:
	{
		V_13 = (bool)G_B8_0;
		bool L_26 = V_13;
		if (!L_26)
		{
			goto IL_0094;
		}
	}
	{
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t5769829 * L_27 = V_10;
		ObjectU5BU5D_t2843939325* L_28 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_29 = ___value2;
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		RuntimeObject * L_30 = ConstructorInfo_Invoke_m4089836896(L_27, L_28, /*hidden argument*/NULL);
		V_7 = L_30;
		goto IL_02d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0090;
		throw e;
	}

CATCH_0090:
	{ // begin catch(System.Object)
		goto IL_0095;
	} // end catch (depth: 1)

IL_0094:
	{
	}

IL_0095:
	{
		int32_t L_31 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_32 = V_9;
		ConstructorInfoU5BU5D_t881249896* L_33 = V_8;
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		ConstructorInfo_t5769829 * L_34 = V_1;
		V_14 = (bool)((((RuntimeObject*)(ConstructorInfo_t5769829 *)L_34) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_35 = V_14;
		if (!L_35)
		{
			goto IL_00c4;
		}
	}
	{
		Type_t * L_36 = ___targetType0;
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2086024746, L_37, /*hidden argument*/NULL);
		JsonTypeCoercionException_t4151781493 * L_39 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m2620875090(L_39, L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39);
	}

IL_00c4:
	{
	}

IL_00c5:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t5769829 * L_40 = V_1;
		RuntimeObject * L_41 = ConstructorInfo_Invoke_m4089836896(L_40, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL, /*hidden argument*/NULL);
		V_2 = L_41;
		goto IL_0116;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t4266643902_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00d1;
		throw e;
	}

CATCH_00d1:
	{ // begin catch(System.Reflection.TargetInvocationException)
		{
			V_15 = ((TargetInvocationException_t4266643902 *)__exception_local);
			TargetInvocationException_t4266643902 * L_42 = V_15;
			Exception_t * L_43 = Exception_get_InnerException_m3836775(L_42, /*hidden argument*/NULL);
			V_16 = (bool)((!(((RuntimeObject*)(Exception_t *)L_43) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_44 = V_16;
			if (!L_44)
			{
				goto IL_00fe;
			}
		}

IL_00e4:
		{
			TargetInvocationException_t4266643902 * L_45 = V_15;
			Exception_t * L_46 = Exception_get_InnerException_m3836775(L_45, /*hidden argument*/NULL);
			String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_46);
			TargetInvocationException_t4266643902 * L_48 = V_15;
			Exception_t * L_49 = Exception_get_InnerException_m3836775(L_48, /*hidden argument*/NULL);
			JsonTypeCoercionException_t4151781493 * L_50 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m1127814158(L_50, L_47, L_49, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_50);
		}

IL_00fe:
		{
			Type_t * L_51 = ___targetType0;
			String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_51);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_53 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1561730681, L_52, /*hidden argument*/NULL);
			TargetInvocationException_t4266643902 * L_54 = V_15;
			JsonTypeCoercionException_t4151781493 * L_55 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m1127814158(L_55, L_53, L_54, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_55);
		}
	} // end catch (depth: 1)

IL_0116:
	{
		Type_t * L_56 = ___targetType0;
		MethodInfo_t * L_57 = Type_GetMethod_m2019726356(L_56, _stringLiteral2719708339, /*hidden argument*/NULL);
		V_3 = L_57;
		MethodInfo_t * L_58 = V_3;
		if (!L_58)
		{
			goto IL_012d;
		}
	}
	{
		MethodInfo_t * L_59 = V_3;
		ParameterInfoU5BU5D_t390618515* L_60 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_59);
		G_B25_0 = L_60;
		goto IL_012e;
	}

IL_012d:
	{
		G_B25_0 = ((ParameterInfoU5BU5D_t390618515*)(NULL));
	}

IL_012e:
	{
		V_4 = G_B25_0;
		ParameterInfoU5BU5D_t390618515* L_61 = V_4;
		if (!L_61)
		{
			goto IL_0146;
		}
	}
	{
		ParameterInfoU5BU5D_t390618515* L_62 = V_4;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_62)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_0146;
		}
	}
	{
		ParameterInfoU5BU5D_t390618515* L_63 = V_4;
		int32_t L_64 = 0;
		ParameterInfo_t1861056598 * L_65 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		Type_t * L_66 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_65);
		G_B29_0 = L_66;
		goto IL_0147;
	}

IL_0146:
	{
		G_B29_0 = ((Type_t *)(NULL));
	}

IL_0147:
	{
		V_5 = G_B29_0;
		Type_t * L_67 = V_5;
		if (!L_67)
		{
			goto IL_0157;
		}
	}
	{
		Type_t * L_68 = V_5;
		Type_t * L_69 = ___arrayType1;
		bool L_70 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_68, L_69);
		G_B32_0 = ((int32_t)(L_70));
		goto IL_0158;
	}

IL_0157:
	{
		G_B32_0 = 0;
	}

IL_0158:
	{
		V_17 = (bool)G_B32_0;
		bool L_71 = V_17;
		if (!L_71)
		{
			goto IL_01c2;
		}
	}
	{
	}

IL_015f:
	try
	{ // begin try (depth: 1)
		MethodInfo_t * L_72 = V_3;
		RuntimeObject * L_73 = V_2;
		ObjectU5BU5D_t2843939325* L_74 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject* L_75 = ___value2;
		ArrayElementTypeCheck (L_74, L_75);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_75);
		MethodBase_Invoke_m1776411915(L_72, L_73, L_74, /*hidden argument*/NULL);
		goto IL_01ba;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t4266643902_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0175;
		throw e;
	}

CATCH_0175:
	{ // begin catch(System.Reflection.TargetInvocationException)
		{
			V_18 = ((TargetInvocationException_t4266643902 *)__exception_local);
			TargetInvocationException_t4266643902 * L_76 = V_18;
			Exception_t * L_77 = Exception_get_InnerException_m3836775(L_76, /*hidden argument*/NULL);
			V_19 = (bool)((!(((RuntimeObject*)(Exception_t *)L_77) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_78 = V_19;
			if (!L_78)
			{
				goto IL_01a2;
			}
		}

IL_0188:
		{
			TargetInvocationException_t4266643902 * L_79 = V_18;
			Exception_t * L_80 = Exception_get_InnerException_m3836775(L_79, /*hidden argument*/NULL);
			String_t* L_81 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_80);
			TargetInvocationException_t4266643902 * L_82 = V_18;
			Exception_t * L_83 = Exception_get_InnerException_m3836775(L_82, /*hidden argument*/NULL);
			JsonTypeCoercionException_t4151781493 * L_84 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m1127814158(L_84, L_81, L_83, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_84);
		}

IL_01a2:
		{
			Type_t * L_85 = ___targetType0;
			String_t* L_86 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_85);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_87 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2296873508, L_86, /*hidden argument*/NULL);
			TargetInvocationException_t4266643902 * L_88 = V_18;
			JsonTypeCoercionException_t4151781493 * L_89 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m1127814158(L_89, L_87, L_88, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_89);
		}
	} // end catch (depth: 1)

IL_01ba:
	{
		RuntimeObject * L_90 = V_2;
		V_7 = L_90;
		goto IL_02d9;
	}

IL_01c2:
	{
		Type_t * L_91 = ___targetType0;
		MethodInfo_t * L_92 = Type_GetMethod_m2019726356(L_91, _stringLiteral3265744085, /*hidden argument*/NULL);
		V_3 = L_92;
		MethodInfo_t * L_93 = V_3;
		if (!L_93)
		{
			goto IL_01da;
		}
	}
	{
		MethodInfo_t * L_94 = V_3;
		ParameterInfoU5BU5D_t390618515* L_95 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_94);
		G_B42_0 = L_95;
		goto IL_01db;
	}

IL_01da:
	{
		G_B42_0 = ((ParameterInfoU5BU5D_t390618515*)(NULL));
	}

IL_01db:
	{
		V_4 = G_B42_0;
		ParameterInfoU5BU5D_t390618515* L_96 = V_4;
		if (!L_96)
		{
			goto IL_01f3;
		}
	}
	{
		ParameterInfoU5BU5D_t390618515* L_97 = V_4;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_97)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_01f3;
		}
	}
	{
		ParameterInfoU5BU5D_t390618515* L_98 = V_4;
		int32_t L_99 = 0;
		ParameterInfo_t1861056598 * L_100 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		Type_t * L_101 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_100);
		G_B46_0 = L_101;
		goto IL_01f4;
	}

IL_01f3:
	{
		G_B46_0 = ((Type_t *)(NULL));
	}

IL_01f4:
	{
		V_5 = G_B46_0;
		Type_t * L_102 = V_5;
		V_20 = (bool)((!(((RuntimeObject*)(Type_t *)L_102) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_103 = V_20;
		if (!L_103)
		{
			goto IL_02a5;
		}
	}
	{
		RuntimeObject* L_104 = ___value2;
		RuntimeObject* L_105 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_104);
		V_21 = L_105;
	}

IL_020e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_027f;
		}

IL_0210:
		{
			RuntimeObject* L_106 = V_21;
			RuntimeObject * L_107 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_106);
			V_22 = L_107;
		}

IL_021a:
		try
		{ // begin try (depth: 2)
			MethodInfo_t * L_108 = V_3;
			RuntimeObject * L_109 = V_2;
			ObjectU5BU5D_t2843939325* L_110 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
			Type_t * L_111 = V_5;
			RuntimeObject * L_112 = V_22;
			RuntimeObject * L_113 = TypeCoercionUtility_CoerceType_m977820981(__this, L_111, L_112, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_110, L_113);
			(L_110)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_113);
			MethodBase_Invoke_m1776411915(L_108, L_109, L_110, /*hidden argument*/NULL);
			goto IL_027e;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t4266643902_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0239;
			throw e;
		}

CATCH_0239:
		{ // begin catch(System.Reflection.TargetInvocationException)
			{
				V_23 = ((TargetInvocationException_t4266643902 *)__exception_local);
				TargetInvocationException_t4266643902 * L_114 = V_23;
				Exception_t * L_115 = Exception_get_InnerException_m3836775(L_114, /*hidden argument*/NULL);
				V_24 = (bool)((!(((RuntimeObject*)(Exception_t *)L_115) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				bool L_116 = V_24;
				if (!L_116)
				{
					goto IL_0266;
				}
			}

IL_024c:
			{
				TargetInvocationException_t4266643902 * L_117 = V_23;
				Exception_t * L_118 = Exception_get_InnerException_m3836775(L_117, /*hidden argument*/NULL);
				String_t* L_119 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_118);
				TargetInvocationException_t4266643902 * L_120 = V_23;
				Exception_t * L_121 = Exception_get_InnerException_m3836775(L_120, /*hidden argument*/NULL);
				JsonTypeCoercionException_t4151781493 * L_122 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
				JsonTypeCoercionException__ctor_m1127814158(L_122, L_119, L_121, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_122);
			}

IL_0266:
			{
				Type_t * L_123 = ___targetType0;
				String_t* L_124 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_123);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_125 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3308199957, L_124, /*hidden argument*/NULL);
				TargetInvocationException_t4266643902 * L_126 = V_23;
				JsonTypeCoercionException_t4151781493 * L_127 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
				JsonTypeCoercionException__ctor_m1127814158(L_127, L_125, L_126, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_127);
			}
		} // end catch (depth: 2)

IL_027e:
		{
		}

IL_027f:
		{
			RuntimeObject* L_128 = V_21;
			bool L_129 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_128);
			if (L_129)
			{
				goto IL_0210;
			}
		}

IL_0288:
		{
			IL2CPP_LEAVE(0x2A0, FINALLY_028a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_028a;
	}

FINALLY_028a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_130 = V_21;
			V_25 = ((RuntimeObject*)IsInst((RuntimeObject*)L_130, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_131 = V_25;
			if (!L_131)
			{
				goto IL_029f;
			}
		}

IL_0297:
		{
			RuntimeObject* L_132 = V_25;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_132);
		}

IL_029f:
		{
			IL2CPP_END_FINALLY(650)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(650)
	{
		IL2CPP_JUMP_TBL(0x2A0, IL_02a0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02a0:
	{
		RuntimeObject * L_133 = V_2;
		V_7 = L_133;
		goto IL_02d9;
	}

IL_02a5:
	{
	}

IL_02a7:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_134 = ___value2;
		Type_t * L_135 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_136 = Convert_ChangeType_m739676612(NULL /*static, unused*/, L_134, L_135, /*hidden argument*/NULL);
		V_7 = L_136;
		goto IL_02d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_02b3;
		throw e;
	}

CATCH_02b3:
	{ // begin catch(System.Exception)
		V_26 = ((Exception_t *)__exception_local);
		RuntimeObject* L_137 = ___value2;
		Type_t * L_138 = Object_GetType_m88164663(L_137, /*hidden argument*/NULL);
		String_t* L_139 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_138);
		Type_t * L_140 = ___targetType0;
		String_t* L_141 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_140);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_142 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral79253704, L_139, L_141, /*hidden argument*/NULL);
		Exception_t * L_143 = V_26;
		JsonTypeCoercionException_t4151781493 * L_144 = (JsonTypeCoercionException_t4151781493 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t4151781493_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m1127814158(L_144, L_142, L_143, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144);
	} // end catch (depth: 1)

IL_02d9:
	{
		RuntimeObject * L_145 = V_7;
		return L_145;
	}
}
// System.Array Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceArray(System.Type,System.Collections.IEnumerable)
extern "C"  RuntimeArray * TypeCoercionUtility_CoerceArray_m867967496 (TypeCoercionUtility_t347344375 * __this, Type_t * ___elementType0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CoerceArray_m867967496_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeArray * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___value1;
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0011:
		{
			RuntimeObject* L_3 = V_1;
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			ArrayList_t2718874744 * L_5 = V_0;
			Type_t * L_6 = ___elementType0;
			RuntimeObject * L_7 = V_2;
			RuntimeObject * L_8 = TypeCoercionUtility_CoerceType_m977820981(__this, L_6, L_7, /*hidden argument*/NULL);
			VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_8);
		}

IL_0029:
		{
			RuntimeObject* L_9 = V_1;
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0011;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_3;
			if (!L_12)
			{
				goto IL_0044;
			}
		}

IL_003d:
		{
			RuntimeObject* L_13 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(51)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
	{
		ArrayList_t2718874744 * L_14 = V_0;
		Type_t * L_15 = ___elementType0;
		RuntimeArray * L_16 = VirtFuncInvoker1< RuntimeArray *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_14, L_15);
		V_4 = L_16;
		goto IL_0050;
	}

IL_0050:
	{
		RuntimeArray * L_17 = V_4;
		return L_17;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::IsNullable(System.Type)
extern "C"  bool TypeCoercionUtility_IsNullable_m2799635471 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_IsNullable_m2799635471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___type0;
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(90 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (Nullable_1_t3772285925_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Type_t * L_4 = ___type0;
		Type_t * L_5 = VirtFuncInvoker0< Type_t * >::Invoke(89 /* System.Type System.Type::GetGenericTypeDefinition() */, L_4);
		G_B3_0 = ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::.ctor()
extern "C"  void TypeCoercionUtility__ctor_m2083287854 (TypeCoercionUtility_t347344375 * __this, const RuntimeMethod* method)
{
	{
		__this->set_allowNullValueTypes_1((bool)1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
