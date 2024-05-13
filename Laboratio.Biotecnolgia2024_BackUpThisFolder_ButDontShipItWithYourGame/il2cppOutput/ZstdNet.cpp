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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Byte[],System.UIntPtr>
struct Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D;
// System.Func`2<System.Object,System.UIntPtr>
struct Func_2_t1CA3D8703258E9E96D940267D7F962E15C905428;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.UIntPtr>
struct IEnumerable_1_tE0B1028A0B6450467C9CD37103F51973866FC9AB;
// System.Collections.Generic.IReadOnlyDictionary`2<ZstdNet.ZSTD_cParameter,System.Int32>
struct IReadOnlyDictionary_2_t29825F1D0A620274A9186E639AEED8797A6C69B4;
// System.Collections.Generic.IReadOnlyDictionary`2<ZstdNet.ZSTD_dParameter,System.Int32>
struct IReadOnlyDictionary_2_t69EC7F2EFCF7DDFC09CB6EBAC984EF33FDCE7175;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UIntPtr[]
struct UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// ZstdNet.CompressionOptions
struct CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F;
// ZstdNet.CompressionStream
struct CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314;
// ZstdNet.Compressor
struct Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E;
// ZstdNet.Consts
struct Consts_t39B9C7C9E6D6C548E31B542BB14258AD9A660714;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// ZstdNet.DecompressionOptions
struct DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991;
// ZstdNet.DecompressionStream
struct DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44;
// ZstdNet.Decompressor
struct Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.OperatingSystem
struct OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ZstdNet.ZstdException
struct ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C;
// ZstdNet.DictBuilder/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0FCABE3100133FEB83F2205D9AA0F046254705D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1E73829B8BC5BDF7F82E2C0210ED57078DE7AB48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1569142CA46DD16B66EE9531104787F1C3913AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tFD142AF154D35ED6BCCFA3FBF42CA6CD0333DE54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t29825F1D0A620274A9186E639AEED8797A6C69B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZSTD_cParameter_t9851A030CDDD43B5EBA7210710C35D22EE5E7B7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZSTD_dParameter_t53C714FCCEC117249B53096024CB3B3750172B47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral088C8DA6BCDFFED2F4B22F7DB3FD99C735200741;
IL2CPP_EXTERN_C String_t* _stringLiteral08F6FFC8F4268D6740EE532A66507E785B5C1FCF;
IL2CPP_EXTERN_C String_t* _stringLiteral156307231A898C360E6FADFE3CDE5F7254234BF0;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4908BF0936B537B6A39A4EACD2BD389033325122;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8940A7A27053472EE1D698BFF5EBE3237D0ECF;
IL2CPP_EXTERN_C String_t* _stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7;
IL2CPP_EXTERN_C String_t* _stringLiteral8D545112AA0FC31B8A0916A39D7225EBE87A1A56;
IL2CPP_EXTERN_C String_t* _stringLiteral8D5F51C341264B91EFC88E49B7FF6B69E238B25A;
IL2CPP_EXTERN_C String_t* _stringLiteralA0BFE0A3ACC45D2335A960B7191B3ADDB281E867;
IL2CPP_EXTERN_C String_t* _stringLiteralAC223F734C72988BC84E2B034ABBBD25E7B00EDC;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A303E06C858C222F56C00774C561B711946C52;
IL2CPP_EXTERN_C String_t* _stringLiteralBCEC786CC2F339B80239A034E08939B4CEA9B7B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC013887C8B6B15B742E95F9F144765E8796BFD94;
IL2CPP_EXTERN_C String_t* _stringLiteralC07E7B0D9A1C7DE516F902C92101A565AD126F1C;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC2963CE7572F195587FDD579A9A1549483B36F56;
IL2CPP_EXTERN_C String_t* _stringLiteralC37464CB9EEB6BBAEDCD12F95DBD12CE7828C266;
IL2CPP_EXTERN_C String_t* _stringLiteralC6C8B72226E4343DE7DD8F28557CD57F468D45DD;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12;
IL2CPP_EXTERN_C String_t* _stringLiteralD69498C3805EDCB3D4A5DBBDC06CB4C696F53665;
IL2CPP_EXTERN_C String_t* _stringLiteralDEDCF37206A03E4CE4438C517B164F328C678509;
IL2CPP_EXTERN_C String_t* _stringLiteralE143A979BB29938A5D87FE8F214D8722415A670F;
IL2CPP_EXTERN_C String_t* _stringLiteralE70C155BEC2548B47D08CE2E0F581A28DAD23304;
IL2CPP_EXTERN_C String_t* _stringLiteralEF555F0B7DCFA91AC08FBD8D6A3BEE1A0C3C7DE0;
IL2CPP_EXTERN_C String_t* _stringLiteralEFFD59D91C40FC6E847188B2E6C9BF214CD91B52;
IL2CPP_EXTERN_C String_t* _stringLiteralF50DE9F1418B7B95141C23A957CBB076897E3866;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_mB74F6F10590860EA0DF97CE29FF1E5FAD1537564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_m00A0D62B4821EF1AB01EF6A7EB5C1FB9BB626292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_mC298A0EAA88F7E12E1B81042565F11AAF4AD579B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_mDC54C8A406FBFA32FBDE0390C253BA2CF0A8E74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_m44076D57A0625EE501EBE86BF8A9B40207E317CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_m16E351DA51B3B37ACB75F2DC03918F5F5C033104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionOptions__ctor_m7CBFCC6D4D93E42A8A307980F5AF30EB043D4792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionOptions__ctor_m9322E2BE1D020C3BB1CA013D2BEBEC9AECC847BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionOptions__ctor_mA01EE387E7D68102B75040631A413C7521D4A584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_EnsureNotDisposed_m92D019A76DD3CCA9AEDD36DE0742D7D863A4879C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_FlushCompressStream_m399100139AB217F2BA9EF68A345E54C20435BC24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_FlushOutputBufferAsync_m64C808AD99BFCFA25E60C9684B65309E9FD9D019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_Read_mDE4C89C397202F1E67CC4861274336362D307156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_Seek_m9C92BB48D935C8DA3670427398A3A05E8D4BA54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_SetLength_m8B8321FA229C25F046A1FA41ABBBF85B1DBCB376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_WriteInternal_mDC960D7BD922AE7602C060BF5CF89CD97438FCD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_get_Length_mA081E9D267487B4265F8D5D4D4110EF48C514266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_get_Position_m20AA1F79880BFA9DC90552809707AC361785DE9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionStream_set_Position_mF271F5D755B95EA79DE53179686A9A82E5BC395A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Compressor_GetCompressBound_m2A3BAB1B145E099015523A6DF0D0B25C616CCAC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Compressor_Wrap_m59F9E417AA23CE7B74EFC05B64D5602A05EAB96B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Compressor_Wrap_mFAECF8CF0E10234A75AA170D1862331E5DE73AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionOptions__ctor_m2371C1092745E6B515819CBB58FB743D32017E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionOptions__ctor_m51E6CB659A968830FDC15467FA78E4E1A8205ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_EnsureNotDisposed_mBA2C586954AEB743CA6370E2341BA9058F8881F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_FillInputBuffer_mFDA495B4237D5519FDB275E4B66DF8FD972D5962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_Flush_m0354D8B2C06CFFB020AC97C4D02E0C99885D25E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_ReadInternal_m83FDDE3ADF23BA422EF62A450DF9852F40FBF2B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_Seek_m6F8C2CBDBBF4509A7FBEA68F02108879BC02F303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_SetLength_m14B989B506547A811C7106E2BE0B4A7C805A4430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_Write_m0592DAD6DB82252A6B4169DEE065EBE31E9952B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_get_Length_m90EAA3FA248FFC950F59DD5469D97E59ABE437E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_get_Position_m0D17097DDC1EB186DC965BE04990F26D755165C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecompressionStream_set_Position_m857FB69479F439092F58D1AC6C5A44837A2173E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decompressor_Unwrap_mE8A5ABE3C37FAFD1B70CF98A007EA40DAAB37316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictBuilder_TrainFromBuffer_m3C69DEA01DBDCAA18AA52E7B11C22C5A46D9C71C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisUIntPtr_t_mBCF1114CB7019CD3A796788A67F0934E0D54EFE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisUIntPtr_t_m32081932BE15517B6B769AD1C59D0F3525E1F123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExternMethods_SetWinDllDirectory_m035A7D4FF93381B610DF1E0B3B9F4028A4F017A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReturnValueExtensions_ThrowException_m9B62174B6D289D4F7BB4D5A73D8E02A5F17342CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlushCompressStreamAsyncU3Ed__30_MoveNext_mA53DE7F00CED731DFDEBBA33B169120677AE62AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadInternalAsyncU3Ed__12_MoveNext_m8D376F030A1B2679793FBBF36B3B964C251EFA2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CTrainFromBufferU3Eb__0_m2FA00880A544726AC629758DB36B6B5F3C34FF9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWriteInternalAsyncU3Ed__11_MoveNext_mD7D426FCC35748E799B338C39982B5CA70DE70FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC5F82525052F87E067AF54DD0C13A5D8A5EDBDB0 
{
};

// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07  : public RuntimeObject
{
};

// System.Buffers.MemoryManager`1<System.Byte>
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
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

// ZstdNet.Consts
struct Consts_t39B9C7C9E6D6C548E31B542BB14258AD9A660714  : public RuntimeObject
{
};

// ZstdNet.DictBuilder
struct DictBuilder_tBD364C6045C24BF3592447448E06F9FC0F5FDFDF  : public RuntimeObject
{
};

// ZstdNet.ExternMethods
struct ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF  : public RuntimeObject
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

// System.OperatingSystem
struct OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557  : public RuntimeObject
{
	// System.Version System.OperatingSystem::_version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____version_0;
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;
	// System.String System.OperatingSystem::_versionString
	String_t* ____versionString_3;
};

// ZstdNet.ReturnValueExtensions
struct ReturnValueExtensions_t1B9DDBC8EB7A56B0880F7271FE14BF59CC455E58  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// ZstdNet.DictBuilder/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9  : public RuntimeObject
{
	// System.IO.MemoryStream ZstdNet.DictBuilder/<>c__DisplayClass0_0::ms
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___ms_0;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>
struct KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_cParameter,System.Int32>
struct KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_dParameter,System.Int32>
struct KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ___m_configuredTaskAwaiter_0;
};

// ZstdNet.CompressionOptions
struct CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F  : public RuntimeObject
{
	// System.Int32 ZstdNet.CompressionOptions::CompressionLevel
	int32_t ___CompressionLevel_2;
	// System.Byte[] ZstdNet.CompressionOptions::Dictionary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Dictionary_3;
	// System.Collections.Generic.IReadOnlyDictionary`2<ZstdNet.ZSTD_cParameter,System.Int32> ZstdNet.CompressionOptions::AdvancedParams
	RuntimeObject* ___AdvancedParams_4;
	// System.IntPtr ZstdNet.CompressionOptions::Cdict
	intptr_t ___Cdict_5;
};

// ZstdNet.CompressionStream
struct CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream ZstdNet.CompressionStream::innerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream_5;
	// System.Byte[] ZstdNet.CompressionStream::outputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer_6;
	// System.Int32 ZstdNet.CompressionStream::bufferSize
	int32_t ___bufferSize_7;
	// System.IntPtr ZstdNet.CompressionStream::cStream
	intptr_t ___cStream_8;
	// System.UIntPtr ZstdNet.CompressionStream::pos
	uintptr_t ___pos_9;
};

// ZstdNet.Compressor
struct Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E  : public RuntimeObject
{
	// ZstdNet.CompressionOptions ZstdNet.Compressor::Options
	CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* ___Options_0;
	// System.IntPtr ZstdNet.Compressor::cctx
	intptr_t ___cctx_1;
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

// ZstdNet.DecompressionOptions
struct DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991  : public RuntimeObject
{
	// System.Byte[] ZstdNet.DecompressionOptions::Dictionary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Dictionary_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<ZstdNet.ZSTD_dParameter,System.Int32> ZstdNet.DecompressionOptions::AdvancedParams
	RuntimeObject* ___AdvancedParams_1;
	// System.IntPtr ZstdNet.DecompressionOptions::Ddict
	intptr_t ___Ddict_2;
};

// ZstdNet.DecompressionStream
struct DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream ZstdNet.DecompressionStream::innerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream_5;
	// System.Byte[] ZstdNet.DecompressionStream::inputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer_6;
	// System.Int32 ZstdNet.DecompressionStream::bufferSize
	int32_t ___bufferSize_7;
	// System.IntPtr ZstdNet.DecompressionStream::dStream
	intptr_t ___dStream_8;
	// System.UIntPtr ZstdNet.DecompressionStream::pos
	uintptr_t ___pos_9;
	// System.UIntPtr ZstdNet.DecompressionStream::size
	uintptr_t ___size_10;
};

// ZstdNet.Decompressor
struct Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD  : public RuntimeObject
{
	// ZstdNet.DecompressionOptions ZstdNet.Decompressor::Options
	DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* ___Options_0;
	// System.IntPtr ZstdNet.Decompressor::dctx
	intptr_t ___dctx_1;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// ZstdNet.ExternMethods/ZSTD_Buffer
struct ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 
{
	// System.IntPtr ZstdNet.ExternMethods/ZSTD_Buffer::buffer
	intptr_t ___buffer_0;
	// System.UIntPtr ZstdNet.ExternMethods/ZSTD_Buffer::size
	uintptr_t ___size_1;
	// System.UIntPtr ZstdNet.ExternMethods/ZSTD_Buffer::pos
	uintptr_t ___pos_2;
};

// ZstdNet.ExternMethods/ZSTD_bounds
struct ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B 
{
	// System.UIntPtr ZstdNet.ExternMethods/ZSTD_bounds::error
	uintptr_t ___error_0;
	// System.Int32 ZstdNet.ExternMethods/ZSTD_bounds::lowerBound
	int32_t ___lowerBound_1;
	// System.Int32 ZstdNet.ExternMethods/ZSTD_bounds::upperBound
	int32_t ___upperBound_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
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

// ZstdNet.ZstdException
struct ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C  : public Exception_t
{
	// ZstdNet.ZSTD_ErrorCode ZstdNet.ZstdException::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_18;
};

// ZstdNet.DecompressionStream/<ReadInternalAsync>d__12
struct U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC 
{
	// System.Int32 ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::<>t__builder
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ___U3CU3Et__builder_1;
	// ZstdNet.DecompressionStream ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::<>4__this
	DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* ___U3CU3E4__this_2;
	// System.Memory`1<System.Byte> ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::buffer
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer_3;
	// System.Threading.CancellationToken ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// ZstdNet.ExternMethods/ZSTD_Buffer ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::<input>5__2
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 ___U3CinputU3E5__2_5;
	// ZstdNet.ExternMethods/ZSTD_Buffer ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::<output>5__3
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 ___U3CoutputU3E5__3_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::<>u__1
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ___U3CU3Eu__1_7;
};

// System.Func`2<System.Byte[],System.UIntPtr>
struct Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30
struct U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6 
{
	// System.Int32 ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// ZstdNet.CompressionStream ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::<>4__this
	CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* ___U3CU3E4__this_2;
	// System.Threading.CancellationToken ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// ZstdNet.ExternMethods/ZSTD_EndDirective ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::directive
	int32_t ___directive_4;
	// ZstdNet.ExternMethods/ZSTD_Buffer ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::<input>5__2
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 ___U3CinputU3E5__2_5;
	// ZstdNet.ExternMethods/ZSTD_Buffer ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::<output>5__3
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 ___U3CoutputU3E5__3_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_7;
};

// ZstdNet.CompressionStream/<WriteInternalAsync>d__11
struct U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF 
{
	// System.Int32 ZstdNet.CompressionStream/<WriteInternalAsync>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder ZstdNet.CompressionStream/<WriteInternalAsync>d__11::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.ReadOnlyMemory`1<System.Byte> ZstdNet.CompressionStream/<WriteInternalAsync>d__11::buffer
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___buffer_2;
	// ZstdNet.CompressionStream ZstdNet.CompressionStream/<WriteInternalAsync>d__11::<>4__this
	CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* ___U3CU3E4__this_3;
	// System.Threading.CancellationToken ZstdNet.CompressionStream/<WriteInternalAsync>d__11::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// ZstdNet.ExternMethods/ZSTD_Buffer ZstdNet.CompressionStream/<WriteInternalAsync>d__11::<input>5__2
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 ___U3CinputU3E5__2_5;
	// ZstdNet.ExternMethods/ZSTD_Buffer ZstdNet.CompressionStream/<WriteInternalAsync>d__11::<output>5__3
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 ___U3CoutputU3E5__3_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter ZstdNet.CompressionStream/<WriteInternalAsync>d__11::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_7;
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

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// <Module>

// <Module>

// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields
{
	// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::<Shared>k__BackingField
	ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ___U3CSharedU3Ek__BackingField_0;
};

// System.Buffers.ArrayPool`1<System.Byte>

// System.Buffers.MemoryManager`1<System.Byte>

// System.Buffers.MemoryManager`1<System.Byte>

// System.Reflection.Assembly

// System.Reflection.Assembly

// ZstdNet.Consts

// ZstdNet.Consts

// ZstdNet.DictBuilder

// ZstdNet.DictBuilder

// ZstdNet.ExternMethods

// ZstdNet.ExternMethods

// System.OperatingSystem

// System.OperatingSystem

// ZstdNet.ReturnValueExtensions

// ZstdNet.ReturnValueExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// ZstdNet.DictBuilder/<>c__DisplayClass0_0

// ZstdNet.DictBuilder/<>c__DisplayClass0_0

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>

// System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_cParameter,System.Int32>

// System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_cParameter,System.Int32>

// System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_dParameter,System.Int32>

// System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_dParameter,System.Int32>

// System.Memory`1<System.Byte>

// System.Memory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Int32>

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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.UIntPtr
struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.UIntPtr

// System.Void

// System.Void

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>

// System.ByReference`1<System.Byte>

// System.ByReference`1<System.Byte>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>

// ZstdNet.CompressionOptions
struct CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_StaticFields
{
	// ZstdNet.CompressionOptions ZstdNet.CompressionOptions::<Default>k__BackingField
	CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* ___U3CDefaultU3Ek__BackingField_1;
};

// ZstdNet.CompressionOptions

// ZstdNet.CompressionStream

// ZstdNet.CompressionStream

// ZstdNet.Compressor

// ZstdNet.Compressor

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// ZstdNet.DecompressionOptions

// ZstdNet.DecompressionOptions

// ZstdNet.DecompressionStream

// ZstdNet.DecompressionStream

// ZstdNet.Decompressor

// ZstdNet.Decompressor

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.MemoryStream

// System.IO.MemoryStream

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Array/RawData

// System.Array/RawData

// ZstdNet.ExternMethods/ZSTD_Buffer

// ZstdNet.ExternMethods/ZSTD_Buffer

// ZstdNet.ExternMethods/ZSTD_bounds

// ZstdNet.ExternMethods/ZSTD_bounds

// System.ReadOnlySpan`1<System.Byte>

// System.ReadOnlySpan`1<System.Byte>

// System.Span`1<System.Byte>

// System.Span`1<System.Byte>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

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

// ZstdNet.ZstdException

// ZstdNet.ZstdException

// ZstdNet.DecompressionStream/<ReadInternalAsync>d__12

// ZstdNet.DecompressionStream/<ReadInternalAsync>d__12

// System.Func`2<System.Byte[],System.UIntPtr>

// System.Func`2<System.Byte[],System.UIntPtr>

// System.ArgumentException

// System.ArgumentException

// System.NotSupportedException

// System.NotSupportedException

// ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30

// ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30

// ZstdNet.CompressionStream/<WriteInternalAsync>d__11

// ZstdNet.CompressionStream/<WriteInternalAsync>d__11

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.ObjectDisposedException

// System.ObjectDisposedException
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
// System.UIntPtr[]
struct UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B  : public RuntimeArray
{
	ALIGN_FIELD (8) uintptr_t m_Items[1];

	inline uintptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uintptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uintptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uintptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uintptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uintptr_t value)
	{
		m_Items[index] = value;
	}
};


// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_gshared_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_gshared_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method) ;
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Byte>::get_Shared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) ;
// System.Void System.ReadOnlyMemory`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ZstdNet.CompressionStream/<WriteInternalAsync>d__11>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_m16E351DA51B3B37ACB75F2DC03918F5F5C033104_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* ___0_stateMachine, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_m44076D57A0625EE501EBE86BF8A9B40207E317CF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlyMemory`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_gshared (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,ZstdNet.CompressionStream/<WriteInternalAsync>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_mDC54C8A406FBFA32FBDE0390C253BA2CF0A8E74D_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* ___1_stateMachine, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlyMemory`1<System.Byte>::get_Span()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_mC298A0EAA88F7E12E1B81042565F11AAF4AD579B_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(System.ArraySegment`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<ZstdNet.DecompressionStream/<ReadInternalAsync>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_m00A0D62B4821EF1AB01EF6A7EB5C1FB9BB626292_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) ;
// System.Int32 System.Memory`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_gshared_inline (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_gshared (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,ZstdNet.DecompressionStream/<ReadInternalAsync>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_mB74F6F10590860EA0DF97CE29FF1E5FAD1537564_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_gshared (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.Memory`1<System.Byte>::get_Span()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, int32_t ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.UIntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m47679A3FBF3CAEA9FBADAF869969BF8258587E42_gshared (Func_2_t1CA3D8703258E9E96D940267D7F962E15C905428* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.UIntPtr>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisUIntPtr_t_m97AAC95E48FAB0377C0C3E6AE0E139E8490843D4_gshared (RuntimeObject* ___0_source, Func_2_t1CA3D8703258E9E96D940267D7F962E15C905428* ___1_selector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.UIntPtr>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B* Enumerable_ToArray_TisUIntPtr_t_m32081932BE15517B6B769AD1C59D0F3525E1F123_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Byte>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 ZstdNet.CompressionOptions::get_MinCompressionLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressionOptions_get_MinCompressionLevel_m5F09F35F87DB556C46920B632B5C896F79B54062 (const RuntimeMethod* method) ;
// System.Int32 ZstdNet.CompressionOptions::get_MaxCompressionLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressionOptions_get_MaxCompressionLevel_mCE421AF3202F2B18E5E4534A7F3CD31AC6DE856E (const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionOptions::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions__ctor_mA01EE387E7D68102B75040631A413C7521D4A584 (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, int32_t ___0_compressionLevel, const RuntimeMethod* method) ;
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createCDict(System.Byte[],System.UIntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createCDict_mC908994AC4B65B69960A48302BBCB2A63168A06D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, uintptr_t ___1_dictSize, int32_t ___2_compressionLevel, const RuntimeMethod* method) ;
// System.IntPtr ZstdNet.ReturnValueExtensions::EnsureZstdSuccess(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E (intptr_t ___0_returnValue, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionOptions::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions__ctor_m7CBFCC6D4D93E42A8A307980F5AF30EB043D4792 (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, int32_t ___1_compressionLevel, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_cParameter,System.Int32>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_inline (KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5*, const RuntimeMethod*))KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_gshared_inline)(__this, method);
}
// ZstdNet.ExternMethods/ZSTD_bounds ZstdNet.ExternMethods::ZSTD_cParam_getBounds(ZstdNet.ZSTD_cParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B ExternMethods_ZSTD_cParam_getBounds_m19919227B60DECFA68BF50317A8DAE91CA192FB2 (int32_t ___0_cParam, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ReturnValueExtensions::EnsureZstdSuccess(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753 (uintptr_t ___0_returnValue, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_cParameter,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_inline (KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5*, const RuntimeMethod*))KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_CCtx_setParameter(System.IntPtr,ZstdNet.ZSTD_cParameter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_CCtx_setParameter_m8B7B803BCA7ADEEECCA73BE467D66A3933F74FF7 (intptr_t ___0_cctx, int32_t ___1_param, int32_t ___2_value, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionOptions::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions_Dispose_mC5D3C21A5242BC423E7A24691443F93F1560AA5F (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeCDict(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeCDict_m30F438FF19F84DBED555CDE04C099B0BC369B9AC (intptr_t ___0_cdict, const RuntimeMethod* method) ;
// System.Int32 ZstdNet.ExternMethods::ZSTD_minCLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternMethods_ZSTD_minCLevel_m741086F1CFB8169E56FD63D22191AA51125D4F2B (const RuntimeMethod* method) ;
// System.Int32 ZstdNet.ExternMethods::ZSTD_maxCLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternMethods_ZSTD_maxCLevel_m84B2D06121625BBA486A82C4C91F785904D6EC50 (const RuntimeMethod* method) ;
// ZstdNet.CompressionOptions ZstdNet.CompressionOptions::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* CompressionOptions_get_Default_mE9E83387C06301955904FB3773766FBB9C08E99F_inline (const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionStream::.ctor(System.IO.Stream,ZstdNet.CompressionOptions,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* ___1_options, int32_t ___2_bufferSize, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createCStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createCStream_mEE27A3D70D4A6778D212A2E36730986C03A16B95 (const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_CCtx_reset(System.IntPtr,ZstdNet.ExternMethods/ZSTD_ResetDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_CCtx_reset_mF7BE4AD4CF399DE3A83E0044097AC0CFB6116FFD (intptr_t ___0_cctx, int32_t ___1_reset, const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionOptions::ApplyCompressionParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions_ApplyCompressionParams_m8D1020B3A6CD97584148BB720773C26125EEB3A1 (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, intptr_t ___0_cctx, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_CCtx_refCDict(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_CCtx_refCDict_m16EBAFE1B53B89495B73D0D2C8E561E802075159 (intptr_t ___0_cctx, intptr_t ___1_cdict, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_CStreamOutSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_CStreamOutSize_mD57F8F1060D4EE54CB4AB92C49DBB03AA4ED60D7 (const RuntimeMethod* method) ;
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8 (uintptr_t ___0_value, const RuntimeMethod* method) ;
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Byte>::get_Shared()
inline ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline)(method);
}
// System.Void ZstdNet.CompressionStream::EnsureParamsValid(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_EnsureNotDisposed_m92D019A76DD3CCA9AEDD36DE0742D7D863A4879C (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared)(___0_span, method);
}
// System.Void ZstdNet.CompressionStream::WriteInternal(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_WriteInternal_mDC960D7BD922AE7602C060BF5CF89CD97438FCD1 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.ReadOnlyMemory`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.Threading.Tasks.Task ZstdNet.CompressionStream::WriteInternalAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CompressionStream_WriteInternalAsync_m7C8AC86C64A381379E21754698E8CCFBCAE2F007 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Void ZstdNet.ExternMethods/ZSTD_Buffer::.ctor(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29 (ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* __this, uintptr_t ___0_pos, uintptr_t ___1_size, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.Boolean ZstdNet.ExternMethods/ZSTD_Buffer::get_IsFullyConsumed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25 (ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline)(__this, ___0_start, ___1_length, method);
}
// System.Void ZstdNet.CompressionStream::FlushOutputBuffer(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_FlushOutputBuffer_m7EB6F33E90A8AFD5FC50235BF19EC85032494311 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_outputSpan, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.CompressionStream::Compress(System.ReadOnlySpan`1<System.Byte>,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_EndDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CompressionStream_Compress_m903275FCB41453208F20B940B184D363987BB2F9 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_buffer, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___2_input, int32_t ___3_directive, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ZstdNet.CompressionStream/<WriteInternalAsync>d__11>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_m16E351DA51B3B37ACB75F2DC03918F5F5C033104 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_m16E351DA51B3B37ACB75F2DC03918F5F5C033104_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___0_span, method);
}
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressStream2(System.IntPtr,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_EndDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressStream2_m7EA04B2E06900307B6DD641B9F2EBDCF3E897CA0 (intptr_t ___0_zcs, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___2_input, int32_t ___3_endOp, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionStream::FlushCompressStream(ZstdNet.ExternMethods/ZSTD_EndDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_FlushCompressStream_m399100139AB217F2BA9EF68A345E54C20435BC24 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, int32_t ___0_directive, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task ZstdNet.CompressionStream::FlushCompressStreamAsync(ZstdNet.ExternMethods/ZSTD_EndDirective,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CompressionStream_FlushCompressStreamAsync_m2A104E6C87EF4F2971FCEE0BFF0E6FF0D0AF4521 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, int32_t ___0_directive, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::get_Empty()
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27 (const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (const RuntimeMethod*))ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_gshared)(method);
}
// System.Boolean System.UIntPtr::op_Inequality(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Inequality_m9C09B4CB3986B59EC207CC62000C761A1F161161 (uintptr_t ___0_value1, uintptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_m44076D57A0625EE501EBE86BF8A9B40207E317CF (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_m44076D57A0625EE501EBE86BF8A9B40207E317CF_gshared)(__this, ___0_stateMachine, method);
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeCStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeCStream_m3518BACCEB3032630577AE9CCCE46AFDA7FB858F (intptr_t ___0_zcs, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlyMemory`1<System.Byte>::get_Length()
inline int32_t ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, const RuntimeMethod*))ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_gshared)(__this, method);
}
// System.Threading.Tasks.Task ZstdNet.CompressionStream::FlushOutputBufferAsync(ZstdNet.ExternMethods/ZSTD_Buffer&,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CompressionStream_FlushOutputBufferAsync_m64C808AD99BFCFA25E60C9684B65309E9FD9D019 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___0_output, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,ZstdNet.CompressionStream/<WriteInternalAsync>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_mDC54C8A406FBFA32FBDE0390C253BA2CF0A8E74D (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_mDC54C8A406FBFA32FBDE0390C253BA2CF0A8E74D_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlyMemory`1<System.Byte>::get_Span()
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, const RuntimeMethod*))ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionStream/<WriteInternalAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteInternalAsyncU3Ed__11_MoveNext_mD7D426FCC35748E799B338C39982B5CA70DE70FF (U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionStream/<WriteInternalAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteInternalAsyncU3Ed__11_SetStateMachine_m8B4F6DB0CB5596A9041AF30FDD44FA00A16DCE5B (U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_mC298A0EAA88F7E12E1B81042565F11AAF4AD579B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_mC298A0EAA88F7E12E1B81042565F11AAF4AD579B_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushCompressStreamAsyncU3Ed__30_MoveNext_mA53DE7F00CED731DFDEBBA33B169120677AE62AB (U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* __this, const RuntimeMethod* method) ;
// System.Void ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushCompressStreamAsyncU3Ed__30_SetStateMachine_m6F20EBC75CF9D785D3B08CD4C93F468E6FAAC4BB (U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void ZstdNet.Compressor::.ctor(ZstdNet.CompressionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compressor__ctor_m553A9E0BDC21174AA2F0A2FDEC8ABBC368040CA4 (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* ___0_options, const RuntimeMethod* method) ;
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createCCtx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createCCtx_m5A95330FED8F3C05FD3546E69A6630ED5DB4AEB5 (const RuntimeMethod* method) ;
// System.Void ZstdNet.Compressor::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compressor_Dispose_m6280A20C4A9D4F676D89F9F42738BBFCC08A32E8 (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeCCtx(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeCCtx_m4EFC904EE7EB8A4B38B40B58D7D6AD0F2DE92871 (intptr_t ___0_cctx, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline)(__this, ___0_array, method);
}
// System.Byte[] ZstdNet.Compressor::Wrap(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Compressor_Wrap_mFAECF8CF0E10234A75AA170D1862331E5DE73AFD (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(System.ArraySegment`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_gshared)(___0_segment, method);
}
// System.UInt64 ZstdNet.Compressor::GetCompressBoundLong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Compressor_GetCompressBoundLong_m72F505B22AE1D2E6AA8B748033F26F7B45FF4AA7 (uint64_t ___0_size, const RuntimeMethod* method) ;
// System.UInt64 System.Math::Min(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Math_Min_m1C589BAB3D638CE6D3A29E552EDB5E9F95856C28 (uint64_t ___0_val1, uint64_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[])
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___0_array, method);
}
// System.Int32 ZstdNet.Compressor::Wrap(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressBound(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressBound_m46E7BA07D5F9BB265DFD9B3E618E722A73E87E7C (uintptr_t ___0_srcSize, const RuntimeMethod* method) ;
// System.UInt64 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C (uintptr_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 ZstdNet.Compressor::Wrap(System.ReadOnlySpan`1<System.Byte>,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Compressor_Wrap_m59F9E417AA23CE7B74EFC05B64D5602A05EAB96B (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dst, int32_t ___2_offset, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compress_usingCDict(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compress_usingCDict_m821C6C238A52DA71F56ED50689BAC608C15E1C3E (intptr_t ___0_cctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_cdict, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressCCtx(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressCCtx_m941DEF05EE817575E80C2F669A9EED8F33C2507F (intptr_t ___0_ctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, int32_t ___5_compressionLevel, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compress2(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compress2_m78BAB680E20DFCC58BD1EFE1F23E6753DADEDA8C (intptr_t ___0_ctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) ;
// System.Void ZstdNet.DecompressionOptions::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions__ctor_m2371C1092745E6B515819CBB58FB743D32017E6D (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, const RuntimeMethod* method) ;
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createDDict(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createDDict_mAB80E29DAE49AC56900FE3F59B5B5407A9D5BB0A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, uintptr_t ___1_dictSize, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_dParameter,System.Int32>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_inline (KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305*, const RuntimeMethod*))KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_gshared_inline)(__this, method);
}
// ZstdNet.ExternMethods/ZSTD_bounds ZstdNet.ExternMethods::ZSTD_dParam_getBounds(ZstdNet.ZSTD_dParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B ExternMethods_ZSTD_dParam_getBounds_mD0F88487DBFBBA0BA11555A3188AB7A9589FB8F6 (int32_t ___0_dParam, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_dParameter,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_inline (KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305*, const RuntimeMethod*))KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_gshared_inline)(__this, method);
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_DCtx_setParameter(System.IntPtr,ZstdNet.ZSTD_dParameter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_DCtx_setParameter_mB40280F7A1EE4300840C42A8060E7D724CEB8CFF (intptr_t ___0_dctx, int32_t ___1_param, int32_t ___2_value, const RuntimeMethod* method) ;
// System.Void ZstdNet.DecompressionOptions::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions_Dispose_mFEE84F6D0DC3E18C1AD95100961A4B63283B6DC0 (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeDDict(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeDDict_mF6643D51ACB022DC3F6D83A9D9048C4FF9046A79 (intptr_t ___0_ddict, const RuntimeMethod* method) ;
// System.Void ZstdNet.DecompressionStream::.ctor(System.IO.Stream,ZstdNet.DecompressionOptions,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* ___1_options, int32_t ___2_bufferSize, const RuntimeMethod* method) ;
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createDStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createDStream_m3D00942A63B68275D428EBAA8D046B184AEF6D66 (const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_DCtx_reset(System.IntPtr,ZstdNet.ExternMethods/ZSTD_ResetDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_DCtx_reset_mF3B03CE3C1DD7194668BBF9DD338BE5EB0A8BB95 (intptr_t ___0_dctx, int32_t ___1_reset, const RuntimeMethod* method) ;
// System.Void ZstdNet.DecompressionOptions::ApplyDecompressionParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions_ApplyDecompressionParams_m3B6258748A2E9EC1623DE31B1655A7D7B1899096 (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, intptr_t ___0_dctx, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_DCtx_refDDict(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_DCtx_refDDict_m1E2B18CA8D56323DAAC27D44534A180DE0E6A25D (intptr_t ___0_cctx, intptr_t ___1_cdict, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_DStreamInSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_DStreamInSize_mE88B4638B00E36339111FBECC32B2FF9A84D1E38 (const RuntimeMethod* method) ;
// System.Void ZstdNet.DecompressionStream::EnsureParamsValid(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void ZstdNet.DecompressionStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_EnsureNotDisposed_mBA2C586954AEB743CA6370E2341BA9058F8881F1 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, const RuntimeMethod* method) ;
// System.Int32 ZstdNet.DecompressionStream::ReadInternal(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecompressionStream_ReadInternal_m83FDDE3ADF23BA422EF62A450DF9852F40FBF2B6 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.Threading.Tasks.Task`1<System.Int32> ZstdNet.DecompressionStream::ReadInternalAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* DecompressionStream_ReadInternalAsync_mAA9D69BA6C3E149C55B539D334B208F830685E86 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Void ZstdNet.DecompressionStream::Decompress(System.Span`1<System.Byte>,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_Buffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Decompress_mDAF8DC903923111EEF731F974E519706F23BBF57 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___2_input, const RuntimeMethod* method) ;
// System.Int32 ZstdNet.DecompressionStream::FillInputBuffer(System.Span`1<System.Byte>,ZstdNet.ExternMethods/ZSTD_Buffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecompressionStream_FillInputBuffer_mFDA495B4237D5519FDB275E4B66DF8FD972D5962 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_inputSpan, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_input, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
inline AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<ZstdNet.DecompressionStream/<ReadInternalAsync>d__12>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_m00A0D62B4821EF1AB01EF6A7EB5C1FB9BB626292 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_m00A0D62B4821EF1AB01EF6A7EB5C1FB9BB626292_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_gshared)(__this, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared)(___0_span, method);
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompressStream(System.IntPtr,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_Buffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompressStream_mCEC64E14BE7D6758DC941678ED7F4A8DE65EBC2C (intptr_t ___0_zds, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___2_input, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeDStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeDStream_m5EACEE3A9C5A284B22F898CC662B80054E148A2F (intptr_t ___0_zds, const RuntimeMethod* method) ;
// System.Int32 System.Memory`1<System.Byte>::get_Length()
inline int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared)(__this, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_gshared)(__this, ___0_continueOnCapturedContext, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
inline ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_inline (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 (*) (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3 (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,ZstdNet.DecompressionStream/<ReadInternalAsync>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_mB74F6F10590860EA0DF97CE29FF1E5FAD1537564 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_mB74F6F10590860EA0DF97CE29FF1E5FAD1537564_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
inline int32_t ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_gshared)(__this, method);
}
// System.Span`1<T> System.Memory`1<System.Byte>::get_Span()
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, int32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_gshared)(__this, ___0_result, method);
}
// System.Void ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadInternalAsyncU3Ed__12_MoveNext_m8D376F030A1B2679793FBBF36B3B964C251EFA2C (U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_gshared)(__this, ___0_stateMachine, method);
}
// System.Void ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadInternalAsyncU3Ed__12_SetStateMachine_mCC4E3429321D8819671BCC956BB3C5CF730E4C70 (U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void ZstdNet.Decompressor::.ctor(ZstdNet.DecompressionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor__ctor_mE7EEAFA4F5295ABBE45454E778F901896761E394 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* ___0_options, const RuntimeMethod* method) ;
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createDCtx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createDCtx_m2F3E673AB71C1FA6B693C4B003262A0B1EFCC8C4 (const RuntimeMethod* method) ;
// System.Void ZstdNet.Decompressor::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor_Dispose_mFC30AD4A845593A4A8A8F43E5D436C6B4A3DD44F (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeDCtx(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeDCtx_m681DDC4A2C0F84900583A0E09C9E32240ECCF36E (intptr_t ___0_cctx, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
inline void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared)(__this, ___0_array, method);
}
// System.Byte[] ZstdNet.Decompressor::Unwrap(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Decompressor_Unwrap_mAC1A0FB838D204E85A8326BDDF9092B69CA1EBA3 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_src, int32_t ___1_maxDecompressedSize, const RuntimeMethod* method) ;
// System.Byte[] ZstdNet.Decompressor::Unwrap(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, int32_t ___1_maxDecompressedSize, const RuntimeMethod* method) ;
// System.UInt64 ZstdNet.Decompressor::GetDecompressedSize(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, const RuntimeMethod* method) ;
// System.Void ZstdNet.ZstdException::.ctor(ZstdNet.ZSTD_ErrorCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* __this, int32_t ___0_code, String_t* ___1_message, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Int32 ZstdNet.Decompressor::Unwrap(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, bool ___2_bufferSizePrecheck, const RuntimeMethod* method) ;
// System.UInt64 ZstdNet.ExternMethods::ZSTD_getFrameContentSize(System.ReadOnlySpan`1<System.Byte>,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ExternMethods_ZSTD_getFrameContentSize_m5C49B79F372A4763B66E7F5F59F243378CCE4E3B (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, uintptr_t ___1_srcSize, const RuntimeMethod* method) ;
// System.Int32 ZstdNet.Decompressor::Unwrap(System.ReadOnlySpan`1<System.Byte>,System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decompressor_Unwrap_mE8A5ABE3C37FAFD1B70CF98A007EA40DAAB37316 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dst, int32_t ___2_offset, bool ___3_bufferSizePrecheck, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompress_usingDDict(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompress_usingDDict_m175C6AA228BFEBA3F7760F3F4B78A3FC177938FF (intptr_t ___0_dctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_ddict, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompressDCtx(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompressDCtx_mF51D91D9FCAE28E7F148D274A3C6DAC53727F419 (intptr_t ___0_ctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) ;
// System.Void ZstdNet.DictBuilder/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m7D85C8BA9B993EF8439BC35EC5DC8085C7C75FC1 (U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Byte[],System.UIntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m66DCC6967DCF1BE960F17E4DF766AA134F6B37F5 (Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m47679A3FBF3CAEA9FBADAF869969BF8258587E42_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Byte[],System.UIntPtr>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisUIntPtr_t_mBCF1114CB7019CD3A796788A67F0934E0D54EFE6 (RuntimeObject* ___0_source, Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisUIntPtr_t_m97AAC95E48FAB0377C0C3E6AE0E139E8490843D4_gshared)(___0_source, ___1_selector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.UIntPtr>(System.Collections.Generic.IEnumerable`1<TSource>)
inline UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B* Enumerable_ToArray_TisUIntPtr_t_m32081932BE15517B6B769AD1C59D0F3525E1F123 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisUIntPtr_t_m32081932BE15517B6B769AD1C59D0F3525E1F123_gshared)(___0_source, method);
}
// System.UIntPtr ZstdNet.ExternMethods::ZDICT_trainFromBuffer(System.Byte[],System.UIntPtr,System.Byte[],System.UIntPtr[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZDICT_trainFromBuffer_mB7BE7166375BC191166E872C6EB7D967E2FD274E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dictBuffer, uintptr_t ___1_dictBufferCapacity, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_samplesBuffer, UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B* ___3_samplesSizes, uint32_t ___4_nbSamples, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ReturnValueExtensions::EnsureZdictSuccess(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ReturnValueExtensions_EnsureZdictSuccess_mE9F480D60F47E59AE4BFB3372141A00FF7D77FFC (uintptr_t ___0_returnValue, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Byte>(T[]&,System.Int32)
inline void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared)(___0_array, ___1_newSize, method);
}
// System.OperatingSystem System.Environment::get_OSVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* Environment_get_OSVersion_mDDD265F5864A2086664CAE56D7C4B59E9A50AF66 (const RuntimeMethod* method) ;
// System.PlatformID System.OperatingSystem::get_Platform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) ;
// System.Void ZstdNet.ExternMethods::SetWinDllDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternMethods_SetWinDllDirectory_m035A7D4FF93381B610DF1E0B3B9F4028A4F017A2 (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Trace::TraceWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_TraceWarning_m4B0E57E725592BB64BF597B62955034911165917 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean System.Environment::get_Is64BitProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Environment_get_Is64BitProcess_mF33E8476A91E765170A91B146EC1337C6779F6A1 (const RuntimeMethod* method) ;
// System.Boolean ZstdNet.ExternMethods::SetDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternMethods_SetDllDirectory_m27AD0CE472270885CEFDF6473AA13607A1AC66D3 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressCCtx(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressCCtx_m7BB567FB0A1D14DD06EB8E4345E7ED3A39C40468 (intptr_t ___0_ctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, int32_t ___5_compressionLevel, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompressDCtx(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompressDCtx_m6E854505AF22970714EED248768AE3547A11C5B7 (intptr_t ___0_ctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compress2(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compress2_m5792AE70BB00377DE0A5CD0A46F30E5E5F836E79 (intptr_t ___0_ctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compress_usingCDict(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compress_usingCDict_m374406AFBCE3F4A199148928C923E2DC3D68E863 (intptr_t ___0_cctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_cdict, const RuntimeMethod* method) ;
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompress_usingDDict(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompress_usingDDict_m8463F8AAA85610CB3EAC162993367C9DB14D660E (intptr_t ___0_dctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_ddict, const RuntimeMethod* method) ;
// System.UInt64 ZstdNet.ExternMethods::ZSTD_getFrameContentSize(System.Byte&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ExternMethods_ZSTD_getFrameContentSize_mC9FFFD3C1E75D330429360D2B912BB92F6A48F05 (uint8_t* ___0_src, uintptr_t ___1_srcSize, const RuntimeMethod* method) ;
// System.UInt32 ZstdNet.ExternMethods::ZDICT_isError(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ExternMethods_ZDICT_isError_m6C73BCCA283B917823BFFE585C3D7EEF3B406DB8 (uintptr_t ___0_code, const RuntimeMethod* method) ;
// System.IntPtr ZstdNet.ExternMethods::ZDICT_getErrorName(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZDICT_getErrorName_m0D63017CB2F753C997580D2A97AEC14636CF10CD (uintptr_t ___0_code, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void ZstdNet.ReturnValueExtensions::ThrowException(System.UIntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnValueExtensions_ThrowException_m9B62174B6D289D4F7BB4D5A73D8E02A5F17342CE (uintptr_t ___0_returnValue, String_t* ___1_message, const RuntimeMethod* method) ;
// System.UInt32 ZstdNet.ExternMethods::ZSTD_isError(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ExternMethods_ZSTD_isError_m1F227FB4F17F9E8513721F2993CAE500142A35C4 (uintptr_t ___0_code, const RuntimeMethod* method) ;
// System.IntPtr ZstdNet.ExternMethods::ZSTD_getErrorName(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_getErrorName_mA34C33FECCB317815A4EA15B834F27D1F83DC353 (uintptr_t ___0_code, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline)(__this, ___0_start, ___1_length, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDllDirectory(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZDICT_trainFromBuffer(uint8_t*, uintptr_t, uint8_t*, uintptr_t*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ZDICT_isError(uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ZDICT_getErrorName(uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ZSTD_createCCtx();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_freeCCtx(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ZSTD_createDCtx();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_freeDCtx(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_compressCCtx(intptr_t, intptr_t, uintptr_t, intptr_t, uintptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_decompressDCtx(intptr_t, intptr_t, uintptr_t, intptr_t, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_compress2(intptr_t, uint8_t*, uintptr_t, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ZSTD_createCDict(uint8_t*, uintptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_freeCDict(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_compress_usingCDict(intptr_t, intptr_t, uintptr_t, intptr_t, uintptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ZSTD_createDDict(uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_freeDDict(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_decompress_usingDDict(intptr_t, intptr_t, uintptr_t, intptr_t, uintptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uint64_t CDECL ZSTD_getDecompressedSize(intptr_t, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uint64_t CDECL ZSTD_getFrameContentSize(intptr_t, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ZSTD_maxCLevel();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ZSTD_minCLevel();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_compressBound(uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ZSTD_isError(uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ZSTD_getErrorName(uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_CCtx_reset(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B CDECL ZSTD_cParam_getBounds(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_CCtx_setParameter(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_DCtx_reset(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B CDECL ZSTD_dParam_getBounds(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_DCtx_setParameter(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ZSTD_createCStream();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_freeCStream(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_initCStream(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_compressStream(intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_flushStream(intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_endStream(intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_CStreamInSize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_CStreamOutSize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ZSTD_createDStream();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_freeDStream(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_initDStream(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_decompressStream(intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_DStreamInSize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_DStreamOutSize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_compressStream2(intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_initDStream_usingDDict(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_initCStream_usingCDict(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_CCtx_refCDict(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
IL2CPP_EXTERN_C uintptr_t CDECL ZSTD_DCtx_refDDict(intptr_t, intptr_t);
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
// System.Void ZstdNet.CompressionOptions::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions__ctor_mA01EE387E7D68102B75040631A413C7521D4A584 (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, int32_t ___0_compressionLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_compressionLevel;
		il2cpp_codegen_runtime_class_init_inline(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CompressionOptions_get_MinCompressionLevel_m5F09F35F87DB556C46920B632B5C896F79B54062(NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_compressionLevel;
		il2cpp_codegen_runtime_class_init_inline(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CompressionOptions_get_MaxCompressionLevel_mCE421AF3202F2B18E5E4534A7F3CD31AC6DE856E(NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D545112AA0FC31B8A0916A39D7225EBE87A1A56)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionOptions__ctor_mA01EE387E7D68102B75040631A413C7521D4A584_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_5 = ___0_compressionLevel;
		__this->___CompressionLevel_2 = L_5;
		return;
	}
}
// System.Void ZstdNet.CompressionOptions::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions__ctor_m7CBFCC6D4D93E42A8A307980F5AF30EB043D4792 (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, int32_t ___1_compressionLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionOptions__ctor_m7CBFCC6D4D93E42A8A307980F5AF30EB043D4792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_compressionLevel;
		CompressionOptions__ctor_mA01EE387E7D68102B75040631A413C7521D4A584(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_dict;
		__this->___Dictionary_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Dictionary_3), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_dict;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_dict;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_dict;
		NullCheck(L_4);
		if ((uint64_t)(((int32_t)(((RuntimeArray*)L_4)->max_length))) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionOptions__ctor_m7CBFCC6D4D93E42A8A307980F5AF30EB043D4792_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_5;
		L_5 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), NULL);
		int32_t L_6 = ___1_compressionLevel;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		intptr_t L_7;
		L_7 = ExternMethods_ZSTD_createCDict_mC908994AC4B65B69960A48302BBCB2A63168A06D(L_3, L_5, L_6, NULL);
		intptr_t L_8;
		L_8 = ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E(L_7, NULL);
		__this->___Cdict_5 = L_8;
		return;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void ZstdNet.CompressionOptions::.ctor(System.Byte[],System.Collections.Generic.IReadOnlyDictionary`2<ZstdNet.ZSTD_cParameter,System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions__ctor_m9322E2BE1D020C3BB1CA013D2BEBEC9AECC847BA (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, RuntimeObject* ___1_advancedParams, int32_t ___2_compressionLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0FCABE3100133FEB83F2205D9AA0F046254705D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tFD142AF154D35ED6BCCFA3FBF42CA6CD0333DE54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_dict;
		int32_t L_1 = ___2_compressionLevel;
		CompressionOptions__ctor_m7CBFCC6D4D93E42A8A307980F5AF30EB043D4792(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___1_advancedParams;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___1_advancedParams;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_cParameter,System.Int32>>::GetEnumerator() */, IEnumerable_1_t0FCABE3100133FEB83F2205D9AA0F046254705D7_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0094:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_009d;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_009d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008a_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5 L_8;
				L_8 = InterfaceFuncInvoker0< KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_cParameter,System.Int32>>::get_Current() */, IEnumerator_1_tFD142AF154D35ED6BCCFA3FBF42CA6CD0333DE54_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				int32_t L_9;
				L_9 = KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_inline((&V_1), KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_10;
				L_10 = ExternMethods_ZSTD_cParam_getBounds_m19919227B60DECFA68BF50317A8DAE91CA192FB2(L_9, NULL);
				V_2 = L_10;
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_11 = V_2;
				uintptr_t L_12 = L_11.___error_0;
				uintptr_t L_13;
				L_13 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_12, NULL);
				int32_t L_14;
				L_14 = KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_inline((&V_1), KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_RuntimeMethod_var);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_15 = V_2;
				int32_t L_16 = L_15.___lowerBound_1;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_0053_1;
				}
			}
			{
				int32_t L_17;
				L_17 = KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_inline((&V_1), KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_RuntimeMethod_var);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_18 = V_2;
				int32_t L_19 = L_18.___upperBound_2;
				if ((((int32_t)L_17) <= ((int32_t)L_19)))
				{
					goto IL_008a_1;
				}
			}

IL_0053_1:
			{
				int32_t L_20;
				L_20 = KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_inline((&V_1), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_RuntimeMethod_var)));
				int32_t L_21 = L_20;
				RuntimeObject* L_22 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZSTD_cParameter_t9851A030CDDD43B5EBA7210710C35D22EE5E7B7E_il2cpp_TypeInfo_var)), &L_21);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_23 = V_2;
				int32_t L_24 = L_23.___lowerBound_1;
				int32_t L_25 = L_24;
				RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_25);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_27 = V_2;
				int32_t L_28 = L_27.___upperBound_2;
				int32_t L_29 = L_28;
				RuntimeObject* L_30 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_29);
				String_t* L_31;
				L_31 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE70C155BEC2548B47D08CE2E0F581A28DAD23304)), L_22, L_26, L_30, NULL);
				ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_32 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
				NullCheck(L_32);
				ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37464CB9EEB6BBAEDCD12F95DBD12CE7828C266)), L_31, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionOptions__ctor_m9322E2BE1D020C3BB1CA013D2BEBEC9AECC847BA_RuntimeMethod_var)));
			}

IL_008a_1:
			{
				RuntimeObject* L_33 = V_0;
				NullCheck(L_33);
				bool L_34;
				L_34 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_33);
				if (L_34)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		RuntimeObject* L_35 = ___1_advancedParams;
		__this->___AdvancedParams_4 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AdvancedParams_4), (void*)L_35);
		return;
	}
}
// System.Void ZstdNet.CompressionOptions::ApplyCompressionParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions_ApplyCompressionParams_m8D1020B3A6CD97584148BB720773C26125EEB3A1 (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, intptr_t ___0_cctx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0FCABE3100133FEB83F2205D9AA0F046254705D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tFD142AF154D35ED6BCCFA3FBF42CA6CD0333DE54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t29825F1D0A620274A9186E639AEED8797A6C69B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = __this->___AdvancedParams_4;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->___AdvancedParams_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<ZstdNet.ZSTD_cParameter,System.Int32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t29825F1D0A620274A9186E639AEED8797A6C69B4_il2cpp_TypeInfo_var, L_1, ((int32_t)100));
		if (L_2)
		{
			goto IL_002b;
		}
	}

IL_0017:
	{
		intptr_t L_3 = ___0_cctx;
		int32_t L_4 = __this->___CompressionLevel_2;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_5;
		L_5 = ExternMethods_ZSTD_CCtx_setParameter_m8B7B803BCA7ADEEECCA73BE467D66A3933F74FF7(L_3, ((int32_t)100), L_4, NULL);
		uintptr_t L_6;
		L_6 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_5, NULL);
	}

IL_002b:
	{
		RuntimeObject* L_7 = __this->___AdvancedParams_4;
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		RuntimeObject* L_8 = __this->___AdvancedParams_4;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_cParameter,System.Int32>>::GetEnumerator() */, IEnumerable_1_t0FCABE3100133FEB83F2205D9AA0F046254705D7_il2cpp_TypeInfo_var, L_8);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					if (!L_10)
					{
						goto IL_0076;
					}
				}
				{
					RuntimeObject* L_11 = V_0;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0076:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0063_1;
			}

IL_0042_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5 L_13;
				L_13 = InterfaceFuncInvoker0< KeyValuePair_2_t4D9D8F292780E10EFF663D20774044B6524109E5 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_cParameter,System.Int32>>::get_Current() */, IEnumerator_1_tFD142AF154D35ED6BCCFA3FBF42CA6CD0333DE54_il2cpp_TypeInfo_var, L_12);
				V_1 = L_13;
				intptr_t L_14 = ___0_cctx;
				int32_t L_15;
				L_15 = KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_inline((&V_1), KeyValuePair_2_get_Key_m2EC6551C1F1E00D634286414420E73DA74F1A51D_RuntimeMethod_var);
				int32_t L_16;
				L_16 = KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_inline((&V_1), KeyValuePair_2_get_Value_mA298B2F95280DD1E6407CC78156220FDDFB3B1CE_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
				uintptr_t L_17;
				L_17 = ExternMethods_ZSTD_CCtx_setParameter_m8B7B803BCA7ADEEECCA73BE467D66A3933F74FF7(L_14, L_15, L_16, NULL);
				uintptr_t L_18;
				L_18 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_17, NULL);
			}

IL_0063_1:
			{
				RuntimeObject* L_19 = V_0;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0042_1;
				}
			}
			{
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		return;
	}
}
// System.Void ZstdNet.CompressionOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions_Finalize_m90D41F9FA2FD878F0C89CAC0403E92504874DAB9 (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			CompressionOptions_Dispose_mC5D3C21A5242BC423E7A24691443F93F1560AA5F(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void ZstdNet.CompressionOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions_Dispose_mDC644911C9D1D0EFCCD8603EC25775222B92A51B (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CompressionOptions_Dispose_mC5D3C21A5242BC423E7A24691443F93F1560AA5F(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void ZstdNet.CompressionOptions::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions_Dispose_mC5D3C21A5242BC423E7A24691443F93F1560AA5F (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___Cdict_5;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		intptr_t L_3 = __this->___Cdict_5;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = ExternMethods_ZSTD_freeCDict_m30F438FF19F84DBED555CDE04C099B0BC369B9AC(L_3, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___Cdict_5 = L_5;
		return;
	}
}
// System.Int32 ZstdNet.CompressionOptions::get_MinCompressionLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressionOptions_get_MinCompressionLevel_m5F09F35F87DB556C46920B632B5C896F79B54062 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = ExternMethods_ZSTD_minCLevel_m741086F1CFB8169E56FD63D22191AA51125D4F2B(NULL);
		return L_0;
	}
}
// System.Int32 ZstdNet.CompressionOptions::get_MaxCompressionLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressionOptions_get_MaxCompressionLevel_mCE421AF3202F2B18E5E4534A7F3CD31AC6DE856E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = ExternMethods_ZSTD_maxCLevel_m84B2D06121625BBA486A82C4C91F785904D6EC50(NULL);
		return L_0;
	}
}
// ZstdNet.CompressionOptions ZstdNet.CompressionOptions::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* CompressionOptions_get_Default_mE9E83387C06301955904FB3773766FBB9C08E99F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_0 = ((CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_StaticFields*)il2cpp_codegen_static_fields_for(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ZstdNet.CompressionOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionOptions__cctor_mEA4F885FE75D56601CDDC340774BCFEA36FB2E7F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_0 = (CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F*)il2cpp_codegen_object_new(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CompressionOptions__ctor_mA01EE387E7D68102B75040631A413C7521D4A584(L_0, 3, NULL);
		((CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_StaticFields*)il2cpp_codegen_static_fields_for(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_StaticFields*)il2cpp_codegen_static_fields_for(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1), (void*)L_0);
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
// System.Void ZstdNet.CompressionStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream__ctor_m84B6C2E725FB6CE54DF0B69DE0DECA23A2CADF10 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		il2cpp_codegen_runtime_class_init_inline(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_1;
		L_1 = CompressionOptions_get_Default_mE9E83387C06301955904FB3773766FBB9C08E99F_inline(NULL);
		CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10(__this, L_0, L_1, 0, NULL);
		return;
	}
}
// System.Void ZstdNet.CompressionStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream__ctor_m436637C08FB97B3DC2985D69DB4ED8E53E976692 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_bufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		il2cpp_codegen_runtime_class_init_inline(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_1;
		L_1 = CompressionOptions_get_Default_mE9E83387C06301955904FB3773766FBB9C08E99F_inline(NULL);
		int32_t L_2 = ___1_bufferSize;
		CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void ZstdNet.CompressionStream::.ctor(System.IO.Stream,ZstdNet.CompressionOptions,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* ___1_options, int32_t ___2_bufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* G_B11_0 = NULL;
	CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* G_B12_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10_RuntimeMethod_var)));
	}

IL_0014:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC07E7B0D9A1C7DE516F902C92101A565AD126F1C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_5 = ___2_bufferSize;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10_RuntimeMethod_var)));
	}

IL_003b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___0_stream;
		__this->___innerStream_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___innerStream_5), (void*)L_7);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = ExternMethods_ZSTD_createCStream_mEE27A3D70D4A6778D212A2E36730986C03A16B95(NULL);
		intptr_t L_9;
		L_9 = ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E(L_8, NULL);
		__this->___cStream_8 = L_9;
		intptr_t L_10 = __this->___cStream_8;
		uintptr_t L_11;
		L_11 = ExternMethods_ZSTD_CCtx_reset_mF7BE4AD4CF399DE3A83E0044097AC0CFB6116FFD(L_10, 1, NULL);
		uintptr_t L_12;
		L_12 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_11, NULL);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_13 = ___1_options;
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_14 = ___1_options;
		intptr_t L_15 = __this->___cStream_8;
		NullCheck(L_14);
		CompressionOptions_ApplyCompressionParams_m8D1020B3A6CD97584148BB720773C26125EEB3A1(L_14, L_15, NULL);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_16 = ___1_options;
		NullCheck(L_16);
		intptr_t L_17 = L_16->___Cdict_5;
		intptr_t L_18 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_19;
		L_19 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_20 = __this->___cStream_8;
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_21 = ___1_options;
		NullCheck(L_21);
		intptr_t L_22 = L_21->___Cdict_5;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_23;
		L_23 = ExternMethods_ZSTD_CCtx_refCDict_m16EBAFE1B53B89495B73D0D2C8E561E802075159(L_20, L_22, NULL);
		uintptr_t L_24;
		L_24 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_23, NULL);
	}

IL_009c:
	{
		int32_t L_25 = ___2_bufferSize;
		G_B10_0 = __this;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			G_B11_0 = __this;
			goto IL_00b3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_26;
		L_26 = ExternMethods_ZSTD_CStreamOutSize_mD57F8F1060D4EE54CB4AB92C49DBB03AA4ED60D7(NULL);
		uintptr_t L_27;
		L_27 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_28;
		L_28 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_27, NULL);
		if ((uint64_t)(L_28) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionStream__ctor_mFA443277C246E7F8A1CB27B104D65EEA4D2C8F10_RuntimeMethod_var);
		G_B12_0 = ((int32_t)L_28);
		G_B12_1 = G_B10_0;
		goto IL_00b4;
	}

IL_00b3:
	{
		int32_t L_29 = ___2_bufferSize;
		G_B12_0 = L_29;
		G_B12_1 = G_B11_0;
	}

IL_00b4:
	{
		NullCheck(G_B12_1);
		G_B12_1->___bufferSize_7 = G_B12_0;
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_30;
		L_30 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		int32_t L_31 = __this->___bufferSize_7;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_30, L_31);
		__this->___outputBuffer_6 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputBuffer_6), (void*)L_32);
		return;
	}
}
// System.Void ZstdNet.CompressionStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_Write_mE4DDC94F1014E0895182434AB37CB647ED91AC69 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A(__this, L_0, L_1, L_2, NULL);
		CompressionStream_EnsureNotDisposed_m92D019A76DD3CCA9AEDD36DE0742D7D863A4879C(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		int32_t L_5 = ___2_count;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		L_7 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_6, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		CompressionStream_WriteInternal_mDC960D7BD922AE7602C060BF5CF89CD97438FCD1(__this, L_7, NULL);
		return;
	}
}
// System.Threading.Tasks.Task ZstdNet.CompressionStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CompressionStream_WriteAsync_m3ECA0ED3E0E9CEFF630499AFC4A8821513D05588 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A(__this, L_0, L_1, L_2, NULL);
		CompressionStream_EnsureNotDisposed_m92D019A76DD3CCA9AEDD36DE0742D7D863A4879C(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		int32_t L_5 = ___2_count;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_RuntimeMethod_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___3_cancellationToken;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = CompressionStream_WriteInternalAsync_m7C8AC86C64A381379E21754698E8CCFBCAE2F007(__this, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Void ZstdNet.CompressionStream::WriteInternal(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_WriteInternal_mDC960D7BD922AE7602C060BF5CF89CD97438FCD1 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionStream_WriteInternal_mDC960D7BD922AE7602C060BF5CF89CD97438FCD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_buffer), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_1 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_buffer), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((uint64_t)(L_2) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionStream_WriteInternal_mDC960D7BD922AE7602C060BF5CF89CD97438FCD1_RuntimeMethod_var);
		uintptr_t L_3;
		L_3 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_2), NULL);
		ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&V_0), L_1, L_3, NULL);
		uintptr_t L_4 = __this->___pos_9;
		int32_t L_5 = __this->___bufferSize_7;
		if ((uint64_t)(L_5) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionStream_WriteInternal_mDC960D7BD922AE7602C060BF5CF89CD97438FCD1_RuntimeMethod_var);
		uintptr_t L_6;
		L_6 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_5), NULL);
		ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&V_1), L_4, L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___outputBuffer_6;
		int32_t L_8 = __this->___bufferSize_7;
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&V_2), L_7, 0, L_8, ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var);
	}

IL_0050:
	{
		bool L_9;
		L_9 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25((&V_1), NULL);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_10 = V_1;
		uintptr_t L_11 = L_10.___pos_2;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_12;
		L_12 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_11, NULL);
		if ((uint64_t)(L_12) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionStream_WriteInternal_mDC960D7BD922AE7602C060BF5CF89CD97438FCD1_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_13;
		L_13 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_2), 0, ((int32_t)L_12), ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		CompressionStream_FlushOutputBuffer_m7EB6F33E90A8AFD5FC50235BF19EC85032494311(__this, L_13, NULL);
		uintptr_t L_14 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		(&V_1)->___pos_2 = L_14;
	}

IL_007f:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_15 = ___0_buffer;
		uintptr_t L_16;
		L_16 = CompressionStream_Compress_m903275FCB41453208F20B940B184D363987BB2F9(__this, L_15, (&V_1), (&V_0), 0, NULL);
		bool L_17;
		L_17 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25((&V_0), NULL);
		if (!L_17)
		{
			goto IL_0050;
		}
	}
	{
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_18 = V_1;
		uintptr_t L_19 = L_18.___pos_2;
		__this->___pos_9 = L_19;
		return;
	}
}
// System.Threading.Tasks.Task ZstdNet.CompressionStream::WriteInternalAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CompressionStream_WriteInternalAsync_m7C8AC86C64A381379E21754698E8CCFBCAE2F007 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_m16E351DA51B3B37ACB75F2DC03918F5F5C033104_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_1 = ___0_buffer;
		(&V_0)->___buffer_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___buffer_2))->____object_0), (void*)NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___1_cancellationToken;
		(&V_0)->___cancellationToken_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_4))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_m16E351DA51B3B37ACB75F2DC03918F5F5C033104(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_m16E351DA51B3B37ACB75F2DC03918F5F5C033104_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.UIntPtr ZstdNet.CompressionStream::Compress(System.ReadOnlySpan`1<System.Byte>,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_EndDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CompressionStream_Compress_m903275FCB41453208F20B940B184D363987BB2F9 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_buffer, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___2_input, int32_t ___3_directive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	uint8_t* V_1 = NULL;
	void* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_buffer;
		uint8_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_0, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		V_0 = (void*)((uintptr_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___outputBuffer_6;
		NullCheck(L_3);
		V_3 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		uint8_t* L_4 = V_3;
		V_2 = (void*)((uintptr_t)L_4);
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_5 = ___2_input;
		void* L_6 = V_0;
		intptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_7), L_6, /*hidden argument*/NULL);
		L_5->___buffer_0 = L_7;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_8 = ___1_output;
		void* L_9 = V_2;
		intptr_t L_10;
		memset((&L_10), 0, sizeof(L_10));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_10), L_9, /*hidden argument*/NULL);
		L_8->___buffer_0 = L_10;
		intptr_t L_11 = __this->___cStream_8;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_12 = ___1_output;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_13 = ___2_input;
		int32_t L_14 = ___3_directive;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_15;
		L_15 = ExternMethods_ZSTD_compressStream2_m7EA04B2E06900307B6DD641B9F2EBDCF3E897CA0(L_11, L_12, L_13, L_14, NULL);
		uintptr_t L_16;
		L_16 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_15, NULL);
		return L_16;
	}
}
// System.Void ZstdNet.CompressionStream::FlushOutputBuffer(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_FlushOutputBuffer_m7EB6F33E90A8AFD5FC50235BF19EC85032494311 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_outputSpan, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___innerStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___outputBuffer_6;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_outputSpan), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, L_2);
		return;
	}
}
// System.Threading.Tasks.Task ZstdNet.CompressionStream::FlushOutputBufferAsync(ZstdNet.ExternMethods/ZSTD_Buffer&,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CompressionStream_FlushOutputBufferAsync_m64C808AD99BFCFA25E60C9684B65309E9FD9D019 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___0_output, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionStream_FlushOutputBufferAsync_m64C808AD99BFCFA25E60C9684B65309E9FD9D019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___innerStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___outputBuffer_6;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_2 = ___0_output;
		uintptr_t L_3 = L_2->___pos_2;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_3, NULL);
		if ((uint64_t)(L_4) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionStream_FlushOutputBufferAsync_m64C808AD99BFCFA25E60C9684B65309E9FD9D019_RuntimeMethod_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___1_cancellationToken;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(30 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, 0, ((int32_t)L_4), L_5);
		return L_6;
	}
}
// System.Void ZstdNet.CompressionStream::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_Finalize_mBDA7046376BF9264F07DDDFA09B2E1D80EB28838 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(21 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Boolean ZstdNet.CompressionStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompressionStream_get_CanRead_mE5F46966CA4D0CE91D3EA4452D565A92A3A40743 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean ZstdNet.CompressionStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompressionStream_get_CanSeek_m3538C3E32F16B2CEA0D8FD9795F1E036A37F5C3F (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean ZstdNet.CompressionStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompressionStream_get_CanWrite_mB501C1604CC951EFE27C9A1FC7EC9B00B21CB9AA (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int64 ZstdNet.CompressionStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CompressionStream_get_Length_mA081E9D267487B4265F8D5D4D4110EF48C514266 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_get_Length_mA081E9D267487B4265F8D5D4D4110EF48C514266_RuntimeMethod_var)));
	}
}
// System.Int64 ZstdNet.CompressionStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CompressionStream_get_Position_m20AA1F79880BFA9DC90552809707AC361785DE9D (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_get_Position_m20AA1F79880BFA9DC90552809707AC361785DE9D_RuntimeMethod_var)));
	}
}
// System.Void ZstdNet.CompressionStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_set_Position_mF271F5D755B95EA79DE53179686A9A82E5BC395A (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_set_Position_mF271F5D755B95EA79DE53179686A9A82E5BC395A_RuntimeMethod_var)));
	}
}
// System.Void ZstdNet.CompressionStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_Flush_m3FEDD12CDD81A952E2C00E1BAB0C5C845F0106D0 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, const RuntimeMethod* method) 
{
	{
		CompressionStream_EnsureNotDisposed_m92D019A76DD3CCA9AEDD36DE0742D7D863A4879C(__this, NULL);
		CompressionStream_FlushCompressStream_m399100139AB217F2BA9EF68A345E54C20435BC24(__this, 1, NULL);
		return;
	}
}
// System.Threading.Tasks.Task ZstdNet.CompressionStream::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CompressionStream_FlushAsync_mA2A8CF65868E75E3E9E3B7AF6F2679DC5F7863D2 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		CompressionStream_EnsureNotDisposed_m92D019A76DD3CCA9AEDD36DE0742D7D863A4879C(__this, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = CompressionStream_FlushCompressStreamAsync_m2A104E6C87EF4F2971FCEE0BFF0E6FF0D0AF4521(__this, 1, L_0, NULL);
		return L_1;
	}
}
// System.Void ZstdNet.CompressionStream::FlushCompressStream(ZstdNet.ExternMethods/ZSTD_EndDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_FlushCompressStream_m399100139AB217F2BA9EF68A345E54C20435BC24 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, int32_t ___0_directive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionStream_FlushCompressStream_m399100139AB217F2BA9EF68A345E54C20435BC24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		L_0 = ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27(ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_1 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		uintptr_t L_2 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&V_1), L_1, L_2, NULL);
		uintptr_t L_3 = __this->___pos_9;
		int32_t L_4 = __this->___bufferSize_7;
		if ((uint64_t)(L_4) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionStream_FlushCompressStream_m399100139AB217F2BA9EF68A345E54C20435BC24_RuntimeMethod_var);
		uintptr_t L_5;
		L_5 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_4), NULL);
		ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&V_2), L_3, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___outputBuffer_6;
		int32_t L_7 = __this->___bufferSize_7;
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&V_3), L_6, 0, L_7, ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var);
	}

IL_0044:
	{
		bool L_8;
		L_8 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25((&V_2), NULL);
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_9 = V_2;
		uintptr_t L_10 = L_9.___pos_2;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_11;
		L_11 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_10, NULL);
		if ((uint64_t)(L_11) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionStream_FlushCompressStream_m399100139AB217F2BA9EF68A345E54C20435BC24_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_12;
		L_12 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_3), 0, ((int32_t)L_11), ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		CompressionStream_FlushOutputBuffer_m7EB6F33E90A8AFD5FC50235BF19EC85032494311(__this, L_12, NULL);
		uintptr_t L_13 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		(&V_2)->___pos_2 = L_13;
	}

IL_0073:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_14 = V_0;
		int32_t L_15 = ___0_directive;
		uintptr_t L_16;
		L_16 = CompressionStream_Compress_m903275FCB41453208F20B940B184D363987BB2F9(__this, L_14, (&V_2), (&V_1), L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_17 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		bool L_18;
		L_18 = UIntPtr_op_Inequality_m9C09B4CB3986B59EC207CC62000C761A1F161161(L_16, L_17, NULL);
		if (L_18)
		{
			goto IL_0044;
		}
	}
	{
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_19 = V_2;
		uintptr_t L_20 = L_19.___pos_2;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_21 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		bool L_22;
		L_22 = UIntPtr_op_Inequality_m9C09B4CB3986B59EC207CC62000C761A1F161161(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_23 = V_2;
		uintptr_t L_24 = L_23.___pos_2;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_25;
		L_25 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_24, NULL);
		if ((uint64_t)(L_25) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionStream_FlushCompressStream_m399100139AB217F2BA9EF68A345E54C20435BC24_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_26;
		L_26 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_3), 0, ((int32_t)L_25), ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		CompressionStream_FlushOutputBuffer_m7EB6F33E90A8AFD5FC50235BF19EC85032494311(__this, L_26, NULL);
	}

IL_00b7:
	{
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_27 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		__this->___pos_9 = L_27;
		return;
	}
}
// System.Threading.Tasks.Task ZstdNet.CompressionStream::FlushCompressStreamAsync(ZstdNet.ExternMethods/ZSTD_EndDirective,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CompressionStream_FlushCompressStreamAsync_m2A104E6C87EF4F2971FCEE0BFF0E6FF0D0AF4521 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, int32_t ___0_directive, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_m44076D57A0625EE501EBE86BF8A9B40207E317CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		int32_t L_1 = ___0_directive;
		(&V_0)->___directive_4 = L_1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___1_cancellationToken;
		(&V_0)->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_3))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_m44076D57A0625EE501EBE86BF8A9B40207E317CF(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_m44076D57A0625EE501EBE86BF8A9B40207E317CF_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.Int64 ZstdNet.CompressionStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CompressionStream_Seek_m9C92BB48D935C8DA3670427398A3A05E8D4BA54F (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_Seek_m9C92BB48D935C8DA3670427398A3A05E8D4BA54F_RuntimeMethod_var)));
	}
}
// System.Void ZstdNet.CompressionStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_SetLength_m8B8321FA229C25F046A1FA41ABBBF85B1DBCB376 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_SetLength_m8B8321FA229C25F046A1FA41ABBBF85B1DBCB376_RuntimeMethod_var)));
	}
}
// System.Int32 ZstdNet.CompressionStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressionStream_Read_mDE4C89C397202F1E67CC4861274336362D307156 (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_Read_mDE4C89C397202F1E67CC4861274336362D307156_RuntimeMethod_var)));
	}
}
// System.Void ZstdNet.CompressionStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_Dispose_mA2F32F9DA7EC5D04F5E8794FF8B1765C0F51F93E (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___cStream_8;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				{
					intptr_t L_3 = __this->___cStream_8;
					il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
					uintptr_t L_4;
					L_4 = ExternMethods_ZSTD_freeCStream_m3518BACCEB3032630577AE9CCCE46AFDA7FB858F(L_3, NULL);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___outputBuffer_6;
					if (!L_5)
					{
						goto IL_0047;
					}
				}
				{
					il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
					ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_6;
					L_6 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___outputBuffer_6;
					NullCheck(L_6);
					VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(T[],System.Boolean) */, L_6, L_7, (bool)0);
				}

IL_0047:
				{
					intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					__this->___cStream_8 = L_8;
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_9 = ___0_disposing;
				if (L_9)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0053;
			}

IL_0019_1:
			{
				CompressionStream_FlushCompressStream_m399100139AB217F2BA9EF68A345E54C20435BC24(__this, 2, NULL);
				goto IL_0053;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		return;
	}
}
// System.Void ZstdNet.CompressionStream::EnsureParamsValid(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_6 = ___2_count;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_buffer;
		NullCheck(L_7);
		int32_t L_8 = ___1_offset;
		if (((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length)) - (int64_t)L_8 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length)) - (int64_t)L_8 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6C8B72226E4343DE7DD8F28557CD57F468D45DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_EnsureParamsValid_m8DD6FCA34C1EC78883CA6F7C854D922D8B810B9A_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
// System.Void ZstdNet.CompressionStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionStream_EnsureNotDisposed_m92D019A76DD3CCA9AEDD36DE0742D7D863A4879C (CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___cStream_8;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF555F0B7DCFA91AC08FBD8D6A3BEE1A0C3C7DE0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionStream_EnsureNotDisposed_m92D019A76DD3CCA9AEDD36DE0742D7D863A4879C_RuntimeMethod_var)));
	}

IL_001d:
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
// System.Void ZstdNet.CompressionStream/<WriteInternalAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteInternalAsyncU3Ed__11_MoveNext_mD7D426FCC35748E799B338C39982B5CA70DE70FF (U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_mDC54C8A406FBFA32FBDE0390C253BA2CF0A8E74D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWriteInternalAsyncU3Ed__11_MoveNext_mD7D426FCC35748E799B338C39982B5CA70DE70FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* V_1 = NULL;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00c1_1;
			}
		}
		{
			ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_3 = (&__this->___buffer_2);
			int32_t L_4;
			L_4 = ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392(L_3, ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0026_1;
			}
		}
		{
			goto IL_014f;
		}

IL_0026_1:
		{
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uintptr_t L_5 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_6 = (&__this->___buffer_2);
			int32_t L_7;
			L_7 = ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392(L_6, ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
			if ((uint64_t)(L_7) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CWriteInternalAsyncU3Ed__11_MoveNext_mD7D426FCC35748E799B338C39982B5CA70DE70FF_RuntimeMethod_var);
			uintptr_t L_8;
			L_8 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_7), NULL);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_9;
			memset((&L_9), 0, sizeof(L_9));
			ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&L_9), L_5, L_8, /*hidden argument*/NULL);
			__this->___U3CinputU3E5__2_5 = L_9;
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_10 = V_1;
			NullCheck(L_10);
			uintptr_t L_11 = L_10->___pos_9;
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = L_12->___bufferSize_7;
			if ((uint64_t)(L_13) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CWriteInternalAsyncU3Ed__11_MoveNext_mD7D426FCC35748E799B338C39982B5CA70DE70FF_RuntimeMethod_var);
			uintptr_t L_14;
			L_14 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_13), NULL);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_15;
			memset((&L_15), 0, sizeof(L_15));
			ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&L_15), L_11, L_14, /*hidden argument*/NULL);
			__this->___U3CoutputU3E5__3_6 = L_15;
		}

IL_0064_1:
		{
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_16 = (&__this->___U3CoutputU3E5__3_6);
			bool L_17;
			L_17 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25(L_16, NULL);
			if (!L_17)
			{
				goto IL_00f4_1;
			}
		}
		{
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_18 = V_1;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_19 = (&__this->___U3CoutputU3E5__3_6);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_20 = __this->___cancellationToken_4;
			NullCheck(L_18);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_21;
			L_21 = CompressionStream_FlushOutputBufferAsync_m64C808AD99BFCFA25E60C9684B65309E9FD9D019(L_18, L_19, L_20, NULL);
			NullCheck(L_21);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_22;
			L_22 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_21, (bool)0, NULL);
			V_3 = L_22;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_23;
			L_23 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_3), NULL);
			V_2 = L_23;
			bool L_24;
			L_24 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_2), NULL);
			if (L_24)
			{
				goto IL_00dd_1;
			}
		}
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_26 = V_2;
			__this->___U3CU3Eu__1_7 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_mDC54C8A406FBFA32FBDE0390C253BA2CF0A8E74D(L_27, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF_mDC54C8A406FBFA32FBDE0390C253BA2CF0A8E74D_RuntimeMethod_var);
			goto IL_0162;
		}

IL_00c1_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_28 = __this->___U3CU3Eu__1_7;
			V_2 = L_28;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_29 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_00dd_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_2), NULL);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_31 = (&__this->___U3CoutputU3E5__3_6);
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uintptr_t L_32 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			L_31->___pos_2 = L_32;
		}

IL_00f4_1:
		{
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_33 = V_1;
			ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_34 = (&__this->___buffer_2);
			ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_35;
			L_35 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_34, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_36 = (&__this->___U3CoutputU3E5__3_6);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_37 = (&__this->___U3CinputU3E5__2_5);
			NullCheck(L_33);
			uintptr_t L_38;
			L_38 = CompressionStream_Compress_m903275FCB41453208F20B940B184D363987BB2F9(L_33, L_35, L_36, L_37, 0, NULL);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_39 = (&__this->___U3CinputU3E5__2_5);
			bool L_40;
			L_40 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25(L_39, NULL);
			if (!L_40)
			{
				goto IL_0064_1;
			}
		}
		{
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_41 = V_1;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_42 = (&__this->___U3CoutputU3E5__3_6);
			uintptr_t L_43 = L_42->___pos_2;
			NullCheck(L_41);
			L_41->___pos_9 = L_43;
			goto IL_014f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0136;
		}
		throw e;
	}

CATCH_0136:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_44 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_45 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_44, L_45, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0162;
	}// end catch (depth: 1)

IL_014f:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_46 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_46, NULL);
	}

IL_0162:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWriteInternalAsyncU3Ed__11_MoveNext_mD7D426FCC35748E799B338C39982B5CA70DE70FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF*>(__this + _offset);
	U3CWriteInternalAsyncU3Ed__11_MoveNext_mD7D426FCC35748E799B338C39982B5CA70DE70FF(_thisAdjusted, method);
}
// System.Void ZstdNet.CompressionStream/<WriteInternalAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteInternalAsyncU3Ed__11_SetStateMachine_m8B4F6DB0CB5596A9041AF30FDD44FA00A16DCE5B (U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWriteInternalAsyncU3Ed__11_SetStateMachine_m8B4F6DB0CB5596A9041AF30FDD44FA00A16DCE5B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWriteInternalAsyncU3Ed__11_tDD82D751089108BD83D17A35809C351B57BE7BDF*>(__this + _offset);
	U3CWriteInternalAsyncU3Ed__11_SetStateMachine_m8B4F6DB0CB5596A9041AF30FDD44FA00A16DCE5B(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushCompressStreamAsyncU3Ed__30_MoveNext_mA53DE7F00CED731DFDEBBA33B169120677AE62AB (U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_mC298A0EAA88F7E12E1B81042565F11AAF4AD579B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlushCompressStreamAsyncU3Ed__30_MoveNext_mA53DE7F00CED731DFDEBBA33B169120677AE62AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* V_1 = NULL;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00aa_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_016a_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uintptr_t L_4 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			uintptr_t L_5 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_6;
			memset((&L_6), 0, sizeof(L_6));
			ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&L_6), L_4, L_5, /*hidden argument*/NULL);
			__this->___U3CinputU3E5__2_5 = L_6;
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_7 = V_1;
			NullCheck(L_7);
			uintptr_t L_8 = L_7->___pos_9;
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10 = L_9->___bufferSize_7;
			if ((uint64_t)(L_10) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CFlushCompressStreamAsyncU3Ed__30_MoveNext_mA53DE7F00CED731DFDEBBA33B169120677AE62AB_RuntimeMethod_var);
			uintptr_t L_11;
			L_11 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_10), NULL);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_12;
			memset((&L_12), 0, sizeof(L_12));
			ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&L_12), L_8, L_11, /*hidden argument*/NULL);
			__this->___U3CoutputU3E5__3_6 = L_12;
		}

IL_004d_1:
		{
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_13 = (&__this->___U3CoutputU3E5__3_6);
			bool L_14;
			L_14 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25(L_13, NULL);
			if (!L_14)
			{
				goto IL_00dd_1;
			}
		}
		{
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_15 = V_1;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_16 = (&__this->___U3CoutputU3E5__3_6);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_17 = __this->___cancellationToken_3;
			NullCheck(L_15);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
			L_18 = CompressionStream_FlushOutputBufferAsync_m64C808AD99BFCFA25E60C9684B65309E9FD9D019(L_15, L_16, L_17, NULL);
			NullCheck(L_18);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_19;
			L_19 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_18, (bool)0, NULL);
			V_3 = L_19;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_20;
			L_20 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_3), NULL);
			V_2 = L_20;
			bool L_21;
			L_21 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_2), NULL);
			if (L_21)
			{
				goto IL_00c6_1;
			}
		}
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_23 = V_2;
			__this->___U3CU3Eu__1_7 = L_23;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_mC298A0EAA88F7E12E1B81042565F11AAF4AD579B(L_24, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_mC298A0EAA88F7E12E1B81042565F11AAF4AD579B_RuntimeMethod_var);
			goto IL_01c6;
		}

IL_00aa_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_25 = __this->___U3CU3Eu__1_7;
			V_2 = L_25;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_26 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_26, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00c6_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_2), NULL);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_28 = (&__this->___U3CoutputU3E5__3_6);
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uintptr_t L_29 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			L_28->___pos_2 = L_29;
		}

IL_00dd_1:
		{
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_30 = V_1;
			ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_31;
			L_31 = ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27(ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_RuntimeMethod_var);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_32 = (&__this->___U3CoutputU3E5__3_6);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_33 = (&__this->___U3CinputU3E5__2_5);
			int32_t L_34 = __this->___directive_4;
			NullCheck(L_30);
			uintptr_t L_35;
			L_35 = CompressionStream_Compress_m903275FCB41453208F20B940B184D363987BB2F9(L_30, L_31, L_32, L_33, L_34, NULL);
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uintptr_t L_36 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			bool L_37;
			L_37 = UIntPtr_op_Inequality_m9C09B4CB3986B59EC207CC62000C761A1F161161(L_35, L_36, NULL);
			if (L_37)
			{
				goto IL_004d_1;
			}
		}
		{
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_38 = (&__this->___U3CoutputU3E5__3_6);
			uintptr_t L_39 = L_38->___pos_2;
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uintptr_t L_40 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			bool L_41;
			L_41 = UIntPtr_op_Inequality_m9C09B4CB3986B59EC207CC62000C761A1F161161(L_39, L_40, NULL);
			if (!L_41)
			{
				goto IL_018d_1;
			}
		}
		{
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_42 = V_1;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_43 = (&__this->___U3CoutputU3E5__3_6);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = __this->___cancellationToken_3;
			NullCheck(L_42);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_45;
			L_45 = CompressionStream_FlushOutputBufferAsync_m64C808AD99BFCFA25E60C9684B65309E9FD9D019(L_42, L_43, L_44, NULL);
			NullCheck(L_45);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_46;
			L_46 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_45, (bool)0, NULL);
			V_3 = L_46;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_47;
			L_47 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_3), NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_2), NULL);
			if (L_48)
			{
				goto IL_0186_1;
			}
		}
		{
			int32_t L_49 = 1;
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_50 = V_2;
			__this->___U3CU3Eu__1_7 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_51 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_mC298A0EAA88F7E12E1B81042565F11AAF4AD579B(L_51, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6_mC298A0EAA88F7E12E1B81042565F11AAF4AD579B_RuntimeMethod_var);
			goto IL_01c6;
		}

IL_016a_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_52 = __this->___U3CU3Eu__1_7;
			V_2 = L_52;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_53 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_53, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
		}

IL_0186_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_2), NULL);
		}

IL_018d_1:
		{
			CompressionStream_tC8498CE4D6AFDB446DE578D5C68B68D0C1440314* L_55 = V_1;
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uintptr_t L_56 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			NullCheck(L_55);
			L_55->___pos_9 = L_56;
			goto IL_01b3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_57 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_58 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_57, L_58, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c6;
	}// end catch (depth: 1)

IL_01b3:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_59 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_59, NULL);
	}

IL_01c6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushCompressStreamAsyncU3Ed__30_MoveNext_mA53DE7F00CED731DFDEBBA33B169120677AE62AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6*>(__this + _offset);
	U3CFlushCompressStreamAsyncU3Ed__30_MoveNext_mA53DE7F00CED731DFDEBBA33B169120677AE62AB(_thisAdjusted, method);
}
// System.Void ZstdNet.CompressionStream/<FlushCompressStreamAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushCompressStreamAsyncU3Ed__30_SetStateMachine_m6F20EBC75CF9D785D3B08CD4C93F468E6FAAC4BB (U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushCompressStreamAsyncU3Ed__30_SetStateMachine_m6F20EBC75CF9D785D3B08CD4C93F468E6FAAC4BB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFlushCompressStreamAsyncU3Ed__30_t96C934913970EE9FAF1A506C9EE9D2E8854227C6*>(__this + _offset);
	U3CFlushCompressStreamAsyncU3Ed__30_SetStateMachine_m6F20EBC75CF9D785D3B08CD4C93F468E6FAAC4BB(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZstdNet.Compressor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compressor__ctor_m6FF33A81C6CE75639B7119E0921286E2242C2901 (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_0;
		L_0 = CompressionOptions_get_Default_mE9E83387C06301955904FB3773766FBB9C08E99F_inline(NULL);
		Compressor__ctor_m553A9E0BDC21174AA2F0A2FDEC8ABBC368040CA4(__this, L_0, NULL);
		return;
	}
}
// System.Void ZstdNet.Compressor::.ctor(ZstdNet.CompressionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compressor__ctor_m553A9E0BDC21174AA2F0A2FDEC8ABBC368040CA4 (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_0 = ___0_options;
		__this->___Options_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Options_0), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = ExternMethods_ZSTD_createCCtx_m5A95330FED8F3C05FD3546E69A6630ED5DB4AEB5(NULL);
		intptr_t L_2;
		L_2 = ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E(L_1, NULL);
		__this->___cctx_1 = L_2;
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_3 = ___0_options;
		intptr_t L_4 = __this->___cctx_1;
		NullCheck(L_3);
		CompressionOptions_ApplyCompressionParams_m8D1020B3A6CD97584148BB720773C26125EEB3A1(L_3, L_4, NULL);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_5 = ___0_options;
		NullCheck(L_5);
		intptr_t L_6 = L_5->___Cdict_5;
		intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_8;
		L_8 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		intptr_t L_9 = __this->___cctx_1;
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_10 = ___0_options;
		NullCheck(L_10);
		intptr_t L_11 = L_10->___Cdict_5;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_12;
		L_12 = ExternMethods_ZSTD_CCtx_refCDict_m16EBAFE1B53B89495B73D0D2C8E561E802075159(L_9, L_11, NULL);
		uintptr_t L_13;
		L_13 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_12, NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void ZstdNet.Compressor::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compressor_Finalize_m99A3A54A09CE056BC68C900ADBE79D94CBB964C1 (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Compressor_Dispose_m6280A20C4A9D4F676D89F9F42738BBFCC08A32E8(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void ZstdNet.Compressor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compressor_Dispose_m07EC8EFB91CE918614AB02704764DC485188DBFB (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Compressor_Dispose_m6280A20C4A9D4F676D89F9F42738BBFCC08A32E8(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void ZstdNet.Compressor::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compressor_Dispose_m6280A20C4A9D4F676D89F9F42738BBFCC08A32E8 (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___cctx_1;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		intptr_t L_3 = __this->___cctx_1;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = ExternMethods_ZSTD_freeCCtx_m4EFC904EE7EB8A4B38B40B58D7D6AD0F2DE92871(L_3, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___cctx_1 = L_5;
		return;
	}
}
// System.Byte[] ZstdNet.Compressor::Wrap(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Compressor_Wrap_mFBCE77FBC4F2C9890E73EF3E6CEA0A62A7BED444 (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_1), L_0, /*hidden argument*/ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Compressor_Wrap_mFAECF8CF0E10234A75AA170D1862331E5DE73AFD(__this, L_1, NULL);
		return L_2;
	}
}
// System.Byte[] ZstdNet.Compressor::Wrap(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Compressor_Wrap_mA3512CFD9E0B13B96FA2C10D05C21C8645E2CAAC (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___0_src;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128(L_0, ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Compressor_Wrap_mFAECF8CF0E10234A75AA170D1862331E5DE73AFD(__this, L_1, NULL);
		return L_2;
	}
}
// System.Byte[] ZstdNet.Compressor::Wrap(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Compressor_Wrap_mFAECF8CF0E10234A75AA170D1862331E5DE73AFD (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Compressor_Wrap_mFAECF8CF0E10234A75AA170D1862331E5DE73AFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_src), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((uint64_t)(L_0) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_mFAECF8CF0E10234A75AA170D1862331E5DE73AFD_RuntimeMethod_var);
		uint64_t L_1;
		L_1 = Compressor_GetCompressBoundLong_m72F505B22AE1D2E6AA8B748033F26F7B45FF4AA7(((uint64_t)L_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Math_Min_m1C589BAB3D638CE6D3A29E552EDB5E9F95856C28(((int64_t)((int32_t)2147483591)), L_1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_3;
		L_3 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		uint64_t L_4 = V_0;
		if ((uint64_t)(L_4) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_mFAECF8CF0E10234A75AA170D1862331E5DE73AFD_RuntimeMethod_var);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_3, ((int32_t)L_4));
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
				ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_6;
				L_6 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
				NullCheck(L_6);
				VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(T[],System.Boolean) */, L_6, L_7, (bool)0);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8 = ___0_src;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
			Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
			memset((&L_10), 0, sizeof(L_10));
			Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_10), L_9, /*hidden argument*/Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var);
			int32_t L_11;
			L_11 = Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC(__this, L_8, L_10, NULL);
			V_2 = L_11;
			int32_t L_12 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
			V_3 = L_13;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_3;
			int32_t L_16 = V_2;
			Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_14, (RuntimeArray*)L_15, L_16, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_3;
			V_4 = L_17;
			goto IL_0055;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		return L_18;
	}
}
// System.Int32 ZstdNet.Compressor::GetCompressBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Compressor_GetCompressBound_m2A3BAB1B145E099015523A6DF0D0B25C616CCAC7 (int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Compressor_GetCompressBound_m2A3BAB1B145E099015523A6DF0D0B25C616CCAC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_size;
		if ((uint64_t)(L_0) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_GetCompressBound_m2A3BAB1B145E099015523A6DF0D0B25C616CCAC7_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = ExternMethods_ZSTD_compressBound_m46E7BA07D5F9BB265DFD9B3E618E722A73E87E7C(L_1, NULL);
		uint32_t L_3;
		L_3 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_2, NULL);
		if ((uint64_t)(L_3) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_GetCompressBound_m2A3BAB1B145E099015523A6DF0D0B25C616CCAC7_RuntimeMethod_var);
		return ((int32_t)L_3);
	}
}
// System.UInt64 ZstdNet.Compressor::GetCompressBoundLong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Compressor_GetCompressBoundLong_m72F505B22AE1D2E6AA8B748033F26F7B45FF4AA7 (uint64_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = ExternMethods_ZSTD_compressBound_m46E7BA07D5F9BB265DFD9B3E618E722A73E87E7C(L_1, NULL);
		uint64_t L_3;
		L_3 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_2, NULL);
		return L_3;
	}
}
// System.Int32 ZstdNet.Compressor::Wrap(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Compressor_Wrap_mDAE63A8DDAF2A6747AAC40F1FA7670AFAA316DC5 (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dst, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_1), L_0, /*hidden argument*/ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_dst;
		int32_t L_3 = ___2_offset;
		int32_t L_4;
		L_4 = Compressor_Wrap_m59F9E417AA23CE7B74EFC05B64D5602A05EAB96B(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 ZstdNet.Compressor::Wrap(System.ArraySegment`1<System.Byte>,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Compressor_Wrap_m64AFE688212090D1CAE97AD86EAEA6193EAA156A (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_src, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dst, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___0_src;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128(L_0, ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_dst;
		int32_t L_3 = ___2_offset;
		int32_t L_4;
		L_4 = Compressor_Wrap_m59F9E417AA23CE7B74EFC05B64D5602A05EAB96B(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 ZstdNet.Compressor::Wrap(System.ReadOnlySpan`1<System.Byte>,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Compressor_Wrap_m59F9E417AA23CE7B74EFC05B64D5602A05EAB96B (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dst, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Compressor_Wrap_m59F9E417AA23CE7B74EFC05B64D5602A05EAB96B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___2_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_dst;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0015;
		}
	}

IL_000a:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Compressor_Wrap_m59F9E417AA23CE7B74EFC05B64D5602A05EAB96B_RuntimeMethod_var)));
	}

IL_0015:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___0_src;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_dst;
		int32_t L_6 = ___2_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_dst;
		NullCheck(L_7);
		int32_t L_8 = ___2_offset;
		if (((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length)) - (int64_t)L_8 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length)) - (int64_t)L_8 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_m59F9E417AA23CE7B74EFC05B64D5602A05EAB96B_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_9), L_5, L_6, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)), /*hidden argument*/Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		int32_t L_10;
		L_10 = Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC(__this, L_4, L_9, NULL);
		return L_10;
	}
}
// System.Int32 ZstdNet.Compressor::Wrap(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC (Compressor_tF596D1F650273747F7632E672347E2FAC5FE364E* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_0 = __this->___Options_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___AdvancedParams_4;
		if (L_1)
		{
			goto IL_008c;
		}
	}
	{
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_2 = __this->___Options_0;
		NullCheck(L_2);
		intptr_t L_3 = L_2->___Cdict_5;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		intptr_t L_6 = __this->___cctx_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7 = ___1_dst;
		int32_t L_8;
		L_8 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_dst), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((uint64_t)(L_8) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_9;
		L_9 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_8), NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10 = ___0_src;
		int32_t L_11;
		L_11 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_src), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((uint64_t)(L_11) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC_RuntimeMethod_var);
		uintptr_t L_12;
		L_12 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_11), NULL);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_13 = __this->___Options_0;
		NullCheck(L_13);
		intptr_t L_14 = L_13->___Cdict_5;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_15;
		L_15 = ExternMethods_ZSTD_compress_usingCDict_m821C6C238A52DA71F56ED50689BAC608C15E1C3E(L_6, L_7, L_9, L_10, L_12, L_14, NULL);
		G_B5_0 = L_15;
		goto IL_00b3;
	}

IL_0058:
	{
		intptr_t L_16 = __this->___cctx_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = ___1_dst;
		int32_t L_18;
		L_18 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_dst), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((uint64_t)(L_18) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_19;
		L_19 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_18), NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_20 = ___0_src;
		int32_t L_21;
		L_21 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_src), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((uint64_t)(L_21) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC_RuntimeMethod_var);
		uintptr_t L_22;
		L_22 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_21), NULL);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_23 = __this->___Options_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___CompressionLevel_2;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_25;
		L_25 = ExternMethods_ZSTD_compressCCtx_m941DEF05EE817575E80C2F669A9EED8F33C2507F(L_16, L_17, L_19, L_20, L_22, L_24, NULL);
		G_B5_0 = L_25;
		goto IL_00b3;
	}

IL_008c:
	{
		intptr_t L_26 = __this->___cctx_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_27 = ___1_dst;
		int32_t L_28;
		L_28 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_dst), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((uint64_t)(L_28) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_29;
		L_29 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_28), NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_30 = ___0_src;
		int32_t L_31;
		L_31 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_src), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((uint64_t)(L_31) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC_RuntimeMethod_var);
		uintptr_t L_32;
		L_32 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_31), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_33;
		L_33 = ExternMethods_ZSTD_compress2_m78BAB680E20DFCC58BD1EFE1F23E6753DADEDA8C(L_26, L_27, L_29, L_30, L_32, NULL);
		G_B5_0 = L_33;
	}

IL_00b3:
	{
		uintptr_t L_34;
		L_34 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(G_B5_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_35;
		L_35 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_34, NULL);
		if ((uint64_t)(L_35) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Compressor_Wrap_mF6CCD5E1835C4D54C692C2C1B3C76C4FD53B4ECC_RuntimeMethod_var);
		return ((int32_t)L_35);
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
// System.Void ZstdNet.Consts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Consts__ctor_m174BECE718DB4D25CFE07F26D19516FE30FD77EA (Consts_t39B9C7C9E6D6C548E31B542BB14258AD9A660714* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ZstdNet.DecompressionOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions__ctor_m3B7ED4426ADE62E8030895C3FA21D126FED171A2 (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, const RuntimeMethod* method) 
{
	{
		DecompressionOptions__ctor_m2371C1092745E6B515819CBB58FB743D32017E6D(__this, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, NULL);
		return;
	}
}
// System.Void ZstdNet.DecompressionOptions::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions__ctor_m2371C1092745E6B515819CBB58FB743D32017E6D (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecompressionOptions__ctor_m2371C1092745E6B515819CBB58FB743D32017E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_dict;
		__this->___Dictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Dictionary_0), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_dict;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_dict;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_dict;
		NullCheck(L_3);
		if ((uint64_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DecompressionOptions__ctor_m2371C1092745E6B515819CBB58FB743D32017E6D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = ExternMethods_ZSTD_createDDict_mAB80E29DAE49AC56900FE3F59B5B5407A9D5BB0A(L_2, L_4, NULL);
		intptr_t L_6;
		L_6 = ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E(L_5, NULL);
		__this->___Ddict_2 = L_6;
		return;
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void ZstdNet.DecompressionOptions::.ctor(System.Byte[],System.Collections.Generic.IReadOnlyDictionary`2<ZstdNet.ZSTD_dParameter,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions__ctor_m51E6CB659A968830FDC15467FA78E4E1A8205ED4 (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, RuntimeObject* ___1_advancedParams, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1E73829B8BC5BDF7F82E2C0210ED57078DE7AB48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1569142CA46DD16B66EE9531104787F1C3913AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_dict;
		DecompressionOptions__ctor_m2371C1092745E6B515819CBB58FB743D32017E6D(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_advancedParams;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___1_advancedParams;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_dParameter,System.Int32>>::GetEnumerator() */, IEnumerable_1_t1E73829B8BC5BDF7F82E2C0210ED57078DE7AB48_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_009c;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
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
				goto IL_0089_1;
			}

IL_0014_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305 L_7;
				L_7 = InterfaceFuncInvoker0< KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_dParameter,System.Int32>>::get_Current() */, IEnumerator_1_t1569142CA46DD16B66EE9531104787F1C3913AE3_il2cpp_TypeInfo_var, L_6);
				V_1 = L_7;
				int32_t L_8;
				L_8 = KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_inline((&V_1), KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_9;
				L_9 = ExternMethods_ZSTD_dParam_getBounds_mD0F88487DBFBBA0BA11555A3188AB7A9589FB8F6(L_8, NULL);
				V_2 = L_9;
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_10 = V_2;
				uintptr_t L_11 = L_10.___error_0;
				uintptr_t L_12;
				L_12 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_11, NULL);
				int32_t L_13;
				L_13 = KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_inline((&V_1), KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_RuntimeMethod_var);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_14 = V_2;
				int32_t L_15 = L_14.___lowerBound_1;
				if ((((int32_t)L_13) < ((int32_t)L_15)))
				{
					goto IL_0052_1;
				}
			}
			{
				int32_t L_16;
				L_16 = KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_inline((&V_1), KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_RuntimeMethod_var);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_17 = V_2;
				int32_t L_18 = L_17.___upperBound_2;
				if ((((int32_t)L_16) <= ((int32_t)L_18)))
				{
					goto IL_0089_1;
				}
			}

IL_0052_1:
			{
				int32_t L_19;
				L_19 = KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_inline((&V_1), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_RuntimeMethod_var)));
				int32_t L_20 = L_19;
				RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZSTD_dParameter_t53C714FCCEC117249B53096024CB3B3750172B47_il2cpp_TypeInfo_var)), &L_20);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_22 = V_2;
				int32_t L_23 = L_22.___lowerBound_1;
				int32_t L_24 = L_23;
				RuntimeObject* L_25 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_24);
				ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B L_26 = V_2;
				int32_t L_27 = L_26.___upperBound_2;
				int32_t L_28 = L_27;
				RuntimeObject* L_29 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_28);
				String_t* L_30;
				L_30 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE70C155BEC2548B47D08CE2E0F581A28DAD23304)), L_21, L_25, L_29, NULL);
				ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_31 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
				NullCheck(L_31);
				ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37464CB9EEB6BBAEDCD12F95DBD12CE7828C266)), L_30, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionOptions__ctor_m51E6CB659A968830FDC15467FA78E4E1A8205ED4_RuntimeMethod_var)));
			}

IL_0089_1:
			{
				RuntimeObject* L_32 = V_0;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0014_1;
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
		RuntimeObject* L_34 = ___1_advancedParams;
		__this->___AdvancedParams_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AdvancedParams_1), (void*)L_34);
		return;
	}
}
// System.Void ZstdNet.DecompressionOptions::ApplyDecompressionParams(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions_ApplyDecompressionParams_m3B6258748A2E9EC1623DE31B1655A7D7B1899096 (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, intptr_t ___0_dctx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1E73829B8BC5BDF7F82E2C0210ED57078DE7AB48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1569142CA46DD16B66EE9531104787F1C3913AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = __this->___AdvancedParams_1;
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
		RuntimeObject* L_1 = __this->___AdvancedParams_1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_dParameter,System.Int32>>::GetEnumerator() */, IEnumerable_1_t1E73829B8BC5BDF7F82E2C0210ED57078DE7AB48_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_004b;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305 L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t57BD31C6DA2D251B257D52491DD926F716DAB305 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<ZstdNet.ZSTD_dParameter,System.Int32>>::get_Current() */, IEnumerator_1_t1569142CA46DD16B66EE9531104787F1C3913AE3_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				intptr_t L_7 = ___0_dctx;
				int32_t L_8;
				L_8 = KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_inline((&V_1), KeyValuePair_2_get_Key_mB4146574A957553CB4EF8E313AA44B172E12D133_RuntimeMethod_var);
				int32_t L_9;
				L_9 = KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_inline((&V_1), KeyValuePair_2_get_Value_m1209571F8B45E3AC95100978BC1272FB999498B9_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
				uintptr_t L_10;
				L_10 = ExternMethods_ZSTD_DCtx_setParameter_mB40280F7A1EE4300840C42A8060E7D724CEB8CFF(L_7, L_8, L_9, NULL);
				uintptr_t L_11;
				L_11 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_10, NULL);
			}

IL_0038_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		return;
	}
}
// System.Void ZstdNet.DecompressionOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions_Finalize_mC4A6BC66434021E9BB84EDD92666A2064D120ABE (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			DecompressionOptions_Dispose_mFEE84F6D0DC3E18C1AD95100961A4B63283B6DC0(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void ZstdNet.DecompressionOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions_Dispose_m95E86DB004F5A25B884AF23C4FD4E203ABFF2F41 (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecompressionOptions_Dispose_mFEE84F6D0DC3E18C1AD95100961A4B63283B6DC0(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void ZstdNet.DecompressionOptions::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionOptions_Dispose_mFEE84F6D0DC3E18C1AD95100961A4B63283B6DC0 (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___Ddict_2;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		intptr_t L_3 = __this->___Ddict_2;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = ExternMethods_ZSTD_freeDDict_mF6643D51ACB022DC3F6D83A9D9048C4FF9046A79(L_3, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___Ddict_2 = L_5;
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
// System.Void ZstdNet.DecompressionStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream__ctor_mA90ACCB17250800C2491D60F3ACA2A43A33CEFFF (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA(__this, L_0, (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991*)NULL, 0, NULL);
		return;
	}
}
// System.Void ZstdNet.DecompressionStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream__ctor_mDA47CFBA4831AE69176C34D7330F6FF483E4ED64 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_bufferSize, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_bufferSize;
		DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA(__this, L_0, (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991*)NULL, L_1, NULL);
		return;
	}
}
// System.Void ZstdNet.DecompressionStream::.ctor(System.IO.Stream,ZstdNet.DecompressionOptions,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* ___1_options, int32_t ___2_bufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* G_B11_0 = NULL;
	DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* G_B12_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA_RuntimeMethod_var)));
	}

IL_0014:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEDCF37206A03E4CE4438C517B164F328C678509)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_5 = ___2_bufferSize;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA_RuntimeMethod_var)));
	}

IL_003b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___0_stream;
		__this->___innerStream_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___innerStream_5), (void*)L_7);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = ExternMethods_ZSTD_createDStream_m3D00942A63B68275D428EBAA8D046B184AEF6D66(NULL);
		intptr_t L_9;
		L_9 = ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E(L_8, NULL);
		__this->___dStream_8 = L_9;
		intptr_t L_10 = __this->___dStream_8;
		uintptr_t L_11;
		L_11 = ExternMethods_ZSTD_DCtx_reset_mF3B03CE3C1DD7194668BBF9DD338BE5EB0A8BB95(L_10, 1, NULL);
		uintptr_t L_12;
		L_12 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_11, NULL);
		DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* L_13 = ___1_options;
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* L_14 = ___1_options;
		intptr_t L_15 = __this->___dStream_8;
		NullCheck(L_14);
		DecompressionOptions_ApplyDecompressionParams_m3B6258748A2E9EC1623DE31B1655A7D7B1899096(L_14, L_15, NULL);
		DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* L_16 = ___1_options;
		NullCheck(L_16);
		intptr_t L_17 = L_16->___Ddict_2;
		intptr_t L_18 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_19;
		L_19 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_20 = __this->___dStream_8;
		DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* L_21 = ___1_options;
		NullCheck(L_21);
		intptr_t L_22 = L_21->___Ddict_2;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_23;
		L_23 = ExternMethods_ZSTD_DCtx_refDDict_m1E2B18CA8D56323DAAC27D44534A180DE0E6A25D(L_20, L_22, NULL);
		uintptr_t L_24;
		L_24 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_23, NULL);
	}

IL_009c:
	{
		int32_t L_25 = ___2_bufferSize;
		G_B10_0 = __this;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			G_B11_0 = __this;
			goto IL_00b3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_26;
		L_26 = ExternMethods_ZSTD_DStreamInSize_mE88B4638B00E36339111FBECC32B2FF9A84D1E38(NULL);
		uintptr_t L_27;
		L_27 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_28;
		L_28 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_27, NULL);
		if ((uint64_t)(L_28) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA_RuntimeMethod_var);
		G_B12_0 = ((int32_t)L_28);
		G_B12_1 = G_B10_0;
		goto IL_00b4;
	}

IL_00b3:
	{
		int32_t L_29 = ___2_bufferSize;
		G_B12_0 = L_29;
		G_B12_1 = G_B11_0;
	}

IL_00b4:
	{
		NullCheck(G_B12_1);
		G_B12_1->___bufferSize_7 = G_B12_0;
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_30;
		L_30 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		int32_t L_31 = __this->___bufferSize_7;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_30, L_31);
		__this->___inputBuffer_6 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputBuffer_6), (void*)L_32);
		int32_t L_33 = __this->___bufferSize_7;
		if ((uint64_t)(L_33) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DecompressionStream__ctor_mBF22F13C7E2CD968FE58A92F2612C045FA0279AA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_34;
		L_34 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_33), NULL);
		uintptr_t L_35 = L_34;
		V_0 = L_35;
		__this->___size_10 = L_35;
		uintptr_t L_36 = V_0;
		__this->___pos_9 = L_36;
		return;
	}
}
// System.Int32 ZstdNet.DecompressionStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecompressionStream_Read_m9E66912FFFE9A7A517C1FA2D7434603A18195AE1 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947(__this, L_0, L_1, L_2, NULL);
		DecompressionStream_EnsureNotDisposed_mBA2C586954AEB743CA6370E2341BA9058F8881F1(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		int32_t L_5 = ___2_count;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		int32_t L_7;
		L_7 = DecompressionStream_ReadInternal_m83FDDE3ADF23BA422EF62A450DF9852F40FBF2B6(__this, L_6, NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> ZstdNet.DecompressionStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* DecompressionStream_ReadAsync_m72D2944CC2091E84D16468411EC0024B5EB5B314 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947(__this, L_0, L_1, L_2, NULL);
		DecompressionStream_EnsureNotDisposed_mBA2C586954AEB743CA6370E2341BA9058F8881F1(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		int32_t L_5 = ___2_count;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_RuntimeMethod_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___3_cancellationToken;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_8;
		L_8 = DecompressionStream_ReadInternalAsync_mAA9D69BA6C3E149C55B539D334B208F830685E86(__this, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Int32 ZstdNet.DecompressionStream::ReadInternal(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecompressionStream_ReadInternal_m83FDDE3ADF23BA422EF62A450DF9852F40FBF2B6 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecompressionStream_ReadInternal_m83FDDE3ADF23BA422EF62A450DF9852F40FBF2B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		uintptr_t L_0 = __this->___pos_9;
		uintptr_t L_1 = __this->___size_10;
		ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&V_0), L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_2 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		int32_t L_3;
		L_3 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_buffer), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((uint64_t)(L_3) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DecompressionStream_ReadInternal_m83FDDE3ADF23BA422EF62A450DF9852F40FBF2B6_RuntimeMethod_var);
		uintptr_t L_4;
		L_4 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_3), NULL);
		ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&V_1), L_2, L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___inputBuffer_6;
		int32_t L_6 = __this->___bufferSize_7;
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&V_2), L_5, 0, L_6, Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		goto IL_004d;
	}

IL_0042:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7 = ___0_buffer;
		DecompressionStream_Decompress_mDAF8DC903923111EEF731F974E519706F23BBF57(__this, L_7, (&V_1), (&V_0), NULL);
	}

IL_004d:
	{
		bool L_8;
		L_8 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25((&V_1), NULL);
		if (L_8)
		{
			goto IL_006b;
		}
	}
	{
		bool L_9;
		L_9 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25((&V_0), NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10 = V_2;
		int32_t L_11;
		L_11 = DecompressionStream_FillInputBuffer_mFDA495B4237D5519FDB275E4B66DF8FD972D5962(__this, L_10, (&V_0), NULL);
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0042;
		}
	}

IL_006b:
	{
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_12 = V_0;
		uintptr_t L_13 = L_12.___pos_2;
		__this->___pos_9 = L_13;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_14 = V_0;
		uintptr_t L_15 = L_14.___size_1;
		__this->___size_10 = L_15;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_16 = V_1;
		uintptr_t L_17 = L_16.___pos_2;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_18;
		L_18 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_17, NULL);
		if ((uint64_t)(L_18) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DecompressionStream_ReadInternal_m83FDDE3ADF23BA422EF62A450DF9852F40FBF2B6_RuntimeMethod_var);
		return ((int32_t)L_18);
	}
}
// System.Threading.Tasks.Task`1<System.Int32> ZstdNet.DecompressionStream::ReadInternalAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* DecompressionStream_ReadInternalAsync_mAA9D69BA6C3E149C55B539D334B208F830685E86 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_m00A0D62B4821EF1AB01EF6A7EB5C1FB9BB626292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE(AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_1 = ___0_buffer;
		(&V_0)->___buffer_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___buffer_3))->____object_0), (void*)NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___1_cancellationToken;
		(&V_0)->___cancellationToken_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_4))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_m00A0D62B4821EF1AB01EF6A7EB5C1FB9BB626292(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_m00A0D62B4821EF1AB01EF6A7EB5C1FB9BB626292_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(L_4, AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void ZstdNet.DecompressionStream::Decompress(System.Span`1<System.Byte>,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_Buffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Decompress_mDAF8DC903923111EEF731F974E519706F23BBF57 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___2_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	uint8_t* V_1 = NULL;
	void* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___inputBuffer_6;
		NullCheck(L_0);
		V_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		uint8_t* L_1 = V_1;
		V_0 = (void*)((uintptr_t)L_1);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_buffer;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		V_3 = L_3;
		uint8_t* L_4 = V_3;
		V_2 = (void*)((uintptr_t)L_4);
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_5 = ___2_input;
		void* L_6 = V_0;
		intptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_7), L_6, /*hidden argument*/NULL);
		L_5->___buffer_0 = L_7;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_8 = ___1_output;
		void* L_9 = V_2;
		intptr_t L_10;
		memset((&L_10), 0, sizeof(L_10));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_10), L_9, /*hidden argument*/NULL);
		L_8->___buffer_0 = L_10;
		intptr_t L_11 = __this->___dStream_8;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_12 = ___1_output;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_13 = ___2_input;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_14;
		L_14 = ExternMethods_ZSTD_decompressStream_mCEC64E14BE7D6758DC941678ED7F4A8DE65EBC2C(L_11, L_12, L_13, NULL);
		uintptr_t L_15;
		L_15 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(L_14, NULL);
		V_3 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Int32 ZstdNet.DecompressionStream::FillInputBuffer(System.Span`1<System.Byte>,ZstdNet.ExternMethods/ZSTD_Buffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecompressionStream_FillInputBuffer_mFDA495B4237D5519FDB275E4B66DF8FD972D5962 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_inputSpan, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecompressionStream_FillInputBuffer_mFDA495B4237D5519FDB275E4B66DF8FD972D5962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___innerStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___inputBuffer_6;
		int32_t L_2;
		L_2 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_inputSpan), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, L_2);
		V_0 = L_3;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_4 = ___1_input;
		int32_t L_5 = V_0;
		if ((uint64_t)(L_5) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DecompressionStream_FillInputBuffer_mFDA495B4237D5519FDB275E4B66DF8FD972D5962_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_6;
		L_6 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_5), NULL);
		L_4->___size_1 = L_6;
		ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_7 = ___1_input;
		uintptr_t L_8 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		L_7->___pos_2 = L_8;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void ZstdNet.DecompressionStream::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Finalize_mD899A95E7C51F2457BE0A06D1C2952573093AAFC (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(21 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Boolean ZstdNet.DecompressionStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecompressionStream_get_CanRead_m8DA5A97B97C56AB382B013BFB37D9347C5CEF437 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean ZstdNet.DecompressionStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecompressionStream_get_CanSeek_m56CC8EA2A5E45191BA5284724EB524CFF2AEB03C (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean ZstdNet.DecompressionStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecompressionStream_get_CanWrite_m904E3ED6859E15F8FA203FC8F2B11FE8E6AB144B (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int64 ZstdNet.DecompressionStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DecompressionStream_get_Length_m90EAA3FA248FFC950F59DD5469D97E59ABE437E8 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_get_Length_m90EAA3FA248FFC950F59DD5469D97E59ABE437E8_RuntimeMethod_var)));
	}
}
// System.Int64 ZstdNet.DecompressionStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DecompressionStream_get_Position_m0D17097DDC1EB186DC965BE04990F26D755165C1 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_get_Position_m0D17097DDC1EB186DC965BE04990F26D755165C1_RuntimeMethod_var)));
	}
}
// System.Void ZstdNet.DecompressionStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_set_Position_m857FB69479F439092F58D1AC6C5A44837A2173E8 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_set_Position_m857FB69479F439092F58D1AC6C5A44837A2173E8_RuntimeMethod_var)));
	}
}
// System.Void ZstdNet.DecompressionStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Flush_m0354D8B2C06CFFB020AC97C4D02E0C99885D25E9 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_Flush_m0354D8B2C06CFFB020AC97C4D02E0C99885D25E9_RuntimeMethod_var)));
	}
}
// System.Int64 ZstdNet.DecompressionStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DecompressionStream_Seek_m6F8C2CBDBBF4509A7FBEA68F02108879BC02F303 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_Seek_m6F8C2CBDBBF4509A7FBEA68F02108879BC02F303_RuntimeMethod_var)));
	}
}
// System.Void ZstdNet.DecompressionStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_SetLength_m14B989B506547A811C7106E2BE0B4A7C805A4430 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_SetLength_m14B989B506547A811C7106E2BE0B4A7C805A4430_RuntimeMethod_var)));
	}
}
// System.Void ZstdNet.DecompressionStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Write_m0592DAD6DB82252A6B4169DEE065EBE31E9952B6 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_Write_m0592DAD6DB82252A6B4169DEE065EBE31E9952B6_RuntimeMethod_var)));
	}
}
// System.Void ZstdNet.DecompressionStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_Dispose_mAD97667900122F4F373C97E85959B54683989AAB (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___dStream_8;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		intptr_t L_3 = __this->___dStream_8;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = ExternMethods_ZSTD_freeDStream_m5EACEE3A9C5A284B22F898CC662B80054E148A2F(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___inputBuffer_6;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_6;
		L_6 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___inputBuffer_6;
		NullCheck(L_6);
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(T[],System.Boolean) */, L_6, L_7, (bool)0);
	}

IL_0038:
	{
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___dStream_8 = L_8;
		return;
	}
}
// System.Void ZstdNet.DecompressionStream::EnsureParamsValid(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_6 = ___2_count;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_buffer;
		NullCheck(L_7);
		int32_t L_8 = ___1_offset;
		if (((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length)) - (int64_t)L_8 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length)) - (int64_t)L_8 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6C8B72226E4343DE7DD8F28557CD57F468D45DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_EnsureParamsValid_m821E6109984FC46184B3806C0A028BFCAAD8B947_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
// System.Void ZstdNet.DecompressionStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecompressionStream_EnsureNotDisposed_mBA2C586954AEB743CA6370E2341BA9058F8881F1 (DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___dStream_8;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D5F51C341264B91EFC88E49B7FF6B69E238B25A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecompressionStream_EnsureNotDisposed_mBA2C586954AEB743CA6370E2341BA9058F8881F1_RuntimeMethod_var)));
	}

IL_001d:
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
// System.Void ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadInternalAsyncU3Ed__12_MoveNext_m8D376F030A1B2679793FBBF36B3B964C251EFA2C (U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_mB74F6F10590860EA0DF97CE29FF1E5FAD1537564_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadInternalAsyncU3Ed__12_MoveNext_m8D376F030A1B2679793FBBF36B3B964C251EFA2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00bd_1;
			}
		}
		{
			DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* L_3 = V_1;
			NullCheck(L_3);
			uintptr_t L_4 = L_3->___pos_9;
			DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* L_5 = V_1;
			NullCheck(L_5);
			uintptr_t L_6 = L_5->___size_10;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_7;
			memset((&L_7), 0, sizeof(L_7));
			ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&L_7), L_4, L_6, /*hidden argument*/NULL);
			__this->___U3CinputU3E5__2_5 = L_7;
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uintptr_t L_8 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (&__this->___buffer_3);
			int32_t L_10;
			L_10 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_9, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
			if ((uint64_t)(L_10) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CReadInternalAsyncU3Ed__12_MoveNext_m8D376F030A1B2679793FBBF36B3B964C251EFA2C_RuntimeMethod_var);
			uintptr_t L_11;
			L_11 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_10), NULL);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305 L_12;
			memset((&L_12), 0, sizeof(L_12));
			ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29((&L_12), L_8, L_11, /*hidden argument*/NULL);
			__this->___U3CoutputU3E5__3_6 = L_12;
			goto IL_0124_1;
		}

IL_0051_1:
		{
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_13 = (&__this->___U3CinputU3E5__2_5);
			bool L_14;
			L_14 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25(L_13, NULL);
			if (!L_14)
			{
				goto IL_0107_1;
			}
		}
		{
			DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* L_15 = V_1;
			NullCheck(L_15);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = L_15->___innerStream_5;
			DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* L_17 = V_1;
			NullCheck(L_17);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___inputBuffer_6;
			DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* L_19 = V_1;
			NullCheck(L_19);
			int32_t L_20 = L_19->___bufferSize_7;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_21 = __this->___cancellationToken_4;
			NullCheck(L_16);
			Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_22;
			L_22 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(26 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_16, L_18, 0, L_20, L_21);
			NullCheck(L_22);
			ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A L_23;
			L_23 = Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209(L_22, (bool)0, Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_RuntimeMethod_var);
			V_5 = L_23;
			ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_24;
			L_24 = ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_inline((&V_5), ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_RuntimeMethod_var);
			V_4 = L_24;
			bool L_25;
			L_25 = ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3((&V_4), ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00da_1;
			}
		}
		{
			int32_t L_26 = 0;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_27 = V_4;
			__this->___U3CU3Eu__1_7 = L_27;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_28 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_mB74F6F10590860EA0DF97CE29FF1E5FAD1537564(L_28, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC_mB74F6F10590860EA0DF97CE29FF1E5FAD1537564_RuntimeMethod_var);
			goto IL_0197;
		}

IL_00bd_1:
		{
			ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_29 = __this->___U3CU3Eu__1_7;
			V_4 = L_29;
			ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* L_30 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_30, sizeof(ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
		}

IL_00da_1:
		{
			int32_t L_32;
			L_32 = ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC((&V_4), ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_RuntimeMethod_var);
			int32_t L_33 = L_32;
			V_3 = L_33;
			if (!L_33)
			{
				goto IL_0134_1;
			}
		}
		{
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_34 = (&__this->___U3CinputU3E5__2_5);
			int32_t L_35 = V_3;
			if ((uint64_t)(L_35) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CReadInternalAsyncU3Ed__12_MoveNext_m8D376F030A1B2679793FBBF36B3B964C251EFA2C_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uintptr_t L_36;
			L_36 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_35), NULL);
			L_34->___size_1 = L_36;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_37 = (&__this->___U3CinputU3E5__2_5);
			uintptr_t L_38 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
			L_37->___pos_2 = L_38;
		}

IL_0107_1:
		{
			DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* L_39 = V_1;
			Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_40 = (&__this->___buffer_3);
			Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_41;
			L_41 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_40, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_42 = (&__this->___U3CoutputU3E5__3_6);
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_43 = (&__this->___U3CinputU3E5__2_5);
			NullCheck(L_39);
			DecompressionStream_Decompress_mDAF8DC903923111EEF731F974E519706F23BBF57(L_39, L_41, L_42, L_43, NULL);
		}

IL_0124_1:
		{
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_44 = (&__this->___U3CoutputU3E5__3_6);
			bool L_45;
			L_45 = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25(L_44, NULL);
			if (!L_45)
			{
				goto IL_0051_1;
			}
		}

IL_0134_1:
		{
			DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* L_46 = V_1;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_47 = (&__this->___U3CinputU3E5__2_5);
			uintptr_t L_48 = L_47->___pos_2;
			NullCheck(L_46);
			L_46->___pos_9 = L_48;
			DecompressionStream_tDF8AC903FCCBF04FD83D332638922E69681D3D44* L_49 = V_1;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_50 = (&__this->___U3CinputU3E5__2_5);
			uintptr_t L_51 = L_50->___size_1;
			NullCheck(L_49);
			L_49->___size_10 = L_51;
			ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* L_52 = (&__this->___U3CoutputU3E5__3_6);
			uintptr_t L_53 = L_52->___pos_2;
			il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
			uint32_t L_54;
			L_54 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_53, NULL);
			if ((uint64_t)(L_54) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CReadInternalAsyncU3Ed__12_MoveNext_m8D376F030A1B2679793FBBF36B3B964C251EFA2C_RuntimeMethod_var);
			V_2 = ((int32_t)L_54);
			goto IL_0183;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_016a;
		}
		throw e;
	}

CATCH_016a:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_55 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_56 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575(L_55, L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0197;
	}// end catch (depth: 1)

IL_0183:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_57 = (&__this->___U3CU3Et__builder_1);
		int32_t L_58 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B(L_57, L_58, AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var);
	}

IL_0197:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadInternalAsyncU3Ed__12_MoveNext_m8D376F030A1B2679793FBBF36B3B964C251EFA2C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC*>(__this + _offset);
	U3CReadInternalAsyncU3Ed__12_MoveNext_m8D376F030A1B2679793FBBF36B3B964C251EFA2C(_thisAdjusted, method);
}
// System.Void ZstdNet.DecompressionStream/<ReadInternalAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadInternalAsyncU3Ed__12_SetStateMachine_mCC4E3429321D8819671BCC956BB3C5CF730E4C70 (U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadInternalAsyncU3Ed__12_SetStateMachine_mCC4E3429321D8819671BCC956BB3C5CF730E4C70_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadInternalAsyncU3Ed__12_tFA59EC00B301904FBA6752EC17C1482D0C5F76CC*>(__this + _offset);
	U3CReadInternalAsyncU3Ed__12_SetStateMachine_mCC4E3429321D8819671BCC956BB3C5CF730E4C70(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZstdNet.Decompressor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor__ctor_mB1F0E6D48B7AE4EF31FA00481BF1B8277E40DAC0 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* L_0 = (DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991*)il2cpp_codegen_object_new(DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DecompressionOptions__ctor_m2371C1092745E6B515819CBB58FB743D32017E6D(L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, NULL);
		Decompressor__ctor_mE7EEAFA4F5295ABBE45454E778F901896761E394(__this, L_0, NULL);
		return;
	}
}
// System.Void ZstdNet.Decompressor::.ctor(ZstdNet.DecompressionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor__ctor_mE7EEAFA4F5295ABBE45454E778F901896761E394 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* L_0 = ___0_options;
		__this->___Options_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Options_0), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = ExternMethods_ZSTD_createDCtx_m2F3E673AB71C1FA6B693C4B003262A0B1EFCC8C4(NULL);
		intptr_t L_2;
		L_2 = ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E(L_1, NULL);
		__this->___dctx_1 = L_2;
		DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* L_3 = ___0_options;
		intptr_t L_4 = __this->___dctx_1;
		NullCheck(L_3);
		DecompressionOptions_ApplyDecompressionParams_m3B6258748A2E9EC1623DE31B1655A7D7B1899096(L_3, L_4, NULL);
		return;
	}
}
// System.Void ZstdNet.Decompressor::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor_Finalize_m0D78F9986E9B6C244580B8DEFCC357510E489C54 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Decompressor_Dispose_mFC30AD4A845593A4A8A8F43E5D436C6B4A3DD44F(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void ZstdNet.Decompressor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor_Dispose_m9DAC698DA3302BFD67A6DF6B019D1D3017FB059D (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decompressor_Dispose_mFC30AD4A845593A4A8A8F43E5D436C6B4A3DD44F(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void ZstdNet.Decompressor::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decompressor_Dispose_mFC30AD4A845593A4A8A8F43E5D436C6B4A3DD44F (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___dctx_1;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		intptr_t L_3 = __this->___dctx_1;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = ExternMethods_ZSTD_freeDCtx_m681DDC4A2C0F84900583A0E09C9E32240ECCF36E(L_3, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___dctx_1 = L_5;
		return;
	}
}
// System.Byte[] ZstdNet.Decompressor::Unwrap(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Decompressor_Unwrap_m43830E6FA7C9FB7AE8E759B02D4FBE3F1FC7FA3A (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_maxDecompressedSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_1), L_0, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		int32_t L_2 = ___1_maxDecompressedSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Decompressor_Unwrap_mAC1A0FB838D204E85A8326BDDF9092B69CA1EBA3(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Byte[] ZstdNet.Decompressor::Unwrap(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Decompressor_Unwrap_mAC1A0FB838D204E85A8326BDDF9092B69CA1EBA3 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_src, int32_t ___1_maxDecompressedSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___0_src;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128(L_0, ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		int32_t L_2 = ___1_maxDecompressedSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Byte[] ZstdNet.Decompressor::Unwrap(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, int32_t ___1_maxDecompressedSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_src;
		uint64_t L_1;
		L_1 = Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B(L_0, NULL);
		V_0 = L_1;
		uint64_t L_2 = V_0;
		int32_t L_3 = ___1_maxDecompressedSize;
		if ((uint64_t)(L_3) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851_RuntimeMethod_var);
		if ((!(((uint64_t)L_2) > ((uint64_t)((uint64_t)L_3)))))
		{
			goto IL_002f;
		}
	}
	{
		uint64_t L_4 = V_0;
		uint64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_5);
		int32_t L_7 = ___1_maxDecompressedSize;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCEC786CC2F339B80239A034E08939B4CEA9B7B8)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral156307231A898C360E6FADFE3CDE5F7254234BF0)), L_9, NULL);
		ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* L_11 = (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B(L_11, ((int32_t)70), L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851_RuntimeMethod_var)));
	}

IL_002f:
	{
		uint64_t L_12 = V_0;
		if ((!(((uint64_t)L_12) > ((uint64_t)((int64_t)((int32_t)2147483591))))))
		{
			goto IL_005b;
		}
	}
	{
		uint64_t L_13 = V_0;
		uint64_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_14);
		uint64_t L_16 = ((uint64_t)((int64_t)((int32_t)2147483591)));
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral08F6FFC8F4268D6740EE532A66507E785B5C1FCF)), L_15, L_17, NULL);
		ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* L_19 = (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B(L_19, ((int32_t)70), L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851_RuntimeMethod_var)));
	}

IL_005b:
	{
		uint64_t L_20 = V_0;
		if ((uint64_t)(L_20) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_20));
		V_1 = L_21;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_22 = ___0_src;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_24), L_23, /*hidden argument*/Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_RuntimeMethod_var);
		int32_t L_25;
		L_25 = Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B(__this, L_22, L_24, (bool)0, NULL);
		V_2 = L_25;
		uint64_t L_26 = V_0;
		int32_t L_27 = V_2;
		if ((uint64_t)(L_27) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851_RuntimeMethod_var);
		if ((((int64_t)L_26) == ((int64_t)((uint64_t)L_27))))
		{
			goto IL_0083;
		}
	}
	{
		ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* L_28 = (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B(L_28, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C8940A7A27053472EE1D698BFF5EBE3237D0ECF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decompressor_Unwrap_m9F74AFF96BCD04CC341BC413B488FA1BE4926851_RuntimeMethod_var)));
	}

IL_0083:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		return L_29;
	}
}
// System.UInt64 ZstdNet.Decompressor::GetDecompressedSize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Decompressor_GetDecompressedSize_m367EABDA50E58F67A6B35E88A6D21B0D7BF09421 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_1), L_0, /*hidden argument*/ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		uint64_t L_2;
		L_2 = Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B(L_1, NULL);
		return L_2;
	}
}
// System.UInt64 ZstdNet.Decompressor::GetDecompressedSize(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Decompressor_GetDecompressedSize_mA5BBDD9843F1F21F95D92BFE3ED5AD67DA545755 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___0_src;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128(L_0, ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		uint64_t L_2;
		L_2 = Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B(L_1, NULL);
		return L_2;
	}
}
// System.UInt64 ZstdNet.Decompressor::GetDecompressedSize(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t G_B2_0 = 0;
	uint64_t G_B1_0 = 0;
	uint64_t G_B4_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_src;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_src), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((uint64_t)(L_1) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = ExternMethods_ZSTD_getFrameContentSize_m5C49B79F372A4763B66E7F5F59F243378CCE4E3B(L_0, L_2, NULL);
		uint64_t L_4 = L_3;
		G_B1_0 = L_4;
		if ((!(((uint64_t)L_4) == ((uint64_t)((int64_t)(-1))))))
		{
			G_B2_0 = L_4;
			goto IL_0024;
		}
	}
	{
		ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* L_5 = (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B(L_5, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral088C8DA6BCDFFED2F4B22F7DB3FD99C735200741)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B_RuntimeMethod_var)));
	}

IL_0024:
	{
		uint64_t L_6 = G_B2_0;
		G_B3_0 = L_6;
		if ((!(((uint64_t)L_6) == ((uint64_t)((int64_t)((int32_t)-2))))))
		{
			G_B4_0 = L_6;
			goto IL_0036;
		}
	}
	{
		ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* L_7 = (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B(L_7, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC223F734C72988BC84E2B034ABBBD25E7B00EDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B_RuntimeMethod_var)));
	}

IL_0036:
	{
		return G_B4_0;
	}
}
// System.Int32 ZstdNet.Decompressor::Unwrap(System.Byte[],System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decompressor_Unwrap_mBB8B2BF0702AA565B394D7CE3311EBB8943FCC2A (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dst, int32_t ___2_offset, bool ___3_bufferSizePrecheck, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_1), L_0, /*hidden argument*/ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_dst;
		int32_t L_3 = ___2_offset;
		bool L_4 = ___3_bufferSizePrecheck;
		int32_t L_5;
		L_5 = Decompressor_Unwrap_mE8A5ABE3C37FAFD1B70CF98A007EA40DAAB37316(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 ZstdNet.Decompressor::Unwrap(System.ArraySegment`1<System.Byte>,System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decompressor_Unwrap_mA84B020DC222BDA3E17950080BEF4C9B2A41A60A (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_src, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dst, int32_t ___2_offset, bool ___3_bufferSizePrecheck, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = ___0_src;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128(L_0, ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_dst;
		int32_t L_3 = ___2_offset;
		bool L_4 = ___3_bufferSizePrecheck;
		int32_t L_5;
		L_5 = Decompressor_Unwrap_mE8A5ABE3C37FAFD1B70CF98A007EA40DAAB37316(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 ZstdNet.Decompressor::Unwrap(System.ReadOnlySpan`1<System.Byte>,System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decompressor_Unwrap_mE8A5ABE3C37FAFD1B70CF98A007EA40DAAB37316 (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dst, int32_t ___2_offset, bool ___3_bufferSizePrecheck, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decompressor_Unwrap_mE8A5ABE3C37FAFD1B70CF98A007EA40DAAB37316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___2_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_dst;
		NullCheck(L_2);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0015;
		}
	}

IL_000a:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decompressor_Unwrap_mE8A5ABE3C37FAFD1B70CF98A007EA40DAAB37316_RuntimeMethod_var)));
	}

IL_0015:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___0_src;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_dst;
		int32_t L_6 = ___2_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_dst;
		NullCheck(L_7);
		int32_t L_8 = ___2_offset;
		if (((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length)) - (int64_t)L_8 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length)) - (int64_t)L_8 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_mE8A5ABE3C37FAFD1B70CF98A007EA40DAAB37316_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_9), L_5, L_6, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)), /*hidden argument*/Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_RuntimeMethod_var);
		bool L_10 = ___3_bufferSizePrecheck;
		int32_t L_11;
		L_11 = Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B(__this, L_4, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 ZstdNet.Decompressor::Unwrap(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B (Decompressor_t09C3A54378F919DE7D4912BD0CBBC9BFFA7A61AD* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, bool ___2_bufferSizePrecheck, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		bool L_0 = ___2_bufferSizePrecheck;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___0_src;
		uint64_t L_2;
		L_2 = Decompressor_GetDecompressedSize_mAE582CFE23926DCA6C15B14A0D05571D24BFD41B(L_1, NULL);
		int32_t L_3;
		L_3 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_dst), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((uint64_t)(L_3) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B_RuntimeMethod_var);
		if ((!(((uint64_t)L_2) > ((uint64_t)((uint64_t)L_3)))))
		{
			goto IL_0020;
		}
	}
	{
		ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* L_4 = (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B(L_4, ((int32_t)70), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4A303E06C858C222F56C00774C561B711946C52)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B_RuntimeMethod_var)));
	}

IL_0020:
	{
		DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* L_5 = __this->___Options_0;
		NullCheck(L_5);
		intptr_t L_6 = L_5->___Ddict_2;
		intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_8;
		L_8 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_006b;
		}
	}
	{
		intptr_t L_9 = __this->___dctx_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10 = ___1_dst;
		int32_t L_11;
		L_11 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_dst), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((uint64_t)(L_11) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_12;
		L_12 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_11), NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_13 = ___0_src;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_src), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((uint64_t)(L_14) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B_RuntimeMethod_var);
		uintptr_t L_15;
		L_15 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_14), NULL);
		DecompressionOptions_t951BCA7940A05C1D728724548555076EC5228991* L_16 = __this->___Options_0;
		NullCheck(L_16);
		intptr_t L_17 = L_16->___Ddict_2;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_18;
		L_18 = ExternMethods_ZSTD_decompress_usingDDict_m175C6AA228BFEBA3F7760F3F4B78A3FC177938FF(L_9, L_10, L_12, L_13, L_15, L_17, NULL);
		G_B6_0 = L_18;
		goto IL_0092;
	}

IL_006b:
	{
		intptr_t L_19 = __this->___dctx_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_20 = ___1_dst;
		int32_t L_21;
		L_21 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_dst), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((uint64_t)(L_21) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_22;
		L_22 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_21), NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_23 = ___0_src;
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_src), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((uint64_t)(L_24) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B_RuntimeMethod_var);
		uintptr_t L_25;
		L_25 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_24), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_26;
		L_26 = ExternMethods_ZSTD_decompressDCtx_mF51D91D9FCAE28E7F148D274A3C6DAC53727F419(L_19, L_20, L_22, L_23, L_25, NULL);
		G_B6_0 = L_26;
	}

IL_0092:
	{
		uintptr_t L_27;
		L_27 = ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753(G_B6_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_28;
		L_28 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_27, NULL);
		if ((uint64_t)(L_28) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Decompressor_Unwrap_mBE2698620721B7FA537D364EC13F0D02F380FF6B_RuntimeMethod_var);
		return ((int32_t)L_28);
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
// System.Byte[] ZstdNet.DictBuilder::TrainFromBuffer(System.Collections.Generic.IEnumerable`1<System.Byte[]>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DictBuilder_TrainFromBuffer_m3C69DEA01DBDCAA18AA52E7B11C22C5A46D9C71C (RuntimeObject* ___0_samples, int32_t ___1_dictCapacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictBuilder_TrainFromBuffer_m3C69DEA01DBDCAA18AA52E7B11C22C5A46D9C71C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisUIntPtr_t_mBCF1114CB7019CD3A796788A67F0934E0D54EFE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisUIntPtr_t_m32081932BE15517B6B769AD1C59D0F3525E1F123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CTrainFromBufferU3Eb__0_m2FA00880A544726AC629758DB36B6B5F3C34FF9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9* V_0 = NULL;
	UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9* L_0 = (U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m7D85C8BA9B993EF8439BC35EC5DC8085C7C75FC1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9* L_1 = V_0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_2, NULL);
		NullCheck(L_1);
		L_1->___ms_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___ms_0), (void*)L_2);
		RuntimeObject* L_3 = ___0_samples;
		U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9* L_4 = V_0;
		Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D* L_5 = (Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D*)il2cpp_codegen_object_new(Func_2_tFFCA46F64BDA02FD91FB8F3ABBC734504956064D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m66DCC6967DCF1BE960F17E4DF766AA134F6B37F5(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CTrainFromBufferU3Eb__0_m2FA00880A544726AC629758DB36B6B5F3C34FF9A_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisUIntPtr_t_mBCF1114CB7019CD3A796788A67F0934E0D54EFE6(L_3, L_5, Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisUIntPtr_t_mBCF1114CB7019CD3A796788A67F0934E0D54EFE6_RuntimeMethod_var);
		UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B* L_7;
		L_7 = Enumerable_ToArray_TisUIntPtr_t_m32081932BE15517B6B769AD1C59D0F3525E1F123(L_6, Enumerable_ToArray_TisUIntPtr_t_m32081932BE15517B6B769AD1C59D0F3525E1F123_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = ___1_dictCapacity;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		int32_t L_11 = ___1_dictCapacity;
		if ((uint64_t)(L_11) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DictBuilder_TrainFromBuffer_m3C69DEA01DBDCAA18AA52E7B11C22C5A46D9C71C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_12;
		L_12 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)L_11), NULL);
		U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9* L_13 = V_0;
		NullCheck(L_13);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = L_13->___ms_0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(40 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_14);
		UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B* L_16 = V_1;
		UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B* L_17 = V_1;
		NullCheck(L_17);
		if ((int64_t)(((int32_t)(((RuntimeArray*)L_17)->max_length))) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DictBuilder_TrainFromBuffer_m3C69DEA01DBDCAA18AA52E7B11C22C5A46D9C71C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_18;
		L_18 = ExternMethods_ZDICT_trainFromBuffer_mB7BE7166375BC191166E872C6EB7D967E2FD274E(L_10, L_12, L_15, L_16, ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))), NULL);
		uintptr_t L_19;
		L_19 = ReturnValueExtensions_EnsureZdictSuccess_mE9F480D60F47E59AE4BFB3372141A00FF7D77FFC(L_18, NULL);
		uint32_t L_20;
		L_20 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_19, NULL);
		if ((uint64_t)(L_20) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), DictBuilder_TrainFromBuffer_m3C69DEA01DBDCAA18AA52E7B11C22C5A46D9C71C_RuntimeMethod_var);
		V_3 = ((int32_t)L_20);
		int32_t L_21 = ___1_dictCapacity;
		int32_t L_22 = V_3;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_23 = V_3;
		Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297((&V_2), L_23, Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
	}

IL_0065:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		return L_24;
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
// System.Void ZstdNet.DictBuilder/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m7D85C8BA9B993EF8439BC35EC5DC8085C7C75FC1 (U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.UIntPtr ZstdNet.DictBuilder/<>c__DisplayClass0_0::<TrainFromBuffer>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass0_0_U3CTrainFromBufferU3Eb__0_m2FA00880A544726AC629758DB36B6B5F3C34FF9A (U3CU3Ec__DisplayClass0_0_tC52A5804C53EB37DE3D9DA8EBE047AC62F05CCE9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sample, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CTrainFromBufferU3Eb__0_m2FA00880A544726AC629758DB36B6B5F3C34FF9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___ms_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_sample;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_sample;
		NullCheck(L_2);
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_sample;
		NullCheck(L_3);
		if ((uint64_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CU3Ec__DisplayClass0_0_U3CTrainFromBufferU3Eb__0_m2FA00880A544726AC629758DB36B6B5F3C34FF9A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((uint64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), NULL);
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
// System.Void ZstdNet.ExternMethods::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternMethods__cctor_m058CB8AACDB3B30C36552D38B2210993D003895E (const RuntimeMethod* method) 
{
	{
		OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* L_0;
		L_0 = Environment_get_OSVersion_mDDD265F5864A2086664CAE56D7C4B59E9A50AF66(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0012;
		}
	}
	{
		ExternMethods_SetWinDllDirectory_m035A7D4FF93381B610DF1E0B3B9F4028A4F017A2(NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void ZstdNet.ExternMethods::SetWinDllDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternMethods_SetWinDllDirectory_m035A7D4FF93381B610DF1E0B3B9F4028A4F017A2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_SetWinDllDirectory_m035A7D4FF93381B610DF1E0B3B9F4028A4F017A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4908BF0936B537B6A39A4EACD2BD389033325122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0BFE0A3ACC45D2335A960B7191B3ADDB281E867);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC013887C8B6B15B742E95F9F144765E8796BFD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2963CE7572F195587FDD579A9A1549483B36F56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE143A979BB29938A5D87FE8F214D8722415A670F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFFD59D91C40FC6E847188B2E6C9BF214CD91B52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF50DE9F1418B7B95141C23A957CBB076897E3866);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B10_0 = NULL;
	{
		Assembly_t* L_0;
		L_0 = il2cpp_codegen_get_executing_assembly(ExternMethods_SetWinDllDirectory_m035A7D4FF93381B610DF1E0B3B9F4028A4F017A2_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Reflection.Assembly::get_Location() */, L_0);
		V_1 = L_1;
		String_t* L_2 = V_1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_4, NULL);
		String_t* L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		Trace_TraceWarning_m4B0E57E725592BB64BF597B62955034911165917(_stringLiteralC013887C8B6B15B742E95F9F144765E8796BFD94, NULL);
		return;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_8, _stringLiteralE143A979BB29938A5D87FE8F214D8722415A670F, 4, NULL);
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_10, NULL);
		String_t* L_12;
		L_12 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral822BBE2B166571D1198C9A5A09A2130F908AA3E7, NULL);
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_14, _stringLiteralEFFD59D91C40FC6E847188B2E6C9BF214CD91B52, NULL);
		bool L_16;
		L_16 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_17, _stringLiteralC2963CE7572F195587FDD579A9A1549483B36F56, NULL);
		V_0 = L_18;
	}

IL_0070:
	{
		bool L_19;
		L_19 = Environment_get_Is64BitProcess_mF33E8476A91E765170A91B146EC1337C6779F6A1(NULL);
		if (L_19)
		{
			goto IL_007e;
		}
	}
	{
		G_B10_0 = _stringLiteral4908BF0936B537B6A39A4EACD2BD389033325122;
		goto IL_0083;
	}

IL_007e:
	{
		G_B10_0 = _stringLiteralF50DE9F1418B7B95141C23A957CBB076897E3866;
	}

IL_0083:
	{
		V_2 = G_B10_0;
		String_t* L_20 = V_0;
		String_t* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_20, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = ExternMethods_SetDllDirectory_m27AD0CE472270885CEFDF6473AA13607A1AC66D3(L_22, NULL);
		if (L_23)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_24 = V_0;
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA0BFE0A3ACC45D2335A960B7191B3ADDB281E867, L_24, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		Trace_TraceWarning_m4B0E57E725592BB64BF597B62955034911165917(L_25, NULL);
	}

IL_00a7:
	{
		return;
	}
}
// System.Boolean ZstdNet.ExternMethods::SetDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExternMethods_SetDllDirectory_m27AD0CE472270885CEFDF6473AA13607A1AC66D3 (String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "SetDllDirectory", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_path' to native representation
	Il2CppChar* ____0_path_marshaled = NULL;
	if (___0_path != NULL)
	{
		____0_path_marshaled = &___0_path->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDllDirectory)(____0_path_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_path_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.UIntPtr ZstdNet.ExternMethods::ZDICT_trainFromBuffer(System.Byte[],System.UIntPtr,System.Byte[],System.UIntPtr[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZDICT_trainFromBuffer_mB7BE7166375BC191166E872C6EB7D967E2FD274E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dictBuffer, uintptr_t ___1_dictBufferCapacity, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_samplesBuffer, UIntPtrU5BU5D_t15A4B40497127A09C3480D16902477858FE09F2B* ___3_samplesSizes, uint32_t ___4_nbSamples, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (uint8_t*, uintptr_t, uint8_t*, uintptr_t*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uintptr_t) + sizeof(void*) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZDICT_trainFromBuffer", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_dictBuffer' to native representation
	uint8_t* ____0_dictBuffer_marshaled = NULL;
	if (___0_dictBuffer != NULL)
	{
		____0_dictBuffer_marshaled = reinterpret_cast<uint8_t*>((___0_dictBuffer)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___2_samplesBuffer' to native representation
	uint8_t* ____2_samplesBuffer_marshaled = NULL;
	if (___2_samplesBuffer != NULL)
	{
		____2_samplesBuffer_marshaled = reinterpret_cast<uint8_t*>((___2_samplesBuffer)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___3_samplesSizes' to native representation
	uintptr_t* ____3_samplesSizes_marshaled = NULL;
	if (___3_samplesSizes != NULL)
	{
		____3_samplesSizes_marshaled = reinterpret_cast<uintptr_t*>((___3_samplesSizes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZDICT_trainFromBuffer)(____0_dictBuffer_marshaled, ___1_dictBufferCapacity, ____2_samplesBuffer_marshaled, ____3_samplesSizes_marshaled, ___4_nbSamples);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_dictBuffer_marshaled, ___1_dictBufferCapacity, ____2_samplesBuffer_marshaled, ____3_samplesSizes_marshaled, ___4_nbSamples);
	#endif

	return returnValue;
}
// System.UInt32 ZstdNet.ExternMethods::ZDICT_isError(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ExternMethods_ZDICT_isError_m6C73BCCA283B917823BFFE585C3D7EEF3B406DB8 (uintptr_t ___0_code, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZDICT_isError", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ZDICT_isError)(___0_code);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_code);
	#endif

	return returnValue;
}
// System.IntPtr ZstdNet.ExternMethods::ZDICT_getErrorName(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZDICT_getErrorName_m0D63017CB2F753C997580D2A97AEC14636CF10CD (uintptr_t ___0_code, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZDICT_getErrorName", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZDICT_getErrorName)(___0_code);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_code);
	#endif

	return returnValue;
}
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createCCtx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createCCtx_m5A95330FED8F3C05FD3546E69A6630ED5DB4AEB5 (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_createCCtx", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_createCCtx)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeCCtx(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeCCtx_m4EFC904EE7EB8A4B38B40B58D7D6AD0F2DE92871 (intptr_t ___0_cctx, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_freeCCtx", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_freeCCtx)(___0_cctx);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_cctx);
	#endif

	return returnValue;
}
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createDCtx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createDCtx_m2F3E673AB71C1FA6B693C4B003262A0B1EFCC8C4 (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_createDCtx", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_createDCtx)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeDCtx(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeDCtx_m681DDC4A2C0F84900583A0E09C9E32240ECCF36E (intptr_t ___0_cctx, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_freeDCtx", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_freeDCtx)(___0_cctx);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_cctx);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressCCtx(System.IntPtr,System.IntPtr,System.UIntPtr,System.IntPtr,System.UIntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressCCtx_m8C27DEE1DD916EBDEA0EC4773B343D67971678DA (intptr_t ___0_ctx, intptr_t ___1_dst, uintptr_t ___2_dstCapacity, intptr_t ___3_src, uintptr_t ___4_srcSize, int32_t ___5_compressionLevel, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, uintptr_t, intptr_t, uintptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uintptr_t) + sizeof(intptr_t) + sizeof(uintptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_compressCCtx", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_compressCCtx)(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_compressionLevel);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_compressionLevel);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressCCtx(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressCCtx_m7BB567FB0A1D14DD06EB8E4345E7ED3A39C40468 (intptr_t ___0_ctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, int32_t ___5_compressionLevel, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uintptr_t, uint8_t*, uintptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_compressCCtx", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_compressCCtx)(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_compressionLevel);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_compressionLevel);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressCCtx(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressCCtx_m941DEF05EE817575E80C2F669A9EED8F33C2507F (intptr_t ___0_ctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, int32_t ___5_compressionLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_ctx;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___1_dst;
		uint8_t* L_2;
		L_2 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_1, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		uintptr_t L_3 = ___2_dstCapacity;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___3_src;
		uint8_t* L_5;
		L_5 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_4, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uintptr_t L_6 = ___4_srcSize;
		int32_t L_7 = ___5_compressionLevel;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = ExternMethods_ZSTD_compressCCtx_m7BB567FB0A1D14DD06EB8E4345E7ED3A39C40468(L_0, L_2, L_3, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompressDCtx(System.IntPtr,System.IntPtr,System.UIntPtr,System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompressDCtx_mCC1FAD9020D264D9725632167EFD42587BF9C0D2 (intptr_t ___0_ctx, intptr_t ___1_dst, uintptr_t ___2_dstCapacity, intptr_t ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, uintptr_t, intptr_t, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uintptr_t) + sizeof(intptr_t) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_decompressDCtx", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_decompressDCtx)(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompressDCtx(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompressDCtx_m6E854505AF22970714EED248768AE3547A11C5B7 (intptr_t ___0_ctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uintptr_t, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_decompressDCtx", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_decompressDCtx)(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompressDCtx(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompressDCtx_mF51D91D9FCAE28E7F148D274A3C6DAC53727F419 (intptr_t ___0_ctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_ctx;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___1_dst;
		uint8_t* L_2;
		L_2 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_1, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		uintptr_t L_3 = ___2_dstCapacity;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___3_src;
		uint8_t* L_5;
		L_5 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_4, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uintptr_t L_6 = ___4_srcSize;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_7;
		L_7 = ExternMethods_ZSTD_decompressDCtx_m6E854505AF22970714EED248768AE3547A11C5B7(L_0, L_2, L_3, L_5, L_6, NULL);
		return L_7;
	}
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compress2(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compress2_m5792AE70BB00377DE0A5CD0A46F30E5E5F836E79 (intptr_t ___0_ctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uintptr_t, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_compress2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_compress2)(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_ctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compress2(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compress2_m78BAB680E20DFCC58BD1EFE1F23E6753DADEDA8C (intptr_t ___0_ctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_ctx;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___1_dst;
		uint8_t* L_2;
		L_2 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_1, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		uintptr_t L_3 = ___2_dstCapacity;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___3_src;
		uint8_t* L_5;
		L_5 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_4, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uintptr_t L_6 = ___4_srcSize;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_7;
		L_7 = ExternMethods_ZSTD_compress2_m5792AE70BB00377DE0A5CD0A46F30E5E5F836E79(L_0, L_2, L_3, L_5, L_6, NULL);
		return L_7;
	}
}
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createCDict(System.Byte[],System.UIntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createCDict_mC908994AC4B65B69960A48302BBCB2A63168A06D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, uintptr_t ___1_dictSize, int32_t ___2_compressionLevel, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uint8_t*, uintptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uintptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_createCDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_dict' to native representation
	uint8_t* ____0_dict_marshaled = NULL;
	if (___0_dict != NULL)
	{
		____0_dict_marshaled = reinterpret_cast<uint8_t*>((___0_dict)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_createCDict)(____0_dict_marshaled, ___1_dictSize, ___2_compressionLevel);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_dict_marshaled, ___1_dictSize, ___2_compressionLevel);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeCDict(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeCDict_m30F438FF19F84DBED555CDE04C099B0BC369B9AC (intptr_t ___0_cdict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_freeCDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_freeCDict)(___0_cdict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_cdict);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compress_usingCDict(System.IntPtr,System.IntPtr,System.UIntPtr,System.IntPtr,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compress_usingCDict_m1D115351AC409054AD3445350CC2B64098955320 (intptr_t ___0_cctx, intptr_t ___1_dst, uintptr_t ___2_dstCapacity, intptr_t ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_cdict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, uintptr_t, intptr_t, uintptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uintptr_t) + sizeof(intptr_t) + sizeof(uintptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_compress_usingCDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_compress_usingCDict)(___0_cctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_cdict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_cctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_cdict);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compress_usingCDict(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compress_usingCDict_m374406AFBCE3F4A199148928C923E2DC3D68E863 (intptr_t ___0_cctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_cdict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uintptr_t, uint8_t*, uintptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_compress_usingCDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_compress_usingCDict)(___0_cctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_cdict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_cctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_cdict);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compress_usingCDict(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compress_usingCDict_m821C6C238A52DA71F56ED50689BAC608C15E1C3E (intptr_t ___0_cctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_cdict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_cctx;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___1_dst;
		uint8_t* L_2;
		L_2 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_1, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		uintptr_t L_3 = ___2_dstCapacity;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___3_src;
		uint8_t* L_5;
		L_5 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_4, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uintptr_t L_6 = ___4_srcSize;
		intptr_t L_7 = ___5_cdict;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = ExternMethods_ZSTD_compress_usingCDict_m374406AFBCE3F4A199148928C923E2DC3D68E863(L_0, L_2, L_3, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createDDict(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createDDict_mAB80E29DAE49AC56900FE3F59B5B5407A9D5BB0A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dict, uintptr_t ___1_dictSize, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_createDDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_dict' to native representation
	uint8_t* ____0_dict_marshaled = NULL;
	if (___0_dict != NULL)
	{
		____0_dict_marshaled = reinterpret_cast<uint8_t*>((___0_dict)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_createDDict)(____0_dict_marshaled, ___1_dictSize);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_dict_marshaled, ___1_dictSize);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeDDict(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeDDict_mF6643D51ACB022DC3F6D83A9D9048C4FF9046A79 (intptr_t ___0_ddict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_freeDDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_freeDDict)(___0_ddict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_ddict);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompress_usingDDict(System.IntPtr,System.IntPtr,System.UIntPtr,System.IntPtr,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompress_usingDDict_mB6EB5948259D817556A346B3F59CA5B5DDD6088D (intptr_t ___0_dctx, intptr_t ___1_dst, uintptr_t ___2_dstCapacity, intptr_t ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_ddict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, uintptr_t, intptr_t, uintptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uintptr_t) + sizeof(intptr_t) + sizeof(uintptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_decompress_usingDDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_decompress_usingDDict)(___0_dctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_ddict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_dctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_ddict);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompress_usingDDict(System.IntPtr,System.Byte&,System.UIntPtr,System.Byte&,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompress_usingDDict_m8463F8AAA85610CB3EAC162993367C9DB14D660E (intptr_t ___0_dctx, uint8_t* ___1_dst, uintptr_t ___2_dstCapacity, uint8_t* ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_ddict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uintptr_t, uint8_t*, uintptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_decompress_usingDDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_decompress_usingDDict)(___0_dctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_ddict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_dctx, ___1_dst, ___2_dstCapacity, ___3_src, ___4_srcSize, ___5_ddict);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompress_usingDDict(System.IntPtr,System.Span`1<System.Byte>,System.UIntPtr,System.ReadOnlySpan`1<System.Byte>,System.UIntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompress_usingDDict_m175C6AA228BFEBA3F7760F3F4B78A3FC177938FF (intptr_t ___0_dctx, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_dst, uintptr_t ___2_dstCapacity, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___3_src, uintptr_t ___4_srcSize, intptr_t ___5_ddict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_dctx;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___1_dst;
		uint8_t* L_2;
		L_2 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_1, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		uintptr_t L_3 = ___2_dstCapacity;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___3_src;
		uint8_t* L_5;
		L_5 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_4, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uintptr_t L_6 = ___4_srcSize;
		intptr_t L_7 = ___5_ddict;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = ExternMethods_ZSTD_decompress_usingDDict_m8463F8AAA85610CB3EAC162993367C9DB14D660E(L_0, L_2, L_3, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.UInt64 ZstdNet.ExternMethods::ZSTD_getDecompressedSize(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ExternMethods_ZSTD_getDecompressedSize_mD290B66F7B7881EB6DAEEE5AD92333C5F9321C9E (intptr_t ___0_src, uintptr_t ___1_srcSize, const RuntimeMethod* method) 
{
	typedef uint64_t (CDECL *PInvokeFunc) (intptr_t, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_getDecompressedSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_getDecompressedSize)(___0_src, ___1_srcSize);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___0_src, ___1_srcSize);
	#endif

	return returnValue;
}
// System.UInt64 ZstdNet.ExternMethods::ZSTD_getFrameContentSize(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ExternMethods_ZSTD_getFrameContentSize_mDCA1BFAFDE97497E0DFE8050DA100BE817866AC2 (intptr_t ___0_src, uintptr_t ___1_srcSize, const RuntimeMethod* method) 
{
	typedef uint64_t (CDECL *PInvokeFunc) (intptr_t, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_getFrameContentSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_getFrameContentSize)(___0_src, ___1_srcSize);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___0_src, ___1_srcSize);
	#endif

	return returnValue;
}
// System.UInt64 ZstdNet.ExternMethods::ZSTD_getFrameContentSize(System.Byte&,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ExternMethods_ZSTD_getFrameContentSize_mC9FFFD3C1E75D330429360D2B912BB92F6A48F05 (uint8_t* ___0_src, uintptr_t ___1_srcSize, const RuntimeMethod* method) 
{
	typedef uint64_t (CDECL *PInvokeFunc) (uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_getFrameContentSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_getFrameContentSize)(___0_src, ___1_srcSize);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___0_src, ___1_srcSize);
	#endif

	return returnValue;
}
// System.UInt64 ZstdNet.ExternMethods::ZSTD_getFrameContentSize(System.ReadOnlySpan`1<System.Byte>,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ExternMethods_ZSTD_getFrameContentSize_m5C49B79F372A4763B66E7F5F59F243378CCE4E3B (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_src, uintptr_t ___1_srcSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_src;
		uint8_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_0, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uintptr_t L_2 = ___1_srcSize;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = ExternMethods_ZSTD_getFrameContentSize_mC9FFFD3C1E75D330429360D2B912BB92F6A48F05(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 ZstdNet.ExternMethods::ZSTD_maxCLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternMethods_ZSTD_maxCLevel_m84B2D06121625BBA486A82C4C91F785904D6EC50 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_maxCLevel", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_maxCLevel)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 ZstdNet.ExternMethods::ZSTD_minCLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternMethods_ZSTD_minCLevel_m741086F1CFB8169E56FD63D22191AA51125D4F2B (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_minCLevel", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_minCLevel)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressBound(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressBound_m46E7BA07D5F9BB265DFD9B3E618E722A73E87E7C (uintptr_t ___0_srcSize, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_compressBound", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_compressBound)(___0_srcSize);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_srcSize);
	#endif

	return returnValue;
}
// System.UInt32 ZstdNet.ExternMethods::ZSTD_isError(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ExternMethods_ZSTD_isError_m1F227FB4F17F9E8513721F2993CAE500142A35C4 (uintptr_t ___0_code, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_isError", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_isError)(___0_code);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_code);
	#endif

	return returnValue;
}
// System.IntPtr ZstdNet.ExternMethods::ZSTD_getErrorName(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_getErrorName_mA34C33FECCB317815A4EA15B834F27D1F83DC353 (uintptr_t ___0_code, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_getErrorName", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_getErrorName)(___0_code);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_code);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_CCtx_reset(System.IntPtr,ZstdNet.ExternMethods/ZSTD_ResetDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_CCtx_reset_mF7BE4AD4CF399DE3A83E0044097AC0CFB6116FFD (intptr_t ___0_cctx, int32_t ___1_reset, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_CCtx_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_CCtx_reset)(___0_cctx, ___1_reset);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_cctx, ___1_reset);
	#endif

	return returnValue;
}
// ZstdNet.ExternMethods/ZSTD_bounds ZstdNet.ExternMethods::ZSTD_cParam_getBounds(ZstdNet.ZSTD_cParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B ExternMethods_ZSTD_cParam_getBounds_m19919227B60DECFA68BF50317A8DAE91CA192FB2 (int32_t ___0_cParam, const RuntimeMethod* method) 
{
	typedef ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_cParam_getBounds", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_cParam_getBounds)(___0_cParam);
	#else
	ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B returnValue = il2cppPInvokeFunc(___0_cParam);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_CCtx_setParameter(System.IntPtr,ZstdNet.ZSTD_cParameter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_CCtx_setParameter_m8B7B803BCA7ADEEECCA73BE467D66A3933F74FF7 (intptr_t ___0_cctx, int32_t ___1_param, int32_t ___2_value, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_CCtx_setParameter", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_CCtx_setParameter)(___0_cctx, ___1_param, ___2_value);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_cctx, ___1_param, ___2_value);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_DCtx_reset(System.IntPtr,ZstdNet.ExternMethods/ZSTD_ResetDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_DCtx_reset_mF3B03CE3C1DD7194668BBF9DD338BE5EB0A8BB95 (intptr_t ___0_dctx, int32_t ___1_reset, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_DCtx_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_DCtx_reset)(___0_dctx, ___1_reset);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_dctx, ___1_reset);
	#endif

	return returnValue;
}
// ZstdNet.ExternMethods/ZSTD_bounds ZstdNet.ExternMethods::ZSTD_dParam_getBounds(ZstdNet.ZSTD_dParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B ExternMethods_ZSTD_dParam_getBounds_mD0F88487DBFBBA0BA11555A3188AB7A9589FB8F6 (int32_t ___0_dParam, const RuntimeMethod* method) 
{
	typedef ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_dParam_getBounds", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_dParam_getBounds)(___0_dParam);
	#else
	ZSTD_bounds_t62E8830612EAF5BC51C0B6328AB16B5B35231C1B returnValue = il2cppPInvokeFunc(___0_dParam);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_DCtx_setParameter(System.IntPtr,ZstdNet.ZSTD_dParameter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_DCtx_setParameter_mB40280F7A1EE4300840C42A8060E7D724CEB8CFF (intptr_t ___0_dctx, int32_t ___1_param, int32_t ___2_value, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_DCtx_setParameter", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_DCtx_setParameter)(___0_dctx, ___1_param, ___2_value);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_dctx, ___1_param, ___2_value);
	#endif

	return returnValue;
}
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createCStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createCStream_mEE27A3D70D4A6778D212A2E36730986C03A16B95 (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_createCStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_createCStream)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeCStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeCStream_m3518BACCEB3032630577AE9CCCE46AFDA7FB858F (intptr_t ___0_zcs, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_freeCStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_freeCStream)(___0_zcs);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zcs);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_initCStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_initCStream_m6504CDA82A4546FCC05DB15842E671C9E0B4EE15 (intptr_t ___0_zcs, int32_t ___1_compressionLevel, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_initCStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_initCStream)(___0_zcs, ___1_compressionLevel);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zcs, ___1_compressionLevel);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressStream(System.IntPtr,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_Buffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressStream_m8D3610D0624A32DB3C6628249D404E179E05C9D0 (intptr_t ___0_zcs, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___2_input, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*) + sizeof(ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_compressStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_compressStream)(___0_zcs, ___1_output, ___2_input);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zcs, ___1_output, ___2_input);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_flushStream(System.IntPtr,ZstdNet.ExternMethods/ZSTD_Buffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_flushStream_mC394FAE6A049A71C73210958E4441F5562644AAB (intptr_t ___0_zcs, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_flushStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_flushStream)(___0_zcs, ___1_output);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zcs, ___1_output);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_endStream(System.IntPtr,ZstdNet.ExternMethods/ZSTD_Buffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_endStream_m4BB2E3B91DC8E0CC4F91933F8825C70728A58B58 (intptr_t ___0_zcs, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_endStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_endStream)(___0_zcs, ___1_output);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zcs, ___1_output);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_CStreamInSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_CStreamInSize_m0D971183526966B422C3843CFE12BF8EC45F90C8 (const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_CStreamInSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_CStreamInSize)();
	#else
	uintptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_CStreamOutSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_CStreamOutSize_mD57F8F1060D4EE54CB4AB92C49DBB03AA4ED60D7 (const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_CStreamOutSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_CStreamOutSize)();
	#else
	uintptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr ZstdNet.ExternMethods::ZSTD_createDStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ExternMethods_ZSTD_createDStream_m3D00942A63B68275D428EBAA8D046B184AEF6D66 (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_createDStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_createDStream)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_freeDStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_freeDStream_m5EACEE3A9C5A284B22F898CC662B80054E148A2F (intptr_t ___0_zds, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_freeDStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_freeDStream)(___0_zds);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zds);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_initDStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_initDStream_m74A20DA7D8774D7813C4ADE1710B111C05773947 (intptr_t ___0_zds, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_initDStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_initDStream)(___0_zds);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zds);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_decompressStream(System.IntPtr,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_Buffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_decompressStream_mCEC64E14BE7D6758DC941678ED7F4A8DE65EBC2C (intptr_t ___0_zds, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___2_input, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*) + sizeof(ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_decompressStream", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_decompressStream)(___0_zds, ___1_output, ___2_input);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zds, ___1_output, ___2_input);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_DStreamInSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_DStreamInSize_mE88B4638B00E36339111FBECC32B2FF9A84D1E38 (const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_DStreamInSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_DStreamInSize)();
	#else
	uintptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_DStreamOutSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_DStreamOutSize_m80191623AC0CC9E44AA7BC26F7E02A0F111A1A71 (const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_DStreamOutSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_DStreamOutSize)();
	#else
	uintptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_compressStream2(System.IntPtr,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_Buffer&,ZstdNet.ExternMethods/ZSTD_EndDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_compressStream2_m7EA04B2E06900307B6DD641B9F2EBDCF3E897CA0 (intptr_t ___0_zcs, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___1_output, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* ___2_input, int32_t ___3_endOp, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*, ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*) + sizeof(ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_compressStream2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_compressStream2)(___0_zcs, ___1_output, ___2_input, ___3_endOp);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zcs, ___1_output, ___2_input, ___3_endOp);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_initDStream_usingDDict(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_initDStream_usingDDict_m8E3ABD49446904DAAA5717B149003D725285B2A8 (intptr_t ___0_zds, intptr_t ___1_dict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_initDStream_usingDDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_initDStream_usingDDict)(___0_zds, ___1_dict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zds, ___1_dict);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_initCStream_usingCDict(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_initCStream_usingCDict_m6BE4DEDFC3C9FB243C4C96B85599E07C88D548F7 (intptr_t ___0_zds, intptr_t ___1_dict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_initCStream_usingCDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_initCStream_usingCDict)(___0_zds, ___1_dict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_zds, ___1_dict);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_CCtx_refCDict(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_CCtx_refCDict_m16EBAFE1B53B89495B73D0D2C8E561E802075159 (intptr_t ___0_cctx, intptr_t ___1_cdict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_CCtx_refCDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_CCtx_refCDict)(___0_cctx, ___1_cdict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_cctx, ___1_cdict);
	#endif

	return returnValue;
}
// System.UIntPtr ZstdNet.ExternMethods::ZSTD_DCtx_refDDict(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ExternMethods_ZSTD_DCtx_refDDict_m1E2B18CA8D56323DAAC27D44534A180DE0E6A25D (intptr_t ___0_cctx, intptr_t ___1_cdict, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libzstd_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libzstd"), "ZSTD_DCtx_refDDict", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libzstd_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(ZSTD_DCtx_refDDict)(___0_cctx, ___1_cdict);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(___0_cctx, ___1_cdict);
	#endif

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZstdNet.ExternMethods/ZSTD_Buffer::.ctor(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29 (ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* __this, uintptr_t ___0_pos, uintptr_t ___1_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___buffer_0 = L_0;
		uintptr_t L_1 = ___1_size;
		__this->___size_1 = L_1;
		uintptr_t L_2 = ___0_pos;
		__this->___pos_2 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29_AdjustorThunk (RuntimeObject* __this, uintptr_t ___0_pos, uintptr_t ___1_size, const RuntimeMethod* method)
{
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*>(__this + _offset);
	ZSTD_Buffer__ctor_mEBEFF0DBB17142D496BBA86DB75BA8DDCB9D2D29(_thisAdjusted, ___0_pos, ___1_size, method);
}
// System.Boolean ZstdNet.ExternMethods/ZSTD_Buffer::get_IsFullyConsumed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25 (ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0 = __this->___size_1;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_0, NULL);
		uintptr_t L_2 = __this->___pos_2;
		uint64_t L_3;
		L_3 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_2, NULL);
		return (bool)((((int32_t)((!(((uint64_t)L_1) <= ((uint64_t)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZSTD_Buffer_tDBAF1F18933FD85AF3F44E3C00BE504848AE1305*>(__this + _offset);
	bool _returnValue;
	_returnValue = ZSTD_Buffer_get_IsFullyConsumed_m67D05BDC9F27894EAA4C5D65E7EDED62B9E73C25(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UIntPtr ZstdNet.ReturnValueExtensions::EnsureZdictSuccess(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ReturnValueExtensions_EnsureZdictSuccess_mE9F480D60F47E59AE4BFB3372141A00FF7D77FFC (uintptr_t ___0_returnValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0 = ___0_returnValue;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = ExternMethods_ZDICT_isError_m6C73BCCA283B917823BFFE585C3D7EEF3B406DB8(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		uintptr_t L_2 = ___0_returnValue;
		uintptr_t L_3 = ___0_returnValue;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = ExternMethods_ZDICT_getErrorName_m0D63017CB2F753C997580D2A97AEC14636CF10CD(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_4, NULL);
		ReturnValueExtensions_ThrowException_m9B62174B6D289D4F7BB4D5A73D8E02A5F17342CE(L_2, L_5, NULL);
	}

IL_0019:
	{
		uintptr_t L_6 = ___0_returnValue;
		return L_6;
	}
}
// System.UIntPtr ZstdNet.ReturnValueExtensions::EnsureZstdSuccess(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ReturnValueExtensions_EnsureZstdSuccess_m5A04698AD4D2FADAA62CFD3E645AF4FD4E1AE753 (uintptr_t ___0_returnValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0 = ___0_returnValue;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = ExternMethods_ZSTD_isError_m1F227FB4F17F9E8513721F2993CAE500142A35C4(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		uintptr_t L_2 = ___0_returnValue;
		uintptr_t L_3 = ___0_returnValue;
		il2cpp_codegen_runtime_class_init_inline(ExternMethods_t0638D7425715B821B5432DFF060EB44B117287DF_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = ExternMethods_ZSTD_getErrorName_mA34C33FECCB317815A4EA15B834F27D1F83DC353(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_4, NULL);
		ReturnValueExtensions_ThrowException_m9B62174B6D289D4F7BB4D5A73D8E02A5F17342CE(L_2, L_5, NULL);
	}

IL_0019:
	{
		uintptr_t L_6 = ___0_returnValue;
		return L_6;
	}
}
// System.Void ZstdNet.ReturnValueExtensions::ThrowException(System.UIntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnValueExtensions_ThrowException_m9B62174B6D289D4F7BB4D5A73D8E02A5F17342CE (uintptr_t ___0_returnValue, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		uintptr_t L_0 = ___0_returnValue;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var)));
		uint64_t L_1;
		L_1 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_0, NULL);
		String_t* L_2 = ___1_message;
		ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* L_3 = (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B(L_3, ((int32_t)il2cpp_codegen_subtract(0, ((int32_t)(uint32_t)L_1))), L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReturnValueExtensions_ThrowException_m9B62174B6D289D4F7BB4D5A73D8E02A5F17342CE_RuntimeMethod_var)));
	}
}
// System.IntPtr ZstdNet.ReturnValueExtensions::EnsureZstdSuccess(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E (intptr_t ___0_returnValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_returnValue;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* L_3 = (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B(L_3, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD69498C3805EDCB3D4A5DBBDC06CB4C696F53665)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReturnValueExtensions_EnsureZstdSuccess_mED914B66437E97074B75784DA6D68E19AF319C4E_RuntimeMethod_var)));
	}

IL_0019:
	{
		intptr_t L_4 = ___0_returnValue;
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
// System.Void ZstdNet.ZstdException::.ctor(ZstdNet.ZSTD_ErrorCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZstdException__ctor_m7EB1EE77E57BF6241DCB51FA7C3BD6BBD399EF9B (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* __this, int32_t ___0_code, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		int32_t L_1 = ___0_code;
		__this->___U3CCodeU3Ek__BackingField_18 = L_1;
		return;
	}
}
// ZstdNet.ZSTD_ErrorCode ZstdNet.ZstdException::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZstdException_get_Code_m0F8B2C8339D1616D8B74094B53DB8A99D88AF785 (ZstdException_tA51B606E7154E4F1B31EB9C33CAA9B03B015CB0C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_18;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* CompressionOptions_get_Default_mE9E83387C06301955904FB3773766FBB9C08E99F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var);
		CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F* L_0 = ((CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_StaticFields*)il2cpp_codegen_static_fields_for(CompressionOptions_t6BC1F907855EC0D1E1AE66BE2735C583FC07165F_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____platform_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_gshared_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_gshared_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_0 = ((ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___U3CSharedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = ___1_start;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		int32_t L_17 = ___1_start;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, L_17);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___2_length;
		__this->____length_1 = L_20;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m3727B8B598D6E2BDC484D8B20FE81585C449AD30_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		__this->____object_0 = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)(RuntimeObject*)L_8);
		int32_t L_9 = ___1_start;
		__this->____index_1 = L_9;
		int32_t L_10 = ___2_length;
		__this->____length_2 = L_10;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = ___1_start;
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_add<uint8_t,int32_t>(L_10, L_11);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer_0 = L_13;
		int32_t L_14 = ___2_length;
		__this->____length_1 = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = (int32_t)__this->____index_1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->____object_0;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(7 /* System.Span`1<T> System.Buffers.MemoryManager`1<System.Byte>::GetSpan() */, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11))));
		V_0 = L_2;
		int32_t L_3 = (int32_t)__this->____index_1;
		int32_t L_4 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_6;
	}

IL_0039:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_12 = (RuntimeObject*)__this->____object_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var));
		String_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_14 = V_1;
		NullCheck(L_14);
		Il2CppChar* L_15;
		L_15 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		String_t* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_19;
		memset((&L_19), 0, sizeof(L_19));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_19), L_16, L_18, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_2 = L_19;
		int32_t L_20 = (int32_t)__this->____index_1;
		int32_t L_21 = (int32_t)__this->____length_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_22;
		L_22 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_2), L_20, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_22;
	}

IL_008e:
	{
		RuntimeObject* L_23 = (RuntimeObject*)__this->____object_0;
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_24 = (RuntimeObject*)__this->____object_0;
		int32_t L_25 = (int32_t)__this->____index_1;
		int32_t L_26 = (int32_t)__this->____length_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_27;
		memset((&L_27), 0, sizeof(L_27));
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&L_27), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18))), L_25, ((int32_t)(L_26&((int32_t)2147483647LL))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_27;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_28 = V_2;
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeObject*)L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck((RuntimeArray*)L_7);
		uint8_t* L_8;
		L_8 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_7, NULL);
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_as_ref<uint8_t>(L_8);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_10;
		memset((&L_10), 0, sizeof(L_10));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_10), L_9);
		__this->____pointer_0 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_array;
		NullCheck(L_11);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = ___1_start;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		__this->____object_0 = (RuntimeObject*)L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)(RuntimeObject*)L_14);
		int32_t L_15 = ___1_start;
		__this->____index_1 = L_15;
		int32_t L_16 = ___2_length;
		__this->____length_2 = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_gshared_inline (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_0 = (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80)__this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____index_1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->____object_0;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(7 /* System.Span`1<T> System.Buffers.MemoryManager`1<System.Byte>::GetSpan() */, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13))));
		V_0 = L_2;
		int32_t L_3 = (int32_t)__this->____index_1;
		int32_t L_4 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_5;
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 8)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->____object_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_13 = V_1;
		NullCheck(L_13);
		Il2CppChar* L_14;
		L_14 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_13, NULL);
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_as_ref<uint8_t>(L_14);
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_18), L_15, L_17, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_0 = L_18;
		int32_t L_19 = (int32_t)__this->____index_1;
		int32_t L_20 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_21;
	}

IL_0089:
	{
		RuntimeObject* L_22 = (RuntimeObject*)__this->____object_0;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_23 = (RuntimeObject*)__this->____object_0;
		int32_t L_24 = (int32_t)__this->____index_1;
		int32_t L_25 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_26), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17))), L_24, ((int32_t)(L_25&((int32_t)2147483647LL))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_26;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_27 = V_0;
		return L_27;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
