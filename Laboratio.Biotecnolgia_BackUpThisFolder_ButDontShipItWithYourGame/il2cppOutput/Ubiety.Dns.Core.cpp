#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA;
// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress>
struct Collection_1_tE48AA187F55CD76B677887F9A9BD63FFBB70312B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>
struct Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<Ubiety.Dns.Core.AdditionalRR>
struct IEnumerable_1_t0E606B37C6B47E050AD902948ECE0D2AE6D34D5D;
// System.Collections.Generic.IEnumerable`1<Ubiety.Dns.Core.AnswerRR>
struct IEnumerable_1_t92BAB4B710A4F5EEC346B150378795A3788E3361;
// System.Collections.Generic.IEnumerable`1<Ubiety.Dns.Core.AuthorityRR>
struct IEnumerable_1_t18FBADC8278CD5025517A5E7338AA83D0441CA8B;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Net.IPEndPoint>
struct IEnumerable_1_tC965655CB5E497C998F1BC5FA8C98B694FFAECAF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Ubiety.Dns.Core.Question>
struct IEnumerable_1_t4D12A9CC9B5F324571376DDA2B013FBF6E477278;
// System.Collections.Generic.IEnumerable`1<Ubiety.Dns.Core.ResourceRecord>
struct IEnumerable_1_t26242978C6B1BCC15CC38E8E5F367D1A19E9471E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ubiety.Dns.Core.Response>
struct KeyCollection_tE025BEB953F7F2E9ED32BF61A9A963F20DC4DF79;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR>
struct List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>
struct List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR>
struct List_1_t8495645EA7A19014CF8116B843091FE2672BDECB;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<System.Net.IPEndPoint>
struct List_1_t795244976F29D111A17237A89D0064EF85FBC5AC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>
struct List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA>
struct List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordAaaa>
struct List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordCert>
struct List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordCname>
struct List_1_t1612B1151B5A9B114CF74C46B4C409521857C084;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.Mail.RecordMx>
struct List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordNs>
struct List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordPtr>
struct List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSoa>
struct List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSrv>
struct List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordTxt>
struct List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.ResourceRecord>
struct List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Ubiety.Dns.Core.Response>
struct TaskFactory_1_t7B768BDC4B3154236DAD4D54AEE88B3B37D825A5;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Ubiety.Dns.Core.Response>
struct Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ubiety.Dns.Core.Response>
struct ValueCollection_t2A0634D4E4AA3B076DEA8E54A783477CB91E95B1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ubiety.Dns.Core.Response>[]
struct EntryU5BU5D_t977100D2302460E8977539D14E6AF9F4D8006512;
// Ubiety.Dns.Core.AdditionalRR[]
struct AdditionalRRU5BU5D_tA7A98EB90E0F13950038C8CF59A41427CD76CFDA;
// Ubiety.Dns.Core.AnswerRR[]
struct AnswerRRU5BU5D_t2771C994B1CA3B63EBCFA67A34A6665CD6FC9BE6;
// Ubiety.Dns.Core.AuthorityRR[]
struct AuthorityRRU5BU5D_t23A333FEC1D7A0744E0988AE6C054EBF4980B989;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPEndPoint[]
struct IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Ubiety.Dns.Core.Question[]
struct QuestionU5BU5D_t7CD0A968EF3CE463FA794A1A4A9BB0DB10E751AB;
// Ubiety.Dns.Core.Records.General.RecordA[]
struct RecordAU5BU5D_tD697521A75F7E4C8E5A086582D8B8FAF80A1151E;
// Ubiety.Dns.Core.Records.General.RecordAaaa[]
struct RecordAaaaU5BU5D_t1354BE84EF21C75484DC67B3ED2DC60433B2B591;
// Ubiety.Dns.Core.Records.RecordCert[]
struct RecordCertU5BU5D_tA87698E822E990A6BD0EA3BBF3CB10DBE09A27F6;
// Ubiety.Dns.Core.Records.General.RecordCname[]
struct RecordCnameU5BU5D_tA8737C2C5981B745A72F33272F21DAB9C9A8E56A;
// Ubiety.Dns.Core.Records.Mail.RecordMx[]
struct RecordMxU5BU5D_t5F7E5587C075FCBBADE21046F5CFD6BB6C7D80F8;
// Ubiety.Dns.Core.Records.RecordNs[]
struct RecordNsU5BU5D_t0484D64226D7D6D0B0FA81780FD91C9FBF9701B5;
// Ubiety.Dns.Core.Records.RecordPtr[]
struct RecordPtrU5BU5D_tC68E236983C31D87135899D8991D11761D2DFE29;
// Ubiety.Dns.Core.Records.RecordSoa[]
struct RecordSoaU5BU5D_tD0B027A9282AAB00DDEF8230507B0641A7D4AF35;
// Ubiety.Dns.Core.Records.RecordSrv[]
struct RecordSrvU5BU5D_tB7C9C2CDE8EAEBDA4D82290E14B60BACA8C5662E;
// Ubiety.Dns.Core.Records.RecordTxt[]
struct RecordTxtU5BU5D_t1470B2F4B90E5ED7B9EA7E4F3D343539D725B73C;
// Ubiety.Dns.Core.ResourceRecord[]
struct ResourceRecordU5BU5D_t0BD621A2C2A0931A36FD899F2CD89A352E5C2D92;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Ubiety.Dns.Core.AdditionalRR
struct AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31;
// Ubiety.Dns.Core.AnswerRR
struct AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Ubiety.Dns.Core.AuthorityRR
struct AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.IO.BufferedStream
struct BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Ubiety.Dns.Core.Header
struct Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A;
// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Ubiety.Dns.Core.Question
struct Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2;
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// Ubiety.Dns.Core.Records.Record
struct Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D;
// Ubiety.Dns.Core.Records.General.RecordA
struct RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2;
// Ubiety.Dns.Core.Records.NotUsed.RecordA6
struct RecordA6_t9AAEF9425BDAAD19AE37A009014277285E952A14;
// Ubiety.Dns.Core.Records.General.RecordAaaa
struct RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D;
// Ubiety.Dns.Core.Records.RecordAfsdb
struct RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5;
// Ubiety.Dns.Core.Records.NotUsed.RecordApl
struct RecordApl_tEA8B1BEFE784A2B99AB33D3D83DC404DD3C1746B;
// Ubiety.Dns.Core.Records.NotUsed.RecordAtma
struct RecordAtma_t2109CD168F50A4E8267679E327A7AD776671F322;
// Ubiety.Dns.Core.Common.RecordAttribute
struct RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01;
// Ubiety.Dns.Core.Records.RecordCert
struct RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A;
// Ubiety.Dns.Core.Records.General.RecordCname
struct RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4;
// Ubiety.Dns.Core.Records.NotUsed.RecordDhcid
struct RecordDhcid_t2368E609C0C69E1FB4358F6C17DF424838DED72C;
// Ubiety.Dns.Core.Records.RecordDname
struct RecordDname_t726AC7580CCFCFA272A2B663E07FC8490E46FA73;
// Ubiety.Dns.Core.Records.NotUsed.RecordDnsKey
struct RecordDnsKey_tF5E9EB95EFA183C410AC64C208046E7FD537ADB3;
// Ubiety.Dns.Core.Records.RecordDs
struct RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702;
// Ubiety.Dns.Core.Records.NotUsed.RecordEid
struct RecordEid_t14058DFD43FC2FB78B3C4BCB8D41A9F0047BAF03;
// Ubiety.Dns.Core.Records.NotUsed.RecordGid
struct RecordGid_t2DE7046AC1B01AB60ABDC57D4F2D73BF616F82A2;
// Ubiety.Dns.Core.Records.Obsolete.RecordGpos
struct RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372;
// Ubiety.Dns.Core.Records.RecordHinfo
struct RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D;
// Ubiety.Dns.Core.Records.NotUsed.RecordHip
struct RecordHip_t719FBBB0711D1EFA49D9F26AB35F52D0565F8D5E;
// Ubiety.Dns.Core.Records.NotUsed.RecordIpsecKey
struct RecordIpsecKey_t29C7AAD8257FCECCA1B390B6A12206EF5CCC6A34;
// Ubiety.Dns.Core.Records.RecordIsdn
struct RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA;
// Ubiety.Dns.Core.Records.RecordKey
struct RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297;
// Ubiety.Dns.Core.Records.RecordKx
struct RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2;
// Ubiety.Dns.Core.Records.RecordLoc
struct RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E;
// Ubiety.Dns.Core.Records.Mail.RecordMb
struct RecordMb_t8C4062A4BFD4835C81427802BD75AA222751087C;
// Ubiety.Dns.Core.Records.Obsolete.RecordMd
struct RecordMd_t877F2AC8EAA563246D911594FFDF2D9B4CC0986E;
// Ubiety.Dns.Core.Records.Obsolete.RecordMf
struct RecordMf_t1AE13A3E638557DD3630EE8FCD20845CCDE47BA8;
// Ubiety.Dns.Core.Records.Mail.RecordMg
struct RecordMg_t1B1CF282B38EDB2770F24015E1735210CD9AA002;
// Ubiety.Dns.Core.Records.Mail.RecordMinfo
struct RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684;
// Ubiety.Dns.Core.Records.Mail.RecordMr
struct RecordMr_tB1B7AD7A31D43691D8CEE3578174A965E17793CD;
// Ubiety.Dns.Core.Records.Mail.RecordMx
struct RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501;
// Ubiety.Dns.Core.Records.RecordNaptr
struct RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175;
// Ubiety.Dns.Core.Records.NotUsed.RecordNimloc
struct RecordNimloc_tFADCC1FAE741AC22E89B281D0F4EF39A17E648F4;
// Ubiety.Dns.Core.Records.RecordNs
struct RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7;
// Ubiety.Dns.Core.Records.RecordNsap
struct RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F;
// Ubiety.Dns.Core.Records.Obsolete.RecordNsapPtr
struct RecordNsapPtr_t27669D358D436A3C7C95D0517E97CA59C9B85F7E;
// Ubiety.Dns.Core.Records.NotUsed.RecordNsec
struct RecordNsec_t14D49602C32B76586838563587CF0ECE08514554;
// Ubiety.Dns.Core.Records.NotUsed.RecordNsec3
struct RecordNsec3_t5485AD604C599397EAB556E0B231B9B830FF1C16;
// Ubiety.Dns.Core.Records.NotUsed.RecordNsec3Param
struct RecordNsec3Param_t174E72011CA9BFD71C5DDA9B04EB2FEABE3F9BBF;
// Ubiety.Dns.Core.Records.RecordNull
struct RecordNull_t58BB1A20A9A00CBD48358AB2C3D945449901F517;
// Ubiety.Dns.Core.Records.Obsolete.RecordNxt
struct RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7;
// Ubiety.Dns.Core.Records.NotUsed.RecordOpt
struct RecordOpt_t408CB9445015BCA3AACC5BD70F1C10814EF340D1;
// Ubiety.Dns.Core.Records.RecordPtr
struct RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED;
// Ubiety.Dns.Core.Records.RecordPx
struct RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616;
// Ubiety.Dns.Core.RecordReader
struct RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F;
// Ubiety.Dns.Core.Records.RecordRp
struct RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027;
// Ubiety.Dns.Core.Records.NotUsed.RecordRrsig
struct RecordRrsig_t6C755403AD745BA0059B2313BA61A2B1E2D9489F;
// Ubiety.Dns.Core.Records.RecordRt
struct RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87;
// Ubiety.Dns.Core.Records.RecordSig
struct RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034;
// Ubiety.Dns.Core.Records.NotUsed.RecordSink
struct RecordSink_tF8AAABD52861950CA97C3EE9BD42163DA6925969;
// Ubiety.Dns.Core.Records.RecordSoa
struct RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E;
// Ubiety.Dns.Core.Records.NotUsed.RecordSpf
struct RecordSpf_tE3982780DC7AACC4E99319E69DCAF8556383664C;
// Ubiety.Dns.Core.Records.RecordSrv
struct RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D;
// Ubiety.Dns.Core.Records.NotUsed.RecordSshfp
struct RecordSshfp_tCCAEC40D0E3902A16C1475002702BD8A41DCB17C;
// Ubiety.Dns.Core.Records.RecordTkey
struct RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED;
// Ubiety.Dns.Core.Records.RecordTsig
struct RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F;
// Ubiety.Dns.Core.Records.RecordTxt
struct RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05;
// Ubiety.Dns.Core.Records.NotUsed.RecordUid
struct RecordUid_tA28B4B8A029546FC2F078DF59D3B5BB6FE869DED;
// Ubiety.Dns.Core.Records.NotUsed.RecordUinfo
struct RecordUinfo_t219E0CAF247EDA99641BA645A120D4164033996F;
// Ubiety.Dns.Core.Records.NotUsed.RecordUnknown
struct RecordUnknown_t83B66E9E93A19DAB6AC144ADF36ADBF5FF90F3DC;
// Ubiety.Dns.Core.Records.NotUsed.RecordUnspec
struct RecordUnspec_t763EC6F6606E8291821D8D32CC183166309CE3DB;
// Ubiety.Dns.Core.Records.RecordWks
struct RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E;
// Ubiety.Dns.Core.Records.RecordX25
struct RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39;
// Ubiety.Dns.Core.Request
struct Request_t5EC29E166C112954C06827C8C28901253ABC6350;
// Ubiety.Dns.Core.Resolver
struct Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7;
// Ubiety.Dns.Core.ResourceRecord
struct ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E;
// Ubiety.Dns.Core.Response
struct Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// Ubiety.Dns.Core.Common.VerboseEventArgs
struct VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1;
// Ubiety.Dns.Core.Common.VerboseOutputEventArgs
struct VerboseOutputEventArgs_t653A5F4BDE705AE98E436B26B1147033A6EFB026;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Ubiety.Dns.Core.Resolver/VerboseEventHandler
struct VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t26242978C6B1BCC15CC38E8E5F367D1A19E9471E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1119B9843C1ABF64812D574F66FACBEA1B653E7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t16E7D3FE11465476DD7529A8DDDD6519A2E26D6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1612B1151B5A9B114CF74C46B4C409521857C084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t795244976F29D111A17237A89D0064EF85FBC5AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8495645EA7A19014CF8116B843091FE2672BDECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationClass_t33E5CF9DBDB43B2F2EE22AB27F89F4D4AC4C77EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuestionClass_t529DE8CF4BA9C179930AFE97A7661203FF65A3CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuestionType_t9597E4EB323EB8890DC3CC4FFB42619474815323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordType_tE038672BFC25770D08365B50FC92F593EBA37C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_t5EC29E166C112954C06827C8C28901253ABC6350_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0429DCAEF2DE8DA49F4296A2209EB18888A1DBC8;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral2381F188111328278560DCCEECC70F86539CB6E5;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2D814748926232D9F1D5C122801B345926DFDCBC;
IL2CPP_EXTERN_C String_t* _stringLiteral32D6961CD49930454F129E9E75BED6AE52481089;
IL2CPP_EXTERN_C String_t* _stringLiteral37D0038455B66C67F0C4F16DF38E2876626B6E30;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral4FCFF02564802E21DA221E46540BA58E4A91653A;
IL2CPP_EXTERN_C String_t* _stringLiteral59AEDFB22B813BFFE660E7FD814AFAEA6790EE67;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA200ED9DB436A2A03C578CDB6AEA0625984E94;
IL2CPP_EXTERN_C String_t* _stringLiteral655F646A9A53405932121262027BE1E263201440;
IL2CPP_EXTERN_C String_t* _stringLiteral69E253E12D426DA8CE35CF237765BC7DEB3B7274;
IL2CPP_EXTERN_C String_t* _stringLiteral6BC751DE0359398BABCB7D747C15F793E0F5F309;
IL2CPP_EXTERN_C String_t* _stringLiteral6D8D46E9E5E1DD10B339E51306174B9818FDD238;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral7E546430E6FBD81D74E47EDAC1453E794CC3453B;
IL2CPP_EXTERN_C String_t* _stringLiteral7EEEA5B38E9B42C5446EBD0684BDE5A2E9BA346A;
IL2CPP_EXTERN_C String_t* _stringLiteral858FD3C8BD790C7AE9648241681753040AAA353E;
IL2CPP_EXTERN_C String_t* _stringLiteral89CA9FDE4FDC56214E8B69525615E8E8EF21ED8A;
IL2CPP_EXTERN_C String_t* _stringLiteral8DBCA72E96223C343D18652C42210C67D364418C;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral9046330F871CE7CD1F1B33E5684D7A4719117C0D;
IL2CPP_EXTERN_C String_t* _stringLiteral949E308288B2FD68A8A495751C8D81446AE026E7;
IL2CPP_EXTERN_C String_t* _stringLiteral975CEACAD0FAD15E6E69CB64C63BA7209214FA24;
IL2CPP_EXTERN_C String_t* _stringLiteral992D23FE06E5F4D73C8734FB3DEFDBABC48F60BA;
IL2CPP_EXTERN_C String_t* _stringLiteral9ABA04CB99CE18A786E56A0453951A56A8619C4D;
IL2CPP_EXTERN_C String_t* _stringLiteralA46E1241E7CECA9079592DD1DD5D6A78C906AD04;
IL2CPP_EXTERN_C String_t* _stringLiteralA50032ABA89DA7BE8C770D4421FE7B63B9B4DE7F;
IL2CPP_EXTERN_C String_t* _stringLiteralA935CCF89C420653F37A96028DBF909D021C883A;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7BC9047B28FA1293ACF96C7457B3E060A650EE;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC88B7268310CF55E1332901267EC9623937285;
IL2CPP_EXTERN_C String_t* _stringLiteralB52585C646FF1CB13786820A3CE1D7BDA1BE9CF9;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0D80402C40D472CE097AD41C4A4A1095F11531;
IL2CPP_EXTERN_C String_t* _stringLiteralC056B0EF186E79ACF736AED1477943ABFE0BB591;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralCF69AF64BA8D0348D6F2060A45EFFAF06BD98E95;
IL2CPP_EXTERN_C String_t* _stringLiteralD42842BEEBEBB536D3A757C446AD3DCFB87FEE8F;
IL2CPP_EXTERN_C String_t* _stringLiteralD5CEAE51AB019439E0F01B10EE0E282E07402B5D;
IL2CPP_EXTERN_C String_t* _stringLiteralD96FAAF146661EFBA954AB67B299A12B2B5AA770;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0CD93231368D71303894FA9F2B0F372EE36E9D;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mF5EC5E8450D3787349DA1F3E61218A2066E84964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m54653C35CAC9D7F46486D3BC662F56CD8B1E8336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mC69F2D48BFFA2348A56133508C574789C16A338D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m69FD3772776E110545B217CA64090518B4C5D1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0512EBD9BE75C05AE7F2B046109F9CCC18EE0F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mC6508FCD4BDE64A19B94E5596546A6932F3F5521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m8267F5874CDE64928E523659A8FDD9FF8843F127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisAssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D_m43844524853C160318F34142991F5AA0BDAF26FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisRecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01_m6DFD69A3465654B5A56769C275DD72C1DCF4F895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8D515126E50B361D5D9FB68185AECF52123355A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m85CA995230E8299A4A20AD2914300A5943D9347C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC3E21DA09723C7D00001F353493A427E79DECD82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m52A82CC043623D3D3E52B72FEF18655FD93A8F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5AB2031978429091793FB433B8096086C675EE33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9ED00FB67F8A63328605AB1D0F1E076136D339BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_m89FCDA0E95DD127951ADE66F47D441DCC671AC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_mFBBB94D8198133929093CAAA45E9844F85CDFA08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDD71B71D79434EBDD38D36CB7C5A0ADEE8BCA1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE8879B4AAC5CB5B15F78F06BD9728669050072CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5020CAD6D2F61FD755EF2B89B56555F5EEFB7788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9D5C5BDB97A574C0D7D145AD467C89A78C3CAFF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m42066153D87F61B33CC26FD976AD7BB9487A1956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAA9A1D3D580F0A8D0036C7E8848CAB148DD80DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m18EA74377CBCFC59DE6BA7E1AD0A9E2BD6E65222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m3D42627D41F555C8ED0B287F329C4EC06F160BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m42B5FD9C167F843691D700E4541706A003BD7887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m5CA86F8D239FF90A703C306BEDD70427D1D54DEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mB455010BE75CE2E8CDB09838DFE1C4A01C742332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mD1473AD8CFE0F7F892CE2071BBFE57FA884CD3F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m06A9617EB4D63009E26557C1731A71D0213C171D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m23FF88CC78527D315CC8E3AD4A204B07DE3A8F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2E0DD7B8625CC1E3B74BB2EA4EB0B24C30DD2A0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m315B9B9DAF90078BFCF000A435C02095579FD125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m34E6C8D84D6541410B2044C09958CE96FDFA9E21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E86DB3A01A9781DC6761E93119E4F3634F6E786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m62C66C304021EB386A4FD3FBB913C2236BBB434B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m64B1FB194CA750B584FA4C8DD4F1BAD3E9EE8BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m688720220BDD1F27C6C02B9FFACC690771E38D50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7AA4C020C7C8896C7549A3FA563345C4EAC5D056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m84ACE04AE0AE93F341F993856C2855CBAFE0FE35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8CB6B6997A921B8DDAD8945D5C4DAAC2DBDEB281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC6416D24BD5D3DBF5DAEF6AA050C4B0E24D5EE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCBB307584F2AFEC6E32C14DAB37A7B6A4470744E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1453BDC86F66E17E35A1DFFFC4B3829038AAF486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mD6F2D194A035D5B660C9002AE1BCDC0052B9262F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m167C803023EFDEA03A5AEE4555FB1455F53E1C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m21841180F2A32CABBE24798F6D35E07320E07FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m273C1D73A4320D918BF12DE431EC43F7D6FC9129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m6F8B0D1771FCD386F8D858B4001F2A1850672F77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m35C84665BADB261DDC435836785563F9E060A7C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m56FEC16E9BDC725C0EDCF20D91D829B3DB546BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5B922E54F6EF858550DC1EB6ECFDBD8E7D1109B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m675F55FB1106B811904EB04898254B3715A5D2E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m708E25F3B690E9D4F008B65183E40449DED5172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m77176C38763790AF27EF66E5AA7F49444ED0DCA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m823B432AD7EF662079ABAB23B2D4A534F018886E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m99273F06E3901F8C400AF575A448679B049A7729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAE605FC0B9F813EB2B0CEBEB460B4651BB1910CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB88A162072C4AFF607B3A159454496EACD8B745E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBA6D5A075A0C213D06968F01CC8A4E9EC7A3554B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCCFDAA2828FAAACC7F5996BCAF7B9D6E30B141B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD63838FF7D84749378BA9DDDC39CF4D2883948E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C50D1C86324E493E10CED11C25FEC1653D8F9A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m65B2C3C3CB5FE1BC9F99E27E30E3A9C4D1F98D8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m89DC2CC869AB89238D663B461053873FB5A6F814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8CE8D366FCF69B29A9141285BAA958350C1F53EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF30E4A853AFC9A484FA405F39AA61B91857AC85C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m262ADEEA2C0529BC87D7AD90C81D103A99CF0AD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m641238DE01D4A2AEA68206C442B6EAD186611873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A999C72941C1C60485F0C1AEF6B0CDDB76D8D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecordA__ctor_m6C0E728139A79AC11972E964EE8779A1882052F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecordAaaa__ctor_mE9A83BB91D45BA541FBBD1E420AF668B29C27E89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resolver_ReceiveResponse_mE852EB3C24AD7DC984629302B83720E611DC5D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resolver_get_Version_m9AAE0899D51C22D6AAA3950379AD77E8B613FAD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m09796D55BB5F0B5716BC33AC7B471218160F7C76_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A;
struct NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD31DFF7194A791F9DC1293E62DF803D2EBC0A797 
{
};

// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
};

// System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>
struct Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t977100D2302460E8977539D14E6AF9F4D8006512* ____entries_1;
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
	KeyCollection_tE025BEB953F7F2E9ED32BF61A9A963F20DC4DF79* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2A0634D4E4AA3B076DEA8E54A783477CB91E95B1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR>
struct List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AdditionalRRU5BU5D_tA7A98EB90E0F13950038C8CF59A41427CD76CFDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>
struct List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AnswerRRU5BU5D_t2771C994B1CA3B63EBCFA67A34A6665CD6FC9BE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR>
struct List_1_t8495645EA7A19014CF8116B843091FE2672BDECB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AuthorityRRU5BU5D_t23A333FEC1D7A0744E0988AE6C054EBF4980B989* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Net.IPEndPoint>
struct List_1_t795244976F29D111A17237A89D0064EF85FBC5AC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>
struct List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QuestionU5BU5D_t7CD0A968EF3CE463FA794A1A4A9BB0DB10E751AB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA>
struct List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordAU5BU5D_tD697521A75F7E4C8E5A086582D8B8FAF80A1151E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordAaaa>
struct List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordAaaaU5BU5D_t1354BE84EF21C75484DC67B3ED2DC60433B2B591* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordCert>
struct List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordCertU5BU5D_tA87698E822E990A6BD0EA3BBF3CB10DBE09A27F6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordCname>
struct List_1_t1612B1151B5A9B114CF74C46B4C409521857C084  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordCnameU5BU5D_tA8737C2C5981B745A72F33272F21DAB9C9A8E56A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.Mail.RecordMx>
struct List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordMxU5BU5D_t5F7E5587C075FCBBADE21046F5CFD6BB6C7D80F8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordNs>
struct List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordNsU5BU5D_t0484D64226D7D6D0B0FA81780FD91C9FBF9701B5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordPtr>
struct List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordPtrU5BU5D_tC68E236983C31D87135899D8991D11761D2DFE29* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSoa>
struct List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordSoaU5BU5D_tD0B027A9282AAB00DDEF8230507B0641A7D4AF35* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSrv>
struct List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordSrvU5BU5D_tB7C9C2CDE8EAEBDA4D82290E14B60BACA8C5662E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordTxt>
struct List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordTxtU5BU5D_t1470B2F4B90E5ED7B9EA7E4F3D343539D725B73C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.ResourceRecord>
struct List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ResourceRecordU5BU5D_t0BD621A2C2A0931A36FD899F2CD89A352E5C2D92* ____items_1;
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

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// Ubiety.Dns.Core.Common.EnumExtensions
struct EnumExtensions_t771C78E20E7ACC3E4A3919C998F5C8B827C4B8AD  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Ubiety.Dns.Core.Header
struct Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A  : public RuntimeObject
{
	// System.UInt16 Ubiety.Dns.Core.Header::_flags
	uint16_t ____flags_0;
	// System.UInt16 Ubiety.Dns.Core.Header::<Id>k__BackingField
	uint16_t ___U3CIdU3Ek__BackingField_1;
	// System.UInt16 Ubiety.Dns.Core.Header::<QuestionCount>k__BackingField
	uint16_t ___U3CQuestionCountU3Ek__BackingField_2;
	// System.UInt16 Ubiety.Dns.Core.Header::<AnswerCount>k__BackingField
	uint16_t ___U3CAnswerCountU3Ek__BackingField_3;
	// System.UInt16 Ubiety.Dns.Core.Header::<NameserverCount>k__BackingField
	uint16_t ___U3CNameserverCountU3Ek__BackingField_4;
	// System.UInt16 Ubiety.Dns.Core.Header::<AdditionalRecordsCount>k__BackingField
	uint16_t ___U3CAdditionalRecordsCountU3Ek__BackingField_5;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4  : public RuntimeObject
{
	// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::addresses
	Collection_1_tE48AA187F55CD76B677887F9A9BD63FFBB70312B* ___addresses_0;
};

// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A  : public RuntimeObject
{
};

// Ubiety.Dns.Core.Question
struct Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2  : public RuntimeObject
{
	// System.String Ubiety.Dns.Core.Question::_questionName
	String_t* ____questionName_0;
	// Ubiety.Dns.Core.Common.QuestionType Ubiety.Dns.Core.Question::<QuestionType>k__BackingField
	int32_t ___U3CQuestionTypeU3Ek__BackingField_1;
	// Ubiety.Dns.Core.Common.QuestionClass Ubiety.Dns.Core.Question::<QuestionClass>k__BackingField
	int32_t ___U3CQuestionClassU3Ek__BackingField_2;
};

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
};

// Ubiety.Dns.Core.Records.Record
struct Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.Record::<RecordData>k__BackingField
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___U3CRecordDataU3Ek__BackingField_0;
	// Ubiety.Dns.Core.ResourceRecord Ubiety.Dns.Core.Records.Record::<ResourceRecord>k__BackingField
	ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* ___U3CResourceRecordU3Ek__BackingField_1;
};

// Ubiety.Dns.Core.RecordReader
struct RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F  : public RuntimeObject
{
	// System.Byte[] Ubiety.Dns.Core.RecordReader::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_0;
	// System.Int32 Ubiety.Dns.Core.RecordReader::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_1;
};

// Ubiety.Dns.Core.Request
struct Request_t5EC29E166C112954C06827C8C28901253ABC6350  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Ubiety.Dns.Core.Question> Ubiety.Dns.Core.Request::_questions
	List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* ____questions_0;
	// Ubiety.Dns.Core.Header Ubiety.Dns.Core.Request::<Header>k__BackingField
	Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* ___U3CHeaderU3Ek__BackingField_1;
};

// Ubiety.Dns.Core.Resolver
struct Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response> Ubiety.Dns.Core.Resolver::_responseCache
	Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* ____responseCache_0;
	// System.Int32 Ubiety.Dns.Core.Resolver::_retries
	int32_t ____retries_1;
	// System.Int32 Ubiety.Dns.Core.Resolver::_timeout
	int32_t ____timeout_2;
	// System.UInt16 Ubiety.Dns.Core.Resolver::_unique
	uint16_t ____unique_3;
	// System.Boolean Ubiety.Dns.Core.Resolver::_useCache
	bool ____useCache_4;
	// Ubiety.Dns.Core.Resolver/VerboseEventHandler Ubiety.Dns.Core.Resolver::OnVerbose
	VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* ___OnVerbose_5;
	// System.Boolean Ubiety.Dns.Core.Resolver::<Recursion>k__BackingField
	bool ___U3CRecursionU3Ek__BackingField_7;
	// Ubiety.Dns.Core.Common.TransportType Ubiety.Dns.Core.Resolver::<TransportType>k__BackingField
	int32_t ___U3CTransportTypeU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.Net.IPEndPoint> Ubiety.Dns.Core.Resolver::<DnsServers>k__BackingField
	List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* ___U3CDnsServersU3Ek__BackingField_9;
};

// Ubiety.Dns.Core.ResourceRecord
struct ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E  : public RuntimeObject
{
	// System.UInt32 Ubiety.Dns.Core.ResourceRecord::_ttl
	uint32_t ____ttl_0;
	// System.String Ubiety.Dns.Core.ResourceRecord::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// Ubiety.Dns.Core.Common.RecordType Ubiety.Dns.Core.ResourceRecord::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
	// Ubiety.Dns.Core.Common.OperationClass Ubiety.Dns.Core.ResourceRecord::<Class>k__BackingField
	int32_t ___U3CClassU3Ek__BackingField_3;
	// System.UInt16 Ubiety.Dns.Core.ResourceRecord::<RecordLength>k__BackingField
	uint16_t ___U3CRecordLengthU3Ek__BackingField_4;
	// Ubiety.Dns.Core.Records.Record Ubiety.Dns.Core.ResourceRecord::<Record>k__BackingField
	Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* ___U3CRecordU3Ek__BackingField_5;
	// System.Int32 Ubiety.Dns.Core.ResourceRecord::<TimeLived>k__BackingField
	int32_t ___U3CTimeLivedU3Ek__BackingField_6;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_13;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_14;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_15;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_16;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_17;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_18;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_19;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_20;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_21;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_22;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_23;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_24;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_25;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_26;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_27;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58  : public RuntimeObject
{
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;
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

// System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.AnswerRR>
struct Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Net.IPEndPoint>
struct Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.Question>
struct Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Threading.Tasks.Task`1<Ubiety.Dns.Core.Response>
struct Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* ___m_result_38;
};

// Ubiety.Dns.Core.AdditionalRR
struct AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31  : public ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E
{
};

// Ubiety.Dns.Core.AnswerRR
struct AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A  : public ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E
{
};

// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::<InformationalVersion>k__BackingField
	String_t* ___U3CInformationalVersionU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// Ubiety.Dns.Core.AuthorityRR
struct AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE  : public ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Ubiety.Dns.Core.Records.General.RecordA
struct RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Net.IPAddress Ubiety.Dns.Core.Records.General.RecordA::<Address>k__BackingField
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___U3CAddressU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordA6
struct RecordA6_t9AAEF9425BDAAD19AE37A009014277285E952A14  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.General.RecordAaaa
struct RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Net.IPAddress Ubiety.Dns.Core.Records.General.RecordAaaa::<Address>k__BackingField
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___U3CAddressU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.RecordAfsdb
struct RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.UInt16 Ubiety.Dns.Core.Records.RecordAfsdb::<SubType>k__BackingField
	uint16_t ___U3CSubTypeU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.RecordAfsdb::<Hostname>k__BackingField
	String_t* ___U3CHostnameU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordApl
struct RecordApl_tEA8B1BEFE784A2B99AB33D3D83DC404DD3C1746B  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.NotUsed.RecordAtma
struct RecordAtma_t2109CD168F50A4E8267679E327A7AD776671F322  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Common.RecordAttribute
struct RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type Ubiety.Dns.Core.Common.RecordAttribute::<RecordType>k__BackingField
	Type_t* ___U3CRecordTypeU3Ek__BackingField_0;
};

// Ubiety.Dns.Core.Records.RecordCert
struct RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Byte[] Ubiety.Dns.Core.Records.RecordCert::_rawKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____rawKey_2;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordCert::<Type>k__BackingField
	uint16_t ___U3CTypeU3Ek__BackingField_3;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordCert::<KeyTag>k__BackingField
	uint16_t ___U3CKeyTagU3Ek__BackingField_4;
	// System.Byte Ubiety.Dns.Core.Records.RecordCert::<Algorithm>k__BackingField
	uint8_t ___U3CAlgorithmU3Ek__BackingField_5;
	// System.String Ubiety.Dns.Core.Records.RecordCert::<PublicKey>k__BackingField
	String_t* ___U3CPublicKeyU3Ek__BackingField_6;
};

// Ubiety.Dns.Core.Records.General.RecordCname
struct RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.General.RecordCname::<Cname>k__BackingField
	String_t* ___U3CCnameU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordDhcid
struct RecordDhcid_t2368E609C0C69E1FB4358F6C17DF424838DED72C  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordDname
struct RecordDname_t726AC7580CCFCFA272A2B663E07FC8490E46FA73  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.RecordDname::<Target>k__BackingField
	String_t* ___U3CTargetU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordDnsKey
struct RecordDnsKey_tF5E9EB95EFA183C410AC64C208046E7FD537ADB3  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordDs
struct RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Byte[] Ubiety.Dns.Core.Records.RecordDs::_digest
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____digest_2;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordDs::<KeyTag>k__BackingField
	uint16_t ___U3CKeyTagU3Ek__BackingField_3;
	// System.Byte Ubiety.Dns.Core.Records.RecordDs::<Algorithm>k__BackingField
	uint8_t ___U3CAlgorithmU3Ek__BackingField_4;
	// System.Byte Ubiety.Dns.Core.Records.RecordDs::<DigestType>k__BackingField
	uint8_t ___U3CDigestTypeU3Ek__BackingField_5;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordEid
struct RecordEid_t14058DFD43FC2FB78B3C4BCB8D41A9F0047BAF03  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.NotUsed.RecordGid
struct RecordGid_t2DE7046AC1B01AB60ABDC57D4F2D73BF616F82A2  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.Obsolete.RecordGpos
struct RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::<Longitude>k__BackingField
	String_t* ___U3CLongitudeU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::<Latitude>k__BackingField
	String_t* ___U3CLatitudeU3Ek__BackingField_3;
	// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::<Altitude>k__BackingField
	String_t* ___U3CAltitudeU3Ek__BackingField_4;
};

// Ubiety.Dns.Core.Records.RecordHinfo
struct RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.RecordHinfo::<Cpu>k__BackingField
	String_t* ___U3CCpuU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.RecordHinfo::<Os>k__BackingField
	String_t* ___U3COsU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordHip
struct RecordHip_t719FBBB0711D1EFA49D9F26AB35F52D0565F8D5E  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.NotUsed.RecordIpsecKey
struct RecordIpsecKey_t29C7AAD8257FCECCA1B390B6A12206EF5CCC6A34  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordIsdn
struct RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.RecordIsdn::<IsdnAddress>k__BackingField
	String_t* ___U3CIsdnAddressU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.RecordIsdn::<SA>k__BackingField
	String_t* ___U3CSAU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.RecordKey
struct RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.UInt16 Ubiety.Dns.Core.Records.RecordKey::<Flags>k__BackingField
	uint16_t ___U3CFlagsU3Ek__BackingField_2;
	// System.Byte Ubiety.Dns.Core.Records.RecordKey::<Protocol>k__BackingField
	uint8_t ___U3CProtocolU3Ek__BackingField_3;
	// System.Byte Ubiety.Dns.Core.Records.RecordKey::<Algorithm>k__BackingField
	uint8_t ___U3CAlgorithmU3Ek__BackingField_4;
	// System.String Ubiety.Dns.Core.Records.RecordKey::<PublicKey>k__BackingField
	String_t* ___U3CPublicKeyU3Ek__BackingField_5;
};

// Ubiety.Dns.Core.Records.RecordKx
struct RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.UInt16 Ubiety.Dns.Core.Records.RecordKx::<Preference>k__BackingField
	uint16_t ___U3CPreferenceU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.RecordKx::<Exchanger>k__BackingField
	String_t* ___U3CExchangerU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.RecordLoc
struct RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Byte Ubiety.Dns.Core.Records.RecordLoc::<Version>k__BackingField
	uint8_t ___U3CVersionU3Ek__BackingField_2;
	// System.Byte Ubiety.Dns.Core.Records.RecordLoc::<Size>k__BackingField
	uint8_t ___U3CSizeU3Ek__BackingField_3;
	// System.Byte Ubiety.Dns.Core.Records.RecordLoc::<HorizontalPrecision>k__BackingField
	uint8_t ___U3CHorizontalPrecisionU3Ek__BackingField_4;
	// System.Byte Ubiety.Dns.Core.Records.RecordLoc::<VerticalPrecision>k__BackingField
	uint8_t ___U3CVerticalPrecisionU3Ek__BackingField_5;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordLoc::<Latitude>k__BackingField
	uint32_t ___U3CLatitudeU3Ek__BackingField_6;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordLoc::<Longitude>k__BackingField
	uint32_t ___U3CLongitudeU3Ek__BackingField_7;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordLoc::<Altitude>k__BackingField
	uint32_t ___U3CAltitudeU3Ek__BackingField_8;
};

// Ubiety.Dns.Core.Records.Mail.RecordMb
struct RecordMb_t8C4062A4BFD4835C81427802BD75AA222751087C  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.Mail.RecordMb::<MadName>k__BackingField
	String_t* ___U3CMadNameU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.Obsolete.RecordMd
struct RecordMd_t877F2AC8EAA563246D911594FFDF2D9B4CC0986E  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.Obsolete.RecordMd::<MadName>k__BackingField
	String_t* ___U3CMadNameU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.Obsolete.RecordMf
struct RecordMf_t1AE13A3E638557DD3630EE8FCD20845CCDE47BA8  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.Obsolete.RecordMf::<MadName>k__BackingField
	String_t* ___U3CMadNameU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.Mail.RecordMg
struct RecordMg_t1B1CF282B38EDB2770F24015E1735210CD9AA002  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.Mail.RecordMg::<MgmName>k__BackingField
	String_t* ___U3CMgmNameU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.Mail.RecordMinfo
struct RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.Mail.RecordMinfo::<ResponsibleMailbox>k__BackingField
	String_t* ___U3CResponsibleMailboxU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.Mail.RecordMinfo::<ErrorMailbox>k__BackingField
	String_t* ___U3CErrorMailboxU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.Mail.RecordMr
struct RecordMr_tB1B7AD7A31D43691D8CEE3578174A965E17793CD  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.Mail.RecordMr::<NewName>k__BackingField
	String_t* ___U3CNewNameU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.Mail.RecordMx
struct RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.UInt16 Ubiety.Dns.Core.Records.Mail.RecordMx::<Preference>k__BackingField
	uint16_t ___U3CPreferenceU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.Mail.RecordMx::<Exchange>k__BackingField
	String_t* ___U3CExchangeU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.RecordNaptr
struct RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.UInt16 Ubiety.Dns.Core.Records.RecordNaptr::<Order>k__BackingField
	uint16_t ___U3COrderU3Ek__BackingField_2;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordNaptr::<Preference>k__BackingField
	uint16_t ___U3CPreferenceU3Ek__BackingField_3;
	// System.String Ubiety.Dns.Core.Records.RecordNaptr::<Flags>k__BackingField
	String_t* ___U3CFlagsU3Ek__BackingField_4;
	// System.String Ubiety.Dns.Core.Records.RecordNaptr::<Services>k__BackingField
	String_t* ___U3CServicesU3Ek__BackingField_5;
	// System.String Ubiety.Dns.Core.Records.RecordNaptr::<Regexp>k__BackingField
	String_t* ___U3CRegexpU3Ek__BackingField_6;
	// System.String Ubiety.Dns.Core.Records.RecordNaptr::<Replacement>k__BackingField
	String_t* ___U3CReplacementU3Ek__BackingField_7;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordNimloc
struct RecordNimloc_tFADCC1FAE741AC22E89B281D0F4EF39A17E648F4  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordNs
struct RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.RecordNs::<NameserverDomain>k__BackingField
	String_t* ___U3CNameserverDomainU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.RecordNsap
struct RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Byte[] Ubiety.Dns.Core.Records.RecordNsap::_address
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____address_2;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordNsap::<Length>k__BackingField
	uint16_t ___U3CLengthU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.Obsolete.RecordNsapPtr
struct RecordNsapPtr_t27669D358D436A3C7C95D0517E97CA59C9B85F7E  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.Obsolete.RecordNsapPtr::<Owner>k__BackingField
	String_t* ___U3COwnerU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordNsec
struct RecordNsec_t14D49602C32B76586838563587CF0ECE08514554  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.NotUsed.RecordNsec3
struct RecordNsec3_t5485AD604C599397EAB556E0B231B9B830FF1C16  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.NotUsed.RecordNsec3Param
struct RecordNsec3Param_t174E72011CA9BFD71C5DDA9B04EB2FEABE3F9BBF  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordNull
struct RecordNull_t58BB1A20A9A00CBD48358AB2C3D945449901F517  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Byte[] Ubiety.Dns.Core.Records.RecordNull::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_2;
};

// Ubiety.Dns.Core.Records.Obsolete.RecordNxt
struct RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Byte[] Ubiety.Dns.Core.Records.Obsolete.RecordNxt::_bitmap
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____bitmap_2;
	// System.String Ubiety.Dns.Core.Records.Obsolete.RecordNxt::<NextDomainName>k__BackingField
	String_t* ___U3CNextDomainNameU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordOpt
struct RecordOpt_t408CB9445015BCA3AACC5BD70F1C10814EF340D1  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordPtr
struct RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.RecordPtr::<PointerDomain>k__BackingField
	String_t* ___U3CPointerDomainU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.RecordPx
struct RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.UInt16 Ubiety.Dns.Core.Records.RecordPx::<Preference>k__BackingField
	uint16_t ___U3CPreferenceU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.RecordPx::<Map822>k__BackingField
	String_t* ___U3CMap822U3Ek__BackingField_3;
	// System.String Ubiety.Dns.Core.Records.RecordPx::<MapX400>k__BackingField
	String_t* ___U3CMapX400U3Ek__BackingField_4;
};

// Ubiety.Dns.Core.Records.RecordRp
struct RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.RecordRp::<MailboxDomain>k__BackingField
	String_t* ___U3CMailboxDomainU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.RecordRp::<TxtDomain>k__BackingField
	String_t* ___U3CTxtDomainU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordRrsig
struct RecordRrsig_t6C755403AD745BA0059B2313BA61A2B1E2D9489F  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordRt
struct RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.UInt16 Ubiety.Dns.Core.Records.RecordRt::<Preference>k__BackingField
	uint16_t ___U3CPreferenceU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.RecordRt::<IntermediateHost>k__BackingField
	String_t* ___U3CIntermediateHostU3Ek__BackingField_3;
};

// Ubiety.Dns.Core.Records.RecordSig
struct RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.UInt16 Ubiety.Dns.Core.Records.RecordSig::<TypeCovered>k__BackingField
	uint16_t ___U3CTypeCoveredU3Ek__BackingField_2;
	// System.Byte Ubiety.Dns.Core.Records.RecordSig::<Algorithm>k__BackingField
	uint8_t ___U3CAlgorithmU3Ek__BackingField_3;
	// System.Byte Ubiety.Dns.Core.Records.RecordSig::<Labels>k__BackingField
	uint8_t ___U3CLabelsU3Ek__BackingField_4;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordSig::<OriginalTTL>k__BackingField
	uint32_t ___U3COriginalTTLU3Ek__BackingField_5;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordSig::<SignatureExpiration>k__BackingField
	uint32_t ___U3CSignatureExpirationU3Ek__BackingField_6;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordSig::<SignatureInception>k__BackingField
	uint32_t ___U3CSignatureInceptionU3Ek__BackingField_7;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordSig::<KeyTag>k__BackingField
	uint16_t ___U3CKeyTagU3Ek__BackingField_8;
	// System.String Ubiety.Dns.Core.Records.RecordSig::<SignersName>k__BackingField
	String_t* ___U3CSignersNameU3Ek__BackingField_9;
	// System.String Ubiety.Dns.Core.Records.RecordSig::<Signature>k__BackingField
	String_t* ___U3CSignatureU3Ek__BackingField_10;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordSink
struct RecordSink_tF8AAABD52861950CA97C3EE9BD42163DA6925969  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordSoa
struct RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.RecordSoa::<PrimaryNameserver>k__BackingField
	String_t* ___U3CPrimaryNameserverU3Ek__BackingField_2;
	// System.String Ubiety.Dns.Core.Records.RecordSoa::<ResponsibleDomain>k__BackingField
	String_t* ___U3CResponsibleDomainU3Ek__BackingField_3;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::<Serial>k__BackingField
	uint32_t ___U3CSerialU3Ek__BackingField_4;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::<Refresh>k__BackingField
	uint32_t ___U3CRefreshU3Ek__BackingField_5;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::<Retry>k__BackingField
	uint32_t ___U3CRetryU3Ek__BackingField_6;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::<Expire>k__BackingField
	uint32_t ___U3CExpireU3Ek__BackingField_7;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::<Minimum>k__BackingField
	uint32_t ___U3CMinimumU3Ek__BackingField_8;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordSpf
struct RecordSpf_tE3982780DC7AACC4E99319E69DCAF8556383664C  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordSrv
struct RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.UInt16 Ubiety.Dns.Core.Records.RecordSrv::<Priority>k__BackingField
	uint16_t ___U3CPriorityU3Ek__BackingField_2;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordSrv::<Weight>k__BackingField
	uint16_t ___U3CWeightU3Ek__BackingField_3;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordSrv::<Port>k__BackingField
	uint16_t ___U3CPortU3Ek__BackingField_4;
	// System.String Ubiety.Dns.Core.Records.RecordSrv::<Target>k__BackingField
	String_t* ___U3CTargetU3Ek__BackingField_5;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordSshfp
struct RecordSshfp_tCCAEC40D0E3902A16C1475002702BD8A41DCB17C  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordTkey
struct RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Byte[] Ubiety.Dns.Core.Records.RecordTkey::_keyData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____keyData_2;
	// System.Byte[] Ubiety.Dns.Core.Records.RecordTkey::_otherData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____otherData_3;
	// System.String Ubiety.Dns.Core.Records.RecordTkey::<Algorithm>k__BackingField
	String_t* ___U3CAlgorithmU3Ek__BackingField_4;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordTkey::<Inception>k__BackingField
	uint32_t ___U3CInceptionU3Ek__BackingField_5;
	// System.UInt32 Ubiety.Dns.Core.Records.RecordTkey::<Expiration>k__BackingField
	uint32_t ___U3CExpirationU3Ek__BackingField_6;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::<Mode>k__BackingField
	uint16_t ___U3CModeU3Ek__BackingField_7;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::<Error>k__BackingField
	uint16_t ___U3CErrorU3Ek__BackingField_8;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::<KeySize>k__BackingField
	uint16_t ___U3CKeySizeU3Ek__BackingField_9;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::<OtherSize>k__BackingField
	uint16_t ___U3COtherSizeU3Ek__BackingField_10;
};

// Ubiety.Dns.Core.Records.RecordTsig
struct RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Byte[] Ubiety.Dns.Core.Records.RecordTsig::_mac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____mac_2;
	// System.Byte[] Ubiety.Dns.Core.Records.RecordTsig::_otherData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____otherData_3;
	// System.String Ubiety.Dns.Core.Records.RecordTsig::<AlgorithmName>k__BackingField
	String_t* ___U3CAlgorithmNameU3Ek__BackingField_4;
	// System.Int64 Ubiety.Dns.Core.Records.RecordTsig::<TimeSigned>k__BackingField
	int64_t ___U3CTimeSignedU3Ek__BackingField_5;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::<Fudge>k__BackingField
	uint16_t ___U3CFudgeU3Ek__BackingField_6;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::<MacSize>k__BackingField
	uint16_t ___U3CMacSizeU3Ek__BackingField_7;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::<OriginalId>k__BackingField
	uint16_t ___U3COriginalIdU3Ek__BackingField_8;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::<Error>k__BackingField
	uint16_t ___U3CErrorU3Ek__BackingField_9;
	// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::<OtherLength>k__BackingField
	uint16_t ___U3COtherLengthU3Ek__BackingField_10;
};

// Ubiety.Dns.Core.Records.RecordTxt
struct RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Collections.Generic.List`1<System.String> Ubiety.Dns.Core.Records.RecordTxt::<Text>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CTextU3Ek__BackingField_2;
};

// Ubiety.Dns.Core.Records.NotUsed.RecordUid
struct RecordUid_tA28B4B8A029546FC2F078DF59D3B5BB6FE869DED  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.NotUsed.RecordUinfo
struct RecordUinfo_t219E0CAF247EDA99641BA645A120D4164033996F  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.NotUsed.RecordUnknown
struct RecordUnknown_t83B66E9E93A19DAB6AC144ADF36ADBF5FF90F3DC  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.NotUsed.RecordUnspec
struct RecordUnspec_t763EC6F6606E8291821D8D32CC183166309CE3DB  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
};

// Ubiety.Dns.Core.Records.RecordWks
struct RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.Byte[] Ubiety.Dns.Core.Records.RecordWks::_bitmap
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____bitmap_2;
	// System.String Ubiety.Dns.Core.Records.RecordWks::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_3;
	// System.Int32 Ubiety.Dns.Core.Records.RecordWks::<Protocol>k__BackingField
	int32_t ___U3CProtocolU3Ek__BackingField_4;
};

// Ubiety.Dns.Core.Records.RecordX25
struct RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39  : public Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D
{
	// System.String Ubiety.Dns.Core.Records.RecordX25::<PSDNAdress>k__BackingField
	String_t* ___U3CPSDNAdressU3Ek__BackingField_2;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// Ubiety.Dns.Core.Common.VerboseEventArgs
struct VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String Ubiety.Dns.Core.Common.VerboseEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
};

// Ubiety.Dns.Core.Common.VerboseOutputEventArgs
struct VerboseOutputEventArgs_t653A5F4BDE705AE98E436B26B1147033A6EFB026  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String Ubiety.Dns.Core.Common.VerboseOutputEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>
struct AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2* ___m_task_2;
};

// System.IO.BufferedStream
struct BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.IO.BufferedStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_5;
	// System.Byte[] System.IO.BufferedStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_6;
	// System.Int32 System.IO.BufferedStream::_bufferSize
	int32_t ____bufferSize_7;
	// System.Int32 System.IO.BufferedStream::_readPos
	int32_t ____readPos_8;
	// System.Int32 System.IO.BufferedStream::_readLen
	int32_t ____readLen_9;
	// System.Int32 System.IO.BufferedStream::_writePos
	int32_t ____writePos_10;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.BufferedStream::_lastSyncCompletedReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastSyncCompletedReadTask_11;
	// System.Threading.SemaphoreSlim System.IO.BufferedStream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_12;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::_streamSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____streamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::_ownsSocket
	bool ____ownsSocket_6;
	// System.Boolean System.Net.Sockets.NetworkStream::_readable
	bool ____readable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::_writeable
	bool ____writeable_8;
	// System.Int32 System.Net.Sockets.NetworkStream::_closeTimeout
	int32_t ____closeTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::_cleanedUp
	bool ____cleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentReadTimeout
	int32_t ____currentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentWriteTimeout
	int32_t ____currentWriteTimeout_12;
};

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170  : public RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3
{
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;
};

// Ubiety.Dns.Core.Response
struct Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Ubiety.Dns.Core.Question> Ubiety.Dns.Core.Response::<Questions>k__BackingField
	List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* ___U3CQuestionsU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR> Ubiety.Dns.Core.Response::<Answers>k__BackingField
	List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* ___U3CAnswersU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR> Ubiety.Dns.Core.Response::<Authorities>k__BackingField
	List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* ___U3CAuthoritiesU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR> Ubiety.Dns.Core.Response::<Additionals>k__BackingField
	List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* ___U3CAdditionalsU3Ek__BackingField_3;
	// Ubiety.Dns.Core.Header Ubiety.Dns.Core.Response::<Header>k__BackingField
	Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* ___U3CHeaderU3Ek__BackingField_4;
	// System.String Ubiety.Dns.Core.Response::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_5;
	// System.Int32 Ubiety.Dns.Core.Response::<MessageSize>k__BackingField
	int32_t ___U3CMessageSizeU3Ek__BackingField_6;
	// System.DateTime Ubiety.Dns.Core.Response::<TimeStamp>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CTimeStampU3Ek__BackingField_7;
	// System.Net.IPEndPoint Ubiety.Dns.Core.Response::<Server>k__BackingField
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___U3CServerU3Ek__BackingField_8;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// Ubiety.Dns.Core.Resolver/<TcpRequest>d__58
struct U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047 
{
	// System.Int32 Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response> Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::<>t__builder
	AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02 ___U3CU3Et__builder_1;
	// Ubiety.Dns.Core.Resolver Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::<>4__this
	Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* ___U3CU3E4__this_2;
	// Ubiety.Dns.Core.Request Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::request
	Request_t5EC29E166C112954C06827C8C28901253ABC6350* ___request_3;
	// System.Int32 Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::<intAttempts>5__2
	int32_t ___U3CintAttemptsU3E5__2_4;
	// System.Collections.Generic.List`1/Enumerator<System.Net.IPEndPoint> Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::<>7__wrap2
	Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85 ___U3CU3E7__wrap2_5;
	// System.Net.IPEndPoint Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::<server>5__4
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___U3CserverU3E5__4_6;
	// System.Net.Sockets.TcpClient Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::<client>5__5
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___U3CclientU3E5__5_7;
	// System.IO.BufferedStream Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::<stream>5__6
	BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* ___U3CstreamU3E5__6_8;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_9;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Ubiety.Dns.Core.Resolver/VerboseEventHandler
struct VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B  : public Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9
{
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_EndPoint_19;
};

// <Module>

// <Module>

// System.Collections.ObjectModel.Collection`1<System.Byte>

// System.Collections.ObjectModel.Collection`1<System.Byte>

// System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>

// System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR>
struct List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AdditionalRRU5BU5D_tA7A98EB90E0F13950038C8CF59A41427CD76CFDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>
struct List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AnswerRRU5BU5D_t2771C994B1CA3B63EBCFA67A34A6665CD6FC9BE6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR>
struct List_1_t8495645EA7A19014CF8116B843091FE2672BDECB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AuthorityRRU5BU5D_t23A333FEC1D7A0744E0988AE6C054EBF4980B989* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR>

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>

// System.Collections.Generic.List`1<System.Net.IPEndPoint>
struct List_1_t795244976F29D111A17237A89D0064EF85FBC5AC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Net.IPEndPoint>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>
struct List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QuestionU5BU5D_t7CD0A968EF3CE463FA794A1A4A9BB0DB10E751AB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA>
struct List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordAU5BU5D_tD697521A75F7E4C8E5A086582D8B8FAF80A1151E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordAaaa>
struct List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordAaaaU5BU5D_t1354BE84EF21C75484DC67B3ED2DC60433B2B591* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordAaaa>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordCert>
struct List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordCertU5BU5D_tA87698E822E990A6BD0EA3BBF3CB10DBE09A27F6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordCert>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordCname>
struct List_1_t1612B1151B5A9B114CF74C46B4C409521857C084_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordCnameU5BU5D_tA8737C2C5981B745A72F33272F21DAB9C9A8E56A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordCname>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.Mail.RecordMx>
struct List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordMxU5BU5D_t5F7E5587C075FCBBADE21046F5CFD6BB6C7D80F8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.Mail.RecordMx>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordNs>
struct List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordNsU5BU5D_t0484D64226D7D6D0B0FA81780FD91C9FBF9701B5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordNs>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordPtr>
struct List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordPtrU5BU5D_tC68E236983C31D87135899D8991D11761D2DFE29* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordPtr>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSoa>
struct List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordSoaU5BU5D_tD0B027A9282AAB00DDEF8230507B0641A7D4AF35* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSoa>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSrv>
struct List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordSrvU5BU5D_tB7C9C2CDE8EAEBDA4D82290E14B60BACA8C5662E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSrv>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordTxt>
struct List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordTxtU5BU5D_t1470B2F4B90E5ED7B9EA7E4F3D343539D725B73C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordTxt>

// System.Collections.Generic.List`1<Ubiety.Dns.Core.ResourceRecord>
struct List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ResourceRecordU5BU5D_t0BD621A2C2A0931A36FD899F2CD89A352E5C2D92* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ubiety.Dns.Core.ResourceRecord>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Attribute

// System.Attribute

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

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// System.Net.EndPoint

// System.Net.EndPoint

// Ubiety.Dns.Core.Common.EnumExtensions

// Ubiety.Dns.Core.Common.EnumExtensions

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// Ubiety.Dns.Core.Header

// Ubiety.Dns.Core.Header

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddress

// System.Net.NetworkInformation.IPAddressCollection

// System.Net.NetworkInformation.IPAddressCollection

// System.Net.NetworkInformation.IPInterfaceProperties

// System.Net.NetworkInformation.IPInterfaceProperties

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Net.NetworkInformation.NetworkInterface

// System.Net.NetworkInformation.NetworkInterface

// Ubiety.Dns.Core.Question

// Ubiety.Dns.Core.Question

// System.Security.Cryptography.RandomNumberGenerator

// System.Security.Cryptography.RandomNumberGenerator

// Ubiety.Dns.Core.Records.Record

// Ubiety.Dns.Core.Records.Record

// Ubiety.Dns.Core.RecordReader

// Ubiety.Dns.Core.RecordReader

// Ubiety.Dns.Core.Request

// Ubiety.Dns.Core.Request

// Ubiety.Dns.Core.Resolver
struct Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_StaticFields
{
	// System.Int32 Ubiety.Dns.Core.Resolver::<DefaultPort>k__BackingField
	int32_t ___U3CDefaultPortU3Ek__BackingField_6;
};

// Ubiety.Dns.Core.Resolver

// Ubiety.Dns.Core.ResourceRecord

// Ubiety.Dns.Core.ResourceRecord

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_40;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_41;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_42;
};

// System.Net.Sockets.Socket

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Net.Sockets.TcpClient

// System.Net.Sockets.TcpClient

// System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.AnswerRR>

// System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.AnswerRR>

// System.Collections.Generic.List`1/Enumerator<System.Net.IPEndPoint>

// System.Collections.Generic.List`1/Enumerator<System.Net.IPEndPoint>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.Question>

// System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.Question>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Threading.Tasks.Task`1<Ubiety.Dns.Core.Response>
struct Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7B768BDC4B3154236DAD4D54AEE88B3B37D825A5* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Ubiety.Dns.Core.Response>

// Ubiety.Dns.Core.AdditionalRR

// Ubiety.Dns.Core.AdditionalRR

// Ubiety.Dns.Core.AnswerRR

// Ubiety.Dns.Core.AnswerRR

// System.Reflection.AssemblyInformationalVersionAttribute

// System.Reflection.AssemblyInformationalVersionAttribute

// Ubiety.Dns.Core.AuthorityRR

// Ubiety.Dns.Core.AuthorityRR

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
};

// System.Net.IPEndPoint

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Ubiety.Dns.Core.Records.General.RecordA

// Ubiety.Dns.Core.Records.General.RecordA

// Ubiety.Dns.Core.Records.NotUsed.RecordA6

// Ubiety.Dns.Core.Records.NotUsed.RecordA6

// Ubiety.Dns.Core.Records.General.RecordAaaa

// Ubiety.Dns.Core.Records.General.RecordAaaa

// Ubiety.Dns.Core.Records.RecordAfsdb

// Ubiety.Dns.Core.Records.RecordAfsdb

// Ubiety.Dns.Core.Records.NotUsed.RecordApl

// Ubiety.Dns.Core.Records.NotUsed.RecordApl

// Ubiety.Dns.Core.Records.NotUsed.RecordAtma

// Ubiety.Dns.Core.Records.NotUsed.RecordAtma

// Ubiety.Dns.Core.Common.RecordAttribute

// Ubiety.Dns.Core.Common.RecordAttribute

// Ubiety.Dns.Core.Records.RecordCert

// Ubiety.Dns.Core.Records.RecordCert

// Ubiety.Dns.Core.Records.General.RecordCname

// Ubiety.Dns.Core.Records.General.RecordCname

// Ubiety.Dns.Core.Records.NotUsed.RecordDhcid

// Ubiety.Dns.Core.Records.NotUsed.RecordDhcid

// Ubiety.Dns.Core.Records.RecordDname

// Ubiety.Dns.Core.Records.RecordDname

// Ubiety.Dns.Core.Records.NotUsed.RecordDnsKey

// Ubiety.Dns.Core.Records.NotUsed.RecordDnsKey

// Ubiety.Dns.Core.Records.RecordDs

// Ubiety.Dns.Core.Records.RecordDs

// Ubiety.Dns.Core.Records.NotUsed.RecordEid

// Ubiety.Dns.Core.Records.NotUsed.RecordEid

// Ubiety.Dns.Core.Records.NotUsed.RecordGid

// Ubiety.Dns.Core.Records.NotUsed.RecordGid

// Ubiety.Dns.Core.Records.Obsolete.RecordGpos

// Ubiety.Dns.Core.Records.Obsolete.RecordGpos

// Ubiety.Dns.Core.Records.RecordHinfo

// Ubiety.Dns.Core.Records.RecordHinfo

// Ubiety.Dns.Core.Records.NotUsed.RecordHip

// Ubiety.Dns.Core.Records.NotUsed.RecordHip

// Ubiety.Dns.Core.Records.NotUsed.RecordIpsecKey

// Ubiety.Dns.Core.Records.NotUsed.RecordIpsecKey

// Ubiety.Dns.Core.Records.RecordIsdn

// Ubiety.Dns.Core.Records.RecordIsdn

// Ubiety.Dns.Core.Records.RecordKey

// Ubiety.Dns.Core.Records.RecordKey

// Ubiety.Dns.Core.Records.RecordKx

// Ubiety.Dns.Core.Records.RecordKx

// Ubiety.Dns.Core.Records.RecordLoc

// Ubiety.Dns.Core.Records.RecordLoc

// Ubiety.Dns.Core.Records.Mail.RecordMb

// Ubiety.Dns.Core.Records.Mail.RecordMb

// Ubiety.Dns.Core.Records.Obsolete.RecordMd

// Ubiety.Dns.Core.Records.Obsolete.RecordMd

// Ubiety.Dns.Core.Records.Obsolete.RecordMf

// Ubiety.Dns.Core.Records.Obsolete.RecordMf

// Ubiety.Dns.Core.Records.Mail.RecordMg

// Ubiety.Dns.Core.Records.Mail.RecordMg

// Ubiety.Dns.Core.Records.Mail.RecordMinfo

// Ubiety.Dns.Core.Records.Mail.RecordMinfo

// Ubiety.Dns.Core.Records.Mail.RecordMr

// Ubiety.Dns.Core.Records.Mail.RecordMr

// Ubiety.Dns.Core.Records.Mail.RecordMx

// Ubiety.Dns.Core.Records.Mail.RecordMx

// Ubiety.Dns.Core.Records.RecordNaptr

// Ubiety.Dns.Core.Records.RecordNaptr

// Ubiety.Dns.Core.Records.NotUsed.RecordNimloc

// Ubiety.Dns.Core.Records.NotUsed.RecordNimloc

// Ubiety.Dns.Core.Records.RecordNs

// Ubiety.Dns.Core.Records.RecordNs

// Ubiety.Dns.Core.Records.RecordNsap

// Ubiety.Dns.Core.Records.RecordNsap

// Ubiety.Dns.Core.Records.Obsolete.RecordNsapPtr

// Ubiety.Dns.Core.Records.Obsolete.RecordNsapPtr

// Ubiety.Dns.Core.Records.NotUsed.RecordNsec

// Ubiety.Dns.Core.Records.NotUsed.RecordNsec

// Ubiety.Dns.Core.Records.NotUsed.RecordNsec3

// Ubiety.Dns.Core.Records.NotUsed.RecordNsec3

// Ubiety.Dns.Core.Records.NotUsed.RecordNsec3Param

// Ubiety.Dns.Core.Records.NotUsed.RecordNsec3Param

// Ubiety.Dns.Core.Records.RecordNull

// Ubiety.Dns.Core.Records.RecordNull

// Ubiety.Dns.Core.Records.Obsolete.RecordNxt

// Ubiety.Dns.Core.Records.Obsolete.RecordNxt

// Ubiety.Dns.Core.Records.NotUsed.RecordOpt

// Ubiety.Dns.Core.Records.NotUsed.RecordOpt

// Ubiety.Dns.Core.Records.RecordPtr

// Ubiety.Dns.Core.Records.RecordPtr

// Ubiety.Dns.Core.Records.RecordPx

// Ubiety.Dns.Core.Records.RecordPx

// Ubiety.Dns.Core.Records.RecordRp

// Ubiety.Dns.Core.Records.RecordRp

// Ubiety.Dns.Core.Records.NotUsed.RecordRrsig

// Ubiety.Dns.Core.Records.NotUsed.RecordRrsig

// Ubiety.Dns.Core.Records.RecordRt

// Ubiety.Dns.Core.Records.RecordRt

// Ubiety.Dns.Core.Records.RecordSig

// Ubiety.Dns.Core.Records.RecordSig

// Ubiety.Dns.Core.Records.NotUsed.RecordSink

// Ubiety.Dns.Core.Records.NotUsed.RecordSink

// Ubiety.Dns.Core.Records.RecordSoa

// Ubiety.Dns.Core.Records.RecordSoa

// Ubiety.Dns.Core.Records.NotUsed.RecordSpf

// Ubiety.Dns.Core.Records.NotUsed.RecordSpf

// Ubiety.Dns.Core.Records.RecordSrv

// Ubiety.Dns.Core.Records.RecordSrv

// Ubiety.Dns.Core.Records.NotUsed.RecordSshfp

// Ubiety.Dns.Core.Records.NotUsed.RecordSshfp

// Ubiety.Dns.Core.Records.RecordTkey

// Ubiety.Dns.Core.Records.RecordTkey

// Ubiety.Dns.Core.Records.RecordTsig

// Ubiety.Dns.Core.Records.RecordTsig

// Ubiety.Dns.Core.Records.RecordTxt

// Ubiety.Dns.Core.Records.RecordTxt

// Ubiety.Dns.Core.Records.NotUsed.RecordUid

// Ubiety.Dns.Core.Records.NotUsed.RecordUid

// Ubiety.Dns.Core.Records.NotUsed.RecordUinfo

// Ubiety.Dns.Core.Records.NotUsed.RecordUinfo

// Ubiety.Dns.Core.Records.NotUsed.RecordUnknown

// Ubiety.Dns.Core.Records.NotUsed.RecordUnknown

// Ubiety.Dns.Core.Records.NotUsed.RecordUnspec

// Ubiety.Dns.Core.Records.NotUsed.RecordUnspec

// Ubiety.Dns.Core.Records.RecordWks

// Ubiety.Dns.Core.Records.RecordWks

// Ubiety.Dns.Core.Records.RecordX25

// Ubiety.Dns.Core.Records.RecordX25

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// Ubiety.Dns.Core.Common.VerboseEventArgs

// Ubiety.Dns.Core.Common.VerboseEventArgs

// Ubiety.Dns.Core.Common.VerboseOutputEventArgs

// Ubiety.Dns.Core.Common.VerboseOutputEventArgs

// System.Void

// System.Void

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>
struct AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>

// System.IO.BufferedStream

// System.IO.BufferedStream

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Net.Sockets.NetworkStream

// System.Net.Sockets.NetworkStream

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_StaticFields
{
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject* ____lock_0;
};

// System.Security.Cryptography.RNGCryptoServiceProvider

// Ubiety.Dns.Core.Response

// Ubiety.Dns.Core.Response

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

// Ubiety.Dns.Core.Resolver/<TcpRequest>d__58

// Ubiety.Dns.Core.Resolver/<TcpRequest>d__58

// System.AsyncCallback

// System.AsyncCallback

// Ubiety.Dns.Core.Resolver/VerboseEventHandler

// Ubiety.Dns.Core.Resolver/VerboseEventHandler

// System.ArgumentNullException

// System.ArgumentNullException

// System.Net.Sockets.SocketException

// System.Net.Sockets.SocketException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Net.IPEndPoint[]
struct IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A  : public RuntimeArray
{
	ALIGN_FIELD (8) IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* m_Items[1];

	inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080  : public RuntimeArray
{
	ALIGN_FIELD (8) NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* m_Items[1];

	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* value)
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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


// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m50F93D8077A30306214D92B70DE00DBC355D209B_gshared (Assembly_t* ___0_element, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Ubiety.Dns.Core.Resolver/<TcpRequest>d__58>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mD2C24D27CE2D3892FC6C2FEDDBF2E6B9B3FF922F_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Ubiety.Dns.Core.Resolver/<TcpRequest>d__58>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mC9AE07E941B316F55A4BDE8E152CBDED0995F402_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB_gshared (Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;

// System.Void Ubiety.Dns.Core.ResourceRecord::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceRecord__ctor_mCB057EFB1714C05395D13F2E70A5200291E594C7 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.RecordReader::ReadUInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Header::set_Id(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_Id_m452D155D055E60790F8EAC03C7C8786186E8748D_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Header::set_QuestionCount(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_QuestionCount_m6944E71103A18DD327E33F00CCA4403084FC51F4_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Header::set_AnswerCount(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_AnswerCount_mF805DD706C7221A3243603655E9D7153C6C98BC0_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Header::set_NameserverCount(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_NameserverCount_m8EE0F372A9A1D19E2CA543433B2B4CC99C6F35B9_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Header::set_AdditionalRecordsCount(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_AdditionalRecordsCount_m09123884C005C9C0FD025E7D6D009D540675B823_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Header::GetBits(System.UInt16,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B (uint16_t ___0_oldValue, int32_t ___1_position, int32_t ___2_length, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Header::SetBits(System.UInt16,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_SetBits_mE05A272A695F7FB13F6226B6E6EAFDF7C3124DA2 (uint16_t ___0_oldValue, int32_t ___1_position, int32_t ___2_length, bool ___3_blnValue, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Header::SetBits(System.UInt16,System.Int32,System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_SetBits_m8517B88FCE5652D32E7041CD2A004F83FCB9F06F (uint16_t ___0_oldValue, int32_t ___1_position, int32_t ___2_length, uint16_t ___3_newValue, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.UInt16 Ubiety.Dns.Core.Header::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_Id_m85C044BC11EF7A3867E5937AC4998BCFDED0B5C3_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Header::WriteShort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Header_WriteShort_mA19FB848F851DE7B6216384DF4ECDB8499AEF548 (uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared)(__this, ___0_collection, method);
}
// System.UInt16 Ubiety.Dns.Core.Header::get_QuestionCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_QuestionCount_mFF9BD817E9E69BB27BB21345A82E2CBDFD8EAAC3_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Header::get_AnswerCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_AnswerCount_m3314F95CEB725FDDB3A2749CF9A02B96E0E6852B_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Header::get_NameserverCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_NameserverCount_mE194DACB72FD0B30E6680D5C4A463F1B6FD74DE0_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Header::get_AdditionalRecordsCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_AdditionalRecordsCount_m0AE102FB1EE9AA7D4CCB7BBA98AFF66A4A1867D4_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t IPAddress_HostToNetworkOrder_mD194220C5D8CAB869557E050DDAABC660184376F (int16_t ___0_host, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m0E92A4A8881B288AF838E6F5C7220210A5AADB15 (int16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Question::set_QuestionName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Question_set_QuestionName_mA4C5145B96CC5A461A026321DF3992E260E8EC02 (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.RecordReader::ReadDomainName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Question::get_QuestionName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Question_get_QuestionName_m8B15666CD7C55B72C95DB140C8E244412CB3A53E_inline (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Common.QuestionClass Ubiety.Dns.Core.Question::get_QuestionClass()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Question_get_QuestionClass_m5225419D0016B927E62DA634C1A357795C4696B4_inline (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Common.QuestionType Ubiety.Dns.Core.Question::get_QuestionType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Question_get_QuestionType_m8535FC6F3AB1FCF43A9D187812A698A39236CFA6_inline (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Question::WriteName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Question_WriteName_m45E102FA9024B6AAABF7C88E5A36BB3C47CB8500 (String_t* ___0_src, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Question::WriteShort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Question_WriteShort_m81427D82B90523680FA185EE18E7A9918CAA2DBB (uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE (StringBuilder_t* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.RecordReader::set_Position(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordReader_set_Position_m6BE8D3717978BC8F1C0166281D787EB909248B0B_inline (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Ubiety.Dns.Core.RecordReader::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB_inline (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.RecordReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.RecordReader::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordReader__ctor_mD26CC895238CDC5444C9463B90B22C71D7C7EDB9 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_position, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Char Ubiety.Dns.Core.RecordReader::ReadChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RecordReader_ReadChar_m03C7AC71286B4653F5DFB3E58D55B64CF7B9F761 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] Ubiety.Dns.Core.RecordReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, int32_t ___0_length, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___0_item, method);
}
// Ubiety.Dns.Core.Records.Record Ubiety.Dns.Core.Common.EnumExtensions::GetRecord(Ubiety.Dns.Core.Common.RecordType,Ubiety.Dns.Core.RecordReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* EnumExtensions_GetRecord_m74733B121A9336D6919B1065817F0E3447058282 (int32_t ___0_type, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___1_reader, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Header::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_mEB1A65C75C61C368B738F38EFEE3C00583EDCC00 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Header::set_OpCode(Ubiety.Dns.Core.Common.OperationCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_OpCode_m34F4CBCE32A0924D3D6CEA7E905A50E2C282BC4E (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>::.ctor()
inline void List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Ubiety.Dns.Core.Header Ubiety.Dns.Core.Request::get_Header()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* Request_get_Header_mC79D5787DE4EAF7A16AAFEB67FD57E48E41ADF9A_inline (Request_t5EC29E166C112954C06827C8C28901253ABC6350* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>::get_Count()
inline int32_t List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_inline (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Header::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Header_GetData_m4171DEC7402907BF8F426240C89A365A0A82F590 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>::GetEnumerator()
inline Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00 List_1_GetEnumerator_m21841180F2A32CABBE24798F6D35E07320E07FCB (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00 (*) (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.Question>::Dispose()
inline void Enumerator_Dispose_mE8879B4AAC5CB5B15F78F06BD9728669050072CA (Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.Question>::get_Current()
inline Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* Enumerator_get_Current_m42066153D87F61B33CC26FD976AD7BB9487A1956_inline (Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00* __this, const RuntimeMethod* method)
{
	return ((  Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* (*) (Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Question::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Question_GetData_m2A274E00BFA4EBA62D72C7EA4A8FC55419BF9012 (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.Question>::MoveNext()
inline bool Enumerator_MoveNext_m9D5C5BDB97A574C0D7D145AD467C89A78C3CAFF4 (Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>::Add(T)
inline void List_1_Add_m84ACE04AE0AE93F341F993856C2855CBAFE0FE35_inline (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* __this, Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA*, Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09 (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>::.ctor()
inline void Dictionary_2__ctor_m5AB2031978429091793FB433B8096086C675EE33 (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Net.IPEndPoint>::.ctor()
inline void List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234 (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.Net.IPEndPoint> Ubiety.Dns.Core.Resolver::get_DnsServers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Net.IPEndPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m42B5FD9C167F843691D700E4541706A003BD7887 (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Resolver::set_Recursion(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Resolver_set_Recursion_m913F0246EAE34B07F24B03699E5A668DDA3F14A7_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Resolver::set_TransportType(Ubiety.Dns.Core.Common.TransportType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Resolver_set_TransportType_mC2ADDF22B194FE839D431E21006CDF518B1C5480_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RandomNumberGenerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberGenerator_Dispose_m3C4215E0EACE0A9A91FDE146BDEE954F8E9AE615 (RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Resolver::.ctor(System.Collections.Generic.IEnumerable`1<System.Net.IPEndPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__ctor_m275B531C657DF929845573196C0E4BD6E275DB23 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, RuntimeObject* ___0_dnsServers, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Resolver::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__ctor_m75F063E1193C995BFD6ABAA863AF0D7108DC633A (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_dnsServer, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23 (String_t* ___0_ipString, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Resolver::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__ctor_mF9EF60B41790413FC78C644150F4D2DC2A7FF0C4 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_serverIpAddress, int32_t ___1_serverPortNumber, const RuntimeMethod* method) ;
// System.Int32 Ubiety.Dns.Core.Resolver::get_DefaultPort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Resolver_get_DefaultPort_mFD7867C84912372CE7128B20F9A035F9042C055F_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Net.IPEndPoint> Ubiety.Dns.Core.Resolver::GetSystemDnsServers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resolver_GetSystemDnsServers_m91AD802258CA2AA755630E78FD9A59B35B429B82 (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Reflection.AssemblyInformationalVersionAttribute>(System.Reflection.Assembly)
inline AssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D* CustomAttributeExtensions_GetCustomAttribute_TisAssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D_m43844524853C160318F34142991F5AA0BDAF26FA (Assembly_t* ___0_element, const RuntimeMethod* method)
{
	return ((  AssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D* (*) (Assembly_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m50F93D8077A30306214D92B70DE00DBC355D209B_gshared)(___0_element, method);
}
// System.String System.Reflection.AssemblyInformationalVersionAttribute::get_InformationalVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyInformationalVersionAttribute_get_InformationalVersion_m9C9650DC927EEA3A1ADC29572FC86942D6456A54_inline (AssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Net.IPEndPoint>::Add(T)
inline void List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_inline (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<System.Net.IPEndPoint>::get_Item(System.Int32)
inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* (*) (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_TryParse_m082F2D09B53BD7A957418E2E7BE4C37AD8EE1AF0 (String_t* ___0_ipString, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** ___1_address, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Net.IPEndPoint>::Clear()
inline void List_1_Clear_m1453BDC86F66E17E35A1DFFFC4B3829038AAF486_inline (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::Query(System.String,Ubiety.Dns.Core.Common.QuestionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_Query_mFA189DAF650DB5F1C0A1486512BC674265BAB3FE (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, String_t* ___0_name, int32_t ___1_qtype, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA> Ubiety.Dns.Core.Response::get_RecordA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* Response_get_RecordA_mEDCCD9E5FE6EA820AA5C36017667D631B08E9126 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA>::get_Count()
inline int32_t List_1_get_Count_m4C50D1C86324E493E10CED11C25FEC1653D8F9A6_inline (List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA>::get_Item(System.Int32)
inline RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* List_1_get_Item_m8A999C72941C1C60485F0C1AEF6B0CDDB76D8D66 (List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* (*) (List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Net.IPAddress Ubiety.Dns.Core.Records.General.RecordA::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* RecordA_get_Address_mC01FDC4FDBBFDC9F2A8FD5BDD964A80277F6A98F_inline (RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>::Clear()
inline void Dictionary_2_Clear_m85CA995230E8299A4A20AD2914300A5943D9347C (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.NetworkInterface::GetAllNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* NetworkInterface_GetAllNetworkInterfaces_m4E5A4AAEED8B11868BDC8F78975460D9B6F3CD70 (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Net.IPEndPoint>::Contains(T)
inline bool List_1_Contains_mD6F2D194A035D5B660C9002AE1BCDC0052B9262F (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<System.Net.IPEndPoint>::ToArray()
inline IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* List_1_ToArray_m6F8B0D1771FCD386F8D858B4001F2A1850672F77 (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* __this, const RuntimeMethod* method)
{
	return ((  IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* (*) (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29 (StringBuilder_t* __this, int32_t ___0_index, String_t* ___1_value, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D (String_t* ___0_input, String_t* ___1_pattern, String_t* ___2_replacement, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Question::.ctor(System.String,Ubiety.Dns.Core.Common.QuestionType,Ubiety.Dns.Core.Common.QuestionClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Question__ctor_m1DD0593D06300A0BACBF87AA7A36DE824065B66B (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, String_t* ___0_questionName, int32_t ___1_questionType, int32_t ___2_questionClass, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::SearchInCache(Ubiety.Dns.Core.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_SearchInCache_mD5DDF83D2A81D1E7FF08BAD03515A9C4B562BA54 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* ___0_question, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Request::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_m0018BD6FC1D1E420600071E82068E401C52158B8 (Request_t5EC29E166C112954C06827C8C28901253ABC6350* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Request::AddQuestion(Ubiety.Dns.Core.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_AddQuestion_m6EDA63F4025973D063677EE0E8D1129234DC1003 (Request_t5EC29E166C112954C06827C8C28901253ABC6350* __this, Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* ___0_question, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::GetResponse(Ubiety.Dns.Core.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_GetResponse_m53BAB9D279D99726417B2AFD4411210DAED67D60 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Request_t5EC29E166C112954C06827C8C28901253ABC6350* ___0_request, const RuntimeMethod* method) ;
// System.Byte[] Ubiety.Dns.Core.Request::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Request_GetData_m83A495F874D76F4BF0E467EDA6C0840535FC1D82 (Request_t5EC29E166C112954C06827C8C28901253ABC6350* __this, const RuntimeMethod* method) ;
// System.Boolean Ubiety.Dns.Core.Resolver::get_Recursion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Resolver_get_Recursion_m363EBE369298E0499E9131A4394D4EF6542C0116_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Header::set_Recursion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_Recursion_m862953E63D5949F097F32CB4579B2B15B27E67EF (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, bool ___0_value, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Common.TransportType Ubiety.Dns.Core.Resolver::get_TransportType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Resolver_get_TransportType_m65C7BDF67D51BFA67D6B20D1FE8A80B26A717048_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::UdpRequest(Ubiety.Dns.Core.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_UdpRequest_mCB8BD05301AABE47EE2AD4F8DF97A07CF96312E4 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Request_t5EC29E166C112954C06827C8C28901253ABC6350* ___0_request, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Ubiety.Dns.Core.Response> Ubiety.Dns.Core.Resolver::TcpRequest(Ubiety.Dns.Core.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2* Resolver_TcpRequest_mC44DA65E84573CC051315868CF6AADE28782D9A8 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Request_t5EC29E166C112954C06827C8C28901253ABC6350* ___0_request, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Ubiety.Dns.Core.Response>::get_Result()
inline Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Task_1_get_Result_m09796D55BB5F0B5716BC33AC7B471218160F7C76 (Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2* __this, const RuntimeMethod* method)
{
	return ((  Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* (*) (Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Void Ubiety.Dns.Core.Response::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response__ctor_m19629725F28D63C0974A64CDEB46A4FAF85DAAE5 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Response::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Response_set_Error_m9D123C0A7BD42AC2CB338419742F7CB521B6EF3C_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Common.VerboseEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerboseEventArgs__ctor_m437D7297CD4A72638701D8061419049BD51EAFC5 (VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Resolver/VerboseEventHandler::Invoke(System.Object,Ubiety.Dns.Core.Common.VerboseEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_inline (VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mC3E21DA09723C7D00001F353493A427E79DECD82 (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>::get_Item(TKey)
inline Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Dictionary_2_get_Item_m9ED00FB67F8A63328605AB1D0F1E076136D339BD (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* (*) (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.DateTime Ubiety.Dns.Core.Response::get_TimeStamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Response_get_TimeStamp_m218553F6622D9007F20DD10FC434ADD59658BF13_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Ubiety.Dns.Core.ResourceRecord> Ubiety.Dns.Core.Response::get_ResourceRecords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Response_get_ResourceRecords_m3C98EAC31DFB93A3210A6B2619C87E206D8A2ADC (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.ResourceRecord::set_TimeLived(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResourceRecord_set_TimeLived_m1B6A00C9BB82EF621A7BCFDD8CA9C5820CCF855E_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.ResourceRecord::get_Ttl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ResourceRecord_get_Ttl_m2279AF0020861670E5177BE4D9A499D1F3D86896 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Question> Ubiety.Dns.Core.Response::get_Questions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Header Ubiety.Dns.Core.Response::get_Header()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Common.ResponseCode Ubiety.Dns.Core.Header::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Header_get_ResponseCode_mC4690F97FEB2B2AF2F738440A62F1A51BABA43CE (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>::get_Item(System.Int32)
inline Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* List_1_get_Item_m641238DE01D4A2AEA68206C442B6EAD186611873 (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* (*) (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>::Remove(TKey)
inline bool Dictionary_2_Remove_m52A82CC043623D3D3E52B72FEF18655FD93A8F73 (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ubiety.Dns.Core.Response>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8D515126E50B361D5D9FB68185AECF52123355A4 (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* __this, String_t* ___0_key, Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469*, String_t*, Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___0_addressFamily, int32_t ___1_socketType, int32_t ___2_protocolType, const RuntimeMethod* method) ;
// System.Int32 Ubiety.Dns.Core.Resolver::get_Timeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Resolver_get_Timeout_mF50B8ED5892098FF659163B93EA195ED2278F117_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_SetSocketOption_m19085C1856DE21260294680B7725610D71D66A58 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___0_optionLevel, int32_t ___1_optionName, int32_t ___2_optionValue, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_SendTo_m1CB5F145162DBEB1F602BCC375C6217B7E754081 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___1_remoteEP, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_m1D506714778D53C3EB7BBCB9155B8AEEF06FA91C (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Response::.ctor(System.Net.IPEndPoint,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response__ctor_mC0F876B5456C41CB1909E5EFBFEB2F6BF1A7BC39 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_iPEndPoint, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Resolver::AddToCache(Ubiety.Dns.Core.Response)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_AddToCache_m124852D7A2ACF9EDAADBF36DDB7193A75C763F6D (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* ___0_response, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Resolver::Verbose(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_Verbose_m864091AEFBE78BE0CAFF05D5801BF631E8020D2C (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Net.IPEndPoint>::get_Count()
inline int32_t List_1_get_Count_m65B2C3C3CB5FE1BC9F99E27E30E3A9C4D1F98D8C_inline (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>::Create()
inline AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02 AsyncTaskMethodBuilder_1_Create_m54653C35CAC9D7F46486D3BC662F56CD8B1E8336 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>::Start<Ubiety.Dns.Core.Resolver/<TcpRequest>d__58>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mC6508FCD4BDE64A19B94E5596546A6932F3F5521 (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* __this, U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02*, U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mD2C24D27CE2D3892FC6C2FEDDBF2E6B9B3FF922F_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>::get_Task()
inline Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2* AsyncTaskMethodBuilder_1_get_Task_m8267F5874CDE64928E523659A8FDD9FF8843F127 (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2* (*) (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Net.Sockets.SocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_mDDA59569C2C05AB013AF9670BD6EC070086239AB (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Question>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m18EA74377CBCFC59DE6BA7E1AD0A9E2BD6E65222 (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR> Ubiety.Dns.Core.Response::get_Answers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m5CA86F8D239FF90A703C306BEDD70427D1D54DEC (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR> Ubiety.Dns.Core.Response::get_Authorities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* Response_get_Authorities_mA8B7731F453C68239CB2A98788550AEC6DCF701C_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mB455010BE75CE2E8CDB09838DFE1C4A01C742332 (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR> Ubiety.Dns.Core.Response::get_Additionals()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* Response_get_Additionals_mDD10FE503E759BDE32BBCFDD05E383A2D3C9F52C_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mD1473AD8CFE0F7F892CE2071BBFE57FA884CD3F6 (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// T System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>::get_Item(System.Int32)
inline AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* List_1_get_Item_m262ADEEA2C0529BC87D7AD90C81D103A99CF0AD2 (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* (*) (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// Ubiety.Dns.Core.Common.RecordType Ubiety.Dns.Core.ResourceRecord::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceRecord_get_Type_m3461765E4063C2ACBB3FBA163885068368335B37_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>::get_Count()
inline int32_t List_1_get_Count_m8CE8D366FCF69B29A9141285BAA958350C1F53EE_inline (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR>::get_Count()
inline int32_t List_1_get_Count_m89DC2CC869AB89238D663B461053873FB5A6F814_inline (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR>::get_Count()
inline int32_t List_1_get_Count_mF30E4A853AFC9A484FA405F39AA61B91857AC85C_inline (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Ubiety.Dns.Core.Response::set_MessageSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Response_set_MessageSize_m31F390FF9AD7D9CC5A0FEE54B2FF8195A3859B17_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.IPEndPoint>::GetEnumerator()
inline Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85 List_1_GetEnumerator_m167C803023EFDEA03A5AEE4555FB1455F53E1C73 (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85 (*) (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Net.IPEndPoint>::Dispose()
inline void Enumerator_Dispose_mDD71B71D79434EBDD38D36CB7C5A0ADEE8BCA1B6 (Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Net.IPEndPoint>::get_Current()
inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* Enumerator_get_Current_mAA9A1D3D580F0A8D0036C7E8848CAB148DD80DC6_inline (Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85* __this, const RuntimeMethod* method)
{
	return ((  IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* (*) (Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Net.Sockets.TcpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m709FAC4D5B9DDB279F9B97D90D3164B92E1F2C87 (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.TcpClient::set_ReceiveTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_ReceiveTimeout_mF205FBAD90301B326420B66DDA8E7E6AD518B27C (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BufferedStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedStream__ctor_mE46A382BA3310909FE3283CCC46DE3A6EA6E0DF3 (BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89 (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Net.Sockets.TcpClient::ConnectAsync(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TcpClient_ConnectAsync_m6C76D53DE825D614001CE506E1BC09E2C6335CE5 (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Ubiety.Dns.Core.Resolver/<TcpRequest>d__58>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mF5EC5E8450D3787349DA1F3E61218A2066E84964 (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mC9AE07E941B316F55A4BDE8E152CBDED0995F402_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_get_Connected_mAE5B631778361C28C783E417C09F87BA102787B5 (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Resolver::WriteRequest(System.IO.Stream,Ubiety.Dns.Core.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_WriteRequest_m77BD453EA82F35B352025BF69A3675F76483938A (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, Request_t5EC29E166C112954C06827C8C28901253ABC6350* ___1_request, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::ReceiveResponse(System.IO.Stream,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_ReceiveResponse_mE852EB3C24AD7DC984629302B83720E611DC5D28 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___1_server, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Net.IPEndPoint>::MoveNext()
inline bool Enumerator_MoveNext_m5020CAD6D2F61FD755EF2B89B56555F5EEFB7788 (Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mC69F2D48BFFA2348A56133508C574789C16A338D (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m69FD3772776E110545B217CA64090518B4C5D1C4 (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* __this, Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02*, Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTcpRequestU3Ed__58_MoveNext_m1336E7D84F559B91865EFF9D2F2585A86F9F63FD (U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Ubiety.Dns.Core.Response>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0512EBD9BE75C05AE7F2B046109F9CCC18EE0F92 (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTcpRequestU3Ed__58_SetStateMachine_m87702767262A50206C3490900F6F955DB50C0530 (U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.RecordReader::ReadUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.ResourceRecord::set_Ttl(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResourceRecord_set_Ttl_mF7DEB441862A2AF10026651F48BDCA4265EC5AD5_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Records.Record Ubiety.Dns.Core.RecordReader::ReadRecord(Ubiety.Dns.Core.Common.RecordType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* RecordReader_ReadRecord_m984D114C9CEBD45EE94228AA1F7220B1229FE4E3 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Records.Record Ubiety.Dns.Core.ResourceRecord::get_Record()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.Record::set_ResourceRecord(Ubiety.Dns.Core.ResourceRecord)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Record_set_ResourceRecord_mEE6745C1DC7DC1CF1F9F66FA14AA9D079EAAD468_inline (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Ubiety.Dns.Core.ResourceRecord::get_TimeLived()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceRecord_get_TimeLived_m5B496D9020DFF3BEFA9A0EC68F64FD62B2F37FC9_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) ;
// System.Int64 System.Math::Max(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Max_mD37411571F0547F04F280D5A8D1F044819AFA597 (int64_t ___0_val1, int64_t ___1_val2, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.ResourceRecord::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResourceRecord_get_Name_m256CD5E96F2573DFEC9A588CF9F88B1DCC662758_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) ;
// Ubiety.Dns.Core.Common.OperationClass Ubiety.Dns.Core.ResourceRecord::get_Class()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceRecord_get_Class_m73E2E11232B90CE31030DA4A8F69C6BB1D83BEF0_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>::.ctor()
inline void List_1__ctor_m823B432AD7EF662079ABAB23B2D4A534F018886E (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR>::.ctor()
inline void List_1__ctor_m35C84665BADB261DDC435836785563F9E060A7C0 (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR>::.ctor()
inline void List_1__ctor_m77176C38763790AF27EF66E5AA7F49444ED0DCA6 (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m16D9FC6DA967F79B612A59A804E1374B9D324E4A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, int64_t ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.RecordReader::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordReader__ctor_m91E0E7D72A0AB6A251477DDC99817E0F2B0F0C97 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Header::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_m6A0EACC7B270E47F2909BE13BFA5992B27F348E7 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Question::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Question__ctor_m3C399704776BB91528FE81BCD0D70DF0715522F9 (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.AnswerRR::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerRR__ctor_m0865AAB3228E396749DC0F3B13DA16115BBA6E06 (AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_br, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>::Add(T)
inline void List_1_Add_m7AA4C020C7C8896C7549A3FA563345C4EAC5D056_inline (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* __this, AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE*, AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Ubiety.Dns.Core.AuthorityRR::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorityRR__ctor_m2A65510D6072BF251AF462AB0E8AA444670D74FF (AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_br, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR>::Add(T)
inline void List_1_Add_m688720220BDD1F27C6C02B9FFACC690771E38D50_inline (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* __this, AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB*, AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Ubiety.Dns.Core.AdditionalRR::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalRR__ctor_m2CC0D99EDEDE9B7F405BD76C506B744EC898A25F (AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_br, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR>::Add(T)
inline void List_1_Add_m34E6C8D84D6541410B2044C09958CE96FDFA9E21_inline (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* __this, AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418*, AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.Mail.RecordMx>::.ctor()
inline void List_1__ctor_m708E25F3B690E9D4F008B65183E40449DED5172F (List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR>::GetEnumerator()
inline Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 (*) (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.AnswerRR>::Dispose()
inline void Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0 (Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.AnswerRR>::get_Current()
inline AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline (Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525* __this, const RuntimeMethod* method)
{
	return ((  AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* (*) (Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::op_Inequality(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_op_Inequality_m2D70A65328FBA2227AE407A0FE39393C65479EDA (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.Mail.RecordMx>::Add(T)
inline void List_1_Add_m315B9B9DAF90078BFCF000A435C02095579FD125_inline (List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8* __this, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8*, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ubiety.Dns.Core.AnswerRR>::MoveNext()
inline bool Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000 (Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.Mail.RecordMx>::Sort()
inline void List_1_Sort_m273C1D73A4320D918BF12DE431EC43F7D6FC9129 (List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8*, const RuntimeMethod*))List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordTxt>::.ctor()
inline void List_1__ctor_mB88A162072C4AFF607B3A159454496EACD8B745E (List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordTxt>::Add(T)
inline void List_1_Add_m2E0DD7B8625CC1E3B74BB2EA4EB0B24C30DD2A0E_inline (List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545* __this, RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545*, RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA>::.ctor()
inline void List_1__ctor_m675F55FB1106B811904EB04898254B3715A5D2E1 (List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA>::Add(T)
inline void List_1_Add_m64B1FB194CA750B584FA4C8DD4F1BAD3E9EE8BE1_inline (List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* __this, RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726*, RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordPtr>::.ctor()
inline void List_1__ctor_mCCFDAA2828FAAACC7F5996BCAF7B9D6E30B141B4 (List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordPtr>::Add(T)
inline void List_1_Add_mCBB307584F2AFEC6E32C14DAB37A7B6A4470744E_inline (List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A* __this, RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A*, RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordCname>::.ctor()
inline void List_1__ctor_m5B922E54F6EF858550DC1EB6ECFDBD8E7D1109B6 (List_1_t1612B1151B5A9B114CF74C46B4C409521857C084* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1612B1151B5A9B114CF74C46B4C409521857C084*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordCname>::Add(T)
inline void List_1_Add_m62C66C304021EB386A4FD3FBB913C2236BBB434B_inline (List_1_t1612B1151B5A9B114CF74C46B4C409521857C084* __this, RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1612B1151B5A9B114CF74C46B4C409521857C084*, RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordAaaa>::.ctor()
inline void List_1__ctor_mBA6D5A075A0C213D06968F01CC8A4E9EC7A3554B (List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordAaaa>::Add(T)
inline void List_1_Add_m06A9617EB4D63009E26557C1731A71D0213C171D_inline (List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062* __this, RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062*, RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordNs>::.ctor()
inline void List_1__ctor_mD63838FF7D84749378BA9DDDC39CF4D2883948E6 (List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordNs>::Add(T)
inline void List_1_Add_m23FF88CC78527D315CC8E3AD4A204B07DE3A8F56_inline (List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48* __this, RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48*, RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSoa>::.ctor()
inline void List_1__ctor_mAE605FC0B9F813EB2B0CEBEB460B4651BB1910CD (List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSoa>::Add(T)
inline void List_1_Add_mC6416D24BD5D3DBF5DAEF6AA050C4B0E24D5EE1F_inline (List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A* __this, RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A*, RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordCert>::.ctor()
inline void List_1__ctor_m99273F06E3901F8C400AF575A448679B049A7729 (List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordCert>::Add(T)
inline void List_1_Add_m8CB6B6997A921B8DDAD8945D5C4DAAC2DBDEB281_inline (List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F* __this, RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F*, RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSrv>::.ctor()
inline void List_1__ctor_m56FEC16E9BDC725C0EDCF20D91D829B3DB546BF4 (List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSrv>::Add(T)
inline void List_1_Add_m4E86DB3A01A9781DC6761E93119E4F3634F6E786_inline (List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A* __this, RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A*, RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<Ubiety.Dns.Core.ResourceRecord>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_m89FCDA0E95DD127951ADE66F47D441DCC671AC9B (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Ubiety.Dns.Core.ResourceRecord>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0* Enumerable_ToList_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_mFBBB94D8198133929093CAAA45E9844F85CDFA08 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Void System.Collections.Generic.List`1<Ubiety.Dns.Core.ResourceRecord>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m3D42627D41F555C8ED0B287F329C4EC06F160BDB (List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.UInt16 Ubiety.Dns.Core.RecordReader::ReadUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordReader_ReadUInt16_m750F87891DBE43C75F451616DF7EF8E022BB7CFF (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_gshared)(__this, ___0_collection, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.Record::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178 (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordAfsdb::get_SubType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordAfsdb_get_SubType_mEDDFAF0FA0E75E628099A72D6EE2518F445E44DE_inline (RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordAfsdb::get_Hostname()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordAfsdb_get_Hostname_m1B69A236F4BF229FEB4461A4123ADE8DA975CC2E_inline (RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordCert::get_PublicKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordCert_get_PublicKey_m1955A60027E379C6B9D0EBF2D0B190E74EE99389_inline (RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordDname::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordDname_get_Target_m4E33640889120EFDA2819929961EE4733DD63D4C_inline (RecordDname_t726AC7580CCFCFA272A2B663E07FC8490E46FA73* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B (StringBuilder_t* __this, RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordDs::get_KeyTag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordDs_get_KeyTag_mBD0B4A18F9DBF0205DE146AD0D0289310C91985A_inline (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.Records.RecordDs::get_Algorithm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordDs_get_Algorithm_m560F1D84FD2C2F5623214A4218C472DD71230BD9_inline (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.Records.RecordDs::get_DigestType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordDs_get_DigestType_m170E7BBF50A235623A82A65CDE5B0F3216448AAA_inline (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.RecordReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordHinfo::get_Cpu()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordHinfo_get_Cpu_mDBCF03D423E514B9C5326249777D054587652CD8_inline (RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordHinfo::get_Os()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordHinfo_get_Os_mDB238BD2D7F7529DD01F2439BDD7AAB3E09E0B86_inline (RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordIsdn::set_IsdnAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordIsdn_set_IsdnAddress_mE08DEE84026DF64004B0CF66ED0C3FC5A44443F0_inline (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordIsdn::set_SA(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordIsdn_set_SA_mC43D9F374C4EF8193FF06C0DF1E45D5479E43831_inline (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordIsdn::get_IsdnAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordIsdn_get_IsdnAddress_m0D23039B490B0E59676199A113CC5FE9DA6477BA_inline (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordIsdn::get_SA()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordIsdn_get_SA_mE79C5CBA3B1373200D253AAFCB838318329512A0_inline (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordKey::set_Flags(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordKey_set_Flags_m6998C9DE9250B2044515375D3E3C50C52AD4AC19_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordKey::set_Protocol(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordKey_set_Protocol_m892EC433FAAB36359557691764AE7C991FE1C6B1_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordKey::set_Algorithm(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordKey_set_Algorithm_mB1AF881A8EB1372C069DD03574CDC3C8BDB42543_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordKey::set_PublicKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordKey_set_PublicKey_m2352F238D7CE5B7EA39FDC72433AC74A18CFDD34_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordKey::get_Flags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordKey_get_Flags_m19ACB7FA5582FC4C6086584060C04451A81B199A_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.Records.RecordKey::get_Protocol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordKey_get_Protocol_mC9C913A03BCC7F7CA7CB489C149582DED63DC12C_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.Records.RecordKey::get_Algorithm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordKey_get_Algorithm_mC21D23B4B784D41C4CB2BF981CF2981572D28F52_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordKey::get_PublicKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordKey_get_PublicKey_m3CD0D3B66B9C6EAF9ED3EB10E9E26AE31C7A1C72_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) ;
// System.Int32 Ubiety.Dns.Core.Records.RecordKx::CompareTo(Ubiety.Dns.Core.Records.RecordKx,Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordKx_CompareTo_m574F8143FB3DECFAD2622E5110DC55487CBBD7DC (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_x, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::op_Equality(Ubiety.Dns.Core.Records.RecordKx,Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_op_Equality_m890D050FC89F9F20F062F21A392180875DD723CF (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_x, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___1_y, const RuntimeMethod* method) ;
// System.Int32 Ubiety.Dns.Core.Records.RecordKx::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordKx_CompareTo_mD1DC93B383F221BE6F2FA90F0E45D3A4C769FFD6 (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordKx::get_Preference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordKx_get_Preference_m01404544D5C6BAA367E9B95D0521428BE318DE51_inline (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordKx::get_Exchanger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordKx_get_Exchanger_m7C16A546DA553CF40F18CB4C51A648553AFA4A8E_inline (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::Equals(Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_Equals_m98D7221FCB571CCEE38D2842F8023AC9F124B942 (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9 (String_t* ___0_strA, String_t* ___1_strB, bool ___2_ignoreCase, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___3_culture, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordLoc::get_Latitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordLoc_get_Latitude_m3564B63357DCC2E7381983EAF005D9BB39F04783_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordLoc::ToTime(System.UInt32,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordLoc_ToTime_m4B5A42977888036D528CB76C5FF8B8C4CCCACBF4 (uint32_t ___0_r, Il2CppChar ___1_below, Il2CppChar ___2_above, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordLoc::get_Longitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordLoc_get_Longitude_m4BEF8538F63E3217E050FCC2866514079F6F3343_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordLoc::get_Altitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordLoc_get_Altitude_m3FA405BAE7100DBB1C4A91918D45D6DD6574ACCD_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordLoc::ToAlt(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordLoc_ToAlt_m27DE395F59E5CDA8820EAB6867C7A0D51D057FA4 (uint32_t ___0_a, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.Records.RecordLoc::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_Size_m6B0EBBB9B76BFD714BC75909951374470C86ADFD_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordLoc::SizeToString(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordLoc_SizeToString_m395689EA59031C6A4272C31044824802D2D0D713 (uint8_t ___0_size, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.Records.RecordLoc::get_HorizontalPrecision()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_HorizontalPrecision_mEAD4CCC803CBD60202E9F9C2054AA48887F40602_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.Records.RecordLoc::get_VerticalPrecision()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_VerticalPrecision_mBE6E243AAC6F6BABDA481F7F0807386D17249BE1_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Order(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Order_m986E7E28D127E7ABBEE5995F7F984B9B22F18C0F_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Preference(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Preference_mCEA50578CB7630A1FB01FFCF5A9DEBBB19B7B832_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Flags(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Flags_m47A719B724478E41B9E20F21C5A92580039D8FB6_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Services(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Services_mA6B7318BFCCF64C784F39EAF8FCC9CFC5F44184D_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Regexp(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Regexp_m5CC68A94B44B10459F423BB65BB118BFBBD80E17_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Replacement(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Replacement_m2B91E2C60179E6BF8E5A0195A2D6A774A3FC7503_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordNaptr::get_Order()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordNaptr_get_Order_m1BC01A45257ED5577FC961103C607D05395EE706_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordNaptr::get_Preference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordNaptr_get_Preference_mAF78AFAAEF247899F009D65887B4C6098A702FED_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordNaptr::get_Flags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Flags_m2DFAFB5ADDBDBD24F14F0F5E449C9C33970C34B4_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordNaptr::get_Services()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Services_mC281C3BBFA9415CEDD8ED4F876C8018D405EDCEB_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordNaptr::get_Regexp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Regexp_m2F0409840C5E69C977C189235B0A71B1F1F83029_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordNaptr::get_Replacement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Replacement_m0A162169FCC7FAD93533C353949D956C0237810B_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordNs::set_NameserverDomain(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNs_set_NameserverDomain_mFAF9857756A5320ACDB5C8A0F7FE2EB15B7C3C07_inline (RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordNs::get_NameserverDomain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNs_get_NameserverDomain_mA2FFF0435B9F3CFF5DF4390F59A665A5743E199F_inline (RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordNsap::set_Length(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNsap_set_Length_m373FD4E6082CD21378E293E6605A0D7837236CD8_inline (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordNsap::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordNsap_get_Length_m8EFA597BDC05A8E4015065B82FB62FB964FB8532_inline (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor(System.Collections.Generic.IList`1<T>)
inline void Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB (Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA*, RuntimeObject*, const RuntimeMethod*))Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB_gshared)(__this, ___0_list, method);
}
// System.Void Ubiety.Dns.Core.Records.RecordPtr::set_PointerDomain(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordPtr_set_PointerDomain_mCC986A5600164BD9156159AFE85665DCD687A4D9_inline (RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordPtr::get_PointerDomain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordPtr_get_PointerDomain_m2BC0CDFAA2EECEBBC68BB195D0420162AE621F35_inline (RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordPx::set_Preference(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordPx_set_Preference_m4E6AAC673F3BAE3D25D890FFC56FE6C534F8B7F6_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordPx::set_Map822(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordPx_set_Map822_mD945E4283268459FA20879259CF1353697CBAB00_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordPx::set_MapX400(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordPx_set_MapX400_m5A67A1B844923247A8A50CD0F6A1FF71C3EE3316_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordPx::get_Preference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordPx_get_Preference_mD01246757FFCFFBD0FC00ADA7D8A40B56B0115D9_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordPx::get_Map822()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordPx_get_Map822_m79B72AEFCF44A77B70200DAF15EFB7527E753181_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordPx::get_MapX400()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordPx_get_MapX400_m32B89F9E5530187B5761AC531C83D5B1C1DC0690_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordRp::set_MailboxDomain(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordRp_set_MailboxDomain_m2574CEFE4B16F5A5127B80E9E8A2A6A25ED5E849_inline (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordRp::set_TxtDomain(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordRp_set_TxtDomain_m33E062FDC700B00D437C03A98352DC87A8372B65_inline (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordRp::get_MailboxDomain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordRp_get_MailboxDomain_mD68D69F937F5F9F62AAE6EC37301741C213C57B0_inline (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordRp::get_TxtDomain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordRp_get_TxtDomain_m8EFE3A422A22E643AFB1473CC4B4C12E7EDF82D3_inline (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordRt::set_Preference(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordRt_set_Preference_m15355690F0577FC46967926C23E662CCF995F403_inline (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordRt::set_IntermediateHost(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordRt_set_IntermediateHost_m4C8762C67C68B6A3F186F35C5761470E87F8309E_inline (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordRt::get_Preference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordRt_get_Preference_m561484C13865269C3EFF4ECE4E32695819FB2BF5_inline (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordRt::get_IntermediateHost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordRt_get_IntermediateHost_m6A769DDF346083B59AAB83D9E3BCB09BB463B358_inline (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_TypeCovered(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_TypeCovered_m445AD32E5E8050A14C203B138DA20120D4D851E4_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_Algorithm(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_Algorithm_m78A3B9B932D231C28F61B5D771F60AC7EC29CFD7_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_Labels(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_Labels_mA3D3760B88403D77AB6229A3183D2564D4DB27EC_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_OriginalTTL(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_OriginalTTL_mB97DE26A80B3C998299824A95593EC71037246BD_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_SignatureExpiration(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_SignatureExpiration_m34D03E078F2AA93BD649CB5A5B50A48776F25927_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_SignatureInception(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_SignatureInception_m007AA09E1E17F97D77A457710609149BAC56B17A_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_KeyTag(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_KeyTag_m5FDE40A2016EA3523A0530415683584F8DC63E43_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_SignersName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_SignersName_mAEA4B26F8C4AF619615458D2B90A8EB8D3E1A7EA_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_Signature(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_Signature_m95151CA0F978931A75D78D2D467E7AB4EF31EC71_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordSig::get_TypeCovered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSig_get_TypeCovered_m5A21E51E4AA06158CB0D3D5A5455A07D153A865A_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.Records.RecordSig::get_Algorithm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordSig_get_Algorithm_m8FA0001FE64CB2673053BE393AB4072AA77DA089_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) ;
// System.Byte Ubiety.Dns.Core.Records.RecordSig::get_Labels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordSig_get_Labels_m57D2E96F208E84C640ED8BD5D9002722F3A2A5EB_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordSig::get_OriginalTTL()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSig_get_OriginalTTL_mD114E358687F6661D99FAAA1896DCFEF7E15BFD0_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordSig::get_SignatureExpiration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSig_get_SignatureExpiration_m99899B8885600C7DEF0338DC8C1EA1769D84BC23_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordSig::get_SignatureInception()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSig_get_SignatureInception_mAF869907C46454B2AE2291418A342A55B8359BA7_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordSig::get_KeyTag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSig_get_KeyTag_mD33503907980CDB313596A5BF3F952A653A5EF34_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordSig::get_SignersName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSig_get_SignersName_mD6486C29CB17AF149BAEB902D9E8FDF0658315BC_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordSig::get_Signature()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSig_get_Signature_mD55305791324C847D114E38CE82095BE888AA56A_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_PrimaryNameserver(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_PrimaryNameserver_m97733BC4C19B0D4A6D2F0ED3080C0B7980A78E86_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_ResponsibleDomain(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_ResponsibleDomain_m6A4CDABA27001201A97F7D8AF40023D7AF55940D_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Serial(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Serial_mBAA0FE1B0B78A2C32A9326625198E2D57C76B9DA_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Refresh(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Refresh_mF437DDA086A27FC265AF8F13BD42D0D645C14D59_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Retry(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Retry_m22C4AA1C3EFFF4A81583360E75B2124DF2CB5CEA_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Expire(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Expire_mDC46096BDC6BD0DB977DD4B96E2D4E0F3843DB12_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Minimum(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Minimum_mBAC5BB30A42621127019FA6D94EB2C6898C78410_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordSoa::get_PrimaryNameserver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSoa_get_PrimaryNameserver_m104DD33DB6606C0E661AF68945103378E2DD975F_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordSoa::get_ResponsibleDomain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSoa_get_ResponsibleDomain_mB19DCB18FA4C09338628A354E318CC3961B63AE0_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Serial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Serial_m185CE367213770A78804DE1F0EEFB78CE9DB08A9_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Refresh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Refresh_m1F87BD8FF67E7D02006F83BDDE67BFAB7528F68F_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Retry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Retry_m7F62C5946CF0C906B536912EF37AEFA69A3B606E_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Expire()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Expire_m1971BC63E251DDA92B5505CE438BAAF8E5E30D2E_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Minimum()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Minimum_m48AF2F1B972DF4EF074D4E3F1A75444399264B90_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSrv::set_Priority(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSrv_set_Priority_m8CC732BE289B412109987EAB7158E28BBE10F2E5_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSrv::set_Weight(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSrv_set_Weight_mAD711E9873302D6B76DFA96301FB5666691BE3FF_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSrv::set_Port(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSrv_set_Port_m270EDD1EF2203A3F8208DBC939D6A5527D613593_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordSrv::set_Target(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSrv_set_Target_mD8A32496659027D45E029C24880F0170DF6A6643_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordSrv::get_Priority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSrv_get_Priority_m3D41E38F9AE07B53BC4E3BDB1D62D3F0C1FBE21F_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordSrv::get_Weight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSrv_get_Weight_mAA32F64721EFE5E296E3CA9FB5B4EBBBA93A730E_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordSrv::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSrv_get_Port_m9FFB83834577238BF9CBF792FA07247D3F533E77_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordSrv::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSrv_get_Target_m745A1955E87BA9494FA2BD250F97991A792E2964_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::get_KeySize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_KeySize_m32835599873879E0D1905A6F25B23CEB1A42ADAD_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::get_OtherSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_OtherSize_m5058EDD5F7156288831C44A0F836DC599F2F1004_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordTkey::get_Algorithm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordTkey_get_Algorithm_mA781673105F2DF93EEA8550B574B3715BC76485A_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordTkey::get_Inception()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordTkey_get_Inception_mC93E93F86C00235C57E64338AADB981674D7F05B_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) ;
// System.UInt32 Ubiety.Dns.Core.Records.RecordTkey::get_Expiration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordTkey_get_Expiration_mFAAD09A5E8369E8FC3ADA9B8F0818C48B13242F8_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::get_Mode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_Mode_mF3A931E538BF10228AB74A61291BB9252E66B28F_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_Error_m48F366706D5D1CA028E46EB325521CC29BA424E6_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_AlgorithmName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_AlgorithmName_m72F2FF988E799D6BA93636686B7030B7BCA17943_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_TimeSigned(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_TimeSigned_m19C4CFE559E5896EF97261F68434E9D3E96FE123_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_Fudge(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_Fudge_m9932FC0D42EE7E4D9014D26F70B5EBBB38F16994_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_MacSize(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_MacSize_m5F667288EEF68227BF424A6791DE5B5587A779F8_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_MacSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_MacSize_m77A1C53CBD3B4AE7F56F40A71EA0E9EFCFF20A86_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_OriginalId(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_OriginalId_m9B28D6B46FFAF1F615E876D50B6BD04FF69A2F19_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_Error(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_Error_mB8D0501EECBA518F3F51BE0D924CC8C49FEF7DFE_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_OtherLength(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_OtherLength_m2186F99E23B2FF7C317BF7C8ACD8C8ECBE052806_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_OtherLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_OtherLength_mC7BE30B0A8E9902A6317C8C76786E029BCFC9976_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_millisecond, const RuntimeMethod* method) ;
// System.Int64 Ubiety.Dns.Core.Records.RecordTsig::get_TimeSigned()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t RecordTsig_get_TimeSigned_m56D15643332B4F5134349ADCBFB1A29B949A3EBB_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.String System.DateTime::ToShortDateString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToShortDateString_m8863B024FF293DF625932CCA2E35A095C6FCBDCB (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToShortTimeString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToShortTimeString_m39FA3D20BF7F8EC6D85FBFB0254D960B7A60160F (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordTsig::get_AlgorithmName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordTsig_get_AlgorithmName_m728184815C25CA79A94C4C7731A81FDCB1A84623_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_Fudge()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_Fudge_mBA7ECD3A3CEA1D09E60385846112366F3FB38DDD_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_OriginalId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_OriginalId_mF6123A2DC12E3931FA484EBCCA75D6829B2C689C_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_Error_m8812923B3177168F5A2E53A5A3326C9BA87B8D40_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.String> Ubiety.Dns.Core.Records.RecordTxt::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* RecordTxt_get_Text_m0EB778E5CD3BB93FC87E8F2FC2CA3E5828A8967B_inline (RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_trimChars, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordWks::set_Address(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordWks_set_Address_m1A7D5C5288291C139678FD9BAA7859A45034FC4C_inline (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordWks::set_Protocol(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordWks_set_Protocol_m6B392019CE6B74D4024898C9655BD23898009041_inline (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordWks::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordWks_get_Address_m56B23C7669E17DC8868D09ABAB898049B562D9D1_inline (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, const RuntimeMethod* method) ;
// System.Int32 Ubiety.Dns.Core.Records.RecordWks::get_Protocol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecordWks_get_Protocol_m0123BEB85B2CE3801C64F01E2165CB429BD27505_inline (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.RecordX25::set_PSDNAdress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordX25_set_PSDNAdress_mA671B82352CBA9975D46D98D001F7D4C6E1253A4_inline (RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.RecordX25::get_PSDNAdress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordX25_get_PSDNAdress_m6B298C731044661BF589CA27D4245B63493348C4_inline (RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::get_Longitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordGpos_get_Longitude_m3FDCB286691C28231285A0C7F10B2CE4E712F919_inline (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::get_Latitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordGpos_get_Latitude_mD66FDAD6B85AA630866C4FD977E1D3ED1881CCB7_inline (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::get_Altitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordGpos_get_Altitude_m43793025E51D381941FAEF802F7B70C02AE990C2_inline (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordMd::get_MadName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMd_get_MadName_mBC4EDAC91CDA332EAA981A463120A781EA97D6EC_inline (RecordMd_t877F2AC8EAA563246D911594FFDF2D9B4CC0986E* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordMf::get_MadName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMf_get_MadName_mA14EF5F466794D8655671479E09586C2547F4689_inline (RecordMf_t1AE13A3E638557DD3630EE8FCD20845CCDE47BA8* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordNsapPtr::get_Owner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNsapPtr_get_Owner_m71EB476BB2289A950B7E1DF1EC20FBC0B1BACF64_inline (RecordNsapPtr_t27669D358D436A3C7C95D0517E97CA59C9B85F7E* __this, const RuntimeMethod* method) ;
// System.Boolean Ubiety.Dns.Core.Records.Obsolete.RecordNxt::IsSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordNxt_IsSet_m02ACE1E3661D3592A86CEAAD27374A2F2F015973 (RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7* __this, int32_t ___0_bitNr, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordNxt::get_NextDomainName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNxt_get_NextDomainName_m8CCC863EB8DD289A947A0DE7FC542034A6C1CCD8_inline (RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Records.Record::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0 (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_reader, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Mail.RecordMb::get_MadName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMb_get_MadName_m717DDE8A64CAB774B17B42DAA632E998BEDCB4D7_inline (RecordMb_t8C4062A4BFD4835C81427802BD75AA222751087C* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Mail.RecordMg::get_MgmName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMg_get_MgmName_mFF21D558D02B5FE6D813722A8D91EE9D16C6CD6F_inline (RecordMg_t1B1CF282B38EDB2770F24015E1735210CD9AA002* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Mail.RecordMinfo::get_ResponsibleMailbox()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMinfo_get_ResponsibleMailbox_mA3AEF3CF1C654CBAC603D78F195ECB388631A7ED_inline (RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Mail.RecordMinfo::get_ErrorMailbox()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMinfo_get_ErrorMailbox_m1BB12680C635210EBCCB2D0A56381216E63A5FBE_inline (RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Mail.RecordMr::get_NewName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMr_get_NewName_m189BCC4388666292209A29213DCAF2E89DA01315_inline (RecordMr_tB1B7AD7A31D43691D8CEE3578174A965E17793CD* __this, const RuntimeMethod* method) ;
// System.Int32 Ubiety.Dns.Core.Records.Mail.RecordMx::CompareTo(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) ;
// System.UInt16 Ubiety.Dns.Core.Records.Mail.RecordMx::get_Preference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordMx_get_Preference_m70DA3F5EA03AE964512B571F3FFE7CBB75ABCFB2_inline (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.Mail.RecordMx::get_Exchange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMx_get_Exchange_m177E920BEF6EA7306EFDB8536131706F95249243_inline (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, const RuntimeMethod* method) ;
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::Equals(Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_Equals_m4FA759DC603DA6E40B4F0634B89C2B181E2734A9 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_other, const RuntimeMethod* method) ;
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::op_Equality(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_op_Equality_m39EFBA0831506F4FD272BD48453C9A00888E82FE (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Net.IPAddress Ubiety.Dns.Core.Records.General.RecordAaaa::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* RecordAaaa_get_Address_m5E61D5D7CF8DB0F1F8D867170E6377B28FDC9E1E_inline (RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D* __this, const RuntimeMethod* method) ;
// System.String Ubiety.Dns.Core.Records.General.RecordCname::get_Cname()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordCname_get_Cname_m748E62B5BAE90369CDB7E5A16AC3BD1E351D7826_inline (RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Ubiety.Dns.Core.Common.RecordAttribute>(System.Reflection.MemberInfo)
inline RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* CustomAttributeExtensions_GetCustomAttribute_TisRecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01_m6DFD69A3465654B5A56769C275DD72C1DCF4F895 (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___0_element, method);
}
// System.Type Ubiety.Dns.Core.Common.RecordAttribute::get_RecordType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* RecordAttribute_get_RecordType_mAE8F75362B57DE093B9A5E8F0FEBACDC9E28B83B_inline (RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6 (Type_t* ___0_type, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Ubiety.Dns.Core.Common.VerboseEventArgs::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VerboseEventArgs_set_Message_m01BEFAE51A83AC97F8A9DE227B1FD0E7CD4FCB78_inline (VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Void Ubiety.Dns.Core.AdditionalRR::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalRR__ctor_m2CC0D99EDEDE9B7F405BD76C506B744EC898A25F (AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_br, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_br;
		ResourceRecord__ctor_mCB057EFB1714C05395D13F2E70A5200291E594C7(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.AnswerRR::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerRR__ctor_m0865AAB3228E396749DC0F3B13DA16115BBA6E06 (AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_br, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_br;
		ResourceRecord__ctor_mCB057EFB1714C05395D13F2E70A5200291E594C7(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.AuthorityRR::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorityRR__ctor_m2A65510D6072BF251AF462AB0E8AA444670D74FF (AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_br, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_br;
		ResourceRecord__ctor_mCB057EFB1714C05395D13F2E70A5200291E594C7(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Header::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_mEB1A65C75C61C368B738F38EFEE3C00583EDCC00 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Ubiety.Dns.Core.Header::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_m6A0EACC7B270E47F2909BE13BFA5992B27F348E7 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		Header_set_Id_m452D155D055E60790F8EAC03C7C8786186E8748D_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_2, NULL);
		__this->____flags_0 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_4, NULL);
		Header_set_QuestionCount_m6944E71103A18DD327E33F00CCA4403084FC51F4_inline(__this, L_5, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_6, NULL);
		Header_set_AnswerCount_mF805DD706C7221A3243603655E9D7153C6C98BC0_inline(__this, L_7, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_8 = ___0_rr;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_8, NULL);
		Header_set_NameserverCount_m8EE0F372A9A1D19E2CA543433B2B4CC99C6F35B9_inline(__this, L_9, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = ___0_rr;
		NullCheck(L_10);
		uint16_t L_11;
		L_11 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_10, NULL);
		Header_set_AdditionalRecordsCount_m09123884C005C9C0FD025E7D6D009D540675B823_inline(__this, L_11, NULL);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Header::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_get_Id_m85C044BC11EF7A3867E5937AC4998BCFDED0B5C3 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Header::set_Id(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_Id_m452D155D055E60790F8EAC03C7C8786186E8748D (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Header::get_QuestionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_get_QuestionCount_mFF9BD817E9E69BB27BB21345A82E2CBDFD8EAAC3 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CQuestionCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Header::set_QuestionCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_QuestionCount_m6944E71103A18DD327E33F00CCA4403084FC51F4 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CQuestionCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Header::get_AnswerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_get_AnswerCount_m3314F95CEB725FDDB3A2749CF9A02B96E0E6852B (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CAnswerCountU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Header::set_AnswerCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_AnswerCount_mF805DD706C7221A3243603655E9D7153C6C98BC0 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CAnswerCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Header::get_NameserverCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_get_NameserverCount_mE194DACB72FD0B30E6680D5C4A463F1B6FD74DE0 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CNameserverCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Header::set_NameserverCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_NameserverCount_m8EE0F372A9A1D19E2CA543433B2B4CC99C6F35B9 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CNameserverCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Header::get_AdditionalRecordsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_get_AdditionalRecordsCount_m0AE102FB1EE9AA7D4CCB7BBA98AFF66A4A1867D4 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CAdditionalRecordsCountU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Header::set_AdditionalRecordsCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_AdditionalRecordsCount_m09123884C005C9C0FD025E7D6D009D540675B823 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CAdditionalRecordsCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean Ubiety.Dns.Core.Header::get_QueryResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_QueryResponse_m89EADDF7A5AAD270AF4D528D4B0694E606B9CEC2 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		uint16_t L_1;
		L_1 = Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B(L_0, ((int32_t)15), 1, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Ubiety.Dns.Core.Header::set_QueryResponse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_QueryResponse_m520E85D8C5484459B016C5A6AEACEB6D9A74591F (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		bool L_1 = ___0_value;
		uint16_t L_2;
		L_2 = Header_SetBits_mE05A272A695F7FB13F6226B6E6EAFDF7C3124DA2(L_0, ((int32_t)15), 1, L_1, NULL);
		__this->____flags_0 = L_2;
		return;
	}
}
// Ubiety.Dns.Core.Common.OperationCode Ubiety.Dns.Core.Header::get_OpCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Header_get_OpCode_mCDCCA1691217567689E2068290E6A72ECDBD5E60 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		uint16_t L_1;
		L_1 = Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B(L_0, ((int32_t)11), 4, NULL);
		return (int32_t)(L_1);
	}
}
// System.Void Ubiety.Dns.Core.Header::set_OpCode(Ubiety.Dns.Core.Common.OperationCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_OpCode_m34F4CBCE32A0924D3D6CEA7E905A50E2C282BC4E (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		int32_t L_1 = ___0_value;
		uint16_t L_2;
		L_2 = Header_SetBits_m8517B88FCE5652D32E7041CD2A004F83FCB9F06F(L_0, ((int32_t)11), 4, (uint16_t)((int32_t)(uint16_t)L_1), NULL);
		__this->____flags_0 = L_2;
		return;
	}
}
// System.Boolean Ubiety.Dns.Core.Header::get_AuthoritativeAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_AuthoritativeAnswer_m956A28B8AA94985780FCF0BCE1DBCAD8BC618666 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		uint16_t L_1;
		L_1 = Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B(L_0, ((int32_t)10), 1, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Ubiety.Dns.Core.Header::set_AuthoritativeAnswer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_AuthoritativeAnswer_m79EED14AD41C234497B8401BF56BFD7DEE3BBBA2 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		bool L_1 = ___0_value;
		uint16_t L_2;
		L_2 = Header_SetBits_mE05A272A695F7FB13F6226B6E6EAFDF7C3124DA2(L_0, ((int32_t)10), 1, L_1, NULL);
		__this->____flags_0 = L_2;
		return;
	}
}
// System.Boolean Ubiety.Dns.Core.Header::get_Truncation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_Truncation_mF0F99359CD77262CC1DEBB6D17554589C35184DD (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		uint16_t L_1;
		L_1 = Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B(L_0, ((int32_t)9), 1, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Ubiety.Dns.Core.Header::set_Truncation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_Truncation_m05F0FB1AE4B2103693728B0756C122D670F9D185 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		bool L_1 = ___0_value;
		uint16_t L_2;
		L_2 = Header_SetBits_mE05A272A695F7FB13F6226B6E6EAFDF7C3124DA2(L_0, ((int32_t)9), 1, L_1, NULL);
		__this->____flags_0 = L_2;
		return;
	}
}
// System.Boolean Ubiety.Dns.Core.Header::get_Recursion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_Recursion_m3948D1700F42CC69D990B219908B9F13E429802C (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		uint16_t L_1;
		L_1 = Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B(L_0, 8, 1, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Ubiety.Dns.Core.Header::set_Recursion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_Recursion_m862953E63D5949F097F32CB4579B2B15B27E67EF (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		bool L_1 = ___0_value;
		uint16_t L_2;
		L_2 = Header_SetBits_mE05A272A695F7FB13F6226B6E6EAFDF7C3124DA2(L_0, 8, 1, L_1, NULL);
		__this->____flags_0 = L_2;
		return;
	}
}
// System.Boolean Ubiety.Dns.Core.Header::get_RecursionAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_RecursionAvailable_m97D387A1C9E5C16CD9A9A4BBBF9E05FC57B8834A (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		uint16_t L_1;
		L_1 = Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B(L_0, 7, 1, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Ubiety.Dns.Core.Header::set_RecursionAvailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_RecursionAvailable_m6B47EE82F3D28CF48BB74E0AA8EBC949A77F32DF (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		bool L_1 = ___0_value;
		uint16_t L_2;
		L_2 = Header_SetBits_mE05A272A695F7FB13F6226B6E6EAFDF7C3124DA2(L_0, 7, 1, L_1, NULL);
		__this->____flags_0 = L_2;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Header::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_get_Z_m40267611F0C50BF121D6338B88E96E5C1348C5F1 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		uint16_t L_1;
		L_1 = Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B(L_0, 4, 3, NULL);
		return L_1;
	}
}
// System.Void Ubiety.Dns.Core.Header::set_Z(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_Z_m070E073146DE504E10A03C35037382A83EC229D9 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		uint16_t L_1 = ___0_value;
		uint16_t L_2;
		L_2 = Header_SetBits_m8517B88FCE5652D32E7041CD2A004F83FCB9F06F(L_0, 4, 3, L_1, NULL);
		__this->____flags_0 = L_2;
		return;
	}
}
// Ubiety.Dns.Core.Common.ResponseCode Ubiety.Dns.Core.Header::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Header_get_ResponseCode_mC4690F97FEB2B2AF2F738440A62F1A51BABA43CE (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		uint16_t L_1;
		L_1 = Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B(L_0, 0, 4, NULL);
		return (int32_t)(L_1);
	}
}
// System.Void Ubiety.Dns.Core.Header::set_ResponseCode(Ubiety.Dns.Core.Common.ResponseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_set_ResponseCode_m68A2FE8F63407F0B43E4D2556B90F1DCDC269827 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____flags_0;
		int32_t L_1 = ___0_value;
		uint16_t L_2;
		L_2 = Header_SetBits_m8517B88FCE5652D32E7041CD2A004F83FCB9F06F(L_0, 0, 4, (uint16_t)((int32_t)(uint16_t)L_1), NULL);
		__this->____flags_0 = L_2;
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Header::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Header_GetData_m4171DEC7402907BF8F426240C89A365A0A82F590 (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = L_0;
		uint16_t L_2;
		L_2 = Header_get_Id_m85C044BC11EF7A3867E5937AC4998BCFDED0B5C3_inline(__this, NULL);
		RuntimeObject* L_3;
		L_3 = Header_WriteShort_mA19FB848F851DE7B6216384DF4ECDB8499AEF548(L_2, NULL);
		NullCheck(L_1);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_1, L_3, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = L_1;
		uint16_t L_5 = __this->____flags_0;
		RuntimeObject* L_6;
		L_6 = Header_WriteShort_mA19FB848F851DE7B6216384DF4ECDB8499AEF548(L_5, NULL);
		NullCheck(L_4);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_4, L_6, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_7 = L_4;
		uint16_t L_8;
		L_8 = Header_get_QuestionCount_mFF9BD817E9E69BB27BB21345A82E2CBDFD8EAAC3_inline(__this, NULL);
		RuntimeObject* L_9;
		L_9 = Header_WriteShort_mA19FB848F851DE7B6216384DF4ECDB8499AEF548(L_8, NULL);
		NullCheck(L_7);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_7, L_9, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_7;
		uint16_t L_11;
		L_11 = Header_get_AnswerCount_m3314F95CEB725FDDB3A2749CF9A02B96E0E6852B_inline(__this, NULL);
		RuntimeObject* L_12;
		L_12 = Header_WriteShort_mA19FB848F851DE7B6216384DF4ECDB8499AEF548(L_11, NULL);
		NullCheck(L_10);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_10, L_12, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_10;
		uint16_t L_14;
		L_14 = Header_get_NameserverCount_mE194DACB72FD0B30E6680D5C4A463F1B6FD74DE0_inline(__this, NULL);
		RuntimeObject* L_15;
		L_15 = Header_WriteShort_mA19FB848F851DE7B6216384DF4ECDB8499AEF548(L_14, NULL);
		NullCheck(L_13);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_13, L_15, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_16 = L_13;
		uint16_t L_17;
		L_17 = Header_get_AdditionalRecordsCount_m0AE102FB1EE9AA7D4CCB7BBA98AFF66A4A1867D4_inline(__this, NULL);
		RuntimeObject* L_18;
		L_18 = Header_WriteShort_mA19FB848F851DE7B6216384DF4ECDB8499AEF548(L_17, NULL);
		NullCheck(L_16);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_16, L_18, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_16, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return (RuntimeObject*)L_19;
	}
}
// System.UInt16 Ubiety.Dns.Core.Header::SetBits(System.UInt16,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_SetBits_mE05A272A695F7FB13F6226B6E6EAFDF7C3124DA2 (uint16_t ___0_oldValue, int32_t ___1_position, int32_t ___2_length, bool ___3_blnValue, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	uint16_t G_B2_2 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	uint16_t G_B1_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	uint16_t G_B3_3 = 0;
	{
		uint16_t L_0 = ___0_oldValue;
		int32_t L_1 = ___1_position;
		int32_t L_2 = ___2_length;
		bool L_3 = ___3_blnValue;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000a:
	{
		uint16_t L_4;
		L_4 = Header_SetBits_m8517B88FCE5652D32E7041CD2A004F83FCB9F06F(G_B3_3, G_B3_2, G_B3_1, (uint16_t)G_B3_0, NULL);
		return L_4;
	}
}
// System.UInt16 Ubiety.Dns.Core.Header::SetBits(System.UInt16,System.Int32,System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_SetBits_m8517B88FCE5652D32E7041CD2A004F83FCB9F06F (uint16_t ___0_oldValue, int32_t ___1_position, int32_t ___2_length, uint16_t ___3_newValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___1_position;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)16))))
		{
			goto IL_000b;
		}
	}

IL_0009:
	{
		uint16_t L_2 = ___0_oldValue;
		return L_2;
	}

IL_000b:
	{
		int32_t L_3 = ___2_length;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, 1))&((int32_t)31))))), 1));
		uint16_t L_4 = ___0_oldValue;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_position;
		___0_oldValue = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_4&((int32_t)(uint16_t)((~((int32_t)(L_5<<((int32_t)(L_6&((int32_t)31)))))))))));
		uint16_t L_7 = ___0_oldValue;
		uint16_t L_8 = ___3_newValue;
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_position;
		___0_oldValue = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_7|((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_8&L_9))<<((int32_t)(L_10&((int32_t)31)))))))));
		uint16_t L_11 = ___0_oldValue;
		return L_11;
	}
}
// System.UInt16 Ubiety.Dns.Core.Header::GetBits(System.UInt16,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Header_GetBits_m9C9FFAC3A979018E6FA7EDE134CDEA94E994991B (uint16_t ___0_oldValue, int32_t ___1_position, int32_t ___2_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___1_position;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)16))))
		{
			goto IL_000b;
		}
	}

IL_0009:
	{
		return (uint16_t)0;
	}

IL_000b:
	{
		int32_t L_2 = ___2_length;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_2, 1))&((int32_t)31))))), 1));
		uint16_t L_3 = ___0_oldValue;
		int32_t L_4 = ___1_position;
		int32_t L_5 = V_0;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_3>>((int32_t)(L_4&((int32_t)31)))))&L_5)));
	}
}
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Header::WriteShort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Header_WriteShort_mA19FB848F851DE7B6216384DF4ECDB8499AEF548 (uint16_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = IPAddress_HostToNetworkOrder_mD194220C5D8CAB869557E050DDAABC660184376F(((int16_t)L_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m0E92A4A8881B288AF838E6F5C7220210A5AADB15(L_1, NULL);
		return (RuntimeObject*)L_2;
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
// System.Void Ubiety.Dns.Core.Question::.ctor(System.String,Ubiety.Dns.Core.Common.QuestionType,Ubiety.Dns.Core.Common.QuestionClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Question__ctor_m1DD0593D06300A0BACBF87AA7A36DE824065B66B (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, String_t* ___0_questionName, int32_t ___1_questionType, int32_t ___2_questionClass, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_questionName;
		Question_set_QuestionName_mA4C5145B96CC5A461A026321DF3992E260E8EC02(__this, L_0, NULL);
		int32_t L_1 = ___1_questionType;
		__this->___U3CQuestionTypeU3Ek__BackingField_1 = L_1;
		int32_t L_2 = ___2_questionClass;
		__this->___U3CQuestionClassU3Ek__BackingField_2 = L_2;
		return;
	}
}
// System.Void Ubiety.Dns.Core.Question::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Question__ctor_m3C399704776BB91528FE81BCD0D70DF0715522F9 (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		Question_set_QuestionName_mA4C5145B96CC5A461A026321DF3992E260E8EC02(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_2, NULL);
		__this->___U3CQuestionTypeU3Ek__BackingField_1 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_4, NULL);
		__this->___U3CQuestionClassU3Ek__BackingField_2 = L_5;
		return;
	}
}
// System.String Ubiety.Dns.Core.Question::get_QuestionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Question_get_QuestionName_m8B15666CD7C55B72C95DB140C8E244412CB3A53E (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____questionName_0;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Question::set_QuestionName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Question_set_QuestionName_mA4C5145B96CC5A461A026321DF3992E260E8EC02 (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		__this->____questionName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____questionName_0), (void*)L_0);
		String_t* L_1 = __this->____questionName_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_1, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, 2, NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_3 = __this->____questionName_0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		__this->____questionName_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____questionName_0), (void*)L_4);
	}

IL_0030:
	{
		return;
	}
}
// Ubiety.Dns.Core.Common.QuestionType Ubiety.Dns.Core.Question::get_QuestionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Question_get_QuestionType_m8535FC6F3AB1FCF43A9D187812A698A39236CFA6 (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CQuestionTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// Ubiety.Dns.Core.Common.QuestionClass Ubiety.Dns.Core.Question::get_QuestionClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Question_get_QuestionClass_m5225419D0016B927E62DA634C1A357795C4696B4 (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CQuestionClassU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Question::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Question_ToString_mAC7415A34ECCD9F34B24C70BDA8B3F36BB4E8B37 (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestionClass_t529DE8CF4BA9C179930AFE97A7661203FF65A3CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestionType_t9597E4EB323EB8890DC3CC4FFB42619474815323_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBCA72E96223C343D18652C42210C67D364418C);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Question_get_QuestionName_m8B15666CD7C55B72C95DB140C8E244412CB3A53E_inline(__this, NULL);
		int32_t L_1;
		L_1 = Question_get_QuestionClass_m5225419D0016B927E62DA634C1A357795C4696B4_inline(__this, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(QuestionClass_t529DE8CF4BA9C179930AFE97A7661203FF65A3CD_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4;
		L_4 = Question_get_QuestionType_m8535FC6F3AB1FCF43A9D187812A698A39236CFA6_inline(__this, NULL);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(QuestionType_t9597E4EB323EB8890DC3CC4FFB42619474815323_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral8DBCA72E96223C343D18652C42210C67D364418C, L_0, L_3, L_6, NULL);
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Question::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Question_GetData_m2A274E00BFA4EBA62D72C7EA4A8FC55419BF9012 (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = L_0;
		String_t* L_2;
		L_2 = Question_get_QuestionName_m8B15666CD7C55B72C95DB140C8E244412CB3A53E_inline(__this, NULL);
		RuntimeObject* L_3;
		L_3 = Question_WriteName_m45E102FA9024B6AAABF7C88E5A36BB3C47CB8500(L_2, NULL);
		NullCheck(L_1);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_1, L_3, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = L_1;
		int32_t L_5;
		L_5 = Question_get_QuestionType_m8535FC6F3AB1FCF43A9D187812A698A39236CFA6_inline(__this, NULL);
		RuntimeObject* L_6;
		L_6 = Question_WriteShort_m81427D82B90523680FA185EE18E7A9918CAA2DBB((uint16_t)((int32_t)(uint16_t)L_5), NULL);
		NullCheck(L_4);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_4, L_6, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_7 = L_4;
		int32_t L_8;
		L_8 = Question_get_QuestionClass_m5225419D0016B927E62DA634C1A357795C4696B4_inline(__this, NULL);
		RuntimeObject* L_9;
		L_9 = Question_WriteShort_m81427D82B90523680FA185EE18E7A9918CAA2DBB((uint16_t)((int32_t)(uint16_t)L_8), NULL);
		NullCheck(L_7);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_7, L_9, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_7, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return (RuntimeObject*)L_10;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Question::WriteName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Question_WriteName_m45E102FA9024B6AAABF7C88E5A36BB3C47CB8500 (String_t* ___0_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___0_src;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, 2, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___0_src;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		___0_src = L_3;
	}

IL_001b:
	{
		String_t* L_4 = ___0_src;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		return (RuntimeObject*)L_6;
	}

IL_002f:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		String_t* L_8 = ___0_src;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_3 = L_9;
		StringBuilder_t* L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, 0, NULL);
		V_1 = 0;
		V_2 = 0;
		goto IL_007e;
	}

IL_004a:
	{
		StringBuilder_t* L_12 = V_0;
		String_t* L_13 = ___0_src;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Il2CppChar L_15;
		L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, L_14, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, L_15, NULL);
		String_t* L_17 = ___0_src;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		Il2CppChar L_19;
		L_19 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_17, L_18, NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0076;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = V_2;
		int32_t L_23 = V_2;
		NullCheck(L_20);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, L_22)), ((int32_t)(uint16_t)((int32_t)(L_23&((int32_t)255)))), NULL);
		V_2 = (-1);
	}

IL_0076:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007e:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004a;
		}
	}
	{
		StringBuilder_t* L_28 = V_0;
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_29, NULL);
		NullCheck(L_28);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_28, ((int32_t)il2cpp_codegen_subtract(L_30, 1)), 0, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_31;
		L_31 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		NullCheck(L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_31, L_33);
		return (RuntimeObject*)L_34;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Byte> Ubiety.Dns.Core.Question::WriteShort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Question_WriteShort_m81427D82B90523680FA185EE18E7A9918CAA2DBB (uint16_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = IPAddress_HostToNetworkOrder_mD194220C5D8CAB869557E050DDAABC660184376F(((int16_t)L_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m0E92A4A8881B288AF838E6F5C7220210A5AADB15(L_1, NULL);
		return (RuntimeObject*)L_2;
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
// System.Void Ubiety.Dns.Core.RecordReader::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordReader__ctor_m91E0E7D72A0AB6A251477DDC99817E0F2B0F0C97 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		__this->____data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_0), (void*)L_0);
		RecordReader_set_Position_m6BE8D3717978BC8F1C0166281D787EB909248B0B_inline(__this, 0, NULL);
		return;
	}
}
// System.Void Ubiety.Dns.Core.RecordReader::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordReader__ctor_mD26CC895238CDC5444C9463B90B22C71D7C7EDB9 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_position, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		__this->____data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_0), (void*)L_0);
		int32_t L_1 = ___1_position;
		RecordReader_set_Position_m6BE8D3717978BC8F1C0166281D787EB909248B0B_inline(__this, L_1, NULL);
		return;
	}
}
// System.Int32 Ubiety.Dns.Core.RecordReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.RecordReader::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordReader_set_Position_m6BE8D3717978BC8F1C0166281D787EB909248B0B (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Byte Ubiety.Dns.Core.RecordReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____data_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3;
		L_3 = RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB_inline(__this, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		RecordReader_set_Position_m6BE8D3717978BC8F1C0166281D787EB909248B0B_inline(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}

IL_0029:
	{
		return (uint8_t)0;
	}
}
// System.Char Ubiety.Dns.Core.RecordReader::ReadChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RecordReader_ReadChar_m03C7AC71286B4653F5DFB3E58D55B64CF7B9F761 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0;
		L_0 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(__this, NULL);
		return L_0;
	}
}
// System.UInt16 Ubiety.Dns.Core.RecordReader::ReadUInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0;
		L_0 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(__this, NULL);
		uint8_t L_1;
		L_1 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(__this, NULL);
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_0<<8))|(int32_t)L_1)));
	}
}
// System.UInt16 Ubiety.Dns.Core.RecordReader::ReadUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordReader_ReadUInt16_m750F87891DBE43C75F451616DF7EF8E022BB7CFF (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB_inline(__this, NULL);
		int32_t L_1 = ___0_offset;
		RecordReader_set_Position_m6BE8D3717978BC8F1C0166281D787EB909248B0B_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		uint16_t L_2;
		L_2 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(__this, NULL);
		return L_2;
	}
}
// System.UInt32 Ubiety.Dns.Core.RecordReader::ReadUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0;
		L_0 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(__this, NULL);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(__this, NULL);
		return ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)16)))|(int32_t)L_1));
	}
}
// System.String Ubiety.Dns.Core.RecordReader::ReadDomainName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* V_2 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		goto IL_0061;
	}

IL_0008:
	{
		int32_t L_1 = V_1;
		if ((!(((uint32_t)((int32_t)(L_1&((int32_t)192)))) == ((uint32_t)((int32_t)192)))))
		{
			goto IL_0054;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = V_1;
		uint8_t L_4;
		L_4 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_5 = (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F*)il2cpp_codegen_object_new(RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RecordReader__ctor_mD26CC895238CDC5444C9463B90B22C71D7C7EDB9(L_5, L_2, ((int32_t)(((int32_t)(((int32_t)(L_3&((int32_t)63)))<<8))|(int32_t)L_4)), NULL);
		V_2 = L_5;
		StringBuilder_t* L_6 = V_0;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_7 = V_2;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_7, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_8, NULL);
		StringBuilder_t* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		return L_11;
	}

IL_0043:
	{
		StringBuilder_t* L_12 = V_0;
		Il2CppChar L_13;
		L_13 = RecordReader_ReadChar_m03C7AC71286B4653F5DFB3E58D55B64CF7B9F761(__this, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, L_13, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0054:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)46), NULL);
	}

IL_0061:
	{
		uint8_t L_19;
		L_19 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(__this, NULL);
		uint8_t L_20 = L_19;
		V_1 = L_20;
		if (L_20)
		{
			goto IL_0008;
		}
	}
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_21, NULL);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		return L_24;
	}

IL_007a:
	{
		return _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
	}
}
// System.String Ubiety.Dns.Core.RecordReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(__this, NULL);
		V_0 = L_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		int16_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(__this, L_2, NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_1, L_3);
		return L_4;
	}
}
// System.Byte[] Ubiety.Dns.Core.RecordReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001a;
	}

IL_000a:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = V_0;
		uint8_t L_2;
		L_2 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(__this, NULL);
		NullCheck(L_1);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_1, L_2, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001a:
	{
		int32_t L_4 = V_1;
		int32_t L_5 = ___0_length;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_6, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return L_7;
	}
}
// Ubiety.Dns.Core.Records.Record Ubiety.Dns.Core.RecordReader::ReadRecord(Ubiety.Dns.Core.Common.RecordType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* RecordReader_ReadRecord_m984D114C9CEBD45EE94228AA1F7220B1229FE4E3 (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_type;
		Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_1;
		L_1 = EnumExtensions_GetRecord_m74733B121A9336D6919B1065817F0E3447058282(L_0, __this, 0, NULL);
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
// System.Void Ubiety.Dns.Core.Request::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_m0018BD6FC1D1E420600071E82068E401C52158B8 (Request_t5EC29E166C112954C06827C8C28901253ABC6350* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_0 = (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A*)il2cpp_codegen_object_new(Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Header__ctor_mEB1A65C75C61C368B738F38EFEE3C00583EDCC00(L_0, NULL);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_1 = L_0;
		NullCheck(L_1);
		Header_set_OpCode_m34F4CBCE32A0924D3D6CEA7E905A50E2C282BC4E(L_1, 0, NULL);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_2 = L_1;
		NullCheck(L_2);
		Header_set_QuestionCount_m6944E71103A18DD327E33F00CCA4403084FC51F4_inline(L_2, (uint16_t)0, NULL);
		__this->___U3CHeaderU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeaderU3Ek__BackingField_1), (void*)L_2);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_3 = (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA*)il2cpp_codegen_object_new(List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A(L_3, List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A_RuntimeMethod_var);
		__this->____questions_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____questions_0), (void*)L_3);
		return;
	}
}
// Ubiety.Dns.Core.Header Ubiety.Dns.Core.Request::get_Header()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* Request_get_Header_mC79D5787DE4EAF7A16AAFEB67FD57E48E41ADF9A (Request_t5EC29E166C112954C06827C8C28901253ABC6350* __this, const RuntimeMethod* method) 
{
	{
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_0 = __this->___U3CHeaderU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Byte[] Ubiety.Dns.Core.Request::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Request_GetData_m83A495F874D76F4BF0E467EDA6C0840535FC1D82 (Request_t5EC29E166C112954C06827C8C28901253ABC6350* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE8879B4AAC5CB5B15F78F06BD9728669050072CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9D5C5BDB97A574C0D7D145AD467C89A78C3CAFF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m42066153D87F61B33CC26FD976AD7BB9487A1956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m21841180F2A32CABBE24798F6D35E07320E07FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* V_2 = NULL;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_1;
		L_1 = Request_get_Header_mC79D5787DE4EAF7A16AAFEB67FD57E48E41ADF9A_inline(__this, NULL);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_2 = __this->____questions_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_inline(L_2, List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_RuntimeMethod_var);
		NullCheck(L_1);
		Header_set_QuestionCount_m6944E71103A18DD327E33F00CCA4403084FC51F4_inline(L_1, (uint16_t)((int32_t)(uint16_t)L_3), NULL);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = V_0;
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_5;
		L_5 = Request_get_Header_mC79D5787DE4EAF7A16AAFEB67FD57E48E41ADF9A_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Header_GetData_m4171DEC7402907BF8F426240C89A365A0A82F590(L_5, NULL);
		NullCheck(L_4);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_4, L_6, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_7 = __this->____questions_0;
		NullCheck(L_7);
		Enumerator_tF807F0204C620AAFA3AA191C52E25B2F9C251F00 L_8;
		L_8 = List_1_GetEnumerator_m21841180F2A32CABBE24798F6D35E07320E07FCB(L_7, List_1_GetEnumerator_m21841180F2A32CABBE24798F6D35E07320E07FCB_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE8879B4AAC5CB5B15F78F06BD9728669050072CA((&V_1), Enumerator_Dispose_mE8879B4AAC5CB5B15F78F06BD9728669050072CA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_003c_1:
			{
				Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_9;
				L_9 = Enumerator_get_Current_m42066153D87F61B33CC26FD976AD7BB9487A1956_inline((&V_1), Enumerator_get_Current_m42066153D87F61B33CC26FD976AD7BB9487A1956_RuntimeMethod_var);
				V_2 = L_9;
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = V_0;
				Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_11 = V_2;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = Question_GetData_m2A274E00BFA4EBA62D72C7EA4A8FC55419BF9012(L_11, NULL);
				NullCheck(L_10);
				List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_10, L_12, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
			}

IL_0050_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_m9D5C5BDB97A574C0D7D145AD467C89A78C3CAFF4((&V_1), Enumerator_MoveNext_m9D5C5BDB97A574C0D7D145AD467C89A78C3CAFF4_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_003c_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_14, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return L_15;
	}
}
// System.Void Ubiety.Dns.Core.Request::AddQuestion(Ubiety.Dns.Core.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_AddQuestion_m6EDA63F4025973D063677EE0E8D1129234DC1003 (Request_t5EC29E166C112954C06827C8C28901253ABC6350* __this, Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* ___0_question, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m84ACE04AE0AE93F341F993856C2855CBAFE0FE35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_0 = __this->____questions_0;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_1 = ___0_question;
		NullCheck(L_0);
		List_1_Add_m84ACE04AE0AE93F341F993856C2855CBAFE0FE35_inline(L_0, L_1, List_1_Add_m84ACE04AE0AE93F341F993856C2855CBAFE0FE35_RuntimeMethod_var);
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
// System.Void Ubiety.Dns.Core.Resolver::.ctor(System.Collections.Generic.IEnumerable`1<System.Net.IPEndPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__ctor_m275B531C657DF929845573196C0E4BD6E275DB23 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, RuntimeObject* ___0_dnsServers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5AB2031978429091793FB433B8096086C675EE33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m42B5FD9C167F843691D700E4541706A003BD7887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t795244976F29D111A17237A89D0064EF85FBC5AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_0 = (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170*)il2cpp_codegen_object_new(RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_1;
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_2 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_2, L_3);
		Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_4 = (Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469*)il2cpp_codegen_object_new(Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m5AB2031978429091793FB433B8096086C675EE33(L_4, Dictionary_2__ctor_m5AB2031978429091793FB433B8096086C675EE33_RuntimeMethod_var);
		__this->____responseCache_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____responseCache_0), (void*)L_4);
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_5 = (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*)il2cpp_codegen_object_new(List_1_t795244976F29D111A17237A89D0064EF85FBC5AC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234(L_5, List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234_RuntimeMethod_var);
		__this->___U3CDnsServersU3Ek__BackingField_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDnsServersU3Ek__BackingField_9), (void*)L_5);
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_6;
		L_6 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(__this, NULL);
		RuntimeObject* L_7 = ___0_dnsServers;
		NullCheck(L_6);
		List_1_AddRange_m42B5FD9C167F843691D700E4541706A003BD7887(L_6, L_7, List_1_AddRange_m42B5FD9C167F843691D700E4541706A003BD7887_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_9;
		L_9 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_8, 0, NULL);
		__this->____unique_3 = L_9;
		__this->____retries_1 = 3;
		__this->____timeout_2 = 1;
		Resolver_set_Recursion_m913F0246EAE34B07F24B03699E5A668DDA3F14A7_inline(__this, (bool)1, NULL);
		__this->____useCache_4 = (bool)1;
		Resolver_set_TransportType_mC2ADDF22B194FE839D431E21006CDF518B1C5480_inline(__this, 0, NULL);
		NullCheck(L_2);
		RandomNumberGenerator_Dispose_m3C4215E0EACE0A9A91FDE146BDEE954F8E9AE615(L_2, NULL);
		return;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__ctor_m75F063E1193C995BFD6ABAA863AF0D7108DC633A (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_dnsServer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* L_0 = (IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A*)(IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A*)SZArrayNew(IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A_il2cpp_TypeInfo_var, (uint32_t)1);
		IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* L_1 = L_0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_2 = ___0_dnsServer;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)L_2);
		Resolver__ctor_m275B531C657DF929845573196C0E4BD6E275DB23(__this, (RuntimeObject*)L_1, NULL);
		return;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__ctor_mF9EF60B41790413FC78C644150F4D2DC2A7FF0C4 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_serverIpAddress, int32_t ___1_serverPortNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___0_serverIpAddress;
		int32_t L_1 = ___1_serverPortNumber;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_2 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_2, L_0, L_1, NULL);
		Resolver__ctor_m75F063E1193C995BFD6ABAA863AF0D7108DC633A(__this, L_2, NULL);
		return;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__ctor_m71638FEBA06E12511ACEA492350C56438D8A896F (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, String_t* ___0_serverIpAddress, int32_t ___1_serverPortNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_serverIpAddress;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1;
		L_1 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(L_0, NULL);
		int32_t L_2 = ___1_serverPortNumber;
		Resolver__ctor_mF9EF60B41790413FC78C644150F4D2DC2A7FF0C4(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__ctor_mC96CFDDAAEA6E724EDFEA0C6ED04E91203A25B2A (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, String_t* ___0_serverIpAddress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_serverIpAddress;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1;
		L_1 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Resolver_get_DefaultPort_mFD7867C84912372CE7128B20F9A035F9042C055F_inline(NULL);
		Resolver__ctor_mF9EF60B41790413FC78C644150F4D2DC2A7FF0C4(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__ctor_mC19D2277D67B577F2C197C3E47F2292FF1E3D5CF (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Resolver_GetSystemDnsServers_m91AD802258CA2AA755630E78FD9A59B35B429B82(NULL);
		Resolver__ctor_m275B531C657DF929845573196C0E4BD6E275DB23(__this, L_0, NULL);
		return;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::add_OnVerbose(Ubiety.Dns.Core.Resolver/VerboseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_add_OnVerbose_mA78958E87BBBB0B7118E7F9BA0A234075AA5CF53 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* V_0 = NULL;
	VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* V_1 = NULL;
	VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* V_2 = NULL;
	{
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_0 = __this->___OnVerbose_5;
		V_0 = L_0;
	}

IL_0007:
	{
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_1 = V_0;
		V_1 = L_1;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_2 = V_1;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D*)CastclassSealed((RuntimeObject*)L_4, VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D_il2cpp_TypeInfo_var));
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D** L_5 = (&__this->___OnVerbose_5);
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_6 = V_2;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_7 = V_1;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_8;
		L_8 = InterlockedCompareExchangeImpl<VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D*>(L_5, L_6, L_7);
		V_0 = L_8;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_9 = V_0;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_10 = V_1;
		if ((!(((RuntimeObject*)(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D*)L_9) == ((RuntimeObject*)(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::remove_OnVerbose(Ubiety.Dns.Core.Resolver/VerboseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_remove_OnVerbose_mBF68D62A1FE8A4153D420EF7247899A97D6E58E9 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* V_0 = NULL;
	VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* V_1 = NULL;
	VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* V_2 = NULL;
	{
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_0 = __this->___OnVerbose_5;
		V_0 = L_0;
	}

IL_0007:
	{
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_1 = V_0;
		V_1 = L_1;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_2 = V_1;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D*)CastclassSealed((RuntimeObject*)L_4, VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D_il2cpp_TypeInfo_var));
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D** L_5 = (&__this->___OnVerbose_5);
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_6 = V_2;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_7 = V_1;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_8;
		L_8 = InterlockedCompareExchangeImpl<VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D*>(L_5, L_6, L_7);
		V_0 = L_8;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_9 = V_0;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_10 = V_1;
		if ((!(((RuntimeObject*)(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D*)L_9) == ((RuntimeObject*)(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String Ubiety.Dns.Core.Resolver::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resolver_get_Version_m9AAE0899D51C22D6AAA3950379AD77E8B613FAD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisAssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D_m43844524853C160318F34142991F5AA0BDAF26FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_get_Version_m9AAE0899D51C22D6AAA3950379AD77E8B613FAD7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Assembly_t* L_0;
		L_0 = il2cpp_codegen_get_executing_assembly(Resolver_get_Version_m9AAE0899D51C22D6AAA3950379AD77E8B613FAD7_RuntimeMethod_var);
		AssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D* L_1;
		L_1 = CustomAttributeExtensions_GetCustomAttribute_TisAssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D_m43844524853C160318F34142991F5AA0BDAF26FA(L_0, CustomAttributeExtensions_GetCustomAttribute_TisAssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D_m43844524853C160318F34142991F5AA0BDAF26FA_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = AssemblyInformationalVersionAttribute_get_InformationalVersion_m9C9650DC927EEA3A1ADC29572FC86942D6456A54_inline(L_1, NULL);
		return L_2;
	}
}
// System.Collections.Generic.List`1<System.Net.IPEndPoint> Ubiety.Dns.Core.Resolver::get_DefaultDnsServers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* Resolver_get_DefaultDnsServers_m4B25431DE6DB1A862BCA7802759ECDA77607BC66 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t795244976F29D111A17237A89D0064EF85FBC5AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37D0038455B66C67F0C4F16DF38E2876626B6E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69E253E12D426DA8CE35CF237765BC7DEB3B7274);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_0 = (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*)il2cpp_codegen_object_new(List_1_t795244976F29D111A17237A89D0064EF85FBC5AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234(L_0, List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234_RuntimeMethod_var);
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2;
		L_2 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(_stringLiteral37D0038455B66C67F0C4F16DF38E2876626B6E30, NULL);
		il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Resolver_get_DefaultPort_mFD7867C84912372CE7128B20F9A035F9042C055F_inline(NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_4 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_4, L_2, L_3, NULL);
		NullCheck(L_1);
		List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_inline(L_1, L_4, List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_RuntimeMethod_var);
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_5 = L_1;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_6;
		L_6 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(_stringLiteral69E253E12D426DA8CE35CF237765BC7DEB3B7274, NULL);
		int32_t L_7;
		L_7 = Resolver_get_DefaultPort_mFD7867C84912372CE7128B20F9A035F9042C055F_inline(NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_8 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_8, L_6, L_7, NULL);
		NullCheck(L_5);
		List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_inline(L_5, L_8, List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_RuntimeMethod_var);
		return L_5;
	}
}
// System.Int32 Ubiety.Dns.Core.Resolver::get_DefaultPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolver_get_DefaultPort_mFD7867C84912372CE7128B20F9A035F9042C055F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_StaticFields*)il2cpp_codegen_static_fields_for(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var))->___U3CDefaultPortU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::set_DefaultPort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_set_DefaultPort_m85AC9C0D5286CE202901506FC5E6C00FD2749EAD (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		((Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_StaticFields*)il2cpp_codegen_static_fields_for(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var))->___U3CDefaultPortU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 Ubiety.Dns.Core.Resolver::get_Timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolver_get_Timeout_mF50B8ED5892098FF659163B93EA195ED2278F117 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____timeout_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::set_Timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_set_Timeout_m7804BFCC9E3FB2BDFF7D7D3A7E14BD8EF3824932 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____timeout_2 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)1000)));
		return;
	}
}
// System.Int32 Ubiety.Dns.Core.Resolver::get_Retries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolver_get_Retries_m4FA28281EE21289A725318CC713B58CB1214DF7F (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____retries_1;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::set_Retries(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_set_Retries_m644DFCEC02E2A2C107609A0E5F64E40C4A3539A1 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_value;
		__this->____retries_1 = L_1;
	}

IL_000b:
	{
		return;
	}
}
// System.Boolean Ubiety.Dns.Core.Resolver::get_Recursion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Resolver_get_Recursion_m363EBE369298E0499E9131A4394D4EF6542C0116 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CRecursionU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::set_Recursion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_set_Recursion_m913F0246EAE34B07F24B03699E5A668DDA3F14A7 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CRecursionU3Ek__BackingField_7 = L_0;
		return;
	}
}
// Ubiety.Dns.Core.Common.TransportType Ubiety.Dns.Core.Resolver::get_TransportType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolver_get_TransportType_m65C7BDF67D51BFA67D6B20D1FE8A80B26A717048 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTransportTypeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::set_TransportType(Ubiety.Dns.Core.Common.TransportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_set_TransportType_mC2ADDF22B194FE839D431E21006CDF518B1C5480 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTransportTypeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Net.IPEndPoint> Ubiety.Dns.Core.Resolver::get_DnsServers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_0 = __this->___U3CDnsServersU3Ek__BackingField_9;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Resolver::get_DnsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resolver_get_DnsServer_m9532561B7BFA0FBA64E08E210A44A608FA7AE9DF (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_0;
		L_0 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(__this, NULL);
		NullCheck(L_0);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1;
		L_1 = List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B(L_0, 0, List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B_RuntimeMethod_var);
		NullCheck(L_1);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2;
		L_2 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::set_DnsServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_set_DnsServer_mBAEF65F40C8DA12B3556E9D4D9048C1479601FDA (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1453BDC86F66E17E35A1DFFFC4B3829038AAF486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C50D1C86324E493E10CED11C25FEC1653D8F9A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A999C72941C1C60485F0C1AEF6B0CDDB76D8D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_1 = NULL;
	{
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = IPAddress_TryParse_m082F2D09B53BD7A957418E2E7BE4C37AD8EE1AF0(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_2;
		L_2 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(__this, NULL);
		NullCheck(L_2);
		List_1_Clear_m1453BDC86F66E17E35A1DFFFC4B3829038AAF486_inline(L_2, List_1_Clear_m1453BDC86F66E17E35A1DFFFC4B3829038AAF486_RuntimeMethod_var);
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_3;
		L_3 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(__this, NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Resolver_get_DefaultPort_mFD7867C84912372CE7128B20F9A035F9042C055F_inline(NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_6, L_4, L_5, NULL);
		NullCheck(L_3);
		List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_inline(L_3, L_6, List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		String_t* L_7 = ___0_value;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_8;
		L_8 = Resolver_Query_mFA189DAF650DB5F1C0A1486512BC674265BAB3FE(__this, L_7, 1, NULL);
		V_1 = L_8;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_9 = V_1;
		NullCheck(L_9);
		List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* L_10;
		L_10 = Response_get_RecordA_mEDCCD9E5FE6EA820AA5C36017667D631B08E9126(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4C50D1C86324E493E10CED11C25FEC1653D8F9A6_inline(L_10, List_1_get_Count_m4C50D1C86324E493E10CED11C25FEC1653D8F9A6_RuntimeMethod_var);
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		return;
	}

IL_0044:
	{
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_12;
		L_12 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(__this, NULL);
		NullCheck(L_12);
		List_1_Clear_m1453BDC86F66E17E35A1DFFFC4B3829038AAF486_inline(L_12, List_1_Clear_m1453BDC86F66E17E35A1DFFFC4B3829038AAF486_RuntimeMethod_var);
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_13;
		L_13 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(__this, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_14 = V_1;
		NullCheck(L_14);
		List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* L_15;
		L_15 = Response_get_RecordA_mEDCCD9E5FE6EA820AA5C36017667D631B08E9126(L_14, NULL);
		NullCheck(L_15);
		RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* L_16;
		L_16 = List_1_get_Item_m8A999C72941C1C60485F0C1AEF6B0CDDB76D8D66(L_15, 0, List_1_get_Item_m8A999C72941C1C60485F0C1AEF6B0CDDB76D8D66_RuntimeMethod_var);
		NullCheck(L_16);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_17;
		L_17 = RecordA_get_Address_mC01FDC4FDBBFDC9F2A8FD5BDD964A80277F6A98F_inline(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Resolver_get_DefaultPort_mFD7867C84912372CE7128B20F9A035F9042C055F_inline(NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_19 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_19, L_17, L_18, NULL);
		NullCheck(L_13);
		List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_inline(L_13, L_19, List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Ubiety.Dns.Core.Resolver::get_UseCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Resolver_get_UseCache_m9387E8915675BBCE40B4EC2E38BFBF3CAC9710B4 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____useCache_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::set_UseCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_set_UseCache_m8A332D8EECBA35745C11E2987265CC146DB855FF (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m85CA995230E8299A4A20AD2914300A5943D9347C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* V_0 = NULL;
	bool V_1 = false;
	{
		bool L_0 = ___0_value;
		__this->____useCache_4 = L_0;
		bool L_1 = __this->____useCache_4;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_2 = __this->____responseCache_0;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0037;
					}
				}
				{
					Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0037:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_5 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
			Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_6 = __this->____responseCache_0;
			NullCheck(L_6);
			Dictionary_2_Clear_m85CA995230E8299A4A20AD2914300A5943D9347C(L_6, Dictionary_2_Clear_m85CA995230E8299A4A20AD2914300A5943D9347C_RuntimeMethod_var);
			goto IL_0038;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Net.IPEndPoint> Ubiety.Dns.Core.Resolver::GetSystemDnsServers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resolver_GetSystemDnsServers_m91AD802258CA2AA755630E78FD9A59B35B429B82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t16E7D3FE11465476DD7529A8DDDD6519A2E26D6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mD6F2D194A035D5B660C9002AE1BCDC0052B9262F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m6F8B0D1771FCD386F8D858B4001F2A1850672F77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t795244976F29D111A17237A89D0064EF85FBC5AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* V_0 = NULL;
	NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* V_1 = NULL;
	int32_t V_2 = 0;
	NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_5 = NULL;
	{
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_0 = (List_1_t795244976F29D111A17237A89D0064EF85FBC5AC*)il2cpp_codegen_object_new(List_1_t795244976F29D111A17237A89D0064EF85FBC5AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234(L_0, List_1__ctor_mA55AC5A99EF0520A01380E2C5C72BDC2A193A234_RuntimeMethod_var);
		V_0 = L_0;
		NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_1;
		L_1 = NetworkInterface_GetAllNetworkInterfaces_m4E5A4AAEED8B11868BDC8F78975460D9B6F3CD70(NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0071;
	}

IL_0010:
	{
		NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_006d;
		}
	}
	{
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_8 = V_3;
		NullCheck(L_8);
		IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_9;
		L_9 = VirtualFuncInvoker0< IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* >::Invoke(5 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_8);
		NullCheck(L_9);
		IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4* L_10;
		L_10 = VirtualFuncInvoker0< IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4* >::Invoke(4 /* System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.IPInterfaceProperties::get_DnsAddresses() */, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::GetEnumerator() */, L_10);
		V_4 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_4;
					if (!L_12)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_13 = V_4;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_006c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0056_1;
			}

IL_0031_1:
			{
				RuntimeObject* L_14 = V_4;
				NullCheck(L_14);
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_15;
				L_15 = InterfaceFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Net.IPAddress>::get_Current() */, IEnumerator_1_t16E7D3FE11465476DD7529A8DDDD6519A2E26D6B_il2cpp_TypeInfo_var, L_14);
				il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
				int32_t L_16;
				L_16 = Resolver_get_DefaultPort_mFD7867C84912372CE7128B20F9A035F9042C055F_inline(NULL);
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_17 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_17, L_15, L_16, NULL);
				V_5 = L_17;
				List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_18 = V_0;
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_19 = V_5;
				NullCheck(L_18);
				bool L_20;
				L_20 = List_1_Contains_mD6F2D194A035D5B660C9002AE1BCDC0052B9262F(L_18, L_19, List_1_Contains_mD6F2D194A035D5B660C9002AE1BCDC0052B9262F_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0056_1;
				}
			}
			{
				List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_21 = V_0;
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_22 = V_5;
				NullCheck(L_21);
				List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_inline(L_21, L_22, List_1_Add_mA6C0711E59C20207C278C3AEC030D991367964E3_RuntimeMethod_var);
			}

IL_0056_1:
			{
				RuntimeObject* L_23 = V_4;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0071:
	{
		int32_t L_26 = V_2;
		NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_27 = V_1;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_28 = V_0;
		NullCheck(L_28);
		IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* L_29;
		L_29 = List_1_ToArray_m6F8B0D1771FCD386F8D858B4001F2A1850672F77(L_28, List_1_ToArray_m6F8B0D1771FCD386F8D858B4001F2A1850672F77_RuntimeMethod_var);
		return (RuntimeObject*)L_29;
	}
}
// System.String Ubiety.Dns.Core.Resolver::GetArpaFromIp(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resolver_GetArpaFromIp_mFCDBF2D86BE822C75F70717420BECCF0F55C19D8 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_ip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32D6961CD49930454F129E9E75BED6AE52481089);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BC751DE0359398BABCB7D747C15F793E0F5F309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89CA9FDE4FDC56214E8B69525615E8E8EF21ED8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7BC9047B28FA1293ACF96C7457B3E060A650EE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	StringBuilder_t* V_5 = NULL;
	uint8_t V_6 = 0x0;
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___0_ip;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)23))))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		V_1 = L_4;
		StringBuilder_t* L_5 = V_1;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral32D6961CD49930454F129E9E75BED6AE52481089, NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_7 = ___0_ip;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_7, NULL);
		V_2 = L_8;
		V_3 = 0;
		goto IL_0054;
	}

IL_0032:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		StringBuilder_t* L_13 = V_1;
		uint8_t L_14 = V_4;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral89CA9FDE4FDC56214E8B69525615E8E8EF21ED8A, L_16, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_13, 0, L_17, NULL);
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0054:
	{
		int32_t L_20 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		StringBuilder_t* L_22 = V_1;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		return L_23;
	}

IL_0061:
	{
		StringBuilder_t* L_24 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_24, NULL);
		V_5 = L_24;
		StringBuilder_t* L_25 = V_5;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteral6BC751DE0359398BABCB7D747C15F793E0F5F309, NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_27 = ___0_ip;
		NullCheck(L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_27, NULL);
		V_2 = L_28;
		V_3 = 0;
		goto IL_00c5;
	}

IL_0080:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_6 = L_32;
		StringBuilder_t* L_33 = V_5;
		uint8_t L_34 = V_6;
		int32_t L_35 = ((int32_t)(((int32_t)((int32_t)L_34>>4))&((int32_t)15)));
		RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralAE7BC9047B28FA1293ACF96C7457B3E060A650EE, L_36, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_33, 0, L_37, NULL);
		StringBuilder_t* L_39 = V_5;
		uint8_t L_40 = V_6;
		int32_t L_41 = ((int32_t)((int32_t)L_40&((int32_t)15)));
		RuntimeObject* L_42 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_41);
		String_t* L_43;
		L_43 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralAE7BC9047B28FA1293ACF96C7457B3E060A650EE, L_42, NULL);
		NullCheck(L_39);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_39, 0, L_43, NULL);
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c5:
	{
		int32_t L_46 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_2;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_0080;
		}
	}
	{
		StringBuilder_t* L_48 = V_5;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}

IL_00d3:
	{
		return _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
	}
}
// System.String Ubiety.Dns.Core.Resolver::GetArpaFromEnum(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resolver_GetArpaFromEnum_mBA7D8488B5DF421A6A3E025B2B553CC86CE136CF (String_t* ___0_enumerator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral655F646A9A53405932121262027BE1E263201440);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89CA9FDE4FDC56214E8B69525615E8E8EF21ED8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42842BEEBEBB536D3A757C446AD3DCFB87FEE8F);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		String_t* L_1 = ___0_enumerator;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(L_1, _stringLiteral655F646A9A53405932121262027BE1E263201440, L_2, NULL);
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralD42842BEEBEBB536D3A757C446AD3DCFB87FEE8F, NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_004b;
	}

IL_0027:
	{
		String_t* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		V_3 = L_8;
		StringBuilder_t* L_9 = V_0;
		Il2CppChar L_10 = V_3;
		Il2CppChar L_11 = L_10;
		RuntimeObject* L_12 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral89CA9FDE4FDC56214E8B69525615E8E8EF21ED8A, L_12, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_9, 0, L_13, NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004b:
	{
		int32_t L_16 = V_2;
		String_t* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0027;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_ClearCache_mCFDFB18D6C30EA6F218B8057B9B18551E129A21A (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m85CA995230E8299A4A20AD2914300A5943D9347C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* V_0 = NULL;
	bool V_1 = false;
	{
		Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_0 = __this->____responseCache_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0027;
					}
				}
				{
					Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0027:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_4 = __this->____responseCache_0;
			NullCheck(L_4);
			Dictionary_2_Clear_m85CA995230E8299A4A20AD2914300A5943D9347C(L_4, Dictionary_2_Clear_m85CA995230E8299A4A20AD2914300A5943D9347C_RuntimeMethod_var);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::Query(System.String,Ubiety.Dns.Core.Common.QuestionType,Ubiety.Dns.Core.Common.QuestionClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_Query_m5337B7699595602DC54E5433A355EBA98682ED2D (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, String_t* ___0_name, int32_t ___1_qtype, int32_t ___2_qclass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t5EC29E166C112954C06827C8C28901253ABC6350_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* V_0 = NULL;
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_1 = NULL;
	Request_t5EC29E166C112954C06827C8C28901253ABC6350* V_2 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_qtype;
		int32_t L_2 = ___2_qclass;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_3 = (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2*)il2cpp_codegen_object_new(Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Question__ctor_m1DD0593D06300A0BACBF87AA7A36DE824065B66B(L_3, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_4 = V_0;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_5;
		L_5 = Resolver_SearchInCache_mD5DDF83D2A81D1E7FF08BAD03515A9C4B562BA54(__this, L_4, NULL);
		V_1 = L_5;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0016;
		}
	}
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_7 = V_1;
		return L_7;
	}

IL_0016:
	{
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_8 = (Request_t5EC29E166C112954C06827C8C28901253ABC6350*)il2cpp_codegen_object_new(Request_t5EC29E166C112954C06827C8C28901253ABC6350_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Request__ctor_m0018BD6FC1D1E420600071E82068E401C52158B8(L_8, NULL);
		V_2 = L_8;
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_9 = V_2;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_10 = V_0;
		NullCheck(L_9);
		Request_AddQuestion_m6EDA63F4025973D063677EE0E8D1129234DC1003(L_9, L_10, NULL);
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_11 = V_2;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_12;
		L_12 = Resolver_GetResponse_m53BAB9D279D99726417B2AFD4411210DAED67D60(__this, L_11, NULL);
		return L_12;
	}
}
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::Query(System.String,Ubiety.Dns.Core.Common.QuestionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_Query_mFA189DAF650DB5F1C0A1486512BC674265BAB3FE (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, String_t* ___0_name, int32_t ___1_qtype, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t5EC29E166C112954C06827C8C28901253ABC6350_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* V_0 = NULL;
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_1 = NULL;
	Request_t5EC29E166C112954C06827C8C28901253ABC6350* V_2 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_qtype;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_2 = (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2*)il2cpp_codegen_object_new(Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Question__ctor_m1DD0593D06300A0BACBF87AA7A36DE824065B66B(L_2, L_0, L_1, 1, NULL);
		V_0 = L_2;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_3 = V_0;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_4;
		L_4 = Resolver_SearchInCache_mD5DDF83D2A81D1E7FF08BAD03515A9C4B562BA54(__this, L_3, NULL);
		V_1 = L_4;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_6 = V_1;
		return L_6;
	}

IL_0016:
	{
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_7 = (Request_t5EC29E166C112954C06827C8C28901253ABC6350*)il2cpp_codegen_object_new(Request_t5EC29E166C112954C06827C8C28901253ABC6350_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Request__ctor_m0018BD6FC1D1E420600071E82068E401C52158B8(L_7, NULL);
		V_2 = L_7;
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_8 = V_2;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_9 = V_0;
		NullCheck(L_8);
		Request_AddQuestion_m6EDA63F4025973D063677EE0E8D1129234DC1003(L_8, L_9, NULL);
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_10 = V_2;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_11;
		L_11 = Resolver_GetResponse_m53BAB9D279D99726417B2AFD4411210DAED67D60(__this, L_10, NULL);
		return L_11;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::WriteRequest(System.IO.Stream,Ubiety.Dns.Core.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_WriteRequest_m77BD453EA82F35B352025BF69A3675F76483938A (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, Request_t5EC29E166C112954C06827C8C28901253ABC6350* ___1_request, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_0 = ___1_request;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Request_GetData_m83A495F874D76F4BF0E467EDA6C0840535FC1D82(L_0, NULL);
		V_0 = L_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		NullCheck(L_2);
		VirtualActionInvoker1< uint8_t >::Invoke(39 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))>>8))&((int32_t)255)))));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_4);
		VirtualActionInvoker1< uint8_t >::Invoke(39 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_4, (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_5)->max_length))&((int32_t)255)))));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		NullCheck(L_6);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = ___0_stream;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_9);
		return;
	}
}
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::GetResponse(Ubiety.Dns.Core.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_GetResponse_m53BAB9D279D99726417B2AFD4411210DAED67D60 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Request_t5EC29E166C112954C06827C8C28901253ABC6350* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m09796D55BB5F0B5716BC33AC7B471218160F7C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D814748926232D9F1D5C122801B345926DFDCBC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_0 = ___0_request;
		NullCheck(L_0);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_1;
		L_1 = Request_get_Header_mC79D5787DE4EAF7A16AAFEB67FD57E48E41ADF9A_inline(L_0, NULL);
		uint16_t L_2 = __this->____unique_3;
		NullCheck(L_1);
		Header_set_Id_m452D155D055E60790F8EAC03C7C8786186E8748D_inline(L_1, L_2, NULL);
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_3 = ___0_request;
		NullCheck(L_3);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_4;
		L_4 = Request_get_Header_mC79D5787DE4EAF7A16AAFEB67FD57E48E41ADF9A_inline(L_3, NULL);
		bool L_5;
		L_5 = Resolver_get_Recursion_m363EBE369298E0499E9131A4394D4EF6542C0116_inline(__this, NULL);
		NullCheck(L_4);
		Header_set_Recursion_m862953E63D5949F097F32CB4579B2B15B27E67EF(L_4, L_5, NULL);
		int32_t L_6;
		L_6 = Resolver_get_TransportType_m65C7BDF67D51BFA67D6B20D1FE8A80B26A717048_inline(__this, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0047;
	}

IL_0032:
	{
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_9 = ___0_request;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_10;
		L_10 = Resolver_UdpRequest_mCB8BD05301AABE47EE2AD4F8DF97A07CF96312E4(__this, L_9, NULL);
		return L_10;
	}

IL_003a:
	{
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_11 = ___0_request;
		Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2* L_12;
		L_12 = Resolver_TcpRequest_mC44DA65E84573CC051315868CF6AADE28782D9A8(__this, L_11, NULL);
		NullCheck(L_12);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_13;
		L_13 = Task_1_get_Result_m09796D55BB5F0B5716BC33AC7B471218160F7C76(L_12, Task_1_get_Result_m09796D55BB5F0B5716BC33AC7B471218160F7C76_RuntimeMethod_var);
		return L_13;
	}

IL_0047:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_14 = (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*)il2cpp_codegen_object_new(Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Response__ctor_m19629725F28D63C0974A64CDEB46A4FAF85DAAE5(L_14, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_15 = L_14;
		NullCheck(L_15);
		Response_set_Error_m9D123C0A7BD42AC2CB338419742F7CB521B6EF3C_inline(L_15, _stringLiteral2D814748926232D9F1D5C122801B345926DFDCBC, NULL);
		return L_15;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::Verbose(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_Verbose_m864091AEFBE78BE0CAFF05D5801BF631E8020D2C (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* G_B2_0 = NULL;
	VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* G_B1_0 = NULL;
	{
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_0 = __this->___OnVerbose_5;
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		String_t* L_5;
		L_5 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_2, L_3, L_4, NULL);
		VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* L_6 = (VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1*)il2cpp_codegen_object_new(VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		VerboseEventArgs__ctor_m437D7297CD4A72638701D8061419049BD51EAFC5(L_6, L_5, NULL);
		NullCheck(G_B2_0);
		VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_inline(G_B2_0, __this, L_6, NULL);
		return;
	}
}
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::SearchInCache(Ubiety.Dns.Core.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_SearchInCache_mD5DDF83D2A81D1E7FF08BAD03515A9C4B562BA54 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* ___0_question, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC3E21DA09723C7D00001F353493A427E79DECD82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9ED00FB67F8A63328605AB1D0F1E076136D339BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t26242978C6B1BCC15CC38E8E5F367D1A19E9471E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1119B9843C1ABF64812D574F66FACBEA1B653E7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestionClass_t529DE8CF4BA9C179930AFE97A7661203FF65A3CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestionType_t9597E4EB323EB8890DC3CC4FFB42619474815323_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* V_5 = NULL;
	bool V_6 = false;
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_7 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	{
		bool L_0 = __this->____useCache_4;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*)NULL;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_3 = ___0_question;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Question_get_QuestionClass_m5225419D0016B927E62DA634C1A357795C4696B4_inline(L_3, NULL);
		V_3 = L_4;
		Il2CppFakeBox<int32_t> L_5(QuestionClass_t529DE8CF4BA9C179930AFE97A7661203FF65A3CD_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_9 = ___0_question;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Question_get_QuestionType_m8535FC6F3AB1FCF43A9D187812A698A39236CFA6_inline(L_9, NULL);
		V_4 = L_10;
		Il2CppFakeBox<int32_t> L_11(QuestionType_t9597E4EB323EB8890DC3CC4FFB42619474815323_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_8;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_15 = ___0_question;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Question_get_QuestionName_m8B15666CD7C55B72C95DB140C8E244412CB3A53E_inline(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_14, NULL);
		V_0 = L_17;
		Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_18 = __this->____responseCache_0;
		V_5 = L_18;
		V_6 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				{
					bool L_19 = V_6;
					if (!L_19)
					{
						goto IL_00a2;
					}
				}
				{
					Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_20 = V_5;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_20, NULL);
				}

IL_00a2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_21 = V_5;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_21, (&V_6), NULL);
				Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_22 = __this->____responseCache_0;
				String_t* L_23 = V_0;
				NullCheck(L_22);
				bool L_24;
				L_24 = Dictionary_2_ContainsKey_mC3E21DA09723C7D00001F353493A427E79DECD82(L_22, L_23, Dictionary_2_ContainsKey_mC3E21DA09723C7D00001F353493A427E79DECD82_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0088_1;
				}
			}
			{
				V_7 = (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*)NULL;
				goto IL_010c;
			}

IL_0088_1:
			{
				Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_25 = __this->____responseCache_0;
				String_t* L_26 = V_0;
				NullCheck(L_25);
				Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_27;
				L_27 = Dictionary_2_get_Item_m9ED00FB67F8A63328605AB1D0F1E076136D339BD(L_25, L_26, Dictionary_2_get_Item_m9ED00FB67F8A63328605AB1D0F1E076136D339BD_RuntimeMethod_var);
				V_1 = L_27;
				goto IL_00a3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28;
		L_28 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_8 = L_28;
		int64_t L_29;
		L_29 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_8), NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_30 = V_1;
		NullCheck(L_30);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_31;
		L_31 = Response_get_TimeStamp_m218553F6622D9007F20DD10FC434ADD59658BF13_inline(L_30, NULL);
		V_8 = L_31;
		int64_t L_32;
		L_32 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_8), NULL);
		V_2 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_29, L_32))/((int64_t)((int32_t)10000000)))));
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_33 = V_1;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = Response_get_ResourceRecords_m3C98EAC31DFB93A3210A6B2619C87E206D8A2ADC(L_33, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Ubiety.Dns.Core.ResourceRecord>::GetEnumerator() */, IEnumerable_1_t26242978C6B1BCC15CC38E8E5F367D1A19E9471E_il2cpp_TypeInfo_var, L_34);
		V_9 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fe:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_36 = V_9;
					if (!L_36)
					{
						goto IL_0109;
					}
				}
				{
					RuntimeObject* L_37 = V_9;
					NullCheck(L_37);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_37);
				}

IL_0109:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f3_1;
			}

IL_00d9_1:
			{
				RuntimeObject* L_38 = V_9;
				NullCheck(L_38);
				ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* L_39;
				L_39 = InterfaceFuncInvoker0< ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Ubiety.Dns.Core.ResourceRecord>::get_Current() */, IEnumerator_1_t1119B9843C1ABF64812D574F66FACBEA1B653E7B_il2cpp_TypeInfo_var, L_38);
				ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* L_40 = L_39;
				int32_t L_41 = V_2;
				NullCheck(L_40);
				ResourceRecord_set_TimeLived_m1B6A00C9BB82EF621A7BCFDD8CA9C5820CCF855E_inline(L_40, L_41, NULL);
				NullCheck(L_40);
				uint32_t L_42;
				L_42 = ResourceRecord_get_Ttl_m2279AF0020861670E5177BE4D9A499D1F3D86896(L_40, NULL);
				if (L_42)
				{
					goto IL_00f3_1;
				}
			}
			{
				V_7 = (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*)NULL;
				goto IL_010c;
			}

IL_00f3_1:
			{
				RuntimeObject* L_43 = V_9;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00d9_1;
				}
			}
			{
				goto IL_010a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010a:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_45 = V_1;
		return L_45;
	}

IL_010c:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_46 = V_7;
		return L_46;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::AddToCache(Ubiety.Dns.Core.Response)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver_AddToCache_m124852D7A2ACF9EDAADBF36DDB7193A75C763F6D (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* ___0_response, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8D515126E50B361D5D9FB68185AECF52123355A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC3E21DA09723C7D00001F353493A427E79DECD82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m52A82CC043623D3D3E52B72FEF18655FD93A8F73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m641238DE01D4A2AEA68206C442B6EAD186611873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestionClass_t529DE8CF4BA9C179930AFE97A7661203FF65A3CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestionType_t9597E4EB323EB8890DC3CC4FFB42619474815323_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* V_4 = NULL;
	bool V_5 = false;
	{
		bool L_0 = __this->____useCache_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_1 = ___0_response;
		NullCheck(L_1);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_2;
		L_2 = Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_inline(L_2, List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_4 = ___0_response;
		NullCheck(L_4);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_5;
		L_5 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Header_get_ResponseCode_mC4690F97FEB2B2AF2F738440A62F1A51BABA43CE(L_5, NULL);
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_7 = ___0_response;
		NullCheck(L_7);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_8;
		L_8 = Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline(L_7, NULL);
		NullCheck(L_8);
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_9;
		L_9 = List_1_get_Item_m641238DE01D4A2AEA68206C442B6EAD186611873(L_8, 0, List_1_get_Item_m641238DE01D4A2AEA68206C442B6EAD186611873_RuntimeMethod_var);
		V_0 = L_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Question_get_QuestionClass_m5225419D0016B927E62DA634C1A357795C4696B4_inline(L_12, NULL);
		V_2 = L_13;
		Il2CppFakeBox<int32_t> L_14(QuestionClass_t529DE8CF4BA9C179930AFE97A7661203FF65A3CD_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_15;
		L_15 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_14), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_11;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Question_get_QuestionType_m8535FC6F3AB1FCF43A9D187812A698A39236CFA6_inline(L_18, NULL);
		V_3 = L_19;
		Il2CppFakeBox<int32_t> L_20(QuestionType_t9597E4EB323EB8890DC3CC4FFB42619474815323_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_21;
		L_21 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_20), NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_17;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Question_get_QuestionName_m8B15666CD7C55B72C95DB140C8E244412CB3A53E_inline(L_24, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_23, NULL);
		V_1 = L_26;
		Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_27 = __this->____responseCache_0;
		V_4 = L_27;
		V_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c3:
			{// begin finally (depth: 1)
				{
					bool L_28 = V_5;
					if (!L_28)
					{
						goto IL_00ce;
					}
				}
				{
					Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_29 = V_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_29, NULL);
				}

IL_00ce:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_30 = V_4;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_30, (&V_5), NULL);
				Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_31 = __this->____responseCache_0;
				String_t* L_32 = V_1;
				NullCheck(L_31);
				bool L_33;
				L_33 = Dictionary_2_ContainsKey_mC3E21DA09723C7D00001F353493A427E79DECD82(L_31, L_32, Dictionary_2_ContainsKey_mC3E21DA09723C7D00001F353493A427E79DECD82_RuntimeMethod_var);
				if (!L_33)
				{
					goto IL_00b4_1;
				}
			}
			{
				Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_34 = __this->____responseCache_0;
				String_t* L_35 = V_1;
				NullCheck(L_34);
				bool L_36;
				L_36 = Dictionary_2_Remove_m52A82CC043623D3D3E52B72FEF18655FD93A8F73(L_34, L_35, Dictionary_2_Remove_m52A82CC043623D3D3E52B72FEF18655FD93A8F73_RuntimeMethod_var);
			}

IL_00b4_1:
			{
				Dictionary_2_tB08F1663B1AC73ED2F6E9B6DF933DA2EABA27469* L_37 = __this->____responseCache_0;
				String_t* L_38 = V_1;
				Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_39 = ___0_response;
				NullCheck(L_37);
				Dictionary_2_Add_m8D515126E50B361D5D9FB68185AECF52123355A4(L_37, L_38, L_39, Dictionary_2_Add_m8D515126E50B361D5D9FB68185AECF52123355A4_RuntimeMethod_var);
				goto IL_00cf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
		return;
	}
}
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::UdpRequest(Ubiety.Dns.Core.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_UdpRequest_mCB8BD05301AABE47EE2AD4F8DF97A07CF96312E4 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Request_t5EC29E166C112954C06827C8C28901253ABC6350* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m65B2C3C3CB5FE1BC9F99E27E30E3A9C4D1F98D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD96FAAF146661EFBA954AB67B299A12B2B5AA770);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_6 = NULL;
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		V_0 = L_0;
		V_1 = 0;
		goto IL_00e1;
	}

IL_0012:
	{
		V_2 = 0;
		goto IL_00cc;
	}

IL_0019:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_1, 2, 2, ((int32_t)17), NULL);
		V_3 = L_1;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = V_3;
		int32_t L_3;
		L_3 = Resolver_get_Timeout_mF50B8ED5892098FF659163B93EA195ED2278F117_inline(__this, NULL);
		NullCheck(L_2);
		Socket_SetSocketOption_m19085C1856DE21260294680B7725610D71D66A58(L_2, ((int32_t)65535), ((int32_t)4102), L_3, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b2:
			{// begin finally (depth: 1)
				uint16_t L_4 = __this->____unique_3;
				__this->____unique_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, 1)));
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = V_3;
				NullCheck(L_5);
				Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = V_3;
				Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_7 = ___0_request;
				NullCheck(L_7);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = Request_GetData_m83A495F874D76F4BF0E467EDA6C0840535FC1D82(L_7, NULL);
				List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_9;
				L_9 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(__this, NULL);
				int32_t L_10 = V_2;
				NullCheck(L_9);
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_11;
				L_11 = List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B(L_9, L_10, List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B_RuntimeMethod_var);
				NullCheck(L_6);
				int32_t L_12;
				L_12 = Socket_SendTo_m1CB5F145162DBEB1F602BCC375C6217B7E754081(L_6, L_8, L_11, NULL);
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_13 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
				NullCheck(L_13);
				int32_t L_15;
				L_15 = Socket_Receive_m1D506714778D53C3EB7BBCB9155B8AEEF06FA91C(L_13, L_14, NULL);
				V_4 = L_15;
				int32_t L_16 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_16);
				V_5 = L_17;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
				int32_t L_20 = V_4;
				Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_18, (RuntimeArray*)L_19, L_20, NULL);
				List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_21;
				L_21 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(__this, NULL);
				int32_t L_22 = V_2;
				NullCheck(L_21);
				IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_23;
				L_23 = List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B(L_21, L_22, List_1_get_Item_m3FED6E3FDDCB1CFCC29DD9C93B92AD9C79B5710B_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
				Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_25 = (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*)il2cpp_codegen_object_new(Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				Response__ctor_mC0F876B5456C41CB1909E5EFBFEB2F6BF1A7BC39(L_25, L_23, L_24, NULL);
				V_6 = L_25;
				Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_26 = V_6;
				Resolver_AddToCache_m124852D7A2ACF9EDAADBF36DDB7193A75C763F6D(__this, L_26, NULL);
				Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_27 = V_6;
				V_7 = L_27;
				goto IL_00fe;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0091_1;
				}
				throw e;
			}

CATCH_0091_1:
			{// begin catch(System.Net.Sockets.SocketException)
				int32_t L_28 = V_2;
				int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
				RuntimeObject* L_30 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_29);
				String_t* L_31;
				L_31 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF69AF64BA8D0348D6F2060A45EFFAF06BD98E95)), L_30, NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)0);
				Resolver_Verbose_m864091AEFBE78BE0CAFF05D5801BF631E8020D2C(__this, L_31, L_32, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00c8;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c8:
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00cc:
	{
		int32_t L_34 = V_2;
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_35;
		L_35 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(__this, NULL);
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_m65B2C3C3CB5FE1BC9F99E27E30E3A9C4D1F98D8C_inline(L_35, List_1_get_Count_m65B2C3C3CB5FE1BC9F99E27E30E3A9C4D1F98D8C_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00e1:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = __this->____retries_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0012;
		}
	}
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_40 = (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*)il2cpp_codegen_object_new(Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Response__ctor_m19629725F28D63C0974A64CDEB46A4FAF85DAAE5(L_40, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_41 = L_40;
		NullCheck(L_41);
		Response_set_Error_m9D123C0A7BD42AC2CB338419742F7CB521B6EF3C_inline(L_41, _stringLiteralD96FAAF146661EFBA954AB67B299A12B2B5AA770, NULL);
		return L_41;
	}

IL_00fe:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_42 = V_7;
		return L_42;
	}
}
// System.Threading.Tasks.Task`1<Ubiety.Dns.Core.Response> Ubiety.Dns.Core.Resolver::TcpRequest(Ubiety.Dns.Core.Request)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2* Resolver_TcpRequest_mC44DA65E84573CC051315868CF6AADE28782D9A8 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Request_t5EC29E166C112954C06827C8C28901253ABC6350* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m54653C35CAC9D7F46486D3BC662F56CD8B1E8336_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mC6508FCD4BDE64A19B94E5596546A6932F3F5521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m8267F5874CDE64928E523659A8FDD9FF8843F127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_0 = ___0_request;
		(&V_0)->___request_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_3), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02 L_1;
		L_1 = AsyncTaskMethodBuilder_1_Create_m54653C35CAC9D7F46486D3BC662F56CD8B1E8336(AsyncTaskMethodBuilder_1_Create_m54653C35CAC9D7F46486D3BC662F56CD8B1E8336_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mC6508FCD4BDE64A19B94E5596546A6932F3F5521(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mC6508FCD4BDE64A19B94E5596546A6932F3F5521_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t8001444A8DE05AF8250E5A6CAD32271E7354ACF2* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m8267F5874CDE64928E523659A8FDD9FF8843F127(L_3, AsyncTaskMethodBuilder_1_get_Task_m8267F5874CDE64928E523659A8FDD9FF8843F127_RuntimeMethod_var);
		return L_4;
	}
}
// Ubiety.Dns.Core.Response Ubiety.Dns.Core.Resolver::ReceiveResponse(System.IO.Stream,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* Resolver_ReceiveResponse_mE852EB3C24AD7DC984629302B83720E611DC5D28 (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___1_server, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m18EA74377CBCFC59DE6BA7E1AD0A9E2BD6E65222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5CA86F8D239FF90A703C306BEDD70427D1D54DEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB455010BE75CE2E8CDB09838DFE1C4A01C742332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mD1473AD8CFE0F7F892CE2071BBFE57FA884CD3F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m89DC2CC869AB89238D663B461053873FB5A6F814_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8CE8D366FCF69B29A9141285BAA958350C1F53EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF30E4A853AFC9A484FA405F39AA61B91857AC85C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m262ADEEA2C0529BC87D7AD90C81D103A99CF0AD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m641238DE01D4A2AEA68206C442B6EAD186611873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_5 = NULL;
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_0 = (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*)il2cpp_codegen_object_new(Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Response__ctor_m19629725F28D63C0974A64CDEB46A4FAF85DAAE5(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
	}

IL_000a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_stream;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.IO.Stream::ReadByte() */, L_3);
		V_3 = ((int32_t)(((int32_t)(L_2<<8))|L_4));
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = ___1_server;
		NullCheck(L_6);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_7;
		L_7 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB52585C646FF1CB13786820A3CE1D7BDA1BE9CF9)), L_7, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)0);
		Resolver_Verbose_m864091AEFBE78BE0CAFF05D5801BF631E8020D2C(__this, L_8, L_9, NULL);
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_10 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		SocketException__ctor_mDDA59569C2C05AB013AF9670BD6EC070086239AB(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Resolver_ReceiveResponse_mE852EB3C24AD7DC984629302B83720E611DC5D28_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_13 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_4 = L_14;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_4;
		int32_t L_17 = V_3;
		NullCheck(L_15);
		int32_t L_18;
		L_18 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, L_17);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_19 = ___1_server;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_21 = (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*)il2cpp_codegen_object_new(Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Response__ctor_mC0F876B5456C41CB1909E5EFBFEB2F6BF1A7BC39(L_21, L_19, L_20, NULL);
		V_5 = L_21;
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_22 = V_5;
		NullCheck(L_22);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_23;
		L_23 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Header_get_ResponseCode_mC4690F97FEB2B2AF2F738440A62F1A51BABA43CE(L_23, NULL);
		if (!L_24)
		{
			goto IL_0072;
		}
	}
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_25 = V_5;
		return L_25;
	}

IL_0072:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_26 = V_5;
		NullCheck(L_26);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_27;
		L_27 = Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline(L_26, NULL);
		NullCheck(L_27);
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_28;
		L_28 = List_1_get_Item_m641238DE01D4A2AEA68206C442B6EAD186611873(L_27, 0, List_1_get_Item_m641238DE01D4A2AEA68206C442B6EAD186611873_RuntimeMethod_var);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Question_get_QuestionType_m8535FC6F3AB1FCF43A9D187812A698A39236CFA6_inline(L_28, NULL);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)252))))
		{
			goto IL_0096;
		}
	}
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_30 = V_5;
		Resolver_AddToCache_m124852D7A2ACF9EDAADBF36DDB7193A75C763F6D(__this, L_30, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_31 = V_5;
		return L_31;
	}

IL_0096:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_32 = V_0;
		NullCheck(L_32);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_33;
		L_33 = Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline(L_32, NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_inline(L_33, List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_00b5;
		}
	}
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_35 = V_0;
		NullCheck(L_35);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_36;
		L_36 = Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline(L_35, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_37 = V_5;
		NullCheck(L_37);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_38;
		L_38 = Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline(L_37, NULL);
		NullCheck(L_36);
		List_1_AddRange_m18EA74377CBCFC59DE6BA7E1AD0A9E2BD6E65222(L_36, L_38, List_1_AddRange_m18EA74377CBCFC59DE6BA7E1AD0A9E2BD6E65222_RuntimeMethod_var);
	}

IL_00b5:
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_39 = V_0;
		NullCheck(L_39);
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_40;
		L_40 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(L_39, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_41 = V_5;
		NullCheck(L_41);
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_42;
		L_42 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(L_41, NULL);
		NullCheck(L_40);
		List_1_AddRange_m5CA86F8D239FF90A703C306BEDD70427D1D54DEC(L_40, L_42, List_1_AddRange_m5CA86F8D239FF90A703C306BEDD70427D1D54DEC_RuntimeMethod_var);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_43 = V_0;
		NullCheck(L_43);
		List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* L_44;
		L_44 = Response_get_Authorities_mA8B7731F453C68239CB2A98788550AEC6DCF701C_inline(L_43, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_45 = V_5;
		NullCheck(L_45);
		List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* L_46;
		L_46 = Response_get_Authorities_mA8B7731F453C68239CB2A98788550AEC6DCF701C_inline(L_45, NULL);
		NullCheck(L_44);
		List_1_AddRange_mB455010BE75CE2E8CDB09838DFE1C4A01C742332(L_44, L_46, List_1_AddRange_mB455010BE75CE2E8CDB09838DFE1C4A01C742332_RuntimeMethod_var);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_47 = V_0;
		NullCheck(L_47);
		List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* L_48;
		L_48 = Response_get_Additionals_mDD10FE503E759BDE32BBCFDD05E383A2D3C9F52C_inline(L_47, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_49 = V_5;
		NullCheck(L_49);
		List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* L_50;
		L_50 = Response_get_Additionals_mDD10FE503E759BDE32BBCFDD05E383A2D3C9F52C_inline(L_49, NULL);
		NullCheck(L_48);
		List_1_AddRange_mD1473AD8CFE0F7F892CE2071BBFE57FA884CD3F6(L_48, L_50, List_1_AddRange_mD1473AD8CFE0F7F892CE2071BBFE57FA884CD3F6_RuntimeMethod_var);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_51 = V_5;
		NullCheck(L_51);
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_52;
		L_52 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(L_51, NULL);
		NullCheck(L_52);
		AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_53;
		L_53 = List_1_get_Item_m262ADEEA2C0529BC87D7AD90C81D103A99CF0AD2(L_52, 0, List_1_get_Item_m262ADEEA2C0529BC87D7AD90C81D103A99CF0AD2_RuntimeMethod_var);
		NullCheck(L_53);
		int32_t L_54;
		L_54 = ResourceRecord_get_Type_m3461765E4063C2ACBB3FBA163885068368335B37_inline(L_53, NULL);
		if ((!(((uint32_t)L_54) == ((uint32_t)6))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0104:
	{
		int32_t L_56 = V_1;
		if ((!(((uint32_t)L_56) == ((uint32_t)2))))
		{
			goto IL_000a;
		}
	}
	{
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_57 = V_0;
		NullCheck(L_57);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_58;
		L_58 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(L_57, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_59 = V_0;
		NullCheck(L_59);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_60;
		L_60 = Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline(L_59, NULL);
		NullCheck(L_60);
		int32_t L_61;
		L_61 = List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_inline(L_60, List_1_get_Count_m745F26DA358B0E52E6A69894B0E6DBFC7996AAA3_RuntimeMethod_var);
		NullCheck(L_58);
		Header_set_QuestionCount_m6944E71103A18DD327E33F00CCA4403084FC51F4_inline(L_58, (uint16_t)((int32_t)(uint16_t)L_61), NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_62 = V_0;
		NullCheck(L_62);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_63;
		L_63 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(L_62, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_64 = V_0;
		NullCheck(L_64);
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_65;
		L_65 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(L_64, NULL);
		NullCheck(L_65);
		int32_t L_66;
		L_66 = List_1_get_Count_m8CE8D366FCF69B29A9141285BAA958350C1F53EE_inline(L_65, List_1_get_Count_m8CE8D366FCF69B29A9141285BAA958350C1F53EE_RuntimeMethod_var);
		NullCheck(L_63);
		Header_set_AnswerCount_mF805DD706C7221A3243603655E9D7153C6C98BC0_inline(L_63, (uint16_t)((int32_t)(uint16_t)L_66), NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_67 = V_0;
		NullCheck(L_67);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_68;
		L_68 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(L_67, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_69 = V_0;
		NullCheck(L_69);
		List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* L_70;
		L_70 = Response_get_Authorities_mA8B7731F453C68239CB2A98788550AEC6DCF701C_inline(L_69, NULL);
		NullCheck(L_70);
		int32_t L_71;
		L_71 = List_1_get_Count_m89DC2CC869AB89238D663B461053873FB5A6F814_inline(L_70, List_1_get_Count_m89DC2CC869AB89238D663B461053873FB5A6F814_RuntimeMethod_var);
		NullCheck(L_68);
		Header_set_NameserverCount_m8EE0F372A9A1D19E2CA543433B2B4CC99C6F35B9_inline(L_68, (uint16_t)((int32_t)(uint16_t)L_71), NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_72 = V_0;
		NullCheck(L_72);
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_73;
		L_73 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(L_72, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_74 = V_0;
		NullCheck(L_74);
		List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* L_75;
		L_75 = Response_get_Additionals_mDD10FE503E759BDE32BBCFDD05E383A2D3C9F52C_inline(L_74, NULL);
		NullCheck(L_75);
		int32_t L_76;
		L_76 = List_1_get_Count_mF30E4A853AFC9A484FA405F39AA61B91857AC85C_inline(L_75, List_1_get_Count_mF30E4A853AFC9A484FA405F39AA61B91857AC85C_RuntimeMethod_var);
		NullCheck(L_73);
		Header_set_AdditionalRecordsCount_m09123884C005C9C0FD025E7D6D009D540675B823_inline(L_73, (uint16_t)((int32_t)(uint16_t)L_76), NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_77 = V_0;
		int32_t L_78 = V_2;
		NullCheck(L_77);
		Response_set_MessageSize_m31F390FF9AD7D9CC5A0FEE54B2FF8195A3859B17_inline(L_77, L_78, NULL);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_79 = V_0;
		return L_79;
	}
}
// System.Void Ubiety.Dns.Core.Resolver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolver__cctor_m0A9398225241595A3F3FD7B9A61DAFA8B7A94E82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_StaticFields*)il2cpp_codegen_static_fields_for(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var))->___U3CDefaultPortU3Ek__BackingField_6 = ((int32_t)53);
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
void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_Multicast(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* currentDelegate = reinterpret_cast<VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenInst(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenStatic(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenStaticInvoker(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sender, ___1_e);
}
void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_ClosedStaticInvoker(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_e);
}
void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenVirtual(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker1< VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenInterface(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker1< VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenGenericVirtual(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker1< VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* >::Invoke(method, ___0_sender, ___1_e);
}
void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenGenericInterface(VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker1< VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* >::Invoke(method, ___0_sender, ___1_e);
}
// System.Void Ubiety.Dns.Core.Resolver/VerboseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerboseEventHandler__ctor_mE9FE80821F65B18A1ED1B17FCC29B405B9B00DD7 (VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_Multicast;
}
// System.Void Ubiety.Dns.Core.Resolver/VerboseEventHandler::Invoke(System.Object,Ubiety.Dns.Core.Common.VerboseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB (VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Ubiety.Dns.Core.Resolver/VerboseEventHandler::BeginInvoke(System.Object,Ubiety.Dns.Core.Common.VerboseEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerboseEventHandler_BeginInvoke_m901BC2FDA8AAFABD6A69E8EF781FBCEBE331106C (VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_sender;
	__d_args[1] = ___1_e;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Ubiety.Dns.Core.Resolver/VerboseEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerboseEventHandler_EndInvoke_m1BB517BA968479F0F91BB0F48250710E20A94392 (VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTcpRequestU3Ed__58_MoveNext_m1336E7D84F559B91865EFF9D2F2585A86F9F63FD (U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mF5EC5E8450D3787349DA1F3E61218A2066E84964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m69FD3772776E110545B217CA64090518B4C5D1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDD71B71D79434EBDD38D36CB7C5A0ADEE8BCA1B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5020CAD6D2F61FD755EF2B89B56555F5EEFB7788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAA9A1D3D580F0A8D0036C7E8848CAB148DD80DC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m167C803023EFDEA03A5AEE4555FB1455F53E1C73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF69AF64BA8D0348D6F2060A45EFFAF06BD98E95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD96FAAF146661EFBA954AB67B299A12B2B5AA770);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* V_1 = NULL;
	Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* V_2 = NULL;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_4;
	memset((&V_4), 0, sizeof(V_4));
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_5 = NULL;
	int32_t V_6 = 0;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_002e_1;
			}
		}
		{
			__this->___U3CintAttemptsU3E5__2_4 = 0;
			goto IL_01ef_1;
		}

IL_001d_1:
		{
			Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* L_3 = V_1;
			NullCheck(L_3);
			List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_4;
			L_4 = Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline(L_3, NULL);
			NullCheck(L_4);
			Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85 L_5;
			L_5 = List_1_GetEnumerator_m167C803023EFDEA03A5AEE4555FB1455F53E1C73(L_4, List_1_GetEnumerator_m167C803023EFDEA03A5AEE4555FB1455F53E1C73_RuntimeMethod_var);
			__this->___U3CU3E7__wrap2_5 = L_5;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap2_5))->____list_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap2_5))->____current_3), (void*)NULL);
			#endif
		}

IL_002e_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_01bb_1:
				{// begin finally (depth: 2)
					{
						int32_t L_6 = V_0;
						if ((((int32_t)L_6) >= ((int32_t)0)))
						{
							goto IL_01d0_1;
						}
					}
					{
						Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85* L_7 = (&__this->___U3CU3E7__wrap2_5);
						Enumerator_Dispose_mDD71B71D79434EBDD38D36CB7C5A0ADEE8BCA1B6(L_7, Enumerator_Dispose_mDD71B71D79434EBDD38D36CB7C5A0ADEE8BCA1B6_RuntimeMethod_var);
					}

IL_01d0_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_8 = V_0;
					if (!L_8)
					{
						goto IL_0075_2;
					}
				}
				{
					goto IL_01a9_2;
				}

IL_0037_2:
				{
					Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85* L_9 = (&__this->___U3CU3E7__wrap2_5);
					IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_10;
					L_10 = Enumerator_get_Current_mAA9A1D3D580F0A8D0036C7E8848CAB148DD80DC6_inline(L_9, Enumerator_get_Current_mAA9A1D3D580F0A8D0036C7E8848CAB148DD80DC6_RuntimeMethod_var);
					__this->___U3CserverU3E5__4_6 = L_10;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CserverU3E5__4_6), (void*)L_10);
					TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_11 = (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58*)il2cpp_codegen_object_new(TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var);
					NullCheck(L_11);
					TcpClient__ctor_m709FAC4D5B9DDB279F9B97D90D3164B92E1F2C87(L_11, NULL);
					TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_12 = L_11;
					Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* L_13 = V_1;
					NullCheck(L_13);
					int32_t L_14 = L_13->____timeout_2;
					NullCheck(L_12);
					TcpClient_set_ReceiveTimeout_mF205FBAD90301B326420B66DDA8E7E6AD518B27C(L_12, L_14, NULL);
					__this->___U3CclientU3E5__5_7 = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclientU3E5__5_7), (void*)L_12);
					TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_15 = __this->___U3CclientU3E5__5_7;
					NullCheck(L_15);
					NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_16;
					L_16 = TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA(L_15, NULL);
					BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_17 = (BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE*)il2cpp_codegen_object_new(BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var);
					NullCheck(L_17);
					BufferedStream__ctor_mE46A382BA3310909FE3283CCC46DE3A6EA6E0DF3(L_17, L_16, NULL);
					__this->___U3CstreamU3E5__6_8 = L_17;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstreamU3E5__6_8), (void*)L_17);
				}

IL_0075_2:
				{
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0174_2:
						{// begin finally (depth: 3)
							{
								int32_t L_18 = V_0;
								if ((((int32_t)L_18) >= ((int32_t)0)))
								{
									goto IL_01a8_2;
								}
							}
							{
								Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* L_19 = V_1;
								Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* L_20 = V_1;
								NullCheck(L_20);
								uint16_t L_21 = L_20->____unique_3;
								NullCheck(L_19);
								L_19->____unique_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 1)));
								BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_22 = __this->___U3CstreamU3E5__6_8;
								NullCheck(L_22);
								VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Close() */, L_22);
								BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_23 = __this->___U3CstreamU3E5__6_8;
								NullCheck(L_23);
								Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_23, NULL);
								TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_24 = __this->___U3CclientU3E5__5_7;
								NullCheck(L_24);
								TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89(L_24, NULL);
							}

IL_01a8_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						try
						{// begin try (depth: 4)
							{
								int32_t L_25 = V_0;
								if (!L_25)
								{
									goto IL_00d6_4;
								}
							}
							{
								TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_26 = __this->___U3CclientU3E5__5_7;
								IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_27 = __this->___U3CserverU3E5__4_6;
								NullCheck(L_27);
								IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_28;
								L_28 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_27, NULL);
								IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_29 = __this->___U3CserverU3E5__4_6;
								NullCheck(L_29);
								int32_t L_30;
								L_30 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_29, NULL);
								NullCheck(L_26);
								Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_31;
								L_31 = TcpClient_ConnectAsync_m6C76D53DE825D614001CE506E1BC09E2C6335CE5(L_26, L_28, L_30, NULL);
								NullCheck(L_31);
								ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_32;
								L_32 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_31, (bool)0, NULL);
								V_4 = L_32;
								ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_33;
								L_33 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_4), NULL);
								V_3 = L_33;
								bool L_34;
								L_34 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_3), NULL);
								if (L_34)
								{
									goto IL_00f2_4;
								}
							}
							{
								int32_t L_35 = 0;
								V_0 = L_35;
								__this->___U3CU3E1__state_0 = L_35;
								ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_36 = V_3;
								__this->___U3CU3Eu__1_9 = L_36;
								Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
								AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* L_37 = (&__this->___U3CU3Et__builder_1);
								AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mF5EC5E8450D3787349DA1F3E61218A2066E84964(L_37, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047_mF5EC5E8450D3787349DA1F3E61218A2066E84964_RuntimeMethod_var);
								goto IL_0240;
							}

IL_00d6_4:
							{
								ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_38 = __this->___U3CU3Eu__1_9;
								V_3 = L_38;
								ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_39 = (&__this->___U3CU3Eu__1_9);
								il2cpp_codegen_initobj(L_39, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
								int32_t L_40 = (-1);
								V_0 = L_40;
								__this->___U3CU3E1__state_0 = L_40;
							}

IL_00f2_4:
							{
								ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_3), NULL);
								TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_41 = __this->___U3CclientU3E5__5_7;
								NullCheck(L_41);
								bool L_42;
								L_42 = TcpClient_get_Connected_mAE5B631778361C28C783E417C09F87BA102787B5(L_41, NULL);
								if (L_42)
								{
									goto IL_0134_4;
								}
							}
							{
								TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_43 = __this->___U3CclientU3E5__5_7;
								NullCheck(L_43);
								TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89(L_43, NULL);
								Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* L_44 = V_1;
								IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_45 = __this->___U3CserverU3E5__4_6;
								NullCheck(L_45);
								IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_46;
								L_46 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_45, NULL);
								String_t* L_47;
								L_47 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCF69AF64BA8D0348D6F2060A45EFFAF06BD98E95, L_46, NULL);
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
								NullCheck(L_44);
								Resolver_Verbose_m864091AEFBE78BE0CAFF05D5801BF631E8020D2C(L_44, L_47, L_48, NULL);
								goto IL_01a9_2;
							}

IL_0134_4:
							{
								BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_49 = __this->___U3CstreamU3E5__6_8;
								Request_t5EC29E166C112954C06827C8C28901253ABC6350* L_50 = __this->___request_3;
								il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
								Resolver_WriteRequest_m77BD453EA82F35B352025BF69A3675F76483938A(L_49, L_50, NULL);
								Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* L_51 = V_1;
								BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_52 = __this->___U3CstreamU3E5__6_8;
								IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_53 = __this->___U3CserverU3E5__4_6;
								NullCheck(L_51);
								Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_54;
								L_54 = Resolver_ReceiveResponse_mE852EB3C24AD7DC984629302B83720E611DC5D28(L_51, L_52, L_53, NULL);
								V_2 = L_54;
								goto IL_022c;
							}
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
							{
								IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
								goto CATCH_015d_3;
							}
							throw e;
						}

CATCH_015d_3:
						{// begin catch(System.Net.Sockets.SocketException)
							V_5 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
							Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* L_55 = V_1;
							SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_56 = V_5;
							NullCheck(L_56);
							String_t* L_57;
							L_57 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_56);
							ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)0);
							NullCheck(L_55);
							Resolver_Verbose_m864091AEFBE78BE0CAFF05D5801BF631E8020D2C(L_55, L_57, L_58, NULL);
							IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
						}// end catch (depth: 4)
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_01a9_2:
				{
					Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85* L_59 = (&__this->___U3CU3E7__wrap2_5);
					bool L_60;
					L_60 = Enumerator_MoveNext_m5020CAD6D2F61FD755EF2B89B56555F5EEFB7788(L_59, Enumerator_MoveNext_m5020CAD6D2F61FD755EF2B89B56555F5EEFB7788_RuntimeMethod_var);
					if (L_60)
					{
						goto IL_0037_2;
					}
				}
				{
					goto IL_01d1_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_01d1_1:
		{
			Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85* L_61 = (&__this->___U3CU3E7__wrap2_5);
			il2cpp_codegen_initobj(L_61, sizeof(Enumerator_t84BA4BC505C453DEEE23676D3E3563E1E7E1EE85));
			int32_t L_62 = __this->___U3CintAttemptsU3E5__2_4;
			V_6 = L_62;
			int32_t L_63 = V_6;
			__this->___U3CintAttemptsU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		}

IL_01ef_1:
		{
			int32_t L_64 = __this->___U3CintAttemptsU3E5__2_4;
			Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* L_65 = V_1;
			NullCheck(L_65);
			int32_t L_66 = L_65->____retries_1;
			if ((((int32_t)L_64) < ((int32_t)L_66)))
			{
				goto IL_001d_1;
			}
		}
		{
			Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_67 = (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7*)il2cpp_codegen_object_new(Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7_il2cpp_TypeInfo_var);
			NullCheck(L_67);
			Response__ctor_m19629725F28D63C0974A64CDEB46A4FAF85DAAE5(L_67, NULL);
			Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_68 = L_67;
			NullCheck(L_68);
			Response_set_Error_m9D123C0A7BD42AC2CB338419742F7CB521B6EF3C_inline(L_68, _stringLiteralD96FAAF146661EFBA954AB67B299A12B2B5AA770, NULL);
			V_2 = L_68;
			goto IL_022c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0213;
		}
		throw e;
	}

CATCH_0213:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* L_69 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_70 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mC69F2D48BFFA2348A56133508C574789C16A338D(L_69, L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mC69F2D48BFFA2348A56133508C574789C16A338D_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0240;
	}// end catch (depth: 1)

IL_022c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* L_71 = (&__this->___U3CU3Et__builder_1);
		Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* L_72 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m69FD3772776E110545B217CA64090518B4C5D1C4(L_71, L_72, AsyncTaskMethodBuilder_1_SetResult_m69FD3772776E110545B217CA64090518B4C5D1C4_RuntimeMethod_var);
	}

IL_0240:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTcpRequestU3Ed__58_MoveNext_m1336E7D84F559B91865EFF9D2F2585A86F9F63FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047*>(__this + _offset);
	U3CTcpRequestU3Ed__58_MoveNext_m1336E7D84F559B91865EFF9D2F2585A86F9F63FD(_thisAdjusted, method);
}
// System.Void Ubiety.Dns.Core.Resolver/<TcpRequest>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTcpRequestU3Ed__58_SetStateMachine_m87702767262A50206C3490900F6F955DB50C0530 (U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0512EBD9BE75C05AE7F2B046109F9CCC18EE0F92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF91B6E0C37079A27504E2D485E2CBA8BF0D22E02* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0512EBD9BE75C05AE7F2B046109F9CCC18EE0F92(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0512EBD9BE75C05AE7F2B046109F9CCC18EE0F92_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTcpRequestU3Ed__58_SetStateMachine_m87702767262A50206C3490900F6F955DB50C0530_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTcpRequestU3Ed__58_t795B4735F2308FB1E223087B3B4ADFA7CA57B047*>(__this + _offset);
	U3CTcpRequestU3Ed__58_SetStateMachine_m87702767262A50206C3490900F6F955DB50C0530(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ubiety.Dns.Core.ResourceRecord::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceRecord__ctor_mCB057EFB1714C05395D13F2E70A5200291E594C7 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ResourceRecord_set_TimeLived_m1B6A00C9BB82EF621A7BCFDD8CA9C5820CCF855E_inline(__this, 0, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_1);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_2, NULL);
		__this->___U3CTypeU3Ek__BackingField_2 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_4, NULL);
		__this->___U3CClassU3Ek__BackingField_3 = L_5;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_6, NULL);
		ResourceRecord_set_Ttl_mF7DEB441862A2AF10026651F48BDCA4265EC5AD5_inline(__this, L_7, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_8 = ___0_rr;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_8, NULL);
		__this->___U3CRecordLengthU3Ek__BackingField_4 = L_9;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = ___0_rr;
		int32_t L_11;
		L_11 = ResourceRecord_get_Type_m3461765E4063C2ACBB3FBA163885068368335B37_inline(__this, NULL);
		NullCheck(L_10);
		Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_12;
		L_12 = RecordReader_ReadRecord_m984D114C9CEBD45EE94228AA1F7220B1229FE4E3(L_10, L_11, NULL);
		__this->___U3CRecordU3Ek__BackingField_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRecordU3Ek__BackingField_5), (void*)L_12);
		Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_13;
		L_13 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(__this, NULL);
		NullCheck(L_13);
		Record_set_ResourceRecord_mEE6745C1DC7DC1CF1F9F66FA14AA9D079EAAD468_inline(L_13, __this, NULL);
		return;
	}
}
// System.String Ubiety.Dns.Core.ResourceRecord::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceRecord_get_Name_m256CD5E96F2573DFEC9A588CF9F88B1DCC662758 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
// Ubiety.Dns.Core.Common.RecordType Ubiety.Dns.Core.ResourceRecord::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceRecord_get_Type_m3461765E4063C2ACBB3FBA163885068368335B37 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// Ubiety.Dns.Core.Common.OperationClass Ubiety.Dns.Core.ResourceRecord::get_Class()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceRecord_get_Class_m73E2E11232B90CE31030DA4A8F69C6BB1D83BEF0 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CClassU3Ek__BackingField_3;
		return L_0;
	}
}
// System.UInt32 Ubiety.Dns.Core.ResourceRecord::get_Ttl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ResourceRecord_get_Ttl_m2279AF0020861670E5177BE4D9A499D1F3D86896 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = __this->____ttl_0;
		int32_t L_1;
		L_1 = ResourceRecord_get_TimeLived_m5B496D9020DFF3BEFA9A0EC68F64FD62B2F37FC9_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Math_Max_mD37411571F0547F04F280D5A8D1F044819AFA597(((int64_t)0), ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_0), ((int64_t)L_1))), NULL);
		return ((int32_t)(uint32_t)L_2);
	}
}
// System.Void Ubiety.Dns.Core.ResourceRecord::set_Ttl(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceRecord_set_Ttl_mF7DEB441862A2AF10026651F48BDCA4265EC5AD5 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->____ttl_0 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.ResourceRecord::get_RecordLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ResourceRecord_get_RecordLength_m0F4AC76EFFBF501D62D34ED20C6C687585119169 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CRecordLengthU3Ek__BackingField_4;
		return L_0;
	}
}
// Ubiety.Dns.Core.Records.Record Ubiety.Dns.Core.ResourceRecord::get_Record()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_0 = __this->___U3CRecordU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Int32 Ubiety.Dns.Core.ResourceRecord::get_TimeLived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceRecord_get_TimeLived_m5B496D9020DFF3BEFA9A0EC68F64FD62B2F37FC9 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTimeLivedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.ResourceRecord::set_TimeLived(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceRecord_set_TimeLived_m1B6A00C9BB82EF621A7BCFDD8CA9C5820CCF855E (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTimeLivedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String Ubiety.Dns.Core.ResourceRecord::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceRecord_ToString_mB9C9B6029C9D0BF798530A80A90841A93D527D36 (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationClass_t33E5CF9DBDB43B2F2EE22AB27F89F4D4AC4C77EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordType_tE038672BFC25770D08365B50FC92F593EBA37C2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA200ED9DB436A2A03C578CDB6AEA0625984E94);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = ResourceRecord_get_Name_m256CD5E96F2573DFEC9A588CF9F88B1DCC662758_inline(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		uint32_t L_4;
		L_4 = ResourceRecord_get_Ttl_m2279AF0020861670E5177BE4D9A499D1F3D86896(__this, NULL);
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		int32_t L_8;
		L_8 = ResourceRecord_get_Class_m73E2E11232B90CE31030DA4A8F69C6BB1D83BEF0_inline(__this, NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(OperationClass_t33E5CF9DBDB43B2F2EE22AB27F89F4D4AC4C77EF_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = ResourceRecord_get_Type_m3461765E4063C2ACBB3FBA163885068368335B37_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(RecordType_tE038672BFC25770D08365B50FC92F593EBA37C2F_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_16;
		L_16 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(__this, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral5CA200ED9DB436A2A03C578CDB6AEA0625984E94, L_15, NULL);
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
// System.Void Ubiety.Dns.Core.Response::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response__ctor_m19629725F28D63C0974A64CDEB46A4FAF85DAAE5 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m35C84665BADB261DDC435836785563F9E060A7C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m77176C38763790AF27EF66E5AA7F49444ED0DCA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m823B432AD7EF662079ABAB23B2D4A534F018886E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8495645EA7A19014CF8116B843091FE2672BDECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_0 = (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA*)il2cpp_codegen_object_new(List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A(L_0, List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A_RuntimeMethod_var);
		__this->___U3CQuestionsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQuestionsU3Ek__BackingField_0), (void*)L_0);
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1 = (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE*)il2cpp_codegen_object_new(List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m823B432AD7EF662079ABAB23B2D4A534F018886E(L_1, List_1__ctor_m823B432AD7EF662079ABAB23B2D4A534F018886E_RuntimeMethod_var);
		__this->___U3CAnswersU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnswersU3Ek__BackingField_1), (void*)L_1);
		List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* L_2 = (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB*)il2cpp_codegen_object_new(List_1_t8495645EA7A19014CF8116B843091FE2672BDECB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m35C84665BADB261DDC435836785563F9E060A7C0(L_2, List_1__ctor_m35C84665BADB261DDC435836785563F9E060A7C0_RuntimeMethod_var);
		__this->___U3CAuthoritiesU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthoritiesU3Ek__BackingField_2), (void*)L_2);
		List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* L_3 = (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418*)il2cpp_codegen_object_new(List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m77176C38763790AF27EF66E5AA7F49444ED0DCA6(L_3, List_1__ctor_m77176C38763790AF27EF66E5AA7F49444ED0DCA6_RuntimeMethod_var);
		__this->___U3CAdditionalsU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdditionalsU3Ek__BackingField_3), (void*)L_3);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_4 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		IPEndPoint__ctor_m16D9FC6DA967F79B612A59A804E1374B9D324E4A(L_4, ((int64_t)0), 0, NULL);
		__this->___U3CServerU3Ek__BackingField_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServerU3Ek__BackingField_8), (void*)L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Response_set_Error_m9D123C0A7BD42AC2CB338419742F7CB521B6EF3C_inline(__this, L_5, NULL);
		Response_set_MessageSize_m31F390FF9AD7D9CC5A0FEE54B2FF8195A3859B17_inline(__this, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___U3CTimeStampU3Ek__BackingField_7 = L_6;
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_7 = (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A*)il2cpp_codegen_object_new(Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Header__ctor_mEB1A65C75C61C368B738F38EFEE3C00583EDCC00(L_7, NULL);
		__this->___U3CHeaderU3Ek__BackingField_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeaderU3Ek__BackingField_4), (void*)L_7);
		return;
	}
}
// System.Void Ubiety.Dns.Core.Response::.ctor(System.Net.IPEndPoint,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response__ctor_mC0F876B5456C41CB1909E5EFBFEB2F6BF1A7BC39 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_iPEndPoint, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m34E6C8D84D6541410B2044C09958CE96FDFA9E21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m688720220BDD1F27C6C02B9FFACC690771E38D50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7AA4C020C7C8896C7549A3FA563345C4EAC5D056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m84ACE04AE0AE93F341F993856C2855CBAFE0FE35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m35C84665BADB261DDC435836785563F9E060A7C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m77176C38763790AF27EF66E5AA7F49444ED0DCA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m823B432AD7EF662079ABAB23B2D4A534F018886E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8495645EA7A19014CF8116B843091FE2672BDECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Response_set_Error_m9D123C0A7BD42AC2CB338419742F7CB521B6EF3C_inline(__this, L_0, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1 = ___0_iPEndPoint;
		__this->___U3CServerU3Ek__BackingField_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServerU3Ek__BackingField_8), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___U3CTimeStampU3Ek__BackingField_7 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_data;
		NullCheck(L_3);
		Response_set_MessageSize_m31F390FF9AD7D9CC5A0FEE54B2FF8195A3859B17_inline(__this, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_data;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_5 = (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F*)il2cpp_codegen_object_new(RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RecordReader__ctor_m91E0E7D72A0AB6A251477DDC99817E0F2B0F0C97(L_5, L_4, NULL);
		V_0 = L_5;
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_6 = (List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA*)il2cpp_codegen_object_new(List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A(L_6, List_1__ctor_mF9D5281AD573A38BFBD36065E3B27F714AAF727A_RuntimeMethod_var);
		__this->___U3CQuestionsU3Ek__BackingField_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQuestionsU3Ek__BackingField_0), (void*)L_6);
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_7 = (List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE*)il2cpp_codegen_object_new(List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m823B432AD7EF662079ABAB23B2D4A534F018886E(L_7, List_1__ctor_m823B432AD7EF662079ABAB23B2D4A534F018886E_RuntimeMethod_var);
		__this->___U3CAnswersU3Ek__BackingField_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnswersU3Ek__BackingField_1), (void*)L_7);
		List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* L_8 = (List_1_t8495645EA7A19014CF8116B843091FE2672BDECB*)il2cpp_codegen_object_new(List_1_t8495645EA7A19014CF8116B843091FE2672BDECB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m35C84665BADB261DDC435836785563F9E060A7C0(L_8, List_1__ctor_m35C84665BADB261DDC435836785563F9E060A7C0_RuntimeMethod_var);
		__this->___U3CAuthoritiesU3Ek__BackingField_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthoritiesU3Ek__BackingField_2), (void*)L_8);
		List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* L_9 = (List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418*)il2cpp_codegen_object_new(List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m77176C38763790AF27EF66E5AA7F49444ED0DCA6(L_9, List_1__ctor_m77176C38763790AF27EF66E5AA7F49444ED0DCA6_RuntimeMethod_var);
		__this->___U3CAdditionalsU3Ek__BackingField_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdditionalsU3Ek__BackingField_3), (void*)L_9);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = V_0;
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_11 = (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A*)il2cpp_codegen_object_new(Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Header__ctor_m6A0EACC7B270E47F2909BE13BFA5992B27F348E7(L_11, L_10, NULL);
		__this->___U3CHeaderU3Ek__BackingField_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeaderU3Ek__BackingField_4), (void*)L_11);
		V_1 = 0;
		goto IL_0084;
	}

IL_006f:
	{
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_12;
		L_12 = Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_13 = V_0;
		Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* L_14 = (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2*)il2cpp_codegen_object_new(Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Question__ctor_m3C399704776BB91528FE81BCD0D70DF0715522F9(L_14, L_13, NULL);
		NullCheck(L_12);
		List_1_Add_m84ACE04AE0AE93F341F993856C2855CBAFE0FE35_inline(L_12, L_14, List_1_Add_m84ACE04AE0AE93F341F993856C2855CBAFE0FE35_RuntimeMethod_var);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0084:
	{
		int32_t L_16 = V_1;
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_17;
		L_17 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(__this, NULL);
		NullCheck(L_17);
		uint16_t L_18;
		L_18 = Header_get_QuestionCount_mFF9BD817E9E69BB27BB21345A82E2CBDFD8EAAC3_inline(L_17, NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_006f;
		}
	}
	{
		V_2 = 0;
		goto IL_00ab;
	}

IL_0096:
	{
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_19;
		L_19 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_20 = V_0;
		AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_21 = (AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A*)il2cpp_codegen_object_new(AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		AnswerRR__ctor_m0865AAB3228E396749DC0F3B13DA16115BBA6E06(L_21, L_20, NULL);
		NullCheck(L_19);
		List_1_Add_m7AA4C020C7C8896C7549A3FA563345C4EAC5D056_inline(L_19, L_21, List_1_Add_m7AA4C020C7C8896C7549A3FA563345C4EAC5D056_RuntimeMethod_var);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_00ab:
	{
		int32_t L_23 = V_2;
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_24;
		L_24 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(__this, NULL);
		NullCheck(L_24);
		uint16_t L_25;
		L_25 = Header_get_AnswerCount_m3314F95CEB725FDDB3A2749CF9A02B96E0E6852B_inline(L_24, NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_00d2;
	}

IL_00bd:
	{
		List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* L_26;
		L_26 = Response_get_Authorities_mA8B7731F453C68239CB2A98788550AEC6DCF701C_inline(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_27 = V_0;
		AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE* L_28 = (AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE*)il2cpp_codegen_object_new(AuthorityRR_tF4E16E1F443BE3D9B83D1FE87DF5C9FB56B967AE_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		AuthorityRR__ctor_m2A65510D6072BF251AF462AB0E8AA444670D74FF(L_28, L_27, NULL);
		NullCheck(L_26);
		List_1_Add_m688720220BDD1F27C6C02B9FFACC690771E38D50_inline(L_26, L_28, List_1_Add_m688720220BDD1F27C6C02B9FFACC690771E38D50_RuntimeMethod_var);
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00d2:
	{
		int32_t L_30 = V_3;
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_31;
		L_31 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(__this, NULL);
		NullCheck(L_31);
		uint16_t L_32;
		L_32 = Header_get_NameserverCount_mE194DACB72FD0B30E6680D5C4A463F1B6FD74DE0_inline(L_31, NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00bd;
		}
	}
	{
		V_4 = 0;
		goto IL_00fc;
	}

IL_00e5:
	{
		List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* L_33;
		L_33 = Response_get_Additionals_mDD10FE503E759BDE32BBCFDD05E383A2D3C9F52C_inline(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_34 = V_0;
		AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31* L_35 = (AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31*)il2cpp_codegen_object_new(AdditionalRR_t515601525D8D20833D3CCBCF019E5331C6A17F31_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		AdditionalRR__ctor_m2CC0D99EDEDE9B7F405BD76C506B744EC898A25F(L_35, L_34, NULL);
		NullCheck(L_33);
		List_1_Add_m34E6C8D84D6541410B2044C09958CE96FDFA9E21_inline(L_33, L_35, List_1_Add_m34E6C8D84D6541410B2044C09958CE96FDFA9E21_RuntimeMethod_var);
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00fc:
	{
		int32_t L_37 = V_4;
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_38;
		L_38 = Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline(__this, NULL);
		NullCheck(L_38);
		uint16_t L_39;
		L_39 = Header_get_AdditionalRecordsCount_m0AE102FB1EE9AA7D4CCB7BBA98AFF66A4A1867D4_inline(L_38, NULL);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_00e5;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Question> Ubiety.Dns.Core.Response::get_Questions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_0 = __this->___U3CQuestionsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.AnswerRR> Ubiety.Dns.Core.Response::get_Answers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_0 = __this->___U3CAnswersU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.AuthorityRR> Ubiety.Dns.Core.Response::get_Authorities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* Response_get_Authorities_mA8B7731F453C68239CB2A98788550AEC6DCF701C (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* L_0 = __this->___U3CAuthoritiesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.AdditionalRR> Ubiety.Dns.Core.Response::get_Additionals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* Response_get_Additionals_mDD10FE503E759BDE32BBCFDD05E383A2D3C9F52C (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* L_0 = __this->___U3CAdditionalsU3Ek__BackingField_3;
		return L_0;
	}
}
// Ubiety.Dns.Core.Header Ubiety.Dns.Core.Response::get_Header()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_0 = __this->___U3CHeaderU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Response::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Response_get_Error_mF0E4798163C35D548C913C1FA45C141F546B4F6A (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Response::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response_set_Error_m9D123C0A7BD42AC2CB338419742F7CB521B6EF3C (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Int32 Ubiety.Dns.Core.Response::get_MessageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Response_get_MessageSize_m5ED8C161771566135A1CC1C073414FB9938E167E (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMessageSizeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Response::set_MessageSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response_set_MessageSize_m31F390FF9AD7D9CC5A0FEE54B2FF8195A3859B17 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMessageSizeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.DateTime Ubiety.Dns.Core.Response::get_TimeStamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Response_get_TimeStamp_m218553F6622D9007F20DD10FC434ADD59658BF13 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CTimeStampU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Net.IPEndPoint Ubiety.Dns.Core.Response::get_Server()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* Response_get_Server_m95830BE0B4E749B2F8683334B28E634FDBC0E117 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0 = __this->___U3CServerU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.Mail.RecordMx> Ubiety.Dns.Core.Response::get_RecordMx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8* Response_get_RecordMx_m83A38459C312E9FA13C9881936E1FAFEE9DF5750 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m315B9B9DAF90078BFCF000A435C02095579FD125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m273C1D73A4320D918BF12DE431EC43F7D6FC9129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m708E25F3B690E9D4F008B65183E40449DED5172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* V_2 = NULL;
	{
		List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8* L_0 = (List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8*)il2cpp_codegen_object_new(List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m708E25F3B690E9D4F008B65183E40449DED5172F(L_0, List_1__ctor_m708E25F3B690E9D4F008B65183E40449DED5172F_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501*)IsInstSealed((RuntimeObject*)L_4, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501_il2cpp_TypeInfo_var));
				RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_5 = V_2;
				bool L_6;
				L_6 = RecordMx_op_Inequality_m2D70A65328FBA2227AE407A0FE39393C65479EDA(L_5, (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501*)NULL, NULL);
				if (!L_6)
				{
					goto IL_0036_1;
				}
			}
			{
				List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8* L_7 = V_0;
				RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_8 = V_2;
				NullCheck(L_7);
				List_1_Add_m315B9B9DAF90078BFCF000A435C02095579FD125_inline(L_7, L_8, List_1_Add_m315B9B9DAF90078BFCF000A435C02095579FD125_RuntimeMethod_var);
			}

IL_0036_1:
			{
				bool L_9;
				L_9 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8* L_10 = V_0;
		NullCheck(L_10);
		List_1_Sort_m273C1D73A4320D918BF12DE431EC43F7D6FC9129(L_10, List_1_Sort_m273C1D73A4320D918BF12DE431EC43F7D6FC9129_RuntimeMethod_var);
		List_1_t570FCEB475FCD76A5E8192E3F55412781BBC8FA8* L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordTxt> Ubiety.Dns.Core.Response::get_RecordTxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545* Response_get_RecordTxt_m926666219B7AD7370E03765CCF78DABC23A217B7 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2E0DD7B8625CC1E3B74BB2EA4EB0B24C30DD2A0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB88A162072C4AFF607B3A159454496EACD8B745E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05* V_2 = NULL;
	{
		List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545* L_0 = (List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545*)il2cpp_codegen_object_new(List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB88A162072C4AFF607B3A159454496EACD8B745E(L_0, List_1__ctor_mB88A162072C4AFF607B3A159454496EACD8B745E_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05*)IsInstClass((RuntimeObject*)L_4, RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05_il2cpp_TypeInfo_var));
				RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545* L_6 = V_0;
				RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05* L_7 = V_2;
				NullCheck(L_6);
				List_1_Add_m2E0DD7B8625CC1E3B74BB2EA4EB0B24C30DD2A0E_inline(L_6, L_7, List_1_Add_m2E0DD7B8625CC1E3B74BB2EA4EB0B24C30DD2A0E_RuntimeMethod_var);
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_t805416A16069E2AC3E21A942EAB9D4AD187F3545* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordA> Ubiety.Dns.Core.Response::get_RecordA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* Response_get_RecordA_mEDCCD9E5FE6EA820AA5C36017667D631B08E9126 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m64B1FB194CA750B584FA4C8DD4F1BAD3E9EE8BE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m675F55FB1106B811904EB04898254B3715A5D2E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* V_2 = NULL;
	{
		List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* L_0 = (List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726*)il2cpp_codegen_object_new(List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m675F55FB1106B811904EB04898254B3715A5D2E1(L_0, List_1__ctor_m675F55FB1106B811904EB04898254B3715A5D2E1_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2*)IsInstClass((RuntimeObject*)L_4, RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2_il2cpp_TypeInfo_var));
				RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* L_6 = V_0;
				RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* L_7 = V_2;
				NullCheck(L_6);
				List_1_Add_m64B1FB194CA750B584FA4C8DD4F1BAD3E9EE8BE1_inline(L_6, L_7, List_1_Add_m64B1FB194CA750B584FA4C8DD4F1BAD3E9EE8BE1_RuntimeMethod_var);
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_tA2BAD3F88166242A1BF778084BC53F48D1BE1726* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordPtr> Ubiety.Dns.Core.Response::get_RecordPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A* Response_get_RecordPtr_m856D09C99A32C06A646F5B14E28D5EB9028455EB (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCBB307584F2AFEC6E32C14DAB37A7B6A4470744E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCCFDAA2828FAAACC7F5996BCAF7B9D6E30B141B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* V_2 = NULL;
	{
		List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A* L_0 = (List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A*)il2cpp_codegen_object_new(List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCCFDAA2828FAAACC7F5996BCAF7B9D6E30B141B4(L_0, List_1__ctor_mCCFDAA2828FAAACC7F5996BCAF7B9D6E30B141B4_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED*)IsInstClass((RuntimeObject*)L_4, RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED_il2cpp_TypeInfo_var));
				RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A* L_6 = V_0;
				RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* L_7 = V_2;
				NullCheck(L_6);
				List_1_Add_mCBB307584F2AFEC6E32C14DAB37A7B6A4470744E_inline(L_6, L_7, List_1_Add_mCBB307584F2AFEC6E32C14DAB37A7B6A4470744E_RuntimeMethod_var);
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_t3D703AB6CB47533B0ACC7F6DF12061F1E9C4E62A* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordCname> Ubiety.Dns.Core.Response::get_RecordCname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t1612B1151B5A9B114CF74C46B4C409521857C084* Response_get_RecordCname_m0A1689217A80660A6EB25A89930296F098399C51 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m62C66C304021EB386A4FD3FBB913C2236BBB434B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5B922E54F6EF858550DC1EB6ECFDBD8E7D1109B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1612B1151B5A9B114CF74C46B4C409521857C084_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1612B1151B5A9B114CF74C46B4C409521857C084* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4* V_2 = NULL;
	{
		List_1_t1612B1151B5A9B114CF74C46B4C409521857C084* L_0 = (List_1_t1612B1151B5A9B114CF74C46B4C409521857C084*)il2cpp_codegen_object_new(List_1_t1612B1151B5A9B114CF74C46B4C409521857C084_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5B922E54F6EF858550DC1EB6ECFDBD8E7D1109B6(L_0, List_1__ctor_m5B922E54F6EF858550DC1EB6ECFDBD8E7D1109B6_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4*)IsInstClass((RuntimeObject*)L_4, RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4_il2cpp_TypeInfo_var));
				RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				List_1_t1612B1151B5A9B114CF74C46B4C409521857C084* L_6 = V_0;
				RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4* L_7 = V_2;
				NullCheck(L_6);
				List_1_Add_m62C66C304021EB386A4FD3FBB913C2236BBB434B_inline(L_6, L_7, List_1_Add_m62C66C304021EB386A4FD3FBB913C2236BBB434B_RuntimeMethod_var);
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_t1612B1151B5A9B114CF74C46B4C409521857C084* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.General.RecordAaaa> Ubiety.Dns.Core.Response::get_RecordAaaa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062* Response_get_RecordAaaa_m1FFCAAD88C6370512CA204CB59BB682522162132 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m06A9617EB4D63009E26557C1731A71D0213C171D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBA6D5A075A0C213D06968F01CC8A4E9EC7A3554B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D* V_2 = NULL;
	{
		List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062* L_0 = (List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062*)il2cpp_codegen_object_new(List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBA6D5A075A0C213D06968F01CC8A4E9EC7A3554B(L_0, List_1__ctor_mBA6D5A075A0C213D06968F01CC8A4E9EC7A3554B_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D*)IsInstClass((RuntimeObject*)L_4, RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D_il2cpp_TypeInfo_var));
				RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062* L_6 = V_0;
				RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D* L_7 = V_2;
				NullCheck(L_6);
				List_1_Add_m06A9617EB4D63009E26557C1731A71D0213C171D_inline(L_6, L_7, List_1_Add_m06A9617EB4D63009E26557C1731A71D0213C171D_RuntimeMethod_var);
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_tE8E7A6FC2856D3D9FC73AF53105F5EFD3AC4D062* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordNs> Ubiety.Dns.Core.Response::get_RecordNs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48* Response_get_RecordNs_m217ACA847CD6D05A8D773C665B36A53BDA2BD2C6 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m23FF88CC78527D315CC8E3AD4A204B07DE3A8F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD63838FF7D84749378BA9DDDC39CF4D2883948E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* V_2 = NULL;
	{
		List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48* L_0 = (List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48*)il2cpp_codegen_object_new(List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD63838FF7D84749378BA9DDDC39CF4D2883948E6(L_0, List_1__ctor_mD63838FF7D84749378BA9DDDC39CF4D2883948E6_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7*)IsInstClass((RuntimeObject*)L_4, RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7_il2cpp_TypeInfo_var));
				RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48* L_6 = V_0;
				RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* L_7 = V_2;
				NullCheck(L_6);
				List_1_Add_m23FF88CC78527D315CC8E3AD4A204B07DE3A8F56_inline(L_6, L_7, List_1_Add_m23FF88CC78527D315CC8E3AD4A204B07DE3A8F56_RuntimeMethod_var);
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_tE89143A1A041666D756D5DB9562E5DA22EC46A48* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSoa> Ubiety.Dns.Core.Response::get_RecordSoa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A* Response_get_RecordSoa_mADCA27E478C835646E2DA71AAD83002802A633CA (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC6416D24BD5D3DBF5DAEF6AA050C4B0E24D5EE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAE605FC0B9F813EB2B0CEBEB460B4651BB1910CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* V_2 = NULL;
	{
		List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A* L_0 = (List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A*)il2cpp_codegen_object_new(List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mAE605FC0B9F813EB2B0CEBEB460B4651BB1910CD(L_0, List_1__ctor_mAE605FC0B9F813EB2B0CEBEB460B4651BB1910CD_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E*)IsInstClass((RuntimeObject*)L_4, RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E_il2cpp_TypeInfo_var));
				RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A* L_6 = V_0;
				RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* L_7 = V_2;
				NullCheck(L_6);
				List_1_Add_mC6416D24BD5D3DBF5DAEF6AA050C4B0E24D5EE1F_inline(L_6, L_7, List_1_Add_mC6416D24BD5D3DBF5DAEF6AA050C4B0E24D5EE1F_RuntimeMethod_var);
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_t8F8D94D2A30BC5152860A8AABF5DF604CE49E53A* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordCert> Ubiety.Dns.Core.Response::get_RecordCert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F* Response_get_RecordCert_m1765A1F5BDBB451EEEA2F8F9A37C22C6E05ADA89 (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8CB6B6997A921B8DDAD8945D5C4DAAC2DBDEB281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99273F06E3901F8C400AF575A448679B049A7729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* V_2 = NULL;
	{
		List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F* L_0 = (List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F*)il2cpp_codegen_object_new(List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m99273F06E3901F8C400AF575A448679B049A7729(L_0, List_1__ctor_m99273F06E3901F8C400AF575A448679B049A7729_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A*)IsInstClass((RuntimeObject*)L_4, RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A_il2cpp_TypeInfo_var));
				RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F* L_6 = V_0;
				RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* L_7 = V_2;
				NullCheck(L_6);
				List_1_Add_m8CB6B6997A921B8DDAD8945D5C4DAAC2DBDEB281_inline(L_6, L_7, List_1_Add_m8CB6B6997A921B8DDAD8945D5C4DAAC2DBDEB281_RuntimeMethod_var);
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_tE56DFE7A398EFEABD91547E7F1E67727F3297C5F* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.List`1<Ubiety.Dns.Core.Records.RecordSrv> Ubiety.Dns.Core.Response::get_RecordSrv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A* Response_get_RecordSrv_mDE06A1D4DBE2FA47E98BACBE6243C64E1A83869F (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E86DB3A01A9781DC6761E93119E4F3634F6E786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m56FEC16E9BDC725C0EDCF20D91D829B3DB546BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A* V_0 = NULL;
	Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* V_2 = NULL;
	{
		List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A* L_0 = (List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A*)il2cpp_codegen_object_new(List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m56FEC16E9BDC725C0EDCF20D91D829B3DB546BF4(L_0, List_1__ctor_m56FEC16E9BDC725C0EDCF20D91D829B3DB546BF4_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_1;
		L_1 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tF2D86BACB7819A020DE901E19E5C3AC483BEA525 L_2;
		L_2 = List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F(L_1, List_1_GetEnumerator_mCBA109C01BCB77EC4600576A70BBB9A523BB716F_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0((&V_1), Enumerator_Dispose_mECBE774AF5FDA5457248F4FED13D13FD389F94D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0014_1:
			{
				AnswerRR_tA68F18776EB62DFA4C131E7E9E421CADBBB7EA2A* L_3;
				L_3 = Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_inline((&V_1), Enumerator_get_Current_m50F05BF0A68015F3D3CB21C83228B039D0DEAC34_RuntimeMethod_var);
				NullCheck(L_3);
				Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_4;
				L_4 = ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline(L_3, NULL);
				V_2 = ((RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D*)IsInstClass((RuntimeObject*)L_4, RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D_il2cpp_TypeInfo_var));
				RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A* L_6 = V_0;
				RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* L_7 = V_2;
				NullCheck(L_6);
				List_1_Add_m4E86DB3A01A9781DC6761E93119E4F3634F6E786_inline(L_6, L_7, List_1_Add_m4E86DB3A01A9781DC6761E93119E4F3634F6E786_RuntimeMethod_var);
			}

IL_0030_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000((&V_1), Enumerator_MoveNext_m1DECD4FA859DE24754E7C553C3FA6FFBC9413000_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		List_1_tD0DD5027C71BE6A36F544DA153DF28898664E03A* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.IEnumerable`1<Ubiety.Dns.Core.ResourceRecord> Ubiety.Dns.Core.Response::get_ResourceRecords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Response_get_ResourceRecords_m3C98EAC31DFB93A3210A6B2619C87E206D8A2ADC (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_m89FCDA0E95DD127951ADE66F47D441DCC671AC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_mFBBB94D8198133929093CAAA45E9844F85CDFA08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m3D42627D41F555C8ED0B287F329C4EC06F160BDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_0;
		L_0 = Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline(__this, NULL);
		RuntimeObject* L_1;
		L_1 = Enumerable_Cast_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_m89FCDA0E95DD127951ADE66F47D441DCC671AC9B(L_0, Enumerable_Cast_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_m89FCDA0E95DD127951ADE66F47D441DCC671AC9B_RuntimeMethod_var);
		List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0* L_2;
		L_2 = Enumerable_ToList_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_mFBBB94D8198133929093CAAA45E9844F85CDFA08(L_1, Enumerable_ToList_TisResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E_mFBBB94D8198133929093CAAA45E9844F85CDFA08_RuntimeMethod_var);
		List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0* L_3 = L_2;
		List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* L_4;
		L_4 = Response_get_Authorities_mA8B7731F453C68239CB2A98788550AEC6DCF701C_inline(__this, NULL);
		NullCheck(L_3);
		List_1_AddRange_m3D42627D41F555C8ED0B287F329C4EC06F160BDB(L_3, L_4, List_1_AddRange_m3D42627D41F555C8ED0B287F329C4EC06F160BDB_RuntimeMethod_var);
		List_1_t08182E0927BE2CCE3FC9272AB47821D98C5D94A0* L_5 = L_3;
		List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* L_6;
		L_6 = Response_get_Additionals_mDD10FE503E759BDE32BBCFDD05E383A2D3C9F52C_inline(__this, NULL);
		NullCheck(L_5);
		List_1_AddRange_m3D42627D41F555C8ED0B287F329C4EC06F160BDB(L_5, L_6, List_1_AddRange_m3D42627D41F555C8ED0B287F329C4EC06F160BDB_RuntimeMethod_var);
		return L_5;
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
// System.Void Ubiety.Dns.Core.Records.Record::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178 (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Ubiety.Dns.Core.Records.Record::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0 (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_reader;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m750F87891DBE43C75F451616DF7EF8E022BB7CFF(L_0, ((int32_t)-2), NULL);
		V_0 = L_1;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_reader;
		uint16_t L_3 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_2, L_3, NULL);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_5 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_5, (RuntimeObject*)L_4, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		__this->___U3CRecordDataU3Ek__BackingField_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRecordDataU3Ek__BackingField_0), (void*)L_5);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.Record::get_RecordData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* Record_get_RecordData_mE4650114C9D629CCCB4A94C3E03C531D5EE2747D (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = __this->___U3CRecordDataU3Ek__BackingField_0;
		return L_0;
	}
}
// Ubiety.Dns.Core.ResourceRecord Ubiety.Dns.Core.Records.Record::get_ResourceRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* Record_get_ResourceRecord_mF9198D256F6A1EBB24E8C951BF01FC653AAFF070 (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, const RuntimeMethod* method) 
{
	{
		ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* L_0 = __this->___U3CResourceRecordU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.Record::set_ResourceRecord(Ubiety.Dns.Core.ResourceRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_set_ResourceRecord_mEE6745C1DC7DC1CF1F9F66FA14AA9D079EAAD468 (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* ___0_value, const RuntimeMethod* method) 
{
	{
		ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* L_0 = ___0_value;
		__this->___U3CResourceRecordU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResourceRecordU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Record::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Record_ToString_m7E298B18DECDAFD49C85A88B2C29C3A365FBB5BC (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CEAE51AB019439E0F01B10EE0E282E07402B5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralD5CEAE51AB019439E0F01B10EE0E282E07402B5D, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordAfsdb::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordAfsdb__ctor_m8E83E20172FB614720BD159ED41205253CBE421E (RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		__this->___U3CSubTypeU3Ek__BackingField_2 = L_1;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_2, NULL);
		__this->___U3CHostnameU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHostnameU3Ek__BackingField_3), (void*)L_3);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordAfsdb::get_SubType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordAfsdb_get_SubType_mEDDFAF0FA0E75E628099A72D6EE2518F445E44DE (RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CSubTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordAfsdb::get_Hostname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordAfsdb_get_Hostname_m1B69A236F4BF229FEB4461A4123ADE8DA975CC2E (RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CHostnameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordAfsdb::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordAfsdb_ToString_mB11BCC85BD101BF7DCE3CB0569FEF0E4DC37C6AC (RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = RecordAfsdb_get_SubType_mEDDFAF0FA0E75E628099A72D6EE2518F445E44DE_inline(__this, NULL);
		uint16_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = RecordAfsdb_get_Hostname_m1B69A236F4BF229FEB4461A4123ADE8DA975CC2E_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_2, L_3, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordCert::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordCert__ctor_mCCE8CFDEBF463E4356974A359E9629C813A58E54 (RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m750F87891DBE43C75F451616DF7EF8E022BB7CFF(L_0, ((int32_t)-2), NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_2, NULL);
		__this->___U3CTypeU3Ek__BackingField_3 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_4, NULL);
		__this->___U3CKeyTagU3Ek__BackingField_4 = L_5;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_6, NULL);
		__this->___U3CAlgorithmU3Ek__BackingField_5 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 5));
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_8 = ___0_rr;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_8, L_9, NULL);
		__this->____rawKey_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rawKey_2), (void*)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____rawKey_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_11, NULL);
		__this->___U3CPublicKeyU3Ek__BackingField_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyU3Ek__BackingField_6), (void*)L_12);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordCert::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordCert_get_Type_m5B0EFAF0FEF5DF49111FA381A29980360CB4550D (RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CTypeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordCert::get_KeyTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordCert_get_KeyTag_m1F8993E2AEFF200FA776935688ECC07484856342 (RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CKeyTagU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordCert::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordCert_get_Algorithm_m0E5564B5F608F52484BD046AC064755F970B8022 (RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CAlgorithmU3Ek__BackingField_5;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordCert::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordCert_get_PublicKey_m1955A60027E379C6B9D0EBF2D0B190E74EE99389 (RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.RecordCert::get_RawKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* RecordCert_get_RawKey_m4E465186BDD7DA2B2D7CB1F492C150E8F23DB84E (RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____rawKey_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_1, (RuntimeObject*)L_0, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordCert::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordCert_ToString_m8B317899EEA3305B11D213FAAF96D11295FA12C9 (RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordCert_get_PublicKey_m1955A60027E379C6B9D0EBF2D0B190E74EE99389_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordDname::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordDname__ctor_m73D92AD98D3FD1062D87DD500590CBF31A4DEC8C (RecordDname_t726AC7580CCFCFA272A2B663E07FC8490E46FA73* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CTargetU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_2), (void*)L_1);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordDname::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordDname_get_Target_m4E33640889120EFDA2819929961EE4733DD63D4C (RecordDname_t726AC7580CCFCFA272A2B663E07FC8490E46FA73* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordDname::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordDname_ToString_m05E2B0799940E1F8D96AE0F288A60A34087A80B0 (RecordDname_t726AC7580CCFCFA272A2B663E07FC8490E46FA73* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordDname_get_Target_m4E33640889120EFDA2819929961EE4733DD63D4C_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordDs::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordDs__ctor_m4038B898F400EE97E3B1CC56EF1F2F29D4A66B95 (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m750F87891DBE43C75F451616DF7EF8E022BB7CFF(L_0, ((int32_t)-2), NULL);
		V_0 = L_1;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_2, NULL);
		__this->___U3CKeyTagU3Ek__BackingField_3 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_4, NULL);
		__this->___U3CAlgorithmU3Ek__BackingField_4 = L_5;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_6, NULL);
		__this->___U3CDigestTypeU3Ek__BackingField_5 = L_7;
		uint16_t L_8 = V_0;
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 4)));
		uint16_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->____digest_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____digest_2), (void*)L_10);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_11 = ___0_rr;
		uint16_t L_12 = V_0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_11, L_12, NULL);
		__this->____digest_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____digest_2), (void*)L_13);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordDs::get_KeyTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordDs_get_KeyTag_mBD0B4A18F9DBF0205DE146AD0D0289310C91985A (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CKeyTagU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordDs::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordDs_get_Algorithm_m560F1D84FD2C2F5623214A4218C472DD71230BD9 (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CAlgorithmU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordDs::get_DigestType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordDs_get_DigestType_m170E7BBF50A235623A82A65CDE5B0F3216448AAA (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CDigestTypeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.RecordDs::get_Digest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* RecordDs_get_Digest_m020743C8FA3F0B038CA0ECD730FACB363279D08F (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____digest_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_1, (RuntimeObject*)L_0, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordDs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordDs_ToString_mCE4291F3F2CD44C6B939B5917A6A90312055A325 (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975CEACAD0FAD15E6E69CB64C63BA7209214FA24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA50032ABA89DA7BE8C770D4421FE7B63B9B4DE7F);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____digest_2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0039;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		StringBuilder_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		uint8_t L_10 = V_3;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		NullCheck(L_6);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B(L_6, L_7, _stringLiteralA50032ABA89DA7BE8C770D4421FE7B63B9B4DE7F, L_9, NULL);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0039:
	{
		int32_t L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		uint16_t L_19;
		L_19 = RecordDs_get_KeyTag_mBD0B4A18F9DBF0205DE146AD0D0289310C91985A_inline(__this, NULL);
		uint16_t L_20 = L_19;
		RuntimeObject* L_21 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_18;
		uint8_t L_23;
		L_23 = RecordDs_get_Algorithm_m560F1D84FD2C2F5623214A4218C472DD71230BD9_inline(__this, NULL);
		uint8_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_22;
		uint8_t L_27;
		L_27 = RecordDs_get_DigestType_m170E7BBF50A235623A82A65CDE5B0F3216448AAA_inline(__this, NULL);
		uint8_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_26;
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_31);
		String_t* L_32;
		L_32 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral975CEACAD0FAD15E6E69CB64C63BA7209214FA24, L_30, NULL);
		return L_32;
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
// System.Void Ubiety.Dns.Core.Records.RecordHinfo::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordHinfo__ctor_m951611A3D12479627559BB45C34094201F07E88B (RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_0, NULL);
		__this->___U3CCpuU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCpuU3Ek__BackingField_2), (void*)L_1);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_2, NULL);
		__this->___U3COsU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsU3Ek__BackingField_3), (void*)L_3);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordHinfo::get_Cpu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordHinfo_get_Cpu_mDBCF03D423E514B9C5326249777D054587652CD8 (RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCpuU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordHinfo::get_Os()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordHinfo_get_Os_mDB238BD2D7F7529DD01F2439BDD7AAB3E09E0B86 (RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordHinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordHinfo_ToString_m8AB55C765E32D54790C706F478C4436539036A32 (RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59AEDFB22B813BFFE660E7FD814AFAEA6790EE67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E546430E6FBD81D74E47EDAC1453E794CC3453B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = RecordHinfo_get_Cpu_mDBCF03D423E514B9C5326249777D054587652CD8_inline(__this, NULL);
		String_t* L_1;
		L_1 = RecordHinfo_get_Os_mDB238BD2D7F7529DD01F2439BDD7AAB3E09E0B86_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral7E546430E6FBD81D74E47EDAC1453E794CC3453B, L_0, _stringLiteral59AEDFB22B813BFFE660E7FD814AFAEA6790EE67, L_1, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordIsdn::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordIsdn__ctor_m2E827975CD235005DDA9D3F5DADF5EEE79B0236E (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_0, NULL);
		RecordIsdn_set_IsdnAddress_mE08DEE84026DF64004B0CF66ED0C3FC5A44443F0_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_2, NULL);
		RecordIsdn_set_SA_mC43D9F374C4EF8193FF06C0DF1E45D5479E43831_inline(__this, L_3, NULL);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordIsdn::get_IsdnAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordIsdn_get_IsdnAddress_m0D23039B490B0E59676199A113CC5FE9DA6477BA (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIsdnAddressU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordIsdn::set_IsdnAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordIsdn_set_IsdnAddress_mE08DEE84026DF64004B0CF66ED0C3FC5A44443F0 (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CIsdnAddressU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIsdnAddressU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordIsdn::get_SA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordIsdn_get_SA_mE79C5CBA3B1373200D253AAFCB838318329512A0 (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSAU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordIsdn::set_SA(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordIsdn_set_SA_mC43D9F374C4EF8193FF06C0DF1E45D5479E43831 (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSAU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSAU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordIsdn::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordIsdn_ToString_m20C6D603FC745620DC51A9AF6084E370E9DE3759 (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = RecordIsdn_get_IsdnAddress_m0D23039B490B0E59676199A113CC5FE9DA6477BA_inline(__this, NULL);
		String_t* L_1;
		L_1 = RecordIsdn_get_SA_mE79C5CBA3B1373200D253AAFCB838318329512A0_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_1, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordKey::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordKey__ctor_mF091C348F4EA6CCD9749E2159DBF5B1D8543CB42 (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		RecordKey_set_Flags_m6998C9DE9250B2044515375D3E3C50C52AD4AC19_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_2, NULL);
		RecordKey_set_Protocol_m892EC433FAAB36359557691764AE7C991FE1C6B1_inline(__this, L_3, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_4, NULL);
		RecordKey_set_Algorithm_mB1AF881A8EB1372C069DD03574CDC3C8BDB42543_inline(__this, L_5, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_6, NULL);
		RecordKey_set_PublicKey_m2352F238D7CE5B7EA39FDC72433AC74A18CFDD34_inline(__this, L_7, NULL);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordKey::get_Flags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordKey_get_Flags_m19ACB7FA5582FC4C6086584060C04451A81B199A (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CFlagsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordKey::set_Flags(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordKey_set_Flags_m6998C9DE9250B2044515375D3E3C50C52AD4AC19 (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CFlagsU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordKey::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordKey_get_Protocol_mC9C913A03BCC7F7CA7CB489C149582DED63DC12C (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CProtocolU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordKey::set_Protocol(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordKey_set_Protocol_m892EC433FAAB36359557691764AE7C991FE1C6B1 (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordKey::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordKey_get_Algorithm_mC21D23B4B784D41C4CB2BF981CF2981572D28F52 (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CAlgorithmU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordKey::set_Algorithm(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordKey_set_Algorithm_mB1AF881A8EB1372C069DD03574CDC3C8BDB42543 (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CAlgorithmU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordKey::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordKey_get_PublicKey_m3CD0D3B66B9C6EAF9ED3EB10E9E26AE31C7A1C72 (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordKey::set_PublicKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordKey_set_PublicKey_m2352F238D7CE5B7EA39FDC72433AC74A18CFDD34 (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPublicKeyU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordKey::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordKey_ToString_mDFE70C6F81194B6C2F940E7A9CE13FE76E5DBE2F (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FCFF02564802E21DA221E46540BA58E4A91653A);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint16_t L_2;
		L_2 = RecordKey_get_Flags_m19ACB7FA5582FC4C6086584060C04451A81B199A_inline(__this, NULL);
		uint16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		uint8_t L_6;
		L_6 = RecordKey_get_Protocol_mC9C913A03BCC7F7CA7CB489C149582DED63DC12C_inline(__this, NULL);
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10;
		L_10 = RecordKey_get_Algorithm_mC21D23B4B784D41C4CB2BF981CF2981572D28F52_inline(__this, NULL);
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		String_t* L_14;
		L_14 = RecordKey_get_PublicKey_m3CD0D3B66B9C6EAF9ED3EB10E9E26AE31C7A1C72_inline(__this, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral4FCFF02564802E21DA221E46540BA58E4A91653A, L_13, NULL);
		return L_15;
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
// System.Void Ubiety.Dns.Core.Records.RecordKx::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordKx__ctor_mAA446FC1C732E508BFA19FB1D377775644C9188B (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		__this->___U3CPreferenceU3Ek__BackingField_2 = L_1;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_2, NULL);
		__this->___U3CExchangerU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExchangerU3Ek__BackingField_3), (void*)L_3);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordKx::get_Preference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordKx_get_Preference_m01404544D5C6BAA367E9B95D0521428BE318DE51 (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordKx::get_Exchanger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordKx_get_Exchanger_m7C16A546DA553CF40F18CB4C51A648553AFA4A8E (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CExchangerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::op_LessThan(Ubiety.Dns.Core.Records.RecordKx,Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_op_LessThan_m95B37C7064B1318723982350D92F00E5C9587D39 (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_x, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_0 = ___0_x;
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordKx_CompareTo_m574F8143FB3DECFAD2622E5110DC55487CBBD7DC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::op_GreaterThan(Ubiety.Dns.Core.Records.RecordKx,Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_op_GreaterThan_mC0C9E27BE84121D36DEDCDA4796D78734A94159A (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_x, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_0 = ___0_x;
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordKx_CompareTo_m574F8143FB3DECFAD2622E5110DC55487CBBD7DC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::op_LessThanOrEqual(Ubiety.Dns.Core.Records.RecordKx,Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_op_LessThanOrEqual_m4BE365F730510B9D377AE67E57133D0FC13C20DB (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_x, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_0 = ___0_x;
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordKx_CompareTo_m574F8143FB3DECFAD2622E5110DC55487CBBD7DC(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::op_GreaterThanOrEqual(Ubiety.Dns.Core.Records.RecordKx,Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_op_GreaterThanOrEqual_m09BBB481BB64265750EA79EE434C0C9DDED079F0 (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_x, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_0 = ___0_x;
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordKx_CompareTo_m574F8143FB3DECFAD2622E5110DC55487CBBD7DC(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::op_Equality(Ubiety.Dns.Core.Records.RecordKx,Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_op_Equality_m890D050FC89F9F20F062F21A392180875DD723CF (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_x, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_0 = ___0_x;
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordKx_CompareTo_m574F8143FB3DECFAD2622E5110DC55487CBBD7DC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::op_Inequality(Ubiety.Dns.Core.Records.RecordKx,Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_op_Inequality_mEFF981C40ABF4014DFE092AFBD5FBEAE0A4C5A39 (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_x, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_0 = ___0_x;
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordKx_CompareTo_m574F8143FB3DECFAD2622E5110DC55487CBBD7DC(L_0, L_1, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Int32 Ubiety.Dns.Core.Records.RecordKx::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordKx_CompareTo_mD1DC93B383F221BE6F2FA90F0E45D3A4C769FFD6 (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		int32_t L_1;
		L_1 = RecordKx_CompareTo_m574F8143FB3DECFAD2622E5110DC55487CBBD7DC(__this, ((RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2*)CastclassSealed((RuntimeObject*)L_0, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::Equals(Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_Equals_m98D7221FCB571CCEE38D2842F8023AC9F124B942 (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_other, const RuntimeMethod* method) 
{
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_0 = ___0_other;
		bool L_1;
		L_1 = RecordKx_op_Equality_m890D050FC89F9F20F062F21A392180875DD723CF(L_0, (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_2 = ___0_other;
		int32_t L_3;
		L_3 = RecordKx_CompareTo_mD1DC93B383F221BE6F2FA90F0E45D3A4C769FFD6(__this, L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Ubiety.Dns.Core.Records.RecordKx::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordKx_ToString_m427A01E19F179FD222C1EB6D6E5E6BF50263687F (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = RecordKx_get_Preference_m01404544D5C6BAA367E9B95D0521428BE318DE51_inline(__this, NULL);
		uint16_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = RecordKx_get_Exchanger_m7C16A546DA553CF40F18CB4C51A648553AFA4A8E_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Ubiety.Dns.Core.Records.RecordKx::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordKx_Equals_mA4E8E2AB51CAAD9EB31710705CE8638B5630203D (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
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
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		RuntimeObject* L_5 = ___0_obj;
		if ((((RuntimeObject*)(RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2*)__this) == ((RuntimeObject*)(RuntimeObject*)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = RecordKx_Equals_m98D7221FCB571CCEE38D2842F8023AC9F124B942(__this, ((RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2*)IsInstSealed((RuntimeObject*)L_6, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)1;
	}
}
// System.Int32 Ubiety.Dns.Core.Records.RecordKx::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordKx_GetHashCode_mEBF50C87B2516E9BB155360D57E43CDF4AB39F59 (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		uint16_t L_0;
		L_0 = RecordKx_get_Preference_m01404544D5C6BAA367E9B95D0521428BE318DE51_inline(__this, NULL);
		String_t* L_1;
		L_1 = RecordKx_get_Exchanger_m7C16A546DA553CF40F18CB4C51A648553AFA4A8E_inline(__this, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		G_B1_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)13), ((int32_t)397)))^(int32_t)L_0));
		if (!L_2)
		{
			G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)13), ((int32_t)397)))^(int32_t)L_0));
			goto IL_001f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_001f:
	{
		String_t* L_3;
		L_3 = RecordKx_get_Exchanger_m7C16A546DA553CF40F18CB4C51A648553AFA4A8E_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		V_0 = G_B3_0;
		int32_t L_5 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(G_B3_1, ((int32_t)397)))^L_5));
	}
}
// System.Int32 Ubiety.Dns.Core.Records.RecordKx::CompareTo(Ubiety.Dns.Core.Records.RecordKx,Ubiety.Dns.Core.Records.RecordKx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordKx_CompareTo_m574F8143FB3DECFAD2622E5110DC55487CBBD7DC (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___0_x, RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_0 = ___1_y;
		bool L_1;
		L_1 = RecordKx_op_Equality_m890D050FC89F9F20F062F21A392180875DD723CF(L_0, (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_2 = ___0_x;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = RecordKx_get_Preference_m01404544D5C6BAA367E9B95D0521428BE318DE51_inline(L_2, NULL);
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_4 = ___1_y;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = RecordKx_get_Preference_m01404544D5C6BAA367E9B95D0521428BE318DE51_inline(L_4, NULL);
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_6 = ___0_x;
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = RecordKx_get_Preference_m01404544D5C6BAA367E9B95D0521428BE318DE51_inline(L_6, NULL);
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_8 = ___1_y;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = RecordKx_get_Preference_m01404544D5C6BAA367E9B95D0521428BE318DE51_inline(L_8, NULL);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_002b;
		}
	}
	{
		return (-1);
	}

IL_002b:
	{
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_10 = ___0_x;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = RecordKx_get_Exchanger_m7C16A546DA553CF40F18CB4C51A648553AFA4A8E_inline(L_10, NULL);
		RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* L_12 = ___1_y;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = RecordKx_get_Exchanger_m7C16A546DA553CF40F18CB4C51A648553AFA4A8E_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_15;
		L_15 = String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9(L_11, L_13, (bool)1, L_14, NULL);
		return L_15;
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
// System.Void Ubiety.Dns.Core.Records.RecordLoc::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordLoc__ctor_m3C9268302E5A09DFFD6F7A0D66774FA51011BAB1 (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_0, NULL);
		__this->___U3CVersionU3Ek__BackingField_2 = L_1;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_2, NULL);
		__this->___U3CSizeU3Ek__BackingField_3 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_4, NULL);
		__this->___U3CHorizontalPrecisionU3Ek__BackingField_4 = L_5;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_6, NULL);
		__this->___U3CVerticalPrecisionU3Ek__BackingField_5 = L_7;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_8 = ___0_rr;
		NullCheck(L_8);
		uint32_t L_9;
		L_9 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_8, NULL);
		__this->___U3CLatitudeU3Ek__BackingField_6 = L_9;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = ___0_rr;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_10, NULL);
		__this->___U3CLongitudeU3Ek__BackingField_7 = L_11;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_12 = ___0_rr;
		NullCheck(L_12);
		uint32_t L_13;
		L_13 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_12, NULL);
		__this->___U3CAltitudeU3Ek__BackingField_8 = L_13;
		return;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordLoc::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_Version_mF7CDC78D6CB04FD0C28ED0FDC4C9CE88A734CF7D (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CVersionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordLoc::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_Size_m6B0EBBB9B76BFD714BC75909951374470C86ADFD (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CSizeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordLoc::get_HorizontalPrecision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_HorizontalPrecision_mEAD4CCC803CBD60202E9F9C2054AA48887F40602 (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CHorizontalPrecisionU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordLoc::get_VerticalPrecision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_VerticalPrecision_mBE6E243AAC6F6BABDA481F7F0807386D17249BE1 (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CVerticalPrecisionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordLoc::get_Latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordLoc_get_Latitude_m3564B63357DCC2E7381983EAF005D9BB39F04783 (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CLatitudeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordLoc::get_Longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordLoc_get_Longitude_m4BEF8538F63E3217E050FCC2866514079F6F3343 (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CLongitudeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordLoc::get_Altitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordLoc_get_Altitude_m3FA405BAE7100DBB1C4A91918D45D6DD6574ACCD (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CAltitudeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordLoc::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordLoc_ToString_mC3BA1AF6280ECC2734E8C75BED8DED0F4ACCC288 (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0429DCAEF2DE8DA49F4296A2209EB18888A1DBC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		uint32_t L_3;
		L_3 = RecordLoc_get_Latitude_m3564B63357DCC2E7381983EAF005D9BB39F04783_inline(__this, NULL);
		String_t* L_4;
		L_4 = RecordLoc_ToTime_m4B5A42977888036D528CB76C5FF8B8C4CCCACBF4(L_3, ((int32_t)83), ((int32_t)78), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_2;
		uint32_t L_6;
		L_6 = RecordLoc_get_Longitude_m4BEF8538F63E3217E050FCC2866514079F6F3343_inline(__this, NULL);
		String_t* L_7;
		L_7 = RecordLoc_ToTime_m4B5A42977888036D528CB76C5FF8B8C4CCCACBF4(L_6, ((int32_t)87), ((int32_t)69), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		uint32_t L_9;
		L_9 = RecordLoc_get_Altitude_m3FA405BAE7100DBB1C4A91918D45D6DD6574ACCD_inline(__this, NULL);
		String_t* L_10;
		L_10 = RecordLoc_ToAlt_m27DE395F59E5CDA8820EAB6867C7A0D51D057FA4(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		uint8_t L_12;
		L_12 = RecordLoc_get_Size_m6B0EBBB9B76BFD714BC75909951374470C86ADFD_inline(__this, NULL);
		String_t* L_13;
		L_13 = RecordLoc_SizeToString_m395689EA59031C6A4272C31044824802D2D0D713(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		uint8_t L_15;
		L_15 = RecordLoc_get_HorizontalPrecision_mEAD4CCC803CBD60202E9F9C2054AA48887F40602_inline(__this, NULL);
		String_t* L_16;
		L_16 = RecordLoc_SizeToString_m395689EA59031C6A4272C31044824802D2D0D713(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		uint8_t L_18;
		L_18 = RecordLoc_get_VerticalPrecision_mBE6E243AAC6F6BABDA481F7F0807386D17249BE1_inline(__this, NULL);
		String_t* L_19;
		L_19 = RecordLoc_SizeToString_m395689EA59031C6A4272C31044824802D2D0D713(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral0429DCAEF2DE8DA49F4296A2209EB18888A1DBC8, L_17, NULL);
		return L_20;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordLoc::ToAlt(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordLoc_ToAlt_m27DE395F59E5CDA8820EAB6867C7A0D51D057FA4 (uint32_t ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2381F188111328278560DCCEECC70F86539CB6E5);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		uint32_t L_0 = ___0_a;
		V_0 = ((double)il2cpp_codegen_subtract(((double)(((double)((double)(uint32_t)L_0))/(100.0))), (100000.0)));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		double L_4 = V_0;
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_1, _stringLiteral2381F188111328278560DCCEECC70F86539CB6E5, L_3, NULL);
		return L_7;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordLoc::SizeToString(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordLoc_SizeToString_m395689EA59031C6A4272C31044824802D2D0D713 (uint8_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral858FD3C8BD790C7AE9648241681753040AAA353E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringBuilder_t* V_3 = NULL;
	{
		V_0 = _stringLiteral858FD3C8BD790C7AE9648241681753040AAA353E;
		uint8_t L_0 = ___0_size;
		V_1 = ((int32_t)((int32_t)L_0>>4));
		uint8_t L_1 = ___0_size;
		V_2 = ((int32_t)((int32_t)L_1&((int32_t)15)));
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_3, 2));
		V_0 = _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
	}

IL_001d:
	{
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		V_3 = L_4;
		StringBuilder_t* L_5 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		NullCheck(L_5);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B(L_5, L_6, _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_8, NULL);
		goto IL_0052;
	}

IL_0045:
	{
		StringBuilder_t* L_13 = V_3;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)48), NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0052:
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		StringBuilder_t* L_17 = V_3;
		String_t* L_18 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_18, NULL);
		StringBuilder_t* L_20 = V_3;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordLoc::ToTime(System.UInt32,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordLoc_ToTime_m4B5A42977888036D528CB76C5FF8B8C4CCCACBF4 (uint32_t ___0_r, Il2CppChar ___1_below, Il2CppChar ___2_above, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D8D46E9E5E1DD10B339E51306174B9818FDD238);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	{
		V_0 = ((int32_t)-2147483648LL);
		uint32_t L_0 = ___0_r;
		uint32_t L_1 = V_0;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_2 = ___2_above;
		V_1 = L_2;
		uint32_t L_3 = ___0_r;
		uint32_t L_4 = V_0;
		___0_r = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4));
		goto IL_001a;
	}

IL_0013:
	{
		Il2CppChar L_5 = ___1_below;
		V_1 = L_5;
		uint32_t L_6 = V_0;
		uint32_t L_7 = ___0_r;
		___0_r = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
	}

IL_001a:
	{
		uint32_t L_8 = ___0_r;
		V_2 = ((double)(((double)((double)(uint32_t)L_8))/(3600000.0)));
		double L_9 = V_2;
		double L_10 = V_2;
		V_3 = ((double)il2cpp_codegen_multiply((60.0), ((double)il2cpp_codegen_subtract(L_9, ((double)il2cpp_codegen_cast_double_to_int<int32_t>(L_10))))));
		double L_11 = V_3;
		double L_12 = V_3;
		V_4 = ((double)il2cpp_codegen_multiply((60.0), ((double)il2cpp_codegen_subtract(L_11, ((double)il2cpp_codegen_cast_double_to_int<int32_t>(L_12))))));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13;
		L_13 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		double L_16 = V_2;
		int32_t L_17 = il2cpp_codegen_cast_double_to_int<int32_t>(L_16);
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_15;
		double L_20 = V_3;
		int32_t L_21 = il2cpp_codegen_cast_double_to_int<int32_t>(L_20);
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_19;
		double L_24 = V_4;
		double L_25 = L_24;
		RuntimeObject* L_26 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_23;
		Il2CppChar L_28 = V_1;
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_30);
		String_t* L_31;
		L_31 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_13, _stringLiteral6D8D46E9E5E1DD10B339E51306174B9818FDD238, L_27, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNaptr__ctor_m51C2A80E0FAA9EAC3A49918653E3DF04FEE9AF10 (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		RecordNaptr_set_Order_m986E7E28D127E7ABBEE5995F7F984B9B22F18C0F_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_2, NULL);
		RecordNaptr_set_Preference_mCEA50578CB7630A1FB01FFCF5A9DEBBB19B7B832_inline(__this, L_3, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_4, NULL);
		RecordNaptr_set_Flags_m47A719B724478E41B9E20F21C5A92580039D8FB6_inline(__this, L_5, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_6, NULL);
		RecordNaptr_set_Services_mA6B7318BFCCF64C784F39EAF8FCC9CFC5F44184D_inline(__this, L_7, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_8 = ___0_rr;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_8, NULL);
		RecordNaptr_set_Regexp_m5CC68A94B44B10459F423BB65BB118BFBBD80E17_inline(__this, L_9, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = ___0_rr;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_10, NULL);
		RecordNaptr_set_Replacement_m2B91E2C60179E6BF8E5A0195A2D6A774A3FC7503_inline(__this, L_11, NULL);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordNaptr::get_Order()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordNaptr_get_Order_m1BC01A45257ED5577FC961103C607D05395EE706 (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3COrderU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Order(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNaptr_set_Order_m986E7E28D127E7ABBEE5995F7F984B9B22F18C0F (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3COrderU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordNaptr::get_Preference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordNaptr_get_Preference_mAF78AFAAEF247899F009D65887B4C6098A702FED (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Preference(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNaptr_set_Preference_mCEA50578CB7630A1FB01FFCF5A9DEBBB19B7B832 (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPreferenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNaptr::get_Flags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Flags_m2DFAFB5ADDBDBD24F14F0F5E449C9C33970C34B4 (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFlagsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Flags(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNaptr_set_Flags_m47A719B724478E41B9E20F21C5A92580039D8FB6 (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CFlagsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFlagsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNaptr::get_Services()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Services_mC281C3BBFA9415CEDD8ED4F876C8018D405EDCEB (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CServicesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Services(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNaptr_set_Services_mA6B7318BFCCF64C784F39EAF8FCC9CFC5F44184D (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CServicesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServicesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNaptr::get_Regexp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Regexp_m2F0409840C5E69C977C189235B0A71B1F1F83029 (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRegexpU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Regexp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNaptr_set_Regexp_m5CC68A94B44B10459F423BB65BB118BFBBD80E17 (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRegexpU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegexpU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNaptr::get_Replacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Replacement_m0A162169FCC7FAD93533C353949D956C0237810B (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReplacementU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordNaptr::set_Replacement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNaptr_set_Replacement_m2B91E2C60179E6BF8E5A0195A2D6A774A3FC7503 (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CReplacementU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReplacementU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNaptr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNaptr_ToString_m891F2DF532A5045036B4F8AE4E436E72512BA197 (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA46E1241E7CECA9079592DD1DD5D6A78C906AD04);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint16_t L_2;
		L_2 = RecordNaptr_get_Order_m1BC01A45257ED5577FC961103C607D05395EE706_inline(__this, NULL);
		uint16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		uint16_t L_6;
		L_6 = RecordNaptr_get_Preference_mAF78AFAAEF247899F009D65887B4C6098A702FED_inline(__this, NULL);
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		String_t* L_10;
		L_10 = RecordNaptr_get_Flags_m2DFAFB5ADDBDBD24F14F0F5E449C9C33970C34B4_inline(__this, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		String_t* L_12;
		L_12 = RecordNaptr_get_Services_mC281C3BBFA9415CEDD8ED4F876C8018D405EDCEB_inline(__this, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		String_t* L_14;
		L_14 = RecordNaptr_get_Regexp_m2F0409840C5E69C977C189235B0A71B1F1F83029_inline(__this, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		String_t* L_16;
		L_16 = RecordNaptr_get_Replacement_m0A162169FCC7FAD93533C353949D956C0237810B_inline(__this, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralA46E1241E7CECA9079592DD1DD5D6A78C906AD04, L_15, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordNs::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNs__ctor_m1279826E0C29ED681922A94510456D45CDA3B171 (RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		RecordNs_set_NameserverDomain_mFAF9857756A5320ACDB5C8A0F7FE2EB15B7C3C07_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNs::get_NameserverDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNs_get_NameserverDomain_mA2FFF0435B9F3CFF5DF4390F59A665A5743E199F (RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameserverDomainU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordNs::set_NameserverDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNs_set_NameserverDomain_mFAF9857756A5320ACDB5C8A0F7FE2EB15B7C3C07 (RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameserverDomainU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameserverDomainU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNs_ToString_m74E62DE08755D58761FD06178503EFDE8CF9647A (RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordNs_get_NameserverDomain_mA2FFF0435B9F3CFF5DF4390F59A665A5743E199F_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordNsap::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNsap__ctor_m00A4F343779F1B23D756176CF1C0FAA0FD43FE3D (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		RecordNsap_set_Length_m373FD4E6082CD21378E293E6605A0D7837236CD8_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		uint16_t L_3;
		L_3 = RecordNsap_get_Length_m8EFA597BDC05A8E4015065B82FB62FB964FB8532_inline(__this, NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_2, L_3, NULL);
		__this->____address_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____address_2), (void*)L_4);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordNsap::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordNsap_get_Length_m8EFA597BDC05A8E4015065B82FB62FB964FB8532 (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CLengthU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordNsap::set_Length(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNsap_set_Length_m373FD4E6082CD21378E293E6605A0D7837236CD8 (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CLengthU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Byte> Ubiety.Dns.Core.Records.RecordNsap::get_NsapAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA* RecordNsap_get_NsapAddress_m9A6386EE8C4D72F46EDCB3449394BB127AED3560 (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____address_2;
		Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA* L_1 = (Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA*)il2cpp_codegen_object_new(Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB(L_1, (RuntimeObject*)L_0, Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNsap::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNsap_ToString_m65BE1845FACB989CFEA8224D38DA439BF6CF1C4E (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral949E308288B2FD68A8A495751C8D81446AE026E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA935CCF89C420653F37A96028DBF909D021C883A);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		uint16_t L_5;
		L_5 = RecordNsap_get_Length_m8EFA597BDC05A8E4015065B82FB62FB964FB8532_inline(__this, NULL);
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_1);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B(L_1, L_2, _stringLiteral949E308288B2FD68A8A495751C8D81446AE026E7, L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____address_2;
		V_1 = L_9;
		V_2 = 0;
		goto IL_005e;
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15;
		L_15 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		uint8_t L_18 = V_3;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		NullCheck(L_14);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B(L_14, L_15, _stringLiteralA935CCF89C420653F37A96028DBF909D021C883A, L_17, NULL);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005e:
	{
		int32_t L_23 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		return L_26;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNsap::ToGOSIPV2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNsap_ToGOSIPV2_mCB594C5EA2571D137388B6C0D6B755FF013893E1 (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC056B0EF186E79ACF736AED1477943ABFE0BB591);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____address_2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_7);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____address_2;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->____address_2;
		NullCheck(L_12);
		int32_t L_13 = 2;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ((int32_t)(((int32_t)((int32_t)L_11<<8))|(int32_t)L_14));
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_16);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->____address_2;
		NullCheck(L_18);
		int32_t L_19 = 3;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		uint8_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_22);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->____address_2;
		NullCheck(L_24);
		int32_t L_25 = 4;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->____address_2;
		NullCheck(L_27);
		int32_t L_28 = 5;
		uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->____address_2;
		NullCheck(L_30);
		int32_t L_31 = 6;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_26<<((int32_t)16)))|((int32_t)((int32_t)L_29<<8))))|(int32_t)L_32));
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_34);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->____address_2;
		NullCheck(L_36);
		int32_t L_37 = 7;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->____address_2;
		NullCheck(L_39);
		int32_t L_40 = 8;
		uint8_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = ((int32_t)(((int32_t)((int32_t)L_38<<8))|(int32_t)L_41));
		RuntimeObject* L_43 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_43);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_43);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->____address_2;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)9);
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->____address_2;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)10);
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = ((int32_t)(((int32_t)((int32_t)L_47<<8))|(int32_t)L_50));
		RuntimeObject* L_52 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_52);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_52);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_44;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->____address_2;
		NullCheck(L_54);
		int32_t L_55 = ((int32_t)11);
		uint8_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->____address_2;
		NullCheck(L_57);
		int32_t L_58 = ((int32_t)12);
		uint8_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		int32_t L_60 = ((int32_t)(((int32_t)((int32_t)L_56<<8))|(int32_t)L_59));
		RuntimeObject* L_61 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_60);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_61);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_61);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_53;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->____address_2;
		NullCheck(L_63);
		int32_t L_64 = ((int32_t)13);
		uint8_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = __this->____address_2;
		NullCheck(L_66);
		int32_t L_67 = ((int32_t)14);
		uint8_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->____address_2;
		NullCheck(L_69);
		int32_t L_70 = ((int32_t)15);
		uint8_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		int32_t L_72 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_65<<((int32_t)16)))|((int32_t)((int32_t)L_68<<8))))|(int32_t)L_71));
		RuntimeObject* L_73 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_73);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_73);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_74 = L_62;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = __this->____address_2;
		NullCheck(L_75);
		int32_t L_76 = ((int32_t)16);
		uint8_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = __this->____address_2;
		NullCheck(L_78);
		int32_t L_79 = ((int32_t)17);
		uint8_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = __this->____address_2;
		NullCheck(L_81);
		int32_t L_82 = ((int32_t)18);
		uint8_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_77<<((int32_t)16)))|((int32_t)((int32_t)L_80<<8))))|(int32_t)L_83));
		RuntimeObject* L_85 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_85);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_85);
		String_t* L_86;
		L_86 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteralC056B0EF186E79ACF736AED1477943ABFE0BB591, L_74, NULL);
		return L_86;
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
// System.Void Ubiety.Dns.Core.Records.RecordNull::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNull__ctor_mC40040CB3BE17F6CE7109C4F19794CEE403C767C (RecordNull_t58BB1A20A9A00CBD48358AB2C3D945449901F517* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB_inline(L_1, NULL);
		NullCheck(L_1);
		RecordReader_set_Position_m6BE8D3717978BC8F1C0166281D787EB909248B0B_inline(L_1, ((int32_t)il2cpp_codegen_subtract(L_2, 2)), NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_3 = ___0_rr;
		NullCheck(L_3);
		uint16_t L_4;
		L_4 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_3, NULL);
		V_0 = L_4;
		uint16_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->____data_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_2), (void*)L_6);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_7 = ___0_rr;
		uint16_t L_8 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_7, L_8, NULL);
		__this->____data_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_2), (void*)L_9);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.RecordNull::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* RecordNull_get_Data_m92C698E23917B51D0F031702FFB40C4B2AF6AEE5 (RecordNull_t58BB1A20A9A00CBD48358AB2C3D945449901F517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_1, (RuntimeObject*)L_0, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordNull::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNull_ToString_mEB94F1B5F938CC00B73110620C6305B7C819034F (RecordNull_t58BB1A20A9A00CBD48358AB2C3D945449901F517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0CD93231368D71303894FA9F2B0F372EE36E9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralDE0CD93231368D71303894FA9F2B0F372EE36E9D, L_2, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordPtr::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordPtr__ctor_m53EB72688DE7D6F2AD2E3555327F86CB29BB84B6 (RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		RecordPtr_set_PointerDomain_mCC986A5600164BD9156159AFE85665DCD687A4D9_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordPtr::get_PointerDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordPtr_get_PointerDomain_m2BC0CDFAA2EECEBBC68BB195D0420162AE621F35 (RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPointerDomainU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordPtr::set_PointerDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordPtr_set_PointerDomain_mCC986A5600164BD9156159AFE85665DCD687A4D9 (RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPointerDomainU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointerDomainU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordPtr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordPtr_ToString_m94FB90B64BC0EF10B5B56A672B09865F30BFFCEE (RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordPtr_get_PointerDomain_m2BC0CDFAA2EECEBBC68BB195D0420162AE621F35_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordPx::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordPx__ctor_mC52D2DF1310BFF479C7C42328AFF4DEA5F571E47 (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		RecordPx_set_Preference_m4E6AAC673F3BAE3D25D890FFC56FE6C534F8B7F6_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_2, NULL);
		RecordPx_set_Map822_mD945E4283268459FA20879259CF1353697CBAB00_inline(__this, L_3, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_4, NULL);
		RecordPx_set_MapX400_m5A67A1B844923247A8A50CD0F6A1FF71C3EE3316_inline(__this, L_5, NULL);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordPx::get_Preference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordPx_get_Preference_mD01246757FFCFFBD0FC00ADA7D8A40B56B0115D9 (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordPx::set_Preference(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordPx_set_Preference_m4E6AAC673F3BAE3D25D890FFC56FE6C534F8B7F6 (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPreferenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordPx::get_Map822()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordPx_get_Map822_m79B72AEFCF44A77B70200DAF15EFB7527E753181 (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMap822U3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordPx::set_Map822(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordPx_set_Map822_mD945E4283268459FA20879259CF1353697CBAB00 (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMap822U3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMap822U3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordPx::get_MapX400()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordPx_get_MapX400_m32B89F9E5530187B5761AC531C83D5B1C1DC0690 (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMapX400U3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordPx::set_MapX400(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordPx_set_MapX400_m5A67A1B844923247A8A50CD0F6A1FF71C3EE3316 (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMapX400U3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMapX400U3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordPx::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordPx_ToString_m8E4D35C077B27FEE18FA8E2E89D3736B42290F5A (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC88B7268310CF55E1332901267EC9623937285);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = RecordPx_get_Preference_mD01246757FFCFFBD0FC00ADA7D8A40B56B0115D9_inline(__this, NULL);
		uint16_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = RecordPx_get_Map822_m79B72AEFCF44A77B70200DAF15EFB7527E753181_inline(__this, NULL);
		String_t* L_4;
		L_4 = RecordPx_get_MapX400_m32B89F9E5530187B5761AC531C83D5B1C1DC0690_inline(__this, NULL);
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralAFC88B7268310CF55E1332901267EC9623937285, L_2, L_3, L_4, NULL);
		return L_5;
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
// System.Void Ubiety.Dns.Core.Records.RecordRp::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordRp__ctor_m166AFB64BD9699E91135E3E6E3EDFCBBF982877E (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		RecordRp_set_MailboxDomain_m2574CEFE4B16F5A5127B80E9E8A2A6A25ED5E849_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_2, NULL);
		RecordRp_set_TxtDomain_m33E062FDC700B00D437C03A98352DC87A8372B65_inline(__this, L_3, NULL);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordRp::get_MailboxDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordRp_get_MailboxDomain_mD68D69F937F5F9F62AAE6EC37301741C213C57B0 (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMailboxDomainU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordRp::set_MailboxDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordRp_set_MailboxDomain_m2574CEFE4B16F5A5127B80E9E8A2A6A25ED5E849 (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMailboxDomainU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMailboxDomainU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordRp::get_TxtDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordRp_get_TxtDomain_m8EFE3A422A22E643AFB1473CC4B4C12E7EDF82D3 (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTxtDomainU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordRp::set_TxtDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordRp_set_TxtDomain_m33E062FDC700B00D437C03A98352DC87A8372B65 (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTxtDomainU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTxtDomainU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordRp::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordRp_ToString_m3BFE22A0DEC978F7E3BA6EA0E91BE596E3FCD15F (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = RecordRp_get_MailboxDomain_mD68D69F937F5F9F62AAE6EC37301741C213C57B0_inline(__this, NULL);
		String_t* L_1;
		L_1 = RecordRp_get_TxtDomain_m8EFE3A422A22E643AFB1473CC4B4C12E7EDF82D3_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_1, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordRt::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordRt__ctor_mFC3136765963757CDB6B3EB82319ED0E6059A21E (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		RecordRt_set_Preference_m15355690F0577FC46967926C23E662CCF995F403_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_2, NULL);
		RecordRt_set_IntermediateHost_m4C8762C67C68B6A3F186F35C5761470E87F8309E_inline(__this, L_3, NULL);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordRt::get_Preference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordRt_get_Preference_m561484C13865269C3EFF4ECE4E32695819FB2BF5 (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordRt::set_Preference(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordRt_set_Preference_m15355690F0577FC46967926C23E662CCF995F403 (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPreferenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordRt::get_IntermediateHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordRt_get_IntermediateHost_m6A769DDF346083B59AAB83D9E3BCB09BB463B358 (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIntermediateHostU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordRt::set_IntermediateHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordRt_set_IntermediateHost_m4C8762C67C68B6A3F186F35C5761470E87F8309E (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CIntermediateHostU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntermediateHostU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordRt::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordRt_ToString_mC8CA494B22D87535FCC557C63C0A73F6FAAC7A6A (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = RecordRt_get_Preference_m561484C13865269C3EFF4ECE4E32695819FB2BF5_inline(__this, NULL);
		uint16_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = RecordRt_get_IntermediateHost_m6A769DDF346083B59AAB83D9E3BCB09BB463B358_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_2, L_3, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordSig::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig__ctor_mA0D5B57EDB8C1FBC215AC8A2D9D7314E1A97D779 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		RecordSig_set_TypeCovered_m445AD32E5E8050A14C203B138DA20120D4D851E4_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint8_t L_3;
		L_3 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_2, NULL);
		RecordSig_set_Algorithm_m78A3B9B932D231C28F61B5D771F60AC7EC29CFD7_inline(__this, L_3, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_4, NULL);
		RecordSig_set_Labels_mA3D3760B88403D77AB6229A3183D2564D4DB27EC_inline(__this, L_5, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_6, NULL);
		RecordSig_set_OriginalTTL_mB97DE26A80B3C998299824A95593EC71037246BD_inline(__this, L_7, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_8 = ___0_rr;
		NullCheck(L_8);
		uint32_t L_9;
		L_9 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_8, NULL);
		RecordSig_set_SignatureExpiration_m34D03E078F2AA93BD649CB5A5B50A48776F25927_inline(__this, L_9, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = ___0_rr;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_10, NULL);
		RecordSig_set_SignatureInception_m007AA09E1E17F97D77A457710609149BAC56B17A_inline(__this, L_11, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_12 = ___0_rr;
		NullCheck(L_12);
		uint16_t L_13;
		L_13 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_12, NULL);
		RecordSig_set_KeyTag_m5FDE40A2016EA3523A0530415683584F8DC63E43_inline(__this, L_13, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_14 = ___0_rr;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_14, NULL);
		RecordSig_set_SignersName_mAEA4B26F8C4AF619615458D2B90A8EB8D3E1A7EA_inline(__this, L_15, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_16 = ___0_rr;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_16, NULL);
		RecordSig_set_Signature_m95151CA0F978931A75D78D2D467E7AB4EF31EC71_inline(__this, L_17, NULL);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordSig::get_TypeCovered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordSig_get_TypeCovered_m5A21E51E4AA06158CB0D3D5A5455A07D153A865A (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CTypeCoveredU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_TypeCovered(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig_set_TypeCovered_m445AD32E5E8050A14C203B138DA20120D4D851E4 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CTypeCoveredU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordSig::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordSig_get_Algorithm_m8FA0001FE64CB2673053BE393AB4072AA77DA089 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CAlgorithmU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_Algorithm(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig_set_Algorithm_m78A3B9B932D231C28F61B5D771F60AC7EC29CFD7 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CAlgorithmU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Byte Ubiety.Dns.Core.Records.RecordSig::get_Labels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RecordSig_get_Labels_m57D2E96F208E84C640ED8BD5D9002722F3A2A5EB (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLabelsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_Labels(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig_set_Labels_mA3D3760B88403D77AB6229A3183D2564D4DB27EC (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CLabelsU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordSig::get_OriginalTTL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordSig_get_OriginalTTL_mD114E358687F6661D99FAAA1896DCFEF7E15BFD0 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3COriginalTTLU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_OriginalTTL(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig_set_OriginalTTL_mB97DE26A80B3C998299824A95593EC71037246BD (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3COriginalTTLU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordSig::get_SignatureExpiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordSig_get_SignatureExpiration_m99899B8885600C7DEF0338DC8C1EA1769D84BC23 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CSignatureExpirationU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_SignatureExpiration(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig_set_SignatureExpiration_m34D03E078F2AA93BD649CB5A5B50A48776F25927 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CSignatureExpirationU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordSig::get_SignatureInception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordSig_get_SignatureInception_mAF869907C46454B2AE2291418A342A55B8359BA7 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CSignatureInceptionU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_SignatureInception(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig_set_SignatureInception_m007AA09E1E17F97D77A457710609149BAC56B17A (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CSignatureInceptionU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordSig::get_KeyTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordSig_get_KeyTag_mD33503907980CDB313596A5BF3F952A653A5EF34 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CKeyTagU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_KeyTag(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig_set_KeyTag_m5FDE40A2016EA3523A0530415683584F8DC63E43 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CKeyTagU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordSig::get_SignersName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordSig_get_SignersName_mD6486C29CB17AF149BAEB902D9E8FDF0658315BC (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSignersNameU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_SignersName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig_set_SignersName_mAEA4B26F8C4AF619615458D2B90A8EB8D3E1A7EA (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSignersNameU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignersNameU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordSig::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordSig_get_Signature_mD55305791324C847D114E38CE82095BE888AA56A (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSignatureU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSig::set_Signature(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSig_set_Signature_m95151CA0F978931A75D78D2D467E7AB4EF31EC71 (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSignatureU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignatureU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordSig::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordSig_ToString_m95C3950E77B8B7732A3901EE9706EB595BD69C4F (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0D80402C40D472CE097AD41C4A4A1095F11531);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		uint16_t L_3;
		L_3 = RecordSig_get_TypeCovered_m5A21E51E4AA06158CB0D3D5A5455A07D153A865A_inline(__this, NULL);
		uint16_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		uint8_t L_7;
		L_7 = RecordSig_get_Algorithm_m8FA0001FE64CB2673053BE393AB4072AA77DA089_inline(__this, NULL);
		uint8_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		uint8_t L_11;
		L_11 = RecordSig_get_Labels_m57D2E96F208E84C640ED8BD5D9002722F3A2A5EB_inline(__this, NULL);
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		uint32_t L_15;
		L_15 = RecordSig_get_OriginalTTL_mD114E358687F6661D99FAAA1896DCFEF7E15BFD0_inline(__this, NULL);
		uint32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		uint32_t L_19;
		L_19 = RecordSig_get_SignatureExpiration_m99899B8885600C7DEF0338DC8C1EA1769D84BC23_inline(__this, NULL);
		uint32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_18;
		uint32_t L_23;
		L_23 = RecordSig_get_SignatureInception_mAF869907C46454B2AE2291418A342A55B8359BA7_inline(__this, NULL);
		uint32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_22;
		uint16_t L_27;
		L_27 = RecordSig_get_KeyTag_mD33503907980CDB313596A5BF3F952A653A5EF34_inline(__this, NULL);
		uint16_t L_28 = L_27;
		RuntimeObject* L_29 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_26;
		String_t* L_31;
		L_31 = RecordSig_get_SignersName_mD6486C29CB17AF149BAEB902D9E8FDF0658315BC_inline(__this, NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_30;
		String_t* L_33;
		L_33 = RecordSig_get_Signature_mD55305791324C847D114E38CE82095BE888AA56A_inline(__this, NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_33);
		String_t* L_34;
		L_34 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteralBD0D80402C40D472CE097AD41C4A4A1095F11531, L_32, NULL);
		return L_34;
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
// System.Void Ubiety.Dns.Core.Records.RecordSoa::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSoa__ctor_mB946FF4E09A5CE5A0EA3B2DDD9468C1330856C79 (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		RecordSoa_set_PrimaryNameserver_m97733BC4C19B0D4A6D2F0ED3080C0B7980A78E86_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_2, NULL);
		RecordSoa_set_ResponsibleDomain_m6A4CDABA27001201A97F7D8AF40023D7AF55940D_inline(__this, L_3, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_4, NULL);
		RecordSoa_set_Serial_mBAA0FE1B0B78A2C32A9326625198E2D57C76B9DA_inline(__this, L_5, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_6, NULL);
		RecordSoa_set_Refresh_mF437DDA086A27FC265AF8F13BD42D0D645C14D59_inline(__this, L_7, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_8 = ___0_rr;
		NullCheck(L_8);
		uint32_t L_9;
		L_9 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_8, NULL);
		RecordSoa_set_Retry_m22C4AA1C3EFFF4A81583360E75B2124DF2CB5CEA_inline(__this, L_9, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = ___0_rr;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_10, NULL);
		RecordSoa_set_Expire_mDC46096BDC6BD0DB977DD4B96E2D4E0F3843DB12_inline(__this, L_11, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_12 = ___0_rr;
		NullCheck(L_12);
		uint32_t L_13;
		L_13 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_12, NULL);
		RecordSoa_set_Minimum_mBAC5BB30A42621127019FA6D94EB2C6898C78410_inline(__this, L_13, NULL);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordSoa::get_PrimaryNameserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordSoa_get_PrimaryNameserver_m104DD33DB6606C0E661AF68945103378E2DD975F (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPrimaryNameserverU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_PrimaryNameserver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSoa_set_PrimaryNameserver_m97733BC4C19B0D4A6D2F0ED3080C0B7980A78E86 (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPrimaryNameserverU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrimaryNameserverU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordSoa::get_ResponsibleDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordSoa_get_ResponsibleDomain_mB19DCB18FA4C09338628A354E318CC3961B63AE0 (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResponsibleDomainU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_ResponsibleDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSoa_set_ResponsibleDomain_m6A4CDABA27001201A97F7D8AF40023D7AF55940D (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CResponsibleDomainU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponsibleDomainU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Serial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Serial_m185CE367213770A78804DE1F0EEFB78CE9DB08A9 (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CSerialU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Serial(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSoa_set_Serial_mBAA0FE1B0B78A2C32A9326625198E2D57C76B9DA (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CSerialU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Refresh_m1F87BD8FF67E7D02006F83BDDE67BFAB7528F68F (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CRefreshU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Refresh(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSoa_set_Refresh_mF437DDA086A27FC265AF8F13BD42D0D645C14D59 (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CRefreshU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Retry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Retry_m7F62C5946CF0C906B536912EF37AEFA69A3B606E (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CRetryU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Retry(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSoa_set_Retry_m22C4AA1C3EFFF4A81583360E75B2124DF2CB5CEA (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CRetryU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Expire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Expire_m1971BC63E251DDA92B5505CE438BAAF8E5E30D2E (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CExpireU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Expire(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSoa_set_Expire_mDC46096BDC6BD0DB977DD4B96E2D4E0F3843DB12 (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CExpireU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordSoa::get_Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Minimum_m48AF2F1B972DF4EF074D4E3F1A75444399264B90 (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CMinimumU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSoa::set_Minimum(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSoa_set_Minimum_mBAC5BB30A42621127019FA6D94EB2C6898C78410 (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CMinimumU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordSoa::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordSoa_ToString_m01F39DD88CE79DB83DA98EC8D8E47B8D27F21289 (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9046330F871CE7CD1F1B33E5684D7A4719117C0D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = RecordSoa_get_PrimaryNameserver_m104DD33DB6606C0E661AF68945103378E2DD975F_inline(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4;
		L_4 = RecordSoa_get_ResponsibleDomain_mB19DCB18FA4C09338628A354E318CC3961B63AE0_inline(__this, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		uint32_t L_6;
		L_6 = RecordSoa_get_Serial_m185CE367213770A78804DE1F0EEFB78CE9DB08A9_inline(__this, NULL);
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint32_t L_10;
		L_10 = RecordSoa_get_Refresh_m1F87BD8FF67E7D02006F83BDDE67BFAB7528F68F_inline(__this, NULL);
		uint32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint32_t L_14;
		L_14 = RecordSoa_get_Retry_m7F62C5946CF0C906B536912EF37AEFA69A3B606E_inline(__this, NULL);
		uint32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint32_t L_18;
		L_18 = RecordSoa_get_Expire_m1971BC63E251DDA92B5505CE438BAAF8E5E30D2E_inline(__this, NULL);
		uint32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		uint32_t L_22;
		L_22 = RecordSoa_get_Minimum_m48AF2F1B972DF4EF074D4E3F1A75444399264B90_inline(__this, NULL);
		uint32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral9046330F871CE7CD1F1B33E5684D7A4719117C0D, L_21, NULL);
		return L_25;
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
// System.Void Ubiety.Dns.Core.Records.RecordSrv::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSrv__ctor_m75BE7F238722D4E2535BD13FED69350F2E4AD0EB (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		RecordSrv_set_Priority_m8CC732BE289B412109987EAB7158E28BBE10F2E5_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_2, NULL);
		RecordSrv_set_Weight_mAD711E9873302D6B76DFA96301FB5666691BE3FF_inline(__this, L_3, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_4, NULL);
		RecordSrv_set_Port_m270EDD1EF2203A3F8208DBC939D6A5527D613593_inline(__this, L_5, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_6, NULL);
		RecordSrv_set_Target_mD8A32496659027D45E029C24880F0170DF6A6643_inline(__this, L_7, NULL);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordSrv::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordSrv_get_Priority_m3D41E38F9AE07B53BC4E3BDB1D62D3F0C1FBE21F (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPriorityU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSrv::set_Priority(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSrv_set_Priority_m8CC732BE289B412109987EAB7158E28BBE10F2E5 (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPriorityU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordSrv::get_Weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordSrv_get_Weight_mAA32F64721EFE5E296E3CA9FB5B4EBBBA93A730E (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CWeightU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSrv::set_Weight(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSrv_set_Weight_mAD711E9873302D6B76DFA96301FB5666691BE3FF (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CWeightU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordSrv::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordSrv_get_Port_m9FFB83834577238BF9CBF792FA07247D3F533E77 (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPortU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSrv::set_Port(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSrv_set_Port_m270EDD1EF2203A3F8208DBC939D6A5527D613593 (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPortU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordSrv::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordSrv_get_Target_m745A1955E87BA9494FA2BD250F97991A792E2964 (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordSrv::set_Target(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSrv_set_Target_mD8A32496659027D45E029C24880F0170DF6A6643 (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordSrv::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordSrv_ToString_mFEC31626A600D9BB73688D5CE5DCACB03473F624 (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975CEACAD0FAD15E6E69CB64C63BA7209214FA24);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint16_t L_2;
		L_2 = RecordSrv_get_Priority_m3D41E38F9AE07B53BC4E3BDB1D62D3F0C1FBE21F_inline(__this, NULL);
		uint16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		uint16_t L_6;
		L_6 = RecordSrv_get_Weight_mAA32F64721EFE5E296E3CA9FB5B4EBBBA93A730E_inline(__this, NULL);
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint16_t L_10;
		L_10 = RecordSrv_get_Port_m9FFB83834577238BF9CBF792FA07247D3F533E77_inline(__this, NULL);
		uint16_t L_11 = L_10;
		RuntimeObject* L_12 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		String_t* L_14;
		L_14 = RecordSrv_get_Target_m745A1955E87BA9494FA2BD250F97991A792E2964_inline(__this, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral975CEACAD0FAD15E6E69CB64C63BA7209214FA24, L_13, NULL);
		return L_15;
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
// System.Void Ubiety.Dns.Core.Records.RecordTkey::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTkey__ctor_mD51F3E1F60192769FDBA258CE853EDF6BC671DC0 (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CAlgorithmU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAlgorithmU3Ek__BackingField_4), (void*)L_1);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_2, NULL);
		__this->___U3CInceptionU3Ek__BackingField_5 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_4, NULL);
		__this->___U3CExpirationU3Ek__BackingField_6 = L_5;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_6, NULL);
		__this->___U3CModeU3Ek__BackingField_7 = L_7;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_8 = ___0_rr;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_8, NULL);
		__this->___U3CErrorU3Ek__BackingField_8 = L_9;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = ___0_rr;
		NullCheck(L_10);
		uint16_t L_11;
		L_11 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_10, NULL);
		__this->___U3CKeySizeU3Ek__BackingField_9 = L_11;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_12 = ___0_rr;
		uint16_t L_13;
		L_13 = RecordTkey_get_KeySize_m32835599873879E0D1905A6F25B23CEB1A42ADAD_inline(__this, NULL);
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_12, L_13, NULL);
		__this->____keyData_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyData_2), (void*)L_14);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_15 = ___0_rr;
		NullCheck(L_15);
		uint16_t L_16;
		L_16 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_15, NULL);
		__this->___U3COtherSizeU3Ek__BackingField_10 = L_16;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_17 = ___0_rr;
		uint16_t L_18;
		L_18 = RecordTkey_get_OtherSize_m5058EDD5F7156288831C44A0F836DC599F2F1004_inline(__this, NULL);
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_17, L_18, NULL);
		__this->____otherData_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____otherData_3), (void*)L_19);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordTkey::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordTkey_get_Algorithm_mA781673105F2DF93EEA8550B574B3715BC76485A (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAlgorithmU3Ek__BackingField_4;
		return L_0;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordTkey::get_Inception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordTkey_get_Inception_mC93E93F86C00235C57E64338AADB981674D7F05B (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CInceptionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.UInt32 Ubiety.Dns.Core.Records.RecordTkey::get_Expiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RecordTkey_get_Expiration_mFAAD09A5E8369E8FC3ADA9B8F0818C48B13242F8 (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CExpirationU3Ek__BackingField_6;
		return L_0;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_Mode_mF3A931E538BF10228AB74A61291BB9252E66B28F (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CModeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_Error_m48F366706D5D1CA028E46EB325521CC29BA424E6 (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CErrorU3Ek__BackingField_8;
		return L_0;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::get_KeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_KeySize_m32835599873879E0D1905A6F25B23CEB1A42ADAD (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CKeySizeU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.RecordTkey::get_KeyData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* RecordTkey_get_KeyData_mF7337E7DC60F17C8D5887C32CE72D7798B433D16 (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____keyData_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_1, (RuntimeObject*)L_0, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		return L_1;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordTkey::get_OtherSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_OtherSize_m5058EDD5F7156288831C44A0F836DC599F2F1004 (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3COtherSizeU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.RecordTkey::get_OtherData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* RecordTkey_get_OtherData_mEDD741E188235C50CAB4BDA6AEFF063BC61CEC25 (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____otherData_3;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_1, (RuntimeObject*)L_0, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordTkey::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordTkey_ToString_mB4F1DD341574C99C3DECE720C246EBEDE62F7CB9 (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ABA04CB99CE18A786E56A0453951A56A8619C4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = RecordTkey_get_Algorithm_mA781673105F2DF93EEA8550B574B3715BC76485A_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		uint32_t L_5;
		L_5 = RecordTkey_get_Inception_mC93E93F86C00235C57E64338AADB981674D7F05B_inline(__this, NULL);
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		uint32_t L_9;
		L_9 = RecordTkey_get_Expiration_mFAAD09A5E8369E8FC3ADA9B8F0818C48B13242F8_inline(__this, NULL);
		uint32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		uint16_t L_13;
		L_13 = RecordTkey_get_Mode_mF3A931E538BF10228AB74A61291BB9252E66B28F_inline(__this, NULL);
		uint16_t L_14 = L_13;
		RuntimeObject* L_15 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		uint16_t L_17;
		L_17 = RecordTkey_get_Error_m48F366706D5D1CA028E46EB325521CC29BA424E6_inline(__this, NULL);
		uint16_t L_18 = L_17;
		RuntimeObject* L_19 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral9ABA04CB99CE18A786E56A0453951A56A8619C4D, L_16, NULL);
		return L_20;
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
// System.Void Ubiety.Dns.Core.Records.RecordTsig::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTsig__ctor_m6EAFF3C780E8877CD5A4E439A834E80FDBF4CBBB (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		RecordTsig_set_AlgorithmName_m72F2FF988E799D6BA93636686B7030B7BCA17943_inline(__this, L_1, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_2, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = RecordReader_ReadUInt32_m0CE3B0225175D867B9D8566BE766C2C0E1F548AE(L_4, NULL);
		RecordTsig_set_TimeSigned_m19C4CFE559E5896EF97261F68434E9D3E96FE123_inline(__this, ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_3|(int32_t)L_5)))), NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_6, NULL);
		RecordTsig_set_Fudge_m9932FC0D42EE7E4D9014D26F70B5EBBB38F16994_inline(__this, L_7, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_8 = ___0_rr;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_8, NULL);
		RecordTsig_set_MacSize_m5F667288EEF68227BF424A6791DE5B5587A779F8_inline(__this, L_9, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = ___0_rr;
		uint16_t L_11;
		L_11 = RecordTsig_get_MacSize_m77A1C53CBD3B4AE7F56F40A71EA0E9EFCFF20A86_inline(__this, NULL);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_10, L_11, NULL);
		__this->____mac_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mac_2), (void*)L_12);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_13 = ___0_rr;
		NullCheck(L_13);
		uint16_t L_14;
		L_14 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_13, NULL);
		RecordTsig_set_OriginalId_m9B28D6B46FFAF1F615E876D50B6BD04FF69A2F19_inline(__this, L_14, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_15 = ___0_rr;
		NullCheck(L_15);
		uint16_t L_16;
		L_16 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_15, NULL);
		RecordTsig_set_Error_mB8D0501EECBA518F3F51BE0D924CC8C49FEF7DFE_inline(__this, L_16, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_17 = ___0_rr;
		NullCheck(L_17);
		uint16_t L_18;
		L_18 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_17, NULL);
		RecordTsig_set_OtherLength_m2186F99E23B2FF7C317BF7C8ACD8C8ECBE052806_inline(__this, L_18, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_19 = ___0_rr;
		uint16_t L_20;
		L_20 = RecordTsig_get_OtherLength_mC7BE30B0A8E9902A6317C8C76786E029BCFC9976_inline(__this, NULL);
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_19, L_20, NULL);
		__this->____otherData_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____otherData_3), (void*)L_21);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordTsig::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordTsig_get_AlgorithmName_m728184815C25CA79A94C4C7731A81FDCB1A84623 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAlgorithmNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_AlgorithmName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTsig_set_AlgorithmName_m72F2FF988E799D6BA93636686B7030B7BCA17943 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAlgorithmNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAlgorithmNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int64 Ubiety.Dns.Core.Records.RecordTsig::get_TimeSigned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RecordTsig_get_TimeSigned_m56D15643332B4F5134349ADCBFB1A29B949A3EBB (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CTimeSignedU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_TimeSigned(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTsig_set_TimeSigned_m19C4CFE559E5896EF97261F68434E9D3E96FE123 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTimeSignedU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_Fudge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_Fudge_mBA7ECD3A3CEA1D09E60385846112366F3FB38DDD (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CFudgeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_Fudge(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTsig_set_Fudge_m9932FC0D42EE7E4D9014D26F70B5EBBB38F16994 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CFudgeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_MacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_MacSize_m77A1C53CBD3B4AE7F56F40A71EA0E9EFCFF20A86 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CMacSizeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_MacSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTsig_set_MacSize_m5F667288EEF68227BF424A6791DE5B5587A779F8 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CMacSizeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.RecordTsig::get_Mac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* RecordTsig_get_Mac_mF8DCDE48AB54D4803B4BCFD350E112B1B5FA1CF0 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____mac_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_1, (RuntimeObject*)L_0, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		return L_1;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_OriginalId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_OriginalId_mF6123A2DC12E3931FA484EBCCA75D6829B2C689C (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3COriginalIdU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_OriginalId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTsig_set_OriginalId_m9B28D6B46FFAF1F615E876D50B6BD04FF69A2F19 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3COriginalIdU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_Error_m8812923B3177168F5A2E53A5A3326C9BA87B8D40 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CErrorU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_Error(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTsig_set_Error_mB8D0501EECBA518F3F51BE0D924CC8C49FEF7DFE (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.RecordTsig::get_OtherLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_OtherLength_mC7BE30B0A8E9902A6317C8C76786E029BCFC9976 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3COtherLengthU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordTsig::set_OtherLength(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTsig_set_OtherLength_m2186F99E23B2FF7C317BF7C8ACD8C8ECBE052806 (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3COtherLengthU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.RecordTsig::get_OtherData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* RecordTsig_get_OtherData_m59E5F5587B6E9D433B6E7B7BDAD786730ACC9EBB (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____otherData_3;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_1, (RuntimeObject*)L_0, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordTsig::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordTsig_ToString_m5FCB5FA9B8478B919DA7CE7AA76F7095B5E9716F (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ABA04CB99CE18A786E56A0453951A56A8619C4D);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, NULL);
		int64_t L_0;
		L_0 = RecordTsig_get_TimeSigned_m56D15643332B4F5134349ADCBFB1A29B949A3EBB_inline(__this, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), ((double)L_0), NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = DateTime_ToShortDateString_m8863B024FF293DF625932CCA2E35A095C6FCBDCB((&V_0), NULL);
		String_t* L_3;
		L_3 = DateTime_ToShortTimeString_m39FA3D20BF7F8EC6D85FBFB0254D960B7A60160F((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_3, NULL);
		V_1 = L_4;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		String_t* L_8;
		L_8 = RecordTsig_get_AlgorithmName_m728184815C25CA79A94C4C7731A81FDCB1A84623_inline(__this, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = V_1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		uint16_t L_12;
		L_12 = RecordTsig_get_Fudge_mBA7ECD3A3CEA1D09E60385846112366F3FB38DDD_inline(__this, NULL);
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		uint16_t L_16;
		L_16 = RecordTsig_get_OriginalId_mF6123A2DC12E3931FA484EBCCA75D6829B2C689C_inline(__this, NULL);
		uint16_t L_17 = L_16;
		RuntimeObject* L_18 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_15;
		uint16_t L_20;
		L_20 = RecordTsig_get_Error_m8812923B3177168F5A2E53A5A3326C9BA87B8D40_inline(__this, NULL);
		uint16_t L_21 = L_20;
		RuntimeObject* L_22 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_5, _stringLiteral9ABA04CB99CE18A786E56A0453951A56A8619C4D, L_19, NULL);
		return L_23;
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
// System.Void Ubiety.Dns.Core.Records.RecordTxt::.ctor(Ubiety.Dns.Core.RecordReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordTxt__ctor_mA148F0A58B7F681E5A56A12D0532F0F8809F6FDB (RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB_inline(L_0, NULL);
		V_0 = L_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CTextU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_2), (void*)L_2);
		goto IL_002b;
	}

IL_001a:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3;
		L_3 = RecordTxt_get_Text_m0EB778E5CD3BB93FC87E8F2FC2CA3E5828A8967B_inline(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_4, NULL);
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_002b:
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_6 = ___0_rr;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB_inline(L_6, NULL);
		int32_t L_8 = V_0;
		int32_t L_9 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) < ((int32_t)L_9)))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Ubiety.Dns.Core.Records.RecordTxt::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* RecordTxt_get_Text_m0EB778E5CD3BB93FC87E8F2FC2CA3E5828A8967B (RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CTextU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordTxt::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordTxt_ToString_mF3F87797801B6D99F8D74BAC2C5171144B15AB3B (RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = RecordTxt_get_Text_m0EB778E5CD3BB93FC87E8F2FC2CA3E5828A8967B_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_2;
		L_2 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_1, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_0014_1:
			{
				String_t* L_3;
				L_3 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_3;
				StringBuilder_t* L_4 = V_0;
				String_t* L_5 = V_2;
				NullCheck(L_4);
				StringBuilder_t* L_6;
				L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_5, NULL);
			}

IL_0024_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_9);
		String_t* L_11;
		L_11 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(L_9, L_10, NULL);
		return L_11;
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
// System.Void Ubiety.Dns.Core.Records.RecordWks::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordWks__ctor_mE55A0F12D948757C92B4F223D2A644D797A2E0D3 (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral992D23FE06E5F4D73C8734FB3DEFDBABC48F60BA);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m750F87891DBE43C75F451616DF7EF8E022BB7CFF(L_0, ((int32_t)-2), NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_5 = ___0_rr;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_5, NULL);
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_4;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_10 = ___0_rr;
		NullCheck(L_10);
		uint8_t L_11;
		L_11 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_10, NULL);
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_9;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_15 = ___0_rr;
		NullCheck(L_15);
		uint8_t L_16;
		L_16 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_15, NULL);
		uint8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_14;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_20 = ___0_rr;
		NullCheck(L_20);
		uint8_t L_21;
		L_21 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_20, NULL);
		uint8_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_23);
		String_t* L_24;
		L_24 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_2, _stringLiteral992D23FE06E5F4D73C8734FB3DEFDBABC48F60BA, L_19, NULL);
		RecordWks_set_Address_m1A7D5C5288291C139678FD9BAA7859A45034FC4C_inline(__this, L_24, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_25 = ___0_rr;
		NullCheck(L_25);
		uint8_t L_26;
		L_26 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_25, NULL);
		RecordWks_set_Protocol_m6B392019CE6B74D4024898C9655BD23898009041_inline(__this, L_26, NULL);
		uint16_t L_27 = V_0;
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, 5)));
		uint16_t L_28 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_28);
		__this->____bitmap_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bitmap_2), (void*)L_29);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_30 = ___0_rr;
		uint16_t L_31 = V_0;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_30, L_31, NULL);
		__this->____bitmap_2 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bitmap_2), (void*)L_32);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordWks::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordWks_get_Address_m56B23C7669E17DC8868D09ABAB898049B562D9D1 (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordWks::set_Address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordWks_set_Address_m1A7D5C5288291C139678FD9BAA7859A45034FC4C (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAddressU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 Ubiety.Dns.Core.Records.RecordWks::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordWks_get_Protocol_m0123BEB85B2CE3801C64F01E2165CB429BD27505 (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordWks::set_Protocol(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordWks_set_Protocol_m6B392019CE6B74D4024898C9655BD23898009041 (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Byte> Ubiety.Dns.Core.Records.RecordWks::get_Bitmap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA* RecordWks_get_Bitmap_mD1FF662A9C5428C7AD725D0C591D33688BDF37A8 (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____bitmap_2;
		Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA* L_1 = (Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA*)il2cpp_codegen_object_new(Collection_1_tB3C46E65DD9C53B1D7C725022361168BF5BE29FA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB(L_1, (RuntimeObject*)L_0, Collection_1__ctor_mF24B43961B9B35EB552C0BCF23D98F525CA013CB_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordWks::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordWks_ToString_mAF6E0F1755AB9FE1A5B5C2B64433E8C63A811263 (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = RecordWks_get_Address_m56B23C7669E17DC8868D09ABAB898049B562D9D1_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5;
		L_5 = RecordWks_get_Protocol_m0123BEB85B2CE3801C64F01E2165CB429BD27505_inline(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_4, NULL);
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
// System.Void Ubiety.Dns.Core.Records.RecordX25::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordX25__ctor_mEF13903AED86E51EC0B0A5E066E732C9226447BD (RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_0, NULL);
		RecordX25_set_PSDNAdress_mA671B82352CBA9975D46D98D001F7D4C6E1253A4_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordX25::get_PSDNAdress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordX25_get_PSDNAdress_m6B298C731044661BF589CA27D4245B63493348C4 (RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPSDNAdressU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Records.RecordX25::set_PSDNAdress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordX25_set_PSDNAdress_mA671B82352CBA9975D46D98D001F7D4C6E1253A4 (RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPSDNAdressU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPSDNAdressU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.RecordX25::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordX25_ToString_m5A877E74B64574566CAAA513B3A2E8A84D9873C7 (RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordX25_get_PSDNAdress_m6B298C731044661BF589CA27D4245B63493348C4_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Obsolete.RecordGpos::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordGpos__ctor_mAFC6E1E6BB8ACE1CC845BFD35EF23E4C275C36D1 (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_0, NULL);
		__this->___U3CLongitudeU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLongitudeU3Ek__BackingField_2), (void*)L_1);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_2, NULL);
		__this->___U3CLatitudeU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLatitudeU3Ek__BackingField_3), (void*)L_3);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_rr;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_4, NULL);
		__this->___U3CAltitudeU3Ek__BackingField_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAltitudeU3Ek__BackingField_4), (void*)L_5);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::get_Longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordGpos_get_Longitude_m3FDCB286691C28231285A0C7F10B2CE4E712F919 (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLongitudeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::get_Latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordGpos_get_Latitude_mD66FDAD6B85AA630866C4FD977E1D3ED1881CCB7 (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLatitudeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::get_Altitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordGpos_get_Altitude_m43793025E51D381941FAEF802F7B70C02AE990C2 (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAltitudeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordGpos::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordGpos_ToString_m20D68BDAE6947CF07DCE79A6372827704EEC7CCB (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = RecordGpos_get_Longitude_m3FDCB286691C28231285A0C7F10B2CE4E712F919_inline(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = RecordGpos_get_Latitude_mD66FDAD6B85AA630866C4FD977E1D3ED1881CCB7_inline(__this, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8;
		L_8 = RecordGpos_get_Altitude_m43793025E51D381941FAEF802F7B70C02AE990C2_inline(__this, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		String_t* L_9;
		L_9 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_7, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Obsolete.RecordMd::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordMd__ctor_mEB6FCC34F5D4B97F3E0E2E97187DDE2F63706F76 (RecordMd_t877F2AC8EAA563246D911594FFDF2D9B4CC0986E* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CMadNameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMadNameU3Ek__BackingField_2), (void*)L_1);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordMd::get_MadName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMd_get_MadName_mBC4EDAC91CDA332EAA981A463120A781EA97D6EC (RecordMd_t877F2AC8EAA563246D911594FFDF2D9B4CC0986E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMadNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordMd::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMd_ToString_m1EA305B6BC4192D256A59077B857C177F0B67D7F (RecordMd_t877F2AC8EAA563246D911594FFDF2D9B4CC0986E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordMd_get_MadName_mBC4EDAC91CDA332EAA981A463120A781EA97D6EC_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Obsolete.RecordMf::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordMf__ctor_mE949D988CD210752F5D4E715944480B9F94AA665 (RecordMf_t1AE13A3E638557DD3630EE8FCD20845CCDE47BA8* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CMadNameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMadNameU3Ek__BackingField_2), (void*)L_1);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordMf::get_MadName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMf_get_MadName_mA14EF5F466794D8655671479E09586C2547F4689 (RecordMf_t1AE13A3E638557DD3630EE8FCD20845CCDE47BA8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMadNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordMf::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMf_ToString_m57DF7ED759482D398C36A65C8C46E7731E63841A (RecordMf_t1AE13A3E638557DD3630EE8FCD20845CCDE47BA8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordMf_get_MadName_mA14EF5F466794D8655671479E09586C2547F4689_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Obsolete.RecordNsapPtr::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNsapPtr__ctor_mDF2AD0FE7315704C1E10BACC793368943A834954 (RecordNsapPtr_t27669D358D436A3C7C95D0517E97CA59C9B85F7E* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadString_mDC448A54DCB4B37633790F2F98FCE116A3A2AD1A(L_0, NULL);
		__this->___U3COwnerU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerU3Ek__BackingField_2), (void*)L_1);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordNsapPtr::get_Owner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNsapPtr_get_Owner_m71EB476BB2289A950B7E1DF1EC20FBC0B1BACF64 (RecordNsapPtr_t27669D358D436A3C7C95D0517E97CA59C9B85F7E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COwnerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordNsapPtr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNsapPtr_ToString_m3B52D09CEDE858D8163405EC47B53F08C3DBE985 (RecordNsapPtr_t27669D358D436A3C7C95D0517E97CA59C9B85F7E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordNsapPtr_get_Owner_m71EB476BB2289A950B7E1DF1EC20FBC0B1BACF64_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Obsolete.RecordNxt::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNxt__ctor_mF2F57FFB03EA082DA74B84EE734C014972B47A9D (RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m750F87891DBE43C75F451616DF7EF8E022BB7CFF(L_0, ((int32_t)-2), NULL);
		V_0 = L_1;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_2, NULL);
		__this->___U3CNextDomainNameU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNextDomainNameU3Ek__BackingField_3), (void*)L_3);
		uint16_t L_4 = V_0;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_5 = ___0_rr;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB_inline(L_5, NULL);
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)(uint16_t)L_6))));
		uint16_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->____bitmap_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bitmap_2), (void*)L_8);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_9 = ___0_rr;
		uint16_t L_10 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = RecordReader_ReadBytes_m07B17D50CA1456F40DDC5E04BCAC8AB60843AF96(L_9, L_10, NULL);
		__this->____bitmap_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bitmap_2), (void*)L_11);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordNxt::get_NextDomainName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNxt_get_NextDomainName_m8CCC863EB8DD289A947A0DE7FC542034A6C1CCD8 (RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNextDomainNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.Byte> Ubiety.Dns.Core.Records.Obsolete.RecordNxt::get_Bitmap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* RecordNxt_get_Bitmap_m34611357BD2CDA5F901E7600CB5BE99E2B8A12F7 (RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____bitmap_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_1, (RuntimeObject*)L_0, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Ubiety.Dns.Core.Records.Obsolete.RecordNxt::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordNxt_ToString_m56403A462DCFCD6496847BC02B10ACCBB81B3FD2 (RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordType_tE038672BFC25770D08365B50FC92F593EBA37C2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = 1;
		goto IL_0037;
	}

IL_000a:
	{
		int32_t L_1 = V_1;
		bool L_2;
		L_2 = RecordNxt_IsSet_m02ACE1E3661D3592A86CEAAD27374A2F2F015973(__this, L_1, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t* L_3 = V_0;
		int32_t L_4 = V_1;
		V_2 = L_4;
		Il2CppFakeBox<int32_t> L_5(RecordType_tE038672BFC25770D08365B50FC92F593EBA37C2F_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_6, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_7, NULL);
	}

IL_0033:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____bitmap_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_11)->max_length)), 8)))))
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_12;
		L_12 = RecordNxt_get_NextDomainName_m8CCC863EB8DD289A947A0DE7FC542034A6C1CCD8_inline(__this, NULL);
		StringBuilder_t* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_12, L_13, NULL);
		return L_14;
	}
}
// System.Boolean Ubiety.Dns.Core.Records.Obsolete.RecordNxt::IsSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordNxt_IsSet_m02ACE1E3661D3592A86CEAAD27374A2F2F015973 (RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7* __this, int32_t ___0_bitNr, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_bitNr;
		V_0 = ((int32_t)(L_0/8));
		int32_t L_1 = ___0_bitNr;
		V_1 = ((int32_t)(L_1%8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____bitmap_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))));
		int32_t L_7 = V_2;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_5&L_7))) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordA6::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordA6__ctor_mBF9343ECE72FE90E1E90C35F386C9834441A9EAF (RecordA6_t9AAEF9425BDAAD19AE37A009014277285E952A14* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_reader, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_reader;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordApl::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordApl__ctor_m0A8691144F85C1BAAC4AF0F5EF59C0AA279F0E9F (RecordApl_tEA8B1BEFE784A2B99AB33D3D83DC404DD3C1746B* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordAtma::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordAtma__ctor_mE3E253599BA712FE415E9F8C2F4D139F9FE28AB1 (RecordAtma_t2109CD168F50A4E8267679E327A7AD776671F322* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordDhcid::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordDhcid__ctor_mFEBC3738B4BD61BA24401E98684111CEEA1C6426 (RecordDhcid_t2368E609C0C69E1FB4358F6C17DF424838DED72C* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordDnsKey::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordDnsKey__ctor_m098329B21687511EA61FD48754FCFE90D5E80814 (RecordDnsKey_tF5E9EB95EFA183C410AC64C208046E7FD537ADB3* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordEid::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordEid__ctor_m9BEB89C949BF0DFF592FEA1443B862C23177399D (RecordEid_t14058DFD43FC2FB78B3C4BCB8D41A9F0047BAF03* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordGid::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordGid__ctor_m13AAFB4AF6321394073E981027EE53DC446F7E85 (RecordGid_t2DE7046AC1B01AB60ABDC57D4F2D73BF616F82A2* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordHip::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordHip__ctor_m0F0261C7756CC4CB73F003CF532CCB7569E14263 (RecordHip_t719FBBB0711D1EFA49D9F26AB35F52D0565F8D5E* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordIpsecKey::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordIpsecKey__ctor_m2BBB4C7FD9AD9EAE3012DB83EA26D10F64123339 (RecordIpsecKey_t29C7AAD8257FCECCA1B390B6A12206EF5CCC6A34* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordNimloc::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNimloc__ctor_m5509E4C82909C9F75E1FAF2FCD13CAFA609D7AF9 (RecordNimloc_tFADCC1FAE741AC22E89B281D0F4EF39A17E648F4* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordNsec::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNsec__ctor_m69B3C9D70E103B97CEA3CC7A23605D068CE2830B (RecordNsec_t14D49602C32B76586838563587CF0ECE08514554* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordNsec3::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNsec3__ctor_m76F1B4FC1A598CACB8932AD8561F737F29BA9658 (RecordNsec3_t5485AD604C599397EAB556E0B231B9B830FF1C16* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordNsec3Param::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordNsec3Param__ctor_m179BB6FAE9035637521FB517FEDB471571A1577E (RecordNsec3Param_t174E72011CA9BFD71C5DDA9B04EB2FEABE3F9BBF* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordOpt::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordOpt__ctor_m53F886EE5F002EFC1A02268B5560F524DB742698 (RecordOpt_t408CB9445015BCA3AACC5BD70F1C10814EF340D1* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordRrsig::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordRrsig__ctor_m17150CE0CC57CBA4D1287D20F3700C726A159FD1 (RecordRrsig_t6C755403AD745BA0059B2313BA61A2B1E2D9489F* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordSink::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSink__ctor_m88F85027326BE6A426BB9486B5543BD40E4E1D7A (RecordSink_tF8AAABD52861950CA97C3EE9BD42163DA6925969* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordSpf::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSpf__ctor_m7EADFBC750C0930F6E8D2967DBC4DF1601DD36C1 (RecordSpf_tE3982780DC7AACC4E99319E69DCAF8556383664C* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordSshfp::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSshfp__ctor_mB2185E30A4723FDC2371B16172C08A45407B318D (RecordSshfp_tCCAEC40D0E3902A16C1475002702BD8A41DCB17C* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordUid::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordUid__ctor_m5C25A2167B5866A974A4FCE253E300287DFFEC07 (RecordUid_tA28B4B8A029546FC2F078DF59D3B5BB6FE869DED* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordUinfo::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordUinfo__ctor_mD7DC99C4A064DC07538E9167E3CAA53CA20992A3 (RecordUinfo_t219E0CAF247EDA99641BA645A120D4164033996F* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordUnknown::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordUnknown__ctor_m01B037D053C5D6D54CF21203DB8C319B63AAA702 (RecordUnknown_t83B66E9E93A19DAB6AC144ADF36ADBF5FF90F3DC* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.NotUsed.RecordUnspec::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordUnspec__ctor_m24B9BF542ED2A34F9C0CCC31E6C1E70AA2FB65BA (RecordUnspec_t763EC6F6606E8291821D8D32CC183166309CE3DB* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		Record__ctor_mEBE7EBDA328FC2DF71DAAFA0D80269524A74ABA0(__this, L_0, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Mail.RecordMb::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordMb__ctor_mA15237CE5E25B01ECC11CAC09CE98FFD7D8E5CE1 (RecordMb_t8C4062A4BFD4835C81427802BD75AA222751087C* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CMadNameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMadNameU3Ek__BackingField_2), (void*)L_1);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMb::get_MadName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMb_get_MadName_m717DDE8A64CAB774B17B42DAA632E998BEDCB4D7 (RecordMb_t8C4062A4BFD4835C81427802BD75AA222751087C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMadNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMb::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMb_ToString_mC65BF90EDFBA379353F14B5511F9EFC0596F0677 (RecordMb_t8C4062A4BFD4835C81427802BD75AA222751087C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordMb_get_MadName_m717DDE8A64CAB774B17B42DAA632E998BEDCB4D7_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Mail.RecordMg::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordMg__ctor_m48810762D8687A9EA6F047A2BC8107BA10E8875E (RecordMg_t1B1CF282B38EDB2770F24015E1735210CD9AA002* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CMgmNameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMgmNameU3Ek__BackingField_2), (void*)L_1);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMg::get_MgmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMg_get_MgmName_mFF21D558D02B5FE6D813722A8D91EE9D16C6CD6F (RecordMg_t1B1CF282B38EDB2770F24015E1735210CD9AA002* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMgmNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMg::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMg_ToString_mE96A957B4B0C66F8162CB05BA94A71191E5F1890 (RecordMg_t1B1CF282B38EDB2770F24015E1735210CD9AA002* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordMg_get_MgmName_mFF21D558D02B5FE6D813722A8D91EE9D16C6CD6F_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Mail.RecordMinfo::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordMinfo__ctor_mC3F0873CB66F4CD4B8A0A10754FE5DE16C6CB41D (RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CResponsibleMailboxU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponsibleMailboxU3Ek__BackingField_2), (void*)L_1);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_2, NULL);
		__this->___U3CErrorMailboxU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorMailboxU3Ek__BackingField_3), (void*)L_3);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMinfo::get_ResponsibleMailbox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMinfo_get_ResponsibleMailbox_mA3AEF3CF1C654CBAC603D78F195ECB388631A7ED (RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResponsibleMailboxU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMinfo::get_ErrorMailbox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMinfo_get_ErrorMailbox_m1BB12680C635210EBCCB2D0A56381216E63A5FBE (RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CErrorMailboxU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMinfo_ToString_m2FC3EB56B44BFEB495899651C24172D775E1481B (RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = RecordMinfo_get_ResponsibleMailbox_mA3AEF3CF1C654CBAC603D78F195ECB388631A7ED_inline(__this, NULL);
		String_t* L_1;
		L_1 = RecordMinfo_get_ErrorMailbox_m1BB12680C635210EBCCB2D0A56381216E63A5FBE_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_1, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Mail.RecordMr::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordMr__ctor_mD633EE6435C6B584EF22580D39ECD5D7DF2AC5AC (RecordMr_tB1B7AD7A31D43691D8CEE3578174A965E17793CD* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CNewNameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNewNameU3Ek__BackingField_2), (void*)L_1);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMr::get_NewName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMr_get_NewName_m189BCC4388666292209A29213DCAF2E89DA01315 (RecordMr_tB1B7AD7A31D43691D8CEE3578174A965E17793CD* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNewNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMr_ToString_m072FA00964CFE148287BB481EF9E820C9670CF34 (RecordMr_tB1B7AD7A31D43691D8CEE3578174A965E17793CD* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordMr_get_NewName_m189BCC4388666292209A29213DCAF2E89DA01315_inline(__this, NULL);
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
// System.Void Ubiety.Dns.Core.Records.Mail.RecordMx::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordMx__ctor_m6F9020D2852BACDD21D304B63E576F4AAA6D16B0 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_0, NULL);
		__this->___U3CPreferenceU3Ek__BackingField_2 = L_1;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_2 = ___0_rr;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_2, NULL);
		__this->___U3CExchangeU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExchangeU3Ek__BackingField_3), (void*)L_3);
		return;
	}
}
// System.UInt16 Ubiety.Dns.Core.Records.Mail.RecordMx::get_Preference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RecordMx_get_Preference_m70DA3F5EA03AE964512B571F3FFE7CBB75ABCFB2 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMx::get_Exchange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMx_get_Exchange_m177E920BEF6EA7306EFDB8536131706F95249243 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CExchangeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::op_LessThan(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_op_LessThan_mE7D8314B9516C2D2358E4B8923F729603CF9333A (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_0 = ___0_x;
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::op_GreaterThan(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_op_GreaterThan_mE659DA182F0F2F50A7505E71397F132A166575F1 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_0 = ___0_x;
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::op_LessThanOrEqual(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_op_LessThanOrEqual_m1C8E42A65808C5B24F65F6E7D47C5F5F065AD909 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_0 = ___0_x;
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::op_GreaterThanOrEqual(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_op_GreaterThanOrEqual_mA45F8E344A70FCA32317E8663597C08D8709320D (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_0 = ___0_x;
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::op_Equality(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_op_Equality_m39EFBA0831506F4FD272BD48453C9A00888E82FE (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_0 = ___0_x;
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::op_Inequality(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_op_Inequality_m2D70A65328FBA2227AE407A0FE39393C65479EDA (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) 
{
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_0 = ___0_x;
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_1 = ___1_y;
		int32_t L_2;
		L_2 = RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828(L_0, L_1, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Int32 Ubiety.Dns.Core.Records.Mail.RecordMx::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordMx_CompareTo_m9B4F84DAD37FE576BDF804DCE327BD2E275FC587 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		int32_t L_1;
		L_1 = RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828(__this, ((RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501*)IsInstSealed((RuntimeObject*)L_0, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::Equals(Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_Equals_m4FA759DC603DA6E40B4F0634B89C2B181E2734A9 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_other, const RuntimeMethod* method) 
{
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_0 = ___0_other;
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
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_1 = ___0_other;
		int32_t L_2;
		L_2 = RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828(__this, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Ubiety.Dns.Core.Records.Mail.RecordMx::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordMx_ToString_m16697CCB96AEA509B9A9BE516355FACEBDF74EC3 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = RecordMx_get_Preference_m70DA3F5EA03AE964512B571F3FFE7CBB75ABCFB2_inline(__this, NULL);
		uint16_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = RecordMx_get_Exchange_m177E920BEF6EA7306EFDB8536131706F95249243_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Ubiety.Dns.Core.Records.Mail.RecordMx::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordMx_Equals_m972D1B2F55336032539418EABDBF0E907AB30E84 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
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
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		RuntimeObject* L_5 = ___0_obj;
		if ((((RuntimeObject*)(RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501*)__this) == ((RuntimeObject*)(RuntimeObject*)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = RecordMx_Equals_m4FA759DC603DA6E40B4F0634B89C2B181E2734A9(__this, ((RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501*)IsInstSealed((RuntimeObject*)L_6, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)1;
	}
}
// System.Int32 Ubiety.Dns.Core.Records.Mail.RecordMx::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordMx_GetHashCode_m89E2A8A8EB4876E9755746FA9C06BDB1AE7BD5F9 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordMx_get_Exchange_m177E920BEF6EA7306EFDB8536131706F95249243_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Int32 Ubiety.Dns.Core.Records.Mail.RecordMx::CompareTo(Ubiety.Dns.Core.Records.Mail.RecordMx,Ubiety.Dns.Core.Records.Mail.RecordMx)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecordMx_CompareTo_m7052436973980E25883DC034C42E02D001BA7828 (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___0_x, RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_0 = ___1_y;
		bool L_1;
		L_1 = RecordMx_op_Equality_m39EFBA0831506F4FD272BD48453C9A00888E82FE(L_0, (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_2 = ___0_x;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = RecordMx_get_Preference_m70DA3F5EA03AE964512B571F3FFE7CBB75ABCFB2_inline(L_2, NULL);
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_4 = ___1_y;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = RecordMx_get_Preference_m70DA3F5EA03AE964512B571F3FFE7CBB75ABCFB2_inline(L_4, NULL);
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_6 = ___0_x;
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = RecordMx_get_Preference_m70DA3F5EA03AE964512B571F3FFE7CBB75ABCFB2_inline(L_6, NULL);
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_8 = ___1_y;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = RecordMx_get_Preference_m70DA3F5EA03AE964512B571F3FFE7CBB75ABCFB2_inline(L_8, NULL);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_002b;
		}
	}
	{
		return (-1);
	}

IL_002b:
	{
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_10 = ___0_x;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = RecordMx_get_Exchange_m177E920BEF6EA7306EFDB8536131706F95249243_inline(L_10, NULL);
		RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* L_12 = ___1_y;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = RecordMx_get_Exchange_m177E920BEF6EA7306EFDB8536131706F95249243_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_15;
		L_15 = String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9(L_11, L_13, (bool)1, L_14, NULL);
		return L_15;
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
// System.Void Ubiety.Dns.Core.Records.General.RecordA::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordA__ctor_m6C0E728139A79AC11972E964EE8779A1882052F5 (RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral992D23FE06E5F4D73C8734FB3DEFDBABC48F60BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_reader;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecordA__ctor_m6C0E728139A79AC11972E964EE8779A1882052F5_RuntimeMethod_var)));
	}

IL_0014:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_reader;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_4, NULL);
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_9 = ___0_reader;
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_9, NULL);
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_8;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_14 = ___0_reader;
		NullCheck(L_14);
		uint8_t L_15;
		L_15 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_14, NULL);
		uint8_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_13;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_19 = ___0_reader;
		NullCheck(L_19);
		uint8_t L_20;
		L_20 = RecordReader_ReadByte_m99544F2529DF8C4DC6C9C684596BF2FE91676AF8(L_19, NULL);
		uint8_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral992D23FE06E5F4D73C8734FB3DEFDBABC48F60BA, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_24;
		L_24 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(L_23, NULL);
		__this->___U3CAddressU3Ek__BackingField_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_2), (void*)L_24);
		return;
	}
}
// System.Net.IPAddress Ubiety.Dns.Core.Records.General.RecordA::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* RecordA_get_Address_mC01FDC4FDBBFDC9F2A8FD5BDD964A80277F6A98F (RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->___U3CAddressU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.General.RecordA::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordA_ToString_m1172DD190414A7545B5C17321A8846A17129CBB6 (RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0;
		L_0 = RecordA_get_Address_mC01FDC4FDBBFDC9F2A8FD5BDD964A80277F6A98F_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void Ubiety.Dns.Core.Records.General.RecordAaaa::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordAaaa__ctor_mE9A83BB91D45BA541FBBD1E420AF668B29C27E89 (RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EEEA5B38E9B42C5446EBD0684BDE5A2E9BA346A);
		s_Il2CppMethodInitialized = true;
	}
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_reader;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecordAaaa__ctor_mE9A83BB91D45BA541FBBD1E420AF668B29C27E89_RuntimeMethod_var)));
	}

IL_0014:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_4 = ___0_reader;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_4, NULL);
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_3;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_9 = ___0_reader;
		NullCheck(L_9);
		uint16_t L_10;
		L_10 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_9, NULL);
		uint16_t L_11 = L_10;
		RuntimeObject* L_12 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_8;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_14 = ___0_reader;
		NullCheck(L_14);
		uint16_t L_15;
		L_15 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_14, NULL);
		uint16_t L_16 = L_15;
		RuntimeObject* L_17 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_13;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_19 = ___0_reader;
		NullCheck(L_19);
		uint16_t L_20;
		L_20 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_19, NULL);
		uint16_t L_21 = L_20;
		RuntimeObject* L_22 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_18;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_24 = ___0_reader;
		NullCheck(L_24);
		uint16_t L_25;
		L_25 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_24, NULL);
		uint16_t L_26 = L_25;
		RuntimeObject* L_27 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_23;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_29 = ___0_reader;
		NullCheck(L_29);
		uint16_t L_30;
		L_30 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_29, NULL);
		uint16_t L_31 = L_30;
		RuntimeObject* L_32 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_28;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_34 = ___0_reader;
		NullCheck(L_34);
		uint16_t L_35;
		L_35 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_34, NULL);
		uint16_t L_36 = L_35;
		RuntimeObject* L_37 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_37);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_33;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_39 = ___0_reader;
		NullCheck(L_39);
		uint16_t L_40;
		L_40 = RecordReader_ReadUInt16_m6E24F68BF4B624B519360BA0F2188946C2D9D073(L_39, NULL);
		uint16_t L_41 = L_40;
		RuntimeObject* L_42 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_42);
		String_t* L_43;
		L_43 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral7EEEA5B38E9B42C5446EBD0684BDE5A2E9BA346A, L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_44;
		L_44 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(L_43, NULL);
		__this->___U3CAddressU3Ek__BackingField_2 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_2), (void*)L_44);
		return;
	}
}
// System.Net.IPAddress Ubiety.Dns.Core.Records.General.RecordAaaa::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* RecordAaaa_get_Address_m5E61D5D7CF8DB0F1F8D867170E6377B28FDC9E1E (RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->___U3CAddressU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.General.RecordAaaa::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordAaaa_ToString_mDF7232B90A694B62348CDB9CE2870470027E48C8 (RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0;
		L_0 = RecordAaaa_get_Address_m5E61D5D7CF8DB0F1F8D867170E6377B28FDC9E1E_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void Ubiety.Dns.Core.Records.General.RecordCname::.ctor(Ubiety.Dns.Core.RecordReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordCname__ctor_mA61E632DC5768EC59986C8962B435207FDDC53FC (RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4* __this, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___0_rr, const RuntimeMethod* method) 
{
	{
		Record__ctor_mE35380D3DDF674FD4BF58412360D000E47DA4178(__this, NULL);
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_0 = ___0_rr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RecordReader_ReadDomainName_m0963F474267F57550B4AADBF8FC078B08CB93E4D(L_0, NULL);
		__this->___U3CCnameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCnameU3Ek__BackingField_2), (void*)L_1);
		return;
	}
}
// System.String Ubiety.Dns.Core.Records.General.RecordCname::get_Cname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordCname_get_Cname_m748E62B5BAE90369CDB7E5A16AC3BD1E351D7826 (RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCnameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Ubiety.Dns.Core.Records.General.RecordCname::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecordCname_ToString_m4C6E6F614A77C01727FE95DB15D2CEA026CE0B3D (RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = RecordCname_get_Cname_m748E62B5BAE90369CDB7E5A16AC3BD1E351D7826_inline(__this, NULL);
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
// Ubiety.Dns.Core.Records.Record Ubiety.Dns.Core.Common.EnumExtensions::GetRecord(Ubiety.Dns.Core.Common.RecordType,Ubiety.Dns.Core.RecordReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* EnumExtensions_GetRecord_m74733B121A9336D6919B1065817F0E3447058282 (int32_t ___0_type, RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* ___1_reader, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisRecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01_m6DFD69A3465654B5A56769C275DD72C1DCF4F895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordType_tE038672BFC25770D08365B50FC92F593EBA37C2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* V_0 = NULL;
	{
		int32_t L_0 = ___0_type;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(RecordType_tE038672BFC25770D08365B50FC92F593EBA37C2F_il2cpp_TypeInfo_var, &L_1);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Il2CppFakeBox<int32_t> L_4(RecordType_tE038672BFC25770D08365B50FC92F593EBA37C2F_il2cpp_TypeInfo_var, (&___0_type));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		NullCheck(L_3);
		FieldInfo_t* L_6;
		L_6 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_3, L_5, NULL);
		RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* L_7;
		L_7 = CustomAttributeExtensions_GetCustomAttribute_TisRecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01_m6DFD69A3465654B5A56769C275DD72C1DCF4F895(L_6, CustomAttributeExtensions_GetCustomAttribute_TisRecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01_m6DFD69A3465654B5A56769C275DD72C1DCF4F895_RuntimeMethod_var);
		V_0 = L_7;
		int32_t L_8 = ___0_type;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_004c;
		}
	}
	{
		RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* L_9 = V_0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = RecordAttribute_get_RecordType_mAE8F75362B57DE093B9A5E8F0FEBACDC9E28B83B_inline(L_9, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_13 = ___1_reader;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		int32_t L_15 = ___2_length;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
		RuntimeObject* L_18;
		L_18 = Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6(L_10, L_14, NULL);
		return ((Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D*)CastclassClass((RuntimeObject*)L_18, Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D_il2cpp_TypeInfo_var));
	}

IL_004c:
	{
		RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* L_19 = V_0;
		NullCheck(L_19);
		Type_t* L_20;
		L_20 = RecordAttribute_get_RecordType_mAE8F75362B57DE093B9A5E8F0FEBACDC9E28B83B_inline(L_19, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
		RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* L_23 = ___1_reader;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		RuntimeObject* L_24;
		L_24 = Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6(L_20, L_22, NULL);
		return ((Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D*)CastclassClass((RuntimeObject*)L_24, Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D_il2cpp_TypeInfo_var));
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
// System.Void Ubiety.Dns.Core.Common.RecordAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordAttribute__ctor_mCAE51C45C0C8B76E7C7084C9699482EF1A45B28F (RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* __this, Type_t* ___0_record, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___0_record;
		__this->___U3CRecordTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRecordTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Type Ubiety.Dns.Core.Common.RecordAttribute::get_RecordType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* RecordAttribute_get_RecordType_mAE8F75362B57DE093B9A5E8F0FEBACDC9E28B83B (RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CRecordTypeU3Ek__BackingField_0;
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
// System.Void Ubiety.Dns.Core.Common.VerboseEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerboseEventArgs__ctor_m437D7297CD4A72638701D8061419049BD51EAFC5 (VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		String_t* L_0 = ___0_message;
		VerboseEventArgs_set_Message_m01BEFAE51A83AC97F8A9DE227B1FD0E7CD4FCB78_inline(__this, L_0, NULL);
		return;
	}
}
// System.String Ubiety.Dns.Core.Common.VerboseEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VerboseEventArgs_get_Message_mA9639BAF795F4A0515C74CB6EE91B3F2B0CD918F (VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Ubiety.Dns.Core.Common.VerboseEventArgs::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerboseEventArgs_set_Message_m01BEFAE51A83AC97F8A9DE227B1FD0E7CD4FCB78 (VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
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
// System.Void Ubiety.Dns.Core.Common.VerboseOutputEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerboseOutputEventArgs__ctor_m15FEE86EE6AA23FDFF107AA7E330D5E566A763D4 (VerboseOutputEventArgs_t653A5F4BDE705AE98E436B26B1147033A6EFB026* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		String_t* L_0 = ___0_message;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Ubiety.Dns.Core.Common.VerboseOutputEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VerboseOutputEventArgs_get_Message_m5CF58017148E87C4E194903BB6300EF1E74F0D09 (VerboseOutputEventArgs_t653A5F4BDE705AE98E436B26B1147033A6EFB026* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_Id_m452D155D055E60790F8EAC03C7C8786186E8748D_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_QuestionCount_m6944E71103A18DD327E33F00CCA4403084FC51F4_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CQuestionCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_AnswerCount_mF805DD706C7221A3243603655E9D7153C6C98BC0_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CAnswerCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_NameserverCount_m8EE0F372A9A1D19E2CA543433B2B4CC99C6F35B9_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CNameserverCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Header_set_AdditionalRecordsCount_m09123884C005C9C0FD025E7D6D009D540675B823_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CAdditionalRecordsCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_Id_m85C044BC11EF7A3867E5937AC4998BCFDED0B5C3_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_QuestionCount_mFF9BD817E9E69BB27BB21345A82E2CBDFD8EAAC3_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CQuestionCountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_AnswerCount_m3314F95CEB725FDDB3A2749CF9A02B96E0E6852B_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CAnswerCountU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_NameserverCount_mE194DACB72FD0B30E6680D5C4A463F1B6FD74DE0_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CNameserverCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Header_get_AdditionalRecordsCount_m0AE102FB1EE9AA7D4CCB7BBA98AFF66A4A1867D4_inline (Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CAdditionalRecordsCountU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Question_get_QuestionName_m8B15666CD7C55B72C95DB140C8E244412CB3A53E_inline (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____questionName_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Question_get_QuestionClass_m5225419D0016B927E62DA634C1A357795C4696B4_inline (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CQuestionClassU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Question_get_QuestionType_m8535FC6F3AB1FCF43A9D187812A698A39236CFA6_inline (Question_t51FCD12E915574EFFBD7D1F344996B07DD55BBC2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CQuestionTypeU3Ek__BackingField_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordReader_set_Position_m6BE8D3717978BC8F1C0166281D787EB909248B0B_inline (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecordReader_get_Position_mF9811B81796B802E64C6ECB77B79E427DA9044EB_inline (RecordReader_t855FA69BB8684A4B0431849402048E9401285F4F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPositionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* Request_get_Header_mC79D5787DE4EAF7A16AAFEB67FD57E48E41ADF9A_inline (Request_t5EC29E166C112954C06827C8C28901253ABC6350* __this, const RuntimeMethod* method) 
{
	{
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_0 = __this->___U3CHeaderU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* Resolver_get_DnsServers_m41230E270342634D132FFD6B874521AF35FF1162_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_0 = __this->___U3CDnsServersU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Resolver_set_Recursion_m913F0246EAE34B07F24B03699E5A668DDA3F14A7_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CRecursionU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Resolver_set_TransportType_mC2ADDF22B194FE839D431E21006CDF518B1C5480_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTransportTypeU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Resolver_get_DefaultPort_mFD7867C84912372CE7128B20F9A035F9042C055F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_StaticFields*)il2cpp_codegen_static_fields_for(Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7_il2cpp_TypeInfo_var))->___U3CDefaultPortU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyInformationalVersionAttribute_get_InformationalVersion_m9C9650DC927EEA3A1ADC29572FC86942D6456A54_inline (AssemblyInformationalVersionAttribute_t24D264AA00C510A899261B63CA129794CCBFAF9D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CInformationalVersionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* RecordA_get_Address_mC01FDC4FDBBFDC9F2A8FD5BDD964A80277F6A98F_inline (RecordA_t307F68958C1D0C2094FB315D98B4D7E4F3F7C5C2* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->___U3CAddressU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Resolver_get_Recursion_m363EBE369298E0499E9131A4394D4EF6542C0116_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CRecursionU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Resolver_get_TransportType_m65C7BDF67D51BFA67D6B20D1FE8A80B26A717048_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTransportTypeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Response_set_Error_m9D123C0A7BD42AC2CB338419742F7CB521B6EF3C_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VerboseEventHandler_Invoke_mCA00A2A3546ADA2DAE9AC25EB7BC2FBBD4CB0FCB_inline (VerboseEventHandler_t8039823F72797F32E2BAC06DA3B4FFAB35C6CF7D* __this, RuntimeObject* ___0_sender, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Response_get_TimeStamp_m218553F6622D9007F20DD10FC434ADD59658BF13_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CTimeStampU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResourceRecord_set_TimeLived_m1B6A00C9BB82EF621A7BCFDD8CA9C5820CCF855E_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTimeLivedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* Response_get_Questions_mD87E1142B43C6CC0810DFBEB594994EC84B2A85A_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0C8B8F9BA826A06C0DDA4D119D2CA8CFD5301CFA* L_0 = __this->___U3CQuestionsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* Response_get_Header_m57A498392DA28CE99A68A551C1E005BCD953ACE2_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		Header_tEB0EF756EA225832BC4C277C890665D7BDEF7E3A* L_0 = __this->___U3CHeaderU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Resolver_get_Timeout_mF50B8ED5892098FF659163B93EA195ED2278F117_inline (Resolver_t070595F272D5A39E5B0BC78F64773594D0B492F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____timeout_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* Response_get_Answers_mE16930B04BDA99975890AF520B9BEF633B3809FB_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9D8AC94AE5A186961D0E0158365E8D1F7DBF82EE* L_0 = __this->___U3CAnswersU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* Response_get_Authorities_mA8B7731F453C68239CB2A98788550AEC6DCF701C_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8495645EA7A19014CF8116B843091FE2672BDECB* L_0 = __this->___U3CAuthoritiesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* Response_get_Additionals_mDD10FE503E759BDE32BBCFDD05E383A2D3C9F52C_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t31B3452AFB8BED9E6392C33FEED8CA7F01B47418* L_0 = __this->___U3CAdditionalsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceRecord_get_Type_m3461765E4063C2ACBB3FBA163885068368335B37_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Response_set_MessageSize_m31F390FF9AD7D9CC5A0FEE54B2FF8195A3859B17_inline (Response_tB85C1D3634171D9AA6C7B38F4078451F3E7D0EA7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMessageSizeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____port_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResourceRecord_set_Ttl_mF7DEB441862A2AF10026651F48BDCA4265EC5AD5_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->____ttl_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* ResourceRecord_get_Record_mF2176391C6E697651A3CA28FE7DB6389D49A281D_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* L_0 = __this->___U3CRecordU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Record_set_ResourceRecord_mEE6745C1DC7DC1CF1F9F66FA14AA9D079EAAD468_inline (Record_tBE677402DBBB856C9026A2AFEBF78F0D1043E75D* __this, ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* ___0_value, const RuntimeMethod* method) 
{
	{
		ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* L_0 = ___0_value;
		__this->___U3CResourceRecordU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResourceRecordU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceRecord_get_TimeLived_m5B496D9020DFF3BEFA9A0EC68F64FD62B2F37FC9_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTimeLivedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResourceRecord_get_Name_m256CD5E96F2573DFEC9A588CF9F88B1DCC662758_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceRecord_get_Class_m73E2E11232B90CE31030DA4A8F69C6BB1D83BEF0_inline (ResourceRecord_t7791E5BBCF6021476551DDF445307CA49B07824E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CClassU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordAfsdb_get_SubType_mEDDFAF0FA0E75E628099A72D6EE2518F445E44DE_inline (RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CSubTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordAfsdb_get_Hostname_m1B69A236F4BF229FEB4461A4123ADE8DA975CC2E_inline (RecordAfsdb_tAA66C931D7A0C3AEC017D74EB5D39E9C7D66D2B5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CHostnameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordCert_get_PublicKey_m1955A60027E379C6B9D0EBF2D0B190E74EE99389_inline (RecordCert_t471A890006FBF26134035BEA473FDF88D5B42A7A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordDname_get_Target_m4E33640889120EFDA2819929961EE4733DD63D4C_inline (RecordDname_t726AC7580CCFCFA272A2B663E07FC8490E46FA73* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordDs_get_KeyTag_mBD0B4A18F9DBF0205DE146AD0D0289310C91985A_inline (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CKeyTagU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordDs_get_Algorithm_m560F1D84FD2C2F5623214A4218C472DD71230BD9_inline (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CAlgorithmU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordDs_get_DigestType_m170E7BBF50A235623A82A65CDE5B0F3216448AAA_inline (RecordDs_t0A8EC67061B6B431F3BF6D6A712F1E8A5173D702* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CDigestTypeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordHinfo_get_Cpu_mDBCF03D423E514B9C5326249777D054587652CD8_inline (RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCpuU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordHinfo_get_Os_mDB238BD2D7F7529DD01F2439BDD7AAB3E09E0B86_inline (RecordHinfo_t40C3116AF2F94D4B5D185ECBE77D8596A6A4DF2D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordIsdn_set_IsdnAddress_mE08DEE84026DF64004B0CF66ED0C3FC5A44443F0_inline (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CIsdnAddressU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIsdnAddressU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordIsdn_set_SA_mC43D9F374C4EF8193FF06C0DF1E45D5479E43831_inline (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSAU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSAU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordIsdn_get_IsdnAddress_m0D23039B490B0E59676199A113CC5FE9DA6477BA_inline (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIsdnAddressU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordIsdn_get_SA_mE79C5CBA3B1373200D253AAFCB838318329512A0_inline (RecordIsdn_t33B29572B5A53C198D337BD83C0E0A35EF08C5DA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSAU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordKey_set_Flags_m6998C9DE9250B2044515375D3E3C50C52AD4AC19_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CFlagsU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordKey_set_Protocol_m892EC433FAAB36359557691764AE7C991FE1C6B1_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordKey_set_Algorithm_mB1AF881A8EB1372C069DD03574CDC3C8BDB42543_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CAlgorithmU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordKey_set_PublicKey_m2352F238D7CE5B7EA39FDC72433AC74A18CFDD34_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPublicKeyU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordKey_get_Flags_m19ACB7FA5582FC4C6086584060C04451A81B199A_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CFlagsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordKey_get_Protocol_mC9C913A03BCC7F7CA7CB489C149582DED63DC12C_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CProtocolU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordKey_get_Algorithm_mC21D23B4B784D41C4CB2BF981CF2981572D28F52_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CAlgorithmU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordKey_get_PublicKey_m3CD0D3B66B9C6EAF9ED3EB10E9E26AE31C7A1C72_inline (RecordKey_t4F6F3CDC022C46FFB8F4D4974114705C8AE97297* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordKx_get_Preference_m01404544D5C6BAA367E9B95D0521428BE318DE51_inline (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordKx_get_Exchanger_m7C16A546DA553CF40F18CB4C51A648553AFA4A8E_inline (RecordKx_t7222BC54F5C2FFF12897FAAF52C8F02301B8D1A2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CExchangerU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordLoc_get_Latitude_m3564B63357DCC2E7381983EAF005D9BB39F04783_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CLatitudeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordLoc_get_Longitude_m4BEF8538F63E3217E050FCC2866514079F6F3343_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CLongitudeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordLoc_get_Altitude_m3FA405BAE7100DBB1C4A91918D45D6DD6574ACCD_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CAltitudeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_Size_m6B0EBBB9B76BFD714BC75909951374470C86ADFD_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CSizeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_HorizontalPrecision_mEAD4CCC803CBD60202E9F9C2054AA48887F40602_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CHorizontalPrecisionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordLoc_get_VerticalPrecision_mBE6E243AAC6F6BABDA481F7F0807386D17249BE1_inline (RecordLoc_tB6C76EE24C88DE112F56416E7391B91DFF7B164E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CVerticalPrecisionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Order_m986E7E28D127E7ABBEE5995F7F984B9B22F18C0F_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3COrderU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Preference_mCEA50578CB7630A1FB01FFCF5A9DEBBB19B7B832_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPreferenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Flags_m47A719B724478E41B9E20F21C5A92580039D8FB6_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CFlagsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFlagsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Services_mA6B7318BFCCF64C784F39EAF8FCC9CFC5F44184D_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CServicesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServicesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Regexp_m5CC68A94B44B10459F423BB65BB118BFBBD80E17_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRegexpU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegexpU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNaptr_set_Replacement_m2B91E2C60179E6BF8E5A0195A2D6A774A3FC7503_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CReplacementU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReplacementU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordNaptr_get_Order_m1BC01A45257ED5577FC961103C607D05395EE706_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3COrderU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordNaptr_get_Preference_mAF78AFAAEF247899F009D65887B4C6098A702FED_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Flags_m2DFAFB5ADDBDBD24F14F0F5E449C9C33970C34B4_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFlagsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Services_mC281C3BBFA9415CEDD8ED4F876C8018D405EDCEB_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CServicesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Regexp_m2F0409840C5E69C977C189235B0A71B1F1F83029_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRegexpU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNaptr_get_Replacement_m0A162169FCC7FAD93533C353949D956C0237810B_inline (RecordNaptr_tF59247388BE0D2F8A60983399F9743F186F5F175* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReplacementU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNs_set_NameserverDomain_mFAF9857756A5320ACDB5C8A0F7FE2EB15B7C3C07_inline (RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameserverDomainU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameserverDomainU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNs_get_NameserverDomain_mA2FFF0435B9F3CFF5DF4390F59A665A5743E199F_inline (RecordNs_t61F7EC3A3B3B71B488623ABF9D4718286A0296F7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameserverDomainU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordNsap_set_Length_m373FD4E6082CD21378E293E6605A0D7837236CD8_inline (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CLengthU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordNsap_get_Length_m8EFA597BDC05A8E4015065B82FB62FB964FB8532_inline (RecordNsap_t4050DBC3F41AB164D04FC1637BDD7A3F6E9D424F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CLengthU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordPtr_set_PointerDomain_mCC986A5600164BD9156159AFE85665DCD687A4D9_inline (RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPointerDomainU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointerDomainU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordPtr_get_PointerDomain_m2BC0CDFAA2EECEBBC68BB195D0420162AE621F35_inline (RecordPtr_t49156B5C5BFCC09C1F161171ABA56AC963044EED* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPointerDomainU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordPx_set_Preference_m4E6AAC673F3BAE3D25D890FFC56FE6C534F8B7F6_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPreferenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordPx_set_Map822_mD945E4283268459FA20879259CF1353697CBAB00_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMap822U3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMap822U3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordPx_set_MapX400_m5A67A1B844923247A8A50CD0F6A1FF71C3EE3316_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMapX400U3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMapX400U3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordPx_get_Preference_mD01246757FFCFFBD0FC00ADA7D8A40B56B0115D9_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordPx_get_Map822_m79B72AEFCF44A77B70200DAF15EFB7527E753181_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMap822U3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordPx_get_MapX400_m32B89F9E5530187B5761AC531C83D5B1C1DC0690_inline (RecordPx_t20621ED753AC7E12D0DF139B2007C289473C5616* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMapX400U3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordRp_set_MailboxDomain_m2574CEFE4B16F5A5127B80E9E8A2A6A25ED5E849_inline (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMailboxDomainU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMailboxDomainU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordRp_set_TxtDomain_m33E062FDC700B00D437C03A98352DC87A8372B65_inline (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTxtDomainU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTxtDomainU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordRp_get_MailboxDomain_mD68D69F937F5F9F62AAE6EC37301741C213C57B0_inline (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMailboxDomainU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordRp_get_TxtDomain_m8EFE3A422A22E643AFB1473CC4B4C12E7EDF82D3_inline (RecordRp_t1BB4748B075E6D4F84D7C791CF5BCA6C7E028027* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTxtDomainU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordRt_set_Preference_m15355690F0577FC46967926C23E662CCF995F403_inline (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPreferenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordRt_set_IntermediateHost_m4C8762C67C68B6A3F186F35C5761470E87F8309E_inline (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CIntermediateHostU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntermediateHostU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordRt_get_Preference_m561484C13865269C3EFF4ECE4E32695819FB2BF5_inline (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordRt_get_IntermediateHost_m6A769DDF346083B59AAB83D9E3BCB09BB463B358_inline (RecordRt_tCB7814E3F6B9F1ADA5214BF6851DA47E393B6C87* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIntermediateHostU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_TypeCovered_m445AD32E5E8050A14C203B138DA20120D4D851E4_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CTypeCoveredU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_Algorithm_m78A3B9B932D231C28F61B5D771F60AC7EC29CFD7_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CAlgorithmU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_Labels_mA3D3760B88403D77AB6229A3183D2564D4DB27EC_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CLabelsU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_OriginalTTL_mB97DE26A80B3C998299824A95593EC71037246BD_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3COriginalTTLU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_SignatureExpiration_m34D03E078F2AA93BD649CB5A5B50A48776F25927_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CSignatureExpirationU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_SignatureInception_m007AA09E1E17F97D77A457710609149BAC56B17A_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CSignatureInceptionU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_KeyTag_m5FDE40A2016EA3523A0530415683584F8DC63E43_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CKeyTagU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_SignersName_mAEA4B26F8C4AF619615458D2B90A8EB8D3E1A7EA_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSignersNameU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignersNameU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSig_set_Signature_m95151CA0F978931A75D78D2D467E7AB4EF31EC71_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSignatureU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignatureU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSig_get_TypeCovered_m5A21E51E4AA06158CB0D3D5A5455A07D153A865A_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CTypeCoveredU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordSig_get_Algorithm_m8FA0001FE64CB2673053BE393AB4072AA77DA089_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CAlgorithmU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t RecordSig_get_Labels_m57D2E96F208E84C640ED8BD5D9002722F3A2A5EB_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLabelsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSig_get_OriginalTTL_mD114E358687F6661D99FAAA1896DCFEF7E15BFD0_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3COriginalTTLU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSig_get_SignatureExpiration_m99899B8885600C7DEF0338DC8C1EA1769D84BC23_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CSignatureExpirationU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSig_get_SignatureInception_mAF869907C46454B2AE2291418A342A55B8359BA7_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CSignatureInceptionU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSig_get_KeyTag_mD33503907980CDB313596A5BF3F952A653A5EF34_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CKeyTagU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSig_get_SignersName_mD6486C29CB17AF149BAEB902D9E8FDF0658315BC_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSignersNameU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSig_get_Signature_mD55305791324C847D114E38CE82095BE888AA56A_inline (RecordSig_t8098D12648B1E5CABE038A7FD5917A48BE247034* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSignatureU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_PrimaryNameserver_m97733BC4C19B0D4A6D2F0ED3080C0B7980A78E86_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPrimaryNameserverU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrimaryNameserverU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_ResponsibleDomain_m6A4CDABA27001201A97F7D8AF40023D7AF55940D_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CResponsibleDomainU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponsibleDomainU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Serial_mBAA0FE1B0B78A2C32A9326625198E2D57C76B9DA_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CSerialU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Refresh_mF437DDA086A27FC265AF8F13BD42D0D645C14D59_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CRefreshU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Retry_m22C4AA1C3EFFF4A81583360E75B2124DF2CB5CEA_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CRetryU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Expire_mDC46096BDC6BD0DB977DD4B96E2D4E0F3843DB12_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CExpireU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSoa_set_Minimum_mBAC5BB30A42621127019FA6D94EB2C6898C78410_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CMinimumU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSoa_get_PrimaryNameserver_m104DD33DB6606C0E661AF68945103378E2DD975F_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPrimaryNameserverU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSoa_get_ResponsibleDomain_mB19DCB18FA4C09338628A354E318CC3961B63AE0_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResponsibleDomainU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Serial_m185CE367213770A78804DE1F0EEFB78CE9DB08A9_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CSerialU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Refresh_m1F87BD8FF67E7D02006F83BDDE67BFAB7528F68F_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CRefreshU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Retry_m7F62C5946CF0C906B536912EF37AEFA69A3B606E_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CRetryU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Expire_m1971BC63E251DDA92B5505CE438BAAF8E5E30D2E_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CExpireU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordSoa_get_Minimum_m48AF2F1B972DF4EF074D4E3F1A75444399264B90_inline (RecordSoa_t072E56567656F82C44BFAF7A5EF9AA1142B0466E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CMinimumU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSrv_set_Priority_m8CC732BE289B412109987EAB7158E28BBE10F2E5_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPriorityU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSrv_set_Weight_mAD711E9873302D6B76DFA96301FB5666691BE3FF_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CWeightU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSrv_set_Port_m270EDD1EF2203A3F8208DBC939D6A5527D613593_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CPortU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordSrv_set_Target_mD8A32496659027D45E029C24880F0170DF6A6643_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSrv_get_Priority_m3D41E38F9AE07B53BC4E3BDB1D62D3F0C1FBE21F_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPriorityU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSrv_get_Weight_mAA32F64721EFE5E296E3CA9FB5B4EBBBA93A730E_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CWeightU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordSrv_get_Port_m9FFB83834577238BF9CBF792FA07247D3F533E77_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPortU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordSrv_get_Target_m745A1955E87BA9494FA2BD250F97991A792E2964_inline (RecordSrv_t602E63A5FF428D5DF33E966AB2787995BF4AFD0D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_KeySize_m32835599873879E0D1905A6F25B23CEB1A42ADAD_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CKeySizeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_OtherSize_m5058EDD5F7156288831C44A0F836DC599F2F1004_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3COtherSizeU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordTkey_get_Algorithm_mA781673105F2DF93EEA8550B574B3715BC76485A_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAlgorithmU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordTkey_get_Inception_mC93E93F86C00235C57E64338AADB981674D7F05B_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CInceptionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t RecordTkey_get_Expiration_mFAAD09A5E8369E8FC3ADA9B8F0818C48B13242F8_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CExpirationU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_Mode_mF3A931E538BF10228AB74A61291BB9252E66B28F_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CModeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTkey_get_Error_m48F366706D5D1CA028E46EB325521CC29BA424E6_inline (RecordTkey_t0B8F1C05B2BFD0209981656A1F467F06072AD8ED* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CErrorU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_AlgorithmName_m72F2FF988E799D6BA93636686B7030B7BCA17943_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAlgorithmNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAlgorithmNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_TimeSigned_m19C4CFE559E5896EF97261F68434E9D3E96FE123_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTimeSignedU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_Fudge_m9932FC0D42EE7E4D9014D26F70B5EBBB38F16994_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CFudgeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_MacSize_m5F667288EEF68227BF424A6791DE5B5587A779F8_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CMacSizeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_MacSize_m77A1C53CBD3B4AE7F56F40A71EA0E9EFCFF20A86_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CMacSizeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_OriginalId_m9B28D6B46FFAF1F615E876D50B6BD04FF69A2F19_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3COriginalIdU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_Error_mB8D0501EECBA518F3F51BE0D924CC8C49FEF7DFE_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordTsig_set_OtherLength_m2186F99E23B2FF7C317BF7C8ACD8C8ECBE052806_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3COtherLengthU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_OtherLength_mC7BE30B0A8E9902A6317C8C76786E029BCFC9976_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3COtherLengthU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t RecordTsig_get_TimeSigned_m56D15643332B4F5134349ADCBFB1A29B949A3EBB_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CTimeSignedU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordTsig_get_AlgorithmName_m728184815C25CA79A94C4C7731A81FDCB1A84623_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAlgorithmNameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_Fudge_mBA7ECD3A3CEA1D09E60385846112366F3FB38DDD_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CFudgeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_OriginalId_mF6123A2DC12E3931FA484EBCCA75D6829B2C689C_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3COriginalIdU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordTsig_get_Error_m8812923B3177168F5A2E53A5A3326C9BA87B8D40_inline (RecordTsig_tD429C38492E085C3CEC737B50A88CD389490E10F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CErrorU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* RecordTxt_get_Text_m0EB778E5CD3BB93FC87E8F2FC2CA3E5828A8967B_inline (RecordTxt_t516373A60FD9CCC9D7AF73F58EC45811BFE31A05* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CTextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordWks_set_Address_m1A7D5C5288291C139678FD9BAA7859A45034FC4C_inline (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAddressU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordWks_set_Protocol_m6B392019CE6B74D4024898C9655BD23898009041_inline (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CProtocolU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordWks_get_Address_m56B23C7669E17DC8868D09ABAB898049B562D9D1_inline (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecordWks_get_Protocol_m0123BEB85B2CE3801C64F01E2165CB429BD27505_inline (RecordWks_t5BD5CE2BFF6E5D393BCA543C4921222759963A2E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CProtocolU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordX25_set_PSDNAdress_mA671B82352CBA9975D46D98D001F7D4C6E1253A4_inline (RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPSDNAdressU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPSDNAdressU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordX25_get_PSDNAdress_m6B298C731044661BF589CA27D4245B63493348C4_inline (RecordX25_t65BB7E8A3B253275ACC381FFE1D1CE0302F76D39* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPSDNAdressU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordGpos_get_Longitude_m3FDCB286691C28231285A0C7F10B2CE4E712F919_inline (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLongitudeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordGpos_get_Latitude_mD66FDAD6B85AA630866C4FD977E1D3ED1881CCB7_inline (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLatitudeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordGpos_get_Altitude_m43793025E51D381941FAEF802F7B70C02AE990C2_inline (RecordGpos_t0D546A6556CF07715A585D3BB0296626F27BF372* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAltitudeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMd_get_MadName_mBC4EDAC91CDA332EAA981A463120A781EA97D6EC_inline (RecordMd_t877F2AC8EAA563246D911594FFDF2D9B4CC0986E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMadNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMf_get_MadName_mA14EF5F466794D8655671479E09586C2547F4689_inline (RecordMf_t1AE13A3E638557DD3630EE8FCD20845CCDE47BA8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMadNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNsapPtr_get_Owner_m71EB476BB2289A950B7E1DF1EC20FBC0B1BACF64_inline (RecordNsapPtr_t27669D358D436A3C7C95D0517E97CA59C9B85F7E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COwnerU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordNxt_get_NextDomainName_m8CCC863EB8DD289A947A0DE7FC542034A6C1CCD8_inline (RecordNxt_tDCBE52E71DF85C69C47D8EB05AB91B2E481B38A7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNextDomainNameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMb_get_MadName_m717DDE8A64CAB774B17B42DAA632E998BEDCB4D7_inline (RecordMb_t8C4062A4BFD4835C81427802BD75AA222751087C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMadNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMg_get_MgmName_mFF21D558D02B5FE6D813722A8D91EE9D16C6CD6F_inline (RecordMg_t1B1CF282B38EDB2770F24015E1735210CD9AA002* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMgmNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMinfo_get_ResponsibleMailbox_mA3AEF3CF1C654CBAC603D78F195ECB388631A7ED_inline (RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResponsibleMailboxU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMinfo_get_ErrorMailbox_m1BB12680C635210EBCCB2D0A56381216E63A5FBE_inline (RecordMinfo_tAB9F613AE3E4949517C0F7E9ACFC90DC030A4684* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CErrorMailboxU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMr_get_NewName_m189BCC4388666292209A29213DCAF2E89DA01315_inline (RecordMr_tB1B7AD7A31D43691D8CEE3578174A965E17793CD* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNewNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RecordMx_get_Preference_m70DA3F5EA03AE964512B571F3FFE7CBB75ABCFB2_inline (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CPreferenceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordMx_get_Exchange_m177E920BEF6EA7306EFDB8536131706F95249243_inline (RecordMx_t2AE50BB7F491390A817D5FCF2C3B3AF3D4604501* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CExchangeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* RecordAaaa_get_Address_m5E61D5D7CF8DB0F1F8D867170E6377B28FDC9E1E_inline (RecordAaaa_t76BE5162279D217FF190F0B22ACAFBA89BDCE40D* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->___U3CAddressU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RecordCname_get_Cname_m748E62B5BAE90369CDB7E5A16AC3BD1E351D7826_inline (RecordCname_tED5B4470CF1AF07F43B2D0E99CDDC506955EE9C4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCnameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* RecordAttribute_get_RecordType_mAE8F75362B57DE093B9A5E8F0FEBACDC9E28B83B_inline (RecordAttribute_t4CFB85D357B128E839F7EC8A2185148CCF8F5C01* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CRecordTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VerboseEventArgs_set_Message_m01BEFAE51A83AC97F8A9DE227B1FD0E7CD4FCB78_inline (VerboseEventArgs_t5C1D3F406180DF4CF450F392737D61F0F94A3DA1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___0_item;
		((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
