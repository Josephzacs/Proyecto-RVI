#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>
struct ConcurrentDictionary_2_t421F761E5F7000F25374ACA7F13932BC7DAD49EA;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>
struct Func_2_t54E7AF2F5CFB23D033ECC239ADED1EC348C9AED7;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_tFF82757E61ADB2F43ADCC4569ED37780CD25F77C;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Data.DataColumn>
struct List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Data.Common.NameValuePermission[]
struct NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Data.AutoIncrementValue
struct AutoIncrementValue_tB454D864DCB48A3C8EB2F806BD0AB284BB735BCE;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.BitArray
struct BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Security.CodeAccessPermission
struct CodeAccessPermission_t6BE947E3C453E05B6C9DC30B8FA33A29DEB5209A;
// System.Security.Permissions.CodeAccessSecurityAttribute
struct CodeAccessSecurityAttribute_tE7EEC93676A4CB9CEE9050F6CC2B97E1C2E210CE;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Data.Common.DBConnectionString
struct DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82;
// System.Data.Common.DBDataPermission
struct DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A;
// System.Data.Common.DBDataPermissionAttribute
struct DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725;
// System.Data.DataColumn
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66;
// System.Data.DataExpression
struct DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6;
// System.Data.Common.DataStorage
struct DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A;
// System.Data.DataTable
struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Data.Common.DbConnectionOptions
struct DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Security.IPermission
struct IPermission_t1FC61281490693550E8BDEE554C88F4EE7F847C6;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.Data.Index
struct Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Data.Common.NameValuePair
struct NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F;
// System.Data.Common.NameValuePermission
struct NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.Data.PropertyCollection
struct PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Security.Permissions.SecurityAttribute
struct SecurityAttribute_tB79F828B77F1B081DD57CEF810E748C7C871D7C5;
// System.Security.SecurityElement
struct SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55;
// System.Data.SimpleType
struct SimpleType_tE6F54AF1D35994BBDB2AEB808DB8C87AB7477D14;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Data.Common.TimeSpanStorage
struct TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14;
// System.Type
struct Type_t;
// System.Data.Common.UInt16Storage
struct UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1;
// System.Data.Common.UInt32Storage
struct UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B;
// System.Data.Common.UInt64Storage
struct UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPermission_t1FC61281490693550E8BDEE554C88F4EE7F847C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyRestrictionBehavior_t3D2C9B77D9CD24D8441F602B3AB7FFE19E3AAA82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1926C3CFEB3B0A6084B9763026648652299B0858;
IL2CPP_EXTERN_C String_t* _stringLiteral1AAEC8786694D721644DCA5D5D5E740198D0C59C;
IL2CPP_EXTERN_C String_t* _stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B6B1C228E98C5A6664BF09EA9662B2BB13942B3;
IL2CPP_EXTERN_C String_t* _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680;
IL2CPP_EXTERN_C String_t* _stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral72A8F3816115F6F9160426D7F1B9AE5674C90707;
IL2CPP_EXTERN_C String_t* _stringLiteral751CB4C664E67669AA66D427445B152FD37984CE;
IL2CPP_EXTERN_C String_t* _stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837;
IL2CPP_EXTERN_C String_t* _stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E;
IL2CPP_EXTERN_C String_t* _stringLiteral849859401F9633D6C558FAFFBA018F4718DAA666;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE56EEA1AAFBE6694486D93FE0133746BCF7E55FE;
IL2CPP_EXTERN_C String_t* _stringLiteralE669C2D0639CB3F15C0089688E07C7CB2FEDFC62;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFB5D1438C5AACE179CB023A8357BC0281DF38C52;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisNameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_mF7C6AA8D80C48AC6D6CE5EA192ABBBECD89F9180_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisString_t_m19EDD7ED2011551F14D2D35288ECB34DF95C8AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DBConnectionString_IsSupersetOf_mA14B48A0F03977B0F5DB13119AA29FF27A7597B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DBConnectionString_ParseRestrictions_mCAC7402B27FCECC54AE36C461EE427746AD46CFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DBConnectionString__ctor_m97E5D3649A2A768661DF2BF2B3B72B09D3C7188A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DBDataPermission_IsSubsetOf_mA28333E305C07257BFEF1F56D3076756EC0BB411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DBDataPermission_Union_mC8386E968B3661C649A6EFDB53572A3ECD473EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DBDataPermission__ctor_m154E797E8E46958EB831D3CECC7F3BCC0D0F9443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DBDataPermission__ctor_mBBA8C74591DF17A57D831E220A6C8C8C062EED5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DBDataPermission__ctor_mDC588D2D2D056400CB14E114C28AB170722A3BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbConnectionStringBuilderUtil_ConvertToString_mA608FF6CDDE6121C684FC933789629111EC5C164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeSpanStorage_Aggregate_m6D1CAACF0A1EE0578178DE6DFC4073A66D8B4613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.Collections.BitArray
struct BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616  : public RuntimeObject
{
	// System.Int32[] System.Collections.BitArray::m_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_array_0;
	// System.Int32 System.Collections.BitArray::m_length
	int32_t ___m_length_1;
	// System.Int32 System.Collections.BitArray::_version
	int32_t ____version_2;
	// System.Object System.Collections.BitArray::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t6BE947E3C453E05B6C9DC30B8FA33A29DEB5209A  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Data.Common.DBConnectionString
struct DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82  : public RuntimeObject
{
	// System.String System.Data.Common.DBConnectionString::_encryptedUsersConnectionString
	String_t* ____encryptedUsersConnectionString_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Data.Common.DBConnectionString::_parsetable
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____parsetable_1;
	// System.Data.Common.NameValuePair System.Data.Common.DBConnectionString::_keychain
	NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* ____keychain_2;
	// System.Boolean System.Data.Common.DBConnectionString::_hasPassword
	bool ____hasPassword_3;
	// System.String[] System.Data.Common.DBConnectionString::_restrictionValues
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____restrictionValues_4;
	// System.String System.Data.Common.DBConnectionString::_restrictions
	String_t* ____restrictions_5;
	// System.Data.KeyRestrictionBehavior System.Data.Common.DBConnectionString::_behavior
	int32_t ____behavior_6;
};

// System.Data.Common.DataStorage
struct DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A  : public RuntimeObject
{
	// System.Data.DataColumn System.Data.Common.DataStorage::_column
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column_1;
	// System.Data.DataTable System.Data.Common.DataStorage::_table
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ____table_2;
	// System.Type System.Data.Common.DataStorage::_dataType
	Type_t* ____dataType_3;
	// System.Data.Common.StorageType System.Data.Common.DataStorage::_storageTypeCode
	int32_t ____storageTypeCode_4;
	// System.Collections.BitArray System.Data.Common.DataStorage::_dbNullBits
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ____dbNullBits_5;
	// System.Object System.Data.Common.DataStorage::_defaultValue
	RuntimeObject* ____defaultValue_6;
	// System.Object System.Data.Common.DataStorage::_nullValue
	RuntimeObject* ____nullValue_7;
	// System.Boolean System.Data.Common.DataStorage::_isCloneable
	bool ____isCloneable_8;
	// System.Boolean System.Data.Common.DataStorage::_isCustomDefinedType
	bool ____isCustomDefinedType_9;
	// System.Boolean System.Data.Common.DataStorage::_isStringType
	bool ____isStringType_10;
	// System.Boolean System.Data.Common.DataStorage::_isValueType
	bool ____isValueType_11;
};

// System.Data.Common.DbConnectionOptions
struct DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25  : public RuntimeObject
{
	// System.String System.Data.Common.DbConnectionOptions::_usersConnectionString
	String_t* ____usersConnectionString_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Data.Common.DbConnectionOptions::_parsetable
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____parsetable_5;
	// System.Data.Common.NameValuePair System.Data.Common.DbConnectionOptions::_keyChain
	NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* ____keyChain_6;
	// System.Boolean System.Data.Common.DbConnectionOptions::_hasPasswordKeyword
	bool ____hasPasswordKeyword_7;
	// System.Boolean System.Data.Common.DbConnectionOptions::_useOdbcRules
	bool ____useOdbcRules_8;
	// System.Boolean System.Data.Common.DbConnectionOptions::_hasUserIdKeyword
	bool ____hasUserIdKeyword_9;
};

// System.Data.Common.DbConnectionStringBuilderUtil
struct DbConnectionStringBuilderUtil_tA06C8C2B61E6A190345271B4B2E2C965404530E0  : public RuntimeObject
{
};

// System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA  : public RuntimeObject
{
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::_site
	RuntimeObject* ____site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::_events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ____events_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Data.Common.NameValuePair
struct NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F  : public RuntimeObject
{
	// System.String System.Data.Common.NameValuePair::_name
	String_t* ____name_0;
	// System.String System.Data.Common.NameValuePair::_value
	String_t* ____value_1;
	// System.Int32 System.Data.Common.NameValuePair::_length
	int32_t ____length_2;
	// System.Data.Common.NameValuePair System.Data.Common.NameValuePair::_next
	NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* ____next_3;
};

// System.Data.Common.NameValuePermission
struct NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B  : public RuntimeObject
{
	// System.String System.Data.Common.NameValuePermission::_value
	String_t* ____value_0;
	// System.Data.Common.DBConnectionString System.Data.Common.NameValuePermission::_entry
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ____entry_1;
	// System.Data.Common.NameValuePermission[] System.Data.Common.NameValuePermission::_tree
	NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* ____tree_2;
};

// System.Security.SecurityElement
struct SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55  : public RuntimeObject
{
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___children_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Data.Common.DBDataPermission
struct DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A  : public CodeAccessPermission_t6BE947E3C453E05B6C9DC30B8FA33A29DEB5209A
{
	// System.Boolean System.Data.Common.DBDataPermission::_isUnrestricted
	bool ____isUnrestricted_0;
	// System.Boolean System.Data.Common.DBDataPermission::_allowBlankPassword
	bool ____allowBlankPassword_1;
	// System.Data.Common.NameValuePermission System.Data.Common.DBDataPermission::_keyvaluetree
	NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* ____keyvaluetree_2;
	// System.Collections.ArrayList System.Data.Common.DBDataPermission::_keyvalues
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____keyvalues_3;
};

// System.Data.DataColumn
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66  : public MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA
{
	// System.Boolean System.Data.DataColumn::_allowNull
	bool ____allowNull_3;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_4;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_5;
	// System.Type System.Data.DataColumn::_dataType
	Type_t* ____dataType_6;
	// System.Data.Common.StorageType System.Data.DataColumn::_storageType
	int32_t ____storageType_7;
	// System.Object System.Data.DataColumn::_defaultValue
	RuntimeObject* ____defaultValue_8;
	// System.Data.DataSetDateTime System.Data.DataColumn::_dateTimeMode
	int32_t ____dateTimeMode_9;
	// System.Data.DataExpression System.Data.DataColumn::_expression
	DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6* ____expression_10;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_11;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_12;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_13;
	// System.Data.Index System.Data.DataColumn::_sortIndex
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____sortIndex_14;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ____table_15;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_16;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_17;
	// System.Int32 System.Data.DataColumn::_hashCode
	int32_t ____hashCode_18;
	// System.Int32 System.Data.DataColumn::_errors
	int32_t ____errors_19;
	// System.Boolean System.Data.DataColumn::_isSqlType
	bool ____isSqlType_20;
	// System.Boolean System.Data.DataColumn::_implementsINullable
	bool ____implementsINullable_21;
	// System.Boolean System.Data.DataColumn::_implementsIChangeTracking
	bool ____implementsIChangeTracking_22;
	// System.Boolean System.Data.DataColumn::_implementsIRevertibleChangeTracking
	bool ____implementsIRevertibleChangeTracking_23;
	// System.Boolean System.Data.DataColumn::_implementsIXMLSerializable
	bool ____implementsIXMLSerializable_24;
	// System.Boolean System.Data.DataColumn::_defaultValueIsNull
	bool ____defaultValueIsNull_25;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataColumn::_dependentColumns
	List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785* ____dependentColumns_26;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C* ____extendedProperties_27;
	// System.Data.Common.DataStorage System.Data.DataColumn::_storage
	DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* ____storage_28;
	// System.Data.AutoIncrementValue System.Data.DataColumn::_autoInc
	AutoIncrementValue_tB454D864DCB48A3C8EB2F806BD0AB284BB735BCE* ____autoInc_29;
	// System.String System.Data.DataColumn::_columnUri
	String_t* ____columnUri_30;
	// System.String System.Data.DataColumn::_columnPrefix
	String_t* ____columnPrefix_31;
	// System.String System.Data.DataColumn::_encodedColumnName
	String_t* ____encodedColumnName_32;
	// System.Data.SimpleType System.Data.DataColumn::_simpleType
	SimpleType_tE6F54AF1D35994BBDB2AEB808DB8C87AB7477D14* ____simpleType_33;
	// System.Int32 System.Data.DataColumn::_objectID
	int32_t ____objectID_35;
	// System.String System.Data.DataColumn::<XmlDataType>k__BackingField
	String_t* ___U3CXmlDataTypeU3Ek__BackingField_36;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataColumn::PropertyChanging
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanging_37;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// System.Security.Permissions.SecurityAttribute
struct SecurityAttribute_tB79F828B77F1B081DD57CEF810E748C7C871D7C5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Security.Permissions.SecurityAction System.Security.Permissions.SecurityAttribute::m_Action
	int32_t ___m_Action_0;
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.Data.Common.UInt16Storage
struct UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.UInt16[] System.Data.Common.UInt16Storage::_values
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____values_15;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Data.Common.UInt32Storage
struct UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.UInt32[] System.Data.Common.UInt32Storage::_values
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____values_15;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Data.Common.UInt64Storage
struct UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.UInt64[] System.Data.Common.UInt64Storage::_values
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____values_15;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152
struct __StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9__padding[152];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=176
struct __StaticArrayInitTypeSizeU3D176_t7311E17E385322EBCED3FDFC17F9FD6B5DAA8BEE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D176_t7311E17E385322EBCED3FDFC17F9FD6B5DAA8BEE__padding[176];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t5DFB8228BC57D9CD6B42A53688F48793E6DAA9D4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t5DFB8228BC57D9CD6B42A53688F48793E6DAA9D4__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
struct __StaticArrayInitTypeSizeU3D38_t5C677D32187456C0AE0B43ED3AA78B292A4ADCC4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t5C677D32187456C0AE0B43ED3AA78B292A4ADCC4__padding[38];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t44B99CEA9CF46C49BE965A9F9F9FEA108BD64970 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t44B99CEA9CF46C49BE965A9F9F9FEA108BD64970__padding[64];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C  : public RuntimeObject
{
};

// System.Data.Common.ADP
struct ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0  : public RuntimeObject
{
};

// System.Security.Permissions.CodeAccessSecurityAttribute
struct CodeAccessSecurityAttribute_tE7EEC93676A4CB9CEE9050F6CC2B97E1C2E210CE  : public SecurityAttribute_tB79F828B77F1B081DD57CEF810E748C7C871D7C5
{
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Data.Common.TimeSpanStorage
struct TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.TimeSpan[] System.Data.Common.TimeSpanStorage::_values
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ____values_15;
};

// System.Data.Common.DBDataPermissionAttribute
struct DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725  : public CodeAccessSecurityAttribute_tE7EEC93676A4CB9CEE9050F6CC2B97E1C2E210CE
{
	// System.Boolean System.Data.Common.DBDataPermissionAttribute::_allowBlankPassword
	bool ____allowBlankPassword_2;
	// System.String System.Data.Common.DBDataPermissionAttribute::_connectionString
	String_t* ____connectionString_3;
	// System.String System.Data.Common.DBDataPermissionAttribute::_restrictions
	String_t* ____restrictions_4;
	// System.Data.KeyRestrictionBehavior System.Data.Common.DBDataPermissionAttribute::_behavior
	int32_t ____behavior_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.ArrayList

// System.Collections.ArrayList

// System.Reflection.Binder

// System.Reflection.Binder

// System.Collections.BitArray

// System.Collections.BitArray

// System.Security.CodeAccessPermission

// System.Security.CodeAccessPermission

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Data.Common.DBConnectionString

// System.Data.Common.DBConnectionString

// System.Data.Common.DataStorage
struct DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_StaticFields
{
	// System.Type[] System.Data.Common.DataStorage::s_storageClassType
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_storageClassType_0;
	// System.Func`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>> System.Data.Common.DataStorage::s_inspectTypeForInterfaces
	Func_2_t54E7AF2F5CFB23D033ECC239ADED1EC348C9AED7* ___s_inspectTypeForInterfaces_12;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>> System.Data.Common.DataStorage::s_typeImplementsInterface
	ConcurrentDictionary_2_t421F761E5F7000F25374ACA7F13932BC7DAD49EA* ___s_typeImplementsInterface_13;
};

// System.Data.Common.DataStorage

// System.Data.Common.DbConnectionOptions
struct DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25_StaticFields
{
	// System.Text.RegularExpressions.Regex System.Data.Common.DbConnectionOptions::s_connectionStringValidKeyRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_connectionStringValidKeyRegex_0;
	// System.Text.RegularExpressions.Regex System.Data.Common.DbConnectionOptions::s_connectionStringValidValueRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_connectionStringValidValueRegex_1;
	// System.Text.RegularExpressions.Regex System.Data.Common.DbConnectionOptions::s_connectionStringQuoteValueRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_connectionStringQuoteValueRegex_2;
	// System.Text.RegularExpressions.Regex System.Data.Common.DbConnectionOptions::s_connectionStringQuoteOdbcValueRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_connectionStringQuoteOdbcValueRegex_3;
};

// System.Data.Common.DbConnectionOptions

// System.Data.Common.DbConnectionStringBuilderUtil

// System.Data.Common.DbConnectionStringBuilderUtil

// System.Data.Common.NameValuePair

// System.Data.Common.NameValuePair

// System.Data.Common.NameValuePermission
struct NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_StaticFields
{
	// System.Data.Common.NameValuePermission System.Data.Common.NameValuePermission::Default
	NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* ___Default_3;
};

// System.Data.Common.NameValuePermission

// System.Security.SecurityElement
struct SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55_StaticFields
{
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_chars_8;
};

// System.Security.SecurityElement

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.StringComparer

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Data.Common.DBDataPermission

// System.Data.Common.DBDataPermission

// System.Data.DataColumn
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66_StaticFields
{
	// System.Int32 System.Data.DataColumn::s_objectTypeCount
	int32_t ___s_objectTypeCount_34;
};

// System.Data.DataColumn

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Security.Permissions.SecurityAttribute

// System.Security.Permissions.SecurityAttribute

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt16

// System.UInt16

// System.Data.Common.UInt16Storage
struct UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields
{
	// System.UInt16 System.Data.Common.UInt16Storage::s_defaultValue
	uint16_t ___s_defaultValue_14;
};

// System.Data.Common.UInt16Storage

// System.UInt32

// System.UInt32

// System.Data.Common.UInt32Storage
struct UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields
{
	// System.UInt32 System.Data.Common.UInt32Storage::s_defaultValue
	uint32_t ___s_defaultValue_14;
};

// System.Data.Common.UInt32Storage

// System.UInt64

// System.UInt64

// System.Data.Common.UInt64Storage
struct UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields
{
	// System.UInt64 System.Data.Common.UInt64Storage::s_defaultValue
	uint64_t ___s_defaultValue_14;
};

// System.Data.Common.UInt64Storage

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=176

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=176

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::39A47A6A540EB845B37C85CE8C346359A0DB937D4AAF7A74A6C207205E0BC61E
	__StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 ___39A47A6A540EB845B37C85CE8C346359A0DB937D4AAF7A74A6C207205E0BC61E_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38 <PrivateImplementationDetails>::540CD885F06B2760118EA5544E069ACE0C5D184B85D9D104417C14F1E536376D
	__StaticArrayInitTypeSizeU3D38_t5C677D32187456C0AE0B43ED3AA78B292A4ADCC4 ___540CD885F06B2760118EA5544E069ACE0C5D184B85D9D104417C14F1E536376D_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
	__StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C ___5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::8D4DC488705859D6A837A660BDBA9E88D1BD229BC39DB97734072D04BD513ECD
	__StaticArrayInitTypeSizeU3D36_t5DFB8228BC57D9CD6B42A53688F48793E6DAA9D4 ___8D4DC488705859D6A837A660BDBA9E88D1BD229BC39DB97734072D04BD513ECD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::BA1E68F004F9EFDE72987E33682A8A5C579C4A609FBECE4F6EDBB844431D9226
	__StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 ___BA1E68F004F9EFDE72987E33682A8A5C579C4A609FBECE4F6EDBB844431D9226_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::C44E90B8C219817ECD3C403823D4770C0F744358EBF32A4282B3CE0338D4602E
	__StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 ___C44E90B8C219817ECD3C403823D4770C0F744358EBF32A4282B3CE0338D4602E_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::D44900CF81FC3D53E7F8D2FCB6EF3B50B39ED1A857628FA737F5B4B7E0382939
	__StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 ___D44900CF81FC3D53E7F8D2FCB6EF3B50B39ED1A857628FA737F5B4B7E0382939_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=176 <PrivateImplementationDetails>::E29424929B12EB1FDF4FD2E4911E09644CB58261C6033211F88022DDED785AE6
	__StaticArrayInitTypeSizeU3D176_t7311E17E385322EBCED3FDFC17F9FD6B5DAA8BEE ___E29424929B12EB1FDF4FD2E4911E09644CB58261C6033211F88022DDED785AE6_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::F327BBE8D18E0318C5295B25F9A8BA9B3AFE1F44C3C244BB3921AFEB578F1591
	__StaticArrayInitTypeSizeU3D64_t44B99CEA9CF46C49BE965A9F9F9FEA108BD64970 ___F327BBE8D18E0318C5295B25F9A8BA9B3AFE1F44C3C244BB3921AFEB578F1591_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
	__StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C ___FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_9;
};

// <PrivateImplementationDetails>

// System.Data.Common.ADP
struct ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields
{
	// System.Type System.Data.Common.ADP::s_stackOverflowType
	Type_t* ___s_stackOverflowType_0;
	// System.Type System.Data.Common.ADP::s_outOfMemoryType
	Type_t* ___s_outOfMemoryType_1;
	// System.Type System.Data.Common.ADP::s_threadAbortType
	Type_t* ___s_threadAbortType_2;
	// System.Type System.Data.Common.ADP::s_nullReferenceType
	Type_t* ___s_nullReferenceType_3;
	// System.Type System.Data.Common.ADP::s_accessViolationType
	Type_t* ___s_accessViolationType_4;
	// System.Type System.Data.Common.ADP::s_securityType
	Type_t* ___s_securityType_5;
	// System.String System.Data.Common.ADP::StrEmpty
	String_t* ___StrEmpty_6;
	// System.String[] System.Data.Common.ADP::AzureSqlServerEndpoints
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___AzureSqlServerEndpoints_7;
	// System.IntPtr System.Data.Common.ADP::PtrZero
	intptr_t ___PtrZero_8;
	// System.Int32 System.Data.Common.ADP::PtrSize
	int32_t ___PtrSize_9;
};

// System.Data.Common.ADP

// System.Security.Permissions.CodeAccessSecurityAttribute

// System.Security.Permissions.CodeAccessSecurityAttribute

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.OrdinalCaseSensitiveComparer

// System.OrdinalCaseSensitiveComparer

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Data.Common.TimeSpanStorage
struct TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields
{
	// System.TimeSpan System.Data.Common.TimeSpanStorage::s_defaultValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultValue_14;
};

// System.Data.Common.TimeSpanStorage

// System.Data.Common.DBDataPermissionAttribute

// System.Data.Common.DBDataPermissionAttribute

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.ArgumentException

// System.ArgumentException

// System.InvalidCastException

// System.InvalidCastException

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.OverflowException

// System.OverflowException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A m_Items[1];

	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

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
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Data.Common.NameValuePermission[]
struct NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A  : public RuntimeArray
{
	ALIGN_FIELD (8) NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* m_Items[1];

	inline NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisRuntimeObject_mE25EE59ABB20AC401C5EC394D3A4497C9BA27C9D_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mB5F13D1685AB91F0DC0157388C3E5AE9C3E451AE_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mA6FAF0F3EC453F08AA97CB7911891B96C4E25D5A_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::.ctor(System.Data.DataColumn,System.Type,System.Object,System.Data.Common.StorageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___0_column, Type_t* ___1_type, RuntimeObject* ___2_defaultValue, int32_t ___3_storageType, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_Compare_m93842825875A7C79D2A8A9E16D522AF01673CBEE (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
// System.Object System.Data.Common.DataStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataStorage_Aggregate_m634D6B5F30B4F3ECAA6A42247BE98739655F00A2 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_recordNos, int32_t ___1_kind, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D (int64_t ___0_value, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Addition(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
// System.Decimal System.Math::Round(System.Decimal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d, const RuntimeMethod* method) ;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Decimal_op_Explicit_m0E6416BBDAC3D0939FCF0279F793C6D574036B54 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003 (int64_t ___0_value, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_mDBA4FB50BAF9CE8B75AA6ED5ABED7F597CB46177 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Subtraction_mBDD5FAB14E0E9FA655A4C32B72C39E6BF947DF81 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
// System.Double System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Decimal_op_Explicit_mA8577A95CD02E86110976D415CA149550AD5A6C0 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.Exception System.Data.ExprException::Overflow(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Exception System.Data.ExceptionBuilder::AggregateException(System.Data.AggregateType,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095 (int32_t ___0_aggregateType, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
// System.Int32 System.Data.Common.DataStorage::CompareBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___0_recordNo1, int32_t ___1_recordNo2, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_CompareTo_m85916E1968FD4309A3CFCBCBC0E3DF2E9AEB0FD3 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_Parse_m4686E70A0FA2425C083A58B73A025D36F738AD35 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___0_ticks, const RuntimeMethod* method) ;
// System.TimeSpan System.Data.Common.TimeSpanStorage::ConvertToTimeSpan(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpanStorage_ConvertToTimeSpan_m7D2DC73F618C0558767AC1E2598F34E7E1009C33 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::CopyBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___0_srcRecordNo, int32_t ___1_dstRecordNo, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Inequality_m2248419A8BCC8744CADE25174238B24AE34F17DB (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
// System.Object System.Data.Common.DataStorage::GetBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___0_recordNo, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::SetNullBit(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___0_recordNo, bool ___1_flag, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.TimeSpan System.Xml.XmlConvert::ToTimeSpan(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A XmlConvert_ToTimeSpan_mDF57053BCC75597B17BD744CFC2E3777006782C2 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mEF060F018017514326BC5A2127ABEAC96BE8A14B (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.BitArray::Set(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13 (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* __this, int32_t ___0_index, bool ___1_value, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::SetNullStorage(System.Collections.BitArray)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___0_nullbits, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DataStorage::HasValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___0_recordNo, const RuntimeMethod* method) ;
// System.UInt16 System.Math::Min(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Math_Min_mA7BFF48067FBED606414C9937B00BE496B2696D7 (uint16_t ___0_val1, uint16_t ___1_val2, const RuntimeMethod* method) ;
// System.UInt16 System.Math::Max(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Math_Max_m670CC45E68892199F0ED53A131DAB78A953389BB (uint16_t ___0_val1, uint16_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::CompareTo(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_m73A3F7183597E4CFBCB8A98A696B4C3DFEDF0845 (uint16_t* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.IFormatProvider System.Data.Common.DataStorage::get_FormatProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.UInt16::Equals(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_m5673358CCDB7D6E74A6A13C50FC9151F4DD66089 (uint16_t* __this, uint16_t ___0_obj, const RuntimeMethod* method) ;
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t XmlConvert_ToUInt16_m724BC6C22738955F6FDE18ECF99FB00DBB68DBDE (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m15222157CD861187A9C674677C6CCCF34DCABCB7 (uint16_t ___0_value, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Min(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121 (uint32_t ___0_val1, uint32_t ___1_val2, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Max(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7 (uint32_t ___0_val1, uint32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::CompareTo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mC96F15BE2B06C0268AD1D110D3251CE4DBA43907 (uint32_t* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.UInt32::Equals(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3 (uint32_t* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XmlConvert_ToUInt32_m1D00F9B52CAFB9CD660C71B741FC8301890D9F1F (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m8F28EF0133301A563B7A9853C7DBB023491EFE83 (uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_mA78C1FC00B4E76A91931998BD4FDE3574A54B090 (uint64_t ___0_value, const RuntimeMethod* method) ;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Decimal_op_Explicit_m8AC64F6A5010191CE440A31868AAE5E505008F49 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.UInt64 System.Math::Min(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Math_Min_m1C589BAB3D638CE6D3A29E552EDB5E9F95856C28 (uint64_t ___0_val1, uint64_t ___1_val2, const RuntimeMethod* method) ;
// System.UInt64 System.Math::Max(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Math_Max_m904B9911C775943500AA17842F6D3D45010EAB4A (uint64_t ___0_val1, uint64_t ___1_val2, const RuntimeMethod* method) ;
// System.Boolean System.UInt64::Equals(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81 (uint64_t* __this, uint64_t ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::CompareTo(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m1292E47C1FE2A1FC5BC5E6E2EB9C1FCDCEFE7745 (uint64_t* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XmlConvert_ToUInt64_m3EDAB359CE90486CEEF0F718D15C131ED2FF2C0A (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m9A1A9D40FD8B650DD3EC4DD58410847A20C472E1 (uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbConnectionOptions::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbConnectionOptions__ctor_m11962BCA2665A66ACFE7B2C62723F13A50BAC72C (DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* __this, String_t* ___0_connectionString, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_synonyms, bool ___2_useOdbcRules, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DBConnectionString::.ctor(System.Data.Common.DbConnectionOptions,System.String,System.Data.KeyRestrictionBehavior,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBConnectionString__ctor_m97E5D3649A2A768661DF2BF2B3B72B09D3C7188A (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* ___0_connectionOptions, String_t* ___1_restrictions, int32_t ___2_behavior, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___3_synonyms, bool ___4_mustCloneDictionary, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.ArgumentOutOfRangeException System.Data.Common.ADP::InvalidKeyRestrictionBehavior(System.Data.KeyRestrictionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* ADP_InvalidKeyRestrictionBehavior_mADE425D449D71F3A9B5121C7BE5F6A9BFBAA83C3 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.Data.Common.DbConnectionOptions::UsersConnectionString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DbConnectionOptions_UsersConnectionString_m7FD9DFB8A075C836C1ED266B90CDAEE6B9E8A7D7 (DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* __this, bool ___0_hidePassword, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Data.Common.DbConnectionOptions::get_Parsetable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* DbConnectionOptions_get_Parsetable_m7A658387C5B035ABE26A17633AF6F11608D5EAFB_inline (DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* __this, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DbConnectionOptions::get_HasPersistablePassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbConnectionOptions_get_HasPersistablePassword_m685B08FADF791282FA2F5263D1B7F8EDA9377A47 (DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared)(__this, ___0_dictionary, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Data.Common.NameValuePair System.Data.Common.DbConnectionOptions::ReplacePasswordPwd(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* DbConnectionOptions_ReplacePasswordPwd_mC575D22690DC59DC2B3A8C6C59ACB9D00CB96BF0 (DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* __this, String_t** ___0_constr, bool ___1_fakePassword, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String[] System.Data.Common.DBConnectionString::ParseRestrictions(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_ParseRestrictions_mCAC7402B27FCECC54AE36C461EE427746AD46CFF (String_t* ___0_restrictions, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_synonyms, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Data.Common.ADP::IsEmptyArray(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ADP_IsEmptyArray_mB481EB0D007C3DA787A1B145DA53849CF02D2DDE (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_array, const RuntimeMethod* method) ;
// System.String[] System.Data.Common.DBConnectionString::NewRestrictionAllowOnly(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_NewRestrictionAllowOnly_m5925B855B2F0EF3A05111131924A907A43112124 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_allowonly, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_preventusage, const RuntimeMethod* method) ;
// System.String[] System.Data.Common.DBConnectionString::NoDuplicateUnion(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_NoDuplicateUnion_mFC0F06792577D665E35223934EDEC21A3CC39D77 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_a, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_b, const RuntimeMethod* method) ;
// System.String[] System.Data.Common.DBConnectionString::NewRestrictionIntersect(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_NewRestrictionIntersect_m9723940E5531A8AB4C12725EF8FCDCE65AD901C6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_a, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DBConnectionString::.ctor(System.Data.Common.DBConnectionString,System.String[],System.Data.KeyRestrictionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBConnectionString__ctor_m2CD3260ED53FF5E3372AAF4895033AF209FAF2CB (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_connectionString, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_restrictionValues, int32_t ___2_behavior, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) ;
// System.Int32 System.Array::BinarySearch<System.String>(T[],T,System.Collections.Generic.IComparer`1<T>)
inline int32_t Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_array, String_t* ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, String_t*, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisRuntimeObject_mE25EE59ABB20AC401C5EC394D3A4497C9BA27C9D_gshared)(___0_array, ___1_value, ___2_comparer, method);
}
// System.Data.Common.NameValuePair System.Data.Common.DBConnectionString::get_KeyChain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* DBConnectionString_get_KeyChain_mCF62B86BF4D7C09A3C2E09E8A4A99E29D659638A_inline (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) ;
// System.String System.Data.Common.NameValuePair::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NameValuePair_get_Name_m8180C842E2E80672573D4B8E7C1B0BA6E7D4CC40_inline (NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DBConnectionString::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBConnectionString_ContainsKey_m83D21BAB96A06ECE536A4931954937B044E5D8D8 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DBConnectionString::IsRestrictedKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBConnectionString_IsRestrictedKeyword_mFF34581C631AE3CF288AAADC70A5CBAA18A2AB00 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.Data.Common.NameValuePair System.Data.Common.NameValuePair::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* NameValuePair_get_Next_m69D3E2DD5F54D65B9C4B2E3AF16E581F5C3AB552_inline (NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Array::Sort<System.String>(T[],System.Collections.Generic.IComparer`1<T>)
inline void Array_Sort_TisString_t_m19EDD7ED2011551F14D2D35288ECB34DF95C8AFD (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_array, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_mB5F13D1685AB91F0DC0157388C3E5AE9C3E451AE_gshared)(___0_array, ___1_comparer, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Int32 System.Data.Common.DbConnectionOptions::GetKeyValuePair(System.String,System.Int32,System.Text.StringBuilder,System.Boolean,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbConnectionOptions_GetKeyValuePair_m21A612DC3AD97AC2EDBB749D37C6F886E1382F3F (String_t* ___0_connectionString, int32_t ___1_currentPosition, StringBuilder_t* ___2_buffer, bool ___3_useOdbcRules, String_t** ___4_keyname, String_t** ___5_keyvalue, const RuntimeMethod* method) ;
// System.ArgumentException System.Data.Common.ADP::KeywordNotSupported(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* ADP_KeywordNotSupported_m3CCE13944F2C887592DDF6403EBB7B6C780D153C (String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.String[] System.Data.Common.DBConnectionString::RemoveDuplicates(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_RemoveDuplicates_m878CFBB3DA6F03F3D8B207C456A791254D0EC02E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_restrictions, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Data.Common.NameValuePermission System.Data.Common.NameValuePermission::CopyNameValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* NameValuePermission_CopyNameValue_m29F776C894F5D7E7DA9E33160D2178D1C0185546 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, const RuntimeMethod* method) ;
// System.Data.Common.NameValuePermission System.Data.Common.NameValuePermission::CheckKeyForValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* NameValuePermission_CheckKeyForValue_m8D903580B0278DD45013EE0161F70F9BC220666A (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, String_t* ___0_keyInQuestion, const RuntimeMethod* method) ;
// System.Void System.Data.Common.NameValuePermission::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission__ctor_m654397BC7CD9E5375B2CF2BCD2C38DDE6B9EF66F (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Void System.Data.Common.NameValuePermission::Add(System.Data.Common.NameValuePermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission_Add_mEB28D71AB045BE9F0FB38BF34F59576FA6F7CFCE (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* ___0_permit, const RuntimeMethod* method) ;
// System.String System.Data.Common.NameValuePair::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NameValuePair_get_Value_mE4C36CD35FDCB736D1606F2364E2AA4B14CF47A0_inline (NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* __this, const RuntimeMethod* method) ;
// System.Void System.Data.Common.NameValuePermission::.ctor(System.String,System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission__ctor_m254436B7502FC8F290801AC5922770FE3DA087A0 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, String_t* ___0_value, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___1_entry, const RuntimeMethod* method) ;
// System.Data.Common.DBConnectionString System.Data.Common.DBConnectionString::Intersect(System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* DBConnectionString_Intersect_mC5DC37C63728218EDD820D2E11D498AB64823273 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_entry, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Data.Common.NameValuePermission>(T[])
inline void Array_Sort_TisNameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_mF7C6AA8D80C48AC6D6CE5EA192ABBBECD89F9180 (NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_mA6FAF0F3EC453F08AA97CB7911891B96C4E25D5A_gshared)(___0_array, method);
}
// System.Boolean System.Data.Common.DBConnectionString::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBConnectionString_get_IsEmpty_mBA3F5627AF5BE0F996F830612A830D35C83AD651 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) ;
// System.String System.Data.Common.DBConnectionString::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBConnectionString_get_Item_m1C574D49F0BD52A0F381187301C2389202F230B8 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.NameValuePermission::CheckValueForKeyPermit(System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameValuePermission_CheckValueForKeyPermit_mC61B33CD379E723D4B0A326367B867A6B1A16AB4 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_parsetable, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DBConnectionString::IsSupersetOf(System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBConnectionString_IsSupersetOf_mA14B48A0F03977B0F5DB13119AA29FF27A7597B6 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_entry, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___0_a, String_t* ___1_b, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
// System.Void System.Data.Common.NameValuePermission::.ctor(System.Data.Common.NameValuePermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission__ctor_m455FF9A0E5C0DF9ADAE06BAE435D54328DB0552D (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* ___0_permit, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m03249561BBE153E4ED7E2E130ECC65F08B322261 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.ArgumentException System.Data.Common.ADP::ConvertFailed(System.Type,System.Type,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* ADP_ConvertFailed_m20652EC2B52B253D6AA18BAC8E6B47883375FF9F (Type_t* ___0_fromType, Type_t* ___1_toType, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DBDataPermission::.ctor(System.Security.Permissions.PermissionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission__ctor_m154E797E8E46958EB831D3CECC7F3BCC0D0F9443 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, int32_t ___0_state, const RuntimeMethod* method) ;
// System.Void System.Security.CodeAccessPermission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeAccessPermission__ctor_m4C9AF8F7D3EB2A919DBDC92FE9512A1F68D375AA (CodeAccessPermission_t6BE947E3C453E05B6C9DC30B8FA33A29DEB5209A* __this, const RuntimeMethod* method) ;
// System.ArgumentOutOfRangeException System.Data.Common.ADP::InvalidPermissionState(System.Security.Permissions.PermissionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* ADP_InvalidPermissionState_mBC7F259F3F6B9D27787EB24F69AC215D373BCFDE (int32_t ___0_value, const RuntimeMethod* method) ;
// System.ArgumentNullException System.Data.Common.ADP::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* ADP_ArgumentNull_m9E75E977BECB9425FF93F92818643FFCE0D0D635 (String_t* ___0_parameter, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DBDataPermission::CopyFrom(System.Data.Common.DBDataPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission_CopyFrom_m4E7B6CFFD8F11BB01FD0EA8CDC4BAFE60072EC86 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* ___0_permission, const RuntimeMethod* method) ;
// System.Boolean System.Security.Permissions.SecurityAttribute::get_Unrestricted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityAttribute_get_Unrestricted_m09C9A08EB6D9939ABAEACD1D49AD06270742E6E1_inline (SecurityAttribute_tB79F828B77F1B081DD57CEF810E748C7C871D7C5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DBDataPermissionAttribute::get_AllowBlankPassword()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DBDataPermissionAttribute_get_AllowBlankPassword_mC81FEE679AB7F11C016B37D73A87D2880DB09D60_inline (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DBDataPermissionAttribute::ShouldSerializeConnectionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermissionAttribute_ShouldSerializeConnectionString_mDAF29856018011B799A975BA875978D4F66D22EE (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DBDataPermissionAttribute::ShouldSerializeKeyRestrictions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermissionAttribute_ShouldSerializeKeyRestrictions_m1E27621A6DF62CA8AA61D97B94CCECF40D6A7457 (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) ;
// System.String System.Data.Common.DBDataPermissionAttribute::get_ConnectionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBDataPermissionAttribute_get_ConnectionString_m28B85E4EB2268A38CE0612E6E286E7BD0B8FDB80 (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) ;
// System.String System.Data.Common.DBDataPermissionAttribute::get_KeyRestrictions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBDataPermissionAttribute_get_KeyRestrictions_mBB03235153CA03FB1DE4814BA01CBEE6B17C5345 (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) ;
// System.Data.KeyRestrictionBehavior System.Data.Common.DBDataPermissionAttribute::get_KeyRestrictionBehavior()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DBDataPermissionAttribute_get_KeyRestrictionBehavior_m693605A2449257698074140C8649323AB7E514F9_inline (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DBConnectionString::.ctor(System.String,System.String,System.Data.KeyRestrictionBehavior,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBConnectionString__ctor_m4F12AFF3E11AE42A01972FAEFC1A88C1E7707278 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, String_t* ___0_value, String_t* ___1_restrictions, int32_t ___2_behavior, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___3_synonyms, bool ___4_useOdbcRules, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DBDataPermission::AddPermissionEntry(System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission_AddPermissionEntry_mC754BC42580BCC68738169EB2090C77086CA62D7 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_entry, const RuntimeMethod* method) ;
// System.Void System.Data.Common.NameValuePermission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission__ctor_mE9A3122540C59A4858936FEDD8B5FA2430F68E87 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Void System.Data.Common.NameValuePermission::AddEntry(System.Data.Common.NameValuePermission,System.Collections.ArrayList,System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission_AddEntry_mA400F2E8BE55616338451C77870FC7625654F028 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* ___0_kvtree, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___1_entries, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___2_entry, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DBDataPermission::IsUnrestricted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960_inline (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DBDataPermission::get_AllowBlankPassword()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DBDataPermission_get_AllowBlankPassword_m2A152B8948FEC0DF627DF1C2AF1CD838B9FC8B57_inline (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mBA4E894FD2BB619F187B9049E50AFF802259E6AC (Type_t* ___0_type, int32_t ___1_bindingAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_args, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___4_culture, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___5_activationAttributes, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DBDataPermission::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermission_IsEmpty_mF9494EDB17DEB1462F929971E2EF040EF322FFB1 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Exception System.Data.Common.ADP::PermissionTypeMismatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ADP_PermissionTypeMismatch_m1BE6D115C8150FC93E8EE5FFE4C57DD4BC6408D3 (const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Void System.Security.SecurityElement::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityElement__ctor_m1BC698E428D96ECEF625ADF86F95D30B5E4CD184 (SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityElement_AddAttribute_mF31D985A7B289E7858F3EBFE782ECCC74F1F08AC (SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m8A8E8910575F649AA72E01649BACE16F0F362FF4 (bool* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String System.Data.Common.DBConnectionString::get_ConnectionString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DBConnectionString_get_ConnectionString_m38788FDCBBFE6CBAAC0538DB8D8B6F32C0FC3079_inline (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) ;
// System.String System.Data.Common.DBDataPermission::EncodeXmlValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBDataPermission_EncodeXmlValue_m6798BFA5ACB33906C1334CD02EEDCFBFEEC10A5E (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.ADP::IsEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ADP_IsEmpty_m085794600DF9754BBC19E05E870E1ADBD24AD94C (String_t* ___0_str, const RuntimeMethod* method) ;
// System.String System.Data.Common.DBConnectionString::get_Restrictions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBConnectionString_get_Restrictions_m09A757FE01C1E736F42B30043266467B9D20F41D (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) ;
// System.Data.KeyRestrictionBehavior System.Data.Common.DBConnectionString::get_Behavior()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DBConnectionString_get_Behavior_m5E3953CBE727970791B5F7405A178778FB8974FF_inline (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityElement_AddChild_m3718404151331EFAA46D25D354B5C4AA1FD8DDFE (SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* __this, SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* ___0_child, const RuntimeMethod* method) ;
// System.Void System.Security.Permissions.CodeAccessSecurityAttribute::.ctor(System.Security.Permissions.SecurityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeAccessSecurityAttribute__ctor_mC4EB601DAE9787003AB1A2D8BDE8B3A9CB3BEE72 (CodeAccessSecurityAttribute_tE7EEC93676A4CB9CEE9050F6CC2B97E1C2E210CE* __this, int32_t ___0_action, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Round(System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Round_m1DD2AAA2C9C8D2A1CDA6ECCC2724A075616FF624 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d, int32_t ___1_decimals, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.Common.TimeSpanStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage__ctor_m6E245B33CB7D28B9DECA3F7560D9BCCF1FB9B7AE (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___0_column, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___0_column;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = L_3;
		RuntimeObject* L_5 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_5, ((int32_t)17), NULL);
		return;
	}
}
// System.Object System.Data.Common.TimeSpanStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_Aggregate_m6D1CAACF0A1EE0578178DE6DFC4073A66D8B4613 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_records, int32_t ___1_kind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_8;
	memset((&V_8), 0, sizeof(V_8));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	double V_18 = 0.0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_19;
	memset((&V_19), 0, sizeof(V_19));
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	double V_22 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___1_kind;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_013b_1;
				}
				case 1:
				{
					goto IL_01b4_1;
				}
				case 2:
				{
					goto IL_002f_1;
				}
				case 3:
				{
					goto IL_0098_1;
				}
				case 4:
				{
					goto IL_0106_1;
				}
				case 5:
				{
					goto IL_012c_1;
				}
				case 6:
				{
					goto IL_0356_1;
				}
				case 7:
				{
					goto IL_0242_1;
				}
			}
		}
		{
			goto IL_0356_1;
		}

IL_002f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___MaxValue_20;
			V_1 = L_1;
			V_3 = 0;
			goto IL_0075_1;
		}

IL_0039_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_records;
			int32_t L_3 = V_3;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_4 = L_5;
			int32_t L_6 = V_4;
			bool L_7;
			L_7 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_6);
			if (L_7)
			{
				goto IL_0071_1;
			}
		}
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_8 = __this->____values_15;
			int32_t L_9 = V_4;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12 = V_1;
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			int32_t L_13;
			L_13 = TimeSpan_Compare_m93842825875A7C79D2A8A9E16D522AF01673CBEE(L_11, L_12, NULL);
			if ((((int32_t)L_13) < ((int32_t)0)))
			{
				goto IL_0061_1;
			}
		}
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_14 = V_1;
			G_B8_0 = L_14;
			goto IL_006e_1;
		}

IL_0061_1:
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_15 = __this->____values_15;
			int32_t L_16 = V_4;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			G_B8_0 = L_18;
		}

IL_006e_1:
		{
			V_1 = G_B8_0;
			V_0 = (bool)1;
		}

IL_0071_1:
		{
			int32_t L_19 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		}

IL_0075_1:
		{
			int32_t L_20 = V_3;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___0_records;
			NullCheck(L_21);
			if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
			{
				goto IL_0039_1;
			}
		}
		{
			bool L_22 = V_0;
			if (!L_22)
			{
				goto IL_008b_1;
			}
		}
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_23 = V_1;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_24 = L_23;
			RuntimeObject* L_25 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_24);
			V_5 = L_25;
			goto IL_0376;
		}

IL_008b_1:
		{
			RuntimeObject* L_26 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_5 = L_26;
			goto IL_0376;
		}

IL_0098_1:
		{
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_27 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___MinValue_21;
			V_2 = L_27;
			V_6 = 0;
			goto IL_00e2_1;
		}

IL_00a3_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___0_records;
			int32_t L_29 = V_6;
			NullCheck(L_28);
			int32_t L_30 = L_29;
			int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
			V_7 = L_31;
			int32_t L_32 = V_7;
			bool L_33;
			L_33 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_32);
			if (L_33)
			{
				goto IL_00dc_1;
			}
		}
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_34 = __this->____values_15;
			int32_t L_35 = V_7;
			NullCheck(L_34);
			int32_t L_36 = L_35;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_38 = V_2;
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			int32_t L_39;
			L_39 = TimeSpan_Compare_m93842825875A7C79D2A8A9E16D522AF01673CBEE(L_37, L_38, NULL);
			if ((((int32_t)L_39) >= ((int32_t)0)))
			{
				goto IL_00cc_1;
			}
		}
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_40 = V_2;
			G_B19_0 = L_40;
			goto IL_00d9_1;
		}

IL_00cc_1:
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_41 = __this->____values_15;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = L_42;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
			G_B19_0 = L_44;
		}

IL_00d9_1:
		{
			V_2 = G_B19_0;
			V_0 = (bool)1;
		}

IL_00dc_1:
		{
			int32_t L_45 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		}

IL_00e2_1:
		{
			int32_t L_46 = V_6;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ___0_records;
			NullCheck(L_47);
			if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
			{
				goto IL_00a3_1;
			}
		}
		{
			bool L_48 = V_0;
			if (!L_48)
			{
				goto IL_00f9_1;
			}
		}
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_49 = V_2;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_50 = L_49;
			RuntimeObject* L_51 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_50);
			V_5 = L_51;
			goto IL_0376;
		}

IL_00f9_1:
		{
			RuntimeObject* L_52 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_5 = L_52;
			goto IL_0376;
		}

IL_0106_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ___0_records;
			NullCheck(L_53);
			if (!(((RuntimeArray*)L_53)->max_length))
			{
				goto IL_0124_1;
			}
		}
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_54 = __this->____values_15;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ___0_records;
			NullCheck(L_55);
			int32_t L_56 = 0;
			int32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
			NullCheck(L_54);
			int32_t L_58 = L_57;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_59 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_60 = L_59;
			RuntimeObject* L_61 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_60);
			V_5 = L_61;
			goto IL_0376;
		}

IL_0124_1:
		{
			V_5 = NULL;
			goto IL_0376;
		}

IL_012c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ___0_records;
			int32_t L_63 = ___1_kind;
			RuntimeObject* L_64;
			L_64 = DataStorage_Aggregate_m634D6B5F30B4F3ECAA6A42247BE98739655F00A2(__this, L_62, L_63, NULL);
			V_5 = L_64;
			goto IL_0376;
		}

IL_013b_1:
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___0_records;
			V_9 = L_65;
			V_10 = 0;
			goto IL_0184_1;
		}

IL_014b_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_9;
			int32_t L_67 = V_10;
			NullCheck(L_66);
			int32_t L_68 = L_67;
			int32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
			V_11 = L_69;
			int32_t L_70 = V_11;
			bool L_71;
			L_71 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_70);
			if (L_71)
			{
				goto IL_017e_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_72 = V_8;
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_73 = __this->____values_15;
			int32_t L_74 = V_11;
			NullCheck(L_73);
			int64_t L_75;
			L_75 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_76;
			L_76 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_75, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_77;
			L_77 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_72, L_76, NULL);
			V_8 = L_77;
			V_0 = (bool)1;
		}

IL_017e_1:
		{
			int32_t L_78 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		}

IL_0184_1:
		{
			int32_t L_79 = V_10;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_9;
			NullCheck(L_80);
			if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
			{
				goto IL_014b_1;
			}
		}
		{
			bool L_81 = V_0;
			if (!L_81)
			{
				goto IL_01ac_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = V_8;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_83;
			L_83 = Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline(L_82, NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			int64_t L_84;
			L_84 = Decimal_op_Explicit_m0E6416BBDAC3D0939FCF0279F793C6D574036B54(L_83, NULL);
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_85;
			L_85 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(L_84, NULL);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_86 = L_85;
			RuntimeObject* L_87 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_86);
			V_5 = L_87;
			goto IL_0376;
		}

IL_01ac_1:
		{
			V_5 = NULL;
			goto IL_0376;
		}

IL_01b4_1:
		{
			il2cpp_codegen_initobj((&V_12), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			V_13 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ___0_records;
			V_9 = L_88;
			V_10 = 0;
			goto IL_0204_1;
		}

IL_01c7_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_9;
			int32_t L_90 = V_10;
			NullCheck(L_89);
			int32_t L_91 = L_90;
			int32_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
			V_14 = L_92;
			int32_t L_93 = V_14;
			bool L_94;
			L_94 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_93);
			if (L_94)
			{
				goto IL_01fe_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_95 = V_12;
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_96 = __this->____values_15;
			int32_t L_97 = V_14;
			NullCheck(L_96);
			int64_t L_98;
			L_98 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(((L_96)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_97))), NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_99;
			L_99 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_98, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_100;
			L_100 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_95, L_99, NULL);
			V_12 = L_100;
			int32_t L_101 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		}

IL_01fe_1:
		{
			int32_t L_102 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_102, 1));
		}

IL_0204_1:
		{
			int32_t L_103 = V_10;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_9;
			NullCheck(L_104);
			if ((((int32_t)L_103) < ((int32_t)((int32_t)(((RuntimeArray*)L_104)->max_length)))))
			{
				goto IL_01c7_1;
			}
		}
		{
			int32_t L_105 = V_13;
			if ((((int32_t)L_105) <= ((int32_t)0)))
			{
				goto IL_023a_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_106 = V_12;
			int32_t L_107 = V_13;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_108;
			L_108 = Decimal_op_Implicit_mDBA4FB50BAF9CE8B75AA6ED5ABED7F597CB46177(L_107, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_109;
			L_109 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_106, L_108, NULL);
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_110;
			L_110 = Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline(L_109, NULL);
			int64_t L_111;
			L_111 = Decimal_op_Explicit_m0E6416BBDAC3D0939FCF0279F793C6D574036B54(L_110, NULL);
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_112;
			L_112 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(L_111, NULL);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_113 = L_112;
			RuntimeObject* L_114 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_113);
			V_5 = L_114;
			goto IL_0376;
		}

IL_023a_1:
		{
			V_5 = NULL;
			goto IL_0376;
		}

IL_0242_1:
		{
			V_15 = 0;
			il2cpp_codegen_initobj((&V_16), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = ___0_records;
			V_9 = L_115;
			V_10 = 0;
			goto IL_0292_1;
		}

IL_0255_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = V_9;
			int32_t L_117 = V_10;
			NullCheck(L_116);
			int32_t L_118 = L_117;
			int32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
			V_17 = L_119;
			int32_t L_120 = V_17;
			bool L_121;
			L_121 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_120);
			if (L_121)
			{
				goto IL_028c_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_122 = V_16;
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_123 = __this->____values_15;
			int32_t L_124 = V_17;
			NullCheck(L_123);
			int64_t L_125;
			L_125 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(((L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_124))), NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_126;
			L_126 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_125, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_127;
			L_127 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_122, L_126, NULL);
			V_16 = L_127;
			int32_t L_128 = V_15;
			V_15 = ((int32_t)il2cpp_codegen_add(L_128, 1));
		}

IL_028c_1:
		{
			int32_t L_129 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		}

IL_0292_1:
		{
			int32_t L_130 = V_10;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = V_9;
			NullCheck(L_131);
			if ((((int32_t)L_130) < ((int32_t)((int32_t)(((RuntimeArray*)L_131)->max_length)))))
			{
				goto IL_0255_1;
			}
		}
		{
			int32_t L_132 = V_15;
			if ((((int32_t)L_132) <= ((int32_t)1)))
			{
				goto IL_0351_1;
			}
		}
		{
			V_18 = (0.0);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_133 = V_16;
			int32_t L_134 = V_15;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_135;
			L_135 = Decimal_op_Implicit_mDBA4FB50BAF9CE8B75AA6ED5ABED7F597CB46177(L_134, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_136;
			L_136 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_133, L_135, NULL);
			V_19 = L_136;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ___0_records;
			V_9 = L_137;
			V_10 = 0;
			goto IL_030c_1;
		}

IL_02c5_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_9;
			int32_t L_139 = V_10;
			NullCheck(L_138);
			int32_t L_140 = L_139;
			int32_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
			V_21 = L_141;
			int32_t L_142 = V_21;
			bool L_143;
			L_143 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_142);
			if (L_143)
			{
				goto IL_0306_1;
			}
		}
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_144 = __this->____values_15;
			int32_t L_145 = V_21;
			NullCheck(L_144);
			int64_t L_146;
			L_146 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_145))), NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_147;
			L_147 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_146, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_148 = V_19;
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_149;
			L_149 = Decimal_op_Subtraction_mBDD5FAB14E0E9FA655A4C32B72C39E6BF947DF81(L_147, L_148, NULL);
			double L_150;
			L_150 = Decimal_op_Explicit_mA8577A95CD02E86110976D415CA149550AD5A6C0(L_149, NULL);
			V_22 = ((double)L_150);
			double L_151 = V_18;
			double L_152 = V_22;
			double L_153 = V_22;
			V_18 = ((double)il2cpp_codegen_add(L_151, ((double)il2cpp_codegen_multiply(L_152, L_153))));
		}

IL_0306_1:
		{
			int32_t L_154 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_154, 1));
		}

IL_030c_1:
		{
			int32_t L_155 = V_10;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = V_9;
			NullCheck(L_156);
			if ((((int32_t)L_155) < ((int32_t)((int32_t)(((RuntimeArray*)L_156)->max_length)))))
			{
				goto IL_02c5_1;
			}
		}
		{
			double L_157 = V_18;
			int32_t L_158 = V_15;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_159;
			L_159 = sqrt(((double)(L_157/((double)((int32_t)il2cpp_codegen_subtract(L_158, 1))))));
			double L_160;
			L_160 = bankers_round(L_159);
			V_20 = il2cpp_codegen_cast_floating_point<uint64_t, int64_t, double>(L_160);
			uint64_t L_161 = V_20;
			if ((!(((uint64_t)L_161) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_0341_1;
			}
		}
		{
			V_20 = ((int64_t)(std::numeric_limits<int64_t>::max)());
		}

IL_0341_1:
		{
			uint64_t L_162 = V_20;
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_163;
			L_163 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(L_162, NULL);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_164 = L_163;
			RuntimeObject* L_165 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_164);
			V_5 = L_165;
			goto IL_0376;
		}

IL_0351_1:
		{
			V_5 = NULL;
			goto IL_0376;
		}

IL_0356_1:
		{
			goto IL_0369;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0358;
		}
		throw e;
	}

CATCH_0358:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_167;
		L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
		Exception_t* L_168;
		L_168 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_167, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_168, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpanStorage_Aggregate_m6D1CAACF0A1EE0578178DE6DFC4073A66D8B4613_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0369:
	{
		int32_t L_169 = ___1_kind;
		Type_t* L_170 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_171;
		L_171 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_169, L_170, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_171, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpanStorage_Aggregate_m6D1CAACF0A1EE0578178DE6DFC4073A66D8B4613_RuntimeMethod_var)));
	}

IL_0376:
	{
		RuntimeObject* L_172 = V_5;
		return L_172;
	}
}
// System.Int32 System.Data.Common.TimeSpanStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpanStorage_Compare_mB65C20AB60737F9AC6B9F7176853105E10E2D3D2 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___0_recordNo1, int32_t ___1_recordNo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_0 = __this->____values_15;
		int32_t L_1 = ___0_recordNo1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = __this->____values_15;
		int32_t L_5 = ___1_recordNo2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0042;
		}
	}

IL_0034:
	{
		int32_t L_14 = ___0_recordNo1;
		int32_t L_15 = ___1_recordNo2;
		int32_t L_16;
		L_16 = DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11(__this, L_14, L_15, NULL);
		V_2 = L_16;
		int32_t L_17 = V_2;
		if (!L_17)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_18 = V_2;
		return L_18;
	}

IL_0042:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_19 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = TimeSpan_Compare_m93842825875A7C79D2A8A9E16D522AF01673CBEE(L_19, L_20, NULL);
		return L_21;
	}
}
// System.Int32 System.Data.Common.TimeSpanStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpanStorage_CompareValueTo_mE07DA84B0DD3AD5F39F7C6AB3F97155617A27DC0 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___0_recordNo, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___1_value;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_recordNo;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_2);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		return 1;
	}

IL_0016:
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = __this->____values_15;
		int32_t L_5 = ___0_recordNo;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_11 = ___0_recordNo;
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_11);
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		return (-1);
	}

IL_003b:
	{
		RuntimeObject* L_13 = ___1_value;
		int32_t L_14;
		L_14 = TimeSpan_CompareTo_m85916E1968FD4309A3CFCBCBC0E3DF2E9AEB0FD3((&V_0), ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_13, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var)))), NULL);
		return L_14;
	}
}
// System.TimeSpan System.Data.Common.TimeSpanStorage::ConvertToTimeSpan(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpanStorage_ConvertToTimeSpan_m7D2DC73F618C0558767AC1E2598F34E7E1009C33 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_6 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7;
		L_7 = TimeSpan_Parse_m4686E70A0FA2425C083A58B73A025D36F738AD35(((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}

IL_0025:
	{
		Type_t* L_8 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_12 = ___0_value;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_13;
		memset((&L_13), 0, sizeof(L_13));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_13), ((int64_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_12, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))), /*hidden argument*/NULL);
		return L_13;
	}

IL_0044:
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		if (!L_17)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_18 = ___0_value;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_19;
		memset((&L_19), 0, sizeof(L_19));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_19), ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_18, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_19;
	}

IL_0062:
	{
		RuntimeObject* L_20 = ___0_value;
		return ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_20, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))));
	}
}
// System.Object System.Data.Common.TimeSpanStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_ConvertValue_m371E0867393CE871858E89E2A8346B10306546E1 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___0_value;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_3 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpanStorage_ConvertToTimeSpan_m7D2DC73F618C0558767AC1E2598F34E7E1009C33(L_3, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = L_4;
		RuntimeObject* L_6 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_5);
		___0_value = L_6;
		goto IL_0023;
	}

IL_001b:
	{
		RuntimeObject* L_7 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___0_value = L_7;
	}

IL_0023:
	{
		RuntimeObject* L_8 = ___0_value;
		return L_8;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_Copy_m5CF7E545BC3F5FAE97FFA058298DFA67B6BE365C (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___0_recordNo1, int32_t ___1_recordNo2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_recordNo1;
		int32_t L_1 = ___1_recordNo2;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_2 = __this->____values_15;
		int32_t L_3 = ___1_recordNo2;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = __this->____values_15;
		int32_t L_5 = ___0_recordNo1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_7);
		return;
	}
}
// System.Object System.Data.Common.TimeSpanStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_Get_mA4C1E251EFDC2ED0B7F16D6B5B62F2C5AF7C81A0 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___0_record, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_0 = __this->____values_15;
		int32_t L_1 = ___0_record;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = TimeSpan_op_Inequality_m2248419A8BCC8744CADE25174238B24AE34F17DB(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8 = L_7;
		RuntimeObject* L_9 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_0021:
	{
		int32_t L_10 = ___0_record;
		RuntimeObject* L_11;
		L_11 = DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943(__this, L_10, NULL);
		return L_11;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_Set_m2A59D4579C7E1FF4F703CED8205FB45AEEC5BC70 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___0_record, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___1_value;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_2 = __this->____values_15;
		int32_t L_3 = ___0_record;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_4);
		int32_t L_5 = ___0_record;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_5, (bool)1, NULL);
		return;
	}

IL_0023:
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_6 = __this->____values_15;
		int32_t L_7 = ___0_record;
		RuntimeObject* L_8 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = TimeSpanStorage_ConvertToTimeSpan_m7D2DC73F618C0558767AC1E2598F34E7E1009C33(L_8, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_9);
		int32_t L_10 = ___0_record;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_10, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_SetCapacity_mD6215852BEEA93A22ECEAA0CE8990FC9C5FCB852 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* V_0 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_1 = (TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)SZArrayNew(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_2 = __this->____values_15;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_3 = __this->____values_15;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_6 = __this->____values_15;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_8 = V_0;
		__this->____values_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)L_8);
		int32_t L_9 = ___0_capacity;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.TimeSpanStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_ConvertXmlToObject_m56D33704050D2030F4E83147509A7EB938388896 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = XmlConvert_ToTimeSpan_mDF57053BCC75597B17BD744CFC2E3777006782C2(L_0, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = L_1;
		RuntimeObject* L_3 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Data.Common.TimeSpanStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpanStorage_ConvertObjectToXml_mC07E48DFE1F5EFCA38ED16BA6342F38969FB4AE6 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_mEF060F018017514326BC5A2127ABEAC96BE8A14B(((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// System.Object System.Data.Common.TimeSpanStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_GetEmptyStorage_mCFD0F4BC4EF8056556FA4FA69DF13B57C501015A (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___0_recordCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_recordCount;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_1 = (TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)SZArrayNew(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_CopyValue_m987E2FACE30B0824832AF389FF69D217B17F1BBC (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___0_record, RuntimeObject* ___1_store, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___2_nullbits, int32_t ___3_storeIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___1_store;
		int32_t L_1 = ___3_storeIndex;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_2 = __this->____values_15;
		int32_t L_3 = ___0_record;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)Castclass((RuntimeObject*)L_0, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var)));
		(((TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)Castclass((RuntimeObject*)L_0, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___2_nullbits;
		int32_t L_7 = ___3_storeIndex;
		int32_t L_8 = ___0_record;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_SetStorage_mFEFD3C439BCF54396892B64023A53F93BF7A74AC (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, RuntimeObject* ___0_store, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___1_nullbits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_store;
		__this->____values_15 = ((TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)Castclass((RuntimeObject*)L_0, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)((TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)Castclass((RuntimeObject*)L_0, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var)));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___1_nullbits;
		DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage__cctor_mBA1043B22579B9313D915B17B1EFD8C1911633EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14 = L_0;
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
// System.Void System.Data.Common.UInt16Storage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage__ctor_mB265F46EB7A06637FAAB93762AC4C7988BEEFD5C (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___0_column, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___0_column;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		uint16_t L_3 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint16_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_5, 8, NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt16Storage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_records, int32_t ___1_kind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___1_kind;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0089_1;
				}
				case 2:
				{
					goto IL_01e7_1;
				}
				case 3:
				{
					goto IL_0242_1;
				}
				case 4:
				{
					goto IL_0293_1;
				}
				case 5:
				{
					goto IL_02af_1;
				}
				case 6:
				{
					goto IL_00ed_1;
				}
				case 7:
				{
					goto IL_00ed_1;
				}
			}
		}
		{
			goto IL_02e1_1;
		}

IL_002f_1:
		{
			uint16_t L_1 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_1 = ((int64_t)(uint64_t)L_1);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_records;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0064_1;
		}

IL_003e_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_7, NULL);
			if (!L_8)
			{
				goto IL_005e_1;
			}
		}
		{
			uint64_t L_9 = V_1;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = __this->____values_15;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint16_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			if ((uint64_t)L_9 > kIl2CppUInt64Max - (uint64_t)((int64_t)(uint64_t)L_13))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, ((int64_t)(uint64_t)L_13)));
			V_0 = (bool)1;
		}

IL_005e_1:
		{
			int32_t L_14 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		}

IL_0064_1:
		{
			int32_t L_15 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_10;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
			{
				goto IL_003e_1;
			}
		}
		{
			bool L_17 = V_0;
			if (!L_17)
			{
				goto IL_007c_1;
			}
		}
		{
			uint64_t L_18 = V_1;
			uint64_t L_19 = L_18;
			RuntimeObject* L_20 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_19);
			V_13 = L_20;
			goto IL_0301;
		}

IL_007c_1:
		{
			RuntimeObject* L_21 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_21;
			goto IL_0301;
		}

IL_0089_1:
		{
			uint16_t L_22 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_2 = ((int64_t)(uint64_t)L_22);
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___0_records;
			V_10 = L_23;
			V_11 = 0;
			goto IL_00c4_1;
		}

IL_009a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_10;
			int32_t L_25 = V_11;
			NullCheck(L_24);
			int32_t L_26 = L_25;
			int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			V_14 = L_27;
			int32_t L_28 = V_14;
			bool L_29;
			L_29 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_28, NULL);
			if (!L_29)
			{
				goto IL_00be_1;
			}
		}
		{
			int64_t L_30 = V_2;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_31 = __this->____values_15;
			int32_t L_32 = V_14;
			NullCheck(L_31);
			int32_t L_33 = L_32;
			uint16_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			if (il2cpp_codegen_check_add_overflow((int64_t)L_30, (int64_t)((int64_t)(uint64_t)L_34)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var);
			V_2 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)(uint64_t)L_34)));
			int32_t L_35 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
			V_0 = (bool)1;
		}

IL_00be_1:
		{
			int32_t L_36 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00c4_1:
		{
			int32_t L_37 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_10;
			NullCheck(L_38);
			if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
			{
				goto IL_009a_1;
			}
		}
		{
			bool L_39 = V_0;
			if (!L_39)
			{
				goto IL_00e0_1;
			}
		}
		{
			int64_t L_40 = V_2;
			int32_t L_41 = V_3;
			if ((int64_t)(((int64_t)(L_40/((int64_t)L_41)))) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var);
			uint16_t L_42 = ((uint16_t)((int64_t)(L_40/((int64_t)L_41))));
			RuntimeObject* L_43 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_42);
			V_13 = L_43;
			goto IL_0301;
		}

IL_00e0_1:
		{
			RuntimeObject* L_44 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_44;
			goto IL_0301;
		}

IL_00ed_1:
		{
			V_4 = 0;
			V_5 = (0.0);
			V_6 = (0.0);
			V_7 = (0.0);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___0_records;
			V_10 = L_45;
			V_11 = 0;
			goto IL_015f_1;
		}

IL_0119_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_10;
			int32_t L_47 = V_11;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
			V_15 = L_49;
			int32_t L_50 = V_15;
			bool L_51;
			L_51 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_50, NULL);
			if (!L_51)
			{
				goto IL_0159_1;
			}
		}
		{
			double L_52 = V_6;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_53 = __this->____values_15;
			int32_t L_54 = V_15;
			NullCheck(L_53);
			int32_t L_55 = L_54;
			uint16_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			V_6 = ((double)il2cpp_codegen_add(L_52, ((double)L_56)));
			double L_57 = V_7;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_58 = __this->____values_15;
			int32_t L_59 = V_15;
			NullCheck(L_58);
			int32_t L_60 = L_59;
			uint16_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_62 = __this->____values_15;
			int32_t L_63 = V_15;
			NullCheck(L_62);
			int32_t L_64 = L_63;
			uint16_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
			V_7 = ((double)il2cpp_codegen_add(L_57, ((double)il2cpp_codegen_multiply(((double)L_61), ((double)L_65)))));
			int32_t L_66 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		}

IL_0159_1:
		{
			int32_t L_67 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		}

IL_015f_1:
		{
			int32_t L_68 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_10;
			NullCheck(L_69);
			if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
			{
				goto IL_0119_1;
			}
		}
		{
			int32_t L_70 = V_4;
			if ((((int32_t)L_70) <= ((int32_t)1)))
			{
				goto IL_01da_1;
			}
		}
		{
			int32_t L_71 = V_4;
			double L_72 = V_7;
			double L_73 = V_6;
			double L_74 = V_6;
			V_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)L_71), L_72)), ((double)il2cpp_codegen_multiply(L_73, L_74))));
			double L_75 = V_5;
			double L_76 = V_6;
			double L_77 = V_6;
			if ((((double)((double)(L_75/((double)il2cpp_codegen_multiply(L_76, L_77))))) < ((double)(1.0000000000000001E-15))))
			{
				goto IL_019a_1;
			}
		}
		{
			double L_78 = V_5;
			if ((!(((double)L_78) < ((double)(0.0)))))
			{
				goto IL_01a7_1;
			}
		}

IL_019a_1:
		{
			V_5 = (0.0);
			goto IL_01b4_1;
		}

IL_01a7_1:
		{
			double L_79 = V_5;
			int32_t L_80 = V_4;
			int32_t L_81 = V_4;
			V_5 = ((double)(L_79/((double)((int32_t)il2cpp_codegen_multiply(L_80, ((int32_t)il2cpp_codegen_subtract(L_81, 1)))))));
		}

IL_01b4_1:
		{
			int32_t L_82 = ___1_kind;
			if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_01cc_1;
			}
		}
		{
			double L_83 = V_5;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_84;
			L_84 = sqrt(L_83);
			double L_85 = L_84;
			RuntimeObject* L_86 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_85);
			V_13 = L_86;
			goto IL_0301;
		}

IL_01cc_1:
		{
			double L_87 = V_5;
			double L_88 = L_87;
			RuntimeObject* L_89 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_88);
			V_13 = L_89;
			goto IL_0301;
		}

IL_01da_1:
		{
			RuntimeObject* L_90 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_90;
			goto IL_0301;
		}

IL_01e7_1:
		{
			V_8 = (uint16_t)((int32_t)65535);
			V_16 = 0;
			goto IL_021d_1;
		}

IL_01f3_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = ___0_records;
			int32_t L_92 = V_16;
			NullCheck(L_91);
			int32_t L_93 = L_92;
			int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
			V_17 = L_94;
			int32_t L_95 = V_17;
			bool L_96;
			L_96 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_95, NULL);
			if (!L_96)
			{
				goto IL_0217_1;
			}
		}
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_97 = __this->____values_15;
			int32_t L_98 = V_17;
			NullCheck(L_97);
			int32_t L_99 = L_98;
			uint16_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
			uint16_t L_101 = V_8;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint16_t L_102;
			L_102 = Math_Min_mA7BFF48067FBED606414C9937B00BE496B2696D7(L_100, L_101, NULL);
			V_8 = L_102;
			V_0 = (bool)1;
		}

IL_0217_1:
		{
			int32_t L_103 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		}

IL_021d_1:
		{
			int32_t L_104 = V_16;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = ___0_records;
			NullCheck(L_105);
			if ((((int32_t)L_104) < ((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length)))))
			{
				goto IL_01f3_1;
			}
		}
		{
			bool L_106 = V_0;
			if (!L_106)
			{
				goto IL_0235_1;
			}
		}
		{
			uint16_t L_107 = V_8;
			uint16_t L_108 = L_107;
			RuntimeObject* L_109 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_108);
			V_13 = L_109;
			goto IL_0301;
		}

IL_0235_1:
		{
			RuntimeObject* L_110 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_110;
			goto IL_0301;
		}

IL_0242_1:
		{
			V_9 = (uint16_t)0;
			V_18 = 0;
			goto IL_0274_1;
		}

IL_024a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___0_records;
			int32_t L_112 = V_18;
			NullCheck(L_111);
			int32_t L_113 = L_112;
			int32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
			V_19 = L_114;
			int32_t L_115 = V_19;
			bool L_116;
			L_116 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_115, NULL);
			if (!L_116)
			{
				goto IL_026e_1;
			}
		}
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_117 = __this->____values_15;
			int32_t L_118 = V_19;
			NullCheck(L_117);
			int32_t L_119 = L_118;
			uint16_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
			uint16_t L_121 = V_9;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint16_t L_122;
			L_122 = Math_Max_m670CC45E68892199F0ED53A131DAB78A953389BB(L_120, L_121, NULL);
			V_9 = L_122;
			V_0 = (bool)1;
		}

IL_026e_1:
		{
			int32_t L_123 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		}

IL_0274_1:
		{
			int32_t L_124 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = ___0_records;
			NullCheck(L_125);
			if ((((int32_t)L_124) < ((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length)))))
			{
				goto IL_024a_1;
			}
		}
		{
			bool L_126 = V_0;
			if (!L_126)
			{
				goto IL_0289_1;
			}
		}
		{
			uint16_t L_127 = V_9;
			uint16_t L_128 = L_127;
			RuntimeObject* L_129 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_128);
			V_13 = L_129;
			goto IL_0301;
		}

IL_0289_1:
		{
			RuntimeObject* L_130 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_130;
			goto IL_0301;
		}

IL_0293_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = ___0_records;
			NullCheck(L_131);
			if (!(((RuntimeArray*)L_131)->max_length))
			{
				goto IL_02aa_1;
			}
		}
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_132 = __this->____values_15;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ___0_records;
			NullCheck(L_133);
			int32_t L_134 = 0;
			int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
			NullCheck(L_132);
			int32_t L_136 = L_135;
			uint16_t L_137 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
			uint16_t L_138 = L_137;
			RuntimeObject* L_139 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_138);
			V_13 = L_139;
			goto IL_0301;
		}

IL_02aa_1:
		{
			V_13 = NULL;
			goto IL_0301;
		}

IL_02af_1:
		{
			V_4 = 0;
			V_20 = 0;
			goto IL_02cf_1;
		}

IL_02b7_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ___0_records;
			int32_t L_141 = V_20;
			NullCheck(L_140);
			int32_t L_142 = L_141;
			int32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
			bool L_144;
			L_144 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_143, NULL);
			if (!L_144)
			{
				goto IL_02c9_1;
			}
		}
		{
			int32_t L_145 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		}

IL_02c9_1:
		{
			int32_t L_146 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		}

IL_02cf_1:
		{
			int32_t L_147 = V_20;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ___0_records;
			NullCheck(L_148);
			if ((((int32_t)L_147) < ((int32_t)((int32_t)(((RuntimeArray*)L_148)->max_length)))))
			{
				goto IL_02b7_1;
			}
		}
		{
			int32_t L_149 = V_4;
			int32_t L_150 = L_149;
			RuntimeObject* L_151 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_150);
			V_13 = L_151;
			goto IL_0301;
		}

IL_02e1_1:
		{
			goto IL_02f4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02e3;
		}
		throw e;
	}

CATCH_02e3:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		Exception_t* L_154;
		L_154 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_153, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_154, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_02f4:
	{
		int32_t L_155 = ___1_kind;
		Type_t* L_156 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_157;
		L_157 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_155, L_156, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_157, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var)));
	}

IL_0301:
	{
		RuntimeObject* L_158 = V_13;
		return L_158;
	}
}
// System.Int32 System.Data.Common.UInt16Storage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16Storage_Compare_m7466F8EDCD2D1CE031604F73DD6DE91854B710E1 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___0_recordNo1, int32_t ___1_recordNo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____values_15;
		int32_t L_1 = ___0_recordNo1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = __this->____values_15;
		int32_t L_5 = ___1_recordNo2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint16_t L_8 = V_0;
		uint16_t L_9 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0022;
		}
	}
	{
		uint16_t L_10 = V_1;
		uint16_t L_11 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0030;
		}
	}

IL_0022:
	{
		int32_t L_12 = ___0_recordNo1;
		int32_t L_13 = ___1_recordNo2;
		int32_t L_14;
		L_14 = DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11(__this, L_12, L_13, NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		if (!L_15)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_16 = V_2;
		return L_16;
	}

IL_0030:
	{
		uint16_t L_17 = V_0;
		uint16_t L_18 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18));
	}
}
// System.Int32 System.Data.Common.UInt16Storage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16Storage_CompareValueTo_m10106943B4636F0B83BEF9FA0C11621D36FCF2F1 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___0_recordNo, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___1_value;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_recordNo;
		bool L_3;
		L_3 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		return 1;
	}

IL_0016:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = __this->____values_15;
		int32_t L_5 = ___0_recordNo;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		uint16_t L_8 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint16_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_10 = ___0_recordNo;
		bool L_11;
		L_11 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_10, NULL);
		if (L_11)
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		RuntimeObject* L_12 = ___1_value;
		int32_t L_13;
		L_13 = UInt16_CompareTo_m73A3F7183597E4CFBCB8A98A696B4C3DFEDF0845((&V_0), ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_12, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))), NULL);
		return L_13;
	}
}
// System.Object System.Data.Common.UInt16Storage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_ConvertValue_m0E51B305A22AB4DBB31D6536BDD08B6D97791FB6 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___0_value;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = ___0_value;
		RuntimeObject* L_4;
		L_4 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint16_t L_5;
		L_5 = InterfaceFuncInvoker1< uint16_t, RuntimeObject* >::Invoke(6 /* System.UInt16 System.IConvertible::ToUInt16(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_4);
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		___0_value = L_7;
		goto IL_002e;
	}

IL_0026:
	{
		RuntimeObject* L_8 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___0_value = L_8;
	}

IL_002e:
	{
		RuntimeObject* L_9 = ___0_value;
		return L_9;
	}
}
// System.Void System.Data.Common.UInt16Storage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_Copy_m597B6CBE7CD554A4CCFF220C65158FEF2CED449C (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___0_recordNo1, int32_t ___1_recordNo2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_recordNo1;
		int32_t L_1 = ___1_recordNo2;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____values_15;
		int32_t L_3 = ___1_recordNo2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = __this->____values_15;
		int32_t L_5 = ___0_recordNo1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)L_7);
		return;
	}
}
// System.Object System.Data.Common.UInt16Storage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_Get_mE4C31263841B0DF601979B68DAB5664EF92AC2FE (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___0_record, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____values_15;
		int32_t L_1 = ___0_record;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint16_t L_4 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_5;
		L_5 = UInt16_Equals_m5673358CCDB7D6E74A6A13C50FC9151F4DD66089((&V_0), L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		uint16_t L_6 = V_0;
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = ___0_record;
		RuntimeObject* L_10;
		L_10 = DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943(__this, L_9, NULL);
		return L_10;
	}
}
// System.Void System.Data.Common.UInt16Storage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_Set_mD523C7C0D73D333CD3BADB5D651100726ADE54A6 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___0_record, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___1_value;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____values_15;
		int32_t L_3 = ___0_record;
		uint16_t L_4 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)L_4);
		int32_t L_5 = ___0_record;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_5, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = __this->____values_15;
		int32_t L_7 = ___0_record;
		RuntimeObject* L_8 = ___1_value;
		RuntimeObject* L_9;
		L_9 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint16_t L_10;
		L_10 = InterfaceFuncInvoker1< uint16_t, RuntimeObject* >::Invoke(6 /* System.UInt16 System.IConvertible::ToUInt16(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_9);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)L_10);
		int32_t L_11 = ___0_record;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_11, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt16Storage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_SetCapacity_mBE6353467D969AF49B2101D43CAD4CF04792DAAC (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____values_15;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = __this->____values_15;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = __this->____values_15;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_0;
		__this->____values_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)L_8);
		int32_t L_9 = ___0_capacity;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt16Storage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_ConvertXmlToObject_m05135D726C21FE0351ACF89E61A97AB9C18F40A7 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = XmlConvert_ToUInt16_m724BC6C22738955F6FDE18ECF99FB00DBB68DBDE(L_0, NULL);
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Data.Common.UInt16Storage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16Storage_ConvertObjectToXml_m8042F9DA2C481FD061F16FCB70BAD61AB0B5E59B (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_m15222157CD861187A9C674677C6CCCF34DCABCB7(((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_0, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// System.Object System.Data.Common.UInt16Storage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_GetEmptyStorage_m1650AF396733BC1EB0AE39E69A2209A572759CA3 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___0_recordCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_recordCount;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.UInt16Storage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_CopyValue_mB7F352A0AB795D12A52DB2FFBC53FE4FEFF0CAAF (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___0_record, RuntimeObject* ___1_store, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___2_nullbits, int32_t ___3_storeIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___1_store;
		int32_t L_1 = ___3_storeIndex;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____values_15;
		int32_t L_3 = ___0_record;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)Castclass((RuntimeObject*)L_0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var)));
		(((UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)Castclass((RuntimeObject*)L_0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint16_t)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___2_nullbits;
		int32_t L_7 = ___3_storeIndex;
		int32_t L_8 = ___0_record;
		bool L_9;
		L_9 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_8, NULL);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt16Storage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_SetStorage_mAC549F2B7C36E8022B3369C7BD7DFE49A554C4D7 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, RuntimeObject* ___0_store, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___1_nullbits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_store;
		__this->____values_15 = ((UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)Castclass((RuntimeObject*)L_0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)((UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)Castclass((RuntimeObject*)L_0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var)));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___1_nullbits;
		DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline(__this, L_1, NULL);
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
// System.Void System.Data.Common.UInt32Storage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage__ctor_m55769CF4B9B7C1D4A9A381F249C60AED4375BDD5 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___0_column, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___0_column;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		uint32_t L_3 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_5, ((int32_t)10), NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt32Storage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_records, int32_t ___1_kind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___1_kind;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0089_1;
				}
				case 2:
				{
					goto IL_01ea_1;
				}
				case 3:
				{
					goto IL_0241_1;
				}
				case 4:
				{
					goto IL_0292_1;
				}
				case 5:
				{
					goto IL_02ae_1;
				}
				case 6:
				{
					goto IL_00ed_1;
				}
				case 7:
				{
					goto IL_00ed_1;
				}
			}
		}
		{
			goto IL_02e0_1;
		}

IL_002f_1:
		{
			uint32_t L_1 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_1 = ((int64_t)(uint64_t)L_1);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_records;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0064_1;
		}

IL_003e_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_7, NULL);
			if (!L_8)
			{
				goto IL_005e_1;
			}
		}
		{
			uint64_t L_9 = V_1;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____values_15;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			if ((uint64_t)L_9 > kIl2CppUInt64Max - (uint64_t)((int64_t)(uint64_t)L_13))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, ((int64_t)(uint64_t)L_13)));
			V_0 = (bool)1;
		}

IL_005e_1:
		{
			int32_t L_14 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		}

IL_0064_1:
		{
			int32_t L_15 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_10;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
			{
				goto IL_003e_1;
			}
		}
		{
			bool L_17 = V_0;
			if (!L_17)
			{
				goto IL_007c_1;
			}
		}
		{
			uint64_t L_18 = V_1;
			uint64_t L_19 = L_18;
			RuntimeObject* L_20 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_19);
			V_13 = L_20;
			goto IL_0300;
		}

IL_007c_1:
		{
			RuntimeObject* L_21 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_21;
			goto IL_0300;
		}

IL_0089_1:
		{
			uint32_t L_22 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_2 = ((int64_t)(uint64_t)L_22);
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___0_records;
			V_10 = L_23;
			V_11 = 0;
			goto IL_00c4_1;
		}

IL_009a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_10;
			int32_t L_25 = V_11;
			NullCheck(L_24);
			int32_t L_26 = L_25;
			int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			V_14 = L_27;
			int32_t L_28 = V_14;
			bool L_29;
			L_29 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_28, NULL);
			if (!L_29)
			{
				goto IL_00be_1;
			}
		}
		{
			int64_t L_30 = V_2;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->____values_15;
			int32_t L_32 = V_14;
			NullCheck(L_31);
			int32_t L_33 = L_32;
			uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			if (il2cpp_codegen_check_add_overflow((int64_t)L_30, (int64_t)((int64_t)(uint64_t)L_34)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var);
			V_2 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)(uint64_t)L_34)));
			int32_t L_35 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
			V_0 = (bool)1;
		}

IL_00be_1:
		{
			int32_t L_36 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00c4_1:
		{
			int32_t L_37 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_10;
			NullCheck(L_38);
			if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
			{
				goto IL_009a_1;
			}
		}
		{
			bool L_39 = V_0;
			if (!L_39)
			{
				goto IL_00e0_1;
			}
		}
		{
			int64_t L_40 = V_2;
			int32_t L_41 = V_3;
			if ((int64_t)(((int64_t)(L_40/((int64_t)L_41)))) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var);
			uint32_t L_42 = ((uint32_t)((int64_t)(L_40/((int64_t)L_41))));
			RuntimeObject* L_43 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_42);
			V_13 = L_43;
			goto IL_0300;
		}

IL_00e0_1:
		{
			RuntimeObject* L_44 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_44;
			goto IL_0300;
		}

IL_00ed_1:
		{
			V_4 = 0;
			V_5 = (0.0);
			V_6 = (0.0);
			V_7 = (0.0);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___0_records;
			V_10 = L_45;
			V_11 = 0;
			goto IL_0162_1;
		}

IL_0119_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_10;
			int32_t L_47 = V_11;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
			V_15 = L_49;
			int32_t L_50 = V_15;
			bool L_51;
			L_51 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_50, NULL);
			if (!L_51)
			{
				goto IL_015c_1;
			}
		}
		{
			double L_52 = V_6;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = __this->____values_15;
			int32_t L_54 = V_15;
			NullCheck(L_53);
			int32_t L_55 = L_54;
			uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			V_6 = ((double)il2cpp_codegen_add(L_52, ((double)((double)(uint32_t)L_56))));
			double L_57 = V_7;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = __this->____values_15;
			int32_t L_59 = V_15;
			NullCheck(L_58);
			int32_t L_60 = L_59;
			uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = __this->____values_15;
			int32_t L_63 = V_15;
			NullCheck(L_62);
			int32_t L_64 = L_63;
			uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
			V_7 = ((double)il2cpp_codegen_add(L_57, ((double)il2cpp_codegen_multiply(((double)((double)(uint32_t)L_61)), ((double)((double)(uint32_t)L_65))))));
			int32_t L_66 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		}

IL_015c_1:
		{
			int32_t L_67 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		}

IL_0162_1:
		{
			int32_t L_68 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_10;
			NullCheck(L_69);
			if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
			{
				goto IL_0119_1;
			}
		}
		{
			int32_t L_70 = V_4;
			if ((((int32_t)L_70) <= ((int32_t)1)))
			{
				goto IL_01dd_1;
			}
		}
		{
			int32_t L_71 = V_4;
			double L_72 = V_7;
			double L_73 = V_6;
			double L_74 = V_6;
			V_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)L_71), L_72)), ((double)il2cpp_codegen_multiply(L_73, L_74))));
			double L_75 = V_5;
			double L_76 = V_6;
			double L_77 = V_6;
			if ((((double)((double)(L_75/((double)il2cpp_codegen_multiply(L_76, L_77))))) < ((double)(1.0000000000000001E-15))))
			{
				goto IL_019d_1;
			}
		}
		{
			double L_78 = V_5;
			if ((!(((double)L_78) < ((double)(0.0)))))
			{
				goto IL_01aa_1;
			}
		}

IL_019d_1:
		{
			V_5 = (0.0);
			goto IL_01b7_1;
		}

IL_01aa_1:
		{
			double L_79 = V_5;
			int32_t L_80 = V_4;
			int32_t L_81 = V_4;
			V_5 = ((double)(L_79/((double)((int32_t)il2cpp_codegen_multiply(L_80, ((int32_t)il2cpp_codegen_subtract(L_81, 1)))))));
		}

IL_01b7_1:
		{
			int32_t L_82 = ___1_kind;
			if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_01cf_1;
			}
		}
		{
			double L_83 = V_5;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_84;
			L_84 = sqrt(L_83);
			double L_85 = L_84;
			RuntimeObject* L_86 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_85);
			V_13 = L_86;
			goto IL_0300;
		}

IL_01cf_1:
		{
			double L_87 = V_5;
			double L_88 = L_87;
			RuntimeObject* L_89 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_88);
			V_13 = L_89;
			goto IL_0300;
		}

IL_01dd_1:
		{
			RuntimeObject* L_90 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_90;
			goto IL_0300;
		}

IL_01ea_1:
		{
			V_8 = (-1);
			V_16 = 0;
			goto IL_021c_1;
		}

IL_01f2_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = ___0_records;
			int32_t L_92 = V_16;
			NullCheck(L_91);
			int32_t L_93 = L_92;
			int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
			V_17 = L_94;
			int32_t L_95 = V_17;
			bool L_96;
			L_96 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_95, NULL);
			if (!L_96)
			{
				goto IL_0216_1;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = __this->____values_15;
			int32_t L_98 = V_17;
			NullCheck(L_97);
			int32_t L_99 = L_98;
			uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
			uint32_t L_101 = V_8;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint32_t L_102;
			L_102 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_100, L_101, NULL);
			V_8 = L_102;
			V_0 = (bool)1;
		}

IL_0216_1:
		{
			int32_t L_103 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		}

IL_021c_1:
		{
			int32_t L_104 = V_16;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = ___0_records;
			NullCheck(L_105);
			if ((((int32_t)L_104) < ((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length)))))
			{
				goto IL_01f2_1;
			}
		}
		{
			bool L_106 = V_0;
			if (!L_106)
			{
				goto IL_0234_1;
			}
		}
		{
			uint32_t L_107 = V_8;
			uint32_t L_108 = L_107;
			RuntimeObject* L_109 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_108);
			V_13 = L_109;
			goto IL_0300;
		}

IL_0234_1:
		{
			RuntimeObject* L_110 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_110;
			goto IL_0300;
		}

IL_0241_1:
		{
			V_9 = 0;
			V_18 = 0;
			goto IL_0273_1;
		}

IL_0249_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___0_records;
			int32_t L_112 = V_18;
			NullCheck(L_111);
			int32_t L_113 = L_112;
			int32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
			V_19 = L_114;
			int32_t L_115 = V_19;
			bool L_116;
			L_116 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_115, NULL);
			if (!L_116)
			{
				goto IL_026d_1;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = __this->____values_15;
			int32_t L_118 = V_19;
			NullCheck(L_117);
			int32_t L_119 = L_118;
			uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
			uint32_t L_121 = V_9;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint32_t L_122;
			L_122 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_120, L_121, NULL);
			V_9 = L_122;
			V_0 = (bool)1;
		}

IL_026d_1:
		{
			int32_t L_123 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		}

IL_0273_1:
		{
			int32_t L_124 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = ___0_records;
			NullCheck(L_125);
			if ((((int32_t)L_124) < ((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length)))))
			{
				goto IL_0249_1;
			}
		}
		{
			bool L_126 = V_0;
			if (!L_126)
			{
				goto IL_0288_1;
			}
		}
		{
			uint32_t L_127 = V_9;
			uint32_t L_128 = L_127;
			RuntimeObject* L_129 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_128);
			V_13 = L_129;
			goto IL_0300;
		}

IL_0288_1:
		{
			RuntimeObject* L_130 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_130;
			goto IL_0300;
		}

IL_0292_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = ___0_records;
			NullCheck(L_131);
			if (!(((RuntimeArray*)L_131)->max_length))
			{
				goto IL_02a9_1;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = __this->____values_15;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ___0_records;
			NullCheck(L_133);
			int32_t L_134 = 0;
			int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
			NullCheck(L_132);
			int32_t L_136 = L_135;
			uint32_t L_137 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
			uint32_t L_138 = L_137;
			RuntimeObject* L_139 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_138);
			V_13 = L_139;
			goto IL_0300;
		}

IL_02a9_1:
		{
			V_13 = NULL;
			goto IL_0300;
		}

IL_02ae_1:
		{
			V_4 = 0;
			V_20 = 0;
			goto IL_02ce_1;
		}

IL_02b6_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ___0_records;
			int32_t L_141 = V_20;
			NullCheck(L_140);
			int32_t L_142 = L_141;
			int32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
			bool L_144;
			L_144 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_143, NULL);
			if (!L_144)
			{
				goto IL_02c8_1;
			}
		}
		{
			int32_t L_145 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		}

IL_02c8_1:
		{
			int32_t L_146 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		}

IL_02ce_1:
		{
			int32_t L_147 = V_20;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ___0_records;
			NullCheck(L_148);
			if ((((int32_t)L_147) < ((int32_t)((int32_t)(((RuntimeArray*)L_148)->max_length)))))
			{
				goto IL_02b6_1;
			}
		}
		{
			int32_t L_149 = V_4;
			int32_t L_150 = L_149;
			RuntimeObject* L_151 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_150);
			V_13 = L_151;
			goto IL_0300;
		}

IL_02e0_1:
		{
			goto IL_02f3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02e2;
		}
		throw e;
	}

CATCH_02e2:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		Exception_t* L_154;
		L_154 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_153, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_154, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_02f3:
	{
		int32_t L_155 = ___1_kind;
		Type_t* L_156 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_157;
		L_157 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_155, L_156, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_157, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var)));
	}

IL_0300:
	{
		RuntimeObject* L_158 = V_13;
		return L_158;
	}
}
// System.Int32 System.Data.Common.UInt32Storage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32Storage_Compare_mCB3441CD49DEF0E274E74B85A6F9639FAB1A7591 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___0_recordNo1, int32_t ___1_recordNo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____values_15;
		int32_t L_1 = ___0_recordNo1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____values_15;
		int32_t L_5 = ___1_recordNo2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint32_t L_8 = V_0;
		uint32_t L_9 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0030;
		}
	}

IL_0022:
	{
		int32_t L_12 = ___0_recordNo1;
		int32_t L_13 = ___1_recordNo2;
		int32_t L_14;
		L_14 = DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11(__this, L_12, L_13, NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		if (!L_15)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_16 = V_2;
		return L_16;
	}

IL_0030:
	{
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_1;
		if ((!(((uint32_t)L_17) >= ((uint32_t)L_18))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_19 = V_0;
		uint32_t L_20 = V_1;
		if ((!(((uint32_t)L_19) <= ((uint32_t)L_20))))
		{
			goto IL_003a;
		}
	}
	{
		return 0;
	}

IL_003a:
	{
		return 1;
	}

IL_003c:
	{
		return (-1);
	}
}
// System.Int32 System.Data.Common.UInt32Storage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32Storage_CompareValueTo_mE99C163F7AC7F8271B21A13123F93D399E1274C2 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___0_recordNo, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___1_value;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_recordNo;
		bool L_3;
		L_3 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		return 1;
	}

IL_0016:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____values_15;
		int32_t L_5 = ___0_recordNo;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		uint32_t L_8 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_10 = ___0_recordNo;
		bool L_11;
		L_11 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_10, NULL);
		if (L_11)
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		RuntimeObject* L_12 = ___1_value;
		int32_t L_13;
		L_13 = UInt32_CompareTo_mC96F15BE2B06C0268AD1D110D3251CE4DBA43907((&V_0), ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_12, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		return L_13;
	}
}
// System.Object System.Data.Common.UInt32Storage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_ConvertValue_mF4598D5DDCA57F47F180B1126C0E8A22E5E495A2 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___0_value;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = ___0_value;
		RuntimeObject* L_4;
		L_4 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint32_t L_5;
		L_5 = InterfaceFuncInvoker1< uint32_t, RuntimeObject* >::Invoke(8 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_4);
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_6);
		___0_value = L_7;
		goto IL_002e;
	}

IL_0026:
	{
		RuntimeObject* L_8 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___0_value = L_8;
	}

IL_002e:
	{
		RuntimeObject* L_9 = ___0_value;
		return L_9;
	}
}
// System.Void System.Data.Common.UInt32Storage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_Copy_mBDA62FFB81A6F88ADFA3032204805CB19DA2735D (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___0_recordNo1, int32_t ___1_recordNo2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_recordNo1;
		int32_t L_1 = ___1_recordNo2;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____values_15;
		int32_t L_3 = ___1_recordNo2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____values_15;
		int32_t L_5 = ___0_recordNo1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_7);
		return;
	}
}
// System.Object System.Data.Common.UInt32Storage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_Get_m1C06C9C52E6125A9888DF0D8B3DCF6B5C9F28EA1 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___0_record, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____values_15;
		int32_t L_1 = ___0_record;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_5;
		L_5 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3((&V_0), L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		uint32_t L_6 = V_0;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = ___0_record;
		RuntimeObject* L_10;
		L_10 = DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943(__this, L_9, NULL);
		return L_10;
	}
}
// System.Void System.Data.Common.UInt32Storage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_Set_m843F72E4687BFCE156CE23687B22FD5370A55D39 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___0_record, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___1_value;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____values_15;
		int32_t L_3 = ___0_record;
		uint32_t L_4 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_4);
		int32_t L_5 = ___0_record;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_5, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____values_15;
		int32_t L_7 = ___0_record;
		RuntimeObject* L_8 = ___1_value;
		RuntimeObject* L_9;
		L_9 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint32_t L_10;
		L_10 = InterfaceFuncInvoker1< uint32_t, RuntimeObject* >::Invoke(8 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_9);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_10);
		int32_t L_11 = ___0_record;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_11, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt32Storage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_SetCapacity_m504021FCC565D33BF990E4D3378C435146CC4570 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____values_15;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____values_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____values_15;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		__this->____values_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)L_8);
		int32_t L_9 = ___0_capacity;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt32Storage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_ConvertXmlToObject_mA482D708EE6EDCBAD37A4535BE53ADE7220C691A (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = XmlConvert_ToUInt32_m1D00F9B52CAFB9CD660C71B741FC8301890D9F1F(L_0, NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Data.Common.UInt32Storage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32Storage_ConvertObjectToXml_m04AF1550A7C9F44E311B39D32AB881C4B4953D0B (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_m8F28EF0133301A563B7A9853C7DBB023491EFE83(((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_0, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// System.Object System.Data.Common.UInt32Storage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_GetEmptyStorage_m1B5B7D4F481E5203AFED7E72BAD3AA521909E7CB (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___0_recordCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_recordCount;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.UInt32Storage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_CopyValue_m78C2EEBFC72220EBDDDF4CA2AB0D08870B37176F (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___0_record, RuntimeObject* ___1_store, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___2_nullbits, int32_t ___3_storeIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___1_store;
		int32_t L_1 = ___3_storeIndex;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____values_15;
		int32_t L_3 = ___0_record;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)));
		(((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___2_nullbits;
		int32_t L_7 = ___3_storeIndex;
		int32_t L_8 = ___0_record;
		bool L_9;
		L_9 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_8, NULL);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt32Storage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_SetStorage_mD515C18C3AAC48ACDBC974B64DDEF3AFF99B4F19 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, RuntimeObject* ___0_store, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___1_nullbits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_store;
		__this->____values_15 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___1_nullbits;
		DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline(__this, L_1, NULL);
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
// System.Void System.Data.Common.UInt64Storage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage__ctor_m4739DB811D5051982C0A46182B1CED3231D3728B (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___0_column, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___0_column;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		uint64_t L_3 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint64_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_5, ((int32_t)12), NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt64Storage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_records, int32_t ___1_kind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint64_t V_1 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___1_kind;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0087_1;
				}
				case 2:
				{
					goto IL_0200_1;
				}
				case 3:
				{
					goto IL_0258_1;
				}
				case 4:
				{
					goto IL_02aa_1;
				}
				case 5:
				{
					goto IL_02c6_1;
				}
				case 6:
				{
					goto IL_0103_1;
				}
				case 7:
				{
					goto IL_0103_1;
				}
			}
		}
		{
			goto IL_02d2_1;
		}

IL_002f_1:
		{
			uint64_t L_1 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_1 = L_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_records;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0062_1;
		}

IL_003d_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_7, NULL);
			if (!L_8)
			{
				goto IL_005c_1;
			}
		}
		{
			uint64_t L_9 = V_1;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->____values_15;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			int64_t L_13 = (int64_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			if ((uint64_t)L_9 > kIl2CppUInt64Max - (uint64_t)L_13)
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, L_13));
			V_0 = (bool)1;
		}

IL_005c_1:
		{
			int32_t L_14 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		}

IL_0062_1:
		{
			int32_t L_15 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_10;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
			{
				goto IL_003d_1;
			}
		}
		{
			bool L_17 = V_0;
			if (!L_17)
			{
				goto IL_007a_1;
			}
		}
		{
			uint64_t L_18 = V_1;
			uint64_t L_19 = L_18;
			RuntimeObject* L_20 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_19);
			V_13 = L_20;
			goto IL_02f2;
		}

IL_007a_1:
		{
			RuntimeObject* L_21 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_21;
			goto IL_02f2;
		}

IL_0087_1:
		{
			uint64_t L_22 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23;
			L_23 = Decimal_op_Implicit_mA78C1FC00B4E76A91931998BD4FDE3574A54B090(L_22, NULL);
			V_2 = L_23;
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___0_records;
			V_10 = L_24;
			V_11 = 0;
			goto IL_00ce_1;
		}

IL_009c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_10;
			int32_t L_26 = V_11;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			V_14 = L_28;
			int32_t L_29 = V_14;
			bool L_30;
			L_30 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_29, NULL);
			if (!L_30)
			{
				goto IL_00c8_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_31 = V_2;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = __this->____values_15;
			int32_t L_33 = V_14;
			NullCheck(L_32);
			int32_t L_34 = L_33;
			int64_t L_35 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_36;
			L_36 = Decimal_op_Implicit_mA78C1FC00B4E76A91931998BD4FDE3574A54B090(L_35, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_37;
			L_37 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_31, L_36, NULL);
			V_2 = L_37;
			int32_t L_38 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
			V_0 = (bool)1;
		}

IL_00c8_1:
		{
			int32_t L_39 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		}

IL_00ce_1:
		{
			int32_t L_40 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_10;
			NullCheck(L_41);
			if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
			{
				goto IL_009c_1;
			}
		}
		{
			bool L_42 = V_0;
			if (!L_42)
			{
				goto IL_00f6_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_43 = V_2;
			int32_t L_44 = V_3;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_45;
			L_45 = Decimal_op_Implicit_mDBA4FB50BAF9CE8B75AA6ED5ABED7F597CB46177(L_44, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_46;
			L_46 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_43, L_45, NULL);
			uint64_t L_47;
			L_47 = Decimal_op_Explicit_m8AC64F6A5010191CE440A31868AAE5E505008F49(L_46, NULL);
			uint64_t L_48 = L_47;
			RuntimeObject* L_49 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_48);
			V_13 = L_49;
			goto IL_02f2;
		}

IL_00f6_1:
		{
			RuntimeObject* L_50 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_50;
			goto IL_02f2;
		}

IL_0103_1:
		{
			V_4 = 0;
			V_5 = (0.0);
			V_6 = (0.0);
			V_7 = (0.0);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___0_records;
			V_10 = L_51;
			V_11 = 0;
			goto IL_0178_1;
		}

IL_012f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_10;
			int32_t L_53 = V_11;
			NullCheck(L_52);
			int32_t L_54 = L_53;
			int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
			V_15 = L_55;
			int32_t L_56 = V_15;
			bool L_57;
			L_57 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_56, NULL);
			if (!L_57)
			{
				goto IL_0172_1;
			}
		}
		{
			double L_58 = V_6;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_59 = __this->____values_15;
			int32_t L_60 = V_15;
			NullCheck(L_59);
			int32_t L_61 = L_60;
			int64_t L_62 = (int64_t)(L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
			V_6 = ((double)il2cpp_codegen_add(L_58, ((double)((double)(uint64_t)L_62))));
			double L_63 = V_7;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_64 = __this->____values_15;
			int32_t L_65 = V_15;
			NullCheck(L_64);
			int32_t L_66 = L_65;
			int64_t L_67 = (int64_t)(L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_68 = __this->____values_15;
			int32_t L_69 = V_15;
			NullCheck(L_68);
			int32_t L_70 = L_69;
			int64_t L_71 = (int64_t)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
			V_7 = ((double)il2cpp_codegen_add(L_63, ((double)il2cpp_codegen_multiply(((double)((double)(uint64_t)L_67)), ((double)((double)(uint64_t)L_71))))));
			int32_t L_72 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		}

IL_0172_1:
		{
			int32_t L_73 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		}

IL_0178_1:
		{
			int32_t L_74 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_10;
			NullCheck(L_75);
			if ((((int32_t)L_74) < ((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length)))))
			{
				goto IL_012f_1;
			}
		}
		{
			int32_t L_76 = V_4;
			if ((((int32_t)L_76) <= ((int32_t)1)))
			{
				goto IL_01f3_1;
			}
		}
		{
			int32_t L_77 = V_4;
			double L_78 = V_7;
			double L_79 = V_6;
			double L_80 = V_6;
			V_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)L_77), L_78)), ((double)il2cpp_codegen_multiply(L_79, L_80))));
			double L_81 = V_5;
			double L_82 = V_6;
			double L_83 = V_6;
			if ((((double)((double)(L_81/((double)il2cpp_codegen_multiply(L_82, L_83))))) < ((double)(1.0000000000000001E-15))))
			{
				goto IL_01b3_1;
			}
		}
		{
			double L_84 = V_5;
			if ((!(((double)L_84) < ((double)(0.0)))))
			{
				goto IL_01c0_1;
			}
		}

IL_01b3_1:
		{
			V_5 = (0.0);
			goto IL_01cd_1;
		}

IL_01c0_1:
		{
			double L_85 = V_5;
			int32_t L_86 = V_4;
			int32_t L_87 = V_4;
			V_5 = ((double)(L_85/((double)((int32_t)il2cpp_codegen_multiply(L_86, ((int32_t)il2cpp_codegen_subtract(L_87, 1)))))));
		}

IL_01cd_1:
		{
			int32_t L_88 = ___1_kind;
			if ((!(((uint32_t)L_88) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_01e5_1;
			}
		}
		{
			double L_89 = V_5;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_90;
			L_90 = sqrt(L_89);
			double L_91 = L_90;
			RuntimeObject* L_92 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_91);
			V_13 = L_92;
			goto IL_02f2;
		}

IL_01e5_1:
		{
			double L_93 = V_5;
			double L_94 = L_93;
			RuntimeObject* L_95 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_94);
			V_13 = L_95;
			goto IL_02f2;
		}

IL_01f3_1:
		{
			RuntimeObject* L_96 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_96;
			goto IL_02f2;
		}

IL_0200_1:
		{
			V_8 = ((int64_t)(-1));
			V_16 = 0;
			goto IL_0233_1;
		}

IL_0209_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = ___0_records;
			int32_t L_98 = V_16;
			NullCheck(L_97);
			int32_t L_99 = L_98;
			int32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
			V_17 = L_100;
			int32_t L_101 = V_17;
			bool L_102;
			L_102 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_101, NULL);
			if (!L_102)
			{
				goto IL_022d_1;
			}
		}
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_103 = __this->____values_15;
			int32_t L_104 = V_17;
			NullCheck(L_103);
			int32_t L_105 = L_104;
			int64_t L_106 = (int64_t)(L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
			uint64_t L_107 = V_8;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint64_t L_108;
			L_108 = Math_Min_m1C589BAB3D638CE6D3A29E552EDB5E9F95856C28(L_106, L_107, NULL);
			V_8 = L_108;
			V_0 = (bool)1;
		}

IL_022d_1:
		{
			int32_t L_109 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		}

IL_0233_1:
		{
			int32_t L_110 = V_16;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___0_records;
			NullCheck(L_111);
			if ((((int32_t)L_110) < ((int32_t)((int32_t)(((RuntimeArray*)L_111)->max_length)))))
			{
				goto IL_0209_1;
			}
		}
		{
			bool L_112 = V_0;
			if (!L_112)
			{
				goto IL_024b_1;
			}
		}
		{
			uint64_t L_113 = V_8;
			uint64_t L_114 = L_113;
			RuntimeObject* L_115 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_114);
			V_13 = L_115;
			goto IL_02f2;
		}

IL_024b_1:
		{
			RuntimeObject* L_116 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_116;
			goto IL_02f2;
		}

IL_0258_1:
		{
			V_9 = ((int64_t)0);
			V_18 = 0;
			goto IL_028b_1;
		}

IL_0261_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = ___0_records;
			int32_t L_118 = V_18;
			NullCheck(L_117);
			int32_t L_119 = L_118;
			int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
			V_19 = L_120;
			int32_t L_121 = V_19;
			bool L_122;
			L_122 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_121, NULL);
			if (!L_122)
			{
				goto IL_0285_1;
			}
		}
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = __this->____values_15;
			int32_t L_124 = V_19;
			NullCheck(L_123);
			int32_t L_125 = L_124;
			int64_t L_126 = (int64_t)(L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
			uint64_t L_127 = V_9;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint64_t L_128;
			L_128 = Math_Max_m904B9911C775943500AA17842F6D3D45010EAB4A(L_126, L_127, NULL);
			V_9 = L_128;
			V_0 = (bool)1;
		}

IL_0285_1:
		{
			int32_t L_129 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		}

IL_028b_1:
		{
			int32_t L_130 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = ___0_records;
			NullCheck(L_131);
			if ((((int32_t)L_130) < ((int32_t)((int32_t)(((RuntimeArray*)L_131)->max_length)))))
			{
				goto IL_0261_1;
			}
		}
		{
			bool L_132 = V_0;
			if (!L_132)
			{
				goto IL_02a0_1;
			}
		}
		{
			uint64_t L_133 = V_9;
			uint64_t L_134 = L_133;
			RuntimeObject* L_135 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_134);
			V_13 = L_135;
			goto IL_02f2;
		}

IL_02a0_1:
		{
			RuntimeObject* L_136 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_136;
			goto IL_02f2;
		}

IL_02aa_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ___0_records;
			NullCheck(L_137);
			if (!(((RuntimeArray*)L_137)->max_length))
			{
				goto IL_02c1_1;
			}
		}
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_138 = __this->____values_15;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = ___0_records;
			NullCheck(L_139);
			int32_t L_140 = 0;
			int32_t L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
			NullCheck(L_138);
			int32_t L_142 = L_141;
			int64_t L_143 = (int64_t)(L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
			uint64_t L_144 = ((uint64_t)L_143);
			RuntimeObject* L_145 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_144);
			V_13 = L_145;
			goto IL_02f2;
		}

IL_02c1_1:
		{
			V_13 = NULL;
			goto IL_02f2;
		}

IL_02c6_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = ___0_records;
			int32_t L_147 = ___1_kind;
			RuntimeObject* L_148;
			L_148 = DataStorage_Aggregate_m634D6B5F30B4F3ECAA6A42247BE98739655F00A2(__this, L_146, L_147, NULL);
			V_13 = L_148;
			goto IL_02f2;
		}

IL_02d2_1:
		{
			goto IL_02e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d4;
		}
		throw e;
	}

CATCH_02d4:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		Exception_t* L_151;
		L_151 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_150, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_151, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_02e5:
	{
		int32_t L_152 = ___1_kind;
		Type_t* L_153 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_154;
		L_154 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_152, L_153, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_154, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var)));
	}

IL_02f2:
	{
		RuntimeObject* L_155 = V_13;
		return L_155;
	}
}
// System.Int32 System.Data.Common.UInt64Storage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64Storage_Compare_m497C8877F483A956A5CE14BC12DBCAD11B5326D0 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___0_recordNo1, int32_t ___1_recordNo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->____values_15;
		int32_t L_1 = ___0_recordNo1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____values_15;
		int32_t L_5 = ___1_recordNo2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint64_t L_8 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_9;
		L_9 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_0), L_8, NULL);
		if (L_9)
		{
			goto IL_002e;
		}
	}
	{
		uint64_t L_10 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_11;
		L_11 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_1), L_10, NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}

IL_002e:
	{
		int32_t L_12 = ___0_recordNo1;
		int32_t L_13 = ___1_recordNo2;
		int32_t L_14;
		L_14 = DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11(__this, L_12, L_13, NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		if (!L_15)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_16 = V_2;
		return L_16;
	}

IL_003c:
	{
		uint64_t L_17 = V_0;
		uint64_t L_18 = V_1;
		if ((!(((uint64_t)L_17) >= ((uint64_t)L_18))))
		{
			goto IL_0048;
		}
	}
	{
		uint64_t L_19 = V_0;
		uint64_t L_20 = V_1;
		if ((!(((uint64_t)L_19) <= ((uint64_t)L_20))))
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		return 1;
	}

IL_0048:
	{
		return (-1);
	}
}
// System.Int32 System.Data.Common.UInt64Storage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64Storage_CompareValueTo_m4631012F79D00A6F50308FA080619A065037CECE (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___0_recordNo, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___1_value;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_recordNo;
		bool L_3;
		L_3 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		return 1;
	}

IL_0016:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____values_15;
		int32_t L_5 = ___0_recordNo;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		uint64_t L_8 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint64_t L_9 = V_0;
		if ((!(((uint64_t)L_8) == ((uint64_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_10 = ___0_recordNo;
		bool L_11;
		L_11 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_10, NULL);
		if (L_11)
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		RuntimeObject* L_12 = ___1_value;
		int32_t L_13;
		L_13 = UInt64_CompareTo_m1292E47C1FE2A1FC5BC5E6E2EB9C1FCDCEFE7745((&V_0), ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_12, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		return L_13;
	}
}
// System.Object System.Data.Common.UInt64Storage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_ConvertValue_m9C2327BEE08C36F8C9595857ACF1B9DE225B7FD6 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___0_value;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = ___0_value;
		RuntimeObject* L_4;
		L_4 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint64_t L_5;
		L_5 = InterfaceFuncInvoker1< uint64_t, RuntimeObject* >::Invoke(10 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_4);
		uint64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_6);
		___0_value = L_7;
		goto IL_002e;
	}

IL_0026:
	{
		RuntimeObject* L_8 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___0_value = L_8;
	}

IL_002e:
	{
		RuntimeObject* L_9 = ___0_value;
		return L_9;
	}
}
// System.Void System.Data.Common.UInt64Storage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_Copy_m5970161F804C215F152AC08CFAAC9F360CE8AE05 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___0_recordNo1, int32_t ___1_recordNo2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_recordNo1;
		int32_t L_1 = ___1_recordNo2;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____values_15;
		int32_t L_3 = ___1_recordNo2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____values_15;
		int32_t L_5 = ___0_recordNo1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint64_t)L_7);
		return;
	}
}
// System.Object System.Data.Common.UInt64Storage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_Get_m18070C4F819E03907B671EEDCD1477A066A4451B (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___0_record, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->____values_15;
		int32_t L_1 = ___0_record;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint64_t L_4 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_5;
		L_5 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_0), L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		uint64_t L_6 = V_0;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = ___0_record;
		RuntimeObject* L_10;
		L_10 = DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943(__this, L_9, NULL);
		return L_10;
	}
}
// System.Void System.Data.Common.UInt64Storage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_Set_mA5D71A68380191891CDCA959391EC0CE8F63141E (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___0_record, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___1_value;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____values_15;
		int32_t L_3 = ___0_record;
		uint64_t L_4 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint64_t)L_4);
		int32_t L_5 = ___0_record;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_5, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->____values_15;
		int32_t L_7 = ___0_record;
		RuntimeObject* L_8 = ___1_value;
		RuntimeObject* L_9;
		L_9 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint64_t L_10;
		L_10 = InterfaceFuncInvoker1< uint64_t, RuntimeObject* >::Invoke(10 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_9);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint64_t)L_10);
		int32_t L_11 = ___0_record;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_11, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt64Storage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_SetCapacity_m321FBB2BE52F0F24163A34FF33F264E46B3E34A2 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____values_15;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____values_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->____values_15;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = V_0;
		__this->____values_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)L_8);
		int32_t L_9 = ___0_capacity;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt64Storage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_ConvertXmlToObject_m6629CD6A07D80A6DE52B879F1FE263950C0165B6 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = XmlConvert_ToUInt64_m3EDAB359CE90486CEEF0F718D15C131ED2FF2C0A(L_0, NULL);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Data.Common.UInt64Storage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64Storage_ConvertObjectToXml_m67EC50C8F8508499572151B251324490449EA539 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_m9A1A9D40FD8B650DD3EC4DD58410847A20C472E1(((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_0, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// System.Object System.Data.Common.UInt64Storage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_GetEmptyStorage_mBBC649FCA8A68A813B02A292256AB5F5667B3EBB (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___0_recordCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_recordCount;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.UInt64Storage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_CopyValue_m012F86C308F9BDB66FD66B0C9EEC8685E90A56A2 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___0_record, RuntimeObject* ___1_store, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___2_nullbits, int32_t ___3_storeIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___1_store;
		int32_t L_1 = ___3_storeIndex;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____values_15;
		int32_t L_3 = ___0_record;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var)));
		(((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___2_nullbits;
		int32_t L_7 = ___3_storeIndex;
		int32_t L_8 = ___0_record;
		bool L_9;
		L_9 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_8, NULL);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt64Storage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_SetStorage_mB462A195F4ECBF6D7DCC0A0D56D96B3F52ACFDB5 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, RuntimeObject* ___0_store, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___1_nullbits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_store;
		__this->____values_15 = ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var)));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___1_nullbits;
		DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline(__this, L_1, NULL);
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
// System.Void System.Data.Common.DBConnectionString::.ctor(System.String,System.String,System.Data.KeyRestrictionBehavior,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBConnectionString__ctor_m4F12AFF3E11AE42A01972FAEFC1A88C1E7707278 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, String_t* ___0_value, String_t* ___1_restrictions, int32_t ___2_behavior, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___3_synonyms, bool ___4_useOdbcRules, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___3_synonyms;
		bool L_2 = ___4_useOdbcRules;
		DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* L_3 = (DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25*)il2cpp_codegen_object_new(DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DbConnectionOptions__ctor_m11962BCA2665A66ACFE7B2C62723F13A50BAC72C(L_3, L_0, L_1, L_2, NULL);
		String_t* L_4 = ___1_restrictions;
		int32_t L_5 = ___2_behavior;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = ___3_synonyms;
		DBConnectionString__ctor_m97E5D3649A2A768661DF2BF2B3B72B09D3C7188A(__this, L_3, L_4, L_5, L_6, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.DBConnectionString::.ctor(System.Data.Common.DbConnectionOptions,System.String,System.Data.KeyRestrictionBehavior,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBConnectionString__ctor_m97E5D3649A2A768661DF2BF2B3B72B09D3C7188A (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* ___0_connectionOptions, String_t* ___1_restrictions, int32_t ___2_behavior, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___3_synonyms, bool ___4_mustCloneDictionary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72A8F3816115F6F9160426D7F1B9AE5674C90707);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___2_behavior;
		if ((!(((uint32_t)L_0) <= ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___2_behavior;
		__this->____behavior_6 = L_1;
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_2 = ___2_behavior;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3;
		L_3 = ADP_InvalidKeyRestrictionBehavior_mADE425D449D71F3A9B5121C7BE5F6A9BFBAA83C3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DBConnectionString__ctor_m97E5D3649A2A768661DF2BF2B3B72B09D3C7188A_RuntimeMethod_var)));
	}

IL_001a:
	{
		DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* L_4 = ___0_connectionOptions;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = DbConnectionOptions_UsersConnectionString_m7FD9DFB8A075C836C1ED266B90CDAEE6B9E8A7D7(L_4, (bool)0, NULL);
		__this->____encryptedUsersConnectionString_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____encryptedUsersConnectionString_0), (void*)L_5);
		DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* L_6 = ___0_connectionOptions;
		NullCheck(L_6);
		bool L_7 = L_6->____hasPasswordKeyword_7;
		__this->____hasPassword_3 = L_7;
		DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* L_8 = ___0_connectionOptions;
		NullCheck(L_8);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9;
		L_9 = DbConnectionOptions_get_Parsetable_m7A658387C5B035ABE26A17633AF6F11608D5EAFB_inline(L_8, NULL);
		__this->____parsetable_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parsetable_1), (void*)L_9);
		DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* L_10 = ___0_connectionOptions;
		NullCheck(L_10);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_11 = L_10->____keyChain_6;
		__this->____keychain_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keychain_2), (void*)L_11);
		bool L_12 = __this->____hasPassword_3;
		if (!L_12)
		{
			goto IL_00d1;
		}
	}
	{
		DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* L_13 = ___0_connectionOptions;
		NullCheck(L_13);
		bool L_14;
		L_14 = DbConnectionOptions_get_HasPersistablePassword_m685B08FADF791282FA2F5263D1B7F8EDA9377A47(L_13, NULL);
		if (L_14)
		{
			goto IL_00d1;
		}
	}
	{
		bool L_15 = ___4_mustCloneDictionary;
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = __this->____parsetable_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_17, L_16, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
		__this->____parsetable_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parsetable_1), (void*)L_17);
	}

IL_0070:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = __this->____parsetable_1;
		NullCheck(L_18);
		bool L_19;
		L_19 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_18, _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_0097;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = __this->____parsetable_1;
		NullCheck(L_20);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_20, _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0097:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = __this->____parsetable_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_21, _stringLiteral72A8F3816115F6F9160426D7F1B9AE5674C90707, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_00be;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_23 = __this->____parsetable_1;
		NullCheck(L_23);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_23, _stringLiteral72A8F3816115F6F9160426D7F1B9AE5674C90707, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_00be:
	{
		DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* L_24 = ___0_connectionOptions;
		String_t** L_25 = (&__this->____encryptedUsersConnectionString_0);
		NullCheck(L_24);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_26;
		L_26 = DbConnectionOptions_ReplacePasswordPwd_mC575D22690DC59DC2B3A8C6C59ACB9D00CB96BF0(L_24, L_25, (bool)1, NULL);
		__this->____keychain_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keychain_2), (void*)L_26);
	}

IL_00d1:
	{
		String_t* L_27 = ___1_restrictions;
		bool L_28;
		L_28 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_27, NULL);
		if (L_28)
		{
			goto IL_00ee;
		}
	}
	{
		String_t* L_29 = ___1_restrictions;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = ___3_synonyms;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31;
		L_31 = DBConnectionString_ParseRestrictions_mCAC7402B27FCECC54AE36C461EE427746AD46CFF(L_29, L_30, NULL);
		__this->____restrictionValues_4 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____restrictionValues_4), (void*)L_31);
		String_t* L_32 = ___1_restrictions;
		__this->____restrictions_5 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____restrictions_5), (void*)L_32);
	}

IL_00ee:
	{
		return;
	}
}
// System.Void System.Data.Common.DBConnectionString::.ctor(System.Data.Common.DBConnectionString,System.String[],System.Data.KeyRestrictionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBConnectionString__ctor_m2CD3260ED53FF5E3372AAF4895033AF209FAF2CB (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_connectionString, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_restrictionValues, int32_t ___2_behavior, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_0 = ___0_connectionString;
		NullCheck(L_0);
		String_t* L_1 = L_0->____encryptedUsersConnectionString_0;
		__this->____encryptedUsersConnectionString_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____encryptedUsersConnectionString_0), (void*)L_1);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_2 = ___0_connectionString;
		NullCheck(L_2);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_2->____parsetable_1;
		__this->____parsetable_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parsetable_1), (void*)L_3);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_4 = ___0_connectionString;
		NullCheck(L_4);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_5 = L_4->____keychain_2;
		__this->____keychain_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keychain_2), (void*)L_5);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_6 = ___0_connectionString;
		NullCheck(L_6);
		bool L_7 = L_6->____hasPassword_3;
		__this->____hasPassword_3 = L_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___1_restrictionValues;
		__this->____restrictionValues_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____restrictionValues_4), (void*)L_8);
		__this->____restrictions_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____restrictions_5), (void*)(String_t*)NULL);
		int32_t L_9 = ___2_behavior;
		__this->____behavior_6 = L_9;
		return;
	}
}
// System.Data.KeyRestrictionBehavior System.Data.Common.DBConnectionString::get_Behavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DBConnectionString_get_Behavior_m5E3953CBE727970791B5F7405A178778FB8974FF (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____behavior_6;
		return L_0;
	}
}
// System.String System.Data.Common.DBConnectionString::get_ConnectionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBConnectionString_get_ConnectionString_m38788FDCBBFE6CBAAC0538DB8D8B6F32C0FC3079 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____encryptedUsersConnectionString_0;
		return L_0;
	}
}
// System.Boolean System.Data.Common.DBConnectionString::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBConnectionString_get_IsEmpty_mBA3F5627AF5BE0F996F830612A830D35C83AD651 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) 
{
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_0 = __this->____keychain_2;
		return (bool)((((RuntimeObject*)(NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Data.Common.NameValuePair System.Data.Common.DBConnectionString::get_KeyChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* DBConnectionString_get_KeyChain_mCF62B86BF4D7C09A3C2E09E8A4A99E29D659638A (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) 
{
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_0 = __this->____keychain_2;
		return L_0;
	}
}
// System.String System.Data.Common.DBConnectionString::get_Restrictions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBConnectionString_get_Restrictions_m09A757FE01C1E736F42B30043266467B9D20F41D (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE669C2D0639CB3F15C0089688E07C7CB2FEDFC62);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		String_t* L_0 = __this->____restrictions_5;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_0053;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->____restrictionValues_4;
		V_1 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		NullCheck(L_4);
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0053;
		}
	}
	{
		StringBuilder_t* L_5 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_5, NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_0046;
	}

IL_0022:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (L_10)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t* L_11 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_15, NULL);
		StringBuilder_t* L_17 = V_2;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralE669C2D0639CB3F15C0089688E07C7CB2FEDFC62, NULL);
	}

IL_0042:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0046:
	{
		int32_t L_20 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t* L_22 = V_2;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		V_0 = L_23;
	}

IL_0053:
	{
		String_t* L_24 = V_0;
		if (L_24)
		{
			goto IL_005c;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_005c:
	{
		String_t* L_25 = V_0;
		return L_25;
	}
}
// System.String System.Data.Common.DBConnectionString::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBConnectionString_get_Item_m1C574D49F0BD52A0F381187301C2389202F230B8 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, String_t* ___0_keyword, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____parsetable_1;
		String_t* L_1 = ___0_keyword;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_0, L_1, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean System.Data.Common.DBConnectionString::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBConnectionString_ContainsKey_m83D21BAB96A06ECE536A4931954937B044E5D8D8 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, String_t* ___0_keyword, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____parsetable_1;
		String_t* L_1 = ___0_keyword;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_0, L_1, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		return L_2;
	}
}
// System.Data.Common.DBConnectionString System.Data.Common.DBConnectionString::Intersect(System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* DBConnectionString_Intersect_mC5DC37C63728218EDD820D2E11D498AB64823273 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_entry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		int32_t L_0 = __this->____behavior_6;
		V_0 = L_0;
		V_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_1 = ___0_entry;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = 0;
		goto IL_0149;
	}

IL_0013:
	{
		int32_t L_2 = __this->____behavior_6;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_3 = ___0_entry;
		NullCheck(L_3);
		int32_t L_4 = L_3->____behavior_6;
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_00ae;
		}
	}
	{
		V_0 = 0;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_5 = ___0_entry;
		NullCheck(L_5);
		int32_t L_6 = L_5->____behavior_6;
		if (L_6)
		{
			goto IL_006e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->____restrictionValues_4;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = ADP_IsEmptyArray_mB481EB0D007C3DA787A1B145DA53849CF02D2DDE(L_7, NULL);
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_9 = ___0_entry;
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9->____restrictionValues_4;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ADP_IsEmptyArray_mB481EB0D007C3DA787A1B145DA53849CF02D2DDE(L_10, NULL);
		if (L_11)
		{
			goto IL_0149;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_12 = ___0_entry;
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12->____restrictionValues_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = __this->____restrictionValues_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = DBConnectionString_NewRestrictionAllowOnly_m5925B855B2F0EF3A05111131924A907A43112124(L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0149;
	}

IL_0062:
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_16 = ___0_entry;
		NullCheck(L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16->____restrictionValues_4;
		V_1 = L_17;
		goto IL_0149;
	}

IL_006e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = __this->____restrictionValues_4;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = ADP_IsEmptyArray_mB481EB0D007C3DA787A1B145DA53849CF02D2DDE(L_18, NULL);
		if (L_19)
		{
			goto IL_0149;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_20 = ___0_entry;
		NullCheck(L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20->____restrictionValues_4;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = ADP_IsEmptyArray_mB481EB0D007C3DA787A1B145DA53849CF02D2DDE(L_21, NULL);
		if (L_22)
		{
			goto IL_00a2;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = __this->____restrictionValues_4;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_24 = ___0_entry;
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24->____restrictionValues_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26;
		L_26 = DBConnectionString_NewRestrictionAllowOnly_m5925B855B2F0EF3A05111131924A907A43112124(L_23, L_25, NULL);
		V_1 = L_26;
		goto IL_0149;
	}

IL_00a2:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = __this->____restrictionValues_4;
		V_1 = L_27;
		goto IL_0149;
	}

IL_00ae:
	{
		int32_t L_28 = __this->____behavior_6;
		if ((!(((uint32_t)1) == ((uint32_t)L_28))))
		{
			goto IL_00f7;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = __this->____restrictionValues_4;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = ADP_IsEmptyArray_mB481EB0D007C3DA787A1B145DA53849CF02D2DDE(L_29, NULL);
		if (!L_30)
		{
			goto IL_00cd;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_31 = ___0_entry;
		NullCheck(L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31->____restrictionValues_4;
		V_1 = L_32;
		goto IL_0149;
	}

IL_00cd:
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_33 = ___0_entry;
		NullCheck(L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33->____restrictionValues_4;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = ADP_IsEmptyArray_mB481EB0D007C3DA787A1B145DA53849CF02D2DDE(L_34, NULL);
		if (!L_35)
		{
			goto IL_00e3;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = __this->____restrictionValues_4;
		V_1 = L_36;
		goto IL_0149;
	}

IL_00e3:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->____restrictionValues_4;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_38 = ___0_entry;
		NullCheck(L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38->____restrictionValues_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40;
		L_40 = DBConnectionString_NoDuplicateUnion_mFC0F06792577D665E35223934EDEC21A3CC39D77(L_37, L_39, NULL);
		V_1 = L_40;
		goto IL_0149;
	}

IL_00f7:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = __this->____restrictionValues_4;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = ADP_IsEmptyArray_mB481EB0D007C3DA787A1B145DA53849CF02D2DDE(L_41, NULL);
		if (L_42)
		{
			goto IL_0149;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_43 = ___0_entry;
		NullCheck(L_43);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43->____restrictionValues_4;
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = ADP_IsEmptyArray_mB481EB0D007C3DA787A1B145DA53849CF02D2DDE(L_44, NULL);
		if (L_45)
		{
			goto IL_0149;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = __this->____restrictionValues_4;
		NullCheck(L_46);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_47 = ___0_entry;
		NullCheck(L_47);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47->____restrictionValues_4;
		NullCheck(L_48);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))) > ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_0137;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = __this->____restrictionValues_4;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_50 = ___0_entry;
		NullCheck(L_50);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50->____restrictionValues_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52;
		L_52 = DBConnectionString_NewRestrictionIntersect_m9723940E5531A8AB4C12725EF8FCDCE65AD901C6(L_49, L_51, NULL);
		V_1 = L_52;
		goto IL_0149;
	}

IL_0137:
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_53 = ___0_entry;
		NullCheck(L_53);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53->____restrictionValues_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = __this->____restrictionValues_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56;
		L_56 = DBConnectionString_NewRestrictionIntersect_m9723940E5531A8AB4C12725EF8FCDCE65AD901C6(L_54, L_55, NULL);
		V_1 = L_56;
	}

IL_0149:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = V_1;
		int32_t L_58 = V_0;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_59 = (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82*)il2cpp_codegen_object_new(DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		DBConnectionString__ctor_m2CD3260ED53FF5E3372AAF4895033AF209FAF2CB(L_59, __this, L_57, L_58, NULL);
		return L_59;
	}
}
// System.Boolean System.Data.Common.DBConnectionString::IsRestrictedKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBConnectionString_IsRestrictedKeyword_mFF34581C631AE3CF288AAADC70A5CBAA18A2AB00 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____restrictionValues_4;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->____restrictionValues_4;
		String_t* L_2 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_3;
		L_3 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		int32_t L_4;
		L_4 = Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743(L_1, L_2, L_3, Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		return (bool)((((int32_t)0) > ((int32_t)L_4))? 1 : 0);
	}

IL_001d:
	{
		return (bool)1;
	}
}
// System.Boolean System.Data.Common.DBConnectionString::IsSupersetOf(System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBConnectionString_IsSupersetOf_mA14B48A0F03977B0F5DB13119AA29FF27A7597B6 (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_entry, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		int32_t L_0 = __this->____behavior_6;
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
			goto IL_0043;
		}
	}
	{
		goto IL_0073;
	}

IL_0010:
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_3 = ___0_entry;
		NullCheck(L_3);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_4;
		L_4 = DBConnectionString_get_KeyChain_mCF62B86BF4D7C09A3C2E09E8A4A99E29D659638A_inline(L_3, NULL);
		V_1 = L_4;
		goto IL_003e;
	}

IL_0019:
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = NameValuePair_get_Name_m8180C842E2E80672573D4B8E7C1B0BA6E7D4CC40_inline(L_5, NULL);
		bool L_7;
		L_7 = DBConnectionString_ContainsKey_m83D21BAB96A06ECE536A4931954937B044E5D8D8(__this, L_6, NULL);
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = NameValuePair_get_Name_m8180C842E2E80672573D4B8E7C1B0BA6E7D4CC40_inline(L_8, NULL);
		bool L_10;
		L_10 = DBConnectionString_IsRestrictedKeyword_mFF34581C631AE3CF288AAADC70A5CBAA18A2AB00(__this, L_9, NULL);
		if (!L_10)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_11 = V_1;
		NullCheck(L_11);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_12;
		L_12 = NameValuePair_get_Next_m69D3E2DD5F54D65B9C4B2E3AF16E581F5C3AB552_inline(L_11, NULL);
		V_1 = L_12;
	}

IL_003e:
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_13 = V_1;
		if (L_13)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_007f;
	}

IL_0043:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = __this->____restrictionValues_4;
		if (!L_14)
		{
			goto IL_007f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = __this->____restrictionValues_4;
		V_2 = L_15;
		V_3 = 0;
		goto IL_006b;
	}

IL_0056:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_2;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_20 = ___0_entry;
		String_t* L_21 = V_4;
		NullCheck(L_20);
		bool L_22;
		L_22 = DBConnectionString_ContainsKey_m83D21BAB96A06ECE536A4931954937B044E5D8D8(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_006b:
	{
		int32_t L_24 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_007f;
	}

IL_0073:
	{
		int32_t L_26 = __this->____behavior_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_27;
		L_27 = ADP_InvalidKeyRestrictionBehavior_mADE425D449D71F3A9B5121C7BE5F6A9BFBAA83C3(L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DBConnectionString_IsSupersetOf_mA14B48A0F03977B0F5DB13119AA29FF27A7597B6_RuntimeMethod_var)));
	}

IL_007f:
	{
		return (bool)1;
	}
}
// System.String[] System.Data.Common.DBConnectionString::NewRestrictionAllowOnly(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_NewRestrictionAllowOnly_m5925B855B2F0EF3A05111131924A907A43112124 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_allowonly, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_preventusage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		V_2 = 0;
		goto IL_002d;
	}

IL_0006:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___1_preventusage;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_allowonly;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_5;
		L_5 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743(L_0, L_4, L_5, Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		if ((((int32_t)0) <= ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = V_0;
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_8, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_0020:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___0_allowonly;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0029:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002d:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ___0_allowonly;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		V_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_0;
		if (!L_17)
		{
			goto IL_003f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = V_0;
		NullCheck(L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19;
		L_19 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_18, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		V_1 = L_19;
	}

IL_003f:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_1;
		return L_20;
	}
}
// System.String[] System.Data.Common.DBConnectionString::NewRestrictionIntersect(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_NewRestrictionIntersect_m9723940E5531A8AB4C12725EF8FCDCE65AD901C6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_a, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		V_2 = 0;
		goto IL_002d;
	}

IL_0006:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___1_b;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_a;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_5;
		L_5 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743(L_0, L_4, L_5, Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		if ((((int32_t)0) > ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = V_0;
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_8, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_0020:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___0_a;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0029:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002d:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ___0_a;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		V_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_0;
		if (!L_17)
		{
			goto IL_003f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = V_0;
		NullCheck(L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19;
		L_19 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_18, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		V_1 = L_19;
	}

IL_003f:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_1;
		return L_20;
	}
}
// System.String[] System.Data.Common.DBConnectionString::NoDuplicateUnion(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_NoDuplicateUnion_mFC0F06792577D665E35223934EDEC21A3CC39D77 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_a, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisString_t_m19EDD7ED2011551F14D2D35288ECB34DF95C8AFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_a;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_b;
		NullCheck(L_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_2, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)(((RuntimeArray*)L_1)->max_length)))), List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_001e;
	}

IL_0011:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___0_a;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___0_a;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		V_2 = 0;
		goto IL_0046;
	}

IL_0028:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___0_a;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___1_b;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_16;
		L_16 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		int32_t L_17;
		L_17 = Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743(L_11, L_15, L_16, Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		if ((((int32_t)0) <= ((int32_t)L_17)))
		{
			goto IL_0042;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = ___1_b;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_18, L_22, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0042:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0046:
	{
		int32_t L_24 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = ___1_b;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = V_0;
		NullCheck(L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27;
		L_27 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_26, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_29;
		L_29 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		Array_Sort_TisString_t_m19EDD7ED2011551F14D2D35288ECB34DF95C8AFD(L_28, L_29, Array_Sort_TisString_t_m19EDD7ED2011551F14D2D35288ECB34DF95C8AFD_RuntimeMethod_var);
		return L_28;
	}
}
// System.String[] System.Data.Common.DBConnectionString::ParseRestrictions(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_ParseRestrictions_mCAC7402B27FCECC54AE36C461EE427746AD46CFF (String_t* ___0_restrictions, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_synonyms, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* G_B5_0 = NULL;
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1 = ___0_restrictions;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_3, L_2, NULL);
		V_1 = L_3;
		V_2 = 0;
		String_t* L_4 = ___0_restrictions;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_3 = L_5;
		goto IL_0062;
	}

IL_001d:
	{
		int32_t L_6 = V_2;
		V_4 = L_6;
		String_t* L_7 = ___0_restrictions;
		int32_t L_8 = V_4;
		StringBuilder_t* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = DbConnectionOptions_GetKeyValuePair_m21A612DC3AD97AC2EDBB749D37C6F886E1382F3F(L_7, L_8, L_9, (bool)0, (&V_5), (&V_6), NULL);
		V_2 = L_10;
		String_t* L_11 = V_5;
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (L_12)
		{
			goto IL_0062;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = ___1_synonyms;
		if (L_13)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_14 = V_5;
		G_B5_0 = L_14;
		goto IL_0047;
	}

IL_003f:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = ___1_synonyms;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_15, L_16, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		G_B5_0 = L_17;
	}

IL_0047:
	{
		V_7 = G_B5_0;
		String_t* L_18 = V_7;
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_20 = V_5;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21;
		L_21 = ADP_KeywordNotSupported_m3CCE13944F2C887592DDF6403EBB7B6C780D153C(L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DBConnectionString_ParseRestrictions_mCAC7402B27FCECC54AE36C461EE427746AD46CFF_RuntimeMethod_var)));
	}

IL_005a:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = V_0;
		String_t* L_23 = V_7;
		NullCheck(L_22);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_22, L_23, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0062:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_3;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_001d;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = V_0;
		NullCheck(L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27;
		L_27 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_26, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28;
		L_28 = DBConnectionString_RemoveDuplicates_m878CFBB3DA6F03F3D8B207C456A791254D0EC02E(L_27, NULL);
		return L_28;
	}
}
// System.String[] System.Data.Common.DBConnectionString::RemoveDuplicates(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DBConnectionString_RemoveDuplicates_m878CFBB3DA6F03F3D8B207C456A791254D0EC02E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_restrictions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisString_t_m19EDD7ED2011551F14D2D35288ECB34DF95C8AFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_restrictions;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		if ((((int32_t)0) >= ((int32_t)L_1)))
		{
			goto IL_0096;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___0_restrictions;
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_3;
		L_3 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		Array_Sort_TisString_t_m19EDD7ED2011551F14D2D35288ECB34DF95C8AFD(L_2, L_3, Array_Sort_TisString_t_m19EDD7ED2011551F14D2D35288ECB34DF95C8AFD_RuntimeMethod_var);
		V_1 = 1;
		goto IL_0041;
	}

IL_001a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___0_restrictions;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		String_t* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_10 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___0_restrictions;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, L_14, NULL);
		if (!L_15)
		{
			goto IL_003d;
		}
	}

IL_0033:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ___0_restrictions;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, NULL);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_17, 1))), (String_t*)NULL);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_003d:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0041:
	{
		int32_t L_20 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = ___0_restrictions;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = ___0_restrictions;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = ___0_restrictions;
		NullCheck(L_23);
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), 1));
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		if (L_26)
		{
			goto IL_0061;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = ___0_restrictions;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = ___0_restrictions;
		NullCheck(L_28);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, NULL);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_28)->max_length)), 1))), (String_t*)NULL);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_0061:
	{
		int32_t L_30 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = ___0_restrictions;
		NullCheck(L_31);
		if ((((int32_t)L_30) == ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_32 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_32);
		V_3 = L_33;
		V_0 = 0;
		V_4 = 0;
		goto IL_008c;
	}

IL_0075:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = ___0_restrictions;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		String_t* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if (!L_37)
		{
			goto IL_0086;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_3;
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = ___0_restrictions;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		String_t* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_44);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (String_t*)L_44);
	}

IL_0086:
	{
		int32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_008c:
	{
		int32_t L_46 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = ___0_restrictions;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = V_3;
		___0_restrictions = L_48;
	}

IL_0096:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = ___0_restrictions;
		return L_49;
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
// System.Void System.Data.Common.NameValuePermission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission__ctor_mE9A3122540C59A4858936FEDD8B5FA2430F68E87 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Data.Common.NameValuePermission::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission__ctor_m654397BC7CD9E5375B2CF2BCD2C38DDE6B9EF66F (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, String_t* ___0_keyword, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_keyword;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		return;
	}
}
// System.Void System.Data.Common.NameValuePermission::.ctor(System.String,System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission__ctor_m254436B7502FC8F290801AC5922770FE3DA087A0 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, String_t* ___0_value, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___1_entry, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_value;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_1 = ___1_entry;
		__this->____entry_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entry_1), (void*)L_1);
		return;
	}
}
// System.Void System.Data.Common.NameValuePermission::.ctor(System.Data.Common.NameValuePermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission__ctor_m455FF9A0E5C0DF9ADAE06BAE435D54328DB0552D (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* ___0_permit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_0 = ___0_permit;
		NullCheck(L_0);
		String_t* L_1 = L_0->____value_0;
		__this->____value_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_1);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_2 = ___0_permit;
		NullCheck(L_2);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_3 = L_2->____entry_1;
		__this->____entry_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entry_1), (void*)L_3);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_4 = ___0_permit;
		NullCheck(L_4);
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_5 = L_4->____tree_2;
		__this->____tree_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree_2), (void*)L_5);
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_6 = __this->____tree_2;
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_7 = __this->____tree_2;
		NullCheck((RuntimeArray*)L_7);
		RuntimeObject* L_8;
		L_8 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_7, NULL);
		V_0 = ((NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A*)IsInst((RuntimeObject*)L_8, NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_005b;
	}

IL_0047:
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_13 = V_0;
		int32_t L_14 = V_1;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_19;
		L_19 = NameValuePermission_CopyNameValue_m29F776C894F5D7E7DA9E33160D2178D1C0185546(L_18, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_19);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)L_19);
	}

IL_0057:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005b:
	{
		int32_t L_21 = V_1;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_23 = V_0;
		__this->____tree_2 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree_2), (void*)L_23);
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 System.Data.Common.NameValuePermission::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NameValuePermission_System_IComparable_CompareTo_m17ACF3894B1D157544A5F92266C29D8032963396 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, RuntimeObject* ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		String_t* L_1 = __this->____value_0;
		RuntimeObject* L_2 = ___0_a;
		NullCheck(((NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)CastclassSealed((RuntimeObject*)L_2, NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var)));
		String_t* L_3 = ((NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)CastclassSealed((RuntimeObject*)L_2, NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var))->____value_0;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(10 /* System.Int32 System.StringComparer::Compare(System.String,System.String) */, L_0, L_1, L_3);
		return L_4;
	}
}
// System.Void System.Data.Common.NameValuePermission::AddEntry(System.Data.Common.NameValuePermission,System.Collections.ArrayList,System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission_AddEntry_mA400F2E8BE55616338451C77870FC7625654F028 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* ___0_kvtree, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___1_entries, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___2_entry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* V_0 = NULL;
	NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* V_1 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* V_2 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* V_3 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* G_B8_0 = NULL;
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_0 = ___2_entry;
		NullCheck(L_0);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_1;
		L_1 = DBConnectionString_get_KeyChain_mCF62B86BF4D7C09A3C2E09E8A4A99E29D659638A_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_00d0;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_2 = ___2_entry;
		NullCheck(L_2);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_3;
		L_3 = DBConnectionString_get_KeyChain_mCF62B86BF4D7C09A3C2E09E8A4A99E29D659638A_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_00c9;
	}

IL_0017:
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_4 = ___0_kvtree;
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = NameValuePair_get_Name_m8180C842E2E80672573D4B8E7C1B0BA6E7D4CC40_inline(L_5, NULL);
		NullCheck(L_4);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_7;
		L_7 = NameValuePermission_CheckKeyForValue_m8D903580B0278DD45013EE0161F70F9BC220666A(L_4, L_6, NULL);
		V_1 = L_7;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_8 = V_1;
		if (L_8)
		{
			goto IL_003a;
		}
	}
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = NameValuePair_get_Name_m8180C842E2E80672573D4B8E7C1B0BA6E7D4CC40_inline(L_9, NULL);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_11 = (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)il2cpp_codegen_object_new(NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		NameValuePermission__ctor_m654397BC7CD9E5375B2CF2BCD2C38DDE6B9EF66F(L_11, L_10, NULL);
		V_1 = L_11;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_12 = ___0_kvtree;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_13 = V_1;
		NullCheck(L_12);
		NameValuePermission_Add_mEB28D71AB045BE9F0FB38BF34F59576FA6F7CFCE(L_12, L_13, NULL);
	}

IL_003a:
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_14 = V_1;
		___0_kvtree = L_14;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_15 = ___0_kvtree;
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = NameValuePair_get_Value_mE4C36CD35FDCB736D1606F2364E2AA4B14CF47A0_inline(L_16, NULL);
		NullCheck(L_15);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_18;
		L_18 = NameValuePermission_CheckKeyForValue_m8D903580B0278DD45013EE0161F70F9BC220666A(L_15, L_17, NULL);
		V_1 = L_18;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_19 = V_1;
		if (L_19)
		{
			goto IL_007b;
		}
	}
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_20 = V_0;
		NullCheck(L_20);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_21;
		L_21 = NameValuePair_get_Next_m69D3E2DD5F54D65B9C4B2E3AF16E581F5C3AB552_inline(L_20, NULL);
		if (L_21)
		{
			goto IL_0058;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_22 = ___2_entry;
		G_B8_0 = L_22;
		goto IL_0059;
	}

IL_0058:
	{
		G_B8_0 = ((DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82*)(NULL));
	}

IL_0059:
	{
		V_2 = G_B8_0;
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = NameValuePair_get_Value_mE4C36CD35FDCB736D1606F2364E2AA4B14CF47A0_inline(L_23, NULL);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_25 = V_2;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_26 = (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)il2cpp_codegen_object_new(NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		NameValuePermission__ctor_m254436B7502FC8F290801AC5922770FE3DA087A0(L_26, L_24, L_25, NULL);
		V_1 = L_26;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_27 = ___0_kvtree;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_28 = V_1;
		NullCheck(L_27);
		NameValuePermission_Add_mEB28D71AB045BE9F0FB38BF34F59576FA6F7CFCE(L_27, L_28, NULL);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_29 = V_2;
		if (!L_29)
		{
			goto IL_00bf;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_30 = ___1_entries;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32;
		L_32 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_30, L_31);
		goto IL_00bf;
	}

IL_007b:
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_33 = V_0;
		NullCheck(L_33);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_34;
		L_34 = NameValuePair_get_Next_m69D3E2DD5F54D65B9C4B2E3AF16E581F5C3AB552_inline(L_33, NULL);
		if (L_34)
		{
			goto IL_00bf;
		}
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_35 = V_1;
		NullCheck(L_35);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_36 = L_35->____entry_1;
		if (!L_36)
		{
			goto IL_00ab;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_37 = ___1_entries;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_38 = V_1;
		NullCheck(L_38);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_39 = L_38->____entry_1;
		NullCheck(L_37);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(42 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_37, L_39);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_40 = V_1;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_41 = V_1;
		NullCheck(L_41);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_42 = L_41->____entry_1;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_43 = ___2_entry;
		NullCheck(L_42);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_44;
		L_44 = DBConnectionString_Intersect_mC5DC37C63728218EDD820D2E11D498AB64823273(L_42, L_43, NULL);
		NullCheck(L_40);
		L_40->____entry_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->____entry_1), (void*)L_44);
		goto IL_00b2;
	}

IL_00ab:
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_45 = V_1;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_46 = ___2_entry;
		NullCheck(L_45);
		L_45->____entry_1 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->____entry_1), (void*)L_46);
	}

IL_00b2:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_47 = ___1_entries;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_48 = V_1;
		NullCheck(L_48);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_49 = L_48->____entry_1;
		NullCheck(L_47);
		int32_t L_50;
		L_50 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_49);
	}

IL_00bf:
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_51 = V_1;
		___0_kvtree = L_51;
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_52 = V_0;
		NullCheck(L_52);
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_53;
		L_53 = NameValuePair_get_Next_m69D3E2DD5F54D65B9C4B2E3AF16E581F5C3AB552_inline(L_52, NULL);
		V_0 = L_53;
	}

IL_00c9:
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_54 = V_0;
		if (L_54)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_00d0:
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_55 = ___0_kvtree;
		NullCheck(L_55);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_56 = L_55->____entry_1;
		V_3 = L_56;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_57 = V_3;
		if (!L_57)
		{
			goto IL_00f0;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_58 = ___1_entries;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_59 = V_3;
		NullCheck(L_58);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(42 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_58, L_59);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_60 = ___0_kvtree;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_61 = V_3;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_62 = ___2_entry;
		NullCheck(L_61);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_63;
		L_63 = DBConnectionString_Intersect_mC5DC37C63728218EDD820D2E11D498AB64823273(L_61, L_62, NULL);
		NullCheck(L_60);
		L_60->____entry_1 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&L_60->____entry_1), (void*)L_63);
		goto IL_00f7;
	}

IL_00f0:
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_64 = ___0_kvtree;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_65 = ___2_entry;
		NullCheck(L_64);
		L_64->____entry_1 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&L_64->____entry_1), (void*)L_65);
	}

IL_00f7:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_66 = ___1_entries;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_67 = ___0_kvtree;
		NullCheck(L_67);
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_68 = L_67->____entry_1;
		NullCheck(L_66);
		int32_t L_69;
		L_69 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_66, L_68);
		return;
	}
}
// System.Void System.Data.Common.NameValuePermission::Add(System.Data.Common.NameValuePermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValuePermission_Add_mEB28D71AB045BE9F0FB38BF34F59576FA6F7CFCE (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* ___0_permit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisNameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_mF7C6AA8D80C48AC6D6CE5EA192ABBBECD89F9180_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* V_0 = NULL;
	int32_t V_1 = 0;
	NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_0 = __this->____tree_2;
		V_0 = L_0;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_1 = V_0;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0010;
	}

IL_000d:
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_2 = V_0;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
	}

IL_0010:
	{
		V_1 = G_B3_0;
		int32_t L_3 = V_1;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_4 = (NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A*)(NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A*)SZArrayNew(NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(1, L_3)));
		V_2 = L_4;
		V_3 = 0;
		goto IL_0028;
	}

IL_001e:
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_5 = V_2;
		int32_t L_6 = V_3;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_10);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)L_10);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0028:
	{
		int32_t L_12 = V_3;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), 1)))))
		{
			goto IL_001e;
		}
	}
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_14 = V_2;
		int32_t L_15 = V_1;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_16 = ___0_permit;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)L_16);
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_17 = V_2;
		Array_Sort_TisNameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_mF7C6AA8D80C48AC6D6CE5EA192ABBBECD89F9180(L_17, Array_Sort_TisNameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_mF7C6AA8D80C48AC6D6CE5EA192ABBBECD89F9180_RuntimeMethod_var);
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_18 = V_2;
		__this->____tree_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree_2), (void*)L_18);
		return;
	}
}
// System.Boolean System.Data.Common.NameValuePermission::CheckValueForKeyPermit(System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameValuePermission_CheckValueForKeyPermit_mC61B33CD379E723D4B0A326367B867A6B1A16AB4 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_parsetable, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* V_1 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* V_2 = NULL;
	int32_t V_3 = 0;
	NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* V_7 = NULL;
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_0 = ___0_parsetable;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		V_0 = (bool)0;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_1 = __this->____tree_2;
		V_1 = L_1;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_3 = ___0_parsetable;
		NullCheck(L_3);
		bool L_4;
		L_4 = DBConnectionString_get_IsEmpty_mBA3F5627AF5BE0F996F830612A830D35C83AD651(L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0070;
		}
	}
	{
		V_3 = 0;
		goto IL_006a;
	}

IL_001f:
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_6 = V_1;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_10 = V_4;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_11 = V_4;
		NullCheck(L_11);
		String_t* L_12 = L_11->____value_0;
		V_5 = L_12;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_13 = ___0_parsetable;
		String_t* L_14 = V_5;
		NullCheck(L_13);
		bool L_15;
		L_15 = DBConnectionString_ContainsKey_m83D21BAB96A06ECE536A4931954937B044E5D8D8(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_16 = ___0_parsetable;
		String_t* L_17 = V_5;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = DBConnectionString_get_Item_m1C574D49F0BD52A0F381187301C2389202F230B8(L_16, L_17, NULL);
		V_6 = L_18;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_19 = V_4;
		String_t* L_20 = V_6;
		NullCheck(L_19);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_21;
		L_21 = NameValuePermission_CheckKeyForValue_m8D903580B0278DD45013EE0161F70F9BC220666A(L_19, L_20, NULL);
		V_7 = L_21;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_22 = V_7;
		if (!L_22)
		{
			goto IL_0064;
		}
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_23 = V_7;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_24 = ___0_parsetable;
		NullCheck(L_23);
		bool L_25;
		L_25 = NameValuePermission_CheckValueForKeyPermit_mC61B33CD379E723D4B0A326367B867A6B1A16AB4(L_23, L_24, NULL);
		if (!L_25)
		{
			goto IL_0062;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0066;
	}

IL_0062:
	{
		return (bool)0;
	}

IL_0064:
	{
		return (bool)0;
	}

IL_0066:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006a:
	{
		int32_t L_27 = V_3;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_001f;
		}
	}

IL_0070:
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_29 = __this->____entry_1;
		V_2 = L_29;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_30 = V_2;
		if (!L_30)
		{
			goto IL_0082;
		}
	}
	{
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_31 = V_2;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_32 = ___0_parsetable;
		NullCheck(L_31);
		bool L_33;
		L_33 = DBConnectionString_IsSupersetOf_mA14B48A0F03977B0F5DB13119AA29FF27A7597B6(L_31, L_32, NULL);
		V_0 = L_33;
	}

IL_0082:
	{
		bool L_34 = V_0;
		return L_34;
	}
}
// System.Data.Common.NameValuePermission System.Data.Common.NameValuePermission::CheckKeyForValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* NameValuePermission_CheckKeyForValue_m8D903580B0278DD45013EE0161F70F9BC220666A (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, String_t* ___0_keyInQuestion, const RuntimeMethod* method) 
{
	NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* V_0 = NULL;
	int32_t V_1 = 0;
	NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* V_2 = NULL;
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_0 = __this->____tree_2;
		V_0 = L_0;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		V_1 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		String_t* L_6 = ___0_keyInQuestion;
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_7 = V_2;
		NullCheck(L_7);
		String_t* L_8 = L_7->____value_0;
		bool L_9;
		L_9 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_6, L_8, 5, NULL);
		if (!L_9)
		{
			goto IL_0023;
		}
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_10 = V_2;
		return L_10;
	}

IL_0023:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0027:
	{
		int32_t L_12 = V_1;
		NameValuePermissionU5BU5D_t49BB1300486983E8BF1A2A0E04CA1170EDEE648A* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000e;
		}
	}

IL_002d:
	{
		return (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)NULL;
	}
}
// System.Data.Common.NameValuePermission System.Data.Common.NameValuePermission::CopyNameValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* NameValuePermission_CopyNameValue_m29F776C894F5D7E7DA9E33160D2178D1C0185546 (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_0 = (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)il2cpp_codegen_object_new(NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NameValuePermission__ctor_m455FF9A0E5C0DF9ADAE06BAE435D54328DB0552D(L_0, __this, NULL);
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
// System.String System.Data.Common.DbConnectionStringBuilderUtil::ConvertToString(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DbConnectionStringBuilderUtil_ConvertToString_mA608FF6CDDE6121C684FC933789629111EC5C164 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Convert_ToString_m03249561BBE153E4ED7E2E130ECC65F08B322261(L_0, NULL);
		V_0 = L_1;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.InvalidCastException)
		V_1 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7;
		L_7 = ADP_ConvertFailed_m20652EC2B52B253D6AA18BAC8E6B47883375FF9F(L_3, L_5, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbConnectionStringBuilderUtil_ConvertToString_mA608FF6CDDE6121C684FC933789629111EC5C164_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0021:
	{
		String_t* L_8 = V_0;
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
// System.Void System.Data.Common.DBDataPermission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission__ctor_m2F4D278862CA2B68984246AABE8A7C75FE330CD0 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) 
{
	{
		DBDataPermission__ctor_m154E797E8E46958EB831D3CECC7F3BCC0D0F9443(__this, 0, NULL);
		return;
	}
}
// System.Void System.Data.Common.DBDataPermission::.ctor(System.Security.Permissions.PermissionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission__ctor_m154E797E8E46958EB831D3CECC7F3BCC0D0F9443 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_0 = ((NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_StaticFields*)il2cpp_codegen_static_fields_for(NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var))->___Default_3;
		__this->____keyvaluetree_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyvaluetree_2), (void*)L_0);
		CodeAccessPermission__ctor_m4C9AF8F7D3EB2A919DBDC92FE9512A1F68D375AA(__this, NULL);
		int32_t L_1 = ___0_state;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		__this->____isUnrestricted_0 = (bool)1;
		return;
	}

IL_001d:
	{
		int32_t L_2 = ___0_state;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		__this->____isUnrestricted_0 = (bool)0;
		return;
	}

IL_0028:
	{
		int32_t L_3 = ___0_state;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4;
		L_4 = ADP_InvalidPermissionState_mBC7F259F3F6B9D27787EB24F69AC215D373BCFDE(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DBDataPermission__ctor_m154E797E8E46958EB831D3CECC7F3BCC0D0F9443_RuntimeMethod_var)));
	}
}
// System.Void System.Data.Common.DBDataPermission::.ctor(System.Data.Common.DBDataPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission__ctor_mDC588D2D2D056400CB14E114C28AB170722A3BD7 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* ___0_permission, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_0 = ((NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_StaticFields*)il2cpp_codegen_static_fields_for(NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var))->___Default_3;
		__this->____keyvaluetree_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyvaluetree_2), (void*)L_0);
		CodeAccessPermission__ctor_m4C9AF8F7D3EB2A919DBDC92FE9512A1F68D375AA(__this, NULL);
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_1 = ___0_permission;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2;
		L_2 = ADP_ArgumentNull_m9E75E977BECB9425FF93F92818643FFCE0D0D635(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B6B1C228E98C5A6664BF09EA9662B2BB13942B3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DBDataPermission__ctor_mDC588D2D2D056400CB14E114C28AB170722A3BD7_RuntimeMethod_var)));
	}

IL_001f:
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_3 = ___0_permission;
		DBDataPermission_CopyFrom_m4E7B6CFFD8F11BB01FD0EA8CDC4BAFE60072EC86(__this, L_3, NULL);
		return;
	}
}
// System.Void System.Data.Common.DBDataPermission::.ctor(System.Data.Common.DBDataPermissionAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission__ctor_mBBA8C74591DF17A57D831E220A6C8C8C062EED5C (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* ___0_permissionAttribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_0 = ((NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_StaticFields*)il2cpp_codegen_static_fields_for(NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var))->___Default_3;
		__this->____keyvaluetree_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyvaluetree_2), (void*)L_0);
		CodeAccessPermission__ctor_m4C9AF8F7D3EB2A919DBDC92FE9512A1F68D375AA(__this, NULL);
		DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* L_1 = ___0_permissionAttribute;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2;
		L_2 = ADP_ArgumentNull_m9E75E977BECB9425FF93F92818643FFCE0D0D635(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B6B1C228E98C5A6664BF09EA9662B2BB13942B3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DBDataPermission__ctor_mBBA8C74591DF17A57D831E220A6C8C8C062EED5C_RuntimeMethod_var)));
	}

IL_001f:
	{
		DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* L_3 = ___0_permissionAttribute;
		NullCheck(L_3);
		bool L_4;
		L_4 = SecurityAttribute_get_Unrestricted_m09C9A08EB6D9939ABAEACD1D49AD06270742E6E1_inline(L_3, NULL);
		__this->____isUnrestricted_0 = L_4;
		bool L_5 = __this->____isUnrestricted_0;
		if (L_5)
		{
			goto IL_0067;
		}
	}
	{
		DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* L_6 = ___0_permissionAttribute;
		NullCheck(L_6);
		bool L_7;
		L_7 = DBDataPermissionAttribute_get_AllowBlankPassword_mC81FEE679AB7F11C016B37D73A87D2880DB09D60_inline(L_6, NULL);
		__this->____allowBlankPassword_1 = L_7;
		DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* L_8 = ___0_permissionAttribute;
		NullCheck(L_8);
		bool L_9;
		L_9 = DBDataPermissionAttribute_ShouldSerializeConnectionString_mDAF29856018011B799A975BA875978D4F66D22EE(L_8, NULL);
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* L_10 = ___0_permissionAttribute;
		NullCheck(L_10);
		bool L_11;
		L_11 = DBDataPermissionAttribute_ShouldSerializeKeyRestrictions_m1E27621A6DF62CA8AA61D97B94CCECF40D6A7457(L_10, NULL);
		if (!L_11)
		{
			goto IL_0067;
		}
	}

IL_004f:
	{
		DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* L_12 = ___0_permissionAttribute;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = DBDataPermissionAttribute_get_ConnectionString_m28B85E4EB2268A38CE0612E6E286E7BD0B8FDB80(L_12, NULL);
		DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* L_14 = ___0_permissionAttribute;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = DBDataPermissionAttribute_get_KeyRestrictions_mBB03235153CA03FB1DE4814BA01CBEE6B17C5345(L_14, NULL);
		DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* L_16 = ___0_permissionAttribute;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = DBDataPermissionAttribute_get_KeyRestrictionBehavior_m693605A2449257698074140C8649323AB7E514F9_inline(L_16, NULL);
		VirtualActionInvoker3< String_t*, String_t*, int32_t >::Invoke(14 /* System.Void System.Data.Common.DBDataPermission::Add(System.String,System.String,System.Data.KeyRestrictionBehavior) */, __this, L_13, L_15, L_17);
	}

IL_0067:
	{
		return;
	}
}
// System.Boolean System.Data.Common.DBDataPermission::get_AllowBlankPassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermission_get_AllowBlankPassword_m2A152B8948FEC0DF627DF1C2AF1CD838B9FC8B57 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____allowBlankPassword_1;
		return L_0;
	}
}
// System.Void System.Data.Common.DBDataPermission::Add(System.String,System.String,System.Data.KeyRestrictionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission_Add_m6BBFBB682827FE53423732E3014BC1D7877C7A6B (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, String_t* ___0_connectionString, String_t* ___1_restrictions, int32_t ___2_behavior, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* V_0 = NULL;
	{
		String_t* L_0 = ___0_connectionString;
		String_t* L_1 = ___1_restrictions;
		int32_t L_2 = ___2_behavior;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_3 = (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82*)il2cpp_codegen_object_new(DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DBConnectionString__ctor_m4F12AFF3E11AE42A01972FAEFC1A88C1E7707278(L_3, L_0, L_1, L_2, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, (bool)0, NULL);
		V_0 = L_3;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_4 = V_0;
		DBDataPermission_AddPermissionEntry_mC754BC42580BCC68738169EB2090C77086CA62D7(__this, L_4, NULL);
		return;
	}
}
// System.Void System.Data.Common.DBDataPermission::AddPermissionEntry(System.Data.Common.DBConnectionString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission_AddPermissionEntry_mC754BC42580BCC68738169EB2090C77086CA62D7 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* ___0_entry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_0 = __this->____keyvaluetree_2;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_1 = (NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B*)il2cpp_codegen_object_new(NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NameValuePermission__ctor_mE9A3122540C59A4858936FEDD8B5FA2430F68E87(L_1, NULL);
		__this->____keyvaluetree_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyvaluetree_2), (void*)L_1);
	}

IL_0013:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = __this->____keyvalues_3;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_3, NULL);
		__this->____keyvalues_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyvalues_3), (void*)L_3);
	}

IL_0026:
	{
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_4 = __this->____keyvaluetree_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_5 = __this->____keyvalues_3;
		DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_6 = ___0_entry;
		NameValuePermission_AddEntry_mA400F2E8BE55616338451C77870FC7625654F028(L_4, L_5, L_6, NULL);
		__this->____isUnrestricted_0 = (bool)0;
		return;
	}
}
// System.Security.IPermission System.Data.Common.DBDataPermission::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DBDataPermission_Copy_mB97FF5EC8DC3E78CCA034AC70DECDCBE49A2D68E (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) 
{
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_0;
		L_0 = VirtualFuncInvoker0< DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* >::Invoke(15 /* System.Data.Common.DBDataPermission System.Data.Common.DBDataPermission::CreateInstance() */, __this);
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_1 = L_0;
		NullCheck(L_1);
		DBDataPermission_CopyFrom_m4E7B6CFFD8F11BB01FD0EA8CDC4BAFE60072EC86(L_1, __this, NULL);
		return L_1;
	}
}
// System.Void System.Data.Common.DBDataPermission::CopyFrom(System.Data.Common.DBDataPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermission_CopyFrom_m4E7B6CFFD8F11BB01FD0EA8CDC4BAFE60072EC86 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* ___0_permission, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_0 = ___0_permission;
		NullCheck(L_0);
		bool L_1;
		L_1 = DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960_inline(L_0, NULL);
		__this->____isUnrestricted_0 = L_1;
		bool L_2 = __this->____isUnrestricted_0;
		if (L_2)
		{
			goto IL_0057;
		}
	}
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_3 = ___0_permission;
		NullCheck(L_3);
		bool L_4;
		L_4 = DBDataPermission_get_AllowBlankPassword_m2A152B8948FEC0DF627DF1C2AF1CD838B9FC8B57_inline(L_3, NULL);
		__this->____allowBlankPassword_1 = L_4;
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_5 = ___0_permission;
		NullCheck(L_5);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = L_5->____keyvalues_3;
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_7 = ___0_permission;
		NullCheck(L_7);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_8 = L_7->____keyvalues_3;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Object System.Collections.ArrayList::Clone() */, L_8);
		__this->____keyvalues_3 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_9, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyvalues_3), (void*)((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_9, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)));
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_10 = ___0_permission;
		NullCheck(L_10);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_11 = L_10->____keyvaluetree_2;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_12 = ___0_permission;
		NullCheck(L_12);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_13 = L_12->____keyvaluetree_2;
		NullCheck(L_13);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_14;
		L_14 = NameValuePermission_CopyNameValue_m29F776C894F5D7E7DA9E33160D2178D1C0185546(L_13, NULL);
		__this->____keyvaluetree_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyvaluetree_2), (void*)L_14);
	}

IL_0057:
	{
		return;
	}
}
// System.Data.Common.DBDataPermission System.Data.Common.DBDataPermission::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* DBDataPermission_CreateInstance_mA34E14915152DC285E3AA024A1F9FD3333E32775 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_2;
		L_2 = Activator_CreateInstance_mBA4E894FD2BB619F187B9049E50AFF802259E6AC(L_0, ((int32_t)20), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, L_1, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		return ((DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A*)IsInstClass((RuntimeObject*)L_2, DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Data.Common.DBDataPermission::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermission_IsEmpty_mF9494EDB17DEB1462F929971E2EF040EF322FFB1 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) 
{
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____keyvalues_3;
		V_0 = L_0;
		bool L_1;
		L_1 = DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		bool L_2;
		L_2 = DBDataPermission_get_AllowBlankPassword_m2A152B8948FEC0DF627DF1C2AF1CD838B9FC8B57_inline(__this, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_4);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)1;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Boolean System.Data.Common.DBDataPermission::IsSubsetOf(System.Security.IPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermission_IsSubsetOf_mA28333E305C07257BFEF1F56D3076756EC0BB411 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___0_target;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		bool L_1;
		L_1 = DBDataPermission_IsEmpty_mF9494EDB17DEB1462F929971E2EF040EF322FFB1(__this, NULL);
		return L_1;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___0_target;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = ADP_PermissionTypeMismatch_m1BE6D115C8150FC93E8EE5FFE4C57DD4BC6408D3(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DBDataPermission_IsSubsetOf_mA28333E305C07257BFEF1F56D3076756EC0BB411_RuntimeMethod_var)));
	}

IL_0023:
	{
		RuntimeObject* L_7 = ___0_target;
		V_0 = ((DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A*)IsInstClass((RuntimeObject*)L_7, DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A_il2cpp_TypeInfo_var));
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960_inline(L_8, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00b0;
		}
	}
	{
		bool L_11;
		L_11 = DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960_inline(__this, NULL);
		if (L_11)
		{
			goto IL_00b0;
		}
	}
	{
		bool L_12;
		L_12 = DBDataPermission_get_AllowBlankPassword_m2A152B8948FEC0DF627DF1C2AF1CD838B9FC8B57_inline(__this, NULL);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = DBDataPermission_get_AllowBlankPassword_m2A152B8948FEC0DF627DF1C2AF1CD838B9FC8B57_inline(L_13, NULL);
		if (!L_14)
		{
			goto IL_00b0;
		}
	}

IL_004c:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_15 = __this->____keyvalues_3;
		if (!L_15)
		{
			goto IL_005c;
		}
	}
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_16 = V_0;
		NullCheck(L_16);
		NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_17 = L_16->____keyvaluetree_2;
		if (!L_17)
		{
			goto IL_00b0;
		}
	}

IL_005c:
	{
		V_1 = (bool)1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_18 = __this->____keyvalues_3;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_19 = __this->____keyvalues_3;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_19);
		V_2 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_21 = V_2;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_21, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_22 = V_4;
					if (!L_22)
					{
						goto IL_00af;
					}
				}
				{
					RuntimeObject* L_23 = V_4;
					NullCheck(L_23);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
				}

IL_00af:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0092_1;
			}

IL_0074_1:
			{
				RuntimeObject* L_24 = V_2;
				NullCheck(L_24);
				RuntimeObject* L_25;
				L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				V_3 = ((DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82*)CastclassSealed((RuntimeObject*)L_25, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var));
				DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_26 = V_0;
				NullCheck(L_26);
				NameValuePermission_t7D6639B1AC51AD049A6D83F5842B6BFB7C2F2C0B* L_27 = L_26->____keyvaluetree_2;
				DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_28 = V_3;
				NullCheck(L_27);
				bool L_29;
				L_29 = NameValuePermission_CheckValueForKeyPermit_mC61B33CD379E723D4B0A326367B867A6B1A16AB4(L_27, L_28, NULL);
				if (L_29)
				{
					goto IL_0092_1;
				}
			}
			{
				V_1 = (bool)0;
				goto IL_00b0;
			}

IL_0092_1:
			{
				RuntimeObject* L_30 = V_2;
				NullCheck(L_30);
				bool L_31;
				L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
				if (L_31)
				{
					goto IL_0074_1;
				}
			}
			{
				goto IL_00b0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		bool L_32 = V_1;
		return L_32;
	}
}
// System.Boolean System.Data.Common.DBDataPermission::IsUnrestricted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960 (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isUnrestricted_0;
		return L_0;
	}
}
// System.Security.IPermission System.Data.Common.DBDataPermission::Union(System.Security.IPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DBDataPermission_Union_mC8386E968B3661C649A6EFDB53572A3ECD473EDC (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPermission_t1FC61281490693550E8BDEE554C88F4EE7F847C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___0_target;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Security.IPermission System.Security.CodeAccessPermission::Copy() */, __this);
		return L_1;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___0_target;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = ADP_PermissionTypeMismatch_m1BE6D115C8150FC93E8EE5FFE4C57DD4BC6408D3(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DBDataPermission_Union_mC8386E968B3661C649A6EFDB53572A3ECD473EDC_RuntimeMethod_var)));
	}

IL_0023:
	{
		bool L_7;
		L_7 = DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Security.IPermission System.Security.CodeAccessPermission::Copy() */, __this);
		return L_8;
	}

IL_0032:
	{
		RuntimeObject* L_9 = ___0_target;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Security.IPermission System.Security.IPermission::Copy() */, IPermission_t1FC61281490693550E8BDEE554C88F4EE7F847C6_il2cpp_TypeInfo_var, L_9);
		V_0 = ((DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A*)CastclassClass((RuntimeObject*)L_10, DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A_il2cpp_TypeInfo_var));
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_11 = V_0;
		NullCheck(L_11);
		bool L_12;
		L_12 = DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_009d;
		}
	}
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_13 = V_0;
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_14 = L_13;
		NullCheck(L_14);
		bool L_15 = L_14->____allowBlankPassword_1;
		bool L_16;
		L_16 = DBDataPermission_get_AllowBlankPassword_m2A152B8948FEC0DF627DF1C2AF1CD838B9FC8B57_inline(__this, NULL);
		NullCheck(L_14);
		L_14->____allowBlankPassword_1 = (bool)((int32_t)((int32_t)L_15|(int32_t)L_16));
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_17 = __this->____keyvalues_3;
		if (!L_17)
		{
			goto IL_009d;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_18 = __this->____keyvalues_3;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_18);
		V_1 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_20 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_21 = V_3;
					if (!L_21)
					{
						goto IL_009c;
					}
				}
				{
					RuntimeObject* L_22 = V_3;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_009c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0082_1;
			}

IL_006f_1:
			{
				RuntimeObject* L_23 = V_1;
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				V_2 = ((DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82*)CastclassSealed((RuntimeObject*)L_24, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var));
				DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_25 = V_0;
				DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_26 = V_2;
				NullCheck(L_25);
				DBDataPermission_AddPermissionEntry_mC754BC42580BCC68738169EB2090C77086CA62D7(L_25, L_26, NULL);
			}

IL_0082_1:
			{
				RuntimeObject* L_27 = V_1;
				NullCheck(L_27);
				bool L_28;
				L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
				if (L_28)
				{
					goto IL_006f_1;
				}
			}
			{
				goto IL_009d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_29 = V_0;
		NullCheck(L_29);
		bool L_30;
		L_30 = DBDataPermission_IsEmpty_mF9494EDB17DEB1462F929971E2EF040EF322FFB1(L_29, NULL);
		if (L_30)
		{
			goto IL_00a7;
		}
	}
	{
		DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* L_31 = V_0;
		return L_31;
	}

IL_00a7:
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String System.Data.Common.DBDataPermission::EncodeXmlValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBDataPermission_EncodeXmlValue_m6798BFA5ACB33906C1334CD02EEDCFBFEEC10A5E (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_1 = ___0_value;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)0) >= ((int32_t)L_2)))
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_3 = ___0_value;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_3, 0, ((int32_t)32), NULL);
		___0_value = L_4;
		String_t* L_5 = ___0_value;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_5, NULL);
		___0_value = L_6;
		String_t* L_7 = ___0_value;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_7, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, _stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387, NULL);
		___0_value = L_8;
		String_t* L_9 = ___0_value;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_9, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, _stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837, NULL);
		___0_value = L_10;
		String_t* L_11 = ___0_value;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, _stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8, NULL);
		___0_value = L_12;
		String_t* L_13 = ___0_value;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_13, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, _stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642, NULL);
		___0_value = L_14;
		String_t* L_15 = ___0_value;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_15, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E, NULL);
		___0_value = L_16;
	}

IL_0079:
	{
		String_t* L_17 = ___0_value;
		return L_17;
	}
}
// System.Security.SecurityElement System.Data.Common.DBDataPermission::ToXml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* DBDataPermission_ToXml_m5BF6C9AFFAE760220F9B36543CBD2DC2563992CB (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyRestrictionBehavior_t3D2C9B77D9CD24D8441F602B3AB7FFE19E3AAA82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1926C3CFEB3B0A6084B9763026648652299B0858);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AAEC8786694D721644DCA5D5D5E740198D0C59C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B501556B12B5890C878B29FB23C1807F2B680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral751CB4C664E67669AA66D427445B152FD37984CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849859401F9633D6C558FAFFBA018F4718DAA666);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE56EEA1AAFBE6694486D93FE0133746BCF7E55FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB5D1438C5AACE179CB023A8357BC0281DF38C52);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* G_B7_0 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* G_B6_0 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* G_B9_0 = NULL;
	DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* G_B8_0 = NULL;
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		V_0 = L_0;
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_1 = (SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55*)il2cpp_codegen_object_new(SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SecurityElement__ctor_m1BC698E428D96ECEF625ADF86F95D30B5E4CD184(L_1, _stringLiteralE56EEA1AAFBE6694486D93FE0133746BCF7E55FE, NULL);
		V_1 = L_1;
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_2 = V_1;
		Type_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_4, ((int32_t)34), ((int32_t)39), NULL);
		NullCheck(L_2);
		SecurityElement_AddAttribute_mF31D985A7B289E7858F3EBFE782ECCC74F1F08AC(L_2, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, L_5, NULL);
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_6 = V_1;
		NullCheck(L_6);
		SecurityElement_AddAttribute_mF31D985A7B289E7858F3EBFE782ECCC74F1F08AC(L_6, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		bool L_7;
		L_7 = DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_8 = V_1;
		NullCheck(L_8);
		SecurityElement_AddAttribute_mF31D985A7B289E7858F3EBFE782ECCC74F1F08AC(L_8, _stringLiteral849859401F9633D6C558FAFFBA018F4718DAA666, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		goto IL_0143;
	}

IL_0059:
	{
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_9 = V_1;
		bool* L_10 = (&__this->____allowBlankPassword_1);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_12;
		L_12 = Boolean_ToString_m8A8E8910575F649AA72E01649BACE16F0F362FF4(L_10, L_11, NULL);
		NullCheck(L_9);
		SecurityElement_AddAttribute_mF31D985A7B289E7858F3EBFE782ECCC74F1F08AC(L_9, _stringLiteral1AAEC8786694D721644DCA5D5D5E740198D0C59C, L_12, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_13 = __this->____keyvalues_3;
		if (!L_13)
		{
			goto IL_0143;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_14 = __this->____keyvalues_3;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(38 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_14);
		V_2 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_16 = V_2;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_17 = V_6;
					if (!L_17)
					{
						goto IL_0142;
					}
				}
				{
					RuntimeObject* L_18 = V_6;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_0142:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0122_1;
			}

IL_0090_1:
			{
				RuntimeObject* L_19 = V_2;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_21 = (SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55*)il2cpp_codegen_object_new(SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55_il2cpp_TypeInfo_var);
				NullCheck(L_21);
				SecurityElement__ctor_m1BC698E428D96ECEF625ADF86F95D30B5E4CD184(L_21, _stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7, NULL);
				V_3 = L_21;
				DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_22 = ((DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82*)CastclassSealed((RuntimeObject*)L_20, DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82_il2cpp_TypeInfo_var));
				NullCheck(L_22);
				String_t* L_23;
				L_23 = DBConnectionString_get_ConnectionString_m38788FDCBBFE6CBAAC0538DB8D8B6F32C0FC3079_inline(L_22, NULL);
				V_4 = L_23;
				String_t* L_24 = V_4;
				String_t* L_25;
				L_25 = DBDataPermission_EncodeXmlValue_m6798BFA5ACB33906C1334CD02EEDCFBFEEC10A5E(__this, L_24, NULL);
				V_4 = L_25;
				String_t* L_26 = V_4;
				il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
				bool L_27;
				L_27 = ADP_IsEmpty_m085794600DF9754BBC19E05E870E1ADBD24AD94C(L_26, NULL);
				G_B6_0 = L_22;
				if (L_27)
				{
					G_B7_0 = L_22;
					goto IL_00ce_1;
				}
			}
			{
				SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_28 = V_3;
				String_t* L_29 = V_4;
				NullCheck(L_28);
				SecurityElement_AddAttribute_mF31D985A7B289E7858F3EBFE782ECCC74F1F08AC(L_28, _stringLiteral751CB4C664E67669AA66D427445B152FD37984CE, L_29, NULL);
				G_B7_0 = G_B6_0;
			}

IL_00ce_1:
			{
				DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* L_30 = G_B7_0;
				NullCheck(L_30);
				String_t* L_31;
				L_31 = DBConnectionString_get_Restrictions_m09A757FE01C1E736F42B30043266467B9D20F41D(L_30, NULL);
				V_4 = L_31;
				String_t* L_32 = V_4;
				String_t* L_33;
				L_33 = DBDataPermission_EncodeXmlValue_m6798BFA5ACB33906C1334CD02EEDCFBFEEC10A5E(__this, L_32, NULL);
				V_4 = L_33;
				String_t* L_34 = V_4;
				G_B8_0 = L_30;
				if (L_34)
				{
					G_B9_0 = L_30;
					goto IL_00eb_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
				String_t* L_35 = ((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___StrEmpty_6;
				V_4 = L_35;
				G_B9_0 = G_B8_0;
			}

IL_00eb_1:
			{
				SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_36 = V_3;
				String_t* L_37 = V_4;
				NullCheck(L_36);
				SecurityElement_AddAttribute_mF31D985A7B289E7858F3EBFE782ECCC74F1F08AC(L_36, _stringLiteralFB5D1438C5AACE179CB023A8357BC0281DF38C52, L_37, NULL);
				NullCheck(G_B9_0);
				int32_t L_38;
				L_38 = DBConnectionString_get_Behavior_m5E3953CBE727970791B5F7405A178778FB8974FF_inline(G_B9_0, NULL);
				V_5 = L_38;
				Il2CppFakeBox<int32_t> L_39(KeyRestrictionBehavior_t3D2C9B77D9CD24D8441F602B3AB7FFE19E3AAA82_il2cpp_TypeInfo_var, (&V_5));
				String_t* L_40;
				L_40 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_39), NULL);
				V_4 = L_40;
				SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_41 = V_3;
				String_t* L_42 = V_4;
				NullCheck(L_41);
				SecurityElement_AddAttribute_mF31D985A7B289E7858F3EBFE782ECCC74F1F08AC(L_41, _stringLiteral1926C3CFEB3B0A6084B9763026648652299B0858, L_42, NULL);
				SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_43 = V_1;
				SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_44 = V_3;
				NullCheck(L_43);
				SecurityElement_AddChild_m3718404151331EFAA46D25D354B5C4AA1FD8DDFE(L_43, L_44, NULL);
			}

IL_0122_1:
			{
				RuntimeObject* L_45 = V_2;
				NullCheck(L_45);
				bool L_46;
				L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_45);
				if (L_46)
				{
					goto IL_0090_1;
				}
			}
			{
				goto IL_0143;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0143:
	{
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_47 = V_1;
		return L_47;
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
// System.Void System.Data.Common.DBDataPermissionAttribute::.ctor(System.Security.Permissions.SecurityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBDataPermissionAttribute__ctor_mC366AE63CA5D0C634598CB34542D41DED6FDEF00 (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, int32_t ___0_action, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_action;
		CodeAccessSecurityAttribute__ctor_mC4EB601DAE9787003AB1A2D8BDE8B3A9CB3BEE72(__this, L_0, NULL);
		return;
	}
}
// System.Boolean System.Data.Common.DBDataPermissionAttribute::get_AllowBlankPassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermissionAttribute_get_AllowBlankPassword_mC81FEE679AB7F11C016B37D73A87D2880DB09D60 (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____allowBlankPassword_2;
		return L_0;
	}
}
// System.String System.Data.Common.DBDataPermissionAttribute::get_ConnectionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBDataPermissionAttribute_get_ConnectionString_m28B85E4EB2268A38CE0612E6E286E7BD0B8FDB80 (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->____connectionString_3;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0010:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Data.KeyRestrictionBehavior System.Data.Common.DBDataPermissionAttribute::get_KeyRestrictionBehavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DBDataPermissionAttribute_get_KeyRestrictionBehavior_m693605A2449257698074140C8649323AB7E514F9 (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____behavior_5;
		return L_0;
	}
}
// System.String System.Data.Common.DBDataPermissionAttribute::get_KeyRestrictions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBDataPermissionAttribute_get_KeyRestrictions_mBB03235153CA03FB1DE4814BA01CBEE6B17C5345 (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->____restrictions_4;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var);
		String_t* L_2 = ((ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t2C39CD1D5CEFC1B88FF6F7C7AD1916F0FD538CC0_il2cpp_TypeInfo_var))->___StrEmpty_6;
		return L_2;
	}

IL_0010:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Data.Common.DBDataPermissionAttribute::ShouldSerializeConnectionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermissionAttribute_ShouldSerializeConnectionString_mDAF29856018011B799A975BA875978D4F66D22EE (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____connectionString_3;
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Data.Common.DBDataPermissionAttribute::ShouldSerializeKeyRestrictions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBDataPermissionAttribute_ShouldSerializeKeyRestrictions_m1E27621A6DF62CA8AA61D97B94CCECF40D6A7457 (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____restrictions_4;
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Decimal_Round_m1DD2AAA2C9C8D2A1CDA6ECCC2724A075616FF624(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___0_ticks, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_ticks;
		__this->____ticks_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___0_nullbits, const RuntimeMethod* method) 
{
	{
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_0 = ___0_nullbits;
		__this->____dbNullBits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dbNullBits_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* DbConnectionOptions_get_Parsetable_m7A658387C5B035ABE26A17633AF6F11608D5EAFB_inline (DbConnectionOptions_tA7B55DACBCC4D58ABBE993AFA6D1B98830E55B25* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____parsetable_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinal_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* DBConnectionString_get_KeyChain_mCF62B86BF4D7C09A3C2E09E8A4A99E29D659638A_inline (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) 
{
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_0 = __this->____keychain_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NameValuePair_get_Name_m8180C842E2E80672573D4B8E7C1B0BA6E7D4CC40_inline (NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* NameValuePair_get_Next_m69D3E2DD5F54D65B9C4B2E3AF16E581F5C3AB552_inline (NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* __this, const RuntimeMethod* method) 
{
	{
		NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* L_0 = __this->____next_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NameValuePair_get_Value_mE4C36CD35FDCB736D1606F2364E2AA4B14CF47A0_inline (NameValuePair_t5DC1E95A374A88431DCB2509A8DC80C84A32838F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityAttribute_get_Unrestricted_m09C9A08EB6D9939ABAEACD1D49AD06270742E6E1_inline (SecurityAttribute_tB79F828B77F1B081DD57CEF810E748C7C871D7C5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Unrestricted_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DBDataPermissionAttribute_get_AllowBlankPassword_mC81FEE679AB7F11C016B37D73A87D2880DB09D60_inline (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____allowBlankPassword_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DBDataPermissionAttribute_get_KeyRestrictionBehavior_m693605A2449257698074140C8649323AB7E514F9_inline (DBDataPermissionAttribute_t6A670BEB9B53B515C543AD96E8328A4C701A1725* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____behavior_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DBDataPermission_IsUnrestricted_mFC2C45C816A432C8449B3A2DEA24F3BFAA9B9960_inline (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isUnrestricted_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DBDataPermission_get_AllowBlankPassword_m2A152B8948FEC0DF627DF1C2AF1CD838B9FC8B57_inline (DBDataPermission_t36922E530941871E3EF4433FAA7F34871E79750A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____allowBlankPassword_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DBConnectionString_get_ConnectionString_m38788FDCBBFE6CBAAC0538DB8D8B6F32C0FC3079_inline (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____encryptedUsersConnectionString_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DBConnectionString_get_Behavior_m5E3953CBE727970791B5F7405A178778FB8974FF_inline (DBConnectionString_tF77496C159B947E247C32B2D6157322B712AAA82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____behavior_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
