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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// NUnit.Framework.Internal.TestExecutionContext/<>c
struct U3CU3Ec_t4110531043;
// System.String
struct String_t;
// NUnit.Framework.Constraints.ValueFormatter
struct ValueFormatter_t4100324616;
// NUnit.Framework.Internal.TestFilter
struct TestFilter_t2701680237;
// NUnit.Framework.Interfaces.ITest
struct ITest_t3354224835;
// NUnit.Framework.Interfaces.TNode
struct TNode_t3946371078;
// NUnit.Framework.Internal.TestFilter/EmptyFilter
struct EmptyFilter_t3371835522;
// NUnit.Framework.Internal.TestFixture
struct TestFixture_t1563123309;
// NUnit.Framework.Interfaces.ITypeInfo
struct ITypeInfo_t293606473;
// NUnit.Framework.Internal.TestSuite
struct TestSuite_t407774568;
// System.Type
struct Type_t;
// NUnit.Framework.Internal.TestListener
struct TestListener_t3563649619;
// NUnit.Framework.Interfaces.ITestResult
struct ITestResult_t1167833247;
// NUnit.Framework.Interfaces.TestOutput
struct TestOutput_t3408727266;
// NUnit.Framework.Interfaces.ITestListener
struct ITestListener_t1492054017;
// NUnit.Framework.Internal.TestMethod
struct TestMethod_t1085459043;
// NUnit.Framework.Interfaces.IMethodInfo
struct IMethodInfo_t4206102174;
// NUnit.Framework.Internal.Test
struct Test_t3432848304;
// NUnit.Framework.Internal.TestCaseParameters
struct TestCaseParameters_t2908894354;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// NUnit.Framework.Internal.TestParameters
struct TestParameters_t1855520773;
// NUnit.Framework.Internal.TestResult
struct TestResult_t921768966;
// NUnit.Framework.Internal.TestCaseResult
struct TestCaseResult_t777036217;
// System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest>
struct IList_1_t874577322;
// NUnit.Framework.Internal.TestNameGenerator
struct TestNameGenerator_t2179848069;
// System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment>
struct List_1_t171055532;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// NUnit.Framework.Internal.TestNameGenerator/NameFragment
struct NameFragment_t2993948086;
// NUnit.Framework.Internal.TestNameGenerator/FixedTextFragment
struct FixedTextFragment_t3279578530;
// NUnit.Framework.Internal.TestNameGenerator/MethodNameFragment
struct MethodNameFragment_t1693502444;
// NUnit.Framework.Internal.TestNameGenerator/TestIDFragment
struct TestIDFragment_t123621352;
// NUnit.Framework.Internal.TestNameGenerator/NamespaceFragment
struct NamespaceFragment_t1263772683;
// NUnit.Framework.Internal.TestNameGenerator/ClassNameFragment
struct ClassNameFragment_t819157190;
// NUnit.Framework.Internal.TestNameGenerator/ClassFullNameFragment
struct ClassFullNameFragment_t2403317993;
// NUnit.Framework.Internal.TestNameGenerator/MethodFullNameFragment
struct MethodFullNameFragment_t3487880812;
// NUnit.Framework.Internal.TestNameGenerator/ArgListFragment
struct ArgListFragment_t1470563774;
// NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment
struct ArgumentFragment_t2290785126;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// NUnit.Framework.Internal.PropertyBag
struct PropertyBag_t2593821153;
// NUnit.Framework.Interfaces.IPropertyBag
struct IPropertyBag_t3982299364;
// NUnit.Framework.Interfaces.ResultState
struct ResultState_t492092786;
// System.IO.StringWriter
struct StringWriter_t802263757;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Exception
struct Exception_t;
// System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest>
struct List_1_t531332281;
// NUnit.Framework.Internal.TestSuiteResult
struct TestSuiteResult_t4148044652;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult>
struct List_1_t2639907989;
// System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult>
struct IEnumerable_1_t147686136;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// NUnit.Framework.Internal.TextMessageWriter
struct TextMessageWriter_t1905902127;
// NUnit.Framework.Constraints.MessageWriter
struct MessageWriter_t4095718909;
// NUnit.Framework.Constraints.ConstraintResult
struct ConstraintResult_t3673080895;
// NUnit.Framework.Constraints.Tolerance
struct Tolerance_t819151345;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.Threading.Thread
struct Thread_t2300836069;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// NUnit.Framework.Interfaces.IParameterInfo[]
struct IParameterInfoU5BU5D_t2245635530;
// NUnit.Framework.Interfaces.IParameterInfo
struct IParameterInfo_t3586517291;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// NUnit.Framework.Internal.TypeWrapper
struct TypeWrapper_t1570625984;
// System.Reflection.Assembly
struct Assembly_t;
// NUnit.Framework.Interfaces.IMethodInfo[]
struct IMethodInfoU5BU5D_t578659627;
// NUnit.Framework.Internal.MethodWrapper
struct MethodWrapper_t2578635129;
// NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t4213619634;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t1796590042;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t3280590014;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515;
// NUnit.Framework.Constraints.TrueConstraint
struct TrueConstraint_t293028705;
// NUnit.Framework.Constraints.FalseConstraint
struct FalseConstraint_t3043866582;
// NUnit.Framework.Constraints.EqualConstraint
struct EqualConstraint_t520268896;
// NUnit.Framework.NUnitAttribute
struct NUnitAttribute_t565614204;
// System.Attribute
struct Attribute_t861562559;
// NUnit.Framework.ResultStateException
struct ResultStateException_t446384429;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// NUnit.Framework.Internal.TestExecutionContext
struct TestExecutionContext_t999030305;
// NUnit.Framework.Internal.Execution.EventListenerTextWriter
struct EventListenerTextWriter_t1736808679;
// NUnit.Framework.TestParameters
struct TestParameters_t2765012299;
// NUnit.Framework.TestFixtureAttribute
struct TestFixtureAttribute_t3158426996;
// System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestSuite>
struct IEnumerable_1_t3682594753;
// NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48
struct U3CBuildFromU3Ed__48_t3791848287;
// NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder
struct NUnitTestFixtureBuilder_t3046604762;
// NUnit.Framework.Interfaces.ITestFixtureData
struct ITestFixtureData_t3432584186;
// System.Collections.Generic.IEnumerator`1<NUnit.Framework.Internal.TestSuite>
struct IEnumerator_1_t840345036;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// NUnit.Framework.Interfaces.ITest[]
struct ITestU5BU5D_t3872523474;
// NUnit.Framework.Interfaces.ITestResult[]
struct ITestResultU5BU5D_t3327233542;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.IList>
struct Dictionary_2_t1880187515;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// NUnit.Framework.Interfaces.ITestCaseBuilder
struct ITestCaseBuilder_t3159206142;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// System.Lazy`1<System.String>
struct Lazy_1_t2331979038;
// NUnit.Framework.Constraints.ConstraintBuilder
struct ConstraintBuilder_t3953816213;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// NUnit.Framework.Internal.TestNameGenerator/NameFragment[]
struct NameFragmentU5BU5D_t2426015411;
// NUnit.Framework.Interfaces.AttributeDictionary
struct AttributeDictionary_t3588731866;
// NUnit.Framework.Interfaces.NodeList
struct NodeList_t411009435;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// NUnit.Framework.Constraints.NUnitEqualityComparer
struct NUnitEqualityComparer_t3588730761;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder
struct NUnitTestCaseBuilder_t622748773;
// NUnit.Framework.Interfaces.ICombiningStrategy
struct ICombiningStrategy_t1430619178;
// NUnit.Framework.Interfaces.IParameterDataProvider
struct IParameterDataProvider_t2751809450;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// NUnit.Framework.Constraints.IConstraint
struct IConstraint_t2854513434;
// NUnit.Framework.Internal.Randomizer
struct Randomizer_t3610073591;
// NUnit.Framework.Internal.Execution.IWorkItemDispatcher
struct IWorkItemDispatcher_t3953847820;
// System.Collections.Generic.List`1<NUnit.Framework.ITestAction>
struct List_1_t1224491233;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern RuntimeClass* U3CU3Ec_t4110531043_il2cpp_TypeInfo_var;
extern const uint32_t U3CU3Ec__cctor_m243354504_MetadataUsageId;
extern RuntimeClass* MsgUtils_t3625303109_il2cpp_TypeInfo_var;
extern const uint32_t U3CU3Ec_U3C_ctorU3Eb__9_0_m3785102164_MetadataUsageId;
extern RuntimeClass* ITest_t3354224835_il2cpp_TypeInfo_var;
extern const uint32_t TestFilter_MatchParent_m836533562_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t2334077724_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3786795303_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t TestFilter_MatchDescendant_m1981539265_MetadataUsageId;
extern RuntimeClass* TNode_t3946371078_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral424138002;
extern const uint32_t TestFilter_ToXml_m4116466062_MetadataUsageId;
extern RuntimeClass* EmptyFilter_t3371835522_il2cpp_TypeInfo_var;
extern RuntimeClass* TestFilter_t2701680237_il2cpp_TypeInfo_var;
extern const uint32_t TestFilter__cctor_m1277998003_MetadataUsageId;
extern String_t* _stringLiteral1557880777;
extern const uint32_t EmptyFilter_AddToXml_m2955088874_MetadataUsageId;
extern const uint32_t EmptyFilter__ctor_m1164734834_MetadataUsageId;
extern const RuntimeType* OneTimeSetUpAttribute_t1341445578_0_0_0_var;
extern const RuntimeType* OneTimeTearDownAttribute_t3231931417_0_0_0_var;
extern const RuntimeType* SetUpAttribute_t1818501660_0_0_0_var;
extern const RuntimeType* TearDownAttribute_t4180222501_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t TestFixture__ctor_m2096051055_MetadataUsageId;
extern RuntimeClass* TestListener_t3563649619_il2cpp_TypeInfo_var;
extern const uint32_t TestListener_get_NULL_m2077474789_MetadataUsageId;
extern RuntimeClass* Test_t3432848304_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614530;
extern const uint32_t TestMethod__ctor_m177902283_MetadataUsageId;
extern RuntimeClass* TestCaseResult_t777036217_il2cpp_TypeInfo_var;
extern const uint32_t TestMethod_MakeTestResult_m33355792_MetadataUsageId;
extern String_t* _stringLiteral2757345630;
extern const uint32_t TestMethod_AddToXml_m3617296028_MetadataUsageId;
extern RuntimeClass* ITestU5BU5D_t3872523474_il2cpp_TypeInfo_var;
extern const uint32_t TestMethod_get_Tests_m1180014442_MetadataUsageId;
extern String_t* _stringLiteral3793816299;
extern const uint32_t TestMethod_get_XmlElementName_m176013409_MetadataUsageId;
extern RuntimeClass* IMethodInfo_t4206102174_il2cpp_TypeInfo_var;
extern const uint32_t TestMethod_get_MethodName_m3633071391_MetadataUsageId;
extern RuntimeClass* TestNameGenerator_t2179848069_il2cpp_TypeInfo_var;
extern const uint32_t TestNameGenerator__ctor_m475129224_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1860925481_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1062154811_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m215596758_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2177781517_RuntimeMethod_var;
extern const uint32_t TestNameGenerator_GetDisplayName_m956149260_MetadataUsageId;
extern RuntimeClass* List_1_t171055532_il2cpp_TypeInfo_var;
extern RuntimeClass* FixedTextFragment_t3279578530_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodNameFragment_t1693502444_il2cpp_TypeInfo_var;
extern RuntimeClass* TestIDFragment_t123621352_il2cpp_TypeInfo_var;
extern RuntimeClass* NamespaceFragment_t1263772683_il2cpp_TypeInfo_var;
extern RuntimeClass* ClassNameFragment_t819157190_il2cpp_TypeInfo_var;
extern RuntimeClass* ClassFullNameFragment_t2403317993_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodFullNameFragment_t3487880812_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgListFragment_t1470563774_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentFragment_t2290785126_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3618081898_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3832489382_RuntimeMethod_var;
extern String_t* _stringLiteral631427806;
extern String_t* _stringLiteral631689950;
extern String_t* _stringLiteral631362270;
extern String_t* _stringLiteral631034590;
extern String_t* _stringLiteral633131742;
extern String_t* _stringLiteral633524958;
extern String_t* _stringLiteral631165662;
extern String_t* _stringLiteral628085470;
extern String_t* _stringLiteral628019934;
extern String_t* _stringLiteral627954398;
extern String_t* _stringLiteral627888862;
extern String_t* _stringLiteral627823326;
extern String_t* _stringLiteral627757790;
extern String_t* _stringLiteral627692254;
extern String_t* _stringLiteral627626718;
extern String_t* _stringLiteral628609758;
extern String_t* _stringLiteral628544222;
extern const uint32_t TestNameGenerator_BuildFragmentList_m2084964715_MetadataUsageId;
extern String_t* _stringLiteral3139276341;
extern const uint32_t TestNameGenerator__cctor_m3557877131_MetadataUsageId;
extern String_t* _stringLiteral3452614532;
extern const uint32_t ArgListFragment_GetText_m1765285648_MetadataUsageId;
extern const uint32_t ArgumentFragment_GetText_m3554084499_MetadataUsageId;
extern const uint32_t MethodFullNameFragment_GetText_m1687637353_MetadataUsageId;
extern const uint32_t MethodNameFragment_GetText_m1615057976_MetadataUsageId;
extern const uint32_t NameFragment_GetText_m768595460_MetadataUsageId;
extern String_t* _stringLiteral3452614548;
extern String_t* _stringLiteral3452614546;
extern const uint32_t NameFragment_AppendGenericTypeNames_m840342870_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral2116099649;
extern String_t* _stringLiteral1445770589;
extern String_t* _stringLiteral2711467558;
extern String_t* _stringLiteral921927405;
extern String_t* _stringLiteral910786565;
extern String_t* _stringLiteral3451565954;
extern String_t* _stringLiteral3452614588;
extern String_t* _stringLiteral2303604494;
extern String_t* _stringLiteral2785839780;
extern String_t* _stringLiteral1231758999;
extern String_t* _stringLiteral4099496811;
extern String_t* _stringLiteral3934346913;
extern String_t* _stringLiteral3452614586;
extern String_t* _stringLiteral3429026798;
extern String_t* _stringLiteral1468417772;
extern String_t* _stringLiteral3452614595;
extern String_t* _stringLiteral125944290;
extern String_t* _stringLiteral3828796346;
extern String_t* _stringLiteral3452614628;
extern String_t* _stringLiteral3919982701;
extern String_t* _stringLiteral1932406591;
extern String_t* _stringLiteral3457071083;
extern String_t* _stringLiteral2623387542;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3452614521;
extern String_t* _stringLiteral2172315071;
extern String_t* _stringLiteral3313058613;
extern String_t* _stringLiteral3636895639;
extern String_t* _stringLiteral2497287615;
extern String_t* _stringLiteral657123221;
extern String_t* _stringLiteral491972199;
extern String_t* _stringLiteral2221169466;
extern String_t* _stringLiteral2176473634;
extern String_t* _stringLiteral2206905067;
extern String_t* _stringLiteral794836083;
extern String_t* _stringLiteral4022603228;
extern String_t* _stringLiteral3857453066;
extern const uint32_t NameFragment_GetDisplayString_m2494897668_MetadataUsageId;
extern String_t* _stringLiteral3450058740;
extern const uint32_t NameFragment_EscapeSingleChar_m660733469_MetadataUsageId;
extern String_t* _stringLiteral3450386420;
extern const uint32_t NameFragment_EscapeCharInString_m1659453699_MetadataUsageId;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3451566068;
extern String_t* _stringLiteral3454646260;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3455367156;
extern String_t* _stringLiteral289182889;
extern const uint32_t NameFragment_EscapeControlChar_m912372380_MetadataUsageId;
extern const uint32_t TestIDFragment_GetText_m3892388843_MetadataUsageId;
extern RuntimeClass* PropertyBag_t2593821153_il2cpp_TypeInfo_var;
extern const uint32_t TestParameters__ctor_m361209497_MetadataUsageId;
extern const uint32_t TestParameters__ctor_m4202207260_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const uint32_t TestParameters_InitializeAguments_m177601263_MetadataUsageId;
extern RuntimeClass* IPropertyBag_t3982299364_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t827303578_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2280021157_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern const uint32_t TestParameters_ApplyToTest_m4054127079_MetadataUsageId;
extern RuntimeClass* ResultState_t492092786_il2cpp_TypeInfo_var;
extern RuntimeClass* StringWriter_t802263757_il2cpp_TypeInfo_var;
extern RuntimeClass* TextWriter_t3478189236_il2cpp_TypeInfo_var;
extern const uint32_t TestResult__ctor_m977786872_MetadataUsageId;
extern const uint32_t TestResult_get_Name_m3350279869_MetadataUsageId;
extern const uint32_t TestResult_ToXml_m962161666_MetadataUsageId;
extern RuntimeClass* IXmlNodeBuilder_t2630207394_il2cpp_TypeInfo_var;
extern RuntimeClass* TestStatus_t2287483310_il2cpp_TypeInfo_var;
extern RuntimeClass* FailureSite_t1159451337_il2cpp_TypeInfo_var;
extern RuntimeClass* NumberFormatInfo_t435877138_il2cpp_TypeInfo_var;
extern RuntimeClass* TestSuite_t407774568_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t147686136_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1600403715_il2cpp_TypeInfo_var;
extern RuntimeClass* TestResult_t921768966_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral405358763;
extern String_t* _stringLiteral3923320070;
extern String_t* _stringLiteral1273103123;
extern String_t* _stringLiteral1429420425;
extern String_t* _stringLiteral3452614603;
extern String_t* _stringLiteral3850501456;
extern String_t* _stringLiteral1501416449;
extern String_t* _stringLiteral3316782094;
extern String_t* _stringLiteral847691140;
extern String_t* _stringLiteral796871020;
extern String_t* _stringLiteral417268216;
extern String_t* _stringLiteral4246287053;
extern String_t* _stringLiteral3694605210;
extern String_t* _stringLiteral4172261259;
extern const uint32_t TestResult_AddToXml_m2255727574_MetadataUsageId;
extern RuntimeClass* NUnitException_t503223294_il2cpp_TypeInfo_var;
extern RuntimeClass* ResultStateException_t446384429_il2cpp_TypeInfo_var;
extern RuntimeClass* StackFilter_t1579955875_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadAbortException_t4074510458_il2cpp_TypeInfo_var;
extern RuntimeClass* ExceptionHelper_t1212814601_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2561944364;
extern const uint32_t TestResult_RecordException_m3509105111_MetadataUsageId;
extern const uint32_t TestResult_RecordException_m716418466_MetadataUsageId;
extern RuntimeClass* Env_t3481029657_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3067016887;
extern String_t* _stringLiteral3164934875;
extern const uint32_t TestResult_RecordTearDownException_m3040973418_MetadataUsageId;
extern String_t* _stringLiteral338012450;
extern String_t* _stringLiteral3253941996;
extern const uint32_t TestResult_AddReasonElement_m3318757931_MetadataUsageId;
extern String_t* _stringLiteral2570894439;
extern String_t* _stringLiteral333314910;
extern const uint32_t TestResult_AddFailureElement_m4018444267_MetadataUsageId;
extern String_t* _stringLiteral1975106570;
extern const uint32_t TestResult_AddOutputElement_m2399671985_MetadataUsageId;
extern String_t* _stringLiteral2951280245;
extern String_t* _stringLiteral1929230609;
extern const uint32_t TestResult__cctor_m592998132_MetadataUsageId;
extern RuntimeClass* List_1_t531332281_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3215046496_RuntimeMethod_var;
extern const uint32_t TestSuite__ctor_m2991959661_MetadataUsageId;
extern const uint32_t TestSuite__ctor_m1188966453_MetadataUsageId;
extern const uint32_t TestSuite__ctor_m2589975646_MetadataUsageId;
extern const RuntimeMethod* List_1_Sort_m3836414996_RuntimeMethod_var;
extern const uint32_t TestSuite_Sort_m501018403_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3496651552_RuntimeMethod_var;
extern const uint32_t TestSuite_Add_m2934725989_MetadataUsageId;
extern const uint32_t TestSuite_get_TestCaseCount_m3220708717_MetadataUsageId;
extern RuntimeClass* TestSuiteResult_t4148044652_il2cpp_TypeInfo_var;
extern const uint32_t TestSuite_MakeTestResult_m1514935130_MetadataUsageId;
extern String_t* _stringLiteral812838592;
extern const uint32_t TestSuite_get_XmlElementName_m3953277652_MetadataUsageId;
extern String_t* _stringLiteral3243520166;
extern String_t* _stringLiteral3766319145;
extern const uint32_t TestSuite_AddToXml_m63921258_MetadataUsageId;
extern const RuntimeType* Void_t1185182177_0_0_0_var;
extern RuntimeClass* ITypeInfo_t293606473_il2cpp_TypeInfo_var;
extern RuntimeClass* Reflect_t1986382923_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3044528582;
extern String_t* _stringLiteral161004592;
extern const uint32_t TestSuite_CheckSetUpTearDownMethods_m2163883642_MetadataUsageId;
extern RuntimeClass* List_1_t2639907989_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3117187204_RuntimeMethod_var;
extern const uint32_t TestSuiteResult__ctor_m1687939535_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m3753441864_RuntimeMethod_var;
extern const uint32_t TestSuiteResult_get_HasChildren_m1657941375_MetadataUsageId;
extern RuntimeClass* IList_1_t2983153030_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3995985481_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ITestResult_t1167833247_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4220495442;
extern String_t* _stringLiteral2084613277;
extern const uint32_t TestSuiteResult_AddResult_m2584239127_MetadataUsageId;
extern RuntimeClass* TextMessageWriter_t1905902127_il2cpp_TypeInfo_var;
extern const uint32_t TextMessageWriter__ctor_m2846032292_MetadataUsageId;
extern String_t* _stringLiteral3450517376;
extern const uint32_t TextMessageWriter_WriteMessageLine_m3244823887_MetadataUsageId;
extern String_t* _stringLiteral1874679109;
extern const uint32_t TextMessageWriter_DisplayStringDifferences_m1437238139_MetadataUsageId;
extern const uint32_t TextMessageWriter_WriteValue_m1196648060_MetadataUsageId;
extern const uint32_t TextMessageWriter_WriteCollectionElements_m792577923_MetadataUsageId;
extern const uint32_t TextMessageWriter_WriteExpectedLine_m4224931375_MetadataUsageId;
extern RuntimeClass* ToleranceMode_t1002201888_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral640539941;
extern String_t* _stringLiteral2091341594;
extern const uint32_t TextMessageWriter_WriteExpectedLine_m3157171240_MetadataUsageId;
extern const uint32_t TextMessageWriter_WriteActualLine_m317420518_MetadataUsageId;
extern const uint32_t TextMessageWriter_WriteActualLine_m2197059919_MetadataUsageId;
extern String_t* _stringLiteral3663305196;
extern const uint32_t TextMessageWriter_WriteCaretLine_m2815048626_MetadataUsageId;
extern String_t* _stringLiteral906900731;
extern String_t* _stringLiteral3949728136;
extern const uint32_t TextMessageWriter__cctor_m1636813561_MetadataUsageId;
extern RuntimeClass* ThreadStateException_t3003788475_il2cpp_TypeInfo_var;
extern const uint32_t ThreadUtility_Kill_m1498152550_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeHelper_t3432996546_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614533;
extern const uint32_t TypeHelper_GetDisplayName_m1582185031_MetadataUsageId;
extern String_t* _stringLiteral3452614536;
extern String_t* _stringLiteral3452614535;
extern const uint32_t TypeHelper_GetDisplayName_m742861752_MetadataUsageId;
extern const RuntimeType* Double_t594665363_0_0_0_var;
extern const RuntimeType* Single_t1397266774_0_0_0_var;
extern const RuntimeType* Decimal_t2948259380_0_0_0_var;
extern const RuntimeType* UInt64_t4134040092_0_0_0_var;
extern const RuntimeType* Int64_t3736567304_0_0_0_var;
extern const RuntimeType* UInt32_t2560061978_0_0_0_var;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern const RuntimeType* UInt16_t2177724958_0_0_0_var;
extern const RuntimeType* Int16_t2552820387_0_0_0_var;
extern const RuntimeType* Byte_t1134296376_0_0_0_var;
extern const RuntimeType* SByte_t1669577662_0_0_0_var;
extern const uint32_t TypeHelper_BestCommonType_m1103720624_MetadataUsageId;
extern const uint32_t TypeHelper_IsNumeric_m3844235642_MetadataUsageId;
extern RuntimeClass* IConvertible_t2977365677_il2cpp_TypeInfo_var;
extern RuntimeClass* IParameterInfo_t3586517291_il2cpp_TypeInfo_var;
extern const uint32_t TypeHelper_ConvertArgumentList_m3559123215_MetadataUsageId;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern const uint32_t TypeHelper_CanDeduceTypeArgsFromArgs_m1059071319_MetadataUsageId;
extern const RuntimeType* NonmatchingTypeClass_t4260389265_0_0_0_var;
extern const uint32_t TypeHelper__cctor_m3452955103_MetadataUsageId;
extern String_t* _stringLiteral3243520198;
extern const uint32_t TypeWrapper__ctor_m3863500962_MetadataUsageId;
extern RuntimeClass* TypeWrapper_t1570625984_il2cpp_TypeInfo_var;
extern const uint32_t TypeWrapper_get_BaseType_m1524554082_MetadataUsageId;
extern const uint32_t TypeWrapper_GetDisplayName_m1896113295_MetadataUsageId;
extern const uint32_t TypeWrapper_GetDisplayName_m1963618838_MetadataUsageId;
extern const uint32_t TypeWrapper_MakeGenericType_m1965119895_MetadataUsageId;
extern const uint32_t TypeWrapper_HasMethodWithAttribute_m3825086047_MetadataUsageId;
extern RuntimeClass* MethodWrapperU5BU5D_t1170775172_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodWrapper_t2578635129_il2cpp_TypeInfo_var;
extern const uint32_t TypeWrapper_GetMethods_m1838899308_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass36_0_t4213619634_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1796590042_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass36_0_U3CGetConstructorU3Eb__0_m2369305163_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m973664881_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisConstructorInfo_t5769829_m2426976016_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_FirstOrDefault_TisConstructorInfo_t5769829_m3168633260_RuntimeMethod_var;
extern const uint32_t TypeWrapper_GetConstructor_m64218867_MetadataUsageId;
extern const uint32_t TypeWrapper_Construct_m545675185_MetadataUsageId;
extern RuntimeClass* AdditionalTypeExtensions_t2272335955_il2cpp_TypeInfo_var;
extern const uint32_t U3CU3Ec__DisplayClass36_0_U3CGetConstructorU3Eb__0_m2369305163_MetadataUsageId;
extern RuntimeClass* TrueConstraint_t293028705_il2cpp_TypeInfo_var;
extern const uint32_t Is_get_True_m309691603_MetadataUsageId;
extern RuntimeClass* FalseConstraint_t3043866582_il2cpp_TypeInfo_var;
extern const uint32_t Is_get_False_m1618499435_MetadataUsageId;
extern RuntimeClass* EqualConstraint_t520268896_il2cpp_TypeInfo_var;
extern const uint32_t Is_EqualTo_m3778559934_MetadataUsageId;
extern RuntimeClass* TestExecutionContext_t999030305_il2cpp_TypeInfo_var;
extern const uint32_t TestContext_get_Out_m504092258_MetadataUsageId;
extern RuntimeClass* Console_t3208230065_il2cpp_TypeInfo_var;
extern RuntimeClass* EventListenerTextWriter_t1736808679_il2cpp_TypeInfo_var;
extern RuntimeClass* TestContext_t2339225140_il2cpp_TypeInfo_var;
extern RuntimeClass* TestParameters_t2765012299_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral95344243;
extern String_t* _stringLiteral2322234016;
extern const uint32_t TestContext__cctor_m3993401982_MetadataUsageId;
extern RuntimeClass* U3CBuildFromU3Ed__48_t3791848287_il2cpp_TypeInfo_var;
extern const uint32_t TestFixtureAttribute_BuildFrom_m3972695401_MetadataUsageId;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern const uint32_t U3CBuildFromU3Ed__48__ctor_m4260323252_MetadataUsageId;
extern const uint32_t U3CBuildFromU3Ed__48_System_Collections_IEnumerator_Reset_m162458811_MetadataUsageId;
extern const uint32_t U3CBuildFromU3Ed__48_System_Collections_Generic_IEnumerableU3CNUnit_Framework_Internal_TestSuiteU3E_GetEnumerator_m3643769215_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_set_Item_m2307670220_RuntimeMethod_var;
extern const uint32_t TestParameters_Add_m596377831_MetadataUsageId;
extern const uint32_t TestParameters_CreateModifiedInvariantCulture_m1122814966_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m609215832_RuntimeMethod_var;
extern const uint32_t TestParameters__ctor_m2688514816_MetadataUsageId;
extern const uint32_t TestParameters__cctor_m3216561529_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct ITestU5BU5D_t3872523474;
struct TypeU5BU5D_t3940880105;
struct MethodInfoU5BU5D_t2572182361;
struct ParameterInfoU5BU5D_t390618515;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;
struct IParameterInfoU5BU5D_t2245635530;
struct ConstructorInfoU5BU5D_t881249896;
struct IMethodInfoU5BU5D_t578659627;
struct MethodWrapperU5BU5D_t1170775172;


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
#ifndef ENV_T3481029657_H
#define ENV_T3481029657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Env
struct  Env_t3481029657  : public RuntimeObject
{
public:

public:
};

struct Env_t3481029657_StaticFields
{
public:
	// System.String NUnit.Env::NewLine
	String_t* ___NewLine_0;
	// System.String NUnit.Env::DocumentFolder
	String_t* ___DocumentFolder_1;
	// System.String NUnit.Env::DefaultWorkDirectory
	String_t* ___DefaultWorkDirectory_2;

public:
	inline static int32_t get_offset_of_NewLine_0() { return static_cast<int32_t>(offsetof(Env_t3481029657_StaticFields, ___NewLine_0)); }
	inline String_t* get_NewLine_0() const { return ___NewLine_0; }
	inline String_t** get_address_of_NewLine_0() { return &___NewLine_0; }
	inline void set_NewLine_0(String_t* value)
	{
		___NewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___NewLine_0), value);
	}

	inline static int32_t get_offset_of_DocumentFolder_1() { return static_cast<int32_t>(offsetof(Env_t3481029657_StaticFields, ___DocumentFolder_1)); }
	inline String_t* get_DocumentFolder_1() const { return ___DocumentFolder_1; }
	inline String_t** get_address_of_DocumentFolder_1() { return &___DocumentFolder_1; }
	inline void set_DocumentFolder_1(String_t* value)
	{
		___DocumentFolder_1 = value;
		Il2CppCodeGenWriteBarrier((&___DocumentFolder_1), value);
	}

	inline static int32_t get_offset_of_DefaultWorkDirectory_2() { return static_cast<int32_t>(offsetof(Env_t3481029657_StaticFields, ___DefaultWorkDirectory_2)); }
	inline String_t* get_DefaultWorkDirectory_2() const { return ___DefaultWorkDirectory_2; }
	inline String_t** get_address_of_DefaultWorkDirectory_2() { return &___DefaultWorkDirectory_2; }
	inline void set_DefaultWorkDirectory_2(String_t* value)
	{
		___DefaultWorkDirectory_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultWorkDirectory_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENV_T3481029657_H
#ifndef LIST_1_T531332281_H
#define LIST_1_T531332281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest>
struct  List_1_t531332281  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ITestU5BU5D_t3872523474* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t531332281, ____items_1)); }
	inline ITestU5BU5D_t3872523474* get__items_1() const { return ____items_1; }
	inline ITestU5BU5D_t3872523474** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ITestU5BU5D_t3872523474* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t531332281, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t531332281, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t531332281_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ITestU5BU5D_t3872523474* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t531332281_StaticFields, ___EmptyArray_4)); }
	inline ITestU5BU5D_t3872523474* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ITestU5BU5D_t3872523474** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ITestU5BU5D_t3872523474* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T531332281_H
#ifndef LIST_1_T2639907989_H
#define LIST_1_T2639907989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult>
struct  List_1_t2639907989  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ITestResultU5BU5D_t3327233542* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2639907989, ____items_1)); }
	inline ITestResultU5BU5D_t3327233542* get__items_1() const { return ____items_1; }
	inline ITestResultU5BU5D_t3327233542** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ITestResultU5BU5D_t3327233542* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2639907989, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2639907989, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2639907989_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ITestResultU5BU5D_t3327233542* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2639907989_StaticFields, ___EmptyArray_4)); }
	inline ITestResultU5BU5D_t3327233542* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ITestResultU5BU5D_t3327233542** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ITestResultU5BU5D_t3327233542* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2639907989_H
#ifndef THREADUTILITY_T643297708_H
#define THREADUTILITY_T643297708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.ThreadUtility
struct  ThreadUtility_t643297708  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADUTILITY_T643297708_H
#ifndef TYPEHELPER_T3432996546_H
#define TYPEHELPER_T3432996546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TypeHelper
struct  TypeHelper_t3432996546  : public RuntimeObject
{
public:

public:
};

struct TypeHelper_t3432996546_StaticFields
{
public:
	// System.Type NUnit.Framework.Internal.TypeHelper::NonmatchingType
	Type_t * ___NonmatchingType_0;

public:
	inline static int32_t get_offset_of_NonmatchingType_0() { return static_cast<int32_t>(offsetof(TypeHelper_t3432996546_StaticFields, ___NonmatchingType_0)); }
	inline Type_t * get_NonmatchingType_0() const { return ___NonmatchingType_0; }
	inline Type_t ** get_address_of_NonmatchingType_0() { return &___NonmatchingType_0; }
	inline void set_NonmatchingType_0(Type_t * value)
	{
		___NonmatchingType_0 = value;
		Il2CppCodeGenWriteBarrier((&___NonmatchingType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEHELPER_T3432996546_H
#ifndef NONMATCHINGTYPECLASS_T4260389265_H
#define NONMATCHINGTYPECLASS_T4260389265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TypeHelper/NonmatchingTypeClass
struct  NonmatchingTypeClass_t4260389265  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONMATCHINGTYPECLASS_T4260389265_H
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
#ifndef PROPERTYBAG_T2593821153_H
#define PROPERTYBAG_T2593821153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.PropertyBag
struct  PropertyBag_t2593821153  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.IList> NUnit.Framework.Internal.PropertyBag::inner
	Dictionary_2_t1880187515 * ___inner_0;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(PropertyBag_t2593821153, ___inner_0)); }
	inline Dictionary_2_t1880187515 * get_inner_0() const { return ___inner_0; }
	inline Dictionary_2_t1880187515 ** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(Dictionary_2_t1880187515 * value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYBAG_T2593821153_H
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
#ifndef TYPEWRAPPER_T1570625984_H
#define TYPEWRAPPER_T1570625984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TypeWrapper
struct  TypeWrapper_t1570625984  : public RuntimeObject
{
public:
	// System.Type NUnit.Framework.Internal.TypeWrapper::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TypeWrapper_t1570625984, ___U3CTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEWRAPPER_T1570625984_H
#ifndef U3CBUILDFROMU3ED__48_T3791848287_H
#define U3CBUILDFROMU3ED__48_T3791848287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48
struct  U3CBuildFromU3Ed__48_t3791848287  : public RuntimeObject
{
public:
	// System.Int32 NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// NUnit.Framework.Internal.TestSuite NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::<>2__current
	TestSuite_t407774568 * ___U3CU3E2__current_1;
	// System.Int32 NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// NUnit.Framework.TestFixtureAttribute NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::<>4__this
	TestFixtureAttribute_t3158426996 * ___U3CU3E4__this_3;
	// NUnit.Framework.Interfaces.ITypeInfo NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::typeInfo
	RuntimeObject* ___typeInfo_4;
	// NUnit.Framework.Interfaces.ITypeInfo NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::<>3__typeInfo
	RuntimeObject* ___U3CU3E3__typeInfo_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBuildFromU3Ed__48_t3791848287, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBuildFromU3Ed__48_t3791848287, ___U3CU3E2__current_1)); }
	inline TestSuite_t407774568 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline TestSuite_t407774568 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(TestSuite_t407774568 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CBuildFromU3Ed__48_t3791848287, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CBuildFromU3Ed__48_t3791848287, ___U3CU3E4__this_3)); }
	inline TestFixtureAttribute_t3158426996 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TestFixtureAttribute_t3158426996 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TestFixtureAttribute_t3158426996 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_typeInfo_4() { return static_cast<int32_t>(offsetof(U3CBuildFromU3Ed__48_t3791848287, ___typeInfo_4)); }
	inline RuntimeObject* get_typeInfo_4() const { return ___typeInfo_4; }
	inline RuntimeObject** get_address_of_typeInfo_4() { return &___typeInfo_4; }
	inline void set_typeInfo_4(RuntimeObject* value)
	{
		___typeInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeInfo_4), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__typeInfo_5() { return static_cast<int32_t>(offsetof(U3CBuildFromU3Ed__48_t3791848287, ___U3CU3E3__typeInfo_5)); }
	inline RuntimeObject* get_U3CU3E3__typeInfo_5() const { return ___U3CU3E3__typeInfo_5; }
	inline RuntimeObject** get_address_of_U3CU3E3__typeInfo_5() { return &___U3CU3E3__typeInfo_5; }
	inline void set_U3CU3E3__typeInfo_5(RuntimeObject* value)
	{
		___U3CU3E3__typeInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__typeInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBUILDFROMU3ED__48_T3791848287_H
#ifndef NUNITTESTFIXTUREBUILDER_T3046604762_H
#define NUNITTESTFIXTUREBUILDER_T3046604762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder
struct  NUnitTestFixtureBuilder_t3046604762  : public RuntimeObject
{
public:
	// NUnit.Framework.Interfaces.ITestCaseBuilder NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder::_testBuilder
	RuntimeObject* ____testBuilder_1;

public:
	inline static int32_t get_offset_of__testBuilder_1() { return static_cast<int32_t>(offsetof(NUnitTestFixtureBuilder_t3046604762, ____testBuilder_1)); }
	inline RuntimeObject* get__testBuilder_1() const { return ____testBuilder_1; }
	inline RuntimeObject** get_address_of__testBuilder_1() { return &____testBuilder_1; }
	inline void set__testBuilder_1(RuntimeObject* value)
	{
		____testBuilder_1 = value;
		Il2CppCodeGenWriteBarrier((&____testBuilder_1), value);
	}
};

struct NUnitTestFixtureBuilder_t3046604762_StaticFields
{
public:
	// System.String NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder::NO_TYPE_ARGS_MSG
	String_t* ___NO_TYPE_ARGS_MSG_0;

public:
	inline static int32_t get_offset_of_NO_TYPE_ARGS_MSG_0() { return static_cast<int32_t>(offsetof(NUnitTestFixtureBuilder_t3046604762_StaticFields, ___NO_TYPE_ARGS_MSG_0)); }
	inline String_t* get_NO_TYPE_ARGS_MSG_0() const { return ___NO_TYPE_ARGS_MSG_0; }
	inline String_t** get_address_of_NO_TYPE_ARGS_MSG_0() { return &___NO_TYPE_ARGS_MSG_0; }
	inline void set_NO_TYPE_ARGS_MSG_0(String_t* value)
	{
		___NO_TYPE_ARGS_MSG_0 = value;
		Il2CppCodeGenWriteBarrier((&___NO_TYPE_ARGS_MSG_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUNITTESTFIXTUREBUILDER_T3046604762_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
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
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef CONSTRAINT_T2792793352_H
#define CONSTRAINT_T2792793352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.Constraint
struct  Constraint_t2792793352  : public RuntimeObject
{
public:
	// System.Lazy`1<System.String> NUnit.Framework.Constraints.Constraint::_displayName
	Lazy_1_t2331979038 * ____displayName_0;
	// System.String NUnit.Framework.Constraints.Constraint::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_1;
	// System.Object[] NUnit.Framework.Constraints.Constraint::<Arguments>k__BackingField
	ObjectU5BU5D_t2843939325* ___U3CArgumentsU3Ek__BackingField_2;
	// NUnit.Framework.Constraints.ConstraintBuilder NUnit.Framework.Constraints.Constraint::<Builder>k__BackingField
	ConstraintBuilder_t3953816213 * ___U3CBuilderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__displayName_0() { return static_cast<int32_t>(offsetof(Constraint_t2792793352, ____displayName_0)); }
	inline Lazy_1_t2331979038 * get__displayName_0() const { return ____displayName_0; }
	inline Lazy_1_t2331979038 ** get_address_of__displayName_0() { return &____displayName_0; }
	inline void set__displayName_0(Lazy_1_t2331979038 * value)
	{
		____displayName_0 = value;
		Il2CppCodeGenWriteBarrier((&____displayName_0), value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Constraint_t2792793352, ___U3CDescriptionU3Ek__BackingField_1)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_1() const { return ___U3CDescriptionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_1() { return &___U3CDescriptionU3Ek__BackingField_1; }
	inline void set_U3CDescriptionU3Ek__BackingField_1(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptionU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CArgumentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Constraint_t2792793352, ___U3CArgumentsU3Ek__BackingField_2)); }
	inline ObjectU5BU5D_t2843939325* get_U3CArgumentsU3Ek__BackingField_2() const { return ___U3CArgumentsU3Ek__BackingField_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of_U3CArgumentsU3Ek__BackingField_2() { return &___U3CArgumentsU3Ek__BackingField_2; }
	inline void set_U3CArgumentsU3Ek__BackingField_2(ObjectU5BU5D_t2843939325* value)
	{
		___U3CArgumentsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgumentsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBuilderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Constraint_t2792793352, ___U3CBuilderU3Ek__BackingField_3)); }
	inline ConstraintBuilder_t3953816213 * get_U3CBuilderU3Ek__BackingField_3() const { return ___U3CBuilderU3Ek__BackingField_3; }
	inline ConstraintBuilder_t3953816213 ** get_address_of_U3CBuilderU3Ek__BackingField_3() { return &___U3CBuilderU3Ek__BackingField_3; }
	inline void set_U3CBuilderU3Ek__BackingField_3(ConstraintBuilder_t3953816213 * value)
	{
		___U3CBuilderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBuilderU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINT_T2792793352_H
#ifndef TESTPARAMETERS_T2765012299_H
#define TESTPARAMETERS_T2765012299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.TestParameters
struct  TestParameters_t2765012299  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> NUnit.Framework.TestParameters::_parameters
	Dictionary_2_t1632706988 * ____parameters_1;

public:
	inline static int32_t get_offset_of__parameters_1() { return static_cast<int32_t>(offsetof(TestParameters_t2765012299, ____parameters_1)); }
	inline Dictionary_2_t1632706988 * get__parameters_1() const { return ____parameters_1; }
	inline Dictionary_2_t1632706988 ** get_address_of__parameters_1() { return &____parameters_1; }
	inline void set__parameters_1(Dictionary_2_t1632706988 * value)
	{
		____parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&____parameters_1), value);
	}
};

struct TestParameters_t2765012299_StaticFields
{
public:
	// System.IFormatProvider NUnit.Framework.TestParameters::MODIFIED_INVARIANT_CULTURE
	RuntimeObject* ___MODIFIED_INVARIANT_CULTURE_0;

public:
	inline static int32_t get_offset_of_MODIFIED_INVARIANT_CULTURE_0() { return static_cast<int32_t>(offsetof(TestParameters_t2765012299_StaticFields, ___MODIFIED_INVARIANT_CULTURE_0)); }
	inline RuntimeObject* get_MODIFIED_INVARIANT_CULTURE_0() const { return ___MODIFIED_INVARIANT_CULTURE_0; }
	inline RuntimeObject** get_address_of_MODIFIED_INVARIANT_CULTURE_0() { return &___MODIFIED_INVARIANT_CULTURE_0; }
	inline void set_MODIFIED_INVARIANT_CULTURE_0(RuntimeObject* value)
	{
		___MODIFIED_INVARIANT_CULTURE_0 = value;
		Il2CppCodeGenWriteBarrier((&___MODIFIED_INVARIANT_CULTURE_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTPARAMETERS_T2765012299_H
#ifndef METHODWRAPPER_T2578635129_H
#define METHODWRAPPER_T2578635129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.MethodWrapper
struct  MethodWrapper_t2578635129  : public RuntimeObject
{
public:
	// NUnit.Framework.Interfaces.ITypeInfo NUnit.Framework.Internal.MethodWrapper::<TypeInfo>k__BackingField
	RuntimeObject* ___U3CTypeInfoU3Ek__BackingField_0;
	// System.Reflection.MethodInfo NUnit.Framework.Internal.MethodWrapper::<MethodInfo>k__BackingField
	MethodInfo_t * ___U3CMethodInfoU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MethodWrapper_t2578635129, ___U3CTypeInfoU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CTypeInfoU3Ek__BackingField_0() const { return ___U3CTypeInfoU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CTypeInfoU3Ek__BackingField_0() { return &___U3CTypeInfoU3Ek__BackingField_0; }
	inline void set_U3CTypeInfoU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CTypeInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeInfoU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CMethodInfoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MethodWrapper_t2578635129, ___U3CMethodInfoU3Ek__BackingField_1)); }
	inline MethodInfo_t * get_U3CMethodInfoU3Ek__BackingField_1() const { return ___U3CMethodInfoU3Ek__BackingField_1; }
	inline MethodInfo_t ** get_address_of_U3CMethodInfoU3Ek__BackingField_1() { return &___U3CMethodInfoU3Ek__BackingField_1; }
	inline void set_U3CMethodInfoU3Ek__BackingField_1(MethodInfo_t * value)
	{
		___U3CMethodInfoU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMethodInfoU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODWRAPPER_T2578635129_H
#ifndef U3CU3EC__DISPLAYCLASS36_0_T4213619634_H
#define U3CU3EC__DISPLAYCLASS36_0_T4213619634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass36_0
struct  U3CU3Ec__DisplayClass36_0_t4213619634  : public RuntimeObject
{
public:
	// System.Type[] NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass36_0::argTypes
	TypeU5BU5D_t3940880105* ___argTypes_0;

public:
	inline static int32_t get_offset_of_argTypes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t4213619634, ___argTypes_0)); }
	inline TypeU5BU5D_t3940880105* get_argTypes_0() const { return ___argTypes_0; }
	inline TypeU5BU5D_t3940880105** get_address_of_argTypes_0() { return &___argTypes_0; }
	inline void set_argTypes_0(TypeU5BU5D_t3940880105* value)
	{
		___argTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&___argTypes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS36_0_T4213619634_H
#ifndef IS_T802377446_H
#define IS_T802377446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Is
struct  Is_t802377446  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IS_T802377446_H
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
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1853889766 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2718874744 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___serialized_0)); }
	inline Hashtable_t1853889766 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1853889766 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1853889766 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
#ifndef TESTCONTEXT_T2339225140_H
#define TESTCONTEXT_T2339225140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.TestContext
struct  TestContext_t2339225140  : public RuntimeObject
{
public:

public:
};

struct TestContext_t2339225140_StaticFields
{
public:
	// System.IO.TextWriter NUnit.Framework.TestContext::Error
	TextWriter_t3478189236 * ___Error_0;
	// System.IO.TextWriter NUnit.Framework.TestContext::Progress
	TextWriter_t3478189236 * ___Progress_1;
	// NUnit.Framework.TestParameters NUnit.Framework.TestContext::Parameters
	TestParameters_t2765012299 * ___Parameters_2;

public:
	inline static int32_t get_offset_of_Error_0() { return static_cast<int32_t>(offsetof(TestContext_t2339225140_StaticFields, ___Error_0)); }
	inline TextWriter_t3478189236 * get_Error_0() const { return ___Error_0; }
	inline TextWriter_t3478189236 ** get_address_of_Error_0() { return &___Error_0; }
	inline void set_Error_0(TextWriter_t3478189236 * value)
	{
		___Error_0 = value;
		Il2CppCodeGenWriteBarrier((&___Error_0), value);
	}

	inline static int32_t get_offset_of_Progress_1() { return static_cast<int32_t>(offsetof(TestContext_t2339225140_StaticFields, ___Progress_1)); }
	inline TextWriter_t3478189236 * get_Progress_1() const { return ___Progress_1; }
	inline TextWriter_t3478189236 ** get_address_of_Progress_1() { return &___Progress_1; }
	inline void set_Progress_1(TextWriter_t3478189236 * value)
	{
		___Progress_1 = value;
		Il2CppCodeGenWriteBarrier((&___Progress_1), value);
	}

	inline static int32_t get_offset_of_Parameters_2() { return static_cast<int32_t>(offsetof(TestContext_t2339225140_StaticFields, ___Parameters_2)); }
	inline TestParameters_t2765012299 * get_Parameters_2() const { return ___Parameters_2; }
	inline TestParameters_t2765012299 ** get_address_of_Parameters_2() { return &___Parameters_2; }
	inline void set_Parameters_2(TestParameters_t2765012299 * value)
	{
		___Parameters_2 = value;
		Il2CppCodeGenWriteBarrier((&___Parameters_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTCONTEXT_T2339225140_H
#ifndef LIST_1_T171055532_H
#define LIST_1_T171055532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment>
struct  List_1_t171055532  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NameFragmentU5BU5D_t2426015411* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t171055532, ____items_1)); }
	inline NameFragmentU5BU5D_t2426015411* get__items_1() const { return ____items_1; }
	inline NameFragmentU5BU5D_t2426015411** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NameFragmentU5BU5D_t2426015411* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t171055532, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t171055532, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t171055532_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	NameFragmentU5BU5D_t2426015411* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t171055532_StaticFields, ___EmptyArray_4)); }
	inline NameFragmentU5BU5D_t2426015411* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline NameFragmentU5BU5D_t2426015411** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(NameFragmentU5BU5D_t2426015411* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T171055532_H
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
#ifndef TESTFILTER_T2701680237_H
#define TESTFILTER_T2701680237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestFilter
struct  TestFilter_t2701680237  : public RuntimeObject
{
public:
	// System.Boolean NUnit.Framework.Internal.TestFilter::<TopLevel>k__BackingField
	bool ___U3CTopLevelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTopLevelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TestFilter_t2701680237, ___U3CTopLevelU3Ek__BackingField_1)); }
	inline bool get_U3CTopLevelU3Ek__BackingField_1() const { return ___U3CTopLevelU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CTopLevelU3Ek__BackingField_1() { return &___U3CTopLevelU3Ek__BackingField_1; }
	inline void set_U3CTopLevelU3Ek__BackingField_1(bool value)
	{
		___U3CTopLevelU3Ek__BackingField_1 = value;
	}
};

struct TestFilter_t2701680237_StaticFields
{
public:
	// NUnit.Framework.Internal.TestFilter NUnit.Framework.Internal.TestFilter::Empty
	TestFilter_t2701680237 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(TestFilter_t2701680237_StaticFields, ___Empty_0)); }
	inline TestFilter_t2701680237 * get_Empty_0() const { return ___Empty_0; }
	inline TestFilter_t2701680237 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(TestFilter_t2701680237 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTFILTER_T2701680237_H
#ifndef TESTLISTENER_T3563649619_H
#define TESTLISTENER_T3563649619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestListener
struct  TestListener_t3563649619  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTLISTENER_T3563649619_H
#ifndef TNODE_T3946371078_H
#define TNODE_T3946371078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Interfaces.TNode
struct  TNode_t3946371078  : public RuntimeObject
{
public:
	// System.String NUnit.Framework.Interfaces.TNode::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String NUnit.Framework.Interfaces.TNode::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_1;
	// System.Boolean NUnit.Framework.Interfaces.TNode::<ValueIsCDATA>k__BackingField
	bool ___U3CValueIsCDATAU3Ek__BackingField_2;
	// NUnit.Framework.Interfaces.AttributeDictionary NUnit.Framework.Interfaces.TNode::<Attributes>k__BackingField
	AttributeDictionary_t3588731866 * ___U3CAttributesU3Ek__BackingField_3;
	// NUnit.Framework.Interfaces.NodeList NUnit.Framework.Interfaces.TNode::<ChildNodes>k__BackingField
	NodeList_t411009435 * ___U3CChildNodesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TNode_t3946371078, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TNode_t3946371078, ___U3CValueU3Ek__BackingField_1)); }
	inline String_t* get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(String_t* value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CValueIsCDATAU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TNode_t3946371078, ___U3CValueIsCDATAU3Ek__BackingField_2)); }
	inline bool get_U3CValueIsCDATAU3Ek__BackingField_2() const { return ___U3CValueIsCDATAU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CValueIsCDATAU3Ek__BackingField_2() { return &___U3CValueIsCDATAU3Ek__BackingField_2; }
	inline void set_U3CValueIsCDATAU3Ek__BackingField_2(bool value)
	{
		___U3CValueIsCDATAU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TNode_t3946371078, ___U3CAttributesU3Ek__BackingField_3)); }
	inline AttributeDictionary_t3588731866 * get_U3CAttributesU3Ek__BackingField_3() const { return ___U3CAttributesU3Ek__BackingField_3; }
	inline AttributeDictionary_t3588731866 ** get_address_of_U3CAttributesU3Ek__BackingField_3() { return &___U3CAttributesU3Ek__BackingField_3; }
	inline void set_U3CAttributesU3Ek__BackingField_3(AttributeDictionary_t3588731866 * value)
	{
		___U3CAttributesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAttributesU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CChildNodesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TNode_t3946371078, ___U3CChildNodesU3Ek__BackingField_4)); }
	inline NodeList_t411009435 * get_U3CChildNodesU3Ek__BackingField_4() const { return ___U3CChildNodesU3Ek__BackingField_4; }
	inline NodeList_t411009435 ** get_address_of_U3CChildNodesU3Ek__BackingField_4() { return &___U3CChildNodesU3Ek__BackingField_4; }
	inline void set_U3CChildNodesU3Ek__BackingField_4(NodeList_t411009435 * value)
	{
		___U3CChildNodesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CChildNodesU3Ek__BackingField_4), value);
	}
};

struct TNode_t3946371078_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex NUnit.Framework.Interfaces.TNode::InvalidXmlCharactersRegex
	Regex_t3657309853 * ___InvalidXmlCharactersRegex_5;

public:
	inline static int32_t get_offset_of_InvalidXmlCharactersRegex_5() { return static_cast<int32_t>(offsetof(TNode_t3946371078_StaticFields, ___InvalidXmlCharactersRegex_5)); }
	inline Regex_t3657309853 * get_InvalidXmlCharactersRegex_5() const { return ___InvalidXmlCharactersRegex_5; }
	inline Regex_t3657309853 ** get_address_of_InvalidXmlCharactersRegex_5() { return &___InvalidXmlCharactersRegex_5; }
	inline void set_InvalidXmlCharactersRegex_5(Regex_t3657309853 * value)
	{
		___InvalidXmlCharactersRegex_5 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidXmlCharactersRegex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TNODE_T3946371078_H
#ifndef NAMEFRAGMENT_T2993948086_H
#define NAMEFRAGMENT_T2993948086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/NameFragment
struct  NameFragment_t2993948086  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEFRAGMENT_T2993948086_H
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
#ifndef TESTOUTPUT_T3408727266_H
#define TESTOUTPUT_T3408727266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Interfaces.TestOutput
struct  TestOutput_t3408727266  : public RuntimeObject
{
public:
	// System.String NUnit.Framework.Interfaces.TestOutput::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.String NUnit.Framework.Interfaces.TestOutput::<Stream>k__BackingField
	String_t* ___U3CStreamU3Ek__BackingField_1;
	// System.String NUnit.Framework.Interfaces.TestOutput::<TestName>k__BackingField
	String_t* ___U3CTestNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TestOutput_t3408727266, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TestOutput_t3408727266, ___U3CStreamU3Ek__BackingField_1)); }
	inline String_t* get_U3CStreamU3Ek__BackingField_1() const { return ___U3CStreamU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CStreamU3Ek__BackingField_1() { return &___U3CStreamU3Ek__BackingField_1; }
	inline void set_U3CStreamU3Ek__BackingField_1(String_t* value)
	{
		___U3CStreamU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStreamU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CTestNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TestOutput_t3408727266, ___U3CTestNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CTestNameU3Ek__BackingField_2() const { return ___U3CTestNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTestNameU3Ek__BackingField_2() { return &___U3CTestNameU3Ek__BackingField_2; }
	inline void set_U3CTestNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CTestNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestNameU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTOUTPUT_T3408727266_H
#ifndef U3CU3EC_T4110531043_H
#define U3CU3EC_T4110531043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestExecutionContext/<>c
struct  U3CU3Ec_t4110531043  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4110531043_StaticFields
{
public:
	// NUnit.Framework.Internal.TestExecutionContext/<>c NUnit.Framework.Internal.TestExecutionContext/<>c::<>9
	U3CU3Ec_t4110531043 * ___U3CU3E9_0;
	// NUnit.Framework.Constraints.ValueFormatter NUnit.Framework.Internal.TestExecutionContext/<>c::<>9__9_0
	ValueFormatter_t4100324616 * ___U3CU3E9__9_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4110531043_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4110531043 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4110531043 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4110531043 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4110531043_StaticFields, ___U3CU3E9__9_0_1)); }
	inline ValueFormatter_t4100324616 * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline ValueFormatter_t4100324616 ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(ValueFormatter_t4100324616 * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__9_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T4110531043_H
#ifndef TESTNAMEGENERATOR_T2179848069_H
#define TESTNAMEGENERATOR_T2179848069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator
struct  TestNameGenerator_t2179848069  : public RuntimeObject
{
public:
	// System.String NUnit.Framework.Internal.TestNameGenerator::_pattern
	String_t* ____pattern_1;
	// System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment> NUnit.Framework.Internal.TestNameGenerator::_fragments
	List_1_t171055532 * ____fragments_2;

public:
	inline static int32_t get_offset_of__pattern_1() { return static_cast<int32_t>(offsetof(TestNameGenerator_t2179848069, ____pattern_1)); }
	inline String_t* get__pattern_1() const { return ____pattern_1; }
	inline String_t** get_address_of__pattern_1() { return &____pattern_1; }
	inline void set__pattern_1(String_t* value)
	{
		____pattern_1 = value;
		Il2CppCodeGenWriteBarrier((&____pattern_1), value);
	}

	inline static int32_t get_offset_of__fragments_2() { return static_cast<int32_t>(offsetof(TestNameGenerator_t2179848069, ____fragments_2)); }
	inline List_1_t171055532 * get__fragments_2() const { return ____fragments_2; }
	inline List_1_t171055532 ** get_address_of__fragments_2() { return &____fragments_2; }
	inline void set__fragments_2(List_1_t171055532 * value)
	{
		____fragments_2 = value;
		Il2CppCodeGenWriteBarrier((&____fragments_2), value);
	}
};

struct TestNameGenerator_t2179848069_StaticFields
{
public:
	// System.String NUnit.Framework.Internal.TestNameGenerator::DefaultTestNamePattern
	String_t* ___DefaultTestNamePattern_0;

public:
	inline static int32_t get_offset_of_DefaultTestNamePattern_0() { return static_cast<int32_t>(offsetof(TestNameGenerator_t2179848069_StaticFields, ___DefaultTestNamePattern_0)); }
	inline String_t* get_DefaultTestNamePattern_0() const { return ___DefaultTestNamePattern_0; }
	inline String_t** get_address_of_DefaultTestNamePattern_0() { return &___DefaultTestNamePattern_0; }
	inline void set_DefaultTestNamePattern_0(String_t* value)
	{
		___DefaultTestNamePattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultTestNamePattern_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTNAMEGENERATOR_T2179848069_H
#ifndef TRUECONSTRAINT_T293028705_H
#define TRUECONSTRAINT_T293028705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.TrueConstraint
struct  TrueConstraint_t293028705  : public Constraint_t2792793352
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRUECONSTRAINT_T293028705_H
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
#ifndef NUNITEXCEPTION_T503223294_H
#define NUNITEXCEPTION_T503223294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.NUnitException
struct  NUnitException_t503223294  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUNITEXCEPTION_T503223294_H
#ifndef RESULTSTATEEXCEPTION_T446384429_H
#define RESULTSTATEEXCEPTION_T446384429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.ResultStateException
struct  ResultStateException_t446384429  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTSTATEEXCEPTION_T446384429_H
#ifndef FALSECONSTRAINT_T3043866582_H
#define FALSECONSTRAINT_T3043866582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.FalseConstraint
struct  FalseConstraint_t3043866582  : public Constraint_t2792793352
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FALSECONSTRAINT_T3043866582_H
#ifndef LONGLIVEDMARSHALBYREFOBJECT_T2686163428_H
#define LONGLIVEDMARSHALBYREFOBJECT_T2686163428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Compatibility.LongLivedMarshalByRefObject
struct  LongLivedMarshalByRefObject_t2686163428  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONGLIVEDMARSHALBYREFOBJECT_T2686163428_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
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
#ifndef EVENTLISTENERTEXTWRITER_T1736808679_H
#define EVENTLISTENERTEXTWRITER_T1736808679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.Execution.EventListenerTextWriter
struct  EventListenerTextWriter_t1736808679  : public TextWriter_t3478189236
{
public:
	// System.IO.TextWriter NUnit.Framework.Internal.Execution.EventListenerTextWriter::_defaultWriter
	TextWriter_t3478189236 * ____defaultWriter_3;
	// System.String NUnit.Framework.Internal.Execution.EventListenerTextWriter::_streamName
	String_t* ____streamName_4;

public:
	inline static int32_t get_offset_of__defaultWriter_3() { return static_cast<int32_t>(offsetof(EventListenerTextWriter_t1736808679, ____defaultWriter_3)); }
	inline TextWriter_t3478189236 * get__defaultWriter_3() const { return ____defaultWriter_3; }
	inline TextWriter_t3478189236 ** get_address_of__defaultWriter_3() { return &____defaultWriter_3; }
	inline void set__defaultWriter_3(TextWriter_t3478189236 * value)
	{
		____defaultWriter_3 = value;
		Il2CppCodeGenWriteBarrier((&____defaultWriter_3), value);
	}

	inline static int32_t get_offset_of__streamName_4() { return static_cast<int32_t>(offsetof(EventListenerTextWriter_t1736808679, ____streamName_4)); }
	inline String_t* get__streamName_4() const { return ____streamName_4; }
	inline String_t** get_address_of__streamName_4() { return &____streamName_4; }
	inline void set__streamName_4(String_t* value)
	{
		____streamName_4 = value;
		Il2CppCodeGenWriteBarrier((&____streamName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLISTENERTEXTWRITER_T1736808679_H
#ifndef EMPTYFILTER_T3371835522_H
#define EMPTYFILTER_T3371835522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestFilter/EmptyFilter
struct  EmptyFilter_t3371835522  : public TestFilter_t2701680237
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYFILTER_T3371835522_H
#ifndef NUNITATTRIBUTE_T565614204_H
#define NUNITATTRIBUTE_T565614204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.NUnitAttribute
struct  NUnitAttribute_t565614204  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUNITATTRIBUTE_T565614204_H
#ifndef EQUALCONSTRAINT_T520268896_H
#define EQUALCONSTRAINT_T520268896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.EqualConstraint
struct  EqualConstraint_t520268896  : public Constraint_t2792793352
{
public:
	// System.Object NUnit.Framework.Constraints.EqualConstraint::_expected
	RuntimeObject * ____expected_4;
	// NUnit.Framework.Constraints.Tolerance NUnit.Framework.Constraints.EqualConstraint::_tolerance
	Tolerance_t819151345 * ____tolerance_5;
	// NUnit.Framework.Constraints.NUnitEqualityComparer NUnit.Framework.Constraints.EqualConstraint::_comparer
	NUnitEqualityComparer_t3588730761 * ____comparer_6;
	// System.Boolean NUnit.Framework.Constraints.EqualConstraint::<ClipStrings>k__BackingField
	bool ___U3CClipStringsU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of__expected_4() { return static_cast<int32_t>(offsetof(EqualConstraint_t520268896, ____expected_4)); }
	inline RuntimeObject * get__expected_4() const { return ____expected_4; }
	inline RuntimeObject ** get_address_of__expected_4() { return &____expected_4; }
	inline void set__expected_4(RuntimeObject * value)
	{
		____expected_4 = value;
		Il2CppCodeGenWriteBarrier((&____expected_4), value);
	}

	inline static int32_t get_offset_of__tolerance_5() { return static_cast<int32_t>(offsetof(EqualConstraint_t520268896, ____tolerance_5)); }
	inline Tolerance_t819151345 * get__tolerance_5() const { return ____tolerance_5; }
	inline Tolerance_t819151345 ** get_address_of__tolerance_5() { return &____tolerance_5; }
	inline void set__tolerance_5(Tolerance_t819151345 * value)
	{
		____tolerance_5 = value;
		Il2CppCodeGenWriteBarrier((&____tolerance_5), value);
	}

	inline static int32_t get_offset_of__comparer_6() { return static_cast<int32_t>(offsetof(EqualConstraint_t520268896, ____comparer_6)); }
	inline NUnitEqualityComparer_t3588730761 * get__comparer_6() const { return ____comparer_6; }
	inline NUnitEqualityComparer_t3588730761 ** get_address_of__comparer_6() { return &____comparer_6; }
	inline void set__comparer_6(NUnitEqualityComparer_t3588730761 * value)
	{
		____comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_6), value);
	}

	inline static int32_t get_offset_of_U3CClipStringsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EqualConstraint_t520268896, ___U3CClipStringsU3Ek__BackingField_7)); }
	inline bool get_U3CClipStringsU3Ek__BackingField_7() const { return ___U3CClipStringsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CClipStringsU3Ek__BackingField_7() { return &___U3CClipStringsU3Ek__BackingField_7; }
	inline void set_U3CClipStringsU3Ek__BackingField_7(bool value)
	{
		___U3CClipStringsU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALCONSTRAINT_T520268896_H
#ifndef ENUMERATOR_T2060299409_H
#define ENUMERATOR_T2060299409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<NUnit.Framework.Internal.TestNameGenerator/NameFragment>
struct  Enumerator_t2060299409 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t171055532 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	NameFragment_t2993948086 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2060299409, ___l_0)); }
	inline List_1_t171055532 * get_l_0() const { return ___l_0; }
	inline List_1_t171055532 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t171055532 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2060299409, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2060299409, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2060299409, ___current_3)); }
	inline NameFragment_t2993948086 * get_current_3() const { return ___current_3; }
	inline NameFragment_t2993948086 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(NameFragment_t2993948086 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2060299409_H
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
#ifndef ARGUMENTFRAGMENT_T2290785126_H
#define ARGUMENTFRAGMENT_T2290785126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment
struct  ArgumentFragment_t2290785126  : public NameFragment_t2993948086
{
public:
	// System.Int32 NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment::_index
	int32_t ____index_0;
	// System.Int32 NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment::_maxStringLength
	int32_t ____maxStringLength_1;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(ArgumentFragment_t2290785126, ____index_0)); }
	inline int32_t get__index_0() const { return ____index_0; }
	inline int32_t* get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(int32_t value)
	{
		____index_0 = value;
	}

	inline static int32_t get_offset_of__maxStringLength_1() { return static_cast<int32_t>(offsetof(ArgumentFragment_t2290785126, ____maxStringLength_1)); }
	inline int32_t get__maxStringLength_1() const { return ____maxStringLength_1; }
	inline int32_t* get_address_of__maxStringLength_1() { return &____maxStringLength_1; }
	inline void set__maxStringLength_1(int32_t value)
	{
		____maxStringLength_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTFRAGMENT_T2290785126_H
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
#ifndef FIXEDTEXTFRAGMENT_T3279578530_H
#define FIXEDTEXTFRAGMENT_T3279578530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/FixedTextFragment
struct  FixedTextFragment_t3279578530  : public NameFragment_t2993948086
{
public:
	// System.String NUnit.Framework.Internal.TestNameGenerator/FixedTextFragment::_text
	String_t* ____text_0;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(FixedTextFragment_t3279578530, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((&____text_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDTEXTFRAGMENT_T3279578530_H
#ifndef METHODNAMEFRAGMENT_T1693502444_H
#define METHODNAMEFRAGMENT_T1693502444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/MethodNameFragment
struct  MethodNameFragment_t1693502444  : public NameFragment_t2993948086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODNAMEFRAGMENT_T1693502444_H
#ifndef TESTIDFRAGMENT_T123621352_H
#define TESTIDFRAGMENT_T123621352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/TestIDFragment
struct  TestIDFragment_t123621352  : public NameFragment_t2993948086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTIDFRAGMENT_T123621352_H
#ifndef NAMESPACEFRAGMENT_T1263772683_H
#define NAMESPACEFRAGMENT_T1263772683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/NamespaceFragment
struct  NamespaceFragment_t1263772683  : public NameFragment_t2993948086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACEFRAGMENT_T1263772683_H
#ifndef CLASSNAMEFRAGMENT_T819157190_H
#define CLASSNAMEFRAGMENT_T819157190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/ClassNameFragment
struct  ClassNameFragment_t819157190  : public NameFragment_t2993948086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSNAMEFRAGMENT_T819157190_H
#ifndef CLASSFULLNAMEFRAGMENT_T2403317993_H
#define CLASSFULLNAMEFRAGMENT_T2403317993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/ClassFullNameFragment
struct  ClassFullNameFragment_t2403317993  : public NameFragment_t2993948086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSFULLNAMEFRAGMENT_T2403317993_H
#ifndef METHODFULLNAMEFRAGMENT_T3487880812_H
#define METHODFULLNAMEFRAGMENT_T3487880812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/MethodFullNameFragment
struct  MethodFullNameFragment_t3487880812  : public NameFragment_t2993948086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODFULLNAMEFRAGMENT_T3487880812_H
#ifndef ARGLISTFRAGMENT_T1470563774_H
#define ARGLISTFRAGMENT_T1470563774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestNameGenerator/ArgListFragment
struct  ArgListFragment_t1470563774  : public NameFragment_t2993948086
{
public:
	// System.Int32 NUnit.Framework.Internal.TestNameGenerator/ArgListFragment::_maxStringLength
	int32_t ____maxStringLength_0;

public:
	inline static int32_t get_offset_of__maxStringLength_0() { return static_cast<int32_t>(offsetof(ArgListFragment_t1470563774, ____maxStringLength_0)); }
	inline int32_t get__maxStringLength_0() const { return ____maxStringLength_0; }
	inline int32_t* get_address_of__maxStringLength_0() { return &____maxStringLength_0; }
	inline void set__maxStringLength_0(int32_t value)
	{
		____maxStringLength_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGLISTFRAGMENT_T1470563774_H
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
#ifndef ONETIMETEARDOWNATTRIBUTE_T3231931417_H
#define ONETIMETEARDOWNATTRIBUTE_T3231931417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.OneTimeTearDownAttribute
struct  OneTimeTearDownAttribute_t3231931417  : public NUnitAttribute_t565614204
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONETIMETEARDOWNATTRIBUTE_T3231931417_H
#ifndef ONETIMESETUPATTRIBUTE_T1341445578_H
#define ONETIMESETUPATTRIBUTE_T1341445578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.OneTimeSetUpAttribute
struct  OneTimeSetUpAttribute_t1341445578  : public NUnitAttribute_t565614204
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONETIMESETUPATTRIBUTE_T1341445578_H
#ifndef TEARDOWNATTRIBUTE_T4180222501_H
#define TEARDOWNATTRIBUTE_T4180222501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.TearDownAttribute
struct  TearDownAttribute_t4180222501  : public NUnitAttribute_t565614204
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEARDOWNATTRIBUTE_T4180222501_H
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
#ifndef CONSTRAINTSTATUS_T1533334949_H
#define CONSTRAINTSTATUS_T1533334949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.ConstraintStatus
struct  ConstraintStatus_t1533334949 
{
public:
	// System.Int32 NUnit.Framework.Constraints.ConstraintStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConstraintStatus_t1533334949, ___value___1)); }
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
#endif // CONSTRAINTSTATUS_T1533334949_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef PARALLELSCOPE_T766094104_H
#define PARALLELSCOPE_T766094104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.ParallelScope
struct  ParallelScope_t766094104 
{
public:
	// System.Int32 NUnit.Framework.ParallelScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParallelScope_t766094104, ___value___1)); }
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
#endif // PARALLELSCOPE_T766094104_H
#ifndef TESTEXECUTIONSTATUS_T1131606969_H
#define TESTEXECUTIONSTATUS_T1131606969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestExecutionStatus
struct  TestExecutionStatus_t1131606969 
{
public:
	// System.Int32 NUnit.Framework.Internal.TestExecutionStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TestExecutionStatus_t1131606969, ___value___1)); }
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
#endif // TESTEXECUTIONSTATUS_T1131606969_H
#ifndef LAZYTHREADSAFETYMODE_T1232456173_H
#define LAZYTHREADSAFETYMODE_T1232456173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.LazyThreadSafetyMode
struct  LazyThreadSafetyMode_t1232456173 
{
public:
	// System.Int32 System.Threading.LazyThreadSafetyMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LazyThreadSafetyMode_t1232456173, ___value___1)); }
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
#endif // LAZYTHREADSAFETYMODE_T1232456173_H
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
#ifndef SETUPATTRIBUTE_T1818501660_H
#define SETUPATTRIBUTE_T1818501660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.SetUpAttribute
struct  SetUpAttribute_t1818501660  : public NUnitAttribute_t565614204
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPATTRIBUTE_T1818501660_H
#ifndef RUNSTATE_T3577006461_H
#define RUNSTATE_T3577006461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Interfaces.RunState
struct  RunState_t3577006461 
{
public:
	// System.Int32 NUnit.Framework.Interfaces.RunState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RunState_t3577006461, ___value___1)); }
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
#endif // RUNSTATE_T3577006461_H
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
#ifndef FAILURESITE_T1159451337_H
#define FAILURESITE_T1159451337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Interfaces.FailureSite
struct  FailureSite_t1159451337 
{
public:
	// System.Int32 NUnit.Framework.Interfaces.FailureSite::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FailureSite_t1159451337, ___value___1)); }
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
#endif // FAILURESITE_T1159451337_H
#ifndef COMBININGSTRATEGYATTRIBUTE_T1222608571_H
#define COMBININGSTRATEGYATTRIBUTE_T1222608571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.CombiningStrategyAttribute
struct  CombiningStrategyAttribute_t1222608571  : public NUnitAttribute_t565614204
{
public:
	// NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder NUnit.Framework.CombiningStrategyAttribute::_builder
	NUnitTestCaseBuilder_t622748773 * ____builder_0;
	// NUnit.Framework.Interfaces.ICombiningStrategy NUnit.Framework.CombiningStrategyAttribute::_strategy
	RuntimeObject* ____strategy_1;
	// NUnit.Framework.Interfaces.IParameterDataProvider NUnit.Framework.CombiningStrategyAttribute::_dataProvider
	RuntimeObject* ____dataProvider_2;

public:
	inline static int32_t get_offset_of__builder_0() { return static_cast<int32_t>(offsetof(CombiningStrategyAttribute_t1222608571, ____builder_0)); }
	inline NUnitTestCaseBuilder_t622748773 * get__builder_0() const { return ____builder_0; }
	inline NUnitTestCaseBuilder_t622748773 ** get_address_of__builder_0() { return &____builder_0; }
	inline void set__builder_0(NUnitTestCaseBuilder_t622748773 * value)
	{
		____builder_0 = value;
		Il2CppCodeGenWriteBarrier((&____builder_0), value);
	}

	inline static int32_t get_offset_of__strategy_1() { return static_cast<int32_t>(offsetof(CombiningStrategyAttribute_t1222608571, ____strategy_1)); }
	inline RuntimeObject* get__strategy_1() const { return ____strategy_1; }
	inline RuntimeObject** get_address_of__strategy_1() { return &____strategy_1; }
	inline void set__strategy_1(RuntimeObject* value)
	{
		____strategy_1 = value;
		Il2CppCodeGenWriteBarrier((&____strategy_1), value);
	}

	inline static int32_t get_offset_of__dataProvider_2() { return static_cast<int32_t>(offsetof(CombiningStrategyAttribute_t1222608571, ____dataProvider_2)); }
	inline RuntimeObject* get__dataProvider_2() const { return ____dataProvider_2; }
	inline RuntimeObject** get_address_of__dataProvider_2() { return &____dataProvider_2; }
	inline void set__dataProvider_2(RuntimeObject* value)
	{
		____dataProvider_2 = value;
		Il2CppCodeGenWriteBarrier((&____dataProvider_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMBININGSTRATEGYATTRIBUTE_T1222608571_H
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
#ifndef THREADSTATEEXCEPTION_T3003788475_H
#define THREADSTATEEXCEPTION_T3003788475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStateException
struct  ThreadStateException_t3003788475  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATEEXCEPTION_T3003788475_H
#ifndef THREADSTATE_T2533302383_H
#define THREADSTATE_T2533302383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2533302383 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2533302383, ___value___1)); }
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
#endif // THREADSTATE_T2533302383_H
#ifndef TOLERANCEMODE_T1002201888_H
#define TOLERANCEMODE_T1002201888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.ToleranceMode
struct  ToleranceMode_t1002201888 
{
public:
	// System.Int32 NUnit.Framework.Constraints.ToleranceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToleranceMode_t1002201888, ___value___1)); }
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
#endif // TOLERANCEMODE_T1002201888_H
#ifndef THREADABORTEXCEPTION_T4074510458_H
#define THREADABORTEXCEPTION_T4074510458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadAbortException
struct  ThreadAbortException_t4074510458  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADABORTEXCEPTION_T4074510458_H
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
#ifndef MESSAGEWRITER_T4095718909_H
#define MESSAGEWRITER_T4095718909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.MessageWriter
struct  MessageWriter_t4095718909  : public StringWriter_t802263757
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEWRITER_T4095718909_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
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
#ifndef TESTSTATUS_T2287483310_H
#define TESTSTATUS_T2287483310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Interfaces.TestStatus
struct  TestStatus_t2287483310 
{
public:
	// System.Int32 NUnit.Framework.Interfaces.TestStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TestStatus_t2287483310, ___value___1)); }
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
#endif // TESTSTATUS_T2287483310_H
#ifndef THEORYATTRIBUTE_T658569493_H
#define THEORYATTRIBUTE_T658569493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.TheoryAttribute
struct  TheoryAttribute_t658569493  : public CombiningStrategyAttribute_t1222608571
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THEORYATTRIBUTE_T658569493_H
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
#ifndef RESULTSTATE_T492092786_H
#define RESULTSTATE_T492092786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Interfaces.ResultState
struct  ResultState_t492092786  : public RuntimeObject
{
public:
	// NUnit.Framework.Interfaces.TestStatus NUnit.Framework.Interfaces.ResultState::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_13;
	// System.String NUnit.Framework.Interfaces.ResultState::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_14;
	// NUnit.Framework.Interfaces.FailureSite NUnit.Framework.Interfaces.ResultState::<Site>k__BackingField
	int32_t ___U3CSiteU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ResultState_t492092786, ___U3CStatusU3Ek__BackingField_13)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_13() const { return ___U3CStatusU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_13() { return &___U3CStatusU3Ek__BackingField_13; }
	inline void set_U3CStatusU3Ek__BackingField_13(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ResultState_t492092786, ___U3CLabelU3Ek__BackingField_14)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_14() const { return ___U3CLabelU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_14() { return &___U3CLabelU3Ek__BackingField_14; }
	inline void set_U3CLabelU3Ek__BackingField_14(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLabelU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CSiteU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ResultState_t492092786, ___U3CSiteU3Ek__BackingField_15)); }
	inline int32_t get_U3CSiteU3Ek__BackingField_15() const { return ___U3CSiteU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CSiteU3Ek__BackingField_15() { return &___U3CSiteU3Ek__BackingField_15; }
	inline void set_U3CSiteU3Ek__BackingField_15(int32_t value)
	{
		___U3CSiteU3Ek__BackingField_15 = value;
	}
};

struct ResultState_t492092786_StaticFields
{
public:
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::Inconclusive
	ResultState_t492092786 * ___Inconclusive_0;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::Skipped
	ResultState_t492092786 * ___Skipped_1;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::Ignored
	ResultState_t492092786 * ___Ignored_2;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::Explicit
	ResultState_t492092786 * ___Explicit_3;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::Success
	ResultState_t492092786 * ___Success_4;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::Failure
	ResultState_t492092786 * ___Failure_5;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::Error
	ResultState_t492092786 * ___Error_6;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::Cancelled
	ResultState_t492092786 * ___Cancelled_7;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::NotRunnable
	ResultState_t492092786 * ___NotRunnable_8;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::ChildFailure
	ResultState_t492092786 * ___ChildFailure_9;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::SetUpFailure
	ResultState_t492092786 * ___SetUpFailure_10;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::SetUpError
	ResultState_t492092786 * ___SetUpError_11;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::TearDownError
	ResultState_t492092786 * ___TearDownError_12;

public:
	inline static int32_t get_offset_of_Inconclusive_0() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___Inconclusive_0)); }
	inline ResultState_t492092786 * get_Inconclusive_0() const { return ___Inconclusive_0; }
	inline ResultState_t492092786 ** get_address_of_Inconclusive_0() { return &___Inconclusive_0; }
	inline void set_Inconclusive_0(ResultState_t492092786 * value)
	{
		___Inconclusive_0 = value;
		Il2CppCodeGenWriteBarrier((&___Inconclusive_0), value);
	}

	inline static int32_t get_offset_of_Skipped_1() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___Skipped_1)); }
	inline ResultState_t492092786 * get_Skipped_1() const { return ___Skipped_1; }
	inline ResultState_t492092786 ** get_address_of_Skipped_1() { return &___Skipped_1; }
	inline void set_Skipped_1(ResultState_t492092786 * value)
	{
		___Skipped_1 = value;
		Il2CppCodeGenWriteBarrier((&___Skipped_1), value);
	}

	inline static int32_t get_offset_of_Ignored_2() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___Ignored_2)); }
	inline ResultState_t492092786 * get_Ignored_2() const { return ___Ignored_2; }
	inline ResultState_t492092786 ** get_address_of_Ignored_2() { return &___Ignored_2; }
	inline void set_Ignored_2(ResultState_t492092786 * value)
	{
		___Ignored_2 = value;
		Il2CppCodeGenWriteBarrier((&___Ignored_2), value);
	}

	inline static int32_t get_offset_of_Explicit_3() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___Explicit_3)); }
	inline ResultState_t492092786 * get_Explicit_3() const { return ___Explicit_3; }
	inline ResultState_t492092786 ** get_address_of_Explicit_3() { return &___Explicit_3; }
	inline void set_Explicit_3(ResultState_t492092786 * value)
	{
		___Explicit_3 = value;
		Il2CppCodeGenWriteBarrier((&___Explicit_3), value);
	}

	inline static int32_t get_offset_of_Success_4() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___Success_4)); }
	inline ResultState_t492092786 * get_Success_4() const { return ___Success_4; }
	inline ResultState_t492092786 ** get_address_of_Success_4() { return &___Success_4; }
	inline void set_Success_4(ResultState_t492092786 * value)
	{
		___Success_4 = value;
		Il2CppCodeGenWriteBarrier((&___Success_4), value);
	}

	inline static int32_t get_offset_of_Failure_5() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___Failure_5)); }
	inline ResultState_t492092786 * get_Failure_5() const { return ___Failure_5; }
	inline ResultState_t492092786 ** get_address_of_Failure_5() { return &___Failure_5; }
	inline void set_Failure_5(ResultState_t492092786 * value)
	{
		___Failure_5 = value;
		Il2CppCodeGenWriteBarrier((&___Failure_5), value);
	}

	inline static int32_t get_offset_of_Error_6() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___Error_6)); }
	inline ResultState_t492092786 * get_Error_6() const { return ___Error_6; }
	inline ResultState_t492092786 ** get_address_of_Error_6() { return &___Error_6; }
	inline void set_Error_6(ResultState_t492092786 * value)
	{
		___Error_6 = value;
		Il2CppCodeGenWriteBarrier((&___Error_6), value);
	}

	inline static int32_t get_offset_of_Cancelled_7() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___Cancelled_7)); }
	inline ResultState_t492092786 * get_Cancelled_7() const { return ___Cancelled_7; }
	inline ResultState_t492092786 ** get_address_of_Cancelled_7() { return &___Cancelled_7; }
	inline void set_Cancelled_7(ResultState_t492092786 * value)
	{
		___Cancelled_7 = value;
		Il2CppCodeGenWriteBarrier((&___Cancelled_7), value);
	}

	inline static int32_t get_offset_of_NotRunnable_8() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___NotRunnable_8)); }
	inline ResultState_t492092786 * get_NotRunnable_8() const { return ___NotRunnable_8; }
	inline ResultState_t492092786 ** get_address_of_NotRunnable_8() { return &___NotRunnable_8; }
	inline void set_NotRunnable_8(ResultState_t492092786 * value)
	{
		___NotRunnable_8 = value;
		Il2CppCodeGenWriteBarrier((&___NotRunnable_8), value);
	}

	inline static int32_t get_offset_of_ChildFailure_9() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___ChildFailure_9)); }
	inline ResultState_t492092786 * get_ChildFailure_9() const { return ___ChildFailure_9; }
	inline ResultState_t492092786 ** get_address_of_ChildFailure_9() { return &___ChildFailure_9; }
	inline void set_ChildFailure_9(ResultState_t492092786 * value)
	{
		___ChildFailure_9 = value;
		Il2CppCodeGenWriteBarrier((&___ChildFailure_9), value);
	}

	inline static int32_t get_offset_of_SetUpFailure_10() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___SetUpFailure_10)); }
	inline ResultState_t492092786 * get_SetUpFailure_10() const { return ___SetUpFailure_10; }
	inline ResultState_t492092786 ** get_address_of_SetUpFailure_10() { return &___SetUpFailure_10; }
	inline void set_SetUpFailure_10(ResultState_t492092786 * value)
	{
		___SetUpFailure_10 = value;
		Il2CppCodeGenWriteBarrier((&___SetUpFailure_10), value);
	}

	inline static int32_t get_offset_of_SetUpError_11() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___SetUpError_11)); }
	inline ResultState_t492092786 * get_SetUpError_11() const { return ___SetUpError_11; }
	inline ResultState_t492092786 ** get_address_of_SetUpError_11() { return &___SetUpError_11; }
	inline void set_SetUpError_11(ResultState_t492092786 * value)
	{
		___SetUpError_11 = value;
		Il2CppCodeGenWriteBarrier((&___SetUpError_11), value);
	}

	inline static int32_t get_offset_of_TearDownError_12() { return static_cast<int32_t>(offsetof(ResultState_t492092786_StaticFields, ___TearDownError_12)); }
	inline ResultState_t492092786 * get_TearDownError_12() const { return ___TearDownError_12; }
	inline ResultState_t492092786 ** get_address_of_TearDownError_12() { return &___TearDownError_12; }
	inline void set_TearDownError_12(ResultState_t492092786 * value)
	{
		___TearDownError_12 = value;
		Il2CppCodeGenWriteBarrier((&___TearDownError_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTSTATE_T492092786_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t1748372627 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___ec_to_set_37)); }
	inline ExecutionContext_t1748372627 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t1748372627 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t1748372627 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1853889766 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1853889766 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1853889766 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1853889766 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2843939325* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t1748372627 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2843939325* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2843939325** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2843939325* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t1748372627 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t1748372627 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t1748372627 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
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
#ifndef TEXTMESSAGEWRITER_T1905902127_H
#define TEXTMESSAGEWRITER_T1905902127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TextMessageWriter
struct  TextMessageWriter_t1905902127  : public MessageWriter_t4095718909
{
public:
	// System.Int32 NUnit.Framework.Internal.TextMessageWriter::maxLineLength
	int32_t ___maxLineLength_9;

public:
	inline static int32_t get_offset_of_maxLineLength_9() { return static_cast<int32_t>(offsetof(TextMessageWriter_t1905902127, ___maxLineLength_9)); }
	inline int32_t get_maxLineLength_9() const { return ___maxLineLength_9; }
	inline int32_t* get_address_of_maxLineLength_9() { return &___maxLineLength_9; }
	inline void set_maxLineLength_9(int32_t value)
	{
		___maxLineLength_9 = value;
	}
};

struct TextMessageWriter_t1905902127_StaticFields
{
public:
	// System.Int32 NUnit.Framework.Internal.TextMessageWriter::DEFAULT_LINE_LENGTH
	int32_t ___DEFAULT_LINE_LENGTH_5;
	// System.String NUnit.Framework.Internal.TextMessageWriter::Pfx_Expected
	String_t* ___Pfx_Expected_6;
	// System.String NUnit.Framework.Internal.TextMessageWriter::Pfx_Actual
	String_t* ___Pfx_Actual_7;
	// System.Int32 NUnit.Framework.Internal.TextMessageWriter::PrefixLength
	int32_t ___PrefixLength_8;

public:
	inline static int32_t get_offset_of_DEFAULT_LINE_LENGTH_5() { return static_cast<int32_t>(offsetof(TextMessageWriter_t1905902127_StaticFields, ___DEFAULT_LINE_LENGTH_5)); }
	inline int32_t get_DEFAULT_LINE_LENGTH_5() const { return ___DEFAULT_LINE_LENGTH_5; }
	inline int32_t* get_address_of_DEFAULT_LINE_LENGTH_5() { return &___DEFAULT_LINE_LENGTH_5; }
	inline void set_DEFAULT_LINE_LENGTH_5(int32_t value)
	{
		___DEFAULT_LINE_LENGTH_5 = value;
	}

	inline static int32_t get_offset_of_Pfx_Expected_6() { return static_cast<int32_t>(offsetof(TextMessageWriter_t1905902127_StaticFields, ___Pfx_Expected_6)); }
	inline String_t* get_Pfx_Expected_6() const { return ___Pfx_Expected_6; }
	inline String_t** get_address_of_Pfx_Expected_6() { return &___Pfx_Expected_6; }
	inline void set_Pfx_Expected_6(String_t* value)
	{
		___Pfx_Expected_6 = value;
		Il2CppCodeGenWriteBarrier((&___Pfx_Expected_6), value);
	}

	inline static int32_t get_offset_of_Pfx_Actual_7() { return static_cast<int32_t>(offsetof(TextMessageWriter_t1905902127_StaticFields, ___Pfx_Actual_7)); }
	inline String_t* get_Pfx_Actual_7() const { return ___Pfx_Actual_7; }
	inline String_t** get_address_of_Pfx_Actual_7() { return &___Pfx_Actual_7; }
	inline void set_Pfx_Actual_7(String_t* value)
	{
		___Pfx_Actual_7 = value;
		Il2CppCodeGenWriteBarrier((&___Pfx_Actual_7), value);
	}

	inline static int32_t get_offset_of_PrefixLength_8() { return static_cast<int32_t>(offsetof(TextMessageWriter_t1905902127_StaticFields, ___PrefixLength_8)); }
	inline int32_t get_PrefixLength_8() const { return ___PrefixLength_8; }
	inline int32_t* get_address_of_PrefixLength_8() { return &___PrefixLength_8; }
	inline void set_PrefixLength_8(int32_t value)
	{
		___PrefixLength_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESSAGEWRITER_T1905902127_H
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
#ifndef CONSTRAINTRESULT_T3673080895_H
#define CONSTRAINTRESULT_T3673080895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.ConstraintResult
struct  ConstraintResult_t3673080895  : public RuntimeObject
{
public:
	// NUnit.Framework.Constraints.IConstraint NUnit.Framework.Constraints.ConstraintResult::_constraint
	RuntimeObject* ____constraint_0;
	// System.Object NUnit.Framework.Constraints.ConstraintResult::<ActualValue>k__BackingField
	RuntimeObject * ___U3CActualValueU3Ek__BackingField_1;
	// NUnit.Framework.Constraints.ConstraintStatus NUnit.Framework.Constraints.ConstraintResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__constraint_0() { return static_cast<int32_t>(offsetof(ConstraintResult_t3673080895, ____constraint_0)); }
	inline RuntimeObject* get__constraint_0() const { return ____constraint_0; }
	inline RuntimeObject** get_address_of__constraint_0() { return &____constraint_0; }
	inline void set__constraint_0(RuntimeObject* value)
	{
		____constraint_0 = value;
		Il2CppCodeGenWriteBarrier((&____constraint_0), value);
	}

	inline static int32_t get_offset_of_U3CActualValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConstraintResult_t3673080895, ___U3CActualValueU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CActualValueU3Ek__BackingField_1() const { return ___U3CActualValueU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CActualValueU3Ek__BackingField_1() { return &___U3CActualValueU3Ek__BackingField_1; }
	inline void set_U3CActualValueU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CActualValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CActualValueU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConstraintResult_t3673080895, ___U3CStatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_2() const { return ___U3CStatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_2() { return &___U3CStatusU3Ek__BackingField_2; }
	inline void set_U3CStatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTRESULT_T3673080895_H
#ifndef TOLERANCE_T819151345_H
#define TOLERANCE_T819151345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.Tolerance
struct  Tolerance_t819151345  : public RuntimeObject
{
public:
	// NUnit.Framework.Constraints.ToleranceMode NUnit.Framework.Constraints.Tolerance::mode
	int32_t ___mode_0;
	// System.Object NUnit.Framework.Constraints.Tolerance::amount
	RuntimeObject * ___amount_1;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Tolerance_t819151345, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_amount_1() { return static_cast<int32_t>(offsetof(Tolerance_t819151345, ___amount_1)); }
	inline RuntimeObject * get_amount_1() const { return ___amount_1; }
	inline RuntimeObject ** get_address_of_amount_1() { return &___amount_1; }
	inline void set_amount_1(RuntimeObject * value)
	{
		___amount_1 = value;
		Il2CppCodeGenWriteBarrier((&___amount_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOLERANCE_T819151345_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef TESTFIXTUREATTRIBUTE_T3158426996_H
#define TESTFIXTUREATTRIBUTE_T3158426996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.TestFixtureAttribute
struct  TestFixtureAttribute_t3158426996  : public NUnitAttribute_t565614204
{
public:
	// NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder NUnit.Framework.TestFixtureAttribute::_builder
	NUnitTestFixtureBuilder_t3046604762 * ____builder_0;
	// NUnit.Framework.Interfaces.RunState NUnit.Framework.TestFixtureAttribute::<RunState>k__BackingField
	int32_t ___U3CRunStateU3Ek__BackingField_1;
	// System.Object[] NUnit.Framework.TestFixtureAttribute::<Arguments>k__BackingField
	ObjectU5BU5D_t2843939325* ___U3CArgumentsU3Ek__BackingField_2;
	// NUnit.Framework.Interfaces.IPropertyBag NUnit.Framework.TestFixtureAttribute::<Properties>k__BackingField
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_3;
	// System.Type[] NUnit.Framework.TestFixtureAttribute::<TypeArgs>k__BackingField
	TypeU5BU5D_t3940880105* ___U3CTypeArgsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__builder_0() { return static_cast<int32_t>(offsetof(TestFixtureAttribute_t3158426996, ____builder_0)); }
	inline NUnitTestFixtureBuilder_t3046604762 * get__builder_0() const { return ____builder_0; }
	inline NUnitTestFixtureBuilder_t3046604762 ** get_address_of__builder_0() { return &____builder_0; }
	inline void set__builder_0(NUnitTestFixtureBuilder_t3046604762 * value)
	{
		____builder_0 = value;
		Il2CppCodeGenWriteBarrier((&____builder_0), value);
	}

	inline static int32_t get_offset_of_U3CRunStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TestFixtureAttribute_t3158426996, ___U3CRunStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CRunStateU3Ek__BackingField_1() const { return ___U3CRunStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CRunStateU3Ek__BackingField_1() { return &___U3CRunStateU3Ek__BackingField_1; }
	inline void set_U3CRunStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CRunStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CArgumentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TestFixtureAttribute_t3158426996, ___U3CArgumentsU3Ek__BackingField_2)); }
	inline ObjectU5BU5D_t2843939325* get_U3CArgumentsU3Ek__BackingField_2() const { return ___U3CArgumentsU3Ek__BackingField_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of_U3CArgumentsU3Ek__BackingField_2() { return &___U3CArgumentsU3Ek__BackingField_2; }
	inline void set_U3CArgumentsU3Ek__BackingField_2(ObjectU5BU5D_t2843939325* value)
	{
		___U3CArgumentsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgumentsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TestFixtureAttribute_t3158426996, ___U3CPropertiesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CPropertiesU3Ek__BackingField_3() const { return ___U3CPropertiesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CPropertiesU3Ek__BackingField_3() { return &___U3CPropertiesU3Ek__BackingField_3; }
	inline void set_U3CPropertiesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CPropertiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPropertiesU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CTypeArgsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TestFixtureAttribute_t3158426996, ___U3CTypeArgsU3Ek__BackingField_4)); }
	inline TypeU5BU5D_t3940880105* get_U3CTypeArgsU3Ek__BackingField_4() const { return ___U3CTypeArgsU3Ek__BackingField_4; }
	inline TypeU5BU5D_t3940880105** get_address_of_U3CTypeArgsU3Ek__BackingField_4() { return &___U3CTypeArgsU3Ek__BackingField_4; }
	inline void set_U3CTypeArgsU3Ek__BackingField_4(TypeU5BU5D_t3940880105* value)
	{
		___U3CTypeArgsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeArgsU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTFIXTUREATTRIBUTE_T3158426996_H
#ifndef TESTPARAMETERS_T1855520773_H
#define TESTPARAMETERS_T1855520773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestParameters
struct  TestParameters_t1855520773  : public RuntimeObject
{
public:
	// NUnit.Framework.Interfaces.RunState NUnit.Framework.Internal.TestParameters::<RunState>k__BackingField
	int32_t ___U3CRunStateU3Ek__BackingField_0;
	// System.Object[] NUnit.Framework.Internal.TestParameters::<Arguments>k__BackingField
	ObjectU5BU5D_t2843939325* ___U3CArgumentsU3Ek__BackingField_1;
	// System.String NUnit.Framework.Internal.TestParameters::<TestName>k__BackingField
	String_t* ___U3CTestNameU3Ek__BackingField_2;
	// NUnit.Framework.Interfaces.IPropertyBag NUnit.Framework.Internal.TestParameters::<Properties>k__BackingField
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_3;
	// System.Object[] NUnit.Framework.Internal.TestParameters::<OriginalArguments>k__BackingField
	ObjectU5BU5D_t2843939325* ___U3COriginalArgumentsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CRunStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TestParameters_t1855520773, ___U3CRunStateU3Ek__BackingField_0)); }
	inline int32_t get_U3CRunStateU3Ek__BackingField_0() const { return ___U3CRunStateU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CRunStateU3Ek__BackingField_0() { return &___U3CRunStateU3Ek__BackingField_0; }
	inline void set_U3CRunStateU3Ek__BackingField_0(int32_t value)
	{
		___U3CRunStateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CArgumentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TestParameters_t1855520773, ___U3CArgumentsU3Ek__BackingField_1)); }
	inline ObjectU5BU5D_t2843939325* get_U3CArgumentsU3Ek__BackingField_1() const { return ___U3CArgumentsU3Ek__BackingField_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_U3CArgumentsU3Ek__BackingField_1() { return &___U3CArgumentsU3Ek__BackingField_1; }
	inline void set_U3CArgumentsU3Ek__BackingField_1(ObjectU5BU5D_t2843939325* value)
	{
		___U3CArgumentsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgumentsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CTestNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TestParameters_t1855520773, ___U3CTestNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CTestNameU3Ek__BackingField_2() const { return ___U3CTestNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTestNameU3Ek__BackingField_2() { return &___U3CTestNameU3Ek__BackingField_2; }
	inline void set_U3CTestNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CTestNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TestParameters_t1855520773, ___U3CPropertiesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CPropertiesU3Ek__BackingField_3() const { return ___U3CPropertiesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CPropertiesU3Ek__BackingField_3() { return &___U3CPropertiesU3Ek__BackingField_3; }
	inline void set_U3CPropertiesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CPropertiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPropertiesU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3COriginalArgumentsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TestParameters_t1855520773, ___U3COriginalArgumentsU3Ek__BackingField_4)); }
	inline ObjectU5BU5D_t2843939325* get_U3COriginalArgumentsU3Ek__BackingField_4() const { return ___U3COriginalArgumentsU3Ek__BackingField_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_U3COriginalArgumentsU3Ek__BackingField_4() { return &___U3COriginalArgumentsU3Ek__BackingField_4; }
	inline void set_U3COriginalArgumentsU3Ek__BackingField_4(ObjectU5BU5D_t2843939325* value)
	{
		___U3COriginalArgumentsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3COriginalArgumentsU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTPARAMETERS_T1855520773_H
#ifndef TEST_T3432848304_H
#define TEST_T3432848304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.Test
struct  Test_t3432848304  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo[] NUnit.Framework.Internal.Test::setUpMethods
	MethodInfoU5BU5D_t2572182361* ___setUpMethods_1;
	// System.Reflection.MethodInfo[] NUnit.Framework.Internal.Test::tearDownMethods
	MethodInfoU5BU5D_t2572182361* ___tearDownMethods_2;
	// NUnit.Framework.Interfaces.ITypeInfo NUnit.Framework.Internal.Test::DeclaringTypeInfo
	RuntimeObject* ___DeclaringTypeInfo_3;
	// NUnit.Framework.Interfaces.IMethodInfo NUnit.Framework.Internal.Test::_method
	RuntimeObject* ____method_4;
	// System.String NUnit.Framework.Internal.Test::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_5;
	// System.String NUnit.Framework.Internal.Test::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;
	// System.String NUnit.Framework.Internal.Test::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_7;
	// NUnit.Framework.Interfaces.ITypeInfo NUnit.Framework.Internal.Test::<TypeInfo>k__BackingField
	RuntimeObject* ___U3CTypeInfoU3Ek__BackingField_8;
	// NUnit.Framework.Interfaces.RunState NUnit.Framework.Internal.Test::<RunState>k__BackingField
	int32_t ___U3CRunStateU3Ek__BackingField_9;
	// NUnit.Framework.Interfaces.IPropertyBag NUnit.Framework.Internal.Test::<Properties>k__BackingField
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_10;
	// NUnit.Framework.Interfaces.ITest NUnit.Framework.Internal.Test::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_11;
	// System.Object NUnit.Framework.Internal.Test::<Fixture>k__BackingField
	RuntimeObject * ___U3CFixtureU3Ek__BackingField_12;
	// System.Int32 NUnit.Framework.Internal.Test::<Seed>k__BackingField
	int32_t ___U3CSeedU3Ek__BackingField_14;
	// System.Boolean NUnit.Framework.Internal.Test::<RequiresThread>k__BackingField
	bool ___U3CRequiresThreadU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_setUpMethods_1() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___setUpMethods_1)); }
	inline MethodInfoU5BU5D_t2572182361* get_setUpMethods_1() const { return ___setUpMethods_1; }
	inline MethodInfoU5BU5D_t2572182361** get_address_of_setUpMethods_1() { return &___setUpMethods_1; }
	inline void set_setUpMethods_1(MethodInfoU5BU5D_t2572182361* value)
	{
		___setUpMethods_1 = value;
		Il2CppCodeGenWriteBarrier((&___setUpMethods_1), value);
	}

	inline static int32_t get_offset_of_tearDownMethods_2() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___tearDownMethods_2)); }
	inline MethodInfoU5BU5D_t2572182361* get_tearDownMethods_2() const { return ___tearDownMethods_2; }
	inline MethodInfoU5BU5D_t2572182361** get_address_of_tearDownMethods_2() { return &___tearDownMethods_2; }
	inline void set_tearDownMethods_2(MethodInfoU5BU5D_t2572182361* value)
	{
		___tearDownMethods_2 = value;
		Il2CppCodeGenWriteBarrier((&___tearDownMethods_2), value);
	}

	inline static int32_t get_offset_of_DeclaringTypeInfo_3() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___DeclaringTypeInfo_3)); }
	inline RuntimeObject* get_DeclaringTypeInfo_3() const { return ___DeclaringTypeInfo_3; }
	inline RuntimeObject** get_address_of_DeclaringTypeInfo_3() { return &___DeclaringTypeInfo_3; }
	inline void set_DeclaringTypeInfo_3(RuntimeObject* value)
	{
		___DeclaringTypeInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___DeclaringTypeInfo_3), value);
	}

	inline static int32_t get_offset_of__method_4() { return static_cast<int32_t>(offsetof(Test_t3432848304, ____method_4)); }
	inline RuntimeObject* get__method_4() const { return ____method_4; }
	inline RuntimeObject** get_address_of__method_4() { return &____method_4; }
	inline void set__method_4(RuntimeObject* value)
	{
		____method_4 = value;
		Il2CppCodeGenWriteBarrier((&____method_4), value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIdU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CNameU3Ek__BackingField_6() const { return ___U3CNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_6() { return &___U3CNameU3Ek__BackingField_6; }
	inline void set_U3CNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CFullNameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CFullNameU3Ek__BackingField_7)); }
	inline String_t* get_U3CFullNameU3Ek__BackingField_7() const { return ___U3CFullNameU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CFullNameU3Ek__BackingField_7() { return &___U3CFullNameU3Ek__BackingField_7; }
	inline void set_U3CFullNameU3Ek__BackingField_7(String_t* value)
	{
		___U3CFullNameU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFullNameU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CTypeInfoU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CTypeInfoU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CTypeInfoU3Ek__BackingField_8() const { return ___U3CTypeInfoU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CTypeInfoU3Ek__BackingField_8() { return &___U3CTypeInfoU3Ek__BackingField_8; }
	inline void set_U3CTypeInfoU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CTypeInfoU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeInfoU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CRunStateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CRunStateU3Ek__BackingField_9)); }
	inline int32_t get_U3CRunStateU3Ek__BackingField_9() const { return ___U3CRunStateU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CRunStateU3Ek__BackingField_9() { return &___U3CRunStateU3Ek__BackingField_9; }
	inline void set_U3CRunStateU3Ek__BackingField_9(int32_t value)
	{
		___U3CRunStateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CPropertiesU3Ek__BackingField_10)); }
	inline RuntimeObject* get_U3CPropertiesU3Ek__BackingField_10() const { return ___U3CPropertiesU3Ek__BackingField_10; }
	inline RuntimeObject** get_address_of_U3CPropertiesU3Ek__BackingField_10() { return &___U3CPropertiesU3Ek__BackingField_10; }
	inline void set_U3CPropertiesU3Ek__BackingField_10(RuntimeObject* value)
	{
		___U3CPropertiesU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPropertiesU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CParentU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CParentU3Ek__BackingField_11() const { return ___U3CParentU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CParentU3Ek__BackingField_11() { return &___U3CParentU3Ek__BackingField_11; }
	inline void set_U3CParentU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CParentU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParentU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CFixtureU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CFixtureU3Ek__BackingField_12)); }
	inline RuntimeObject * get_U3CFixtureU3Ek__BackingField_12() const { return ___U3CFixtureU3Ek__BackingField_12; }
	inline RuntimeObject ** get_address_of_U3CFixtureU3Ek__BackingField_12() { return &___U3CFixtureU3Ek__BackingField_12; }
	inline void set_U3CFixtureU3Ek__BackingField_12(RuntimeObject * value)
	{
		___U3CFixtureU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFixtureU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CSeedU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CSeedU3Ek__BackingField_14)); }
	inline int32_t get_U3CSeedU3Ek__BackingField_14() const { return ___U3CSeedU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CSeedU3Ek__BackingField_14() { return &___U3CSeedU3Ek__BackingField_14; }
	inline void set_U3CSeedU3Ek__BackingField_14(int32_t value)
	{
		___U3CSeedU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CRequiresThreadU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Test_t3432848304, ___U3CRequiresThreadU3Ek__BackingField_15)); }
	inline bool get_U3CRequiresThreadU3Ek__BackingField_15() const { return ___U3CRequiresThreadU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CRequiresThreadU3Ek__BackingField_15() { return &___U3CRequiresThreadU3Ek__BackingField_15; }
	inline void set_U3CRequiresThreadU3Ek__BackingField_15(bool value)
	{
		___U3CRequiresThreadU3Ek__BackingField_15 = value;
	}
};

struct Test_t3432848304_StaticFields
{
public:
	// System.Int32 NUnit.Framework.Internal.Test::_nextID
	int32_t ____nextID_0;
	// System.String NUnit.Framework.Internal.Test::<IdPrefix>k__BackingField
	String_t* ___U3CIdPrefixU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__nextID_0() { return static_cast<int32_t>(offsetof(Test_t3432848304_StaticFields, ____nextID_0)); }
	inline int32_t get__nextID_0() const { return ____nextID_0; }
	inline int32_t* get_address_of__nextID_0() { return &____nextID_0; }
	inline void set__nextID_0(int32_t value)
	{
		____nextID_0 = value;
	}

	inline static int32_t get_offset_of_U3CIdPrefixU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Test_t3432848304_StaticFields, ___U3CIdPrefixU3Ek__BackingField_13)); }
	inline String_t* get_U3CIdPrefixU3Ek__BackingField_13() const { return ___U3CIdPrefixU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CIdPrefixU3Ek__BackingField_13() { return &___U3CIdPrefixU3Ek__BackingField_13; }
	inline void set_U3CIdPrefixU3Ek__BackingField_13(String_t* value)
	{
		___U3CIdPrefixU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIdPrefixU3Ek__BackingField_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEST_T3432848304_H
#ifndef TESTEXECUTIONCONTEXT_T999030305_H
#define TESTEXECUTIONCONTEXT_T999030305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestExecutionContext
struct  TestExecutionContext_t999030305  : public LongLivedMarshalByRefObject_t2686163428
{
public:
	// NUnit.Framework.Internal.TestExecutionContext NUnit.Framework.Internal.TestExecutionContext::_priorContext
	TestExecutionContext_t999030305 * ____priorContext_1;
	// NUnit.Framework.Internal.TestExecutionStatus NUnit.Framework.Internal.TestExecutionContext::_executionStatus
	int32_t ____executionStatus_2;
	// NUnit.Framework.Interfaces.ITestListener NUnit.Framework.Internal.TestExecutionContext::_listener
	RuntimeObject* ____listener_3;
	// System.Int32 NUnit.Framework.Internal.TestExecutionContext::_assertCount
	int32_t ____assertCount_4;
	// NUnit.Framework.Internal.Randomizer NUnit.Framework.Internal.TestExecutionContext::_randomGenerator
	Randomizer_t3610073591 * ____randomGenerator_5;
	// System.Globalization.CultureInfo NUnit.Framework.Internal.TestExecutionContext::_currentCulture
	CultureInfo_t4157843068 * ____currentCulture_6;
	// System.Globalization.CultureInfo NUnit.Framework.Internal.TestExecutionContext::_currentUICulture
	CultureInfo_t4157843068 * ____currentUICulture_7;
	// NUnit.Framework.Internal.TestResult NUnit.Framework.Internal.TestExecutionContext::_currentResult
	TestResult_t921768966 * ____currentResult_8;
	// System.Security.Principal.IPrincipal NUnit.Framework.Internal.TestExecutionContext::_currentPrincipal
	RuntimeObject* ____currentPrincipal_9;
	// NUnit.Framework.Internal.Test NUnit.Framework.Internal.TestExecutionContext::<CurrentTest>k__BackingField
	Test_t3432848304 * ___U3CCurrentTestU3Ek__BackingField_11;
	// System.DateTime NUnit.Framework.Internal.TestExecutionContext::<StartTime>k__BackingField
	DateTime_t3738529785  ___U3CStartTimeU3Ek__BackingField_12;
	// System.Int64 NUnit.Framework.Internal.TestExecutionContext::<StartTicks>k__BackingField
	int64_t ___U3CStartTicksU3Ek__BackingField_13;
	// System.IO.TextWriter NUnit.Framework.Internal.TestExecutionContext::<OutWriter>k__BackingField
	TextWriter_t3478189236 * ___U3COutWriterU3Ek__BackingField_14;
	// System.Object NUnit.Framework.Internal.TestExecutionContext::<TestObject>k__BackingField
	RuntimeObject * ___U3CTestObjectU3Ek__BackingField_15;
	// System.String NUnit.Framework.Internal.TestExecutionContext::<WorkDirectory>k__BackingField
	String_t* ___U3CWorkDirectoryU3Ek__BackingField_16;
	// System.Boolean NUnit.Framework.Internal.TestExecutionContext::<StopOnError>k__BackingField
	bool ___U3CStopOnErrorU3Ek__BackingField_17;
	// NUnit.Framework.Internal.Execution.IWorkItemDispatcher NUnit.Framework.Internal.TestExecutionContext::<Dispatcher>k__BackingField
	RuntimeObject* ___U3CDispatcherU3Ek__BackingField_18;
	// NUnit.Framework.ParallelScope NUnit.Framework.Internal.TestExecutionContext::<ParallelScope>k__BackingField
	int32_t ___U3CParallelScopeU3Ek__BackingField_19;
	// System.String NUnit.Framework.Internal.TestExecutionContext::<WorkerId>k__BackingField
	String_t* ___U3CWorkerIdU3Ek__BackingField_20;
	// System.Int32 NUnit.Framework.Internal.TestExecutionContext::<TestCaseTimeout>k__BackingField
	int32_t ___U3CTestCaseTimeoutU3Ek__BackingField_21;
	// System.Collections.Generic.List`1<NUnit.Framework.ITestAction> NUnit.Framework.Internal.TestExecutionContext::<UpstreamActions>k__BackingField
	List_1_t1224491233 * ___U3CUpstreamActionsU3Ek__BackingField_22;
	// NUnit.Framework.Constraints.ValueFormatter NUnit.Framework.Internal.TestExecutionContext::<CurrentValueFormatter>k__BackingField
	ValueFormatter_t4100324616 * ___U3CCurrentValueFormatterU3Ek__BackingField_23;
	// System.Boolean NUnit.Framework.Internal.TestExecutionContext::<IsSingleThreaded>k__BackingField
	bool ___U3CIsSingleThreadedU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of__priorContext_1() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ____priorContext_1)); }
	inline TestExecutionContext_t999030305 * get__priorContext_1() const { return ____priorContext_1; }
	inline TestExecutionContext_t999030305 ** get_address_of__priorContext_1() { return &____priorContext_1; }
	inline void set__priorContext_1(TestExecutionContext_t999030305 * value)
	{
		____priorContext_1 = value;
		Il2CppCodeGenWriteBarrier((&____priorContext_1), value);
	}

	inline static int32_t get_offset_of__executionStatus_2() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ____executionStatus_2)); }
	inline int32_t get__executionStatus_2() const { return ____executionStatus_2; }
	inline int32_t* get_address_of__executionStatus_2() { return &____executionStatus_2; }
	inline void set__executionStatus_2(int32_t value)
	{
		____executionStatus_2 = value;
	}

	inline static int32_t get_offset_of__listener_3() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ____listener_3)); }
	inline RuntimeObject* get__listener_3() const { return ____listener_3; }
	inline RuntimeObject** get_address_of__listener_3() { return &____listener_3; }
	inline void set__listener_3(RuntimeObject* value)
	{
		____listener_3 = value;
		Il2CppCodeGenWriteBarrier((&____listener_3), value);
	}

	inline static int32_t get_offset_of__assertCount_4() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ____assertCount_4)); }
	inline int32_t get__assertCount_4() const { return ____assertCount_4; }
	inline int32_t* get_address_of__assertCount_4() { return &____assertCount_4; }
	inline void set__assertCount_4(int32_t value)
	{
		____assertCount_4 = value;
	}

	inline static int32_t get_offset_of__randomGenerator_5() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ____randomGenerator_5)); }
	inline Randomizer_t3610073591 * get__randomGenerator_5() const { return ____randomGenerator_5; }
	inline Randomizer_t3610073591 ** get_address_of__randomGenerator_5() { return &____randomGenerator_5; }
	inline void set__randomGenerator_5(Randomizer_t3610073591 * value)
	{
		____randomGenerator_5 = value;
		Il2CppCodeGenWriteBarrier((&____randomGenerator_5), value);
	}

	inline static int32_t get_offset_of__currentCulture_6() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ____currentCulture_6)); }
	inline CultureInfo_t4157843068 * get__currentCulture_6() const { return ____currentCulture_6; }
	inline CultureInfo_t4157843068 ** get_address_of__currentCulture_6() { return &____currentCulture_6; }
	inline void set__currentCulture_6(CultureInfo_t4157843068 * value)
	{
		____currentCulture_6 = value;
		Il2CppCodeGenWriteBarrier((&____currentCulture_6), value);
	}

	inline static int32_t get_offset_of__currentUICulture_7() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ____currentUICulture_7)); }
	inline CultureInfo_t4157843068 * get__currentUICulture_7() const { return ____currentUICulture_7; }
	inline CultureInfo_t4157843068 ** get_address_of__currentUICulture_7() { return &____currentUICulture_7; }
	inline void set__currentUICulture_7(CultureInfo_t4157843068 * value)
	{
		____currentUICulture_7 = value;
		Il2CppCodeGenWriteBarrier((&____currentUICulture_7), value);
	}

	inline static int32_t get_offset_of__currentResult_8() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ____currentResult_8)); }
	inline TestResult_t921768966 * get__currentResult_8() const { return ____currentResult_8; }
	inline TestResult_t921768966 ** get_address_of__currentResult_8() { return &____currentResult_8; }
	inline void set__currentResult_8(TestResult_t921768966 * value)
	{
		____currentResult_8 = value;
		Il2CppCodeGenWriteBarrier((&____currentResult_8), value);
	}

	inline static int32_t get_offset_of__currentPrincipal_9() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ____currentPrincipal_9)); }
	inline RuntimeObject* get__currentPrincipal_9() const { return ____currentPrincipal_9; }
	inline RuntimeObject** get_address_of__currentPrincipal_9() { return &____currentPrincipal_9; }
	inline void set__currentPrincipal_9(RuntimeObject* value)
	{
		____currentPrincipal_9 = value;
		Il2CppCodeGenWriteBarrier((&____currentPrincipal_9), value);
	}

	inline static int32_t get_offset_of_U3CCurrentTestU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CCurrentTestU3Ek__BackingField_11)); }
	inline Test_t3432848304 * get_U3CCurrentTestU3Ek__BackingField_11() const { return ___U3CCurrentTestU3Ek__BackingField_11; }
	inline Test_t3432848304 ** get_address_of_U3CCurrentTestU3Ek__BackingField_11() { return &___U3CCurrentTestU3Ek__BackingField_11; }
	inline void set_U3CCurrentTestU3Ek__BackingField_11(Test_t3432848304 * value)
	{
		___U3CCurrentTestU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentTestU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CStartTimeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CStartTimeU3Ek__BackingField_12)); }
	inline DateTime_t3738529785  get_U3CStartTimeU3Ek__BackingField_12() const { return ___U3CStartTimeU3Ek__BackingField_12; }
	inline DateTime_t3738529785 * get_address_of_U3CStartTimeU3Ek__BackingField_12() { return &___U3CStartTimeU3Ek__BackingField_12; }
	inline void set_U3CStartTimeU3Ek__BackingField_12(DateTime_t3738529785  value)
	{
		___U3CStartTimeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CStartTicksU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CStartTicksU3Ek__BackingField_13)); }
	inline int64_t get_U3CStartTicksU3Ek__BackingField_13() const { return ___U3CStartTicksU3Ek__BackingField_13; }
	inline int64_t* get_address_of_U3CStartTicksU3Ek__BackingField_13() { return &___U3CStartTicksU3Ek__BackingField_13; }
	inline void set_U3CStartTicksU3Ek__BackingField_13(int64_t value)
	{
		___U3CStartTicksU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3COutWriterU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3COutWriterU3Ek__BackingField_14)); }
	inline TextWriter_t3478189236 * get_U3COutWriterU3Ek__BackingField_14() const { return ___U3COutWriterU3Ek__BackingField_14; }
	inline TextWriter_t3478189236 ** get_address_of_U3COutWriterU3Ek__BackingField_14() { return &___U3COutWriterU3Ek__BackingField_14; }
	inline void set_U3COutWriterU3Ek__BackingField_14(TextWriter_t3478189236 * value)
	{
		___U3COutWriterU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3COutWriterU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CTestObjectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CTestObjectU3Ek__BackingField_15)); }
	inline RuntimeObject * get_U3CTestObjectU3Ek__BackingField_15() const { return ___U3CTestObjectU3Ek__BackingField_15; }
	inline RuntimeObject ** get_address_of_U3CTestObjectU3Ek__BackingField_15() { return &___U3CTestObjectU3Ek__BackingField_15; }
	inline void set_U3CTestObjectU3Ek__BackingField_15(RuntimeObject * value)
	{
		___U3CTestObjectU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestObjectU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CWorkDirectoryU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CWorkDirectoryU3Ek__BackingField_16)); }
	inline String_t* get_U3CWorkDirectoryU3Ek__BackingField_16() const { return ___U3CWorkDirectoryU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CWorkDirectoryU3Ek__BackingField_16() { return &___U3CWorkDirectoryU3Ek__BackingField_16; }
	inline void set_U3CWorkDirectoryU3Ek__BackingField_16(String_t* value)
	{
		___U3CWorkDirectoryU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWorkDirectoryU3Ek__BackingField_16), value);
	}

	inline static int32_t get_offset_of_U3CStopOnErrorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CStopOnErrorU3Ek__BackingField_17)); }
	inline bool get_U3CStopOnErrorU3Ek__BackingField_17() const { return ___U3CStopOnErrorU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CStopOnErrorU3Ek__BackingField_17() { return &___U3CStopOnErrorU3Ek__BackingField_17; }
	inline void set_U3CStopOnErrorU3Ek__BackingField_17(bool value)
	{
		___U3CStopOnErrorU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CDispatcherU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CDispatcherU3Ek__BackingField_18)); }
	inline RuntimeObject* get_U3CDispatcherU3Ek__BackingField_18() const { return ___U3CDispatcherU3Ek__BackingField_18; }
	inline RuntimeObject** get_address_of_U3CDispatcherU3Ek__BackingField_18() { return &___U3CDispatcherU3Ek__BackingField_18; }
	inline void set_U3CDispatcherU3Ek__BackingField_18(RuntimeObject* value)
	{
		___U3CDispatcherU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDispatcherU3Ek__BackingField_18), value);
	}

	inline static int32_t get_offset_of_U3CParallelScopeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CParallelScopeU3Ek__BackingField_19)); }
	inline int32_t get_U3CParallelScopeU3Ek__BackingField_19() const { return ___U3CParallelScopeU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CParallelScopeU3Ek__BackingField_19() { return &___U3CParallelScopeU3Ek__BackingField_19; }
	inline void set_U3CParallelScopeU3Ek__BackingField_19(int32_t value)
	{
		___U3CParallelScopeU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CWorkerIdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CWorkerIdU3Ek__BackingField_20)); }
	inline String_t* get_U3CWorkerIdU3Ek__BackingField_20() const { return ___U3CWorkerIdU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CWorkerIdU3Ek__BackingField_20() { return &___U3CWorkerIdU3Ek__BackingField_20; }
	inline void set_U3CWorkerIdU3Ek__BackingField_20(String_t* value)
	{
		___U3CWorkerIdU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWorkerIdU3Ek__BackingField_20), value);
	}

	inline static int32_t get_offset_of_U3CTestCaseTimeoutU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CTestCaseTimeoutU3Ek__BackingField_21)); }
	inline int32_t get_U3CTestCaseTimeoutU3Ek__BackingField_21() const { return ___U3CTestCaseTimeoutU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CTestCaseTimeoutU3Ek__BackingField_21() { return &___U3CTestCaseTimeoutU3Ek__BackingField_21; }
	inline void set_U3CTestCaseTimeoutU3Ek__BackingField_21(int32_t value)
	{
		___U3CTestCaseTimeoutU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CUpstreamActionsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CUpstreamActionsU3Ek__BackingField_22)); }
	inline List_1_t1224491233 * get_U3CUpstreamActionsU3Ek__BackingField_22() const { return ___U3CUpstreamActionsU3Ek__BackingField_22; }
	inline List_1_t1224491233 ** get_address_of_U3CUpstreamActionsU3Ek__BackingField_22() { return &___U3CUpstreamActionsU3Ek__BackingField_22; }
	inline void set_U3CUpstreamActionsU3Ek__BackingField_22(List_1_t1224491233 * value)
	{
		___U3CUpstreamActionsU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUpstreamActionsU3Ek__BackingField_22), value);
	}

	inline static int32_t get_offset_of_U3CCurrentValueFormatterU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CCurrentValueFormatterU3Ek__BackingField_23)); }
	inline ValueFormatter_t4100324616 * get_U3CCurrentValueFormatterU3Ek__BackingField_23() const { return ___U3CCurrentValueFormatterU3Ek__BackingField_23; }
	inline ValueFormatter_t4100324616 ** get_address_of_U3CCurrentValueFormatterU3Ek__BackingField_23() { return &___U3CCurrentValueFormatterU3Ek__BackingField_23; }
	inline void set_U3CCurrentValueFormatterU3Ek__BackingField_23(ValueFormatter_t4100324616 * value)
	{
		___U3CCurrentValueFormatterU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentValueFormatterU3Ek__BackingField_23), value);
	}

	inline static int32_t get_offset_of_U3CIsSingleThreadedU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305, ___U3CIsSingleThreadedU3Ek__BackingField_24)); }
	inline bool get_U3CIsSingleThreadedU3Ek__BackingField_24() const { return ___U3CIsSingleThreadedU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CIsSingleThreadedU3Ek__BackingField_24() { return &___U3CIsSingleThreadedU3Ek__BackingField_24; }
	inline void set_U3CIsSingleThreadedU3Ek__BackingField_24(bool value)
	{
		___U3CIsSingleThreadedU3Ek__BackingField_24 = value;
	}
};

struct TestExecutionContext_t999030305_StaticFields
{
public:
	// System.String NUnit.Framework.Internal.TestExecutionContext::CONTEXT_KEY
	String_t* ___CONTEXT_KEY_10;

public:
	inline static int32_t get_offset_of_CONTEXT_KEY_10() { return static_cast<int32_t>(offsetof(TestExecutionContext_t999030305_StaticFields, ___CONTEXT_KEY_10)); }
	inline String_t* get_CONTEXT_KEY_10() const { return ___CONTEXT_KEY_10; }
	inline String_t** get_address_of_CONTEXT_KEY_10() { return &___CONTEXT_KEY_10; }
	inline void set_CONTEXT_KEY_10(String_t* value)
	{
		___CONTEXT_KEY_10 = value;
		Il2CppCodeGenWriteBarrier((&___CONTEXT_KEY_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTEXECUTIONCONTEXT_T999030305_H
#ifndef TESTMETHOD_T1085459043_H
#define TESTMETHOD_T1085459043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestMethod
struct  TestMethod_t1085459043  : public Test_t3432848304
{
public:
	// NUnit.Framework.Internal.TestCaseParameters NUnit.Framework.Internal.TestMethod::parms
	TestCaseParameters_t2908894354 * ___parms_16;

public:
	inline static int32_t get_offset_of_parms_16() { return static_cast<int32_t>(offsetof(TestMethod_t1085459043, ___parms_16)); }
	inline TestCaseParameters_t2908894354 * get_parms_16() const { return ___parms_16; }
	inline TestCaseParameters_t2908894354 ** get_address_of_parms_16() { return &___parms_16; }
	inline void set_parms_16(TestCaseParameters_t2908894354 * value)
	{
		___parms_16 = value;
		Il2CppCodeGenWriteBarrier((&___parms_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTMETHOD_T1085459043_H
#ifndef VALUEFORMATTER_T4100324616_H
#define VALUEFORMATTER_T4100324616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Constraints.ValueFormatter
struct  ValueFormatter_t4100324616  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUEFORMATTER_T4100324616_H
#ifndef TESTSUITE_T407774568_H
#define TESTSUITE_T407774568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestSuite
struct  TestSuite_t407774568  : public Test_t3432848304
{
public:
	// System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest> NUnit.Framework.Internal.TestSuite::tests
	List_1_t531332281 * ___tests_16;
	// System.Object[] NUnit.Framework.Internal.TestSuite::<Arguments>k__BackingField
	ObjectU5BU5D_t2843939325* ___U3CArgumentsU3Ek__BackingField_17;
	// System.Boolean NUnit.Framework.Internal.TestSuite::<MaintainTestOrder>k__BackingField
	bool ___U3CMaintainTestOrderU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_tests_16() { return static_cast<int32_t>(offsetof(TestSuite_t407774568, ___tests_16)); }
	inline List_1_t531332281 * get_tests_16() const { return ___tests_16; }
	inline List_1_t531332281 ** get_address_of_tests_16() { return &___tests_16; }
	inline void set_tests_16(List_1_t531332281 * value)
	{
		___tests_16 = value;
		Il2CppCodeGenWriteBarrier((&___tests_16), value);
	}

	inline static int32_t get_offset_of_U3CArgumentsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(TestSuite_t407774568, ___U3CArgumentsU3Ek__BackingField_17)); }
	inline ObjectU5BU5D_t2843939325* get_U3CArgumentsU3Ek__BackingField_17() const { return ___U3CArgumentsU3Ek__BackingField_17; }
	inline ObjectU5BU5D_t2843939325** get_address_of_U3CArgumentsU3Ek__BackingField_17() { return &___U3CArgumentsU3Ek__BackingField_17; }
	inline void set_U3CArgumentsU3Ek__BackingField_17(ObjectU5BU5D_t2843939325* value)
	{
		___U3CArgumentsU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgumentsU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_U3CMaintainTestOrderU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(TestSuite_t407774568, ___U3CMaintainTestOrderU3Ek__BackingField_18)); }
	inline bool get_U3CMaintainTestOrderU3Ek__BackingField_18() const { return ___U3CMaintainTestOrderU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CMaintainTestOrderU3Ek__BackingField_18() { return &___U3CMaintainTestOrderU3Ek__BackingField_18; }
	inline void set_U3CMaintainTestOrderU3Ek__BackingField_18(bool value)
	{
		___U3CMaintainTestOrderU3Ek__BackingField_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTSUITE_T407774568_H
#ifndef TESTRESULT_T921768966_H
#define TESTRESULT_T921768966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestResult
struct  TestResult_t921768966  : public RuntimeObject
{
public:
	// System.Text.StringBuilder NUnit.Framework.Internal.TestResult::_output
	StringBuilder_t * ____output_3;
	// System.Double NUnit.Framework.Internal.TestResult::_duration
	double ____duration_4;
	// System.Int32 NUnit.Framework.Internal.TestResult::InternalAssertCount
	int32_t ___InternalAssertCount_5;
	// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Internal.TestResult::_resultState
	ResultState_t492092786 * ____resultState_6;
	// System.String NUnit.Framework.Internal.TestResult::_message
	String_t* ____message_7;
	// System.String NUnit.Framework.Internal.TestResult::_stackTrace
	String_t* ____stackTrace_8;
	// NUnit.Framework.Interfaces.ITest NUnit.Framework.Internal.TestResult::<Test>k__BackingField
	RuntimeObject* ___U3CTestU3Ek__BackingField_9;
	// System.DateTime NUnit.Framework.Internal.TestResult::<StartTime>k__BackingField
	DateTime_t3738529785  ___U3CStartTimeU3Ek__BackingField_10;
	// System.DateTime NUnit.Framework.Internal.TestResult::<EndTime>k__BackingField
	DateTime_t3738529785  ___U3CEndTimeU3Ek__BackingField_11;
	// System.IO.TextWriter NUnit.Framework.Internal.TestResult::<OutWriter>k__BackingField
	TextWriter_t3478189236 * ___U3COutWriterU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of__output_3() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ____output_3)); }
	inline StringBuilder_t * get__output_3() const { return ____output_3; }
	inline StringBuilder_t ** get_address_of__output_3() { return &____output_3; }
	inline void set__output_3(StringBuilder_t * value)
	{
		____output_3 = value;
		Il2CppCodeGenWriteBarrier((&____output_3), value);
	}

	inline static int32_t get_offset_of__duration_4() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ____duration_4)); }
	inline double get__duration_4() const { return ____duration_4; }
	inline double* get_address_of__duration_4() { return &____duration_4; }
	inline void set__duration_4(double value)
	{
		____duration_4 = value;
	}

	inline static int32_t get_offset_of_InternalAssertCount_5() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ___InternalAssertCount_5)); }
	inline int32_t get_InternalAssertCount_5() const { return ___InternalAssertCount_5; }
	inline int32_t* get_address_of_InternalAssertCount_5() { return &___InternalAssertCount_5; }
	inline void set_InternalAssertCount_5(int32_t value)
	{
		___InternalAssertCount_5 = value;
	}

	inline static int32_t get_offset_of__resultState_6() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ____resultState_6)); }
	inline ResultState_t492092786 * get__resultState_6() const { return ____resultState_6; }
	inline ResultState_t492092786 ** get_address_of__resultState_6() { return &____resultState_6; }
	inline void set__resultState_6(ResultState_t492092786 * value)
	{
		____resultState_6 = value;
		Il2CppCodeGenWriteBarrier((&____resultState_6), value);
	}

	inline static int32_t get_offset_of__message_7() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ____message_7)); }
	inline String_t* get__message_7() const { return ____message_7; }
	inline String_t** get_address_of__message_7() { return &____message_7; }
	inline void set__message_7(String_t* value)
	{
		____message_7 = value;
		Il2CppCodeGenWriteBarrier((&____message_7), value);
	}

	inline static int32_t get_offset_of__stackTrace_8() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ____stackTrace_8)); }
	inline String_t* get__stackTrace_8() const { return ____stackTrace_8; }
	inline String_t** get_address_of__stackTrace_8() { return &____stackTrace_8; }
	inline void set__stackTrace_8(String_t* value)
	{
		____stackTrace_8 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_8), value);
	}

	inline static int32_t get_offset_of_U3CTestU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ___U3CTestU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CTestU3Ek__BackingField_9() const { return ___U3CTestU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CTestU3Ek__BackingField_9() { return &___U3CTestU3Ek__BackingField_9; }
	inline void set_U3CTestU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CTestU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CStartTimeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ___U3CStartTimeU3Ek__BackingField_10)); }
	inline DateTime_t3738529785  get_U3CStartTimeU3Ek__BackingField_10() const { return ___U3CStartTimeU3Ek__BackingField_10; }
	inline DateTime_t3738529785 * get_address_of_U3CStartTimeU3Ek__BackingField_10() { return &___U3CStartTimeU3Ek__BackingField_10; }
	inline void set_U3CStartTimeU3Ek__BackingField_10(DateTime_t3738529785  value)
	{
		___U3CStartTimeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CEndTimeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ___U3CEndTimeU3Ek__BackingField_11)); }
	inline DateTime_t3738529785  get_U3CEndTimeU3Ek__BackingField_11() const { return ___U3CEndTimeU3Ek__BackingField_11; }
	inline DateTime_t3738529785 * get_address_of_U3CEndTimeU3Ek__BackingField_11() { return &___U3CEndTimeU3Ek__BackingField_11; }
	inline void set_U3CEndTimeU3Ek__BackingField_11(DateTime_t3738529785  value)
	{
		___U3CEndTimeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3COutWriterU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TestResult_t921768966, ___U3COutWriterU3Ek__BackingField_12)); }
	inline TextWriter_t3478189236 * get_U3COutWriterU3Ek__BackingField_12() const { return ___U3COutWriterU3Ek__BackingField_12; }
	inline TextWriter_t3478189236 ** get_address_of_U3COutWriterU3Ek__BackingField_12() { return &___U3COutWriterU3Ek__BackingField_12; }
	inline void set_U3COutWriterU3Ek__BackingField_12(TextWriter_t3478189236 * value)
	{
		___U3COutWriterU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3COutWriterU3Ek__BackingField_12), value);
	}
};

struct TestResult_t921768966_StaticFields
{
public:
	// System.String NUnit.Framework.Internal.TestResult::CHILD_ERRORS_MESSAGE
	String_t* ___CHILD_ERRORS_MESSAGE_0;
	// System.String NUnit.Framework.Internal.TestResult::CHILD_IGNORE_MESSAGE
	String_t* ___CHILD_IGNORE_MESSAGE_1;

public:
	inline static int32_t get_offset_of_CHILD_ERRORS_MESSAGE_0() { return static_cast<int32_t>(offsetof(TestResult_t921768966_StaticFields, ___CHILD_ERRORS_MESSAGE_0)); }
	inline String_t* get_CHILD_ERRORS_MESSAGE_0() const { return ___CHILD_ERRORS_MESSAGE_0; }
	inline String_t** get_address_of_CHILD_ERRORS_MESSAGE_0() { return &___CHILD_ERRORS_MESSAGE_0; }
	inline void set_CHILD_ERRORS_MESSAGE_0(String_t* value)
	{
		___CHILD_ERRORS_MESSAGE_0 = value;
		Il2CppCodeGenWriteBarrier((&___CHILD_ERRORS_MESSAGE_0), value);
	}

	inline static int32_t get_offset_of_CHILD_IGNORE_MESSAGE_1() { return static_cast<int32_t>(offsetof(TestResult_t921768966_StaticFields, ___CHILD_IGNORE_MESSAGE_1)); }
	inline String_t* get_CHILD_IGNORE_MESSAGE_1() const { return ___CHILD_IGNORE_MESSAGE_1; }
	inline String_t** get_address_of_CHILD_IGNORE_MESSAGE_1() { return &___CHILD_IGNORE_MESSAGE_1; }
	inline void set_CHILD_IGNORE_MESSAGE_1(String_t* value)
	{
		___CHILD_IGNORE_MESSAGE_1 = value;
		Il2CppCodeGenWriteBarrier((&___CHILD_IGNORE_MESSAGE_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTRESULT_T921768966_H
#ifndef FUNC_2_T1796590042_H
#define FUNC_2_T1796590042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct  Func_2_t1796590042  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1796590042_H
#ifndef TESTCASEPARAMETERS_T2908894354_H
#define TESTCASEPARAMETERS_T2908894354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestCaseParameters
struct  TestCaseParameters_t2908894354  : public TestParameters_t1855520773
{
public:
	// System.Object NUnit.Framework.Internal.TestCaseParameters::_expectedResult
	RuntimeObject * ____expectedResult_5;
	// System.Boolean NUnit.Framework.Internal.TestCaseParameters::<HasExpectedResult>k__BackingField
	bool ___U3CHasExpectedResultU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__expectedResult_5() { return static_cast<int32_t>(offsetof(TestCaseParameters_t2908894354, ____expectedResult_5)); }
	inline RuntimeObject * get__expectedResult_5() const { return ____expectedResult_5; }
	inline RuntimeObject ** get_address_of__expectedResult_5() { return &____expectedResult_5; }
	inline void set__expectedResult_5(RuntimeObject * value)
	{
		____expectedResult_5 = value;
		Il2CppCodeGenWriteBarrier((&____expectedResult_5), value);
	}

	inline static int32_t get_offset_of_U3CHasExpectedResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TestCaseParameters_t2908894354, ___U3CHasExpectedResultU3Ek__BackingField_6)); }
	inline bool get_U3CHasExpectedResultU3Ek__BackingField_6() const { return ___U3CHasExpectedResultU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CHasExpectedResultU3Ek__BackingField_6() { return &___U3CHasExpectedResultU3Ek__BackingField_6; }
	inline void set_U3CHasExpectedResultU3Ek__BackingField_6(bool value)
	{
		___U3CHasExpectedResultU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTCASEPARAMETERS_T2908894354_H
#ifndef TESTSUITERESULT_T4148044652_H
#define TESTSUITERESULT_T4148044652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestSuiteResult
struct  TestSuiteResult_t4148044652  : public TestResult_t921768966
{
public:
	// System.Int32 NUnit.Framework.Internal.TestSuiteResult::_passCount
	int32_t ____passCount_13;
	// System.Int32 NUnit.Framework.Internal.TestSuiteResult::_failCount
	int32_t ____failCount_14;
	// System.Int32 NUnit.Framework.Internal.TestSuiteResult::_skipCount
	int32_t ____skipCount_15;
	// System.Int32 NUnit.Framework.Internal.TestSuiteResult::_inconclusiveCount
	int32_t ____inconclusiveCount_16;
	// System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult> NUnit.Framework.Internal.TestSuiteResult::_children
	List_1_t2639907989 * ____children_17;

public:
	inline static int32_t get_offset_of__passCount_13() { return static_cast<int32_t>(offsetof(TestSuiteResult_t4148044652, ____passCount_13)); }
	inline int32_t get__passCount_13() const { return ____passCount_13; }
	inline int32_t* get_address_of__passCount_13() { return &____passCount_13; }
	inline void set__passCount_13(int32_t value)
	{
		____passCount_13 = value;
	}

	inline static int32_t get_offset_of__failCount_14() { return static_cast<int32_t>(offsetof(TestSuiteResult_t4148044652, ____failCount_14)); }
	inline int32_t get__failCount_14() const { return ____failCount_14; }
	inline int32_t* get_address_of__failCount_14() { return &____failCount_14; }
	inline void set__failCount_14(int32_t value)
	{
		____failCount_14 = value;
	}

	inline static int32_t get_offset_of__skipCount_15() { return static_cast<int32_t>(offsetof(TestSuiteResult_t4148044652, ____skipCount_15)); }
	inline int32_t get__skipCount_15() const { return ____skipCount_15; }
	inline int32_t* get_address_of__skipCount_15() { return &____skipCount_15; }
	inline void set__skipCount_15(int32_t value)
	{
		____skipCount_15 = value;
	}

	inline static int32_t get_offset_of__inconclusiveCount_16() { return static_cast<int32_t>(offsetof(TestSuiteResult_t4148044652, ____inconclusiveCount_16)); }
	inline int32_t get__inconclusiveCount_16() const { return ____inconclusiveCount_16; }
	inline int32_t* get_address_of__inconclusiveCount_16() { return &____inconclusiveCount_16; }
	inline void set__inconclusiveCount_16(int32_t value)
	{
		____inconclusiveCount_16 = value;
	}

	inline static int32_t get_offset_of__children_17() { return static_cast<int32_t>(offsetof(TestSuiteResult_t4148044652, ____children_17)); }
	inline List_1_t2639907989 * get__children_17() const { return ____children_17; }
	inline List_1_t2639907989 ** get_address_of__children_17() { return &____children_17; }
	inline void set__children_17(List_1_t2639907989 * value)
	{
		____children_17 = value;
		Il2CppCodeGenWriteBarrier((&____children_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTSUITERESULT_T4148044652_H
#ifndef TESTCASERESULT_T777036217_H
#define TESTCASERESULT_T777036217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestCaseResult
struct  TestCaseResult_t777036217  : public TestResult_t921768966
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTCASERESULT_T777036217_H
#ifndef TESTFIXTURE_T1563123309_H
#define TESTFIXTURE_T1563123309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NUnit.Framework.Internal.TestFixture
struct  TestFixture_t1563123309  : public TestSuite_t407774568
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTFIXTURE_T1563123309_H
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
// NUnit.Framework.Interfaces.ITest[]
struct ITestU5BU5D_t3872523474  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
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
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// NUnit.Framework.Interfaces.IParameterInfo[]
struct IParameterInfoU5BU5D_t2245635530  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
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
// NUnit.Framework.Interfaces.IMethodInfo[]
struct IMethodInfoU5BU5D_t578659627  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// NUnit.Framework.Internal.MethodWrapper[]
struct MethodWrapperU5BU5D_t1170775172  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodWrapper_t2578635129 * m_Items[1];

public:
	inline MethodWrapper_t2578635129 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodWrapper_t2578635129 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodWrapper_t2578635129 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MethodWrapper_t2578635129 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodWrapper_t2578635129 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodWrapper_t2578635129 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C"  void List_1_Sort_m1127696474_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3104565095_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject* Enumerable_Where_TisRuntimeObject_m3454096398_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m1106606823_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);

// System.Void NUnit.Framework.Internal.TestExecutionContext/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m615560005 (U3CU3Ec_t4110531043 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Constraints.ValueFormatter NUnit.Framework.Constraints.MsgUtils::get_DefaultValueFormatter()
extern "C"  ValueFormatter_t4100324616 * MsgUtils_get_DefaultValueFormatter_m1361497435 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Constraints.ValueFormatter::Invoke(System.Object)
extern "C"  String_t* ValueFormatter_Invoke_m4109345758 (ValueFormatter_t4100324616 * __this, RuntimeObject * ___val0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean NUnit.Framework.Internal.TestFilter::MatchParent(NUnit.Framework.Interfaces.ITest)
extern "C"  bool TestFilter_MatchParent_m836533562 (TestFilter_t2701680237 * __this, RuntimeObject* ___test0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Interfaces.TNode::.ctor(System.String)
extern "C"  void TNode__ctor_m626016575 (TNode_t3946371078 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestFilter/EmptyFilter::.ctor()
extern "C"  void EmptyFilter__ctor_m1164734834 (EmptyFilter_t3371835522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Interfaces.TNode::AddElement(System.String)
extern "C"  TNode_t3946371078 * TNode_AddElement_m3082294026 (TNode_t3946371078 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestFilter::.ctor()
extern "C"  void TestFilter__ctor_m2448558655 (TestFilter_t2701680237 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestSuite::.ctor(NUnit.Framework.Interfaces.ITypeInfo)
extern "C"  void TestSuite__ctor_m2589975646 (TestSuite_t407774568 * __this, RuntimeObject* ___fixtureType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestSuite::CheckSetUpTearDownMethods(System.Type)
extern "C"  void TestSuite_CheckSetUpTearDownMethods_m2163883642 (TestSuite_t407774568 * __this, Type_t * ___attrType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestListener::.ctor()
extern "C"  void TestListener__ctor_m3309691275 (TestListener_t3563649619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.Test::.ctor(NUnit.Framework.Interfaces.IMethodInfo)
extern "C"  void Test__ctor_m3770962239 (Test_t3432848304 * __this, RuntimeObject* ___method0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.Test::get_FullName()
extern "C"  String_t* Test_get_FullName_m2370175434 (Test_t3432848304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.Test::get_Name()
extern "C"  String_t* Test_get_Name_m275867403 (Test_t3432848304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.Test::set_FullName(System.String)
extern "C"  void Test_set_FullName_m4131554050 (Test_t3432848304 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean NUnit.Framework.Internal.TestCaseParameters::get_HasExpectedResult()
extern "C"  bool TestCaseParameters_get_HasExpectedResult_m1801210955 (TestCaseParameters_t2908894354 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object NUnit.Framework.Internal.TestCaseParameters::get_ExpectedResult()
extern "C"  RuntimeObject * TestCaseParameters_get_ExpectedResult_m926200647 (TestCaseParameters_t2908894354 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object[] NUnit.Framework.Internal.TestParameters::get_Arguments()
extern "C"  ObjectU5BU5D_t2843939325* TestParameters_get_Arguments_m553610255 (TestParameters_t1855520773 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestCaseResult::.ctor(NUnit.Framework.Internal.TestMethod)
extern "C"  void TestCaseResult__ctor_m4059248510 (TestCaseResult_t777036217 * __this, TestMethod_t1085459043 * ___test0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.Test::PopulateTestNode(NUnit.Framework.Interfaces.TNode,System.Boolean)
extern "C"  void Test_PopulateTestNode_m4050235924 (Test_t3432848304 * __this, TNode_t3946371078 * ___thisNode0, bool ___recursive1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 NUnit.Framework.Internal.Test::get_Seed()
extern "C"  int32_t Test_get_Seed_m1972831827 (Test_t3432848304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Interfaces.TNode::AddAttribute(System.String,System.String)
extern "C"  void TNode_AddAttribute_m357558902 (TNode_t3946371078 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.IMethodInfo NUnit.Framework.Internal.Test::get_Method()
extern "C"  RuntimeObject* Test_get_Method_m3979244495 (Test_t3432848304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment> NUnit.Framework.Internal.TestNameGenerator::BuildFragmentList(System.String)
extern "C"  List_1_t171055532 * TestNameGenerator_BuildFragmentList_m2084964715 (RuntimeObject * __this /* static, unused */, String_t* ___pattern0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment>::GetEnumerator()
#define List_1_GetEnumerator_m1860925481(__this, method) ((  Enumerator_t2060299409  (*) (List_1_t171055532 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<NUnit.Framework.Internal.TestNameGenerator/NameFragment>::get_Current()
#define Enumerator_get_Current_m1062154811(__this, method) ((  NameFragment_t2993948086 * (*) (Enumerator_t2060299409 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<NUnit.Framework.Internal.TestNameGenerator/NameFragment>::MoveNext()
#define Enumerator_MoveNext_m215596758(__this, method) ((  bool (*) (Enumerator_t2060299409 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<NUnit.Framework.Internal.TestNameGenerator/NameFragment>::Dispose()
#define Enumerator_Dispose_m2177781517(__this, method) ((  void (*) (Enumerator_t2060299409 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment>::.ctor()
#define List_1__ctor_m3618081898(__this, method) ((  void (*) (List_1_t171055532 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C"  int32_t String_IndexOf_m2466398549 (String_t* __this, Il2CppChar p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/FixedTextFragment::.ctor(System.String)
extern "C"  void FixedTextFragment__ctor_m1913240608 (FixedTextFragment_t3279578530 * __this, String_t* ___text0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment>::Add(!0)
#define List_1_Add_m3832489382(__this, p0, method) ((  void (*) (List_1_t171055532 *, NameFragment_t2993948086 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern "C"  uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m973434813 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/MethodNameFragment::.ctor()
extern "C"  void MethodNameFragment__ctor_m2110243467 (MethodNameFragment_t1693502444 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/TestIDFragment::.ctor()
extern "C"  void TestIDFragment__ctor_m1810242733 (TestIDFragment_t123621352 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/NamespaceFragment::.ctor()
extern "C"  void NamespaceFragment__ctor_m3934927644 (NamespaceFragment_t1263772683 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/ClassNameFragment::.ctor()
extern "C"  void ClassNameFragment__ctor_m3381037045 (ClassNameFragment_t819157190 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/ClassFullNameFragment::.ctor()
extern "C"  void ClassFullNameFragment__ctor_m3585531512 (ClassFullNameFragment_t2403317993 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/MethodFullNameFragment::.ctor()
extern "C"  void MethodFullNameFragment__ctor_m3772344756 (MethodFullNameFragment_t3487880812 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/ArgListFragment::.ctor(System.Int32)
extern "C"  void ArgListFragment__ctor_m2970761770 (ArgListFragment_t1470563774 * __this, int32_t ___maxStringLength0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment::.ctor(System.Int32,System.Int32)
extern "C"  void ArgumentFragment__ctor_m924894333 (ArgumentFragment_t2290785126 * __this, int32_t ___index0, int32_t ___maxStringLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m3646673943 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/NameFragment::.ctor()
extern "C"  void NameFragment__ctor_m1931039058 (NameFragment_t2993948086 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::GetDisplayString(System.Object,System.Int32)
extern "C"  String_t* NameFragment_GetDisplayString_m2494897668 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, int32_t ___stringMax1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestNameGenerator/NameFragment::AppendGenericTypeNames(System.Text.StringBuilder,System.Reflection.MethodInfo)
extern "C"  void NameFragment_AppendGenericTypeNames_m840342870 (RuntimeObject * __this /* static, unused */, StringBuilder_t * ___sb0, MethodInfo_t * ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
extern "C"  String_t* Convert_ToString_m1854379141 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNaN(System.Double)
extern "C"  bool Double_IsNaN_m649024406 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsPositiveInfinity(System.Double)
extern "C"  bool Double_IsPositiveInfinity_m1245619811 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNegativeInfinity(System.Double)
extern "C"  bool Double_IsNegativeInfinity_m538614603 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsNaN(System.Single)
extern "C"  bool Single_IsNaN_m4024467661 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsPositiveInfinity(System.Single)
extern "C"  bool Single_IsPositiveInfinity_m1411272350 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsNegativeInfinity(System.Single)
extern "C"  bool Single_IsNegativeInfinity_m1556741963 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
extern "C"  void Decimal__ctor_m3650533794 (Decimal_t2948259380 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, uint8_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_Equality_m77262825 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, Decimal_t2948259380  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::EscapeCharInString(System.Char)
extern "C"  String_t* NameFragment_EscapeCharInString_m1659453699 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::EscapeSingleChar(System.Char)
extern "C"  String_t* NameFragment_EscapeSingleChar_m660733469 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::EscapeControlChar(System.Char)
extern "C"  String_t* NameFragment_EscapeControlChar_m912372380 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m3588025615 (Il2CppChar* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.Test::get_Id()
extern "C"  String_t* Test_get_Id_m3567523840 (Test_t3432848304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestParameters::set_RunState(NUnit.Framework.Interfaces.RunState)
extern "C"  void TestParameters_set_RunState_m4072614124 (TestParameters_t1855520773 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.PropertyBag::.ctor()
extern "C"  void PropertyBag__ctor_m3192436542 (PropertyBag_t2593821153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestParameters::set_Properties(NUnit.Framework.Interfaces.IPropertyBag)
extern "C"  void TestParameters_set_Properties_m1859488682 (TestParameters_t1855520773 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestParameters::InitializeAguments(System.Object[])
extern "C"  void TestParameters_InitializeAguments_m177601263 (TestParameters_t1855520773 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestParameters::set_OriginalArguments(System.Object[])
extern "C"  void TestParameters_set_OriginalArguments_m2285983737 (TestParameters_t1855520773 * __this, ObjectU5BU5D_t2843939325* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestParameters::set_Arguments(System.Object[])
extern "C"  void TestParameters_set_Arguments_m422443602 (TestParameters_t1855520773 * __this, ObjectU5BU5D_t2843939325* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C"  void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.RunState NUnit.Framework.Internal.TestParameters::get_RunState()
extern "C"  int32_t TestParameters_get_RunState_m2944785766 (TestParameters_t1855520773 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.Test::set_RunState(NUnit.Framework.Interfaces.RunState)
extern "C"  void Test_set_RunState_m3305347189 (Test_t3432848304 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.IPropertyBag NUnit.Framework.Internal.TestParameters::get_Properties()
extern "C"  RuntimeObject* TestParameters_get_Properties_m4116936281 (TestParameters_t1855520773 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.IPropertyBag NUnit.Framework.Internal.Test::get_Properties()
extern "C"  RuntimeObject* Test_get_Properties_m120802510 (Test_t3432848304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestResult::set_Test(NUnit.Framework.Interfaces.ITest)
extern "C"  void TestResult_set_Test_m2020088078 (TestResult_t921768966 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestResult::set_ResultState(NUnit.Framework.Interfaces.ResultState)
extern "C"  void TestResult_set_ResultState_m404498624 (TestResult_t921768966 * __this, ResultState_t492092786 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C"  void StringWriter__ctor_m1259274362 (StringWriter_t802263757 * __this, StringBuilder_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter)
extern "C"  TextWriter_t3478189236 * TextWriter_Synchronized_m3089377210 (RuntimeObject * __this /* static, unused */, TextWriter_t3478189236 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestResult::set_OutWriter(System.IO.TextWriter)
extern "C"  void TestResult_set_OutWriter_m2718975664 (TestResult_t921768966 * __this, TextWriter_t3478189236 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.ITest NUnit.Framework.Internal.TestResult::get_Test()
extern "C"  RuntimeObject* TestResult_get_Test_m906044256 (TestResult_t921768966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Internal.TestResult::get_ResultState()
extern "C"  ResultState_t492092786 * TestResult_get_ResultState_m1725305102 (TestResult_t921768966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.TestStatus NUnit.Framework.Interfaces.ResultState::get_Status()
extern "C"  int32_t ResultState_get_Status_m3887425803 (ResultState_t492092786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Interfaces.ResultState::get_Label()
extern "C"  String_t* ResultState_get_Label_m1745926125 (ResultState_t492092786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.FailureSite NUnit.Framework.Interfaces.ResultState::get_Site()
extern "C"  int32_t ResultState_get_Site_m1795998105 (ResultState_t492092786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime NUnit.Framework.Internal.TestResult::get_StartTime()
extern "C"  DateTime_t3738529785  TestResult_get_StartTime_m3351224944 (TestResult_t921768966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String)
extern "C"  String_t* DateTime_ToString_m3718521780 (DateTime_t3738529785 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime NUnit.Framework.Internal.TestResult::get_EndTime()
extern "C"  DateTime_t3738529785  TestResult_get_EndTime_m3196670796 (TestResult_t921768966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double NUnit.Framework.Internal.TestResult::get_Duration()
extern "C"  double TestResult_get_Duration_m3105079578 (TestResult_t921768966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C"  NumberFormatInfo_t435877138 * NumberFormatInfo_get_InvariantInfo_m349577018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Double_ToString_m1051753975 (double* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 NUnit.Framework.Internal.TestResult::get_AssertCount()
extern "C"  int32_t TestResult_get_AssertCount_m110047121 (TestResult_t921768966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::AddFailureElement(NUnit.Framework.Interfaces.TNode)
extern "C"  TNode_t3946371078 * TestResult_AddFailureElement_m4018444267 (TestResult_t921768966 * __this, TNode_t3946371078 * ___targetNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.TestResult::get_Message()
extern "C"  String_t* TestResult_get_Message_m527488228 (TestResult_t921768966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::AddReasonElement(NUnit.Framework.Interfaces.TNode)
extern "C"  TNode_t3946371078 * TestResult_AddReasonElement_m3318757931 (TestResult_t921768966 * __this, TNode_t3946371078 * ___targetNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.TestResult::get_Output()
extern "C"  String_t* TestResult_get_Output_m3167960993 (TestResult_t921768966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::AddOutputElement(NUnit.Framework.Interfaces.TNode)
extern "C"  TNode_t3946371078 * TestResult_AddOutputElement_m2399671985 (TestResult_t921768966 * __this, TNode_t3946371078 * ___targetNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestResult::SetResult(NUnit.Framework.Interfaces.ResultState,System.String,System.String)
extern "C"  void TestResult_SetResult_m2224179203 (TestResult_t921768966 * __this, ResultState_t492092786 * ___resultState0, String_t* ___message1, String_t* ___stackTrace2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestResult::set_Message(System.String)
extern "C"  void TestResult_set_Message_m689027676 (TestResult_t921768966 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestResult::set_StackTrace(System.String)
extern "C"  void TestResult_set_StackTrace_m3431201277 (TestResult_t921768966 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C"  Exception_t * Exception_get_InnerException_m3836775 (Exception_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.StackFilter::Filter(System.String)
extern "C"  String_t* StackFilter_Filter_m1970130842 (RuntimeObject * __this /* static, unused */, String_t* ___rawTrace0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.ExceptionHelper::BuildMessage(System.Exception)
extern "C"  String_t* ExceptionHelper_BuildMessage_m3217148810 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.ExceptionHelper::BuildStackTrace(System.Exception)
extern "C"  String_t* ExceptionHelper_BuildStackTrace_m1376283377 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ResultState::WithSite(NUnit.Framework.Interfaces.FailureSite)
extern "C"  ResultState_t492092786 * ResultState_WithSite_m3842513512 (ResultState_t492092786 * __this, int32_t ___site0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Interfaces.TNode::AddElementWithCDATA(System.String,System.String)
extern "C"  TNode_t3946371078 * TNode_AddElementWithCDATA_m2939658879 (TNode_t3946371078 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest>::.ctor()
#define List_1__ctor_m3215046496(__this, method) ((  void (*) (List_1_t531332281 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void NUnit.Framework.Internal.Test::.ctor(System.String)
extern "C"  void Test__ctor_m4185353647 (Test_t3432848304 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestSuite::set_Arguments(System.Object[])
extern "C"  void TestSuite_set_Arguments_m938786632 (TestSuite_t407774568 * __this, ObjectU5BU5D_t2843939325* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.Test::.ctor(System.String,System.String)
extern "C"  void Test__ctor_m2791168741 (Test_t3432848304 * __this, String_t* ___pathName0, String_t* ___name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.Test::.ctor(NUnit.Framework.Interfaces.ITypeInfo)
extern "C"  void Test__ctor_m2616690045 (Test_t3432848304 * __this, RuntimeObject* ___typeInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean NUnit.Framework.Internal.TestSuite::get_MaintainTestOrder()
extern "C"  bool TestSuite_get_MaintainTestOrder_m3281967860 (TestSuite_t407774568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest>::Sort()
#define List_1_Sort_m3836414996(__this, method) ((  void (*) (List_1_t531332281 *, const RuntimeMethod*))List_1_Sort_m1127696474_gshared)(__this, method)
// System.Void NUnit.Framework.Internal.TestSuite::Sort()
extern "C"  void TestSuite_Sort_m501018403 (TestSuite_t407774568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.Test::set_Parent(NUnit.Framework.Interfaces.ITest)
extern "C"  void Test_set_Parent_m1697979243 (Test_t3432848304 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest>::Add(!0)
#define List_1_Add_m3496651552(__this, p0, method) ((  void (*) (List_1_t531332281 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void NUnit.Framework.Internal.TestSuiteResult::.ctor(NUnit.Framework.Internal.TestSuite)
extern "C"  void TestSuiteResult__ctor_m1687939535 (TestSuiteResult_t4148044652 * __this, TestSuite_t407774568 * ___suite0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Interfaces.ITypeInfo NUnit.Framework.Internal.Test::get_TypeInfo()
extern "C"  RuntimeObject* Test_get_TypeInfo_m2542028643 (Test_t3432848304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] NUnit.Framework.Internal.Reflect::GetMethodsWithAttribute(System.Type,System.Type,System.Boolean)
extern "C"  MethodInfoU5BU5D_t2572182361* Reflect_GetMethodsWithAttribute_m200404071 (RuntimeObject * __this /* static, unused */, Type_t * ___fixtureType0, Type_t * ___attributeType1, bool ___inherit2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsAbstract()
extern "C"  bool MethodBase_get_IsAbstract_m428833029 (MethodBase_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C"  bool MethodBase_get_IsPublic_m2180846589 (MethodBase_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsFamily()
extern "C"  bool MethodBase_get_IsFamily_m3588449059 (MethodBase_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestResult::.ctor(NUnit.Framework.Interfaces.ITest)
extern "C"  void TestResult__ctor_m977786872 (TestResult_t921768966 * __this, RuntimeObject* ___test0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult>::.ctor()
#define List_1__ctor_m3117187204(__this, method) ((  void (*) (List_1_t2639907989 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult>::get_Count()
#define List_1_get_Count_m3753441864(__this, method) ((  int32_t (*) (List_1_t2639907989 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C"  void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestResult::SetResult(NUnit.Framework.Interfaces.ResultState)
extern "C"  void TestResult_SetResult_m1750044282 (TestResult_t921768966 * __this, ResultState_t492092786 * ___resultState0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TestResult::SetResult(NUnit.Framework.Interfaces.ResultState,System.String)
extern "C"  void TestResult_SetResult_m2500787488 (TestResult_t921768966 * __this, ResultState_t492092786 * ___resultState0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Constraints.MessageWriter::.ctor()
extern "C"  void MessageWriter__ctor_m1750221710 (MessageWriter_t4095718909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Constraints.MessageWriter::WriteMessageLine(System.String,System.Object[])
extern "C"  void MessageWriter_WriteMessageLine_m832063330 (MessageWriter_t4095718909 * __this, String_t* ___message0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Constraints.MsgUtils::EscapeNullCharacters(System.String)
extern "C"  String_t* MsgUtils_EscapeNullCharacters_m184095093 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteExpectedLine(NUnit.Framework.Constraints.ConstraintResult)
extern "C"  void TextMessageWriter_WriteExpectedLine_m4224931375 (TextMessageWriter_t1905902127 * __this, ConstraintResult_t3673080895 * ___result0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteActualLine(NUnit.Framework.Constraints.ConstraintResult)
extern "C"  void TextMessageWriter_WriteActualLine_m317420518 (TextMessageWriter_t1905902127 * __this, ConstraintResult_t3673080895 * ___result0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteExpectedLine(System.Object)
extern "C"  void TextMessageWriter_WriteExpectedLine_m3215726834 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___expected0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteActualLine(System.Object)
extern "C"  void TextMessageWriter_WriteActualLine_m2197059919 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___actual0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteExpectedLine(System.Object,NUnit.Framework.Constraints.Tolerance)
extern "C"  void TextMessageWriter_WriteExpectedLine_m3157171240 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___expected0, Tolerance_t819151345 * ___tolerance1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Constraints.MsgUtils::ClipExpectedAndActual(System.String&,System.String&,System.Int32,System.Int32)
extern "C"  void MsgUtils_ClipExpectedAndActual_m3852715265 (RuntimeObject * __this /* static, unused */, String_t** ___expected0, String_t** ___actual1, int32_t ___maxDisplayLength2, int32_t ___mismatch3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Constraints.MsgUtils::EscapeControlChars(System.String)
extern "C"  String_t* MsgUtils_EscapeControlChars_m312279757 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 NUnit.Framework.Constraints.MsgUtils::FindMismatchPosition(System.String,System.String,System.Int32,System.Boolean)
extern "C"  int32_t MsgUtils_FindMismatchPosition_m3163754772 (RuntimeObject * __this /* static, unused */, String_t* ___expected0, String_t* ___actual1, int32_t ___istart2, bool ___ignoreCase3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Constraints.MsgUtils::FormatValue(System.Object)
extern "C"  String_t* MsgUtils_FormatValue_m4211138724 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___val0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteCaretLine(System.Int32)
extern "C"  void TextMessageWriter_WriteCaretLine_m2815048626 (TextMessageWriter_t1905902127 * __this, int32_t ___mismatch0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Constraints.MsgUtils::FormatCollection(System.Collections.IEnumerable,System.Int64,System.Int32)
extern "C"  String_t* MsgUtils_FormatCollection_m3425833712 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___collection0, int64_t ___start1, int32_t ___max2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Constraints.ConstraintResult::get_Description()
extern "C"  String_t* ConstraintResult_get_Description_m2592390351 (ConstraintResult_t3673080895 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean NUnit.Framework.Constraints.Tolerance::get_IsUnsetOrDefault()
extern "C"  bool Tolerance_get_IsUnsetOrDefault_m1390084011 (Tolerance_t819151345 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object NUnit.Framework.Constraints.Tolerance::get_Value()
extern "C"  RuntimeObject * Tolerance_get_Value_m3869481907 (Tolerance_t819151345 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Constraints.ToleranceMode NUnit.Framework.Constraints.Tolerance::get_Mode()
extern "C"  int32_t Tolerance_get_Mode_m3666460207 (Tolerance_t819151345 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.ThreadUtility::Kill(System.Threading.Thread,System.Object)
extern "C"  void ThreadUtility_Kill_m1498152550 (RuntimeObject * __this /* static, unused */, Thread_t2300836069 * ___thread0, RuntimeObject * ___stateInfo1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort()
extern "C"  void Thread_Abort_m14784104 (Thread_t2300836069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort(System.Object)
extern "C"  void Thread_Abort_m3994296774 (Thread_t2300836069 * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Resume()
extern "C"  void Thread_Resume_m1638819837 (Thread_t2300836069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.ThreadState System.Threading.Thread::get_ThreadState()
extern "C"  int32_t Thread_get_ThreadState_m2551357849 (Thread_t2300836069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Interrupt()
extern "C"  void Thread_Interrupt_m389245637 (Thread_t2300836069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type NUnit.Compatibility.TypeExtensions::GetTypeInfo(System.Type)
extern "C"  Type_t * TypeExtensions_GetTypeInfo_m2859982239 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C"  int32_t String_LastIndexOf_m3451222878 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.TypeHelper::GetDisplayName(System.Type)
extern "C"  String_t* TypeHelper_GetDisplayName_m1582185031 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C"  void StringBuilder__ctor_m2989139009 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean NUnit.Framework.Internal.TypeHelper::IsNumeric(System.Type)
extern "C"  bool TypeHelper_IsNumeric_m3844235642 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * Convert_ChangeType_m827193029 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Type_t * p1, RuntimeObject* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
extern "C"  ConstructorInfoU5BU5D_t881249896* Type_GetConstructors_m1172352582 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
extern "C"  bool Type_Equals_m709225487 (Type_t * __this, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type NUnit.Framework.Internal.TypeHelper::BestCommonType(System.Type,System.Type)
extern "C"  Type_t * TypeHelper_BestCommonType_m1103720624 (RuntimeObject * __this /* static, unused */, Type_t * ___type10, Type_t * ___type21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Guard::ArgumentNotNull(System.Object,System.String)
extern "C"  void Guard_ArgumentNotNull_m3776938452 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, String_t* ___name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TypeWrapper::set_Type(System.Type)
extern "C"  void TypeWrapper_set_Type_m3426937712 (TypeWrapper_t1570625984 * __this, Type_t * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type NUnit.Framework.Internal.TypeWrapper::get_Type()
extern "C"  Type_t * TypeWrapper_get_Type_m2058956209 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TypeWrapper::.ctor(System.Type)
extern "C"  void TypeWrapper__ctor_m3863500962 (TypeWrapper_t1570625984 * __this, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C"  bool Type_get_IsAbstract_m1120089130 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C"  bool Type_get_IsSealed_m3543837727 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String NUnit.Framework.Internal.TypeHelper::GetDisplayName(System.Type,System.Object[])
extern "C"  String_t* TypeHelper_GetDisplayName_m742861752 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t2843939325* ___arglist1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean NUnit.Framework.Internal.Reflect::HasMethodWithAttribute(System.Type,System.Type)
extern "C"  bool Reflect_HasMethodWithAttribute_m1348416161 (RuntimeObject * __this /* static, unused */, Type_t * ___fixtureType0, Type_t * ___attributeType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.MethodWrapper::.ctor(System.Type,System.Reflection.MethodInfo)
extern "C"  void MethodWrapper__ctor_m21071588 (MethodWrapper_t2578635129 * __this, Type_t * ___type0, MethodInfo_t * ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass36_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass36_0__ctor_m1198718135 (U3CU3Ec__DisplayClass36_0_t4213619634 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m973664881(__this, p0, p1, method) ((  void (*) (Func_2_t1796590042 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3104565095_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.ConstructorInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisConstructorInfo_t5769829_m2426976016(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t1796590042 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3454096398_gshared)(__this /* static, unused */, p0, p1, method)
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Reflection.ConstructorInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_FirstOrDefault_TisConstructorInfo_t5769829_m3168633260(__this /* static, unused */, p0, method) ((  ConstructorInfo_t5769829 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m1106606823_gshared)(__this /* static, unused */, p0, method)
// System.Reflection.ConstructorInfo NUnit.Framework.Internal.TypeWrapper::GetConstructor(System.Type[])
extern "C"  ConstructorInfo_t5769829 * TypeWrapper_GetConstructor_m64218867 (TypeWrapper_t1570625984 * __this, TypeU5BU5D_t3940880105* ___argTypes0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object NUnit.Framework.Internal.Reflect::Construct(System.Type,System.Object[])
extern "C"  RuntimeObject * Reflect_Construct_m2709419787 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t2843939325* ___arguments1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean NUnit.Compatibility.AdditionalTypeExtensions::ParametersMatch(System.Reflection.ParameterInfo[],System.Type[])
extern "C"  bool AdditionalTypeExtensions_ParametersMatch_m229967561 (RuntimeObject * __this /* static, unused */, ParameterInfoU5BU5D_t390618515* ___pinfos0, TypeU5BU5D_t3940880105* ___ptypes1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Constraints.TrueConstraint::.ctor()
extern "C"  void TrueConstraint__ctor_m2553953527 (TrueConstraint_t293028705 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Constraints.FalseConstraint::.ctor()
extern "C"  void FalseConstraint__ctor_m699325128 (FalseConstraint_t3043866582 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Constraints.EqualConstraint::.ctor(System.Object)
extern "C"  void EqualConstraint__ctor_m1971592962 (EqualConstraint_t520268896 * __this, RuntimeObject * ___expected0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception__ctor_m2499432361 (Exception_t * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Internal.TestExecutionContext NUnit.Framework.Internal.TestExecutionContext::get_CurrentContext()
extern "C"  TestExecutionContext_t999030305 * TestExecutionContext_get_CurrentContext_m2636608722 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter NUnit.Framework.Internal.TestExecutionContext::get_OutWriter()
extern "C"  TextWriter_t3478189236 * TestExecutionContext_get_OutWriter_m585599673 (TestExecutionContext_t999030305 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C"  TextWriter_t3478189236 * Console_get_Error_m1839879495 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.Internal.Execution.EventListenerTextWriter::.ctor(System.String,System.IO.TextWriter)
extern "C"  void EventListenerTextWriter__ctor_m3833339324 (EventListenerTextWriter_t1736808679 * __this, String_t* ___streamName0, TextWriter_t3478189236 * ___defaultWriter1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.TestParameters::.ctor()
extern "C"  void TestParameters__ctor_m2688514816 (TestParameters_t2765012299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::.ctor(System.Int32)
extern "C"  void U3CBuildFromU3Ed__48__ctor_m4260323252 (U3CBuildFromU3Ed__48_t3791848287 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C"  Thread_t2300836069 * Thread_get_CurrentThread_m4142136012 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C"  int32_t Thread_get_ManagedThreadId_m1068113671 (Thread_t2300836069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NUnit.Framework.Internal.TestSuite NUnit.Framework.Internal.Builders.NUnitTestFixtureBuilder::BuildFrom(NUnit.Framework.Interfaces.ITypeInfo,NUnit.Framework.Interfaces.ITestFixtureData)
extern "C"  TestSuite_t407774568 * NUnitTestFixtureBuilder_BuildFrom_m2098969236 (NUnitTestFixtureBuilder_t3046604762 * __this, RuntimeObject* ___typeInfo0, RuntimeObject* ___testFixtureData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<NUnit.Framework.Internal.TestSuite> NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::System.Collections.Generic.IEnumerable<NUnit.Framework.Internal.TestSuite>.GetEnumerator()
extern "C"  RuntimeObject* U3CBuildFromU3Ed__48_System_Collections_Generic_IEnumerableU3CNUnit_Framework_Internal_TestSuiteU3E_GetEnumerator_m3643769215 (U3CBuildFromU3Ed__48_t3791848287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m2307670220(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Globalization.NumberFormatInfo::set_CurrencyGroupSeparator(System.String)
extern "C"  void NumberFormatInfo_set_CurrencyGroupSeparator_m3331888699 (NumberFormatInfo_t435877138 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberGroupSeparator(System.String)
extern "C"  void NumberFormatInfo_set_NumberGroupSeparator_m1953697724 (NumberFormatInfo_t435877138 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_PercentGroupSeparator(System.String)
extern "C"  void NumberFormatInfo_set_PercentGroupSeparator_m693199726 (NumberFormatInfo_t435877138 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
#define Dictionary_2__ctor_m609215832(__this, method) ((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.IFormatProvider NUnit.Framework.TestParameters::CreateModifiedInvariantCulture()
extern "C"  RuntimeObject* TestParameters_CreateModifiedInvariantCulture_m1122814966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NUnit.Framework.Internal.TestExecutionContext/<>c::.cctor()
extern "C"  void U3CU3Ec__cctor_m243354504 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m243354504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4110531043 * L_0 = (U3CU3Ec_t4110531043 *)il2cpp_codegen_object_new(U3CU3Ec_t4110531043_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m615560005(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4110531043_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4110531043_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestExecutionContext/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m615560005 (U3CU3Ec_t4110531043 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestExecutionContext/<>c::<.ctor>b__9_0(System.Object)
extern "C"  String_t* U3CU3Ec_U3C_ctorU3Eb__9_0_m3785102164 (U3CU3Ec_t4110531043 * __this, RuntimeObject * ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__9_0_m3785102164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MsgUtils_t3625303109_il2cpp_TypeInfo_var);
		ValueFormatter_t4100324616 * L_0 = MsgUtils_get_DefaultValueFormatter_m1361497435(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___val0;
		String_t* L_2 = ValueFormatter_Invoke_m4109345758(L_0, L_1, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean NUnit.Framework.Internal.TestFilter::Pass(NUnit.Framework.Interfaces.ITest)
extern "C"  bool TestFilter_Pass_m1386543549 (TestFilter_t2701680237 * __this, RuntimeObject* ___test0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___test0;
		bool L_1 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(10 /* System.Boolean NUnit.Framework.Internal.TestFilter::Match(NUnit.Framework.Interfaces.ITest) */, __this, L_0);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = ___test0;
		bool L_3 = TestFilter_MatchParent_m836533562(__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_4 = ___test0;
		bool L_5 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(11 /* System.Boolean NUnit.Framework.Internal.TestFilter::MatchDescendant(NUnit.Framework.Interfaces.ITest) */, __this, L_4);
		return L_5;
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Boolean NUnit.Framework.Internal.TestFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest)
extern "C"  bool TestFilter_IsExplicitMatch_m4085742246 (TestFilter_t2701680237 * __this, RuntimeObject* ___test0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___test0;
		bool L_1 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(10 /* System.Boolean NUnit.Framework.Internal.TestFilter::Match(NUnit.Framework.Interfaces.ITest) */, __this, L_0);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___test0;
		bool L_3 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(11 /* System.Boolean NUnit.Framework.Internal.TestFilter::MatchDescendant(NUnit.Framework.Interfaces.ITest) */, __this, L_2);
		return L_3;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.Boolean NUnit.Framework.Internal.TestFilter::MatchParent(NUnit.Framework.Interfaces.ITest)
extern "C"  bool TestFilter_MatchParent_m836533562 (TestFilter_t2701680237 * __this, RuntimeObject* ___test0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestFilter_MatchParent_m836533562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___test0;
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* NUnit.Framework.Interfaces.ITest NUnit.Framework.Interfaces.ITest::get_Parent() */, ITest_t3354224835_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = ___test0;
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* NUnit.Framework.Interfaces.ITest NUnit.Framework.Interfaces.ITest::get_Parent() */, ITest_t3354224835_il2cpp_TypeInfo_var, L_2);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(10 /* System.Boolean NUnit.Framework.Internal.TestFilter::Match(NUnit.Framework.Interfaces.ITest) */, __this, L_3);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_5 = ___test0;
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* NUnit.Framework.Interfaces.ITest NUnit.Framework.Interfaces.ITest::get_Parent() */, ITest_t3354224835_il2cpp_TypeInfo_var, L_5);
		bool L_7 = TestFilter_MatchParent_m836533562(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0023:
	{
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean NUnit.Framework.Internal.TestFilter::MatchDescendant(NUnit.Framework.Interfaces.ITest)
extern "C"  bool TestFilter_MatchDescendant_m1981539265 (TestFilter_t2701680237 * __this, RuntimeObject* ___test0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestFilter_MatchDescendant_m1981539265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___test0;
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> NUnit.Framework.Interfaces.ITest::get_Tests() */, ITest_t3354224835_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___test0;
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> NUnit.Framework.Interfaces.ITest::get_Tests() */, ITest_t3354224835_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITest>::GetEnumerator() */, IEnumerable_1_t2334077724_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0018:
		{
			RuntimeObject* L_5 = V_0;
			RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<NUnit.Framework.Interfaces.ITest>::get_Current() */, IEnumerator_1_t3786795303_il2cpp_TypeInfo_var, L_5);
			V_1 = L_6;
			RuntimeObject* L_7 = V_1;
			bool L_8 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(10 /* System.Boolean NUnit.Framework.Internal.TestFilter::Match(NUnit.Framework.Interfaces.ITest) */, __this, L_7);
			if (L_8)
			{
				goto IL_0031;
			}
		}

IL_0028:
		{
			RuntimeObject* L_9 = V_1;
			bool L_10 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(11 /* System.Boolean NUnit.Framework.Internal.TestFilter::MatchDescendant(NUnit.Framework.Interfaces.ITest) */, __this, L_9);
			if (!L_10)
			{
				goto IL_0035;
			}
		}

IL_0031:
		{
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x4B, FINALLY_003f);
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_0;
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0018;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_0;
			if (!L_13)
			{
				goto IL_0048;
			}
		}

IL_0042:
		{
			RuntimeObject* L_14 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_14);
		}

IL_0048:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestFilter::ToXml(System.Boolean)
extern "C"  TNode_t3946371078 * TestFilter_ToXml_m4116466062 (TestFilter_t2701680237 * __this, bool ___recursive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestFilter_ToXml_m4116466062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TNode_t3946371078 * L_0 = (TNode_t3946371078 *)il2cpp_codegen_object_new(TNode_t3946371078_il2cpp_TypeInfo_var);
		TNode__ctor_m626016575(L_0, _stringLiteral424138002, /*hidden argument*/NULL);
		bool L_1 = ___recursive0;
		TNode_t3946371078 * L_2 = VirtFuncInvoker2< TNode_t3946371078 *, TNode_t3946371078 *, bool >::Invoke(12 /* NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestFilter::AddToXml(NUnit.Framework.Interfaces.TNode,System.Boolean) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Void NUnit.Framework.Internal.TestFilter::.ctor()
extern "C"  void TestFilter__ctor_m2448558655 (TestFilter_t2701680237 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestFilter::.cctor()
extern "C"  void TestFilter__cctor_m1277998003 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestFilter__cctor_m1277998003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EmptyFilter_t3371835522 * L_0 = (EmptyFilter_t3371835522 *)il2cpp_codegen_object_new(EmptyFilter_t3371835522_il2cpp_TypeInfo_var);
		EmptyFilter__ctor_m1164734834(L_0, /*hidden argument*/NULL);
		((TestFilter_t2701680237_StaticFields*)il2cpp_codegen_static_fields_for(TestFilter_t2701680237_il2cpp_TypeInfo_var))->set_Empty_0(L_0);
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
// System.Boolean NUnit.Framework.Internal.TestFilter/EmptyFilter::Match(NUnit.Framework.Interfaces.ITest)
extern "C"  bool EmptyFilter_Match_m20401073 (EmptyFilter_t3371835522 * __this, RuntimeObject* ___test0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean NUnit.Framework.Internal.TestFilter/EmptyFilter::Pass(NUnit.Framework.Interfaces.ITest)
extern "C"  bool EmptyFilter_Pass_m4084219775 (EmptyFilter_t3371835522 * __this, RuntimeObject* ___test0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean NUnit.Framework.Internal.TestFilter/EmptyFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest)
extern "C"  bool EmptyFilter_IsExplicitMatch_m3026225132 (EmptyFilter_t3371835522 * __this, RuntimeObject* ___test0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestFilter/EmptyFilter::AddToXml(NUnit.Framework.Interfaces.TNode,System.Boolean)
extern "C"  TNode_t3946371078 * EmptyFilter_AddToXml_m2955088874 (EmptyFilter_t3371835522 * __this, TNode_t3946371078 * ___parentNode0, bool ___recursive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EmptyFilter_AddToXml_m2955088874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TNode_t3946371078 * L_0 = ___parentNode0;
		TNode_t3946371078 * L_1 = TNode_AddElement_m3082294026(L_0, _stringLiteral1557880777, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void NUnit.Framework.Internal.TestFilter/EmptyFilter::.ctor()
extern "C"  void EmptyFilter__ctor_m1164734834 (EmptyFilter_t3371835522 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EmptyFilter__ctor_m1164734834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TestFilter_t2701680237_il2cpp_TypeInfo_var);
		TestFilter__ctor_m2448558655(__this, /*hidden argument*/NULL);
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
// System.Void NUnit.Framework.Internal.TestFixture::.ctor(NUnit.Framework.Interfaces.ITypeInfo)
extern "C"  void TestFixture__ctor_m2096051055 (TestFixture_t1563123309 * __this, RuntimeObject* ___fixtureType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestFixture__ctor_m2096051055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___fixtureType0;
		TestSuite__ctor_m2589975646(__this, L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (OneTimeSetUpAttribute_t1341445578_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		TestSuite_CheckSetUpTearDownMethods_m2163883642(__this, L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (OneTimeTearDownAttribute_t3231931417_0_0_0_var) };
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		TestSuite_CheckSetUpTearDownMethods_m2163883642(__this, L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (SetUpAttribute_t1818501660_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		TestSuite_CheckSetUpTearDownMethods_m2163883642(__this, L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (TearDownAttribute_t4180222501_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		TestSuite_CheckSetUpTearDownMethods_m2163883642(__this, L_8, /*hidden argument*/NULL);
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
// System.Void NUnit.Framework.Internal.TestListener::TestStarted(NUnit.Framework.Interfaces.ITest)
extern "C"  void TestListener_TestStarted_m2803746615 (TestListener_t3563649619 * __this, RuntimeObject* ___test0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestListener::TestFinished(NUnit.Framework.Interfaces.ITestResult)
extern "C"  void TestListener_TestFinished_m389148963 (TestListener_t3563649619 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestListener::TestOutput(NUnit.Framework.Interfaces.TestOutput)
extern "C"  void TestListener_TestOutput_m209616507 (TestListener_t3563649619 * __this, TestOutput_t3408727266 * ___output0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestListener::.ctor()
extern "C"  void TestListener__ctor_m3309691275 (TestListener_t3563649619 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// NUnit.Framework.Interfaces.ITestListener NUnit.Framework.Internal.TestListener::get_NULL()
extern "C"  RuntimeObject* TestListener_get_NULL_m2077474789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestListener_get_NULL_m2077474789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TestListener_t3563649619 * L_0 = (TestListener_t3563649619 *)il2cpp_codegen_object_new(TestListener_t3563649619_il2cpp_TypeInfo_var);
		TestListener__ctor_m3309691275(L_0, /*hidden argument*/NULL);
		return L_0;
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
// System.Void NUnit.Framework.Internal.TestMethod::.ctor(NUnit.Framework.Interfaces.IMethodInfo,NUnit.Framework.Internal.Test)
extern "C"  void TestMethod__ctor_m177902283 (TestMethod_t1085459043 * __this, RuntimeObject* ___method0, Test_t3432848304 * ___parentSuite1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestMethod__ctor_m177902283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___method0;
		IL2CPP_RUNTIME_CLASS_INIT(Test_t3432848304_il2cpp_TypeInfo_var);
		Test__ctor_m3770962239(__this, L_0, /*hidden argument*/NULL);
		Test_t3432848304 * L_1 = ___parentSuite1;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Test_t3432848304 * L_2 = ___parentSuite1;
		IL2CPP_RUNTIME_CLASS_INIT(Test_t3432848304_il2cpp_TypeInfo_var);
		String_t* L_3 = Test_get_FullName_m2370175434(L_2, /*hidden argument*/NULL);
		String_t* L_4 = Test_get_Name_m275867403(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, L_3, _stringLiteral3452614530, L_4, /*hidden argument*/NULL);
		Test_set_FullName_m4131554050(__this, L_5, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Boolean NUnit.Framework.Internal.TestMethod::get_HasExpectedResult()
extern "C"  bool TestMethod_get_HasExpectedResult_m4079930570 (TestMethod_t1085459043 * __this, const RuntimeMethod* method)
{
	{
		TestCaseParameters_t2908894354 * L_0 = __this->get_parms_16();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TestCaseParameters_t2908894354 * L_1 = __this->get_parms_16();
		bool L_2 = TestCaseParameters_get_HasExpectedResult_m1801210955(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Object NUnit.Framework.Internal.TestMethod::get_ExpectedResult()
extern "C"  RuntimeObject * TestMethod_get_ExpectedResult_m3796460409 (TestMethod_t1085459043 * __this, const RuntimeMethod* method)
{
	{
		TestCaseParameters_t2908894354 * L_0 = __this->get_parms_16();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		TestCaseParameters_t2908894354 * L_1 = __this->get_parms_16();
		RuntimeObject * L_2 = TestCaseParameters_get_ExpectedResult_m926200647(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] NUnit.Framework.Internal.TestMethod::get_Arguments()
extern "C"  ObjectU5BU5D_t2843939325* TestMethod_get_Arguments_m3447329946 (TestMethod_t1085459043 * __this, const RuntimeMethod* method)
{
	{
		TestCaseParameters_t2908894354 * L_0 = __this->get_parms_16();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ObjectU5BU5D_t2843939325*)NULL;
	}

IL_000a:
	{
		TestCaseParameters_t2908894354 * L_1 = __this->get_parms_16();
		ObjectU5BU5D_t2843939325* L_2 = TestParameters_get_Arguments_m553610255(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// NUnit.Framework.Internal.TestResult NUnit.Framework.Internal.TestMethod::MakeTestResult()
extern "C"  TestResult_t921768966 * TestMethod_MakeTestResult_m33355792 (TestMethod_t1085459043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestMethod_MakeTestResult_m33355792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TestCaseResult_t777036217 * L_0 = (TestCaseResult_t777036217 *)il2cpp_codegen_object_new(TestCaseResult_t777036217_il2cpp_TypeInfo_var);
		TestCaseResult__ctor_m4059248510(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestMethod::AddToXml(NUnit.Framework.Interfaces.TNode,System.Boolean)
extern "C"  TNode_t3946371078 * TestMethod_AddToXml_m3617296028 (TestMethod_t1085459043 * __this, TNode_t3946371078 * ___parentNode0, bool ___recursive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestMethod_AddToXml_m3617296028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TNode_t3946371078 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		TNode_t3946371078 * L_0 = ___parentNode0;
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String NUnit.Framework.Internal.Test::get_XmlElementName() */, __this);
		TNode_t3946371078 * L_2 = TNode_AddElement_m3082294026(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		TNode_t3946371078 * L_3 = V_0;
		bool L_4 = ___recursive1;
		Test_PopulateTestNode_m4050235924(__this, L_3, L_4, /*hidden argument*/NULL);
		TNode_t3946371078 * L_5 = V_0;
		int32_t L_6 = Test_get_Seed_m1972831827(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7 = Int32_ToString_m141394615((&V_1), /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_5, _stringLiteral2757345630, L_7, /*hidden argument*/NULL);
		TNode_t3946371078 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> NUnit.Framework.Internal.TestMethod::get_Tests()
extern "C"  RuntimeObject* TestMethod_get_Tests_m1180014442 (TestMethod_t1085459043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestMethod_get_Tests_m1180014442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (RuntimeObject*)((ITestU5BU5D_t3872523474*)SZArrayNew(ITestU5BU5D_t3872523474_il2cpp_TypeInfo_var, (uint32_t)0));
	}
}
// System.String NUnit.Framework.Internal.TestMethod::get_XmlElementName()
extern "C"  String_t* TestMethod_get_XmlElementName_m176013409 (TestMethod_t1085459043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestMethod_get_XmlElementName_m176013409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3793816299;
	}
}
// System.String NUnit.Framework.Internal.TestMethod::get_MethodName()
extern "C"  String_t* TestMethod_get_MethodName_m3633071391 (TestMethod_t1085459043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestMethod_get_MethodName_m3633071391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Test_get_Method_m3979244495(__this, /*hidden argument*/NULL);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String NUnit.Framework.Interfaces.IMethodInfo::get_Name() */, IMethodInfo_t4206102174_il2cpp_TypeInfo_var, L_0);
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
// System.Void NUnit.Framework.Internal.TestNameGenerator::.ctor()
extern "C"  void TestNameGenerator__ctor_m475129224 (TestNameGenerator_t2179848069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestNameGenerator__ctor_m475129224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TestNameGenerator_t2179848069_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TestNameGenerator_t2179848069_StaticFields*)il2cpp_codegen_static_fields_for(TestNameGenerator_t2179848069_il2cpp_TypeInfo_var))->get_DefaultTestNamePattern_0();
		__this->set__pattern_1(L_0);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator::.ctor(System.String)
extern "C"  void TestNameGenerator__ctor_m1533937724 (TestNameGenerator_t2179848069 * __this, String_t* ___pattern0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___pattern0;
		__this->set__pattern_1(L_0);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestNameGenerator::GetDisplayName(NUnit.Framework.Internal.TestMethod,System.Object[])
extern "C"  String_t* TestNameGenerator_GetDisplayName_m956149260 (TestNameGenerator_t2179848069 * __this, TestMethod_t1085459043 * ___testMethod0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestNameGenerator_GetDisplayName_m956149260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Enumerator_t2060299409  V_1;
	memset(&V_1, 0, sizeof(V_1));
	NameFragment_t2993948086 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t171055532 * L_0 = __this->get__fragments_2();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = __this->get__pattern_1();
		IL2CPP_RUNTIME_CLASS_INIT(TestNameGenerator_t2179848069_il2cpp_TypeInfo_var);
		List_1_t171055532 * L_2 = TestNameGenerator_BuildFragmentList_m2084964715(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set__fragments_2(L_2);
	}

IL_0019:
	{
		StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		List_1_t171055532 * L_4 = __this->get__fragments_2();
		Enumerator_t2060299409  L_5 = List_1_GetEnumerator_m1860925481(L_4, /*hidden argument*/List_1_GetEnumerator_m1860925481_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_002d:
		{
			NameFragment_t2993948086 * L_6 = Enumerator_get_Current_m1062154811((&V_1), /*hidden argument*/Enumerator_get_Current_m1062154811_RuntimeMethod_var);
			V_2 = L_6;
			StringBuilder_t * L_7 = V_0;
			NameFragment_t2993948086 * L_8 = V_2;
			TestMethod_t1085459043 * L_9 = ___testMethod0;
			ObjectU5BU5D_t2843939325* L_10 = ___args1;
			String_t* L_11 = VirtFuncInvoker2< String_t*, TestMethod_t1085459043 *, ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::GetText(NUnit.Framework.Internal.TestMethod,System.Object[]) */, L_8, L_9, L_10);
			StringBuilder_Append_m1965104174(L_7, L_11, /*hidden argument*/NULL);
		}

IL_0044:
		{
			bool L_12 = Enumerator_MoveNext_m215596758((&V_1), /*hidden argument*/Enumerator_MoveNext_m215596758_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_002d;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2177781517((&V_1), /*hidden argument*/Enumerator_Dispose_m2177781517_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		StringBuilder_t * L_13 = V_0;
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment> NUnit.Framework.Internal.TestNameGenerator::BuildFragmentList(System.String)
extern "C"  List_1_t171055532 * TestNameGenerator_BuildFragmentList_m2084964715 (RuntimeObject * __this /* static, unused */, String_t* ___pattern0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestNameGenerator_BuildFragmentList_m2084964715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t171055532 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t171055532 * L_0 = (List_1_t171055532 *)il2cpp_codegen_object_new(List_1_t171055532_il2cpp_TypeInfo_var);
		List_1__ctor_m3618081898(L_0, /*hidden argument*/List_1__ctor_m3618081898_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0420;
	}

IL_000d:
	{
		String_t* L_1 = ___pattern0;
		int32_t L_2 = V_1;
		int32_t L_3 = String_IndexOf_m2466398549(L_1, ((int32_t)123), L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_042c;
		}
	}
	{
		String_t* L_5 = ___pattern0;
		int32_t L_6 = V_2;
		int32_t L_7 = String_IndexOf_m2466398549(L_5, ((int32_t)125), L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_042c;
		}
	}
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0048;
		}
	}
	{
		List_1_t171055532 * L_11 = V_0;
		String_t* L_12 = ___pattern0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		String_t* L_16 = String_Substring_m1610150815(L_12, L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/NULL);
		FixedTextFragment_t3279578530 * L_17 = (FixedTextFragment_t3279578530 *)il2cpp_codegen_object_new(FixedTextFragment_t3279578530_il2cpp_TypeInfo_var);
		FixedTextFragment__ctor_m1913240608(L_17, L_16, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_11, L_17, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
	}

IL_0048:
	{
		String_t* L_18 = ___pattern0;
		int32_t L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		String_t* L_22 = String_Substring_m1610150815(L_18, L_19, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)), (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_22;
		String_t* L_23 = V_4;
		uint32_t L_24 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m973434813(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		uint32_t L_25 = V_5;
		if ((!(((uint32_t)L_25) <= ((uint32_t)((int32_t)876709427)))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_26 = V_5;
		if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)864983739)))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_27 = V_5;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)864292191)))))
		{
			goto IL_009a;
		}
	}
	{
		uint32_t L_28 = V_5;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)863556716))))
		{
			goto IL_02ec;
		}
	}
	{
		uint32_t L_29 = V_5;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)864292191))))
		{
			goto IL_0252;
		}
	}
	{
		goto IL_0391;
	}

IL_009a:
	{
		uint32_t L_30 = V_5;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)864836644))))
		{
			goto IL_023c;
		}
	}
	{
		uint32_t L_31 = V_5;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)864983739))))
		{
			goto IL_02aa;
		}
	}
	{
		goto IL_0391;
	}

IL_00b7:
	{
		uint32_t L_32 = V_5;
		if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)871927832)))))
		{
			goto IL_00dd;
		}
	}
	{
		uint32_t L_33 = V_5;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)865425024))))
		{
			goto IL_0294;
		}
	}
	{
		uint32_t L_34 = V_5;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)871927832))))
		{
			goto IL_01fa;
		}
	}
	{
		goto IL_0391;
	}

IL_00dd:
	{
		uint32_t L_35 = V_5;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)876562332))))
		{
			goto IL_01a2;
		}
	}
	{
		uint32_t L_36 = V_5;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)876709427))))
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0391;
	}

IL_00fa:
	{
		uint32_t L_37 = V_5;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)931652930)))))
		{
			goto IL_0143;
		}
	}
	{
		uint32_t L_38 = V_5;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)877842260)))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_39 = V_5;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)877150712))))
		{
			goto IL_018c;
		}
	}
	{
		uint32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)877842260))))
		{
			goto IL_0210;
		}
	}
	{
		goto IL_0391;
	}

IL_0126:
	{
		uint32_t L_41 = V_5;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)930520097))))
		{
			goto IL_02d6;
		}
	}
	{
		uint32_t L_42 = V_5;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)931652930))))
		{
			goto IL_0268;
		}
	}
	{
		goto IL_0391;
	}

IL_0143:
	{
		uint32_t L_43 = V_5;
		if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)932241310)))))
		{
			goto IL_0169;
		}
	}
	{
		uint32_t L_44 = V_5;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)931800025))))
		{
			goto IL_0226;
		}
	}
	{
		uint32_t L_45 = V_5;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)932241310))))
		{
			goto IL_02c0;
		}
	}
	{
		goto IL_0391;
	}

IL_0169:
	{
		uint32_t L_46 = V_5;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)932388405))))
		{
			goto IL_027e;
		}
	}
	{
		uint32_t L_47 = V_5;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)939435666))))
		{
			goto IL_01e4;
		}
	}
	{
		uint32_t L_48 = V_5;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)944555378))))
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_0391;
	}

IL_018c:
	{
		String_t* L_49 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m920492651(NULL /*static, unused*/, L_49, _stringLiteral631427806, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_02ff;
		}
	}
	{
		goto IL_0391;
	}

IL_01a2:
	{
		String_t* L_51 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_52 = String_op_Equality_m920492651(NULL /*static, unused*/, L_51, _stringLiteral631689950, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_0391;
	}

IL_01b8:
	{
		String_t* L_53 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_54 = String_op_Equality_m920492651(NULL /*static, unused*/, L_53, _stringLiteral631362270, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_031f;
		}
	}
	{
		goto IL_0391;
	}

IL_01ce:
	{
		String_t* L_55 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_56 = String_op_Equality_m920492651(NULL /*static, unused*/, L_55, _stringLiteral631034590, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_032f;
		}
	}
	{
		goto IL_0391;
	}

IL_01e4:
	{
		String_t* L_57 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m920492651(NULL /*static, unused*/, L_57, _stringLiteral633131742, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_033f;
		}
	}
	{
		goto IL_0391;
	}

IL_01fa:
	{
		String_t* L_59 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_60 = String_op_Equality_m920492651(NULL /*static, unused*/, L_59, _stringLiteral633524958, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_0391;
	}

IL_0210:
	{
		String_t* L_61 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_62 = String_op_Equality_m920492651(NULL /*static, unused*/, L_61, _stringLiteral631165662, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_035f;
		}
	}
	{
		goto IL_0391;
	}

IL_0226:
	{
		String_t* L_63 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_64 = String_op_Equality_m920492651(NULL /*static, unused*/, L_63, _stringLiteral628085470, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_023c:
	{
		String_t* L_65 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_66 = String_op_Equality_m920492651(NULL /*static, unused*/, L_65, _stringLiteral628019934, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_0252:
	{
		String_t* L_67 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_68 = String_op_Equality_m920492651(NULL /*static, unused*/, L_67, _stringLiteral627954398, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_0268:
	{
		String_t* L_69 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_70 = String_op_Equality_m920492651(NULL /*static, unused*/, L_69, _stringLiteral627888862, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_027e:
	{
		String_t* L_71 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_72 = String_op_Equality_m920492651(NULL /*static, unused*/, L_71, _stringLiteral627823326, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_0294:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_74 = String_op_Equality_m920492651(NULL /*static, unused*/, L_73, _stringLiteral627757790, /*hidden argument*/NULL);
		if (L_74)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_02aa:
	{
		String_t* L_75 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_76 = String_op_Equality_m920492651(NULL /*static, unused*/, L_75, _stringLiteral627692254, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_02c0:
	{
		String_t* L_77 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_78 = String_op_Equality_m920492651(NULL /*static, unused*/, L_77, _stringLiteral627626718, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_02d6:
	{
		String_t* L_79 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_80 = String_op_Equality_m920492651(NULL /*static, unused*/, L_79, _stringLiteral628609758, /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_02ec:
	{
		String_t* L_81 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_82 = String_op_Equality_m920492651(NULL /*static, unused*/, L_81, _stringLiteral628544222, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_0391;
	}

IL_02ff:
	{
		List_1_t171055532 * L_83 = V_0;
		MethodNameFragment_t1693502444 * L_84 = (MethodNameFragment_t1693502444 *)il2cpp_codegen_object_new(MethodNameFragment_t1693502444_il2cpp_TypeInfo_var);
		MethodNameFragment__ctor_m2110243467(L_84, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_83, L_84, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_030f:
	{
		List_1_t171055532 * L_85 = V_0;
		TestIDFragment_t123621352 * L_86 = (TestIDFragment_t123621352 *)il2cpp_codegen_object_new(TestIDFragment_t123621352_il2cpp_TypeInfo_var);
		TestIDFragment__ctor_m1810242733(L_86, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_85, L_86, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_031f:
	{
		List_1_t171055532 * L_87 = V_0;
		NamespaceFragment_t1263772683 * L_88 = (NamespaceFragment_t1263772683 *)il2cpp_codegen_object_new(NamespaceFragment_t1263772683_il2cpp_TypeInfo_var);
		NamespaceFragment__ctor_m3934927644(L_88, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_87, L_88, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_032f:
	{
		List_1_t171055532 * L_89 = V_0;
		ClassNameFragment_t819157190 * L_90 = (ClassNameFragment_t819157190 *)il2cpp_codegen_object_new(ClassNameFragment_t819157190_il2cpp_TypeInfo_var);
		ClassNameFragment__ctor_m3381037045(L_90, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_89, L_90, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_033f:
	{
		List_1_t171055532 * L_91 = V_0;
		ClassFullNameFragment_t2403317993 * L_92 = (ClassFullNameFragment_t2403317993 *)il2cpp_codegen_object_new(ClassFullNameFragment_t2403317993_il2cpp_TypeInfo_var);
		ClassFullNameFragment__ctor_m3585531512(L_92, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_91, L_92, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_034f:
	{
		List_1_t171055532 * L_93 = V_0;
		MethodFullNameFragment_t3487880812 * L_94 = (MethodFullNameFragment_t3487880812 *)il2cpp_codegen_object_new(MethodFullNameFragment_t3487880812_il2cpp_TypeInfo_var);
		MethodFullNameFragment__ctor_m3772344756(L_94, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_93, L_94, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_035f:
	{
		List_1_t171055532 * L_95 = V_0;
		ArgListFragment_t1470563774 * L_96 = (ArgListFragment_t1470563774 *)il2cpp_codegen_object_new(ArgListFragment_t1470563774_il2cpp_TypeInfo_var);
		ArgListFragment__ctor_m2970761770(L_96, 0, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_95, L_96, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_0370:
	{
		String_t* L_97 = V_4;
		Il2CppChar L_98 = String_get_Chars_m2986988803(L_97, 1, /*hidden argument*/NULL);
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)((int32_t)48)));
		List_1_t171055532 * L_99 = V_0;
		int32_t L_100 = V_6;
		ArgumentFragment_t2290785126 * L_101 = (ArgumentFragment_t2290785126 *)il2cpp_codegen_object_new(ArgumentFragment_t2290785126_il2cpp_TypeInfo_var);
		ArgumentFragment__ctor_m924894333(L_101, L_100, ((int32_t)40), /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_99, L_101, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_0391:
	{
		String_t* L_102 = V_4;
		Il2CppChar L_103 = String_get_Chars_m2986988803(L_102, 1, /*hidden argument*/NULL);
		V_7 = L_103;
		String_t* L_104 = V_4;
		int32_t L_105 = String_get_Length_m3847582255(L_104, /*hidden argument*/NULL);
		if ((((int32_t)L_105) < ((int32_t)5)))
		{
			goto IL_040f;
		}
	}
	{
		String_t* L_106 = V_4;
		Il2CppChar L_107 = String_get_Chars_m2986988803(L_106, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_107) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_040f;
		}
	}
	{
		Il2CppChar L_108 = V_7;
		if ((((int32_t)L_108) == ((int32_t)((int32_t)97))))
		{
			goto IL_03c0;
		}
	}
	{
		Il2CppChar L_109 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_110 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_109, /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_040f;
		}
	}

IL_03c0:
	{
	}

IL_03c1:
	try
	{ // begin try (depth: 1)
		String_t* L_111 = V_4;
		String_t* L_112 = V_4;
		int32_t L_113 = String_get_Length_m3847582255(L_112, /*hidden argument*/NULL);
		String_t* L_114 = String_Substring_m1610150815(L_111, 3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)4)), /*hidden argument*/NULL);
		int32_t L_115 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_114, /*hidden argument*/NULL);
		V_8 = L_115;
		goto IL_03e1;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_03db;
		throw e;
	}

CATCH_03db:
	{ // begin catch(System.Object)
		V_8 = (-1);
		goto IL_03e1;
	} // end catch (depth: 1)

IL_03e1:
	{
		int32_t L_116 = V_8;
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_040f;
		}
	}
	{
		Il2CppChar L_117 = V_7;
		if ((!(((uint32_t)L_117) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_03fb;
		}
	}
	{
		List_1_t171055532 * L_118 = V_0;
		int32_t L_119 = V_8;
		ArgListFragment_t1470563774 * L_120 = (ArgListFragment_t1470563774 *)il2cpp_codegen_object_new(ArgListFragment_t1470563774_il2cpp_TypeInfo_var);
		ArgListFragment__ctor_m2970761770(L_120, L_119, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_118, L_120, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_03fb:
	{
		List_1_t171055532 * L_121 = V_0;
		Il2CppChar L_122 = V_7;
		int32_t L_123 = V_8;
		ArgumentFragment_t2290785126 * L_124 = (ArgumentFragment_t2290785126 *)il2cpp_codegen_object_new(ArgumentFragment_t2290785126_il2cpp_TypeInfo_var);
		ArgumentFragment__ctor_m924894333(L_124, ((int32_t)il2cpp_codegen_subtract((int32_t)L_122, (int32_t)((int32_t)48))), L_123, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_121, L_124, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
		goto IL_041c;
	}

IL_040f:
	{
		List_1_t171055532 * L_125 = V_0;
		String_t* L_126 = V_4;
		FixedTextFragment_t3279578530 * L_127 = (FixedTextFragment_t3279578530 *)il2cpp_codegen_object_new(FixedTextFragment_t3279578530_il2cpp_TypeInfo_var);
		FixedTextFragment__ctor_m1913240608(L_127, L_126, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_125, L_127, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
	}

IL_041c:
	{
		int32_t L_128 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1));
	}

IL_0420:
	{
		int32_t L_129 = V_1;
		String_t* L_130 = ___pattern0;
		int32_t L_131 = String_get_Length_m3847582255(L_130, /*hidden argument*/NULL);
		if ((((int32_t)L_129) < ((int32_t)L_131)))
		{
			goto IL_000d;
		}
	}

IL_042c:
	{
		int32_t L_132 = V_1;
		String_t* L_133 = ___pattern0;
		int32_t L_134 = String_get_Length_m3847582255(L_133, /*hidden argument*/NULL);
		if ((((int32_t)L_132) >= ((int32_t)L_134)))
		{
			goto IL_0447;
		}
	}
	{
		List_1_t171055532 * L_135 = V_0;
		String_t* L_136 = ___pattern0;
		int32_t L_137 = V_1;
		String_t* L_138 = String_Substring_m2848979100(L_136, L_137, /*hidden argument*/NULL);
		FixedTextFragment_t3279578530 * L_139 = (FixedTextFragment_t3279578530 *)il2cpp_codegen_object_new(FixedTextFragment_t3279578530_il2cpp_TypeInfo_var);
		FixedTextFragment__ctor_m1913240608(L_139, L_138, /*hidden argument*/NULL);
		List_1_Add_m3832489382(L_135, L_139, /*hidden argument*/List_1_Add_m3832489382_RuntimeMethod_var);
	}

IL_0447:
	{
		List_1_t171055532 * L_140 = V_0;
		return L_140;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator::.cctor()
extern "C"  void TestNameGenerator__cctor_m3557877131 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestNameGenerator__cctor_m3557877131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TestNameGenerator_t2179848069_StaticFields*)il2cpp_codegen_static_fields_for(TestNameGenerator_t2179848069_il2cpp_TypeInfo_var))->set_DefaultTestNamePattern_0(_stringLiteral3139276341);
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
// System.Void NUnit.Framework.Internal.TestNameGenerator/ArgListFragment::.ctor(System.Int32)
extern "C"  void ArgListFragment__ctor_m2970761770 (ArgListFragment_t1470563774 * __this, int32_t ___maxStringLength0, const RuntimeMethod* method)
{
	{
		NameFragment__ctor_m1931039058(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___maxStringLength0;
		__this->set__maxStringLength_0(L_0);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestNameGenerator/ArgListFragment::GetText(System.Reflection.MethodInfo,System.Object[])
extern "C"  String_t* ArgListFragment_GetText_m1765285648 (ArgListFragment_t1470563774 * __this, MethodInfo_t * ___method0, ObjectU5BU5D_t2843939325* ___arglist1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArgListFragment_GetText_m1765285648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ObjectU5BU5D_t2843939325* L_1 = ___arglist1;
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t * L_2 = V_0;
		StringBuilder_Append_m2383614642(L_2, ((int32_t)40), /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_003f;
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		StringBuilder_t * L_4 = V_0;
		StringBuilder_Append_m1965104174(L_4, _stringLiteral3452614532, /*hidden argument*/NULL);
	}

IL_0026:
	{
		StringBuilder_t * L_5 = V_0;
		ObjectU5BU5D_t2843939325* L_6 = ___arglist1;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = __this->get__maxStringLength_0();
		String_t* L_11 = NameFragment_GetDisplayString_m2494897668(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_5, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t2843939325* L_14 = ___arglist1;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		StringBuilder_Append_m2383614642(L_15, ((int32_t)41), /*hidden argument*/NULL);
	}

IL_004e:
	{
		StringBuilder_t * L_16 = V_0;
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
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
// System.Void NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment::.ctor(System.Int32,System.Int32)
extern "C"  void ArgumentFragment__ctor_m924894333 (ArgumentFragment_t2290785126 * __this, int32_t ___index0, int32_t ___maxStringLength1, const RuntimeMethod* method)
{
	{
		NameFragment__ctor_m1931039058(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___index0;
		__this->set__index_0(L_0);
		int32_t L_1 = ___maxStringLength1;
		__this->set__maxStringLength_1(L_1);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestNameGenerator/ArgumentFragment::GetText(System.Reflection.MethodInfo,System.Object[])
extern "C"  String_t* ArgumentFragment_GetText_m3554084499 (ArgumentFragment_t2290785126 * __this, MethodInfo_t * ___method0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArgumentFragment_GetText_m3554084499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__index_0();
		ObjectU5BU5D_t2843939325* L_1 = ___args1;
		if ((((int32_t)L_0) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_2;
	}

IL_0011:
	{
		ObjectU5BU5D_t2843939325* L_3 = ___args1;
		int32_t L_4 = __this->get__index_0();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = __this->get__maxStringLength_1();
		String_t* L_8 = NameFragment_GetDisplayString_m2494897668(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.String NUnit.Framework.Internal.TestNameGenerator/ClassFullNameFragment::GetText(System.Reflection.MethodInfo,System.Object[])
extern "C"  String_t* ClassFullNameFragment_GetText_m1591835124 (ClassFullNameFragment_t2403317993 * __this, MethodInfo_t * ___method0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = ___method0;
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		return L_2;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator/ClassFullNameFragment::.ctor()
extern "C"  void ClassFullNameFragment__ctor_m3585531512 (ClassFullNameFragment_t2403317993 * __this, const RuntimeMethod* method)
{
	{
		NameFragment__ctor_m1931039058(__this, /*hidden argument*/NULL);
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
// System.String NUnit.Framework.Internal.TestNameGenerator/ClassNameFragment::GetText(System.Reflection.MethodInfo,System.Object[])
extern "C"  String_t* ClassNameFragment_GetText_m4143907514 (ClassNameFragment_t819157190 * __this, MethodInfo_t * ___method0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = ___method0;
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		return L_2;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator/ClassNameFragment::.ctor()
extern "C"  void ClassNameFragment__ctor_m3381037045 (ClassNameFragment_t819157190 * __this, const RuntimeMethod* method)
{
	{
		NameFragment__ctor_m1931039058(__this, /*hidden argument*/NULL);
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
// System.Void NUnit.Framework.Internal.TestNameGenerator/FixedTextFragment::.ctor(System.String)
extern "C"  void FixedTextFragment__ctor_m1913240608 (FixedTextFragment_t3279578530 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		NameFragment__ctor_m1931039058(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text0;
		__this->set__text_0(L_0);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestNameGenerator/FixedTextFragment::GetText(System.Reflection.MethodInfo,System.Object[])
extern "C"  String_t* FixedTextFragment_GetText_m412478581 (FixedTextFragment_t3279578530 * __this, MethodInfo_t * ___method0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__text_0();
		return L_0;
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
// System.String NUnit.Framework.Internal.TestNameGenerator/MethodFullNameFragment::GetText(System.Reflection.MethodInfo,System.Object[])
extern "C"  String_t* MethodFullNameFragment_GetText_m1687637353 (MethodFullNameFragment_t3487880812 * __this, MethodInfo_t * ___method0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MethodFullNameFragment_GetText_m1687637353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		MethodInfo_t * L_2 = ___method0;
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_3);
		StringBuilder_Append_m1965104174(L_1, L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = V_0;
		StringBuilder_Append_m2383614642(L_5, ((int32_t)46), /*hidden argument*/NULL);
		StringBuilder_t * L_6 = V_0;
		MethodInfo_t * L_7 = ___method0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		StringBuilder_Append_m1965104174(L_6, L_8, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = ___method0;
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_9);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		StringBuilder_t * L_11 = V_0;
		MethodInfo_t * L_12 = ___method0;
		NameFragment_AppendGenericTypeNames_m840342870(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
	}

IL_003d:
	{
		StringBuilder_t * L_13 = V_0;
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator/MethodFullNameFragment::.ctor()
extern "C"  void MethodFullNameFragment__ctor_m3772344756 (MethodFullNameFragment_t3487880812 * __this, const RuntimeMethod* method)
{
	{
		NameFragment__ctor_m1931039058(__this, /*hidden argument*/NULL);
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
// System.String NUnit.Framework.Internal.TestNameGenerator/MethodNameFragment::GetText(System.Reflection.MethodInfo,System.Object[])
extern "C"  String_t* MethodNameFragment_GetText_m1615057976 (MethodNameFragment_t1693502444 * __this, MethodInfo_t * ___method0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MethodNameFragment_GetText_m1615057976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		MethodInfo_t * L_2 = ___method0;
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		StringBuilder_Append_m1965104174(L_1, L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_4 = ___method0;
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_4);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t * L_6 = V_0;
		MethodInfo_t * L_7 = ___method0;
		NameFragment_AppendGenericTypeNames_m840342870(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0022:
	{
		StringBuilder_t * L_8 = V_0;
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator/MethodNameFragment::.ctor()
extern "C"  void MethodNameFragment__ctor_m2110243467 (MethodNameFragment_t1693502444 * __this, const RuntimeMethod* method)
{
	{
		NameFragment__ctor_m1931039058(__this, /*hidden argument*/NULL);
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
// System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::GetText(NUnit.Framework.Internal.TestMethod,System.Object[])
extern "C"  String_t* NameFragment_GetText_m768595460 (NameFragment_t2993948086 * __this, TestMethod_t1085459043 * ___testMethod0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameFragment_GetText_m768595460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TestMethod_t1085459043 * L_0 = ___testMethod0;
		RuntimeObject* L_1 = Test_get_Method_m3979244495(L_0, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = InterfaceFuncInvoker0< MethodInfo_t * >::Invoke(1 /* System.Reflection.MethodInfo NUnit.Framework.Interfaces.IMethodInfo::get_MethodInfo() */, IMethodInfo_t4206102174_il2cpp_TypeInfo_var, L_1);
		ObjectU5BU5D_t2843939325* L_3 = ___args1;
		String_t* L_4 = VirtFuncInvoker2< String_t*, MethodInfo_t *, ObjectU5BU5D_t2843939325* >::Invoke(5 /* System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::GetText(System.Reflection.MethodInfo,System.Object[]) */, __this, L_2, L_3);
		return L_4;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator/NameFragment::AppendGenericTypeNames(System.Text.StringBuilder,System.Reflection.MethodInfo)
extern "C"  void NameFragment_AppendGenericTypeNames_m840342870 (RuntimeObject * __this /* static, unused */, StringBuilder_t * ___sb0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameFragment_AppendGenericTypeNames_m840342870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	{
		StringBuilder_t * L_0 = ___sb0;
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614548, /*hidden argument*/NULL);
		V_0 = 0;
		MethodInfo_t * L_1 = ___method1;
		TypeU5BU5D_t3940880105* L_2 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(27 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0042;
	}

IL_0019:
	{
		TypeU5BU5D_t3940880105* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Type_t * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t * L_9 = ___sb0;
		StringBuilder_Append_m1965104174(L_9, _stringLiteral3452614532, /*hidden argument*/NULL);
	}

IL_0031:
	{
		StringBuilder_t * L_10 = ___sb0;
		Type_t * L_11 = V_3;
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		StringBuilder_Append_m1965104174(L_10, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_14 = V_2;
		TypeU5BU5D_t3940880105* L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t * L_16 = ___sb0;
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3452614546, /*hidden argument*/NULL);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::GetDisplayString(System.Object,System.Int32)
extern "C"  String_t* NameFragment_GetDisplayString_m2494897668 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, int32_t ___stringMax1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameFragment_GetDisplayString_m2494897668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	float V_2 = 0.0f;
	Decimal_t2948259380  V_3;
	memset(&V_3, 0, sizeof(V_3));
	uint64_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	StringBuilder_t * V_8 = NULL;
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	Il2CppChar V_11 = 0x0;
	String_t* G_B3_0 = NULL;
	int32_t G_B53_0 = 0;
	int32_t G_B56_0 = 0;
	{
		RuntimeObject * L_0 = ___arg0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject * L_1 = ___arg0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_2 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m1854379141(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteral1202628576;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		RuntimeObject * L_4 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_00b7;
		}
	}
	{
		RuntimeObject * L_5 = ___arg0;
		V_1 = ((*(double*)((double*)UnBox(L_5, Double_t594665363_il2cpp_TypeInfo_var))));
		double L_6 = V_1;
		bool L_7 = Double_IsNaN_m649024406(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		V_0 = _stringLiteral2116099649;
		goto IL_0497;
	}

IL_003b:
	{
		double L_8 = V_1;
		bool L_9 = Double_IsPositiveInfinity_m1245619811(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		V_0 = _stringLiteral1445770589;
		goto IL_0497;
	}

IL_004e:
	{
		double L_10 = V_1;
		bool L_11 = Double_IsNegativeInfinity_m538614603(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		V_0 = _stringLiteral2711467558;
		goto IL_0497;
	}

IL_0061:
	{
		double L_12 = V_1;
		if ((!(((double)L_12) == ((double)(1.7976931348623157E+308)))))
		{
			goto IL_0078;
		}
	}
	{
		V_0 = _stringLiteral921927405;
		goto IL_0497;
	}

IL_0078:
	{
		double L_13 = V_1;
		if ((!(((double)L_13) == ((double)(-1.7976931348623157E+308)))))
		{
			goto IL_008f;
		}
	}
	{
		V_0 = _stringLiteral910786565;
		goto IL_0497;
	}

IL_008f:
	{
		String_t* L_14 = V_0;
		int32_t L_15 = String_IndexOf_m363431711(L_14, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3937257545(NULL /*static, unused*/, L_16, _stringLiteral3451565954, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_00a6:
	{
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m3937257545(NULL /*static, unused*/, L_18, _stringLiteral3452614588, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_0497;
	}

IL_00b7:
	{
		RuntimeObject * L_20 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_0150;
		}
	}
	{
		RuntimeObject * L_21 = ___arg0;
		V_2 = ((*(float*)((float*)UnBox(L_21, Single_t1397266774_il2cpp_TypeInfo_var))));
		float L_22 = V_2;
		bool L_23 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = _stringLiteral2303604494;
		goto IL_0497;
	}

IL_00dc:
	{
		float L_24 = V_2;
		bool L_25 = Single_IsPositiveInfinity_m1411272350(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ef;
		}
	}
	{
		V_0 = _stringLiteral2785839780;
		goto IL_0497;
	}

IL_00ef:
	{
		float L_26 = V_2;
		bool L_27 = Single_IsNegativeInfinity_m1556741963(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0102;
		}
	}
	{
		V_0 = _stringLiteral1231758999;
		goto IL_0497;
	}

IL_0102:
	{
		float L_28 = V_2;
		if ((!(((float)L_28) == ((float)(std::numeric_limits<float>::max())))))
		{
			goto IL_0115;
		}
	}
	{
		V_0 = _stringLiteral4099496811;
		goto IL_0497;
	}

IL_0115:
	{
		float L_29 = V_2;
		if ((!(((float)L_29) == ((float)(-std::numeric_limits<float>::max())))))
		{
			goto IL_0128;
		}
	}
	{
		V_0 = _stringLiteral3934346913;
		goto IL_0497;
	}

IL_0128:
	{
		String_t* L_30 = V_0;
		int32_t L_31 = String_IndexOf_m363431711(L_30, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)(-1)))))
		{
			goto IL_013f;
		}
	}
	{
		String_t* L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m3937257545(NULL /*static, unused*/, L_32, _stringLiteral3451565954, /*hidden argument*/NULL);
		V_0 = L_33;
	}

IL_013f:
	{
		String_t* L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m3937257545(NULL /*static, unused*/, L_34, _stringLiteral3452614586, /*hidden argument*/NULL);
		V_0 = L_35;
		goto IL_0497;
	}

IL_0150:
	{
		RuntimeObject * L_36 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_36, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_01aa;
		}
	}
	{
		RuntimeObject * L_37 = ___arg0;
		V_3 = ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_37, Decimal_t2948259380_il2cpp_TypeInfo_var))));
		Decimal_t2948259380  L_38 = V_3;
		Decimal_t2948259380  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Decimal__ctor_m3650533794((&L_39), (-1), (-1), (-1), (bool)1, (uint8_t)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		bool L_40 = Decimal_op_Equality_m77262825(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_017c;
		}
	}
	{
		V_0 = _stringLiteral3429026798;
		goto IL_0497;
	}

IL_017c:
	{
		Decimal_t2948259380  L_41 = V_3;
		Decimal_t2948259380  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Decimal__ctor_m3650533794((&L_42), (-1), (-1), (-1), (bool)0, (uint8_t)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		bool L_43 = Decimal_op_Equality_m77262825(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0199;
		}
	}
	{
		V_0 = _stringLiteral1468417772;
		goto IL_0497;
	}

IL_0199:
	{
		String_t* L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_45 = String_Concat_m3937257545(NULL /*static, unused*/, L_44, _stringLiteral3452614595, /*hidden argument*/NULL);
		V_0 = L_45;
		goto IL_0497;
	}

IL_01aa:
	{
		RuntimeObject * L_46 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_46, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_0205;
		}
	}
	{
		RuntimeObject * L_47 = ___arg0;
		int64_t L_48 = ((int64_t)std::numeric_limits<int64_t>::min());
		RuntimeObject * L_49 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_48);
		bool L_50 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_47, L_49);
		if (!L_50)
		{
			goto IL_01d3;
		}
	}
	{
		V_0 = _stringLiteral125944290;
		goto IL_0497;
	}

IL_01d3:
	{
		RuntimeObject * L_51 = ___arg0;
		int64_t L_52 = ((int64_t)std::numeric_limits<int64_t>::max());
		RuntimeObject * L_53 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_52);
		bool L_54 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_51, L_53);
		if (!L_54)
		{
			goto IL_01f4;
		}
	}
	{
		V_0 = _stringLiteral3828796346;
		goto IL_0497;
	}

IL_01f4:
	{
		String_t* L_55 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_56 = String_Concat_m3937257545(NULL /*static, unused*/, L_55, _stringLiteral3452614628, /*hidden argument*/NULL);
		V_0 = L_56;
		goto IL_0497;
	}

IL_0205:
	{
		RuntimeObject * L_57 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_57, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0246;
		}
	}
	{
		RuntimeObject * L_58 = ___arg0;
		V_4 = ((*(uint64_t*)((uint64_t*)UnBox(L_58, UInt64_t4134040092_il2cpp_TypeInfo_var))));
		uint64_t L_59 = V_4;
		if (L_59)
		{
			goto IL_0224;
		}
	}
	{
		V_0 = _stringLiteral3919982701;
		goto IL_0497;
	}

IL_0224:
	{
		uint64_t L_60 = V_4;
		if ((!(((uint64_t)L_60) == ((uint64_t)(((int64_t)((int64_t)(-1))))))))
		{
			goto IL_0235;
		}
	}
	{
		V_0 = _stringLiteral1932406591;
		goto IL_0497;
	}

IL_0235:
	{
		String_t* L_61 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = String_Concat_m3937257545(NULL /*static, unused*/, L_61, _stringLiteral3457071083, /*hidden argument*/NULL);
		V_0 = L_62;
		goto IL_0497;
	}

IL_0246:
	{
		RuntimeObject * L_63 = ___arg0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_63, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0301;
		}
	}
	{
		RuntimeObject * L_64 = ___arg0;
		V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_64, String_t_il2cpp_TypeInfo_var));
		int32_t L_65 = ___stringMax1;
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_0269;
		}
	}
	{
		String_t* L_66 = V_5;
		int32_t L_67 = String_get_Length_m3847582255(L_66, /*hidden argument*/NULL);
		int32_t L_68 = ___stringMax1;
		G_B53_0 = ((((int32_t)L_67) > ((int32_t)L_68))? 1 : 0);
		goto IL_026a;
	}

IL_0269:
	{
		G_B53_0 = 0;
	}

IL_026a:
	{
		V_6 = (bool)G_B53_0;
		bool L_69 = V_6;
		if (L_69)
		{
			goto IL_0273;
		}
	}
	{
		G_B56_0 = 0;
		goto IL_027f;
	}

IL_0273:
	{
		int32_t L_70 = ___stringMax1;
		int32_t L_71 = String_get_Length_m3847582255(_stringLiteral2623387542, /*hidden argument*/NULL);
		G_B56_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)L_71));
	}

IL_027f:
	{
		V_7 = G_B56_0;
		StringBuilder_t * L_72 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_72, /*hidden argument*/NULL);
		V_8 = L_72;
		StringBuilder_t * L_73 = V_8;
		StringBuilder_Append_m1965104174(L_73, _stringLiteral3452614526, /*hidden argument*/NULL);
		String_t* L_74 = V_5;
		V_9 = L_74;
		V_10 = 0;
		goto IL_02dc;
	}

IL_029e:
	{
		String_t* L_75 = V_9;
		int32_t L_76 = V_10;
		Il2CppChar L_77 = String_get_Chars_m2986988803(L_75, L_76, /*hidden argument*/NULL);
		V_11 = L_77;
		StringBuilder_t * L_78 = V_8;
		Il2CppChar L_79 = V_11;
		String_t* L_80 = NameFragment_EscapeCharInString_m1659453699(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_78, L_80, /*hidden argument*/NULL);
		bool L_81 = V_6;
		if (!L_81)
		{
			goto IL_02d6;
		}
	}
	{
		StringBuilder_t * L_82 = V_8;
		int32_t L_83 = StringBuilder_get_Length_m3238060835(L_82, /*hidden argument*/NULL);
		int32_t L_84 = V_7;
		if ((((int32_t)L_83) <= ((int32_t)L_84)))
		{
			goto IL_02d6;
		}
	}
	{
		StringBuilder_t * L_85 = V_8;
		StringBuilder_Append_m1965104174(L_85, _stringLiteral2623387542, /*hidden argument*/NULL);
		goto IL_02e7;
	}

IL_02d6:
	{
		int32_t L_86 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_02dc:
	{
		int32_t L_87 = V_10;
		String_t* L_88 = V_9;
		int32_t L_89 = String_get_Length_m3847582255(L_88, /*hidden argument*/NULL);
		if ((((int32_t)L_87) < ((int32_t)L_89)))
		{
			goto IL_029e;
		}
	}

IL_02e7:
	{
		StringBuilder_t * L_90 = V_8;
		StringBuilder_Append_m1965104174(L_90, _stringLiteral3452614526, /*hidden argument*/NULL);
		StringBuilder_t * L_91 = V_8;
		String_t* L_92 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_91);
		V_0 = L_92;
		goto IL_0497;
	}

IL_0301:
	{
		RuntimeObject * L_93 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_93, Char_t3634460470_il2cpp_TypeInfo_var)))
		{
			goto IL_0329;
		}
	}
	{
		RuntimeObject * L_94 = ___arg0;
		String_t* L_95 = NameFragment_EscapeSingleChar_m660733469(NULL /*static, unused*/, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_94, Char_t3634460470_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_96 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3452614521, L_95, _stringLiteral3452614521, /*hidden argument*/NULL);
		V_0 = L_96;
		goto IL_0497;
	}

IL_0329:
	{
		RuntimeObject * L_97 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_97, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_036e;
		}
	}
	{
		RuntimeObject * L_98 = ___arg0;
		int32_t L_99 = ((int32_t)2147483647LL);
		RuntimeObject * L_100 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_99);
		bool L_101 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_98, L_100);
		if (!L_101)
		{
			goto IL_034e;
		}
	}
	{
		V_0 = _stringLiteral2172315071;
		goto IL_0497;
	}

IL_034e:
	{
		RuntimeObject * L_102 = ___arg0;
		int32_t L_103 = ((int32_t)-2147483648LL);
		RuntimeObject * L_104 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_103);
		bool L_105 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_102, L_104);
		if (!L_105)
		{
			goto IL_0497;
		}
	}
	{
		V_0 = _stringLiteral3313058613;
		goto IL_0497;
	}

IL_036e:
	{
		RuntimeObject * L_106 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_106, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_03ab;
		}
	}
	{
		RuntimeObject * L_107 = ___arg0;
		uint32_t L_108 = ((uint32_t)(-1));
		RuntimeObject * L_109 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_108);
		bool L_110 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_107, L_109);
		if (!L_110)
		{
			goto IL_038f;
		}
	}
	{
		V_0 = _stringLiteral3636895639;
		goto IL_0497;
	}

IL_038f:
	{
		RuntimeObject * L_111 = ___arg0;
		uint32_t L_112 = ((uint32_t)0);
		RuntimeObject * L_113 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_112);
		bool L_114 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_111, L_113);
		if (!L_114)
		{
			goto IL_0497;
		}
	}
	{
		V_0 = _stringLiteral2497287615;
		goto IL_0497;
	}

IL_03ab:
	{
		RuntimeObject * L_115 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_115, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_03f0;
		}
	}
	{
		RuntimeObject * L_116 = ___arg0;
		int16_t L_117 = ((int16_t)((int32_t)32767));
		RuntimeObject * L_118 = Box(Int16_t2552820387_il2cpp_TypeInfo_var, &L_117);
		bool L_119 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_116, L_118);
		if (!L_119)
		{
			goto IL_03d0;
		}
	}
	{
		V_0 = _stringLiteral657123221;
		goto IL_0497;
	}

IL_03d0:
	{
		RuntimeObject * L_120 = ___arg0;
		int16_t L_121 = ((int16_t)((int32_t)-32768));
		RuntimeObject * L_122 = Box(Int16_t2552820387_il2cpp_TypeInfo_var, &L_121);
		bool L_123 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_120, L_122);
		if (!L_123)
		{
			goto IL_0497;
		}
	}
	{
		V_0 = _stringLiteral491972199;
		goto IL_0497;
	}

IL_03f0:
	{
		RuntimeObject * L_124 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_124, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_042b;
		}
	}
	{
		RuntimeObject * L_125 = ___arg0;
		uint16_t L_126 = ((uint16_t)((int32_t)65535));
		RuntimeObject * L_127 = Box(UInt16_t2177724958_il2cpp_TypeInfo_var, &L_126);
		bool L_128 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_125, L_127);
		if (!L_128)
		{
			goto IL_0415;
		}
	}
	{
		V_0 = _stringLiteral2221169466;
		goto IL_0497;
	}

IL_0415:
	{
		RuntimeObject * L_129 = ___arg0;
		uint16_t L_130 = ((uint16_t)0);
		RuntimeObject * L_131 = Box(UInt16_t2177724958_il2cpp_TypeInfo_var, &L_130);
		bool L_132 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_129, L_131);
		if (!L_132)
		{
			goto IL_0497;
		}
	}
	{
		V_0 = _stringLiteral2176473634;
		goto IL_0497;
	}

IL_042b:
	{
		RuntimeObject * L_133 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_133, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_0463;
		}
	}
	{
		RuntimeObject * L_134 = ___arg0;
		uint8_t L_135 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_136 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_135);
		bool L_137 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_134, L_136);
		if (!L_137)
		{
			goto IL_044d;
		}
	}
	{
		V_0 = _stringLiteral2206905067;
		goto IL_0497;
	}

IL_044d:
	{
		RuntimeObject * L_138 = ___arg0;
		uint8_t L_139 = ((uint8_t)0);
		RuntimeObject * L_140 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_139);
		bool L_141 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_138, L_140);
		if (!L_141)
		{
			goto IL_0497;
		}
	}
	{
		V_0 = _stringLiteral794836083;
		goto IL_0497;
	}

IL_0463:
	{
		RuntimeObject * L_142 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_142, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_0497;
		}
	}
	{
		RuntimeObject * L_143 = ___arg0;
		int8_t L_144 = ((int8_t)((int32_t)127));
		RuntimeObject * L_145 = Box(SByte_t1669577662_il2cpp_TypeInfo_var, &L_144);
		bool L_146 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_143, L_145);
		if (!L_146)
		{
			goto IL_0482;
		}
	}
	{
		V_0 = _stringLiteral4022603228;
		goto IL_0497;
	}

IL_0482:
	{
		RuntimeObject * L_147 = ___arg0;
		int8_t L_148 = ((int8_t)((int32_t)-128));
		RuntimeObject * L_149 = Box(SByte_t1669577662_il2cpp_TypeInfo_var, &L_148);
		bool L_150 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_147, L_149);
		if (!L_150)
		{
			goto IL_0497;
		}
	}
	{
		V_0 = _stringLiteral3857453066;
	}

IL_0497:
	{
		String_t* L_151 = V_0;
		return L_151;
	}
}
// System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::EscapeSingleChar(System.Char)
extern "C"  String_t* NameFragment_EscapeSingleChar_m660733469 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameFragment_EscapeSingleChar_m660733469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_000b;
		}
	}
	{
		return _stringLiteral3450058740;
	}

IL_000b:
	{
		Il2CppChar L_1 = ___c0;
		String_t* L_2 = NameFragment_EscapeControlChar_m912372380(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::EscapeCharInString(System.Char)
extern "C"  String_t* NameFragment_EscapeCharInString_m1659453699 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameFragment_EscapeCharInString_m1659453699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_000b;
		}
	}
	{
		return _stringLiteral3450386420;
	}

IL_000b:
	{
		Il2CppChar L_1 = ___c0;
		String_t* L_2 = NameFragment_EscapeControlChar_m912372380(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String NUnit.Framework.Internal.TestNameGenerator/NameFragment::EscapeControlChar(System.Char)
extern "C"  String_t* NameFragment_EscapeControlChar_m912372380 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameFragment_EscapeControlChar_m912372380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_004a;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_00ab;
			}
			case 2:
			{
				goto IL_00ab;
			}
			case 3:
			{
				goto IL_00ab;
			}
			case 4:
			{
				goto IL_00ab;
			}
			case 5:
			{
				goto IL_00ab;
			}
			case 6:
			{
				goto IL_00ab;
			}
			case 7:
			{
				goto IL_0070;
			}
			case 8:
			{
				goto IL_0076;
			}
			case 9:
			{
				goto IL_008e;
			}
			case 10:
			{
				goto IL_0082;
			}
			case 11:
			{
				goto IL_0094;
			}
			case 12:
			{
				goto IL_007c;
			}
			case 13:
			{
				goto IL_0088;
			}
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)92))))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_00ab;
	}

IL_004a:
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)133))))
		{
			goto IL_009a;
		}
	}
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)8232))))
		{
			goto IL_009a;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)8233))))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00ab;
	}

IL_0064:
	{
		return _stringLiteral3458119668;
	}

IL_006a:
	{
		return _stringLiteral3451566068;
	}

IL_0070:
	{
		return _stringLiteral3454646260;
	}

IL_0076:
	{
		return _stringLiteral3454580724;
	}

IL_007c:
	{
		return _stringLiteral3454318580;
	}

IL_0082:
	{
		return _stringLiteral3454842868;
	}

IL_0088:
	{
		return _stringLiteral3455629300;
	}

IL_008e:
	{
		return _stringLiteral3455498228;
	}

IL_0094:
	{
		return _stringLiteral3455367156;
	}

IL_009a:
	{
		Il2CppChar L_6 = ___c0;
		int32_t L_7 = ((int32_t)L_6);
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral289182889, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_00ab:
	{
		String_t* L_10 = Char_ToString_m3588025615((&___c0), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator/NameFragment::.ctor()
extern "C"  void NameFragment__ctor_m1931039058 (NameFragment_t2993948086 * __this, const RuntimeMethod* method)
{
	{
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
// System.String NUnit.Framework.Internal.TestNameGenerator/NamespaceFragment::GetText(System.Reflection.MethodInfo,System.Object[])
extern "C"  String_t* NamespaceFragment_GetText_m2803069337 (NamespaceFragment_t1263772683 * __this, MethodInfo_t * ___method0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = ___method0;
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_1);
		return L_2;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator/NamespaceFragment::.ctor()
extern "C"  void NamespaceFragment__ctor_m3934927644 (NamespaceFragment_t1263772683 * __this, const RuntimeMethod* method)
{
	{
		NameFragment__ctor_m1931039058(__this, /*hidden argument*/NULL);
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
// System.String NUnit.Framework.Internal.TestNameGenerator/TestIDFragment::GetText(System.Reflection.MethodInfo,System.Object[])
extern "C"  String_t* TestIDFragment_GetText_m3892388843 (TestIDFragment_t123621352 * __this, MethodInfo_t * ___method0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestIDFragment_GetText_m3892388843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral631689950;
	}
}
// System.String NUnit.Framework.Internal.TestNameGenerator/TestIDFragment::GetText(NUnit.Framework.Internal.TestMethod,System.Object[])
extern "C"  String_t* TestIDFragment_GetText_m1584749097 (TestIDFragment_t123621352 * __this, TestMethod_t1085459043 * ___testMethod0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	{
		TestMethod_t1085459043 * L_0 = ___testMethod0;
		String_t* L_1 = Test_get_Id_m3567523840(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void NUnit.Framework.Internal.TestNameGenerator/TestIDFragment::.ctor()
extern "C"  void TestIDFragment__ctor_m1810242733 (TestIDFragment_t123621352 * __this, const RuntimeMethod* method)
{
	{
		NameFragment__ctor_m1931039058(__this, /*hidden argument*/NULL);
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
// System.Void NUnit.Framework.Internal.TestParameters::.ctor()
extern "C"  void TestParameters__ctor_m361209497 (TestParameters_t1855520773 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestParameters__ctor_m361209497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TestParameters_set_RunState_m4072614124(__this, 1, /*hidden argument*/NULL);
		PropertyBag_t2593821153 * L_0 = (PropertyBag_t2593821153 *)il2cpp_codegen_object_new(PropertyBag_t2593821153_il2cpp_TypeInfo_var);
		PropertyBag__ctor_m3192436542(L_0, /*hidden argument*/NULL);
		TestParameters_set_Properties_m1859488682(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestParameters::.ctor(System.Object[])
extern "C"  void TestParameters__ctor_m4202207260 (TestParameters_t1855520773 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestParameters__ctor_m4202207260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TestParameters_set_RunState_m4072614124(__this, 1, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		TestParameters_InitializeAguments_m177601263(__this, L_0, /*hidden argument*/NULL);
		PropertyBag_t2593821153 * L_1 = (PropertyBag_t2593821153 *)il2cpp_codegen_object_new(PropertyBag_t2593821153_il2cpp_TypeInfo_var);
		PropertyBag__ctor_m3192436542(L_1, /*hidden argument*/NULL);
		TestParameters_set_Properties_m1859488682(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestParameters::InitializeAguments(System.Object[])
extern "C"  void TestParameters_InitializeAguments_m177601263 (TestParameters_t1855520773 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestParameters_InitializeAguments_m177601263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___args0;
		TestParameters_set_OriginalArguments_m2285983737(__this, L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ___args0;
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		TestParameters_set_Arguments_m422443602(__this, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)L_2)), /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_3 = ___args0;
		ObjectU5BU5D_t2843939325* L_4 = TestParameters_get_Arguments_m553610255(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_3, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// NUnit.Framework.Interfaces.RunState NUnit.Framework.Internal.TestParameters::get_RunState()
extern "C"  int32_t TestParameters_get_RunState_m2944785766 (TestParameters_t1855520773 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CRunStateU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestParameters::set_RunState(NUnit.Framework.Interfaces.RunState)
extern "C"  void TestParameters_set_RunState_m4072614124 (TestParameters_t1855520773 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CRunStateU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Object[] NUnit.Framework.Internal.TestParameters::get_Arguments()
extern "C"  ObjectU5BU5D_t2843939325* TestParameters_get_Arguments_m553610255 (TestParameters_t1855520773 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = __this->get_U3CArgumentsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestParameters::set_Arguments(System.Object[])
extern "C"  void TestParameters_set_Arguments_m422443602 (TestParameters_t1855520773 * __this, ObjectU5BU5D_t2843939325* ___value0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = ___value0;
		__this->set_U3CArgumentsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestParameters::get_TestName()
extern "C"  String_t* TestParameters_get_TestName_m3218091680 (TestParameters_t1855520773 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTestNameU3Ek__BackingField_2();
		return L_0;
	}
}
// NUnit.Framework.Interfaces.IPropertyBag NUnit.Framework.Internal.TestParameters::get_Properties()
extern "C"  RuntimeObject* TestParameters_get_Properties_m4116936281 (TestParameters_t1855520773 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CPropertiesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestParameters::set_Properties(NUnit.Framework.Interfaces.IPropertyBag)
extern "C"  void TestParameters_set_Properties_m1859488682 (TestParameters_t1855520773 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestParameters::ApplyToTest(NUnit.Framework.Internal.Test)
extern "C"  void TestParameters_ApplyToTest_m4054127079 (TestParameters_t1855520773 * __this, Test_t3432848304 * ___test0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestParameters_ApplyToTest_m4054127079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = TestParameters_get_RunState_m2944785766(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		Test_t3432848304 * L_1 = ___test0;
		int32_t L_2 = TestParameters_get_RunState_m2944785766(__this, /*hidden argument*/NULL);
		Test_set_RunState_m3305347189(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		RuntimeObject* L_3 = TestParameters_get_Properties_m4116936281(__this, /*hidden argument*/NULL);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.ICollection`1<System.String> NUnit.Framework.Interfaces.IPropertyBag::get_Keys() */, IPropertyBag_t3982299364_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t827303578_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0075;
		}

IL_0028:
		{
			RuntimeObject* L_6 = V_0;
			String_t* L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t2280021157_il2cpp_TypeInfo_var, L_6);
			V_1 = L_7;
			RuntimeObject* L_8 = TestParameters_get_Properties_m4116936281(__this, /*hidden argument*/NULL);
			String_t* L_9 = V_1;
			RuntimeObject* L_10 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(4 /* System.Collections.IList NUnit.Framework.Interfaces.IPropertyBag::get_Item(System.String) */, IPropertyBag_t3982299364_il2cpp_TypeInfo_var, L_8, L_9);
			RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
		}

IL_0041:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0057;
			}

IL_0043:
			{
				RuntimeObject* L_12 = V_2;
				RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
				V_3 = L_13;
				Test_t3432848304 * L_14 = ___test0;
				RuntimeObject* L_15 = Test_get_Properties_m120802510(L_14, /*hidden argument*/NULL);
				String_t* L_16 = V_1;
				RuntimeObject * L_17 = V_3;
				InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(0 /* System.Void NUnit.Framework.Interfaces.IPropertyBag::Add(System.String,System.Object) */, IPropertyBag_t3982299364_il2cpp_TypeInfo_var, L_15, L_16, L_17);
			}

IL_0057:
			{
				RuntimeObject* L_18 = V_2;
				bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0043;
				}
			}

IL_005f:
			{
				IL2CPP_LEAVE(0x75, FINALLY_0061);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0061;
		}

FINALLY_0061:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_20 = V_2;
				V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				RuntimeObject* L_21 = V_4;
				if (!L_21)
				{
					goto IL_0074;
				}
			}

IL_006d:
			{
				RuntimeObject* L_22 = V_4;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_22);
			}

IL_0074:
			{
				IL2CPP_END_FINALLY(97)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(97)
		{
			IL2CPP_JUMP_TBL(0x75, IL_0075)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0075:
		{
			RuntimeObject* L_23 = V_0;
			bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0028;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007f;
	}

FINALLY_007f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_0;
			if (!L_25)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			RuntimeObject* L_26 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_26);
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(127)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(127)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
		return;
	}
}
// System.Object[] NUnit.Framework.Internal.TestParameters::get_OriginalArguments()
extern "C"  ObjectU5BU5D_t2843939325* TestParameters_get_OriginalArguments_m3389408073 (TestParameters_t1855520773 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = __this->get_U3COriginalArgumentsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestParameters::set_OriginalArguments(System.Object[])
extern "C"  void TestParameters_set_OriginalArguments_m2285983737 (TestParameters_t1855520773 * __this, ObjectU5BU5D_t2843939325* ___value0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = ___value0;
		__this->set_U3COriginalArgumentsU3Ek__BackingField_4(L_0);
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
// System.Void NUnit.Framework.Internal.TestResult::.ctor(NUnit.Framework.Interfaces.ITest)
extern "C"  void TestResult__ctor_m977786872 (TestResult_t921768966 * __this, RuntimeObject* ___test0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult__ctor_m977786872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set__output_3(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___test0;
		TestResult_set_Test_m2020088078(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_2 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Inconclusive_0();
		TestResult_set_ResultState_m404498624(__this, L_2, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = __this->get__output_3();
		StringWriter_t802263757 * L_4 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1259274362(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t3478189236_il2cpp_TypeInfo_var);
		TextWriter_t3478189236 * L_5 = TextWriter_Synchronized_m3089377210(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		TestResult_set_OutWriter_m2718975664(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// NUnit.Framework.Interfaces.ITest NUnit.Framework.Internal.TestResult::get_Test()
extern "C"  RuntimeObject* TestResult_get_Test_m906044256 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CTestU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::set_Test(NUnit.Framework.Interfaces.ITest)
extern "C"  void TestResult_set_Test_m2020088078 (TestResult_t921768966 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTestU3Ek__BackingField_9(L_0);
		return;
	}
}
// NUnit.Framework.Interfaces.ResultState NUnit.Framework.Internal.TestResult::get_ResultState()
extern "C"  ResultState_t492092786 * TestResult_get_ResultState_m1725305102 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		ResultState_t492092786 * L_0 = __this->get__resultState_6();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::set_ResultState(NUnit.Framework.Interfaces.ResultState)
extern "C"  void TestResult_set_ResultState_m404498624 (TestResult_t921768966 * __this, ResultState_t492092786 * ___value0, const RuntimeMethod* method)
{
	{
		ResultState_t492092786 * L_0 = ___value0;
		__this->set__resultState_6(L_0);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestResult::get_Name()
extern "C"  String_t* TestResult_get_Name_m3350279869 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult_get_Name_m3350279869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = TestResult_get_Test_m906044256(__this, /*hidden argument*/NULL);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String NUnit.Framework.Interfaces.ITest::get_Name() */, ITest_t3354224835_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Double NUnit.Framework.Internal.TestResult::get_Duration()
extern "C"  double TestResult_get_Duration_m3105079578 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get__duration_4();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::set_Duration(System.Double)
extern "C"  void TestResult_set_Duration_m1849284743 (TestResult_t921768966 * __this, double ___value0, const RuntimeMethod* method)
{
	TestResult_t921768966 * G_B2_0 = NULL;
	TestResult_t921768966 * G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	TestResult_t921768966 * G_B3_1 = NULL;
	{
		double L_0 = ___value0;
		G_B1_0 = __this;
		if ((((double)L_0) >= ((double)(1.0E-06))))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = (1.0E-06);
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0018:
	{
		double L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		G_B3_1->set__duration_4(G_B3_0);
		return;
	}
}
// System.DateTime NUnit.Framework.Internal.TestResult::get_StartTime()
extern "C"  DateTime_t3738529785  TestResult_get_StartTime_m3351224944 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_U3CStartTimeU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::set_StartTime(System.DateTime)
extern "C"  void TestResult_set_StartTime_m1254141088 (TestResult_t921768966 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CStartTimeU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.DateTime NUnit.Framework.Internal.TestResult::get_EndTime()
extern "C"  DateTime_t3738529785  TestResult_get_EndTime_m3196670796 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_U3CEndTimeU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::set_EndTime(System.DateTime)
extern "C"  void TestResult_set_EndTime_m4258472018 (TestResult_t921768966 * __this, DateTime_t3738529785  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___value0;
		__this->set_U3CEndTimeU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestResult::get_Message()
extern "C"  String_t* TestResult_get_Message_m527488228 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__message_7();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::set_Message(System.String)
extern "C"  void TestResult_set_Message_m689027676 (TestResult_t921768966 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__message_7(L_0);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestResult::get_StackTrace()
extern "C"  String_t* TestResult_get_StackTrace_m893631346 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__stackTrace_8();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::set_StackTrace(System.String)
extern "C"  void TestResult_set_StackTrace_m3431201277 (TestResult_t921768966 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__stackTrace_8(L_0);
		return;
	}
}
// System.Int32 NUnit.Framework.Internal.TestResult::get_AssertCount()
extern "C"  int32_t TestResult_get_AssertCount_m110047121 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_InternalAssertCount_5();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::set_AssertCount(System.Int32)
extern "C"  void TestResult_set_AssertCount_m1544469505 (TestResult_t921768966 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_InternalAssertCount_5(L_0);
		return;
	}
}
// System.IO.TextWriter NUnit.Framework.Internal.TestResult::get_OutWriter()
extern "C"  TextWriter_t3478189236 * TestResult_get_OutWriter_m2611342192 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t3478189236 * L_0 = __this->get_U3COutWriterU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::set_OutWriter(System.IO.TextWriter)
extern "C"  void TestResult_set_OutWriter_m2718975664 (TestResult_t921768966 * __this, TextWriter_t3478189236 * ___value0, const RuntimeMethod* method)
{
	{
		TextWriter_t3478189236 * L_0 = ___value0;
		__this->set_U3COutWriterU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.String NUnit.Framework.Internal.TestResult::get_Output()
extern "C"  String_t* TestResult_get_Output_m3167960993 (TestResult_t921768966 * __this, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = __this->get__output_3();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::ToXml(System.Boolean)
extern "C"  TNode_t3946371078 * TestResult_ToXml_m962161666 (TestResult_t921768966 * __this, bool ___recursive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult_ToXml_m962161666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TNode_t3946371078 * L_0 = (TNode_t3946371078 *)il2cpp_codegen_object_new(TNode_t3946371078_il2cpp_TypeInfo_var);
		TNode__ctor_m626016575(L_0, _stringLiteral424138002, /*hidden argument*/NULL);
		bool L_1 = ___recursive0;
		TNode_t3946371078 * L_2 = VirtFuncInvoker2< TNode_t3946371078 *, TNode_t3946371078 *, bool >::Invoke(30 /* NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::AddToXml(NUnit.Framework.Interfaces.TNode,System.Boolean) */, __this, L_0, L_1);
		return L_2;
	}
}
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::AddToXml(NUnit.Framework.Interfaces.TNode,System.Boolean)
extern "C"  TNode_t3946371078 * TestResult_AddToXml_m2255727574 (TestResult_t921768966 * __this, TNode_t3946371078 * ___parentNode0, bool ___recursive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult_AddToXml_m2255727574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TNode_t3946371078 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	double V_4 = 0.0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = TestResult_get_Test_m906044256(__this, /*hidden argument*/NULL);
		TNode_t3946371078 * L_1 = ___parentNode0;
		TNode_t3946371078 * L_2 = InterfaceFuncInvoker2< TNode_t3946371078 *, TNode_t3946371078 *, bool >::Invoke(1 /* NUnit.Framework.Interfaces.TNode NUnit.Framework.Interfaces.IXmlNodeBuilder::AddToXml(NUnit.Framework.Interfaces.TNode,System.Boolean) */, IXmlNodeBuilder_t2630207394_il2cpp_TypeInfo_var, L_0, L_1, (bool)0);
		V_0 = L_2;
		TNode_t3946371078 * L_3 = V_0;
		ResultState_t492092786 * L_4 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		int32_t L_5 = ResultState_get_Status_m3887425803(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		RuntimeObject * L_6 = Box(TestStatus_t2287483310_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_1 = *(int32_t*)UnBox(L_6);
		TNode_AddAttribute_m357558902(L_3, _stringLiteral405358763, L_7, /*hidden argument*/NULL);
		ResultState_t492092786 * L_8 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		String_t* L_9 = ResultState_get_Label_m1745926125(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_11 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		TNode_t3946371078 * L_12 = V_0;
		ResultState_t492092786 * L_13 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		String_t* L_14 = ResultState_get_Label_m1745926125(L_13, /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_12, _stringLiteral3923320070, L_14, /*hidden argument*/NULL);
	}

IL_005f:
	{
		ResultState_t492092786 * L_15 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		int32_t L_16 = ResultState_get_Site_m1795998105(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		TNode_t3946371078 * L_17 = V_0;
		ResultState_t492092786 * L_18 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		int32_t L_19 = ResultState_get_Site_m1795998105(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		RuntimeObject * L_20 = Box(FailureSite_t1159451337_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		V_2 = *(int32_t*)UnBox(L_20);
		TNode_AddAttribute_m357558902(L_17, _stringLiteral1273103123, L_21, /*hidden argument*/NULL);
	}

IL_0090:
	{
		TNode_t3946371078 * L_22 = V_0;
		DateTime_t3738529785  L_23 = TestResult_get_StartTime_m3351224944(__this, /*hidden argument*/NULL);
		V_3 = L_23;
		String_t* L_24 = DateTime_ToString_m3718521780((&V_3), _stringLiteral3452614603, /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_22, _stringLiteral1429420425, L_24, /*hidden argument*/NULL);
		TNode_t3946371078 * L_25 = V_0;
		DateTime_t3738529785  L_26 = TestResult_get_EndTime_m3196670796(__this, /*hidden argument*/NULL);
		V_3 = L_26;
		String_t* L_27 = DateTime_ToString_m3718521780((&V_3), _stringLiteral3452614603, /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_25, _stringLiteral3850501456, L_27, /*hidden argument*/NULL);
		TNode_t3946371078 * L_28 = V_0;
		double L_29 = TestResult_get_Duration_m3105079578(__this, /*hidden argument*/NULL);
		V_4 = L_29;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_30 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_31 = Double_ToString_m1051753975((&V_4), _stringLiteral3316782094, L_30, /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_28, _stringLiteral1501416449, L_31, /*hidden argument*/NULL);
		RuntimeObject* L_32 = TestResult_get_Test_m906044256(__this, /*hidden argument*/NULL);
		if (!((TestSuite_t407774568 *)IsInstClass((RuntimeObject*)L_32, TestSuite_t407774568_il2cpp_TypeInfo_var)))
		{
			goto IL_0197;
		}
	}
	{
		TNode_t3946371078 * L_33 = V_0;
		int32_t L_34 = VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 NUnit.Framework.Internal.TestResult::get_PassCount() */, __this);
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 NUnit.Framework.Internal.TestResult::get_FailCount() */, __this);
		int32_t L_36 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 NUnit.Framework.Internal.TestResult::get_SkipCount() */, __this);
		int32_t L_37 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 NUnit.Framework.Internal.TestResult::get_InconclusiveCount() */, __this);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35)), (int32_t)L_36)), (int32_t)L_37));
		String_t* L_38 = Int32_ToString_m141394615((&V_5), /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_33, _stringLiteral847691140, L_38, /*hidden argument*/NULL);
		TNode_t3946371078 * L_39 = V_0;
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 NUnit.Framework.Internal.TestResult::get_PassCount() */, __this);
		V_5 = L_40;
		String_t* L_41 = Int32_ToString_m141394615((&V_5), /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_39, _stringLiteral796871020, L_41, /*hidden argument*/NULL);
		TNode_t3946371078 * L_42 = V_0;
		int32_t L_43 = VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 NUnit.Framework.Internal.TestResult::get_FailCount() */, __this);
		V_5 = L_43;
		String_t* L_44 = Int32_ToString_m141394615((&V_5), /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_42, _stringLiteral417268216, L_44, /*hidden argument*/NULL);
		TNode_t3946371078 * L_45 = V_0;
		int32_t L_46 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 NUnit.Framework.Internal.TestResult::get_InconclusiveCount() */, __this);
		V_5 = L_46;
		String_t* L_47 = Int32_ToString_m141394615((&V_5), /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_45, _stringLiteral4246287053, L_47, /*hidden argument*/NULL);
		TNode_t3946371078 * L_48 = V_0;
		int32_t L_49 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 NUnit.Framework.Internal.TestResult::get_SkipCount() */, __this);
		V_5 = L_49;
		String_t* L_50 = Int32_ToString_m141394615((&V_5), /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_48, _stringLiteral3694605210, L_50, /*hidden argument*/NULL);
	}

IL_0197:
	{
		TNode_t3946371078 * L_51 = V_0;
		int32_t L_52 = TestResult_get_AssertCount_m110047121(__this, /*hidden argument*/NULL);
		V_5 = L_52;
		String_t* L_53 = Int32_ToString_m141394615((&V_5), /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_51, _stringLiteral4172261259, L_53, /*hidden argument*/NULL);
		ResultState_t492092786 * L_54 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		int32_t L_55 = ResultState_get_Status_m3887425803(L_54, /*hidden argument*/NULL);
		V_1 = L_55;
		int32_t L_56 = V_1;
		switch (L_56)
		{
			case 0:
			{
				goto IL_01df;
			}
			case 1:
			{
				goto IL_01df;
			}
			case 2:
			{
				goto IL_01df;
			}
			case 3:
			{
				goto IL_01d5;
			}
		}
	}
	{
		goto IL_01ef;
	}

IL_01d5:
	{
		TNode_t3946371078 * L_57 = V_0;
		TestResult_AddFailureElement_m4018444267(__this, L_57, /*hidden argument*/NULL);
		goto IL_01ef;
	}

IL_01df:
	{
		String_t* L_58 = TestResult_get_Message_m527488228(__this, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01ef;
		}
	}
	{
		TNode_t3946371078 * L_59 = V_0;
		TestResult_AddReasonElement_m3318757931(__this, L_59, /*hidden argument*/NULL);
	}

IL_01ef:
	{
		String_t* L_60 = TestResult_get_Output_m3167960993(__this, /*hidden argument*/NULL);
		int32_t L_61 = String_get_Length_m3847582255(L_60, /*hidden argument*/NULL);
		if ((((int32_t)L_61) <= ((int32_t)0)))
		{
			goto IL_0205;
		}
	}
	{
		TNode_t3946371078 * L_62 = V_0;
		TestResult_AddOutputElement_m2399671985(__this, L_62, /*hidden argument*/NULL);
	}

IL_0205:
	{
		bool L_63 = ___recursive1;
		if (!L_63)
		{
			goto IL_024a;
		}
	}
	{
		bool L_64 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean NUnit.Framework.Internal.TestResult::get_HasChildren() */, __this);
		if (!L_64)
		{
			goto IL_024a;
		}
	}
	{
		RuntimeObject* L_65 = VirtFuncInvoker0< RuntimeObject* >::Invoke(29 /* System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> NUnit.Framework.Internal.TestResult::get_Children() */, __this);
		RuntimeObject* L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult>::GetEnumerator() */, IEnumerable_1_t147686136_il2cpp_TypeInfo_var, L_65);
		V_6 = L_66;
	}

IL_021d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0233;
		}

IL_021f:
		{
			RuntimeObject* L_67 = V_6;
			RuntimeObject* L_68 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<NUnit.Framework.Interfaces.ITestResult>::get_Current() */, IEnumerator_1_t1600403715_il2cpp_TypeInfo_var, L_67);
			TNode_t3946371078 * L_69 = V_0;
			bool L_70 = ___recursive1;
			VirtFuncInvoker2< TNode_t3946371078 *, TNode_t3946371078 *, bool >::Invoke(30 /* NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::AddToXml(NUnit.Framework.Interfaces.TNode,System.Boolean) */, ((TestResult_t921768966 *)CastclassClass((RuntimeObject*)L_68, TestResult_t921768966_il2cpp_TypeInfo_var)), L_69, L_70);
		}

IL_0233:
		{
			RuntimeObject* L_71 = V_6;
			bool L_72 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_71);
			if (L_72)
			{
				goto IL_021f;
			}
		}

IL_023c:
		{
			IL2CPP_LEAVE(0x24A, FINALLY_023e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_023e;
	}

FINALLY_023e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_73 = V_6;
			if (!L_73)
			{
				goto IL_0249;
			}
		}

IL_0242:
		{
			RuntimeObject* L_74 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_74);
		}

IL_0249:
		{
			IL2CPP_END_FINALLY(574)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(574)
	{
		IL2CPP_JUMP_TBL(0x24A, IL_024a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_024a:
	{
		TNode_t3946371078 * L_75 = V_0;
		return L_75;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::SetResult(NUnit.Framework.Interfaces.ResultState)
extern "C"  void TestResult_SetResult_m1750044282 (TestResult_t921768966 * __this, ResultState_t492092786 * ___resultState0, const RuntimeMethod* method)
{
	{
		ResultState_t492092786 * L_0 = ___resultState0;
		TestResult_SetResult_m2224179203(__this, L_0, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::SetResult(NUnit.Framework.Interfaces.ResultState,System.String)
extern "C"  void TestResult_SetResult_m2500787488 (TestResult_t921768966 * __this, ResultState_t492092786 * ___resultState0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		ResultState_t492092786 * L_0 = ___resultState0;
		String_t* L_1 = ___message1;
		TestResult_SetResult_m2224179203(__this, L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::SetResult(NUnit.Framework.Interfaces.ResultState,System.String,System.String)
extern "C"  void TestResult_SetResult_m2224179203 (TestResult_t921768966 * __this, ResultState_t492092786 * ___resultState0, String_t* ___message1, String_t* ___stackTrace2, const RuntimeMethod* method)
{
	{
		ResultState_t492092786 * L_0 = ___resultState0;
		TestResult_set_ResultState_m404498624(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		TestResult_set_Message_m689027676(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___stackTrace2;
		TestResult_set_StackTrace_m3431201277(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::RecordException(System.Exception)
extern "C"  void TestResult_RecordException_m3509105111 (TestResult_t921768966 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult_RecordException_m3509105111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___ex0;
		if (!((NUnitException_t503223294 *)IsInstClass((RuntimeObject*)L_0, NUnitException_t503223294_il2cpp_TypeInfo_var)))
		{
			goto IL_0010;
		}
	}
	{
		Exception_t * L_1 = ___ex0;
		Exception_t * L_2 = Exception_get_InnerException_m3836775(L_1, /*hidden argument*/NULL);
		___ex0 = L_2;
	}

IL_0010:
	{
		Exception_t * L_3 = ___ex0;
		if (!((ResultStateException_t446384429 *)IsInstClass((RuntimeObject*)L_3, ResultStateException_t446384429_il2cpp_TypeInfo_var)))
		{
			goto IL_003b;
		}
	}
	{
		Exception_t * L_4 = ___ex0;
		ResultState_t492092786 * L_5 = VirtFuncInvoker0< ResultState_t492092786 * >::Invoke(11 /* NUnit.Framework.Interfaces.ResultState NUnit.Framework.ResultStateException::get_ResultState() */, ((ResultStateException_t446384429 *)CastclassClass((RuntimeObject*)L_4, ResultStateException_t446384429_il2cpp_TypeInfo_var)));
		Exception_t * L_6 = ___ex0;
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_6);
		Exception_t * L_8 = ___ex0;
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(StackFilter_t1579955875_il2cpp_TypeInfo_var);
		String_t* L_10 = StackFilter_Filter_m1970130842(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		TestResult_SetResult_m2224179203(__this, L_5, L_7, L_10, /*hidden argument*/NULL);
		return;
	}

IL_003b:
	{
		Exception_t * L_11 = ___ex0;
		if (!((ThreadAbortException_t4074510458 *)IsInstSealed((RuntimeObject*)L_11, ThreadAbortException_t4074510458_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_12 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Cancelled_7();
		Exception_t * L_13 = ___ex0;
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_13);
		TestResult_SetResult_m2224179203(__this, L_12, _stringLiteral2561944364, L_14, /*hidden argument*/NULL);
		return;
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_15 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Error_6();
		Exception_t * L_16 = ___ex0;
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionHelper_t1212814601_il2cpp_TypeInfo_var);
		String_t* L_17 = ExceptionHelper_BuildMessage_m3217148810(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Exception_t * L_18 = ___ex0;
		String_t* L_19 = ExceptionHelper_BuildStackTrace_m1376283377(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		TestResult_SetResult_m2224179203(__this, L_15, L_17, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::RecordException(System.Exception,NUnit.Framework.Interfaces.FailureSite)
extern "C"  void TestResult_RecordException_m716418466 (TestResult_t921768966 * __this, Exception_t * ___ex0, int32_t ___site1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult_RecordException_m716418466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___ex0;
		if (!((NUnitException_t503223294 *)IsInstClass((RuntimeObject*)L_0, NUnitException_t503223294_il2cpp_TypeInfo_var)))
		{
			goto IL_0010;
		}
	}
	{
		Exception_t * L_1 = ___ex0;
		Exception_t * L_2 = Exception_get_InnerException_m3836775(L_1, /*hidden argument*/NULL);
		___ex0 = L_2;
	}

IL_0010:
	{
		Exception_t * L_3 = ___ex0;
		if (!((ResultStateException_t446384429 *)IsInstClass((RuntimeObject*)L_3, ResultStateException_t446384429_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		Exception_t * L_4 = ___ex0;
		ResultState_t492092786 * L_5 = VirtFuncInvoker0< ResultState_t492092786 * >::Invoke(11 /* NUnit.Framework.Interfaces.ResultState NUnit.Framework.ResultStateException::get_ResultState() */, ((ResultStateException_t446384429 *)CastclassClass((RuntimeObject*)L_4, ResultStateException_t446384429_il2cpp_TypeInfo_var)));
		int32_t L_6 = ___site1;
		ResultState_t492092786 * L_7 = ResultState_WithSite_m3842513512(L_5, L_6, /*hidden argument*/NULL);
		Exception_t * L_8 = ___ex0;
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_8);
		Exception_t * L_10 = ___ex0;
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(StackFilter_t1579955875_il2cpp_TypeInfo_var);
		String_t* L_12 = StackFilter_Filter_m1970130842(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		TestResult_SetResult_m2224179203(__this, L_7, L_9, L_12, /*hidden argument*/NULL);
		return;
	}

IL_0041:
	{
		Exception_t * L_13 = ___ex0;
		if (!((ThreadAbortException_t4074510458 *)IsInstSealed((RuntimeObject*)L_13, ThreadAbortException_t4074510458_il2cpp_TypeInfo_var)))
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_14 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Cancelled_7();
		int32_t L_15 = ___site1;
		ResultState_t492092786 * L_16 = ResultState_WithSite_m3842513512(L_14, L_15, /*hidden argument*/NULL);
		Exception_t * L_17 = ___ex0;
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_17);
		TestResult_SetResult_m2224179203(__this, L_16, _stringLiteral2561944364, L_18, /*hidden argument*/NULL);
		return;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_19 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Error_6();
		int32_t L_20 = ___site1;
		ResultState_t492092786 * L_21 = ResultState_WithSite_m3842513512(L_19, L_20, /*hidden argument*/NULL);
		Exception_t * L_22 = ___ex0;
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionHelper_t1212814601_il2cpp_TypeInfo_var);
		String_t* L_23 = ExceptionHelper_BuildMessage_m3217148810(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		Exception_t * L_24 = ___ex0;
		String_t* L_25 = ExceptionHelper_BuildStackTrace_m1376283377(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		TestResult_SetResult_m2224179203(__this, L_21, L_23, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::RecordTearDownException(System.Exception)
extern "C"  void TestResult_RecordTearDownException_m3040973418 (TestResult_t921768966 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult_RecordTearDownException_m3040973418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResultState_t492092786 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	ResultState_t492092786 * G_B5_0 = NULL;
	{
		Exception_t * L_0 = ___ex0;
		if (!((NUnitException_t503223294 *)IsInstClass((RuntimeObject*)L_0, NUnitException_t503223294_il2cpp_TypeInfo_var)))
		{
			goto IL_0010;
		}
	}
	{
		Exception_t * L_1 = ___ex0;
		Exception_t * L_2 = Exception_get_InnerException_m3836775(L_1, /*hidden argument*/NULL);
		___ex0 = L_2;
	}

IL_0010:
	{
		ResultState_t492092786 * L_3 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_4 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Cancelled_7();
		if ((((RuntimeObject*)(ResultState_t492092786 *)L_3) == ((RuntimeObject*)(ResultState_t492092786 *)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_5 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Error_6();
		G_B5_0 = L_5;
		goto IL_0029;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_6 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Cancelled_7();
		G_B5_0 = L_6;
	}

IL_0029:
	{
		V_0 = G_B5_0;
		RuntimeObject* L_7 = TestResult_get_Test_m906044256(__this, /*hidden argument*/NULL);
		bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean NUnit.Framework.Interfaces.ITest::get_IsSuite() */, ITest_t3354224835_il2cpp_TypeInfo_var, L_7);
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		ResultState_t492092786 * L_9 = V_0;
		ResultState_t492092786 * L_10 = ResultState_WithSite_m3842513512(L_9, 2, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_003f:
	{
		Exception_t * L_11 = ___ex0;
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionHelper_t1212814601_il2cpp_TypeInfo_var);
		String_t* L_12 = ExceptionHelper_BuildMessage_m3217148810(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3067016887, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		String_t* L_14 = TestResult_get_Message_m527488228(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_15 = TestResult_get_Message_m527488228(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Env_t3481029657_il2cpp_TypeInfo_var);
		String_t* L_16 = ((Env_t3481029657_StaticFields*)il2cpp_codegen_static_fields_for(Env_t3481029657_il2cpp_TypeInfo_var))->get_NewLine_0();
		String_t* L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m3755062657(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Env_t3481029657_il2cpp_TypeInfo_var);
		String_t* L_19 = ((Env_t3481029657_StaticFields*)il2cpp_codegen_static_fields_for(Env_t3481029657_il2cpp_TypeInfo_var))->get_NewLine_0();
		Exception_t * L_20 = ___ex0;
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionHelper_t1212814601_il2cpp_TypeInfo_var);
		String_t* L_21 = ExceptionHelper_BuildStackTrace_m1376283377(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3164934875, L_19, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String NUnit.Framework.Internal.TestResult::get_StackTrace() */, __this);
		if (!L_23)
		{
			goto IL_009a;
		}
	}
	{
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String NUnit.Framework.Internal.TestResult::get_StackTrace() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Env_t3481029657_il2cpp_TypeInfo_var);
		String_t* L_25 = ((Env_t3481029657_StaticFields*)il2cpp_codegen_static_fields_for(Env_t3481029657_il2cpp_TypeInfo_var))->get_NewLine_0();
		String_t* L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m3755062657(NULL /*static, unused*/, L_24, L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
	}

IL_009a:
	{
		ResultState_t492092786 * L_28 = V_0;
		String_t* L_29 = V_1;
		String_t* L_30 = V_2;
		TestResult_SetResult_m2224179203(__this, L_28, L_29, L_30, /*hidden argument*/NULL);
		return;
	}
}
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::AddReasonElement(NUnit.Framework.Interfaces.TNode)
extern "C"  TNode_t3946371078 * TestResult_AddReasonElement_m3318757931 (TestResult_t921768966 * __this, TNode_t3946371078 * ___targetNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult_AddReasonElement_m3318757931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TNode_t3946371078 * L_0 = ___targetNode0;
		TNode_t3946371078 * L_1 = TNode_AddElement_m3082294026(L_0, _stringLiteral338012450, /*hidden argument*/NULL);
		String_t* L_2 = TestResult_get_Message_m527488228(__this, /*hidden argument*/NULL);
		TNode_t3946371078 * L_3 = TNode_AddElementWithCDATA_m2939658879(L_1, _stringLiteral3253941996, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::AddFailureElement(NUnit.Framework.Interfaces.TNode)
extern "C"  TNode_t3946371078 * TestResult_AddFailureElement_m4018444267 (TestResult_t921768966 * __this, TNode_t3946371078 * ___targetNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult_AddFailureElement_m4018444267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TNode_t3946371078 * V_0 = NULL;
	{
		TNode_t3946371078 * L_0 = ___targetNode0;
		TNode_t3946371078 * L_1 = TNode_AddElement_m3082294026(L_0, _stringLiteral2570894439, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = TestResult_get_Message_m527488228(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		TNode_t3946371078 * L_3 = V_0;
		String_t* L_4 = TestResult_get_Message_m527488228(__this, /*hidden argument*/NULL);
		TNode_AddElementWithCDATA_m2939658879(L_3, _stringLiteral3253941996, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String NUnit.Framework.Internal.TestResult::get_StackTrace() */, __this);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		TNode_t3946371078 * L_6 = V_0;
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String NUnit.Framework.Internal.TestResult::get_StackTrace() */, __this);
		TNode_AddElementWithCDATA_m2939658879(L_6, _stringLiteral333314910, L_7, /*hidden argument*/NULL);
	}

IL_0040:
	{
		TNode_t3946371078 * L_8 = V_0;
		return L_8;
	}
}
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestResult::AddOutputElement(NUnit.Framework.Interfaces.TNode)
extern "C"  TNode_t3946371078 * TestResult_AddOutputElement_m2399671985 (TestResult_t921768966 * __this, TNode_t3946371078 * ___targetNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult_AddOutputElement_m2399671985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TNode_t3946371078 * L_0 = ___targetNode0;
		String_t* L_1 = TestResult_get_Output_m3167960993(__this, /*hidden argument*/NULL);
		TNode_t3946371078 * L_2 = TNode_AddElementWithCDATA_m2939658879(L_0, _stringLiteral1975106570, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void NUnit.Framework.Internal.TestResult::.cctor()
extern "C"  void TestResult__cctor_m592998132 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestResult__cctor_m592998132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TestResult_t921768966_StaticFields*)il2cpp_codegen_static_fields_for(TestResult_t921768966_il2cpp_TypeInfo_var))->set_CHILD_ERRORS_MESSAGE_0(_stringLiteral2951280245);
		((TestResult_t921768966_StaticFields*)il2cpp_codegen_static_fields_for(TestResult_t921768966_il2cpp_TypeInfo_var))->set_CHILD_IGNORE_MESSAGE_1(_stringLiteral1929230609);
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
// System.Void NUnit.Framework.Internal.TestSuite::.ctor(System.String)
extern "C"  void TestSuite__ctor_m2991959661 (TestSuite_t407774568 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite__ctor_m2991959661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t531332281 * L_0 = (List_1_t531332281 *)il2cpp_codegen_object_new(List_1_t531332281_il2cpp_TypeInfo_var);
		List_1__ctor_m3215046496(L_0, /*hidden argument*/List_1__ctor_m3215046496_RuntimeMethod_var);
		__this->set_tests_16(L_0);
		String_t* L_1 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Test_t3432848304_il2cpp_TypeInfo_var);
		Test__ctor_m4185353647(__this, L_1, /*hidden argument*/NULL);
		TestSuite_set_Arguments_m938786632(__this, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestSuite::.ctor(System.String,System.String)
extern "C"  void TestSuite__ctor_m1188966453 (TestSuite_t407774568 * __this, String_t* ___parentSuiteName0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite__ctor_m1188966453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t531332281 * L_0 = (List_1_t531332281 *)il2cpp_codegen_object_new(List_1_t531332281_il2cpp_TypeInfo_var);
		List_1__ctor_m3215046496(L_0, /*hidden argument*/List_1__ctor_m3215046496_RuntimeMethod_var);
		__this->set_tests_16(L_0);
		String_t* L_1 = ___parentSuiteName0;
		String_t* L_2 = ___name1;
		IL2CPP_RUNTIME_CLASS_INIT(Test_t3432848304_il2cpp_TypeInfo_var);
		Test__ctor_m2791168741(__this, L_1, L_2, /*hidden argument*/NULL);
		TestSuite_set_Arguments_m938786632(__this, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestSuite::.ctor(NUnit.Framework.Interfaces.ITypeInfo)
extern "C"  void TestSuite__ctor_m2589975646 (TestSuite_t407774568 * __this, RuntimeObject* ___fixtureType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite__ctor_m2589975646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t531332281 * L_0 = (List_1_t531332281 *)il2cpp_codegen_object_new(List_1_t531332281_il2cpp_TypeInfo_var);
		List_1__ctor_m3215046496(L_0, /*hidden argument*/List_1__ctor_m3215046496_RuntimeMethod_var);
		__this->set_tests_16(L_0);
		RuntimeObject* L_1 = ___fixtureType0;
		IL2CPP_RUNTIME_CLASS_INIT(Test_t3432848304_il2cpp_TypeInfo_var);
		Test__ctor_m2616690045(__this, L_1, /*hidden argument*/NULL);
		TestSuite_set_Arguments_m938786632(__this, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestSuite::Sort()
extern "C"  void TestSuite_Sort_m501018403 (TestSuite_t407774568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite_Sort_m501018403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	TestSuite_t407774568 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = TestSuite_get_MaintainTestOrder_m3281967860(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		List_1_t531332281 * L_1 = __this->get_tests_16();
		List_1_Sort_m3836414996(L_1, /*hidden argument*/List_1_Sort_m3836414996_RuntimeMethod_var);
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> NUnit.Framework.Internal.Test::get_Tests() */, __this);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITest>::GetEnumerator() */, IEnumerable_1_t2334077724_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0021:
		{
			RuntimeObject* L_4 = V_0;
			RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<NUnit.Framework.Interfaces.ITest>::get_Current() */, IEnumerator_1_t3786795303_il2cpp_TypeInfo_var, L_4);
			V_1 = ((TestSuite_t407774568 *)IsInstClass((RuntimeObject*)((Test_t3432848304 *)CastclassClass((RuntimeObject*)L_5, Test_t3432848304_il2cpp_TypeInfo_var)), TestSuite_t407774568_il2cpp_TypeInfo_var));
			TestSuite_t407774568 * L_6 = V_1;
			if (!L_6)
			{
				goto IL_003b;
			}
		}

IL_0035:
		{
			TestSuite_t407774568 * L_7 = V_1;
			TestSuite_Sort_m501018403(L_7, /*hidden argument*/NULL);
		}

IL_003b:
		{
			RuntimeObject* L_8 = V_0;
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0021;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_004e;
			}
		}

IL_0048:
		{
			RuntimeObject* L_11 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		return;
	}
}
// System.Void NUnit.Framework.Internal.TestSuite::Add(NUnit.Framework.Internal.Test)
extern "C"  void TestSuite_Add_m2934725989 (TestSuite_t407774568 * __this, Test_t3432848304 * ___test0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite_Add_m2934725989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Test_t3432848304 * L_0 = ___test0;
		Test_set_Parent_m1697979243(L_0, __this, /*hidden argument*/NULL);
		List_1_t531332281 * L_1 = __this->get_tests_16();
		Test_t3432848304 * L_2 = ___test0;
		List_1_Add_m3496651552(L_1, L_2, /*hidden argument*/List_1_Add_m3496651552_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> NUnit.Framework.Internal.TestSuite::get_Tests()
extern "C"  RuntimeObject* TestSuite_get_Tests_m870978260 (TestSuite_t407774568 * __this, const RuntimeMethod* method)
{
	{
		List_1_t531332281 * L_0 = __this->get_tests_16();
		return L_0;
	}
}
// System.Int32 NUnit.Framework.Internal.TestSuite::get_TestCaseCount()
extern "C"  int32_t TestSuite_get_TestCaseCount_m3220708717 (TestSuite_t407774568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite_get_TestCaseCount_m3220708717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Test_t3432848304 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> NUnit.Framework.Internal.Test::get_Tests() */, __this);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITest>::GetEnumerator() */, IEnumerable_1_t2334077724_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_0010:
		{
			RuntimeObject* L_2 = V_1;
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<NUnit.Framework.Interfaces.ITest>::get_Current() */, IEnumerator_1_t3786795303_il2cpp_TypeInfo_var, L_2);
			V_2 = ((Test_t3432848304 *)CastclassClass((RuntimeObject*)L_3, Test_t3432848304_il2cpp_TypeInfo_var));
			int32_t L_4 = V_0;
			Test_t3432848304 * L_5 = V_2;
			int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 NUnit.Framework.Internal.Test::get_TestCaseCount() */, L_5);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6));
		}

IL_0025:
		{
			RuntimeObject* L_7 = V_1;
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0010;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			if (!L_9)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			RuntimeObject* L_10 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_0038:
		{
			IL2CPP_END_FINALLY(47)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0039:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Object[] NUnit.Framework.Internal.TestSuite::get_Arguments()
extern "C"  ObjectU5BU5D_t2843939325* TestSuite_get_Arguments_m395365504 (TestSuite_t407774568 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = __this->get_U3CArgumentsU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestSuite::set_Arguments(System.Object[])
extern "C"  void TestSuite_set_Arguments_m938786632 (TestSuite_t407774568 * __this, ObjectU5BU5D_t2843939325* ___value0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = ___value0;
		__this->set_U3CArgumentsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean NUnit.Framework.Internal.TestSuite::get_MaintainTestOrder()
extern "C"  bool TestSuite_get_MaintainTestOrder_m3281967860 (TestSuite_t407774568 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CMaintainTestOrderU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestSuite::set_MaintainTestOrder(System.Boolean)
extern "C"  void TestSuite_set_MaintainTestOrder_m436264600 (TestSuite_t407774568 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CMaintainTestOrderU3Ek__BackingField_18(L_0);
		return;
	}
}
// NUnit.Framework.Internal.TestResult NUnit.Framework.Internal.TestSuite::MakeTestResult()
extern "C"  TestResult_t921768966 * TestSuite_MakeTestResult_m1514935130 (TestSuite_t407774568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite_MakeTestResult_m1514935130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TestSuiteResult_t4148044652 * L_0 = (TestSuiteResult_t4148044652 *)il2cpp_codegen_object_new(TestSuiteResult_t4148044652_il2cpp_TypeInfo_var);
		TestSuiteResult__ctor_m1687939535(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String NUnit.Framework.Internal.TestSuite::get_XmlElementName()
extern "C"  String_t* TestSuite_get_XmlElementName_m3953277652 (TestSuite_t407774568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite_get_XmlElementName_m3953277652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral812838592;
	}
}
// NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.TestSuite::AddToXml(NUnit.Framework.Interfaces.TNode,System.Boolean)
extern "C"  TNode_t3946371078 * TestSuite_AddToXml_m63921258 (TestSuite_t407774568 * __this, TNode_t3946371078 * ___parentNode0, bool ___recursive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite_AddToXml_m63921258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TNode_t3946371078 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		TNode_t3946371078 * L_0 = ___parentNode0;
		TNode_t3946371078 * L_1 = TNode_AddElement_m3082294026(L_0, _stringLiteral812838592, /*hidden argument*/NULL);
		V_0 = L_1;
		TNode_t3946371078 * L_2 = V_0;
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String NUnit.Framework.Internal.Test::get_TestType() */, __this);
		TNode_AddAttribute_m357558902(L_2, _stringLiteral3243520166, L_3, /*hidden argument*/NULL);
		TNode_t3946371078 * L_4 = V_0;
		bool L_5 = ___recursive1;
		Test_PopulateTestNode_m4050235924(__this, L_4, L_5, /*hidden argument*/NULL);
		TNode_t3946371078 * L_6 = V_0;
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 NUnit.Framework.Internal.Test::get_TestCaseCount() */, __this);
		V_1 = L_7;
		String_t* L_8 = Int32_ToString_m141394615((&V_1), /*hidden argument*/NULL);
		TNode_AddAttribute_m357558902(L_6, _stringLiteral3766319145, L_8, /*hidden argument*/NULL);
		bool L_9 = ___recursive1;
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> NUnit.Framework.Internal.Test::get_Tests() */, __this);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITest>::GetEnumerator() */, IEnumerable_1_t2334077724_il2cpp_TypeInfo_var, L_10);
		V_2 = L_11;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0062;
		}

IL_004f:
		{
			RuntimeObject* L_12 = V_2;
			RuntimeObject* L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<NUnit.Framework.Interfaces.ITest>::get_Current() */, IEnumerator_1_t3786795303_il2cpp_TypeInfo_var, L_12);
			TNode_t3946371078 * L_14 = V_0;
			bool L_15 = ___recursive1;
			VirtFuncInvoker2< TNode_t3946371078 *, TNode_t3946371078 *, bool >::Invoke(26 /* NUnit.Framework.Interfaces.TNode NUnit.Framework.Internal.Test::AddToXml(NUnit.Framework.Interfaces.TNode,System.Boolean) */, ((Test_t3432848304 *)CastclassClass((RuntimeObject*)L_13, Test_t3432848304_il2cpp_TypeInfo_var)), L_14, L_15);
		}

IL_0062:
		{
			RuntimeObject* L_16 = V_2;
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_004f;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x76, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_2;
			if (!L_18)
			{
				goto IL_0075;
			}
		}

IL_006f:
		{
			RuntimeObject* L_19 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_19);
		}

IL_0075:
		{
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x76, IL_0076)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0076:
	{
		TNode_t3946371078 * L_20 = V_0;
		return L_20;
	}
}
// System.Void NUnit.Framework.Internal.TestSuite::CheckSetUpTearDownMethods(System.Type)
extern "C"  void TestSuite_CheckSetUpTearDownMethods_m2163883642 (TestSuite_t407774568 * __this, Type_t * ___attrType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuite_CheckSetUpTearDownMethods_m2163883642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_t2572182361* V_0 = NULL;
	int32_t V_1 = 0;
	MethodInfo_t * V_2 = NULL;
	{
		RuntimeObject* L_0 = Test_get_TypeInfo_m2542028643(__this, /*hidden argument*/NULL);
		Type_t * L_1 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type NUnit.Framework.Interfaces.ITypeInfo::get_Type() */, ITypeInfo_t293606473_il2cpp_TypeInfo_var, L_0);
		Type_t * L_2 = ___attrType0;
		IL2CPP_RUNTIME_CLASS_INIT(Reflect_t1986382923_il2cpp_TypeInfo_var);
		MethodInfoU5BU5D_t2572182361* L_3 = Reflect_GetMethodsWithAttribute_m200404071(NULL /*static, unused*/, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_007a;
	}

IL_0017:
	{
		MethodInfoU5BU5D_t2572182361* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		MethodInfo_t * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		MethodInfo_t * L_8 = V_2;
		bool L_9 = MethodBase_get_IsAbstract_m428833029(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004e;
		}
	}
	{
		MethodInfo_t * L_10 = V_2;
		bool L_11 = MethodBase_get_IsPublic_m2180846589(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0033;
		}
	}
	{
		MethodInfo_t * L_12 = V_2;
		bool L_13 = MethodBase_get_IsFamily_m3588449059(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004e;
		}
	}

IL_0033:
	{
		MethodInfo_t * L_14 = V_2;
		ParameterInfoU5BU5D_t390618515* L_15 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_14);
		if ((((RuntimeArray *)L_15)->max_length))
		{
			goto IL_004e;
		}
	}
	{
		MethodInfo_t * L_16 = V_2;
		Type_t * L_17 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_16);
		RuntimeTypeHandle_t3027515415  L_18 = { reinterpret_cast<intptr_t> (Void_t1185182177_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_17) == ((RuntimeObject*)(Type_t *)L_19)))
		{
			goto IL_0076;
		}
	}

IL_004e:
	{
		RuntimeObject* L_20 = Test_get_Properties_m120802510(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_2;
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral161004592, L_22, /*hidden argument*/NULL);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void NUnit.Framework.Interfaces.IPropertyBag::Set(System.String,System.Object) */, IPropertyBag_t3982299364_il2cpp_TypeInfo_var, L_20, _stringLiteral3044528582, L_23);
		Test_set_RunState_m3305347189(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0076:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_25 = V_1;
		MethodInfoU5BU5D_t2572182361* L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0017;
		}
	}
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
// System.Void NUnit.Framework.Internal.TestSuiteResult::.ctor(NUnit.Framework.Internal.TestSuite)
extern "C"  void TestSuiteResult__ctor_m1687939535 (TestSuiteResult_t4148044652 * __this, TestSuite_t407774568 * ___suite0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuiteResult__ctor_m1687939535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TestSuite_t407774568 * L_0 = ___suite0;
		IL2CPP_RUNTIME_CLASS_INIT(TestResult_t921768966_il2cpp_TypeInfo_var);
		TestResult__ctor_m977786872(__this, L_0, /*hidden argument*/NULL);
		List_1_t2639907989 * L_1 = (List_1_t2639907989 *)il2cpp_codegen_object_new(List_1_t2639907989_il2cpp_TypeInfo_var);
		List_1__ctor_m3117187204(L_1, /*hidden argument*/List_1__ctor_m3117187204_RuntimeMethod_var);
		__this->set__children_17(L_1);
		return;
	}
}
// System.Int32 NUnit.Framework.Internal.TestSuiteResult::get_FailCount()
extern "C"  int32_t TestSuiteResult_get_FailCount_m1002855284 (TestSuiteResult_t4148044652 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__failCount_14();
		return L_0;
	}
}
// System.Int32 NUnit.Framework.Internal.TestSuiteResult::get_PassCount()
extern "C"  int32_t TestSuiteResult_get_PassCount_m2420371225 (TestSuiteResult_t4148044652 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__passCount_13();
		return L_0;
	}
}
// System.Int32 NUnit.Framework.Internal.TestSuiteResult::get_SkipCount()
extern "C"  int32_t TestSuiteResult_get_SkipCount_m32515682 (TestSuiteResult_t4148044652 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__skipCount_15();
		return L_0;
	}
}
// System.Int32 NUnit.Framework.Internal.TestSuiteResult::get_InconclusiveCount()
extern "C"  int32_t TestSuiteResult_get_InconclusiveCount_m1782286071 (TestSuiteResult_t4148044652 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__inconclusiveCount_16();
		return L_0;
	}
}
// System.Boolean NUnit.Framework.Internal.TestSuiteResult::get_HasChildren()
extern "C"  bool TestSuiteResult_get_HasChildren_m1657941375 (TestSuiteResult_t4148044652 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuiteResult_get_HasChildren_m1657941375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2639907989 * L_0 = __this->get__children_17();
		int32_t L_1 = List_1_get_Count_m3753441864(L_0, /*hidden argument*/List_1_get_Count_m3753441864_RuntimeMethod_var);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> NUnit.Framework.Internal.TestSuiteResult::get_Children()
extern "C"  RuntimeObject* TestSuiteResult_get_Children_m4009479238 (TestSuiteResult_t4148044652 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2639907989 * L_0 = __this->get__children_17();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TestSuiteResult::AddResult(NUnit.Framework.Interfaces.ITestResult)
extern "C"  void TestSuiteResult_AddResult_m2584239127 (TestSuiteResult_t4148044652 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestSuiteResult_AddResult_m2584239127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(29 /* System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> NUnit.Framework.Internal.TestResult::get_Children() */, __this);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_1_t2983153030_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = ___result0;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<NUnit.Framework.Interfaces.ITestResult>::Add(!0) */, ICollection_1_t3995985481_il2cpp_TypeInfo_var, L_2, L_3);
		goto IL_0023;
	}

IL_0018:
	{
		NotSupportedException_t1314879016 * L_4 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_4, _stringLiteral4220495442, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0023:
	{
		ResultState_t492092786 * L_5 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_6 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Cancelled_7();
		if ((((RuntimeObject*)(ResultState_t492092786 *)L_5) == ((RuntimeObject*)(ResultState_t492092786 *)L_6)))
		{
			goto IL_00d1;
		}
	}
	{
		RuntimeObject* L_7 = ___result0;
		ResultState_t492092786 * L_8 = InterfaceFuncInvoker0< ResultState_t492092786 * >::Invoke(0 /* NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ITestResult::get_ResultState() */, ITestResult_t1167833247_il2cpp_TypeInfo_var, L_7);
		int32_t L_9 = ResultState_get_Status_m3887425803(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))
		{
			case 0:
			{
				goto IL_008f;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_006f;
			}
		}
	}
	{
		goto IL_00d1;
	}

IL_0055:
	{
		ResultState_t492092786 * L_11 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		int32_t L_12 = ResultState_get_Status_m3887425803(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00d1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_13 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Success_4();
		TestResult_SetResult_m1750044282(__this, L_13, /*hidden argument*/NULL);
		goto IL_00d1;
	}

IL_006f:
	{
		ResultState_t492092786 * L_14 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		int32_t L_15 = ResultState_get_Status_m3887425803(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) == ((int32_t)3)))
		{
			goto IL_00d1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_16 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_ChildFailure_9();
		IL2CPP_RUNTIME_CLASS_INIT(TestResult_t921768966_il2cpp_TypeInfo_var);
		String_t* L_17 = ((TestResult_t921768966_StaticFields*)il2cpp_codegen_static_fields_for(TestResult_t921768966_il2cpp_TypeInfo_var))->get_CHILD_ERRORS_MESSAGE_0();
		TestResult_SetResult_m2500787488(__this, L_16, L_17, /*hidden argument*/NULL);
		goto IL_00d1;
	}

IL_008f:
	{
		RuntimeObject* L_18 = ___result0;
		ResultState_t492092786 * L_19 = InterfaceFuncInvoker0< ResultState_t492092786 * >::Invoke(0 /* NUnit.Framework.Interfaces.ResultState NUnit.Framework.Interfaces.ITestResult::get_ResultState() */, ITestResult_t1167833247_il2cpp_TypeInfo_var, L_18);
		String_t* L_20 = ResultState_get_Label_m1745926125(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_op_Equality_m920492651(NULL /*static, unused*/, L_20, _stringLiteral2084613277, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00d1;
		}
	}
	{
		ResultState_t492092786 * L_22 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		int32_t L_23 = ResultState_get_Status_m3887425803(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c1;
		}
	}
	{
		ResultState_t492092786 * L_24 = TestResult_get_ResultState_m1725305102(__this, /*hidden argument*/NULL);
		int32_t L_25 = ResultState_get_Status_m3887425803(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_00d1;
		}
	}

IL_00c1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ResultState_t492092786_il2cpp_TypeInfo_var);
		ResultState_t492092786 * L_26 = ((ResultState_t492092786_StaticFields*)il2cpp_codegen_static_fields_for(ResultState_t492092786_il2cpp_TypeInfo_var))->get_Ignored_2();
		IL2CPP_RUNTIME_CLASS_INIT(TestResult_t921768966_il2cpp_TypeInfo_var);
		String_t* L_27 = ((TestResult_t921768966_StaticFields*)il2cpp_codegen_static_fields_for(TestResult_t921768966_il2cpp_TypeInfo_var))->get_CHILD_IGNORE_MESSAGE_1();
		TestResult_SetResult_m2500787488(__this, L_26, L_27, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		int32_t L_28 = ((TestResult_t921768966 *)__this)->get_InternalAssertCount_5();
		RuntimeObject* L_29 = ___result0;
		int32_t L_30 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 NUnit.Framework.Interfaces.ITestResult::get_AssertCount() */, ITestResult_t1167833247_il2cpp_TypeInfo_var, L_29);
		((TestResult_t921768966 *)__this)->set_InternalAssertCount_5(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_30)));
		int32_t L_31 = __this->get__passCount_13();
		RuntimeObject* L_32 = ___result0;
		int32_t L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 NUnit.Framework.Interfaces.ITestResult::get_PassCount() */, ITestResult_t1167833247_il2cpp_TypeInfo_var, L_32);
		__this->set__passCount_13(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_33)));
		int32_t L_34 = __this->get__failCount_14();
		RuntimeObject* L_35 = ___result0;
		int32_t L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 NUnit.Framework.Interfaces.ITestResult::get_FailCount() */, ITestResult_t1167833247_il2cpp_TypeInfo_var, L_35);
		__this->set__failCount_14(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_36)));
		int32_t L_37 = __this->get__skipCount_15();
		RuntimeObject* L_38 = ___result0;
		int32_t L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 NUnit.Framework.Interfaces.ITestResult::get_SkipCount() */, ITestResult_t1167833247_il2cpp_TypeInfo_var, L_38);
		__this->set__skipCount_15(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_39)));
		int32_t L_40 = __this->get__inconclusiveCount_16();
		RuntimeObject* L_41 = ___result0;
		int32_t L_42 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 NUnit.Framework.Interfaces.ITestResult::get_InconclusiveCount() */, ITestResult_t1167833247_il2cpp_TypeInfo_var, L_41);
		__this->set__inconclusiveCount_16(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_42)));
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
// System.Void NUnit.Framework.Internal.TextMessageWriter::.ctor(System.String,System.Object[])
extern "C"  void TextMessageWriter__ctor_m2846032292 (TextMessageWriter_t1905902127 * __this, String_t* ___userMessage0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter__ctor_m2846032292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->get_DEFAULT_LINE_LENGTH_5();
		__this->set_maxLineLength_9(L_0);
		MessageWriter__ctor_m1750221710(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___userMessage0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = ___userMessage0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___userMessage0;
		ObjectU5BU5D_t2843939325* L_6 = ___args1;
		MessageWriter_WriteMessageLine_m832063330(__this, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Int32 NUnit.Framework.Internal.TextMessageWriter::get_MaxLineLength()
extern "C"  int32_t TextMessageWriter_get_MaxLineLength_m2506579715 (TextMessageWriter_t1905902127 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_maxLineLength_9();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteMessageLine(System.Int32,System.String,System.Object[])
extern "C"  void TextMessageWriter_WriteMessageLine_m3244823887 (TextMessageWriter_t1905902127 * __this, int32_t ___level0, String_t* ___message1, ObjectU5BU5D_t2843939325* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter_WriteMessageLine_m3244823887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0010;
	}

IL_0005:
	{
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, _stringLiteral3450517376);
	}

IL_0010:
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = L_1;
		___level0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___args2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_4 = ___args2;
		if (!(((RuntimeArray *)L_4)->max_length))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___message1;
		ObjectU5BU5D_t2843939325* L_6 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m630303134(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		___message1 = L_7;
	}

IL_0029:
	{
		String_t* L_8 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(MsgUtils_t3625303109_il2cpp_TypeInfo_var);
		String_t* L_9 = MsgUtils_EscapeNullCharacters_m184095093(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, __this, L_9);
	}

IL_0035:
	{
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::DisplayDifferences(NUnit.Framework.Constraints.ConstraintResult)
extern "C"  void TextMessageWriter_DisplayDifferences_m2024351473 (TextMessageWriter_t1905902127 * __this, ConstraintResult_t3673080895 * ___result0, const RuntimeMethod* method)
{
	{
		ConstraintResult_t3673080895 * L_0 = ___result0;
		TextMessageWriter_WriteExpectedLine_m4224931375(__this, L_0, /*hidden argument*/NULL);
		ConstraintResult_t3673080895 * L_1 = ___result0;
		TextMessageWriter_WriteActualLine_m317420518(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::DisplayDifferences(System.Object,System.Object)
extern "C"  void TextMessageWriter_DisplayDifferences_m640564516 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___expected0, RuntimeObject * ___actual1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___expected0;
		TextMessageWriter_WriteExpectedLine_m3215726834(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___actual1;
		TextMessageWriter_WriteActualLine_m2197059919(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::DisplayDifferences(System.Object,System.Object,NUnit.Framework.Constraints.Tolerance)
extern "C"  void TextMessageWriter_DisplayDifferences_m52991522 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___expected0, RuntimeObject * ___actual1, Tolerance_t819151345 * ___tolerance2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___expected0;
		Tolerance_t819151345 * L_1 = ___tolerance2;
		TextMessageWriter_WriteExpectedLine_m3157171240(__this, L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___actual1;
		TextMessageWriter_WriteActualLine_m2197059919(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::DisplayStringDifferences(System.String,System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  void TextMessageWriter_DisplayStringDifferences_m1437238139 (TextMessageWriter_t1905902127 * __this, String_t* ___expected0, String_t* ___actual1, int32_t ___mismatch2, bool ___ignoreCase3, bool ___clipping4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter_DisplayStringDifferences_m1437238139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 NUnit.Framework.Constraints.MessageWriter::get_MaxLineLength() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->get_PrefixLength_8();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)2));
		bool L_2 = ___clipping4;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = ___mismatch2;
		IL2CPP_RUNTIME_CLASS_INIT(MsgUtils_t3625303109_il2cpp_TypeInfo_var);
		MsgUtils_ClipExpectedAndActual_m3852715265(NULL /*static, unused*/, (&___expected0), (&___actual1), L_3, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_5 = ___expected0;
		IL2CPP_RUNTIME_CLASS_INIT(MsgUtils_t3625303109_il2cpp_TypeInfo_var);
		String_t* L_6 = MsgUtils_EscapeControlChars_m312279757(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		___expected0 = L_6;
		String_t* L_7 = ___actual1;
		String_t* L_8 = MsgUtils_EscapeControlChars_m312279757(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		___actual1 = L_8;
		String_t* L_9 = ___expected0;
		String_t* L_10 = ___actual1;
		bool L_11 = ___ignoreCase3;
		int32_t L_12 = MsgUtils_FindMismatchPosition_m3163754772(NULL /*static, unused*/, L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		___mismatch2 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var);
		String_t* L_13 = ((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->get_Pfx_Expected_6();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_13);
		String_t* L_14 = ___expected0;
		String_t* L_15 = MsgUtils_FormatValue_m4211138724(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_15);
		bool L_16 = ___ignoreCase3;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, _stringLiteral1874679109);
	}

IL_0060:
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine() */, __this);
		String_t* L_17 = ___actual1;
		TextMessageWriter_WriteActualLine_m2197059919(__this, L_17, /*hidden argument*/NULL);
		int32_t L_18 = ___mismatch2;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_19 = ___mismatch2;
		TextMessageWriter_WriteCaretLine_m2815048626(__this, L_19, /*hidden argument*/NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteActualValue(System.Object)
extern "C"  void TextMessageWriter_WriteActualValue_m996777036 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___actual0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___actual0;
		VirtActionInvoker1< RuntimeObject * >::Invoke(29 /* System.Void NUnit.Framework.Constraints.MessageWriter::WriteValue(System.Object) */, __this, L_0);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteValue(System.Object)
extern "C"  void TextMessageWriter_WriteValue_m1196648060 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter_WriteValue_m1196648060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(MsgUtils_t3625303109_il2cpp_TypeInfo_var);
		String_t* L_1 = MsgUtils_FormatValue_m4211138724(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_1);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteCollectionElements(System.Collections.IEnumerable,System.Int64,System.Int32)
extern "C"  void TextMessageWriter_WriteCollectionElements_m792577923 (TextMessageWriter_t1905902127 * __this, RuntimeObject* ___collection0, int64_t ___start1, int32_t ___max2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter_WriteCollectionElements_m792577923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___collection0;
		int64_t L_1 = ___start1;
		int32_t L_2 = ___max2;
		IL2CPP_RUNTIME_CLASS_INIT(MsgUtils_t3625303109_il2cpp_TypeInfo_var);
		String_t* L_3 = MsgUtils_FormatCollection_m3425833712(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_3);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteExpectedLine(NUnit.Framework.Constraints.ConstraintResult)
extern "C"  void TextMessageWriter_WriteExpectedLine_m4224931375 (TextMessageWriter_t1905902127 * __this, ConstraintResult_t3673080895 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter_WriteExpectedLine_m4224931375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->get_Pfx_Expected_6();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_0);
		ConstraintResult_t3673080895 * L_1 = ___result0;
		String_t* L_2 = ConstraintResult_get_Description_m2592390351(L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, __this, L_2);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteExpectedLine(System.Object)
extern "C"  void TextMessageWriter_WriteExpectedLine_m3215726834 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___expected0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___expected0;
		TextMessageWriter_WriteExpectedLine_m3157171240(__this, L_0, (Tolerance_t819151345 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteExpectedLine(System.Object,NUnit.Framework.Constraints.Tolerance)
extern "C"  void TextMessageWriter_WriteExpectedLine_m3157171240 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___expected0, Tolerance_t819151345 * ___tolerance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter_WriteExpectedLine_m3157171240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->get_Pfx_Expected_6();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_0);
		RuntimeObject * L_1 = ___expected0;
		IL2CPP_RUNTIME_CLASS_INIT(MsgUtils_t3625303109_il2cpp_TypeInfo_var);
		String_t* L_2 = MsgUtils_FormatValue_m4211138724(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_2);
		Tolerance_t819151345 * L_3 = ___tolerance1;
		if (!L_3)
		{
			goto IL_005d;
		}
	}
	{
		Tolerance_t819151345 * L_4 = ___tolerance1;
		bool L_5 = Tolerance_get_IsUnsetOrDefault_m1390084011(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, _stringLiteral640539941);
		Tolerance_t819151345 * L_6 = ___tolerance1;
		RuntimeObject * L_7 = Tolerance_get_Value_m3869481907(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MsgUtils_t3625303109_il2cpp_TypeInfo_var);
		String_t* L_8 = MsgUtils_FormatValue_m4211138724(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_8);
		Tolerance_t819151345 * L_9 = ___tolerance1;
		int32_t L_10 = Tolerance_get_Mode_m3666460207(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		Tolerance_t819151345 * L_11 = ___tolerance1;
		int32_t L_12 = Tolerance_get_Mode_m3666460207(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(ToleranceMode_t1002201888_il2cpp_TypeInfo_var, &L_13);
		VirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String,System.Object) */, __this, _stringLiteral2091341594, L_14);
	}

IL_005d:
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine() */, __this);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteActualLine(NUnit.Framework.Constraints.ConstraintResult)
extern "C"  void TextMessageWriter_WriteActualLine_m317420518 (TextMessageWriter_t1905902127 * __this, ConstraintResult_t3673080895 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter_WriteActualLine_m317420518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->get_Pfx_Actual_7();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_0);
		ConstraintResult_t3673080895 * L_1 = ___result0;
		VirtActionInvoker1< MessageWriter_t4095718909 * >::Invoke(6 /* System.Void NUnit.Framework.Constraints.ConstraintResult::WriteActualValueTo(NUnit.Framework.Constraints.MessageWriter) */, L_1, __this);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine() */, __this);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteActualLine(System.Object)
extern "C"  void TextMessageWriter_WriteActualLine_m2197059919 (TextMessageWriter_t1905902127 * __this, RuntimeObject * ___actual0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter_WriteActualLine_m2197059919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->get_Pfx_Actual_7();
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_0);
		RuntimeObject * L_1 = ___actual0;
		VirtActionInvoker1< RuntimeObject * >::Invoke(28 /* System.Void NUnit.Framework.Constraints.MessageWriter::WriteActualValue(System.Object) */, __this, L_1);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine() */, __this);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::WriteCaretLine(System.Int32)
extern "C"  void TextMessageWriter_WriteCaretLine_m2815048626 (TextMessageWriter_t1905902127 * __this, int32_t ___mismatch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter_WriteCaretLine_m2815048626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->get_PrefixLength_8();
		int32_t L_1 = ___mismatch0;
		String_t* L_2 = String_CreateString_m1262864254(NULL, ((int32_t)45), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)2)), (int32_t)1)), /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.String,System.Object) */, __this, _stringLiteral3663305196, L_2);
		return;
	}
}
// System.Void NUnit.Framework.Internal.TextMessageWriter::.cctor()
extern "C"  void TextMessageWriter__cctor_m1636813561 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextMessageWriter__cctor_m1636813561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->set_DEFAULT_LINE_LENGTH_5(((int32_t)78));
		((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->set_Pfx_Expected_6(_stringLiteral906900731);
		((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->set_Pfx_Actual_7(_stringLiteral3949728136);
		String_t* L_0 = ((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->get_Pfx_Expected_6();
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		((TextMessageWriter_t1905902127_StaticFields*)il2cpp_codegen_static_fields_for(TextMessageWriter_t1905902127_il2cpp_TypeInfo_var))->set_PrefixLength_8(L_1);
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
// System.Void NUnit.Framework.Internal.ThreadUtility::Kill(System.Threading.Thread)
extern "C"  void ThreadUtility_Kill_m3879516114 (RuntimeObject * __this /* static, unused */, Thread_t2300836069 * ___thread0, const RuntimeMethod* method)
{
	{
		Thread_t2300836069 * L_0 = ___thread0;
		ThreadUtility_Kill_m1498152550(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.Internal.ThreadUtility::Kill(System.Threading.Thread,System.Object)
extern "C"  void ThreadUtility_Kill_m1498152550 (RuntimeObject * __this /* static, unused */, Thread_t2300836069 * ___thread0, RuntimeObject * ___stateInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadUtility_Kill_m1498152550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_0 = ___stateInfo1;
			if (L_0)
			{
				goto IL_000b;
			}
		}

IL_0003:
		{
			Thread_t2300836069 * L_1 = ___thread0;
			Thread_Abort_m14784104(L_1, /*hidden argument*/NULL);
			goto IL_0012;
		}

IL_000b:
		{
			Thread_t2300836069 * L_2 = ___thread0;
			RuntimeObject * L_3 = ___stateInfo1;
			Thread_Abort_m3994296774(L_2, L_3, /*hidden argument*/NULL);
		}

IL_0012:
		{
			goto IL_001d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ThreadStateException_t3003788475_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0014;
		throw e;
	}

CATCH_0014:
	{ // begin catch(System.Threading.ThreadStateException)
		Thread_t2300836069 * L_4 = ___thread0;
		Thread_Resume_m1638819837(L_4, /*hidden argument*/NULL);
		goto IL_001d;
	} // end catch (depth: 1)

IL_001d:
	{
		Thread_t2300836069 * L_5 = ___thread0;
		int32_t L_6 = Thread_get_ThreadState_m2551357849(L_5, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_6&(int32_t)((int32_t)32))))
		{
			goto IL_002e;
		}
	}
	{
		Thread_t2300836069 * L_7 = ___thread0;
		Thread_Interrupt_m389245637(L_7, /*hidden argument*/NULL);
	}

IL_002e:
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
// System.String NUnit.Framework.Internal.TypeHelper::GetDisplayName(System.Type)
extern "C"  String_t* TypeHelper_GetDisplayName_m1582185031 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeHelper_GetDisplayName_m1582185031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	TypeU5BU5D_t3940880105* V_3 = NULL;
	int32_t V_4 = 0;
	StringBuilder_t * V_5 = NULL;
	bool V_6 = false;
	StringU5BU5D_t1281789340* V_7 = NULL;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		Type_t * L_0 = ___type0;
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(92 /* System.Boolean System.Type::get_IsGenericParameter() */, L_0);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t * L_2 = ___type0;
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		return L_3;
	}

IL_000f:
	{
		Type_t * L_4 = ___type0;
		Type_t * L_5 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(90 /* System.Boolean System.Type::get_IsGenericType() */, L_5);
		if (!L_6)
		{
			goto IL_0149;
		}
	}
	{
		Type_t * L_7 = ___type0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_7);
		V_1 = L_8;
		String_t* L_9 = V_1;
		int32_t L_10 = String_IndexOf_m363431711(L_9, ((int32_t)91), /*hidden argument*/NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_12 = V_1;
		int32_t L_13 = V_2;
		String_t* L_14 = String_Substring_m1610150815(L_12, 0, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_003c:
	{
		String_t* L_15 = V_1;
		int32_t L_16 = String_LastIndexOf_m3451222878(L_15, ((int32_t)46), /*hidden argument*/NULL);
		V_2 = L_16;
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_18 = V_1;
		int32_t L_19 = V_2;
		String_t* L_20 = String_Substring_m2848979100(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_20;
	}

IL_0053:
	{
		Type_t * L_21 = ___type0;
		TypeU5BU5D_t3940880105* L_22 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(86 /* System.Type[] System.Type::GetGenericArguments() */, L_21);
		V_3 = L_22;
		V_4 = 0;
		StringBuilder_t * L_23 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_23, /*hidden argument*/NULL);
		V_5 = L_23;
		V_6 = (bool)0;
		String_t* L_24 = V_1;
		CharU5BU5D_t3528271667* L_25 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)43));
		StringU5BU5D_t1281789340* L_26 = String_Split_m3646115398(L_24, L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		V_8 = 0;
		goto IL_0136;
	}

IL_0082:
	{
		StringU5BU5D_t1281789340* L_27 = V_7;
		int32_t L_28 = V_8;
		int32_t L_29 = L_28;
		String_t* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_9 = L_30;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t * L_32 = V_5;
		StringBuilder_Append_m1965104174(L_32, _stringLiteral3452614533, /*hidden argument*/NULL);
	}

IL_009a:
	{
		V_6 = (bool)1;
		String_t* L_33 = V_9;
		int32_t L_34 = String_IndexOf_m363431711(L_33, ((int32_t)96), /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) < ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		String_t* L_36 = V_9;
		int32_t L_37 = V_2;
		String_t* L_38 = String_Substring_m1610150815(L_36, 0, L_37, /*hidden argument*/NULL);
		V_10 = L_38;
		StringBuilder_t * L_39 = V_5;
		String_t* L_40 = V_10;
		StringBuilder_Append_m1965104174(L_39, L_40, /*hidden argument*/NULL);
		StringBuilder_t * L_41 = V_5;
		StringBuilder_Append_m1965104174(L_41, _stringLiteral3452614548, /*hidden argument*/NULL);
		String_t* L_42 = V_9;
		int32_t L_43 = V_2;
		String_t* L_44 = String_Substring_m2848979100(L_42, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_45 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		V_11 = L_45;
		V_12 = 0;
		goto IL_0111;
	}

IL_00e3:
	{
		int32_t L_46 = V_12;
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		StringBuilder_t * L_47 = V_5;
		StringBuilder_Append_m1965104174(L_47, _stringLiteral3452614532, /*hidden argument*/NULL);
	}

IL_00f5:
	{
		StringBuilder_t * L_48 = V_5;
		TypeU5BU5D_t3940880105* L_49 = V_3;
		int32_t L_50 = V_4;
		int32_t L_51 = L_50;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		int32_t L_52 = L_51;
		Type_t * L_53 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		String_t* L_54 = TypeHelper_GetDisplayName_m1582185031(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_48, L_54, /*hidden argument*/NULL);
		int32_t L_55 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_0111:
	{
		int32_t L_56 = V_12;
		int32_t L_57 = V_11;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00e3;
		}
	}
	{
		StringBuilder_t * L_58 = V_5;
		StringBuilder_Append_m1965104174(L_58, _stringLiteral3452614546, /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_0126:
	{
		StringBuilder_t * L_59 = V_5;
		String_t* L_60 = V_9;
		StringBuilder_Append_m1965104174(L_59, L_60, /*hidden argument*/NULL);
	}

IL_0130:
	{
		int32_t L_61 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0136:
	{
		int32_t L_62 = V_8;
		StringU5BU5D_t1281789340* L_63 = V_7;
		if ((((int32_t)L_62) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_63)->max_length)))))))
		{
			goto IL_0082;
		}
	}
	{
		StringBuilder_t * L_64 = V_5;
		String_t* L_65 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_64);
		return L_65;
	}

IL_0149:
	{
		Type_t * L_66 = ___type0;
		String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_66);
		int32_t L_68 = String_LastIndexOf_m3451222878(L_67, ((int32_t)46), /*hidden argument*/NULL);
		V_0 = L_68;
		int32_t L_69 = V_0;
		if ((((int32_t)L_69) >= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		Type_t * L_70 = ___type0;
		String_t* L_71 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_70);
		return L_71;
	}

IL_0162:
	{
		Type_t * L_72 = ___type0;
		String_t* L_73 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_72);
		int32_t L_74 = V_0;
		String_t* L_75 = String_Substring_m2848979100(L_73, ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1)), /*hidden argument*/NULL);
		return L_75;
	}
}
// System.String NUnit.Framework.Internal.TypeHelper::GetDisplayName(System.Type,System.Object[])
extern "C"  String_t* TypeHelper_GetDisplayName_m742861752 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t2843939325* ___arglist1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeHelper_GetDisplayName_m742861752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		String_t* L_1 = TypeHelper_GetDisplayName_m1582185031(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t2843939325* L_2 = ___arglist1;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ___arglist1;
		if ((((RuntimeArray *)L_3)->max_length))
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_0010:
	{
		String_t* L_5 = V_0;
		StringBuilder_t * L_6 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_6, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringBuilder_t * L_7 = V_1;
		StringBuilder_Append_m1965104174(L_7, _stringLiteral3452614536, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_012d;
	}

IL_002a:
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		StringBuilder_t * L_9 = V_1;
		StringBuilder_Append_m1965104174(L_9, _stringLiteral3452614532, /*hidden argument*/NULL);
	}

IL_003a:
	{
		ObjectU5BU5D_t2843939325* L_10 = ___arglist1;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		RuntimeObject * L_14 = V_3;
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject * L_15 = V_3;
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		G_B9_0 = L_16;
		goto IL_004e;
	}

IL_0049:
	{
		G_B9_0 = _stringLiteral1202628576;
	}

IL_004e:
	{
		V_4 = G_B9_0;
		RuntimeObject * L_17 = V_3;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject * L_18 = V_3;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_009c;
		}
	}

IL_0060:
	{
		String_t* L_19 = V_4;
		int32_t L_20 = String_IndexOf_m363431711(L_19, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_21 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m3937257545(NULL /*static, unused*/, L_21, _stringLiteral3451565954, /*hidden argument*/NULL);
		V_4 = L_22;
	}

IL_007a:
	{
		String_t* L_23 = V_4;
		RuntimeObject * L_24 = V_3;
		G_B14_0 = L_23;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_24, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			G_B15_0 = L_23;
			goto IL_008b;
		}
	}
	{
		G_B16_0 = _stringLiteral3452614586;
		G_B16_1 = G_B14_0;
		goto IL_0090;
	}

IL_008b:
	{
		G_B16_0 = _stringLiteral3452614588;
		G_B16_1 = G_B15_0;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m3937257545(NULL /*static, unused*/, G_B16_1, G_B16_0, /*hidden argument*/NULL);
		V_4 = L_25;
		goto IL_0120;
	}

IL_009c:
	{
		RuntimeObject * L_26 = V_3;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_26, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_27 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3937257545(NULL /*static, unused*/, L_27, _stringLiteral3452614595, /*hidden argument*/NULL);
		V_4 = L_28;
		goto IL_0120;
	}

IL_00b4:
	{
		RuntimeObject * L_29 = V_3;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_29, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_00cc;
		}
	}
	{
		String_t* L_30 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m3937257545(NULL /*static, unused*/, L_30, _stringLiteral3452614628, /*hidden argument*/NULL);
		V_4 = L_31;
		goto IL_0120;
	}

IL_00cc:
	{
		RuntimeObject * L_32 = V_3;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_32, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_33 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m3937257545(NULL /*static, unused*/, L_33, _stringLiteral3457071083, /*hidden argument*/NULL);
		V_4 = L_34;
		goto IL_0120;
	}

IL_00e4:
	{
		RuntimeObject * L_35 = V_3;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_35, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0120;
		}
	}
	{
		String_t* L_36 = V_4;
		int32_t L_37 = String_get_Length_m3847582255(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_37) <= ((int32_t)((int32_t)40))))
		{
			goto IL_010d;
		}
	}
	{
		String_t* L_38 = V_4;
		String_t* L_39 = String_Substring_m1610150815(L_38, 0, ((int32_t)37), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Concat_m3937257545(NULL /*static, unused*/, L_39, _stringLiteral2623387542, /*hidden argument*/NULL);
		V_4 = L_40;
	}

IL_010d:
	{
		String_t* L_41 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3452614526, L_41, _stringLiteral3452614526, /*hidden argument*/NULL);
		V_4 = L_42;
	}

IL_0120:
	{
		StringBuilder_t * L_43 = V_1;
		String_t* L_44 = V_4;
		StringBuilder_Append_m1965104174(L_43, L_44, /*hidden argument*/NULL);
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_012d:
	{
		int32_t L_46 = V_2;
		ObjectU5BU5D_t2843939325* L_47 = ___arglist1;
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_47)->max_length)))))))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_48 = V_1;
		StringBuilder_Append_m1965104174(L_48, _stringLiteral3452614535, /*hidden argument*/NULL);
		StringBuilder_t * L_49 = V_1;
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		return L_50;
	}
}
// System.Type NUnit.Framework.Internal.TypeHelper::BestCommonType(System.Type,System.Type)
extern "C"  Type_t * TypeHelper_BestCommonType_m1103720624 (RuntimeObject * __this /* static, unused */, Type_t * ___type10, Type_t * ___type21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeHelper_BestCommonType_m1103720624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type10;
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		Type_t * L_1 = ((TypeHelper_t3432996546_StaticFields*)il2cpp_codegen_static_fields_for(TypeHelper_t3432996546_il2cpp_TypeInfo_var))->get_NonmatchingType_0();
		if ((!(((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		Type_t * L_2 = ((TypeHelper_t3432996546_StaticFields*)il2cpp_codegen_static_fields_for(TypeHelper_t3432996546_il2cpp_TypeInfo_var))->get_NonmatchingType_0();
		return L_2;
	}

IL_000e:
	{
		Type_t * L_3 = ___type21;
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((TypeHelper_t3432996546_StaticFields*)il2cpp_codegen_static_fields_for(TypeHelper_t3432996546_il2cpp_TypeInfo_var))->get_NonmatchingType_0();
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		Type_t * L_5 = ((TypeHelper_t3432996546_StaticFields*)il2cpp_codegen_static_fields_for(TypeHelper_t3432996546_il2cpp_TypeInfo_var))->get_NonmatchingType_0();
		return L_5;
	}

IL_001c:
	{
		Type_t * L_6 = ___type10;
		Type_t * L_7 = ___type21;
		if ((!(((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_7))))
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_8 = ___type10;
		return L_8;
	}

IL_0022:
	{
		Type_t * L_9 = ___type10;
		if (L_9)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_10 = ___type21;
		return L_10;
	}

IL_0027:
	{
		Type_t * L_11 = ___type21;
		if (L_11)
		{
			goto IL_002c;
		}
	}
	{
		Type_t * L_12 = ___type10;
		return L_12;
	}

IL_002c:
	{
		Type_t * L_13 = ___type10;
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		bool L_14 = TypeHelper_IsNumeric_m3844235642(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_018c;
		}
	}
	{
		Type_t * L_15 = ___type21;
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		bool L_16 = TypeHelper_IsNumeric_m3844235642(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_018c;
		}
	}
	{
		Type_t * L_17 = ___type10;
		RuntimeTypeHandle_t3027515415  L_18 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_17) == ((RuntimeObject*)(Type_t *)L_19))))
		{
			goto IL_0051;
		}
	}
	{
		Type_t * L_20 = ___type10;
		return L_20;
	}

IL_0051:
	{
		Type_t * L_21 = ___type21;
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_21) == ((RuntimeObject*)(Type_t *)L_23))))
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_24 = ___type21;
		return L_24;
	}

IL_0060:
	{
		Type_t * L_25 = ___type10;
		RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_25) == ((RuntimeObject*)(Type_t *)L_27))))
		{
			goto IL_006f;
		}
	}
	{
		Type_t * L_28 = ___type10;
		return L_28;
	}

IL_006f:
	{
		Type_t * L_29 = ___type21;
		RuntimeTypeHandle_t3027515415  L_30 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_31 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_29) == ((RuntimeObject*)(Type_t *)L_31))))
		{
			goto IL_007e;
		}
	}
	{
		Type_t * L_32 = ___type21;
		return L_32;
	}

IL_007e:
	{
		Type_t * L_33 = ___type10;
		RuntimeTypeHandle_t3027515415  L_34 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_33) == ((RuntimeObject*)(Type_t *)L_35))))
		{
			goto IL_008d;
		}
	}
	{
		Type_t * L_36 = ___type10;
		return L_36;
	}

IL_008d:
	{
		Type_t * L_37 = ___type21;
		RuntimeTypeHandle_t3027515415  L_38 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_37) == ((RuntimeObject*)(Type_t *)L_39))))
		{
			goto IL_009c;
		}
	}
	{
		Type_t * L_40 = ___type21;
		return L_40;
	}

IL_009c:
	{
		Type_t * L_41 = ___type10;
		RuntimeTypeHandle_t3027515415  L_42 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_41) == ((RuntimeObject*)(Type_t *)L_43))))
		{
			goto IL_00ab;
		}
	}
	{
		Type_t * L_44 = ___type10;
		return L_44;
	}

IL_00ab:
	{
		Type_t * L_45 = ___type21;
		RuntimeTypeHandle_t3027515415  L_46 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_47 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_45) == ((RuntimeObject*)(Type_t *)L_47))))
		{
			goto IL_00ba;
		}
	}
	{
		Type_t * L_48 = ___type21;
		return L_48;
	}

IL_00ba:
	{
		Type_t * L_49 = ___type10;
		RuntimeTypeHandle_t3027515415  L_50 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_49) == ((RuntimeObject*)(Type_t *)L_51))))
		{
			goto IL_00c9;
		}
	}
	{
		Type_t * L_52 = ___type10;
		return L_52;
	}

IL_00c9:
	{
		Type_t * L_53 = ___type21;
		RuntimeTypeHandle_t3027515415  L_54 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_55 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_53) == ((RuntimeObject*)(Type_t *)L_55))))
		{
			goto IL_00d8;
		}
	}
	{
		Type_t * L_56 = ___type21;
		return L_56;
	}

IL_00d8:
	{
		Type_t * L_57 = ___type10;
		RuntimeTypeHandle_t3027515415  L_58 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_57) == ((RuntimeObject*)(Type_t *)L_59))))
		{
			goto IL_00e7;
		}
	}
	{
		Type_t * L_60 = ___type10;
		return L_60;
	}

IL_00e7:
	{
		Type_t * L_61 = ___type21;
		RuntimeTypeHandle_t3027515415  L_62 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_63 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_61) == ((RuntimeObject*)(Type_t *)L_63))))
		{
			goto IL_00f6;
		}
	}
	{
		Type_t * L_64 = ___type21;
		return L_64;
	}

IL_00f6:
	{
		Type_t * L_65 = ___type10;
		RuntimeTypeHandle_t3027515415  L_66 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_67 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_65) == ((RuntimeObject*)(Type_t *)L_67))))
		{
			goto IL_0105;
		}
	}
	{
		Type_t * L_68 = ___type10;
		return L_68;
	}

IL_0105:
	{
		Type_t * L_69 = ___type21;
		RuntimeTypeHandle_t3027515415  L_70 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_71 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_70, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_69) == ((RuntimeObject*)(Type_t *)L_71))))
		{
			goto IL_0114;
		}
	}
	{
		Type_t * L_72 = ___type21;
		return L_72;
	}

IL_0114:
	{
		Type_t * L_73 = ___type10;
		RuntimeTypeHandle_t3027515415  L_74 = { reinterpret_cast<intptr_t> (UInt16_t2177724958_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_75 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_73) == ((RuntimeObject*)(Type_t *)L_75))))
		{
			goto IL_0123;
		}
	}
	{
		Type_t * L_76 = ___type10;
		return L_76;
	}

IL_0123:
	{
		Type_t * L_77 = ___type21;
		RuntimeTypeHandle_t3027515415  L_78 = { reinterpret_cast<intptr_t> (UInt16_t2177724958_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_79 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_78, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_77) == ((RuntimeObject*)(Type_t *)L_79))))
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_80 = ___type21;
		return L_80;
	}

IL_0132:
	{
		Type_t * L_81 = ___type10;
		RuntimeTypeHandle_t3027515415  L_82 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_82, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))))
		{
			goto IL_0141;
		}
	}
	{
		Type_t * L_84 = ___type10;
		return L_84;
	}

IL_0141:
	{
		Type_t * L_85 = ___type21;
		RuntimeTypeHandle_t3027515415  L_86 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_87 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_85) == ((RuntimeObject*)(Type_t *)L_87))))
		{
			goto IL_0150;
		}
	}
	{
		Type_t * L_88 = ___type21;
		return L_88;
	}

IL_0150:
	{
		Type_t * L_89 = ___type10;
		RuntimeTypeHandle_t3027515415  L_90 = { reinterpret_cast<intptr_t> (Byte_t1134296376_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_91 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_90, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_89) == ((RuntimeObject*)(Type_t *)L_91))))
		{
			goto IL_015f;
		}
	}
	{
		Type_t * L_92 = ___type10;
		return L_92;
	}

IL_015f:
	{
		Type_t * L_93 = ___type21;
		RuntimeTypeHandle_t3027515415  L_94 = { reinterpret_cast<intptr_t> (Byte_t1134296376_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_93) == ((RuntimeObject*)(Type_t *)L_95))))
		{
			goto IL_016e;
		}
	}
	{
		Type_t * L_96 = ___type21;
		return L_96;
	}

IL_016e:
	{
		Type_t * L_97 = ___type10;
		RuntimeTypeHandle_t3027515415  L_98 = { reinterpret_cast<intptr_t> (SByte_t1669577662_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_99 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_98, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_97) == ((RuntimeObject*)(Type_t *)L_99))))
		{
			goto IL_017d;
		}
	}
	{
		Type_t * L_100 = ___type10;
		return L_100;
	}

IL_017d:
	{
		Type_t * L_101 = ___type21;
		RuntimeTypeHandle_t3027515415  L_102 = { reinterpret_cast<intptr_t> (SByte_t1669577662_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_103 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_102, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_101) == ((RuntimeObject*)(Type_t *)L_103))))
		{
			goto IL_018c;
		}
	}
	{
		Type_t * L_104 = ___type21;
		return L_104;
	}

IL_018c:
	{
		Type_t * L_105 = ___type10;
		Type_t * L_106 = ___type21;
		bool L_107 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_105, L_106);
		if (!L_107)
		{
			goto IL_0197;
		}
	}
	{
		Type_t * L_108 = ___type10;
		return L_108;
	}

IL_0197:
	{
		Type_t * L_109 = ___type21;
		Type_t * L_110 = ___type10;
		bool L_111 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_110);
		if (!L_111)
		{
			goto IL_01a2;
		}
	}
	{
		Type_t * L_112 = ___type21;
		return L_112;
	}

IL_01a2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		Type_t * L_113 = ((TypeHelper_t3432996546_StaticFields*)il2cpp_codegen_static_fields_for(TypeHelper_t3432996546_il2cpp_TypeInfo_var))->get_NonmatchingType_0();
		return L_113;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeHelper::IsNumeric(System.Type)
extern "C"  bool TypeHelper_IsNumeric_m3844235642 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeHelper_IsNumeric_m3844235642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_3 = ___type0;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_6 = ___type0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_9 = ___type0;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_9) == ((RuntimeObject*)(Type_t *)L_11)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_12 = ___type0;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_15 = ___type0;
		RuntimeTypeHandle_t3027515415  L_16 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_15) == ((RuntimeObject*)(Type_t *)L_17)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_18 = ___type0;
		RuntimeTypeHandle_t3027515415  L_19 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_21 = ___type0;
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_21) == ((RuntimeObject*)(Type_t *)L_23)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_24 = ___type0;
		RuntimeTypeHandle_t3027515415  L_25 = { reinterpret_cast<intptr_t> (UInt16_t2177724958_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_27 = ___type0;
		RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (Byte_t1134296376_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_27) == ((RuntimeObject*)(Type_t *)L_29)))
		{
			goto IL_0093;
		}
	}
	{
		Type_t * L_30 = ___type0;
		RuntimeTypeHandle_t3027515415  L_31 = { reinterpret_cast<intptr_t> (SByte_t1669577662_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
	}

IL_0093:
	{
		return (bool)1;
	}
}
// System.Void NUnit.Framework.Internal.TypeHelper::ConvertArgumentList(System.Object[],NUnit.Framework.Interfaces.IParameterInfo[])
extern "C"  void TypeHelper_ConvertArgumentList_m3559123215 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___arglist0, IParameterInfoU5BU5D_t2245635530* ___parameters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeHelper_ConvertArgumentList_m3559123215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Type_t * V_2 = NULL;
	Type_t * V_3 = NULL;
	bool V_4 = false;
	int32_t G_B15_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B27_0 = 0;
	{
		V_0 = 0;
		goto IL_0111;
	}

IL_0007:
	{
		ObjectU5BU5D_t2843939325* L_0 = ___arglist0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_010d;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_5, IConvertible_t2977365677_il2cpp_TypeInfo_var)))
		{
			goto IL_010d;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		Type_t * L_7 = Object_GetType_m88164663(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		IParameterInfoU5BU5D_t2245635530* L_8 = ___parameters1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Type_t * L_12 = InterfaceFuncInvoker0< Type_t * >::Invoke(1 /* System.Type NUnit.Framework.Interfaces.IParameterInfo::get_ParameterType() */, IParameterInfo_t3586517291_il2cpp_TypeInfo_var, L_11);
		V_3 = L_12;
		V_4 = (bool)0;
		Type_t * L_13 = V_2;
		Type_t * L_14 = V_3;
		if ((((RuntimeObject*)(Type_t *)L_13) == ((RuntimeObject*)(Type_t *)L_14)))
		{
			goto IL_00fa;
		}
	}
	{
		Type_t * L_15 = V_2;
		Type_t * L_16 = V_3;
		bool L_17 = VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_16);
		if (L_17)
		{
			goto IL_00fa;
		}
	}
	{
		Type_t * L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		bool L_19 = TypeHelper_IsNumeric_m3844235642(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00fa;
		}
	}
	{
		Type_t * L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		bool L_21 = TypeHelper_IsNumeric_m3844235642(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00fa;
		}
	}
	{
		Type_t * L_22 = V_3;
		RuntimeTypeHandle_t3027515415  L_23 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_24 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_22) == ((RuntimeObject*)(Type_t *)L_24)))
		{
			goto IL_0072;
		}
	}
	{
		Type_t * L_25 = V_3;
		RuntimeTypeHandle_t3027515415  L_26 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_25) == ((RuntimeObject*)(Type_t *)L_27))))
		{
			goto IL_00a2;
		}
	}

IL_0072:
	{
		RuntimeObject * L_28 = V_1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_28, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject * L_29 = V_1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_29, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject * L_30 = V_1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_30, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject * L_31 = V_1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_31, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject * L_32 = V_1;
		G_B15_0 = ((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_32, SByte_t1669577662_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B15_0 = 1;
	}

IL_009e:
	{
		V_4 = (bool)G_B15_0;
		goto IL_00fa;
	}

IL_00a2:
	{
		Type_t * L_33 = V_3;
		RuntimeTypeHandle_t3027515415  L_34 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_33) == ((RuntimeObject*)(Type_t *)L_35))))
		{
			goto IL_00d7;
		}
	}
	{
		RuntimeObject * L_36 = V_1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_36, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_00d2;
		}
	}
	{
		RuntimeObject * L_37 = V_1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_37, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_00d2;
		}
	}
	{
		RuntimeObject * L_38 = V_1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_38, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_00d2;
		}
	}
	{
		RuntimeObject * L_39 = V_1;
		G_B22_0 = ((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_39, SByte_t1669577662_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B22_0 = 1;
	}

IL_00d3:
	{
		V_4 = (bool)G_B22_0;
		goto IL_00fa;
	}

IL_00d7:
	{
		Type_t * L_40 = V_3;
		RuntimeTypeHandle_t3027515415  L_41 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_42 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_40) == ((RuntimeObject*)(Type_t *)L_42))))
		{
			goto IL_00fa;
		}
	}
	{
		RuntimeObject * L_43 = V_1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_43, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_00f7;
		}
	}
	{
		RuntimeObject * L_44 = V_1;
		G_B27_0 = ((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_44, SByte_t1669577662_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_00f8;
	}

IL_00f7:
	{
		G_B27_0 = 1;
	}

IL_00f8:
	{
		V_4 = (bool)G_B27_0;
	}

IL_00fa:
	{
		bool L_45 = V_4;
		if (!L_45)
		{
			goto IL_010d;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_46 = ___arglist0;
		int32_t L_47 = V_0;
		RuntimeObject * L_48 = V_1;
		Type_t * L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_50 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_51 = Convert_ChangeType_m827193029(NULL /*static, unused*/, L_48, L_49, L_50, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_46, L_51);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47), (RuntimeObject *)L_51);
	}

IL_010d:
	{
		int32_t L_52 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_0111:
	{
		int32_t L_53 = V_0;
		ObjectU5BU5D_t2843939325* L_54 = ___arglist0;
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeHelper::CanDeduceTypeArgsFromArgs(System.Type,System.Object[],System.Type[]&)
extern "C"  bool TypeHelper_CanDeduceTypeArgsFromArgs_m1059071319 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t2843939325* ___arglist1, TypeU5BU5D_t3940880105** ___typeArgsOut2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeHelper_CanDeduceTypeArgsFromArgs_m1059071319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t3940880105* V_0 = NULL;
	ConstructorInfoU5BU5D_t881249896* V_1 = NULL;
	int32_t V_2 = 0;
	ParameterInfoU5BU5D_t390618515* V_3 = NULL;
	TypeU5BU5D_t3940880105* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Type_t * L_0 = ___type0;
		TypeU5BU5D_t3940880105* L_1 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(86 /* System.Type[] System.Type::GetGenericArguments() */, L_0);
		V_0 = L_1;
		Type_t * L_2 = ___type0;
		ConstructorInfoU5BU5D_t881249896* L_3 = Type_GetConstructors_m1172352582(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_00a6;
	}

IL_0015:
	{
		ConstructorInfoU5BU5D_t881249896* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ConstructorInfo_t5769829 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ParameterInfoU5BU5D_t390618515* L_8 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_3 = L_8;
		ParameterInfoU5BU5D_t390618515* L_9 = V_3;
		ObjectU5BU5D_t2843939325* L_10 = ___arglist1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))))))
		{
			goto IL_00a2;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_11 = V_0;
		V_4 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))))));
		V_5 = 0;
		goto IL_0090;
	}

IL_0035:
	{
		V_6 = 0;
		goto IL_0077;
	}

IL_003a:
	{
		TypeU5BU5D_t3940880105* L_12 = V_0;
		int32_t L_13 = V_5;
		int32_t L_14 = L_13;
		Type_t * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16 = VirtFuncInvoker0< bool >::Invoke(92 /* System.Boolean System.Type::get_IsGenericParameter() */, L_15);
		if (L_16)
		{
			goto IL_0059;
		}
	}
	{
		ParameterInfoU5BU5D_t390618515* L_17 = V_3;
		int32_t L_18 = V_6;
		int32_t L_19 = L_18;
		ParameterInfo_t1861056598 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Type_t * L_21 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		TypeU5BU5D_t3940880105* L_22 = V_0;
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		Type_t * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		bool L_26 = Type_Equals_m709225487(L_21, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0071;
		}
	}

IL_0059:
	{
		TypeU5BU5D_t3940880105* L_27 = V_4;
		int32_t L_28 = V_5;
		TypeU5BU5D_t3940880105* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		Type_t * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		ObjectU5BU5D_t2843939325* L_33 = ___arglist1;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Type_t * L_37 = Object_GetType_m88164663(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		Type_t * L_38 = TypeHelper_BestCommonType_m1103720624(NULL /*static, unused*/, L_32, L_37, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_27, L_38);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (Type_t *)L_38);
	}

IL_0071:
	{
		int32_t L_39 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_0077:
	{
		int32_t L_40 = V_6;
		ObjectU5BU5D_t2843939325* L_41 = ___arglist1;
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_003a;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_42 = V_4;
		int32_t L_43 = V_5;
		int32_t L_44 = L_43;
		Type_t * L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		if (L_45)
		{
			goto IL_008a;
		}
	}
	{
		V_4 = (TypeU5BU5D_t3940880105*)NULL;
		goto IL_0098;
	}

IL_008a:
	{
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_0090:
	{
		int32_t L_47 = V_5;
		TypeU5BU5D_t3940880105* L_48 = V_4;
		if ((((int32_t)L_47) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length)))))))
		{
			goto IL_0035;
		}
	}

IL_0098:
	{
		TypeU5BU5D_t3940880105* L_49 = V_4;
		if (!L_49)
		{
			goto IL_00a2;
		}
	}
	{
		TypeU5BU5D_t3940880105** L_50 = ___typeArgsOut2;
		TypeU5BU5D_t3940880105* L_51 = V_4;
		*((RuntimeObject **)(L_50)) = (RuntimeObject *)L_51;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_50), (RuntimeObject *)L_51);
		return (bool)1;
	}

IL_00a2:
	{
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00a6:
	{
		int32_t L_53 = V_2;
		ConstructorInfoU5BU5D_t881249896* L_54 = V_1;
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void NUnit.Framework.Internal.TypeHelper::.cctor()
extern "C"  void TypeHelper__cctor_m3452955103 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeHelper__cctor_m3452955103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (NonmatchingTypeClass_t4260389265_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((TypeHelper_t3432996546_StaticFields*)il2cpp_codegen_static_fields_for(TypeHelper_t3432996546_il2cpp_TypeInfo_var))->set_NonmatchingType_0(L_1);
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
// System.Void NUnit.Framework.Internal.TypeWrapper::.ctor(System.Type)
extern "C"  void TypeWrapper__ctor_m3863500962 (TypeWrapper_t1570625984 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeWrapper__ctor_m3863500962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type0;
		Guard_ArgumentNotNull_m3776938452(NULL /*static, unused*/, L_0, _stringLiteral3243520198, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		TypeWrapper_set_Type_m3426937712(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Type NUnit.Framework.Internal.TypeWrapper::get_Type()
extern "C"  Type_t * TypeWrapper_get_Type_m2058956209 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void NUnit.Framework.Internal.TypeWrapper::set_Type(System.Type)
extern "C"  void TypeWrapper_set_Type_m3426937712 (TypeWrapper_t1570625984 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// NUnit.Framework.Interfaces.ITypeInfo NUnit.Framework.Internal.TypeWrapper::get_BaseType()
extern "C"  RuntimeObject* TypeWrapper_get_BaseType_m1524554082 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeWrapper_get_BaseType_m1524554082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_1);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0016:
	{
		Type_t * L_4 = V_0;
		TypeWrapper_t1570625984 * L_5 = (TypeWrapper_t1570625984 *)il2cpp_codegen_object_new(TypeWrapper_t1570625984_il2cpp_TypeInfo_var);
		TypeWrapper__ctor_m3863500962(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String NUnit.Framework.Internal.TypeWrapper::get_FullName()
extern "C"  String_t* TypeWrapper_get_FullName_m2882235263 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_0);
		return L_1;
	}
}
// System.Reflection.Assembly NUnit.Framework.Internal.TypeWrapper::get_Assembly()
extern "C"  Assembly_t * TypeWrapper_get_Assembly_m595874275 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Assembly_t * L_2 = VirtFuncInvoker0< Assembly_t * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_1);
		return L_2;
	}
}
// System.String NUnit.Framework.Internal.TypeWrapper::get_Namespace()
extern "C"  String_t* TypeWrapper_get_Namespace_m3391841846 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_0);
		return L_1;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper::get_IsAbstract()
extern "C"  bool TypeWrapper_get_IsAbstract_m1998430853 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Type_get_IsAbstract_m1120089130(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper::get_IsGenericType()
extern "C"  bool TypeWrapper_get_IsGenericType_m1661931710 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(90 /* System.Boolean System.Type::get_IsGenericType() */, L_1);
		return L_2;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper::IsType(System.Type)
extern "C"  bool TypeWrapper_IsType_m3743606427 (TypeWrapper_t1570625984 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		return (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_1))? 1 : 0);
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper::get_ContainsGenericParameters()
extern "C"  bool TypeWrapper_get_ContainsGenericParameters_m4283723467 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_1);
		return L_2;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper::get_IsGenericTypeDefinition()
extern "C"  bool TypeWrapper_get_IsGenericTypeDefinition_m982392887 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(88 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_1);
		return L_2;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper::get_IsSealed()
extern "C"  bool TypeWrapper_get_IsSealed_m3981990547 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Type_get_IsSealed_m3543837727(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper::get_IsStaticClass()
extern "C"  bool TypeWrapper_get_IsStaticClass_m2561019137 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Type_get_IsSealed_m3543837727(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_3 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_4 = TypeExtensions_GetTypeInfo_m2859982239(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_5 = Type_get_IsAbstract_m1120089130(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.String NUnit.Framework.Internal.TypeWrapper::GetDisplayName()
extern "C"  String_t* TypeWrapper_GetDisplayName_m1896113295 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeWrapper_GetDisplayName_m1896113295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		String_t* L_1 = TypeHelper_GetDisplayName_m1582185031(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String NUnit.Framework.Internal.TypeWrapper::GetDisplayName(System.Object[])
extern "C"  String_t* TypeWrapper_GetDisplayName_m1963618838 (TypeWrapper_t1570625984 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeWrapper_GetDisplayName_m1963618838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ___args0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeHelper_t3432996546_il2cpp_TypeInfo_var);
		String_t* L_2 = TypeHelper_GetDisplayName_m742861752(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// NUnit.Framework.Interfaces.ITypeInfo NUnit.Framework.Internal.TypeWrapper::MakeGenericType(System.Type[])
extern "C"  RuntimeObject* TypeWrapper_MakeGenericType_m1965119895 (TypeWrapper_t1570625984 * __this, TypeU5BU5D_t3940880105* ___typeArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeWrapper_MakeGenericType_m1965119895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		TypeU5BU5D_t3940880105* L_1 = ___typeArgs0;
		Type_t * L_2 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t3940880105* >::Invoke(91 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_0, L_1);
		TypeWrapper_t1570625984 * L_3 = (TypeWrapper_t1570625984 *)il2cpp_codegen_object_new(TypeWrapper_t1570625984_il2cpp_TypeInfo_var);
		TypeWrapper__ctor_m3863500962(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Type NUnit.Framework.Internal.TypeWrapper::GetGenericTypeDefinition()
extern "C"  Type_t * TypeWrapper_GetGenericTypeDefinition_m1567166319 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(89 /* System.Type System.Type::GetGenericTypeDefinition() */, L_0);
		return L_1;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper::HasMethodWithAttribute(System.Type)
extern "C"  bool TypeWrapper_HasMethodWithAttribute_m3825086047 (TypeWrapper_t1570625984 * __this, Type_t * ___attributeType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeWrapper_HasMethodWithAttribute_m3825086047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___attributeType0;
		IL2CPP_RUNTIME_CLASS_INIT(Reflect_t1986382923_il2cpp_TypeInfo_var);
		bool L_2 = Reflect_HasMethodWithAttribute_m1348416161(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// NUnit.Framework.Interfaces.IMethodInfo[] NUnit.Framework.Internal.TypeWrapper::GetMethods(System.Reflection.BindingFlags)
extern "C"  IMethodInfoU5BU5D_t578659627* TypeWrapper_GetMethods_m1838899308 (TypeWrapper_t1570625984 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeWrapper_GetMethods_m1838899308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_t2572182361* V_0 = NULL;
	MethodWrapperU5BU5D_t1170775172* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___flags0;
		MethodInfoU5BU5D_t2572182361* L_2 = VirtFuncInvoker1< MethodInfoU5BU5D_t2572182361*, int32_t >::Invoke(61 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, L_1);
		V_0 = L_2;
		MethodInfoU5BU5D_t2572182361* L_3 = V_0;
		V_1 = ((MethodWrapperU5BU5D_t1170775172*)SZArrayNew(MethodWrapperU5BU5D_t1170775172_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))));
		V_2 = 0;
		goto IL_002f;
	}

IL_001a:
	{
		MethodWrapperU5BU5D_t1170775172* L_4 = V_1;
		int32_t L_5 = V_2;
		Type_t * L_6 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		MethodInfoU5BU5D_t2572182361* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		MethodInfo_t * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		MethodWrapper_t2578635129 * L_11 = (MethodWrapper_t2578635129 *)il2cpp_codegen_object_new(MethodWrapper_t2578635129_il2cpp_TypeInfo_var);
		MethodWrapper__ctor_m21071588(L_11, L_6, L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_11);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (MethodWrapper_t2578635129 *)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_13 = V_2;
		MethodInfoU5BU5D_t2572182361* L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		MethodWrapperU5BU5D_t1170775172* L_15 = V_1;
		return (IMethodInfoU5BU5D_t578659627*)L_15;
	}
}
// System.Reflection.ConstructorInfo NUnit.Framework.Internal.TypeWrapper::GetConstructor(System.Type[])
extern "C"  ConstructorInfo_t5769829 * TypeWrapper_GetConstructor_m64218867 (TypeWrapper_t1570625984 * __this, TypeU5BU5D_t3940880105* ___argTypes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeWrapper_GetConstructor_m64218867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass36_0_t4213619634 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass36_0_t4213619634 * L_0 = (U3CU3Ec__DisplayClass36_0_t4213619634 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass36_0_t4213619634_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass36_0__ctor_m1198718135(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass36_0_t4213619634 * L_1 = V_0;
		TypeU5BU5D_t3940880105* L_2 = ___argTypes0;
		L_1->set_argTypes_0(L_2);
		Type_t * L_3 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		ConstructorInfoU5BU5D_t881249896* L_4 = Type_GetConstructors_m1172352582(L_3, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass36_0_t4213619634 * L_5 = V_0;
		intptr_t L_6 = (intptr_t)U3CU3Ec__DisplayClass36_0_U3CGetConstructorU3Eb__0_m2369305163_RuntimeMethod_var;
		Func_2_t1796590042 * L_7 = (Func_2_t1796590042 *)il2cpp_codegen_object_new(Func_2_t1796590042_il2cpp_TypeInfo_var);
		Func_2__ctor_m973664881(L_7, L_5, L_6, /*hidden argument*/Func_2__ctor_m973664881_RuntimeMethod_var);
		RuntimeObject* L_8 = Enumerable_Where_TisConstructorInfo_t5769829_m2426976016(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_4, L_7, /*hidden argument*/Enumerable_Where_TisConstructorInfo_t5769829_m2426976016_RuntimeMethod_var);
		ConstructorInfo_t5769829 * L_9 = Enumerable_FirstOrDefault_TisConstructorInfo_t5769829_m3168633260(NULL /*static, unused*/, L_8, /*hidden argument*/Enumerable_FirstOrDefault_TisConstructorInfo_t5769829_m3168633260_RuntimeMethod_var);
		return L_9;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper::HasConstructor(System.Type[])
extern "C"  bool TypeWrapper_HasConstructor_m4292317458 (TypeWrapper_t1570625984 * __this, TypeU5BU5D_t3940880105* ___argTypes0, const RuntimeMethod* method)
{
	{
		TypeU5BU5D_t3940880105* L_0 = ___argTypes0;
		ConstructorInfo_t5769829 * L_1 = TypeWrapper_GetConstructor_m64218867(__this, L_0, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(ConstructorInfo_t5769829 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Object NUnit.Framework.Internal.TypeWrapper::Construct(System.Object[])
extern "C"  RuntimeObject * TypeWrapper_Construct_m545675185 (TypeWrapper_t1570625984 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeWrapper_Construct_m545675185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ___args0;
		IL2CPP_RUNTIME_CLASS_INIT(Reflect_t1986382923_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = Reflect_Construct_m2709419787(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String NUnit.Framework.Internal.TypeWrapper::ToString()
extern "C"  String_t* TypeWrapper_ToString_m3041749056 (TypeWrapper_t1570625984 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = TypeWrapper_get_Type_m2058956209(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass36_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass36_0__ctor_m1198718135 (U3CU3Ec__DisplayClass36_0_t4213619634 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass36_0::<GetConstructor>b__0(System.Reflection.ConstructorInfo)
extern "C"  bool U3CU3Ec__DisplayClass36_0_U3CGetConstructorU3Eb__0_m2369305163 (U3CU3Ec__DisplayClass36_0_t4213619634 * __this, ConstructorInfo_t5769829 * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass36_0_U3CGetConstructorU3Eb__0_m2369305163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t5769829 * L_0 = ___c0;
		ParameterInfoU5BU5D_t390618515* L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		TypeU5BU5D_t3940880105* L_2 = __this->get_argTypes_0();
		IL2CPP_RUNTIME_CLASS_INIT(AdditionalTypeExtensions_t2272335955_il2cpp_TypeInfo_var);
		bool L_3 = AdditionalTypeExtensions_ParametersMatch_m229967561(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
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
// NUnit.Framework.Constraints.TrueConstraint NUnit.Framework.Is::get_True()
extern "C"  TrueConstraint_t293028705 * Is_get_True_m309691603 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Is_get_True_m309691603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrueConstraint_t293028705 * L_0 = (TrueConstraint_t293028705 *)il2cpp_codegen_object_new(TrueConstraint_t293028705_il2cpp_TypeInfo_var);
		TrueConstraint__ctor_m2553953527(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// NUnit.Framework.Constraints.FalseConstraint NUnit.Framework.Is::get_False()
extern "C"  FalseConstraint_t3043866582 * Is_get_False_m1618499435 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Is_get_False_m1618499435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FalseConstraint_t3043866582 * L_0 = (FalseConstraint_t3043866582 *)il2cpp_codegen_object_new(FalseConstraint_t3043866582_il2cpp_TypeInfo_var);
		FalseConstraint__ctor_m699325128(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// NUnit.Framework.Constraints.EqualConstraint NUnit.Framework.Is::EqualTo(System.Object)
extern "C"  EqualConstraint_t520268896 * Is_EqualTo_m3778559934 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___expected0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Is_EqualTo_m3778559934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___expected0;
		EqualConstraint_t520268896 * L_1 = (EqualConstraint_t520268896 *)il2cpp_codegen_object_new(EqualConstraint_t520268896_il2cpp_TypeInfo_var);
		EqualConstraint__ctor_m1971592962(L_1, L_0, /*hidden argument*/NULL);
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
// System.Void NUnit.Framework.NUnitAttribute::.ctor()
extern "C"  void NUnitAttribute__ctor_m2936849764 (NUnitAttribute_t565614204 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void NUnit.Framework.ResultStateException::.ctor(System.String)
extern "C"  void ResultStateException__ctor_m3496704757 (ResultStateException_t446384429 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.ResultStateException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ResultStateException__ctor_m657238684 (ResultStateException_t446384429 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		Exception__ctor_m2499432361(__this, L_0, L_1, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IO.TextWriter NUnit.Framework.TestContext::get_Out()
extern "C"  TextWriter_t3478189236 * TestContext_get_Out_m504092258 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestContext_get_Out_m504092258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TestExecutionContext_t999030305_il2cpp_TypeInfo_var);
		TestExecutionContext_t999030305 * L_0 = TestExecutionContext_get_CurrentContext_m2636608722(NULL /*static, unused*/, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_1 = TestExecutionContext_get_OutWriter_m585599673(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void NUnit.Framework.TestContext::.cctor()
extern "C"  void TestContext__cctor_m3993401982 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestContext__cctor_m3993401982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		TextWriter_t3478189236 * L_0 = Console_get_Error_m1839879495(NULL /*static, unused*/, /*hidden argument*/NULL);
		EventListenerTextWriter_t1736808679 * L_1 = (EventListenerTextWriter_t1736808679 *)il2cpp_codegen_object_new(EventListenerTextWriter_t1736808679_il2cpp_TypeInfo_var);
		EventListenerTextWriter__ctor_m3833339324(L_1, _stringLiteral95344243, L_0, /*hidden argument*/NULL);
		((TestContext_t2339225140_StaticFields*)il2cpp_codegen_static_fields_for(TestContext_t2339225140_il2cpp_TypeInfo_var))->set_Error_0(L_1);
		TextWriter_t3478189236 * L_2 = Console_get_Error_m1839879495(NULL /*static, unused*/, /*hidden argument*/NULL);
		EventListenerTextWriter_t1736808679 * L_3 = (EventListenerTextWriter_t1736808679 *)il2cpp_codegen_object_new(EventListenerTextWriter_t1736808679_il2cpp_TypeInfo_var);
		EventListenerTextWriter__ctor_m3833339324(L_3, _stringLiteral2322234016, L_2, /*hidden argument*/NULL);
		((TestContext_t2339225140_StaticFields*)il2cpp_codegen_static_fields_for(TestContext_t2339225140_il2cpp_TypeInfo_var))->set_Progress_1(L_3);
		TestParameters_t2765012299 * L_4 = (TestParameters_t2765012299 *)il2cpp_codegen_object_new(TestParameters_t2765012299_il2cpp_TypeInfo_var);
		TestParameters__ctor_m2688514816(L_4, /*hidden argument*/NULL);
		((TestContext_t2339225140_StaticFields*)il2cpp_codegen_static_fields_for(TestContext_t2339225140_il2cpp_TypeInfo_var))->set_Parameters_2(L_4);
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
// NUnit.Framework.Interfaces.RunState NUnit.Framework.TestFixtureAttribute::get_RunState()
extern "C"  int32_t TestFixtureAttribute_get_RunState_m3144409558 (TestFixtureAttribute_t3158426996 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CRunStateU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Object[] NUnit.Framework.TestFixtureAttribute::get_Arguments()
extern "C"  ObjectU5BU5D_t2843939325* TestFixtureAttribute_get_Arguments_m998330916 (TestFixtureAttribute_t3158426996 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = __this->get_U3CArgumentsU3Ek__BackingField_2();
		return L_0;
	}
}
// NUnit.Framework.Interfaces.IPropertyBag NUnit.Framework.TestFixtureAttribute::get_Properties()
extern "C"  RuntimeObject* TestFixtureAttribute_get_Properties_m3555619435 (TestFixtureAttribute_t3158426996 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CPropertiesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Type[] NUnit.Framework.TestFixtureAttribute::get_TypeArgs()
extern "C"  TypeU5BU5D_t3940880105* TestFixtureAttribute_get_TypeArgs_m3599447291 (TestFixtureAttribute_t3158426996 * __this, const RuntimeMethod* method)
{
	{
		TypeU5BU5D_t3940880105* L_0 = __this->get_U3CTypeArgsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestSuite> NUnit.Framework.TestFixtureAttribute::BuildFrom(NUnit.Framework.Interfaces.ITypeInfo)
extern "C"  RuntimeObject* TestFixtureAttribute_BuildFrom_m3972695401 (TestFixtureAttribute_t3158426996 * __this, RuntimeObject* ___typeInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestFixtureAttribute_BuildFrom_m3972695401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBuildFromU3Ed__48_t3791848287 * L_0 = (U3CBuildFromU3Ed__48_t3791848287 *)il2cpp_codegen_object_new(U3CBuildFromU3Ed__48_t3791848287_il2cpp_TypeInfo_var);
		U3CBuildFromU3Ed__48__ctor_m4260323252(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CBuildFromU3Ed__48_t3791848287 * L_1 = L_0;
		L_1->set_U3CU3E4__this_3(__this);
		U3CBuildFromU3Ed__48_t3791848287 * L_2 = L_1;
		RuntimeObject* L_3 = ___typeInfo0;
		L_2->set_U3CU3E3__typeInfo_5(L_3);
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
// System.Void NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::.ctor(System.Int32)
extern "C"  void U3CBuildFromU3Ed__48__ctor_m4260323252 (U3CBuildFromU3Ed__48_t3791848287 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBuildFromU3Ed__48__ctor_m4260323252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_t2300836069 * L_1 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Thread_get_ManagedThreadId_m1068113671(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::System.IDisposable.Dispose()
extern "C"  void U3CBuildFromU3Ed__48_System_IDisposable_Dispose_m602668886 (U3CBuildFromU3Ed__48_t3791848287 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::MoveNext()
extern "C"  bool U3CBuildFromU3Ed__48_MoveNext_m726935348 (U3CBuildFromU3Ed__48_t3791848287 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		TestFixtureAttribute_t3158426996 * L_3 = __this->get_U3CU3E4__this_3();
		NUnitTestFixtureBuilder_t3046604762 * L_4 = L_3->get__builder_0();
		RuntimeObject* L_5 = __this->get_typeInfo_4();
		TestFixtureAttribute_t3158426996 * L_6 = __this->get_U3CU3E4__this_3();
		TestSuite_t407774568 * L_7 = NUnitTestFixtureBuilder_BuildFrom_m2098969236(L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		return (bool)0;
	}
}
// NUnit.Framework.Internal.TestSuite NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::System.Collections.Generic.IEnumerator<NUnit.Framework.Internal.TestSuite>.get_Current()
extern "C"  TestSuite_t407774568 * U3CBuildFromU3Ed__48_System_Collections_Generic_IEnumeratorU3CNUnit_Framework_Internal_TestSuiteU3E_get_Current_m1687892704 (U3CBuildFromU3Ed__48_t3791848287 * __this, const RuntimeMethod* method)
{
	{
		TestSuite_t407774568 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::System.Collections.IEnumerator.Reset()
extern "C"  void U3CBuildFromU3Ed__48_System_Collections_IEnumerator_Reset_m162458811 (U3CBuildFromU3Ed__48_t3791848287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBuildFromU3Ed__48_System_Collections_IEnumerator_Reset_m162458811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Object NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CBuildFromU3Ed__48_System_Collections_IEnumerator_get_Current_m2902998365 (U3CBuildFromU3Ed__48_t3791848287 * __this, const RuntimeMethod* method)
{
	{
		TestSuite_t407774568 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<NUnit.Framework.Internal.TestSuite> NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::System.Collections.Generic.IEnumerable<NUnit.Framework.Internal.TestSuite>.GetEnumerator()
extern "C"  RuntimeObject* U3CBuildFromU3Ed__48_System_Collections_Generic_IEnumerableU3CNUnit_Framework_Internal_TestSuiteU3E_GetEnumerator_m3643769215 (U3CBuildFromU3Ed__48_t3791848287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBuildFromU3Ed__48_System_Collections_Generic_IEnumerableU3CNUnit_Framework_Internal_TestSuiteU3E_GetEnumerator_m3643769215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CBuildFromU3Ed__48_t3791848287 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_t2300836069 * L_2 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Thread_get_ManagedThreadId_m1068113671(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_003a;
	}

IL_0027:
	{
		U3CBuildFromU3Ed__48_t3791848287 * L_4 = (U3CBuildFromU3Ed__48_t3791848287 *)il2cpp_codegen_object_new(U3CBuildFromU3Ed__48_t3791848287_il2cpp_TypeInfo_var);
		U3CBuildFromU3Ed__48__ctor_m4260323252(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		U3CBuildFromU3Ed__48_t3791848287 * L_5 = V_0;
		TestFixtureAttribute_t3158426996 * L_6 = __this->get_U3CU3E4__this_3();
		L_5->set_U3CU3E4__this_3(L_6);
	}

IL_003a:
	{
		U3CBuildFromU3Ed__48_t3791848287 * L_7 = V_0;
		RuntimeObject* L_8 = __this->get_U3CU3E3__typeInfo_5();
		L_7->set_typeInfo_4(L_8);
		U3CBuildFromU3Ed__48_t3791848287 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CBuildFromU3Ed__48_System_Collections_IEnumerable_GetEnumerator_m648184482 (U3CBuildFromU3Ed__48_t3791848287 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CBuildFromU3Ed__48_System_Collections_Generic_IEnumerableU3CNUnit_Framework_Internal_TestSuiteU3E_GetEnumerator_m3643769215(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void NUnit.Framework.TestParameters::Add(System.String,System.String)
extern "C"  void TestParameters_Add_m596377831 (TestParameters_t2765012299 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestParameters_Add_m596377831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1632706988 * L_0 = __this->get__parameters_1();
		String_t* L_1 = ___name0;
		String_t* L_2 = ___value1;
		Dictionary_2_set_Item_m2307670220(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m2307670220_RuntimeMethod_var);
		return;
	}
}
// System.IFormatProvider NUnit.Framework.TestParameters::CreateModifiedInvariantCulture()
extern "C"  RuntimeObject* TestParameters_CreateModifiedInvariantCulture_m1122814966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestParameters_CreateModifiedInvariantCulture_m1122814966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject * L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(10 /* System.Object System.Globalization.CultureInfo::Clone() */, L_0);
		CultureInfo_t4157843068 * L_2 = ((CultureInfo_t4157843068 *)CastclassClass((RuntimeObject*)L_1, CultureInfo_t4157843068_il2cpp_TypeInfo_var));
		NumberFormatInfo_t435877138 * L_3 = VirtFuncInvoker0< NumberFormatInfo_t435877138 * >::Invoke(13 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NumberFormatInfo_set_CurrencyGroupSeparator_m3331888699(L_3, L_4, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_5 = L_2;
		NumberFormatInfo_t435877138 * L_6 = VirtFuncInvoker0< NumberFormatInfo_t435877138 * >::Invoke(13 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_5);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NumberFormatInfo_set_NumberGroupSeparator_m1953697724(L_6, L_7, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_8 = L_5;
		NumberFormatInfo_t435877138 * L_9 = VirtFuncInvoker0< NumberFormatInfo_t435877138 * >::Invoke(13 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_8);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NumberFormatInfo_set_PercentGroupSeparator_m693199726(L_9, L_10, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void NUnit.Framework.TestParameters::.ctor()
extern "C"  void TestParameters__ctor_m2688514816 (TestParameters_t2765012299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestParameters__ctor_m2688514816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1632706988 * L_0 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m609215832(L_0, /*hidden argument*/Dictionary_2__ctor_m609215832_RuntimeMethod_var);
		__this->set__parameters_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NUnit.Framework.TestParameters::.cctor()
extern "C"  void TestParameters__cctor_m3216561529 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestParameters__cctor_m3216561529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = TestParameters_CreateModifiedInvariantCulture_m1122814966(NULL /*static, unused*/, /*hidden argument*/NULL);
		((TestParameters_t2765012299_StaticFields*)il2cpp_codegen_static_fields_for(TestParameters_t2765012299_il2cpp_TypeInfo_var))->set_MODIFIED_INVARIANT_CULTURE_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
