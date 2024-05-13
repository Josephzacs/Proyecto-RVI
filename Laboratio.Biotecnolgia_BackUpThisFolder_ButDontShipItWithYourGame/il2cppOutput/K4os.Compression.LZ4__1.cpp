#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// K4os.Compression.LZ4.Encoders.ILZ4Decoder
struct ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E;
// K4os.Compression.LZ4.Encoders.ILZ4Encoder
struct ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// K4os.Compression.LZ4.Encoders.LZ4BlockDecoder
struct LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF;
// K4os.Compression.LZ4.Encoders.LZ4BlockEncoder
struct LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94;
// K4os.Compression.LZ4.Encoders.LZ4ChainDecoder
struct LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906;
// K4os.Compression.LZ4.Encoders.LZ4EncoderBase
struct LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343;
// K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder
struct LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D;
// K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder
struct LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// K4os.Compression.LZ4.Internal.UnmanagedResources
struct UnmanagedResources_t8334C375C7876EE0D3FF4579831A6ABE933665A5;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t
struct LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83;
// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t
struct LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6;
// K4os.Compression.LZ4.Engine.LL/LZ4_stream_t
struct LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497;

IL2CPP_EXTERN_C RuntimeClass* ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralEF11A15273D971DF91C5DC8F64E9B3E9332C093C;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4BlockDecoder_Decode_m25693F421533FD0632758FD59FA8385513D88177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4BlockDecoder_Drain_m51CE12B91BBC670D00B3FBE487412B4891C999A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4BlockDecoder_Inject_m7892E98A782CA7AD4691BEC5FB0B06E0C7C55EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4ChainDecoder_Decode_m451CB082F8C935750F1FFDBF52A40D46B9B8563E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4ChainDecoder_Drain_mA30EB61DD52ADA72CF4AD9D58B0C569C27FF09D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4ChainDecoder_Inject_m3E0CC2A906F763436B2F7B7B0D6F71DD7135CB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4EncoderBase_Encode_mF5BE89B6885E93B657E81A02A480EC5FCA4564ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6;
struct LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// K4os.Compression.LZ4.Encoders.LZ4Decoder
struct LZ4Decoder_t0BC0544E480877F67006E16D34B9B4BDA5CDEA6E  : public RuntimeObject
{
};

// K4os.Compression.LZ4.Encoders.LZ4Encoder
struct LZ4Encoder_t41954A0A466C15420E723C80E18BF5835C105883  : public RuntimeObject
{
};

// K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions
struct LZ4EncoderExtensions_t465E7EA7B23B547E13BFAEF04A1361A000A0829B  : public RuntimeObject
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

// K4os.Compression.LZ4.Internal.UnmanagedResources
struct UnmanagedResources_t8334C375C7876EE0D3FF4579831A6ABE933665A5  : public RuntimeObject
{
	// System.Int32 K4os.Compression.LZ4.Internal.UnmanagedResources::_disposed
	int32_t ____disposed_0;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// K4os.Compression.LZ4.Encoders.LZ4BlockDecoder
struct LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF  : public UnmanagedResources_t8334C375C7876EE0D3FF4579831A6ABE933665A5
{
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::_blockSize
	int32_t ____blockSize_1;
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::_outputLength
	int32_t ____outputLength_2;
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::_outputIndex
	int32_t ____outputIndex_3;
	// System.Byte* K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::_outputBuffer
	uint8_t* ____outputBuffer_4;
};

// K4os.Compression.LZ4.Encoders.LZ4ChainDecoder
struct LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906  : public UnmanagedResources_t8334C375C7876EE0D3FF4579831A6ABE933665A5
{
	// K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t* K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::_context
	LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* ____context_1;
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::_blockSize
	int32_t ____blockSize_2;
	// System.Byte* K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::_outputBuffer
	uint8_t* ____outputBuffer_3;
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::_outputLength
	int32_t ____outputLength_4;
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::_outputIndex
	int32_t ____outputIndex_5;
};

// K4os.Compression.LZ4.Encoders.LZ4EncoderBase
struct LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343  : public UnmanagedResources_t8334C375C7876EE0D3FF4579831A6ABE933665A5
{
	// System.Byte* K4os.Compression.LZ4.Encoders.LZ4EncoderBase::_inputBuffer
	uint8_t* ____inputBuffer_1;
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::_inputLength
	int32_t ____inputLength_2;
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::_blockSize
	int32_t ____blockSize_3;
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::_inputIndex
	int32_t ____inputIndex_4;
	// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::_inputPointer
	int32_t ____inputPointer_5;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tC773B985E53AB0FF4EAE2518E7D9A5E7061A6EF1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tC773B985E53AB0FF4EAE2518E7D9A5E7061A6EF1__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tA1E2F1D2FD3A8BD975D3893A7CCA250FDCAC105D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tA1E2F1D2FD3A8BD975D3893A7CCA250FDCAC105D__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t2EDFF9BC7071E0341068A663E5DBB548A874A6B7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2EDFF9BC7071E0341068A663E5DBB548A874A6B7__padding[32];
	};
};

// K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t
struct LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83 
{
	// System.Byte* K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t::externalDict
	uint8_t* ___externalDict_0;
	// System.UInt32 K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t::extDictSize
	uint32_t ___extDictSize_1;
	// System.Byte* K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t::prefixEnd
	uint8_t* ___prefixEnd_2;
	// System.UInt32 K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t::prefixSize
	uint32_t ___prefixSize_3;
};

// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t/<chainTable>e__FixedBuffer
struct U3CchainTableU3Ee__FixedBuffer_t6736C9365A16AF8B9416B33A8CB1F86E81E44AC8 
{
	union
	{
		struct
		{
			// System.UInt16 K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t/<chainTable>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CchainTableU3Ee__FixedBuffer_t6736C9365A16AF8B9416B33A8CB1F86E81E44AC8__padding[131072];
	};
};

// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t/<hashTable>e__FixedBuffer
struct U3ChashTableU3Ee__FixedBuffer_tD5AC81CDEBAFF8B416343FAF5D26D8025323357C 
{
	union
	{
		struct
		{
			// System.UInt32 K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t/<hashTable>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3ChashTableU3Ee__FixedBuffer_tD5AC81CDEBAFF8B416343FAF5D26D8025323357C__padding[131072];
	};
};

// K4os.Compression.LZ4.Engine.LL/LZ4_stream_t/<hashTable>e__FixedBuffer
struct U3ChashTableU3Ee__FixedBuffer_t5A7E12DEF019DDAEEE2A5D8E3A25622AFA7FD4B6 
{
	union
	{
		struct
		{
			// System.UInt32 K4os.Compression.LZ4.Engine.LL/LZ4_stream_t/<hashTable>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3ChashTableU3Ee__FixedBuffer_t5A7E12DEF019DDAEEE2A5D8E3A25622AFA7FD4B6__padding[16384];
	};
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0B5DFCABBFA45BA092D42199AC52125664F63FD6  : public RuntimeObject
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

// K4os.Compression.LZ4.Encoders.LZ4BlockEncoder
struct LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94  : public LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343
{
	// K4os.Compression.LZ4.LZ4Level K4os.Compression.LZ4.Encoders.LZ4BlockEncoder::_level
	int32_t ____level_6;
};

// K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder
struct LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D  : public LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343
{
	// K4os.Compression.LZ4.Engine.LL/LZ4_stream_t* K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder::_context
	LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* ____context_6;
};

// K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder
struct LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF  : public LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343
{
	// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t* K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder::_context
	LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* ____context_6;
};

// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t
struct LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6 
{
	// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t/<hashTable>e__FixedBuffer K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::hashTable
	U3ChashTableU3Ee__FixedBuffer_tD5AC81CDEBAFF8B416343FAF5D26D8025323357C ___hashTable_0;
	// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t/<chainTable>e__FixedBuffer K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::chainTable
	U3CchainTableU3Ee__FixedBuffer_t6736C9365A16AF8B9416B33A8CB1F86E81E44AC8 ___chainTable_1;
	// System.Byte* K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::end
	uint8_t* ___end_2;
	// System.Byte* K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::base
	uint8_t* ___base_3;
	// System.Byte* K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::dictBase
	uint8_t* ___dictBase_4;
	// System.UInt32 K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::dictLimit
	uint32_t ___dictLimit_5;
	// System.UInt32 K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::lowLimit
	uint32_t ___lowLimit_6;
	// System.UInt32 K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::nextToUpdate
	uint32_t ___nextToUpdate_7;
	// System.Int16 K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::compressionLevel
	int16_t ___compressionLevel_8;
	// System.Boolean K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::favorDecSpeed
	bool ___favorDecSpeed_9;
	// System.Boolean K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::dirty
	bool ___dirty_10;
	// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t* K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t::dictCtx
	LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* ___dictCtx_11;
};
// Native definition for P/Invoke marshalling of K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t
struct LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6_marshaled_pinvoke
{
	U3ChashTableU3Ee__FixedBuffer_tD5AC81CDEBAFF8B416343FAF5D26D8025323357C ___hashTable_0;
	U3CchainTableU3Ee__FixedBuffer_t6736C9365A16AF8B9416B33A8CB1F86E81E44AC8 ___chainTable_1;
	uint8_t* ___end_2;
	uint8_t* ___base_3;
	uint8_t* ___dictBase_4;
	uint32_t ___dictLimit_5;
	uint32_t ___lowLimit_6;
	uint32_t ___nextToUpdate_7;
	int16_t ___compressionLevel_8;
	int32_t ___favorDecSpeed_9;
	int32_t ___dirty_10;
	LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* ___dictCtx_11;
};
// Native definition for COM marshalling of K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t
struct LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6_marshaled_com
{
	U3ChashTableU3Ee__FixedBuffer_tD5AC81CDEBAFF8B416343FAF5D26D8025323357C ___hashTable_0;
	U3CchainTableU3Ee__FixedBuffer_t6736C9365A16AF8B9416B33A8CB1F86E81E44AC8 ___chainTable_1;
	uint8_t* ___end_2;
	uint8_t* ___base_3;
	uint8_t* ___dictBase_4;
	uint32_t ___dictLimit_5;
	uint32_t ___lowLimit_6;
	uint32_t ___nextToUpdate_7;
	int16_t ___compressionLevel_8;
	int32_t ___favorDecSpeed_9;
	int32_t ___dirty_10;
	LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* ___dictCtx_11;
};

// K4os.Compression.LZ4.Engine.LL/LZ4_stream_t
struct LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497 
{
	// K4os.Compression.LZ4.Engine.LL/LZ4_stream_t/<hashTable>e__FixedBuffer K4os.Compression.LZ4.Engine.LL/LZ4_stream_t::hashTable
	U3ChashTableU3Ee__FixedBuffer_t5A7E12DEF019DDAEEE2A5D8E3A25622AFA7FD4B6 ___hashTable_0;
	// System.UInt32 K4os.Compression.LZ4.Engine.LL/LZ4_stream_t::currentOffset
	uint32_t ___currentOffset_1;
	// System.Boolean K4os.Compression.LZ4.Engine.LL/LZ4_stream_t::dirty
	bool ___dirty_2;
	// K4os.Compression.LZ4.Engine.LL/tableType_t K4os.Compression.LZ4.Engine.LL/LZ4_stream_t::tableType
	int32_t ___tableType_3;
	// System.Byte* K4os.Compression.LZ4.Engine.LL/LZ4_stream_t::dictionary
	uint8_t* ___dictionary_4;
	// K4os.Compression.LZ4.Engine.LL/LZ4_stream_t* K4os.Compression.LZ4.Engine.LL/LZ4_stream_t::dictCtx
	LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* ___dictCtx_5;
	// System.UInt32 K4os.Compression.LZ4.Engine.LL/LZ4_stream_t::dictSize
	uint32_t ___dictSize_6;
};
// Native definition for P/Invoke marshalling of K4os.Compression.LZ4.Engine.LL/LZ4_stream_t
struct LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497_marshaled_pinvoke
{
	U3ChashTableU3Ee__FixedBuffer_t5A7E12DEF019DDAEEE2A5D8E3A25622AFA7FD4B6 ___hashTable_0;
	uint32_t ___currentOffset_1;
	int32_t ___dirty_2;
	int32_t ___tableType_3;
	uint8_t* ___dictionary_4;
	LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* ___dictCtx_5;
	uint32_t ___dictSize_6;
};
// Native definition for COM marshalling of K4os.Compression.LZ4.Engine.LL/LZ4_stream_t
struct LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497_marshaled_com
{
	U3ChashTableU3Ee__FixedBuffer_t5A7E12DEF019DDAEEE2A5D8E3A25622AFA7FD4B6 ___hashTable_0;
	uint32_t ___currentOffset_1;
	int32_t ___dirty_2;
	int32_t ___tableType_3;
	uint8_t* ___dictionary_4;
	LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* ___dictCtx_5;
	uint32_t ___dictSize_6;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// K4os.Compression.LZ4.Encoders.LZ4Decoder

// K4os.Compression.LZ4.Encoders.LZ4Decoder

// K4os.Compression.LZ4.Encoders.LZ4Encoder

// K4os.Compression.LZ4.Encoders.LZ4Encoder

// K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions

// K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// K4os.Compression.LZ4.Internal.UnmanagedResources

// K4os.Compression.LZ4.Internal.UnmanagedResources

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

// K4os.Compression.LZ4.Encoders.LZ4BlockDecoder

// K4os.Compression.LZ4.Encoders.LZ4BlockDecoder

// K4os.Compression.LZ4.Encoders.LZ4ChainDecoder

// K4os.Compression.LZ4.Encoders.LZ4ChainDecoder

// K4os.Compression.LZ4.Encoders.LZ4EncoderBase

// K4os.Compression.LZ4.Encoders.LZ4EncoderBase

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t

// K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0B5DFCABBFA45BA092D42199AC52125664F63FD6_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::168A802D5149EF4DCF86752E588ECEE8C3D853455914AB3446460A7E786B04E1
	__StaticArrayInitTypeSizeU3D128_tC773B985E53AB0FF4EAE2518E7D9A5E7061A6EF1 ___168A802D5149EF4DCF86752E588ECEE8C3D853455914AB3446460A7E786B04E1_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::7712F30D902A66E2BF63A8A5A0087D0D1060078C101ACCCD0D70FA11C00AC4D5
	__StaticArrayInitTypeSizeU3D256_tA1E2F1D2FD3A8BD975D3893A7CCA250FDCAC105D ___7712F30D902A66E2BF63A8A5A0087D0D1060078C101ACCCD0D70FA11C00AC4D5_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::8BE9CDC60993550CA8DA08387BFD90BAF6D8D6721AF66657A9ADCD9AA16BECA6
	__StaticArrayInitTypeSizeU3D32_t2EDFF9BC7071E0341068A663E5DBB548A874A6B7 ___8BE9CDC60993550CA8DA08387BFD90BAF6D8D6721AF66657A9ADCD9AA16BECA6_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::986ACAC12308F3ECBFE712DC0604455BCA3C8EC2E79B201A4FAC4E99DD45DF7E
	__StaticArrayInitTypeSizeU3D32_t2EDFF9BC7071E0341068A663E5DBB548A874A6B7 ___986ACAC12308F3ECBFE712DC0604455BCA3C8EC2E79B201A4FAC4E99DD45DF7E_3;
};

// <PrivateImplementationDetails>

// K4os.Compression.LZ4.Encoders.LZ4BlockEncoder

// K4os.Compression.LZ4.Encoders.LZ4BlockEncoder

// K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder

// K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder

// K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder

// K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder

// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t

// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t

// K4os.Compression.LZ4.Engine.LL/LZ4_stream_t

// K4os.Compression.LZ4.Engine.LL/LZ4_stream_t

// System.ReadOnlySpan`1<System.Byte>

// System.ReadOnlySpan`1<System.Byte>

// System.Span`1<System.Byte>

// System.Span`1<System.Byte>

// System.InvalidOperationException

// System.InvalidOperationException
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


// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// T& System.Span`1<System.Byte>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;

// System.Void K4os.Compression.LZ4.Internal.UnmanagedResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedResources__ctor_mC61FD073865FB77C43A96BDEA00AA16DCC4CEEAA (UnmanagedResources_t8334C375C7876EE0D3FF4579831A6ABE933665A5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Internal.Mem::RoundUp(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mem_RoundUp_mC8AF34452FA058367333A3E09A5AFC7CC99ECE2F_inline (int32_t ___0_value, int32_t ___1_step, const RuntimeMethod* method) ;
// System.Void* K4os.Compression.LZ4.Internal.Mem::Alloc(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* Mem_Alloc_m89C700C8964607A69B7DEF63A79AD15BE7CFD055_inline (int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Internal.UnmanagedResources::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedResources_ThrowIfDisposed_mBECEA07BED755FB4A98993DE0E227D18A3433B3E (UnmanagedResources_t8334C375C7876EE0D3FF4579831A6ABE933665A5* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.LZ4Codec::Decode(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Codec_Decode_m4A3D14427B211AA2B948EB25AB6C25154721D287 (uint8_t* ___0_source, int32_t ___1_sourceLength, uint8_t* ___2_target, int32_t ___3_targetLength, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Internal.Mem::Move(System.Byte*,System.Byte*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline (uint8_t* ___0_target, uint8_t* ___1_source, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Internal.UnmanagedResources::ReleaseUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedResources_ReleaseUnmanaged_m8CCD1F89898FDD0D9556D98E3DBC241C06644F32 (UnmanagedResources_t8334C375C7876EE0D3FF4579831A6ABE933665A5* __this, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Internal.Mem::Free(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mem_Free_mD9BF0F345E3D5DB8AB84B480B7116E35FB02E159_inline (void* ___0_ptr, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Encoders.LZ4EncoderBase::.ctor(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4EncoderBase__ctor_m0C63FEEE505D8A357D20D312D44DDDAD1B916334 (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, bool ___0_chaining, int32_t ___1_blockSize, int32_t ___2_extraBlocks, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.LZ4Codec::Encode(System.Byte*,System.Int32,System.Byte*,System.Int32,K4os.Compression.LZ4.LZ4Level)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Codec_Encode_mFAD27B9F2F01FDCAB6300885922150B125979CFC (uint8_t* ___0_source, int32_t ___1_sourceLength, uint8_t* ___2_target, int32_t ___3_targetLength, int32_t ___4_level, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t* K4os.Compression.LZ4.Engine.LL::LZ4_createStreamDecode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* LL_LZ4_createStreamDecode_m8A319EF26830B06ACADBE5F9EE3E84FDD69F3829 (const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::Prepare(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4ChainDecoder_Prepare_m90BF1C8590C02DBF8372825D3E6839AA67F68A13 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, int32_t ___0_blockSize, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::DecodeBlock(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_DecodeBlock_mB4C7F32205876FBAC3E92DF77F47CAC6691C2CD9 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, uint8_t* ___0_source, int32_t ___1_sourceLength, uint8_t* ___2_target, int32_t ___3_targetLength, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::ApplyDict(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_ApplyDict_mAD93A8422B392891B0B5C25AF3C6BFF7946D713D (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::CopyDict(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_CopyDict_m893E95E84332A56FBD987DBD4BDE15656CC44BC8 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Engine.LL::LZ4_setStreamDecode(K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LL_LZ4_setStreamDecode_m2C1179AEF6DE9E38B75C6144AE376A516338ECD2 (LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* ___0_LZ4_streamDecode, uint8_t* ___1_dictionary, int32_t ___2_dictSize, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Engine.LLxx::LZ4_decompress_safe_continue(K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t*,System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t LLxx_LZ4_decompress_safe_continue_m3164A5FA44FAF1A885DEEFEFD6D914C6CD22DDDB (LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* ___0_context, uint8_t* ___1_source, uint8_t* ___2_target, int32_t ___3_sourceLength, int32_t ___4_targetLength, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Engine.LL::LZ4_freeStreamDecode(K4os.Compression.LZ4.Engine.LL/LZ4_streamDecode_t*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LL_LZ4_freeStreamDecode_m398379FFDD968A70940E0A499AAF6D6E1BA5987C (LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* ___0_LZ4_stream, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Encoders.ILZ4Decoder K4os.Compression.LZ4.Encoders.LZ4Decoder::CreateChainDecoder(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Decoder_CreateChainDecoder_m1A443841CCC84850A77F4478A8F6777AC2698BAF (int32_t ___0_blockSize, int32_t ___1_extraBlocks, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Encoders.ILZ4Decoder K4os.Compression.LZ4.Encoders.LZ4Decoder::CreateBlockDecoder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Decoder_CreateBlockDecoder_m0EE65867F602CAF19FA9A37F3210FCD7004BE70B (int32_t ___0_blockSize, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4ChainDecoder__ctor_mDD11307D72C18D18E20B80088D9A7628ACE76A95 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, int32_t ___0_blockSize, int32_t ___1_extraBlocks, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4BlockDecoder__ctor_m8F802796AEFF2C306FB0171BFFAF1FB04A4939CE (LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF* __this, int32_t ___0_blockSize, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Encoders.ILZ4Encoder K4os.Compression.LZ4.Encoders.LZ4Encoder::CreateHighEncoder(K4os.Compression.LZ4.LZ4Level,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Encoder_CreateHighEncoder_m32F3BC46171789ED7ACDB7848A6DB056B1FB7A6F (int32_t ___0_level, int32_t ___1_blockSize, int32_t ___2_extraBlocks, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Encoders.ILZ4Encoder K4os.Compression.LZ4.Encoders.LZ4Encoder::CreateFastEncoder(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Encoder_CreateFastEncoder_mC7B77BDDF9338E5C0C219ADCFDFE809C4A9A250D (int32_t ___0_blockSize, int32_t ___1_extraBlocks, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Encoders.ILZ4Encoder K4os.Compression.LZ4.Encoders.LZ4Encoder::CreateBlockEncoder(K4os.Compression.LZ4.LZ4Level,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Encoder_CreateBlockEncoder_m08CEEE8A9540B6BEE7A10E584238898B415A5879 (int32_t ___0_level, int32_t ___1_blockSize, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Encoders.LZ4BlockEncoder::.ctor(K4os.Compression.LZ4.LZ4Level,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4BlockEncoder__ctor_mEC0E14D2F2A0D1A12C7E6C91743753CCBD9C349F (LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94* __this, int32_t ___0_level, int32_t ___1_blockSize, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4FastChainEncoder__ctor_m0CB2616067C82CE2C3AA66F9E1B9357EC14B8E1C (LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D* __this, int32_t ___0_blockSize, int32_t ___1_extraBlocks, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder::.ctor(K4os.Compression.LZ4.LZ4Level,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4HighChainEncoder__ctor_m4BA63E48B473B5A9B4F64E19AA3FD3835D88FAC1 (LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF* __this, int32_t ___0_level, int32_t ___1_blockSize, int32_t ___2_extraBlocks, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Encoders.LZ4EncoderBase::Commit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4EncoderBase_Commit_m5D8DCF78F7D4C06EDFC7337F382BE8E55B0195CF (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Topup(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_Topup_m8C6FAB6B3E8D100C16B577EF518E7EBD7554AE7F (RuntimeObject* ___0_encoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_source, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Encode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_Encode_m8A2B1E944B78EFF3E71B43B73AF21AD250119692 (RuntimeObject* ___0_encoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_target, int32_t ___2_offset, int32_t ___3_length, bool ___4_allowCopy, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::FlushAndEncode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte*,System.Int32,System.Boolean,System.Boolean,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_FlushAndEncode_m93244D28A27A854020487A9603249E35CD6C5B40 (RuntimeObject* ___0_encoder, uint8_t* ___1_target, int32_t ___2_targetLength, bool ___3_forceEncode, bool ___4_allowCopy, int32_t ___5_loaded, int32_t* ___6_encoded, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::TopupAndEncode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte*,System.Int32,System.Byte*,System.Int32,System.Boolean,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_TopupAndEncode_mDFFDBD2A6D48AF9664CCDCFA76DB8CF1B5C895F6 (RuntimeObject* ___0_encoder, uint8_t* ___1_source, int32_t ___2_sourceLength, uint8_t* ___3_target, int32_t ___4_targetLength, bool ___5_forceEncode, bool ___6_allowCopy, int32_t* ___7_loaded, int32_t* ___8_encoded, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::GetPinnableReference()
inline uint8_t* ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_gshared)(__this, method);
}
// T& System.Span`1<System.Byte>::GetPinnableReference()
inline uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared)(__this, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Boolean K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::DecodeAndDrain(K4os.Compression.LZ4.Encoders.ILZ4Decoder,System.Byte*,System.Int32,System.Byte*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LZ4EncoderExtensions_DecodeAndDrain_mA92F87AE88F2BDDAE16672F4A3FF7401A1189847 (RuntimeObject* ___0_decoder, uint8_t* ___1_source, int32_t ___2_sourceLength, uint8_t* ___3_target, int32_t ___4_targetLength, int32_t* ___5_decoded, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Engine.LL/LZ4_stream_t* K4os.Compression.LZ4.Engine.LL::LZ4_createStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* LL_LZ4_createStream_m39054BF0CE364BE835AABAD1CF706EAB86BBD021 (const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Encoders.LZ4EncoderBase::ReleaseUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4EncoderBase_ReleaseUnmanaged_m7FDADC86AB43E37F7B674643E201B8CB0D881A55 (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Engine.LL::LZ4_freeStream(K4os.Compression.LZ4.Engine.LL/LZ4_stream_t*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LL_LZ4_freeStream_mDC8D27BEA8E1771EB28B3F4C1D10D2CA4538741A (LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* ___0_LZ4_stream, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Engine.LLxx::LZ4_compress_fast_continue(K4os.Compression.LZ4.Engine.LL/LZ4_stream_t*,System.Byte*,System.Byte*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t LLxx_LZ4_compress_fast_continue_m6D928E7BDC4D52EC2CB69F293E388874244A0D10 (LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* ___0_context, uint8_t* ___1_source, uint8_t* ___2_target, int32_t ___3_sourceLength, int32_t ___4_targetLength, int32_t ___5_acceleration, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Engine.LL::LZ4_saveDict(K4os.Compression.LZ4.Engine.LL/LZ4_stream_t*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LL_LZ4_saveDict_mD246DF12474146A72485AE8E11818C62C7CF0D76 (LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* ___0_LZ4_dict, uint8_t* ___1_safeBuffer, int32_t ___2_dictSize, const RuntimeMethod* method) ;
// K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t* K4os.Compression.LZ4.Engine.LL::LZ4_createStreamHC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* LL_LZ4_createStreamHC_m977323C5603627E18468F7CF6FA53297DAEBD007 (const RuntimeMethod* method) ;
// System.Void K4os.Compression.LZ4.Engine.LL::LZ4_resetStreamHC_fast(K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LL_LZ4_resetStreamHC_fast_m585120F8027F9ECEBFB292AB6D365D6C2002BFC6 (LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* ___0_LZ4_streamHCPtr, int32_t ___1_compressionLevel, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Engine.LL::LZ4_freeStreamHC(K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LL_LZ4_freeStreamHC_mFDF7B41516CB59A1637186E1AE1446C398AD75BA (LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* ___0_LZ4_streamHCPtr, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Engine.LLxx::LZ4_compress_HC_continue(K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t*,System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t LLxx_LZ4_compress_HC_continue_m36936AFC6D51FBDA0C85D8586B2EF74149292FDE (LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* ___0_context, uint8_t* ___1_source, uint8_t* ___2_target, int32_t ___3_sourceLength, int32_t ___4_targetLength, const RuntimeMethod* method) ;
// System.Int32 K4os.Compression.LZ4.Engine.LL::LZ4_saveDictHC(K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LL_LZ4_saveDictHC_m9826A48FA1ED2E021BEC45337B792B3C9631333B (LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* ___0_LZ4_streamHCPtr, uint8_t* ___1_safeBuffer, int32_t ___2_dictSize, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::MemoryCopy(System.Void*,System.Void*,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_MemoryCopy_mC1717FCF88DEBC2DAEA8B51C352628F4D2402F69 (void* ___0_source, void* ___1_destination, int64_t ___2_destinationSizeInBytes, int64_t ___3_sourceBytesToCopy, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___0_hglobal, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::get_BlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4BlockDecoder_get_BlockSize_mB565E66D7751DA175FFFC9A2ED8CF4846F4BE1DC (LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____blockSize_1;
		return L_0;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::get_BytesReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4BlockDecoder_get_BytesReady_m46B2BE9715D1E470E12D46AC63B83AAFA88AF9CC (LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____outputIndex_3;
		return L_0;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4BlockDecoder__ctor_m8F802796AEFF2C306FB0171BFFAF1FB04A4939CE (LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF* __this, int32_t ___0_blockSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnmanagedResources__ctor_mC61FD073865FB77C43A96BDEA00AA16DCC4CEEAA(__this, NULL);
		int32_t L_0 = ___0_blockSize;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_0, ((int32_t)1024), NULL);
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Mem_RoundUp_mC8AF34452FA058367333A3E09A5AFC7CC99ECE2F_inline(L_1, ((int32_t)1024), NULL);
		___0_blockSize = L_2;
		int32_t L_3 = ___0_blockSize;
		__this->____blockSize_1 = L_3;
		int32_t L_4 = __this->____blockSize_1;
		__this->____outputLength_2 = ((int32_t)il2cpp_codegen_add(L_4, 8));
		__this->____outputIndex_3 = 0;
		int32_t L_5 = __this->____outputLength_2;
		void* L_6;
		L_6 = Mem_Alloc_m89C700C8964607A69B7DEF63A79AD15BE7CFD055_inline(((int32_t)il2cpp_codegen_add(L_5, 8)), NULL);
		__this->____outputBuffer_4 = (uint8_t*)L_6;
		return;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::Decode(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4BlockDecoder_Decode_m25693F421533FD0632758FD59FA8385513D88177 (LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF* __this, uint8_t* ___0_source, int32_t ___1_length, int32_t ___2_blockSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnmanagedResources_ThrowIfDisposed_mBECEA07BED755FB4A98993DE0E227D18A3433B3E(__this, NULL);
		int32_t L_0 = ___2_blockSize;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->____blockSize_1;
		___2_blockSize = L_1;
	}

IL_0012:
	{
		int32_t L_2 = ___2_blockSize;
		int32_t L_3 = __this->____blockSize_1;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0021;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4BlockDecoder_Decode_m25693F421533FD0632758FD59FA8385513D88177_RuntimeMethod_var)));
	}

IL_0021:
	{
		uint8_t* L_5 = ___0_source;
		int32_t L_6 = ___1_length;
		uint8_t* L_7 = __this->____outputBuffer_4;
		int32_t L_8 = __this->____outputLength_2;
		int32_t L_9;
		L_9 = LZ4Codec_Decode_m4A3D14427B211AA2B948EB25AB6C25154721D287(L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4BlockDecoder_Decode_m25693F421533FD0632758FD59FA8385513D88177_RuntimeMethod_var)));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		__this->____outputIndex_3 = L_12;
		int32_t L_13 = __this->____outputIndex_3;
		return L_13;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::Inject(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4BlockDecoder_Inject_m7892E98A782CA7AD4691BEC5FB0B06E0C7C55EBF (LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF* __this, uint8_t* ___0_source, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UnmanagedResources_ThrowIfDisposed_mBECEA07BED755FB4A98993DE0E227D18A3433B3E(__this, NULL);
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->____outputIndex_3 = L_1;
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0015:
	{
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->____outputLength_2;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4BlockDecoder_Inject_m7892E98A782CA7AD4691BEC5FB0B06E0C7C55EBF_RuntimeMethod_var)));
	}

IL_0024:
	{
		uint8_t* L_6 = __this->____outputBuffer_4;
		uint8_t* L_7 = ___0_source;
		int32_t L_8 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(L_6, L_7, L_8, NULL);
		int32_t L_9 = ___1_length;
		__this->____outputIndex_3 = L_9;
		int32_t L_10 = ___1_length;
		return L_10;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::Drain(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4BlockDecoder_Drain_m51CE12B91BBC670D00B3FBE487412B4891C999A5 (LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF* __this, uint8_t* ___0_target, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnmanagedResources_ThrowIfDisposed_mBECEA07BED755FB4A98993DE0E227D18A3433B3E(__this, NULL);
		int32_t L_0 = __this->____outputIndex_3;
		int32_t L_1 = ___1_offset;
		___1_offset = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___1_offset;
		int32_t L_5 = ___2_length;
		int32_t L_6 = __this->____outputIndex_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4BlockDecoder_Drain_m51CE12B91BBC670D00B3FBE487412B4891C999A5_RuntimeMethod_var)));
	}

IL_0029:
	{
		uint8_t* L_8 = ___0_target;
		uint8_t* L_9 = __this->____outputBuffer_4;
		int32_t L_10 = ___1_offset;
		int32_t L_11 = ___2_length;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(L_8, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10)), L_11, NULL);
		return;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4BlockDecoder::ReleaseUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4BlockDecoder_ReleaseUnmanaged_mA7C6CCAF378AEB22BE72AA4EF10C6C67DC8DE213 (LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnmanagedResources_ReleaseUnmanaged_m8CCD1F89898FDD0D9556D98E3DBC241C06644F32(__this, NULL);
		uint8_t* L_0 = __this->____outputBuffer_4;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Free_mD9BF0F345E3D5DB8AB84B480B7116E35FB02E159_inline((void*)L_0, NULL);
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
// System.Void K4os.Compression.LZ4.Encoders.LZ4BlockEncoder::.ctor(K4os.Compression.LZ4.LZ4Level,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4BlockEncoder__ctor_mEC0E14D2F2A0D1A12C7E6C91743753CCBD9C349F (LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94* __this, int32_t ___0_level, int32_t ___1_blockSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_blockSize;
		LZ4EncoderBase__ctor_m0C63FEEE505D8A357D20D312D44DDDAD1B916334(__this, (bool)0, L_0, 0, NULL);
		int32_t L_1 = ___0_level;
		__this->____level_6 = L_1;
		return;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4BlockEncoder::EncodeBlock(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4BlockEncoder_EncodeBlock_m07651A48A6EB1BA968BAA55809F48DF9F68361BD (LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94* __this, uint8_t* ___0_source, int32_t ___1_sourceLength, uint8_t* ___2_target, int32_t ___3_targetLength, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = ___1_sourceLength;
		uint8_t* L_2 = ___2_target;
		int32_t L_3 = ___3_targetLength;
		int32_t L_4 = __this->____level_6;
		int32_t L_5;
		L_5 = LZ4Codec_Encode_mFAD27B9F2F01FDCAB6300885922150B125979CFC(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4BlockEncoder::CopyDict(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4BlockEncoder_CopyDict_m75979AE49A6BD3A4C95DBBFB1F20E2AF858331B9 (LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94* __this, uint8_t* ___0_target, int32_t ___1_dictionaryLength, const RuntimeMethod* method) 
{
	{
		return 0;
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
// System.Void K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4ChainDecoder__ctor_mDD11307D72C18D18E20B80088D9A7628ACE76A95 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, int32_t ___0_blockSize, int32_t ___1_extraBlocks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnmanagedResources__ctor_mC61FD073865FB77C43A96BDEA00AA16DCC4CEEAA(__this, NULL);
		int32_t L_0 = ___0_blockSize;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_0, ((int32_t)1024), NULL);
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Mem_RoundUp_mC8AF34452FA058367333A3E09A5AFC7CC99ECE2F_inline(L_1, ((int32_t)1024), NULL);
		___0_blockSize = L_2;
		int32_t L_3 = ___1_extraBlocks;
		int32_t L_4;
		L_4 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_3, 0, NULL);
		___1_extraBlocks = L_4;
		int32_t L_5 = ___0_blockSize;
		__this->____blockSize_2 = L_5;
		int32_t L_6 = ___1_extraBlocks;
		int32_t L_7 = __this->____blockSize_2;
		__this->____outputLength_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)65536), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(1, L_6)), L_7)))), ((int32_t)32)));
		__this->____outputIndex_5 = 0;
		int32_t L_8 = __this->____outputLength_4;
		void* L_9;
		L_9 = Mem_Alloc_m89C700C8964607A69B7DEF63A79AD15BE7CFD055_inline(((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		__this->____outputBuffer_3 = (uint8_t*)L_9;
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* L_10;
		L_10 = LL_LZ4_createStreamDecode_m8A319EF26830B06ACADBE5F9EE3E84FDD69F3829(NULL);
		__this->____context_1 = L_10;
		return;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::get_BlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_get_BlockSize_mECC0D70E21DA14F7AC992086FA7BA5A412AC6B47 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____blockSize_2;
		return L_0;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::get_BytesReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_get_BytesReady_mDE25D146F81412F27C8BDE0651BFAD2051F10A45 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____outputIndex_5;
		return L_0;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::Decode(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_Decode_m451CB082F8C935750F1FFDBF52A40D46B9B8563E (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, uint8_t* ___0_source, int32_t ___1_length, int32_t ___2_blockSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___2_blockSize;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = __this->____blockSize_2;
		___2_blockSize = L_1;
	}

IL_000c:
	{
		int32_t L_2 = ___2_blockSize;
		LZ4ChainDecoder_Prepare_m90BF1C8590C02DBF8372825D3E6839AA67F68A13(__this, L_2, NULL);
		uint8_t* L_3 = ___0_source;
		int32_t L_4 = ___1_length;
		uint8_t* L_5 = __this->____outputBuffer_3;
		int32_t L_6 = __this->____outputIndex_5;
		int32_t L_7 = ___2_blockSize;
		int32_t L_8;
		L_8 = LZ4ChainDecoder_DecodeBlock_mB4C7F32205876FBAC3E92DF77F47CAC6691C2CD9(__this, L_3, L_4, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4ChainDecoder_Decode_m451CB082F8C935750F1FFDBF52A40D46B9B8563E_RuntimeMethod_var)));
	}

IL_0034:
	{
		int32_t L_11 = __this->____outputIndex_5;
		int32_t L_12 = V_0;
		__this->____outputIndex_5 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::Inject(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_Inject_m3E0CC2A906F763436B2F7B7B0D6F71DD7135CB82 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, uint8_t* ___0_source, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_1 = ___1_length;
		int32_t L_2 = __this->____blockSize_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_2, ((int32_t)65536), NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4ChainDecoder_Inject_m3E0CC2A906F763436B2F7B7B0D6F71DD7135CB82_RuntimeMethod_var)));
	}

IL_001f:
	{
		int32_t L_5 = __this->____outputIndex_5;
		int32_t L_6 = ___1_length;
		int32_t L_7 = __this->____outputLength_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0059;
		}
	}
	{
		uint8_t* L_8 = __this->____outputBuffer_3;
		int32_t L_9 = __this->____outputIndex_5;
		uint8_t* L_10 = ___0_source;
		int32_t L_11 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, L_9)), L_10, L_11, NULL);
		int32_t L_12 = __this->____outputIndex_5;
		int32_t L_13 = ___1_length;
		int32_t L_14;
		L_14 = LZ4ChainDecoder_ApplyDict_mAD93A8422B392891B0B5C25AF3C6BFF7946D713D(__this, ((int32_t)il2cpp_codegen_add(L_12, L_13)), NULL);
		__this->____outputIndex_5 = L_14;
		goto IL_00c9;
	}

IL_0059:
	{
		int32_t L_15 = ___1_length;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)65536))))
		{
			goto IL_007d;
		}
	}
	{
		uint8_t* L_16 = __this->____outputBuffer_3;
		uint8_t* L_17 = ___0_source;
		int32_t L_18 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(L_16, L_17, L_18, NULL);
		int32_t L_19 = ___1_length;
		int32_t L_20;
		L_20 = LZ4ChainDecoder_ApplyDict_mAD93A8422B392891B0B5C25AF3C6BFF7946D713D(__this, L_19, NULL);
		__this->____outputIndex_5 = L_20;
		goto IL_00c9;
	}

IL_007d:
	{
		int32_t L_21 = ___1_length;
		int32_t L_22 = __this->____outputIndex_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)65536), L_21)), L_22, NULL);
		V_0 = L_23;
		uint8_t* L_24 = __this->____outputBuffer_3;
		uint8_t* L_25 = __this->____outputBuffer_3;
		int32_t L_26 = __this->____outputIndex_5;
		int32_t L_27 = V_0;
		int32_t L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(L_24, ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_25, L_26)), L_27)), L_28, NULL);
		uint8_t* L_29 = __this->____outputBuffer_3;
		int32_t L_30 = V_0;
		uint8_t* L_31 = ___0_source;
		int32_t L_32 = ___1_length;
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, L_30)), L_31, L_32, NULL);
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_length;
		int32_t L_35;
		L_35 = LZ4ChainDecoder_ApplyDict_mAD93A8422B392891B0B5C25AF3C6BFF7946D713D(__this, ((int32_t)il2cpp_codegen_add(L_33, L_34)), NULL);
		__this->____outputIndex_5 = L_35;
	}

IL_00c9:
	{
		int32_t L_36 = ___1_length;
		return L_36;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::Drain(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4ChainDecoder_Drain_mA30EB61DD52ADA72CF4AD9D58B0C569C27FF09D5 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, uint8_t* ___0_target, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____outputIndex_5;
		int32_t L_1 = ___1_offset;
		___1_offset = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = ___1_offset;
		int32_t L_5 = ___2_length;
		int32_t L_6 = __this->____outputIndex_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)L_6)))
		{
			goto IL_0023;
		}
	}

IL_001d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4ChainDecoder_Drain_mA30EB61DD52ADA72CF4AD9D58B0C569C27FF09D5_RuntimeMethod_var)));
	}

IL_0023:
	{
		uint8_t* L_8 = ___0_target;
		uint8_t* L_9 = __this->____outputBuffer_3;
		int32_t L_10 = ___1_offset;
		int32_t L_11 = ___2_length;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(L_8, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10)), L_11, NULL);
		return;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::Prepare(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4ChainDecoder_Prepare_m90BF1C8590C02DBF8372825D3E6839AA67F68A13 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, int32_t ___0_blockSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____outputIndex_5;
		int32_t L_1 = ___0_blockSize;
		int32_t L_2 = __this->____outputLength_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) > ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		int32_t L_3 = __this->____outputIndex_5;
		int32_t L_4;
		L_4 = LZ4ChainDecoder_CopyDict_m893E95E84332A56FBD987DBD4BDE15656CC44BC8(__this, L_3, NULL);
		__this->____outputIndex_5 = L_4;
		return;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::CopyDict(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_CopyDict_m893E95E84332A56FBD987DBD4BDE15656CC44BC8 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)65536))), 0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_index;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		uint8_t* L_4 = __this->____outputBuffer_3;
		uint8_t* L_5 = __this->____outputBuffer_3;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(L_4, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7, NULL);
		LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* L_8 = __this->____context_1;
		uint8_t* L_9 = __this->____outputBuffer_3;
		int32_t L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		LL_LZ4_setStreamDecode_m2C1179AEF6DE9E38B75C6144AE376A516338ECD2(L_8, L_9, L_10, NULL);
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::ApplyDict(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_ApplyDict_mAD93A8422B392891B0B5C25AF3C6BFF7946D713D (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)65536))), 0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_index;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* L_4 = __this->____context_1;
		uint8_t* L_5 = __this->____outputBuffer_3;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		LL_LZ4_setStreamDecode_m2C1179AEF6DE9E38B75C6144AE376A516338ECD2(L_4, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7, NULL);
		int32_t L_8 = ___0_index;
		return L_8;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::DecodeBlock(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4ChainDecoder_DecodeBlock_mB4C7F32205876FBAC3E92DF77F47CAC6691C2CD9 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, uint8_t* ___0_source, int32_t ___1_sourceLength, uint8_t* ___2_target, int32_t ___3_targetLength, const RuntimeMethod* method) 
{
	{
		LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* L_0 = __this->____context_1;
		uint8_t* L_1 = ___0_source;
		uint8_t* L_2 = ___2_target;
		int32_t L_3 = ___1_sourceLength;
		int32_t L_4 = ___3_targetLength;
		int32_t L_5;
		L_5 = LLxx_LZ4_decompress_safe_continue_m3164A5FA44FAF1A885DEEFEFD6D914C6CD22DDDB(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4ChainDecoder::ReleaseUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4ChainDecoder_ReleaseUnmanaged_mD66C0DFB053CDB9ECC5537C8A9A235651D175547 (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnmanagedResources_ReleaseUnmanaged_m8CCD1F89898FDD0D9556D98E3DBC241C06644F32(__this, NULL);
		LZ4_streamDecode_t_t37C7550765B50208DF3F01FACF4E674594BF8B83* L_0 = __this->____context_1;
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		LL_LZ4_freeStreamDecode_m398379FFDD968A70940E0A499AAF6D6E1BA5987C(L_0, NULL);
		uint8_t* L_1 = __this->____outputBuffer_3;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Free_mD9BF0F345E3D5DB8AB84B480B7116E35FB02E159_inline((void*)L_1, NULL);
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
// K4os.Compression.LZ4.Encoders.ILZ4Decoder K4os.Compression.LZ4.Encoders.LZ4Decoder::Create(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Decoder_Create_m930B8F4CF3BF5305D8743CFDA1E72DBE210D9212 (bool ___0_chaining, int32_t ___1_blockSize, int32_t ___2_extraBlocks, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_chaining;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___1_blockSize;
		int32_t L_2 = ___2_extraBlocks;
		RuntimeObject* L_3;
		L_3 = LZ4Decoder_CreateChainDecoder_m1A443841CCC84850A77F4478A8F6777AC2698BAF(L_1, L_2, NULL);
		return L_3;
	}

IL_000b:
	{
		int32_t L_4 = ___1_blockSize;
		RuntimeObject* L_5;
		L_5 = LZ4Decoder_CreateBlockDecoder_m0EE65867F602CAF19FA9A37F3210FCD7004BE70B(L_4, NULL);
		return L_5;
	}
}
// K4os.Compression.LZ4.Encoders.ILZ4Decoder K4os.Compression.LZ4.Encoders.LZ4Decoder::CreateChainDecoder(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Decoder_CreateChainDecoder_m1A443841CCC84850A77F4478A8F6777AC2698BAF (int32_t ___0_blockSize, int32_t ___1_extraBlocks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_blockSize;
		int32_t L_1 = ___1_extraBlocks;
		LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906* L_2 = (LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906*)il2cpp_codegen_object_new(LZ4ChainDecoder_t953F1B5788B50C3920E9FB578A6170B9A2299906_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LZ4ChainDecoder__ctor_mDD11307D72C18D18E20B80088D9A7628ACE76A95(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// K4os.Compression.LZ4.Encoders.ILZ4Decoder K4os.Compression.LZ4.Encoders.LZ4Decoder::CreateBlockDecoder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Decoder_CreateBlockDecoder_m0EE65867F602CAF19FA9A37F3210FCD7004BE70B (int32_t ___0_blockSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_blockSize;
		LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF* L_1 = (LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF*)il2cpp_codegen_object_new(LZ4BlockDecoder_tD77D94EAA8C9ED2402A1A940E64FE17F846C28DF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LZ4BlockDecoder__ctor_m8F802796AEFF2C306FB0171BFFAF1FB04A4939CE(L_1, L_0, NULL);
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
// K4os.Compression.LZ4.Encoders.ILZ4Encoder K4os.Compression.LZ4.Encoders.LZ4Encoder::Create(System.Boolean,K4os.Compression.LZ4.LZ4Level,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Encoder_Create_m77A94BF19BC55EF409025AC0B1124D8FAEAA5E7B (bool ___0_chaining, int32_t ___1_level, int32_t ___2_blockSize, int32_t ___3_extraBlocks, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_chaining;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___1_level;
		if ((((int32_t)L_1) < ((int32_t)3)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ___1_level;
		int32_t L_3 = ___2_blockSize;
		int32_t L_4 = ___3_extraBlocks;
		RuntimeObject* L_5;
		L_5 = LZ4Encoder_CreateHighEncoder_m32F3BC46171789ED7ACDB7848A6DB056B1FB7A6F(L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0010:
	{
		int32_t L_6 = ___2_blockSize;
		int32_t L_7 = ___3_extraBlocks;
		RuntimeObject* L_8;
		L_8 = LZ4Encoder_CreateFastEncoder_mC7B77BDDF9338E5C0C219ADCFDFE809C4A9A250D(L_6, L_7, NULL);
		return L_8;
	}

IL_0018:
	{
		int32_t L_9 = ___1_level;
		int32_t L_10 = ___2_blockSize;
		RuntimeObject* L_11;
		L_11 = LZ4Encoder_CreateBlockEncoder_m08CEEE8A9540B6BEE7A10E584238898B415A5879(L_9, L_10, NULL);
		return L_11;
	}
}
// K4os.Compression.LZ4.Encoders.ILZ4Encoder K4os.Compression.LZ4.Encoders.LZ4Encoder::CreateBlockEncoder(K4os.Compression.LZ4.LZ4Level,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Encoder_CreateBlockEncoder_m08CEEE8A9540B6BEE7A10E584238898B415A5879 (int32_t ___0_level, int32_t ___1_blockSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_level;
		int32_t L_1 = ___1_blockSize;
		LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94* L_2 = (LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94*)il2cpp_codegen_object_new(LZ4BlockEncoder_t8CA2A836CCC62351731B7E36513601862E5BFE94_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LZ4BlockEncoder__ctor_mEC0E14D2F2A0D1A12C7E6C91743753CCBD9C349F(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// K4os.Compression.LZ4.Encoders.ILZ4Encoder K4os.Compression.LZ4.Encoders.LZ4Encoder::CreateFastEncoder(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Encoder_CreateFastEncoder_mC7B77BDDF9338E5C0C219ADCFDFE809C4A9A250D (int32_t ___0_blockSize, int32_t ___1_extraBlocks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_blockSize;
		int32_t L_1 = ___1_extraBlocks;
		LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D* L_2 = (LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D*)il2cpp_codegen_object_new(LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LZ4FastChainEncoder__ctor_m0CB2616067C82CE2C3AA66F9E1B9357EC14B8E1C(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// K4os.Compression.LZ4.Encoders.ILZ4Encoder K4os.Compression.LZ4.Encoders.LZ4Encoder::CreateHighEncoder(K4os.Compression.LZ4.LZ4Level,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4Encoder_CreateHighEncoder_m32F3BC46171789ED7ACDB7848A6DB056B1FB7A6F (int32_t ___0_level, int32_t ___1_blockSize, int32_t ___2_extraBlocks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_level;
		int32_t L_1 = ___1_blockSize;
		int32_t L_2 = ___2_extraBlocks;
		LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF* L_3 = (LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF*)il2cpp_codegen_object_new(LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LZ4HighChainEncoder__ctor_m4BA63E48B473B5A9B4F64E19AA3FD3835D88FAC1(L_3, L_0, L_1, L_2, NULL);
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
// System.Void K4os.Compression.LZ4.Encoders.LZ4EncoderBase::.ctor(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4EncoderBase__ctor_m0C63FEEE505D8A357D20D312D44DDDAD1B916334 (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, bool ___0_chaining, int32_t ___1_blockSize, int32_t ___2_extraBlocks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		UnmanagedResources__ctor_mC61FD073865FB77C43A96BDEA00AA16DCC4CEEAA(__this, NULL);
		int32_t L_0 = ___1_blockSize;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_0, ((int32_t)1024), NULL);
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Mem_RoundUp_mC8AF34452FA058367333A3E09A5AFC7CC99ECE2F_inline(L_1, ((int32_t)1024), NULL);
		___1_blockSize = L_2;
		int32_t L_3 = ___2_extraBlocks;
		int32_t L_4;
		L_4 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_3, 0, NULL);
		___2_extraBlocks = L_4;
		bool L_5 = ___0_chaining;
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0031;
	}

IL_002c:
	{
		G_B3_0 = ((int32_t)65536);
	}

IL_0031:
	{
		V_0 = G_B3_0;
		int32_t L_6 = ___1_blockSize;
		__this->____blockSize_3 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = ___2_extraBlocks;
		int32_t L_9 = ___1_blockSize;
		__this->____inputLength_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(1, L_8)), L_9)))), ((int32_t)32)));
		int32_t L_10 = 0;
		V_1 = L_10;
		__this->____inputPointer_5 = L_10;
		int32_t L_11 = V_1;
		__this->____inputIndex_4 = L_11;
		int32_t L_12 = __this->____inputLength_2;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		void* L_13;
		L_13 = Mem_Alloc_m89C700C8964607A69B7DEF63A79AD15BE7CFD055_inline(((int32_t)il2cpp_codegen_add(L_12, 8)), NULL);
		__this->____inputBuffer_1 = (uint8_t*)L_13;
		return;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::get_BlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderBase_get_BlockSize_mA9EA51708FDD667A03E8362632004AAC93E6B5D6 (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____blockSize_3;
		return L_0;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::get_BytesReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderBase_get_BytesReady_m1F22B98FD78E8E82A470E3E46B4948314577FB9B (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inputPointer_5;
		int32_t L_1 = __this->____inputIndex_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::Topup(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderBase_Topup_mF9A9FB7AD7AE083E52A1719608B9DBAE269E3F69 (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, uint8_t* ___0_source, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnmanagedResources_ThrowIfDisposed_mBECEA07BED755FB4A98993DE0E227D18A3433B3E(__this, NULL);
		int32_t L_0 = ___1_length;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		int32_t L_1 = __this->____inputIndex_4;
		int32_t L_2 = __this->____blockSize_3;
		int32_t L_3 = __this->____inputPointer_5;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), L_3));
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, L_6, NULL);
		V_1 = L_7;
		uint8_t* L_8 = __this->____inputBuffer_1;
		int32_t L_9 = __this->____inputPointer_5;
		uint8_t* L_10 = ___0_source;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, L_9)), L_10, L_11, NULL);
		int32_t L_12 = __this->____inputPointer_5;
		int32_t L_13 = V_1;
		__this->____inputPointer_5 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		int32_t L_14 = V_1;
		return L_14;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::Encode(System.Byte*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderBase_Encode_mF5BE89B6885E93B657E81A02A480EC5FCA4564ED (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, uint8_t* ___0_target, int32_t ___1_length, bool ___2_allowCopy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnmanagedResources_ThrowIfDisposed_mBECEA07BED755FB4A98993DE0E227D18A3433B3E(__this, NULL);
		int32_t L_0 = __this->____inputPointer_5;
		int32_t L_1 = __this->____inputIndex_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		uint8_t* L_3 = __this->____inputBuffer_1;
		int32_t L_4 = __this->____inputIndex_4;
		int32_t L_5 = V_0;
		uint8_t* L_6 = ___0_target;
		int32_t L_7 = ___1_length;
		int32_t L_8;
		L_8 = VirtualFuncInvoker4< int32_t, uint8_t*, int32_t, uint8_t*, int32_t >::Invoke(12 /* System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::EncodeBlock(System.Byte*,System.Int32,System.Byte*,System.Int32) */, __this, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)), L_5, L_6, L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF11A15273D971DF91C5DC8F64E9B3E9332C093C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4EncoderBase_Encode_mF5BE89B6885E93B657E81A02A480EC5FCA4564ED_RuntimeMethod_var)));
	}

IL_0040:
	{
		bool L_11 = ___2_allowCopy;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_005e;
		}
	}
	{
		uint8_t* L_14 = ___0_target;
		uint8_t* L_15 = __this->____inputBuffer_1;
		int32_t L_16 = __this->____inputIndex_4;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline(L_14, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16)), L_17, NULL);
		int32_t L_18 = V_0;
		V_1 = ((-L_18));
	}

IL_005e:
	{
		LZ4EncoderBase_Commit_m5D8DCF78F7D4C06EDFC7337F382BE8E55B0195CF(__this, NULL);
		int32_t L_19 = V_1;
		return L_19;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4EncoderBase::Commit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4EncoderBase_Commit_m5D8DCF78F7D4C06EDFC7337F382BE8E55B0195CF (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____inputPointer_5;
		__this->____inputIndex_4 = L_0;
		int32_t L_1 = __this->____inputIndex_4;
		int32_t L_2 = __this->____blockSize_3;
		int32_t L_3 = __this->____inputLength_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) > ((int32_t)L_3)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		uint8_t* L_4 = __this->____inputBuffer_1;
		int32_t L_5 = __this->____inputPointer_5;
		int32_t L_6;
		L_6 = VirtualFuncInvoker2< int32_t, uint8_t*, int32_t >::Invoke(13 /* System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderBase::CopyDict(System.Byte*,System.Int32) */, __this, L_4, L_5);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->____inputPointer_5 = L_7;
		int32_t L_8 = V_0;
		__this->____inputIndex_4 = L_8;
		return;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4EncoderBase::ReleaseUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4EncoderBase_ReleaseUnmanaged_m7FDADC86AB43E37F7B674643E201B8CB0D881A55 (LZ4EncoderBase_t55DC59D95F1D221AF264F6098FD2410188E8B343* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnmanagedResources_ReleaseUnmanaged_m8CCD1F89898FDD0D9556D98E3DBC241C06644F32(__this, NULL);
		uint8_t* L_0 = __this->____inputBuffer_1;
		il2cpp_codegen_runtime_class_init_inline(Mem_t445EBEF4108B5E635172E88327B078F515109380_il2cpp_TypeInfo_var);
		Mem_Free_mD9BF0F345E3D5DB8AB84B480B7116E35FB02E159_inline((void*)L_0, NULL);
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
// System.Boolean K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Topup(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte*&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LZ4EncoderExtensions_Topup_m597C6EACA102E2474735B491C8D9DE7E04E9B386 (RuntimeObject* ___0_encoder, uint8_t** ___1_source, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_encoder;
		uint8_t** L_1 = ___1_source;
		int32_t L_2 = ___2_length;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, uint8_t*, int32_t >::Invoke(2 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Encoder::Topup(System.Byte*,System.Int32) */, ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var, L_0, (uint8_t*)(*((intptr_t*)L_1)), L_2);
		V_0 = L_3;
		uint8_t** L_4 = ___1_source;
		uint8_t** L_5 = ___1_source;
		int32_t L_6 = V_0;
		*((intptr_t*)L_4) = (intptr_t)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_5)), L_6));
		int32_t L_7 = V_0;
		return (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Topup(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_Topup_m8C6FAB6B3E8D100C16B577EF518E7EBD7554AE7F (RuntimeObject* ___0_encoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_source, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_source;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_encoder;
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___2_offset;
		int32_t L_7 = ___3_length;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker2< int32_t, uint8_t*, int32_t >::Invoke(2 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Encoder::Topup(System.Byte*,System.Int32) */, ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var, L_4, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7);
		return L_8;
	}
}
// System.Boolean K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Topup(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte[],System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LZ4EncoderExtensions_Topup_m21891DB1C6E1C623B131F66D584F3127A4AC8C50 (RuntimeObject* ___0_encoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_source, int32_t* ___2_offset, int32_t ___3_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_encoder;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_source;
		int32_t* L_2 = ___2_offset;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___3_length;
		int32_t L_5;
		L_5 = LZ4EncoderExtensions_Topup_m8C6FAB6B3E8D100C16B577EF518E7EBD7554AE7F(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		int32_t* L_6 = ___2_offset;
		int32_t* L_7 = ___2_offset;
		int32_t L_8 = *((int32_t*)L_7);
		int32_t L_9 = V_0;
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9));
		int32_t L_10 = V_0;
		return (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Encode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_Encode_m8A2B1E944B78EFF3E71B43B73AF21AD250119692 (RuntimeObject* ___0_encoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_target, int32_t ___2_offset, int32_t ___3_length, bool ___4_allowCopy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_target;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_encoder;
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___2_offset;
		int32_t L_7 = ___3_length;
		bool L_8 = ___4_allowCopy;
		NullCheck(L_4);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker3< int32_t, uint8_t*, int32_t, bool >::Invoke(3 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Encoder::Encode(System.Byte*,System.Int32,System.Boolean) */, ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var, L_4, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7, L_8);
		return L_9;
	}
}
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Encode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte[],System.Int32&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_Encode_m44E334742FDA8FB71E93A44087D5F53B50B8B43B (RuntimeObject* ___0_encoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_target, int32_t* ___2_offset, int32_t ___3_length, bool ___4_allowCopy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_encoder;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_target;
		int32_t* L_2 = ___2_offset;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___3_length;
		bool L_5 = ___4_allowCopy;
		int32_t L_6;
		L_6 = LZ4EncoderExtensions_Encode_m8A2B1E944B78EFF3E71B43B73AF21AD250119692(L_0, L_1, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		int32_t* L_7 = ___2_offset;
		int32_t* L_8 = ___2_offset;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = il2cpp_codegen_abs(L_10);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, L_11));
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0021:
	{
		return (int32_t)(2);
	}

IL_0023:
	{
		return (int32_t)(0);
	}
}
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Encode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte*&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_Encode_mFD6E1C6E54BFDE7A71512CCFCED550162ACEAA1A (RuntimeObject* ___0_encoder, uint8_t** ___1_target, int32_t ___2_length, bool ___3_allowCopy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_encoder;
		uint8_t** L_1 = ___1_target;
		int32_t L_2 = ___2_length;
		bool L_3 = ___3_allowCopy;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, uint8_t*, int32_t, bool >::Invoke(3 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Encoder::Encode(System.Byte*,System.Int32,System.Boolean) */, ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var, L_0, (uint8_t*)(*((intptr_t*)L_1)), L_2, L_3);
		V_0 = L_4;
		uint8_t** L_5 = ___1_target;
		uint8_t** L_6 = ___1_target;
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = il2cpp_codegen_abs(L_7);
		*((intptr_t*)L_5) = (intptr_t)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_6)), L_8));
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		return (int32_t)(3);
	}

IL_001f:
	{
		return (int32_t)(2);
	}

IL_0021:
	{
		return (int32_t)(0);
	}
}
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::TopupAndEncode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte*,System.Int32,System.Byte*,System.Int32,System.Boolean,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_TopupAndEncode_mDFFDBD2A6D48AF9664CCDCFA76DB8CF1B5C895F6 (RuntimeObject* ___0_encoder, uint8_t* ___1_source, int32_t ___2_sourceLength, uint8_t* ___3_target, int32_t ___4_targetLength, bool ___5_forceEncode, bool ___6_allowCopy, int32_t* ___7_loaded, int32_t* ___8_encoded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___7_loaded;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___8_encoded;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t L_2 = ___2_sourceLength;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t* L_3 = ___7_loaded;
		RuntimeObject* L_4 = ___0_encoder;
		uint8_t* L_5 = ___1_source;
		int32_t L_6 = ___2_sourceLength;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker2< int32_t, uint8_t*, int32_t >::Invoke(2 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Encoder::Topup(System.Byte*,System.Int32) */, ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		*((int32_t*)L_3) = (int32_t)L_7;
	}

IL_0017:
	{
		RuntimeObject* L_8 = ___0_encoder;
		uint8_t* L_9 = ___3_target;
		int32_t L_10 = ___4_targetLength;
		bool L_11 = ___5_forceEncode;
		bool L_12 = ___6_allowCopy;
		int32_t* L_13 = ___7_loaded;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t* L_15 = ___8_encoded;
		int32_t L_16;
		L_16 = LZ4EncoderExtensions_FlushAndEncode_m93244D28A27A854020487A9603249E35CD6C5B40(L_8, L_9, L_10, L_11, L_12, L_14, L_15, NULL);
		return L_16;
	}
}
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::TopupAndEncode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_TopupAndEncode_m7585E89DA99F05A21EF565DE7CE80DAE37771362 (RuntimeObject* ___0_encoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_source, int32_t ___2_sourceOffset, int32_t ___3_sourceLength, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_target, int32_t ___5_targetOffset, int32_t ___6_targetLength, bool ___7_forceEncode, bool ___8_allowCopy, int32_t* ___9_loaded, int32_t* ___10_encoded, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_source;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_target;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0028;
		}
	}

IL_0023:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0031;
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0031:
	{
		RuntimeObject* L_8 = ___0_encoder;
		uint8_t* L_9 = V_0;
		int32_t L_10 = ___2_sourceOffset;
		int32_t L_11 = ___3_sourceLength;
		uint8_t* L_12 = V_2;
		int32_t L_13 = ___5_targetOffset;
		int32_t L_14 = ___6_targetLength;
		bool L_15 = ___7_forceEncode;
		bool L_16 = ___8_allowCopy;
		int32_t* L_17 = ___9_loaded;
		int32_t* L_18 = ___10_encoded;
		int32_t L_19;
		L_19 = LZ4EncoderExtensions_TopupAndEncode_mDFFDBD2A6D48AF9664CCDCFA76DB8CF1B5C895F6(L_8, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10)), L_11, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_13)), L_14, L_15, L_16, L_17, L_18, NULL);
		return L_19;
	}
}
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::TopupAndEncode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Boolean,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_TopupAndEncode_m91DA2719D68C656327EB3318FC0689257C1502D8 (RuntimeObject* ___0_encoder, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_source, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___2_target, bool ___3_forceEncode, bool ___4_allowCopy, int32_t* ___5_loaded, int32_t* ___6_encoded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57((&___1_source), ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		uint8_t* L_2;
		L_2 = Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C((&___2_target), Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		V_3 = L_2;
		uint8_t* L_3 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_3);
		RuntimeObject* L_4 = ___0_encoder;
		uint8_t* L_5 = V_0;
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		uint8_t* L_7 = V_2;
		int32_t L_8;
		L_8 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___2_target), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		bool L_9 = ___3_forceEncode;
		bool L_10 = ___4_allowCopy;
		int32_t* L_11 = ___5_loaded;
		int32_t* L_12 = ___6_encoded;
		int32_t L_13;
		L_13 = LZ4EncoderExtensions_TopupAndEncode_mDFFDBD2A6D48AF9664CCDCFA76DB8CF1B5C895F6(L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::FlushAndEncode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte*,System.Int32,System.Boolean,System.Boolean,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_FlushAndEncode_m93244D28A27A854020487A9603249E35CD6C5B40 (RuntimeObject* ___0_encoder, uint8_t* ___1_target, int32_t ___2_targetLength, bool ___3_forceEncode, bool ___4_allowCopy, int32_t ___5_loaded, int32_t* ___6_encoded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t* L_0 = ___6_encoded;
		*((int32_t*)L_0) = (int32_t)0;
		RuntimeObject* L_1 = ___0_encoder;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Encoder::get_BlockSize() */, ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___0_encoder;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Encoder::get_BytesReady() */, ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var, L_3);
		bool L_5 = ___3_forceEncode;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0017;
		}
	}
	{
		int32_t L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		if ((((int32_t)G_B3_1) >= ((int32_t)G_B3_0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_7 = ___5_loaded;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0021:
	{
		return (int32_t)(1);
	}

IL_0023:
	{
		int32_t* L_8 = ___6_encoded;
		RuntimeObject* L_9 = ___0_encoder;
		uint8_t* L_10 = ___1_target;
		int32_t L_11 = ___2_targetLength;
		bool L_12 = ___4_allowCopy;
		NullCheck(L_9);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker3< int32_t, uint8_t*, int32_t, bool >::Invoke(3 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Encoder::Encode(System.Byte*,System.Int32,System.Boolean) */, ILZ4Encoder_tD1B2E4208BA971B44F959547DBC5AB23BA9AE793_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
		*((int32_t*)L_8) = (int32_t)L_13;
		bool L_14 = ___4_allowCopy;
		if (!L_14)
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_15 = ___6_encoded;
		int32_t L_16 = *((int32_t*)L_15);
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}

IL_003a:
	{
		return (int32_t)(3);
	}

IL_003c:
	{
		int32_t* L_17 = ___6_encoded;
		int32_t* L_18 = ___6_encoded;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)((-L_19));
		return (int32_t)(2);
	}
}
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::FlushAndEncode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte*,System.Int32,System.Boolean,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_FlushAndEncode_m6754242414FFD225C6A3555C86C8A2EEE79EAD95 (RuntimeObject* ___0_encoder, uint8_t* ___1_target, int32_t ___2_targetLength, bool ___3_allowCopy, int32_t* ___4_encoded, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_encoder;
		uint8_t* L_1 = ___1_target;
		int32_t L_2 = ___2_targetLength;
		bool L_3 = ___3_allowCopy;
		int32_t* L_4 = ___4_encoded;
		int32_t L_5;
		L_5 = LZ4EncoderExtensions_FlushAndEncode_m93244D28A27A854020487A9603249E35CD6C5B40(L_0, L_1, L_2, (bool)1, L_3, 0, L_4, NULL);
		return L_5;
	}
}
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::FlushAndEncode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_FlushAndEncode_m679C86F3BA9A5C9B8852AB629F8C5BA93B111EBE (RuntimeObject* ___0_encoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_target, int32_t ___2_targetOffset, int32_t ___3_targetLength, bool ___4_allowCopy, int32_t* ___5_encoded, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_target;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_encoder;
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___2_targetOffset;
		int32_t L_7 = ___3_targetLength;
		bool L_8 = ___4_allowCopy;
		int32_t* L_9 = ___5_encoded;
		int32_t L_10;
		L_10 = LZ4EncoderExtensions_FlushAndEncode_m93244D28A27A854020487A9603249E35CD6C5B40(L_4, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7, (bool)1, L_8, 0, L_9, NULL);
		return L_10;
	}
}
// K4os.Compression.LZ4.Encoders.EncoderAction K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::FlushAndEncode(K4os.Compression.LZ4.Encoders.ILZ4Encoder,System.Span`1<System.Byte>,System.Boolean,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_FlushAndEncode_m2C8E736BADF9AE8BA175CADF8F276082C68B3EBF (RuntimeObject* ___0_encoder, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_target, bool ___2_allowCopy, int32_t* ___3_encoded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C((&___1_target), Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		RuntimeObject* L_2 = ___0_encoder;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_target), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		bool L_5 = ___2_allowCopy;
		int32_t* L_6 = ___3_encoded;
		int32_t L_7;
		L_7 = LZ4EncoderExtensions_FlushAndEncode_m93244D28A27A854020487A9603249E35CD6C5B40(L_2, L_3, L_4, (bool)1, L_5, 0, L_6, NULL);
		return L_7;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Drain(K4os.Compression.LZ4.Encoders.ILZ4Decoder,System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4EncoderExtensions_Drain_mE56DE0C78092C1228C02343055E21DC127390D19 (RuntimeObject* ___0_decoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_target, int32_t ___2_targetOffset, int32_t ___3_offset, int32_t ___4_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_target;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_decoder;
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___2_targetOffset;
		int32_t L_7 = ___3_offset;
		int32_t L_8 = ___4_length;
		NullCheck(L_4);
		InterfaceActionInvoker3< uint8_t*, int32_t, int32_t >::Invoke(4 /* System.Void K4os.Compression.LZ4.Encoders.ILZ4Decoder::Drain(System.Byte*,System.Int32,System.Int32) */, ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var, L_4, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7, L_8);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		return;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Drain(K4os.Compression.LZ4.Encoders.ILZ4Decoder,System.Span`1<System.Byte>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4EncoderExtensions_Drain_mAEA4BFA30764C215B20D7870F36DDCC228ADEDFA (RuntimeObject* ___0_decoder, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_target, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C((&___1_target), Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		RuntimeObject* L_2 = ___0_decoder;
		uint8_t* L_3 = V_0;
		int32_t L_4 = ___2_offset;
		int32_t L_5 = ___3_length;
		NullCheck(L_2);
		InterfaceActionInvoker3< uint8_t*, int32_t, int32_t >::Invoke(4 /* System.Void K4os.Compression.LZ4.Encoders.ILZ4Decoder::Drain(System.Byte*,System.Int32,System.Int32) */, ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Boolean K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::DecodeAndDrain(K4os.Compression.LZ4.Encoders.ILZ4Decoder,System.Byte*,System.Int32,System.Byte*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LZ4EncoderExtensions_DecodeAndDrain_mA92F87AE88F2BDDAE16672F4A3FF7401A1189847 (RuntimeObject* ___0_decoder, uint8_t* ___1_source, int32_t ___2_sourceLength, uint8_t* ___3_target, int32_t ___4_targetLength, int32_t* ___5_decoded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___5_decoded;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t L_1 = ___2_sourceLength;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t* L_2 = ___5_decoded;
		RuntimeObject* L_3 = ___0_decoder;
		uint8_t* L_4 = ___1_source;
		int32_t L_5 = ___2_sourceLength;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, uint8_t*, int32_t, int32_t >::Invoke(2 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Decoder::Decode(System.Byte*,System.Int32,System.Int32) */, ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var, L_3, L_4, L_5, 0);
		*((int32_t*)L_2) = (int32_t)L_6;
		int32_t* L_7 = ___5_decoded;
		int32_t L_8 = *((int32_t*)L_7);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_9 = ___4_targetLength;
		int32_t* L_10 = ___5_decoded;
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_0025;
		}
	}

IL_0023:
	{
		return (bool)0;
	}

IL_0025:
	{
		RuntimeObject* L_12 = ___0_decoder;
		uint8_t* L_13 = ___3_target;
		int32_t* L_14 = ___5_decoded;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t* L_16 = ___5_decoded;
		int32_t L_17 = *((int32_t*)L_16);
		NullCheck(L_12);
		InterfaceActionInvoker3< uint8_t*, int32_t, int32_t >::Invoke(4 /* System.Void K4os.Compression.LZ4.Encoders.ILZ4Decoder::Drain(System.Byte*,System.Int32,System.Int32) */, ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var, L_12, L_13, ((-L_15)), L_17);
		return (bool)1;
	}
}
// System.Boolean K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::DecodeAndDrain(K4os.Compression.LZ4.Encoders.ILZ4Decoder,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LZ4EncoderExtensions_DecodeAndDrain_m4C8A0E5D65496CCA38FF67C64B037F98F81EA4DF (RuntimeObject* ___0_decoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_source, int32_t ___2_sourceOffset, int32_t ___3_sourceLength, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_target, int32_t ___5_targetOffset, int32_t ___6_targetLength, int32_t* ___7_decoded, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_source;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_target;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0028;
		}
	}

IL_0023:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0031;
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0031:
	{
		RuntimeObject* L_8 = ___0_decoder;
		uint8_t* L_9 = V_0;
		int32_t L_10 = ___2_sourceOffset;
		int32_t L_11 = ___3_sourceLength;
		uint8_t* L_12 = V_2;
		int32_t L_13 = ___5_targetOffset;
		int32_t L_14 = ___6_targetLength;
		int32_t* L_15 = ___7_decoded;
		bool L_16;
		L_16 = LZ4EncoderExtensions_DecodeAndDrain_mA92F87AE88F2BDDAE16672F4A3FF7401A1189847(L_8, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10)), L_11, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_13)), L_14, L_15, NULL);
		return L_16;
	}
}
// System.Boolean K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::DecodeAndDrain(K4os.Compression.LZ4.Encoders.ILZ4Decoder,System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LZ4EncoderExtensions_DecodeAndDrain_m9D260A4DF15D7876496AA8CF765886C731E178E7 (RuntimeObject* ___0_decoder, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_source, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___2_target, int32_t* ___3_decoded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57((&___1_source), ReadOnlySpan_1_GetPinnableReference_m365106BC7655B6A45D47673D473A699B5B69DA57_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		uint8_t* L_2;
		L_2 = Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C((&___2_target), Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		V_3 = L_2;
		uint8_t* L_3 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_3);
		RuntimeObject* L_4 = ___0_decoder;
		uint8_t* L_5 = V_0;
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		uint8_t* L_7 = V_2;
		int32_t L_8;
		L_8 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___2_target), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		int32_t* L_9 = ___3_decoded;
		bool L_10;
		L_10 = LZ4EncoderExtensions_DecodeAndDrain_mA92F87AE88F2BDDAE16672F4A3FF7401A1189847(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Inject(K4os.Compression.LZ4.Encoders.ILZ4Decoder,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_Inject_mE563920343F7288278C35FFBA37F0E2EF082F4F2 (RuntimeObject* ___0_decoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_decoder;
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___2_offset;
		int32_t L_7 = ___3_length;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker2< int32_t, uint8_t*, int32_t >::Invoke(3 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Decoder::Inject(System.Byte*,System.Int32) */, ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var, L_4, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7);
		return L_8;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4EncoderExtensions::Decode(K4os.Compression.LZ4.Encoders.ILZ4Decoder,System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4EncoderExtensions_Decode_m856C1486767C7BB4DCC14E9472A0FE9DD55F7592 (RuntimeObject* ___0_decoder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_offset, int32_t ___3_length, int32_t ___4_blockSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_decoder;
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___2_offset;
		int32_t L_7 = ___3_length;
		int32_t L_8 = ___4_blockSize;
		NullCheck(L_4);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker3< int32_t, uint8_t*, int32_t, int32_t >::Invoke(2 /* System.Int32 K4os.Compression.LZ4.Encoders.ILZ4Decoder::Decode(System.Byte*,System.Int32,System.Int32) */, ILZ4Decoder_tC57329108FA68B225E5B07F207101575F846806E_il2cpp_TypeInfo_var, L_4, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7, L_8);
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
// System.Void K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4FastChainEncoder__ctor_m0CB2616067C82CE2C3AA66F9E1B9357EC14B8E1C (LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D* __this, int32_t ___0_blockSize, int32_t ___1_extraBlocks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_blockSize;
		int32_t L_1 = ___1_extraBlocks;
		LZ4EncoderBase__ctor_m0C63FEEE505D8A357D20D312D44DDDAD1B916334(__this, (bool)1, L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* L_2;
		L_2 = LL_LZ4_createStream_m39054BF0CE364BE835AABAD1CF706EAB86BBD021(NULL);
		__this->____context_6 = L_2;
		return;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder::ReleaseUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4FastChainEncoder_ReleaseUnmanaged_mF2D9071E92193EE9D8D19B24A860B93371E36D13 (LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LZ4EncoderBase_ReleaseUnmanaged_m7FDADC86AB43E37F7B674643E201B8CB0D881A55(__this, NULL);
		LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* L_0 = __this->____context_6;
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		LL_LZ4_freeStream_mDC8D27BEA8E1771EB28B3F4C1D10D2CA4538741A(L_0, NULL);
		return;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder::EncodeBlock(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4FastChainEncoder_EncodeBlock_m1903B6CFC62310ED4142AEB930A31594F2B2764C (LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D* __this, uint8_t* ___0_source, int32_t ___1_sourceLength, uint8_t* ___2_target, int32_t ___3_targetLength, const RuntimeMethod* method) 
{
	{
		LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* L_0 = __this->____context_6;
		uint8_t* L_1 = ___0_source;
		uint8_t* L_2 = ___2_target;
		int32_t L_3 = ___1_sourceLength;
		int32_t L_4 = ___3_targetLength;
		int32_t L_5;
		L_5 = LLxx_LZ4_compress_fast_continue_m6D928E7BDC4D52EC2CB69F293E388874244A0D10(L_0, L_1, L_2, L_3, L_4, 1, NULL);
		return L_5;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4FastChainEncoder::CopyDict(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4FastChainEncoder_CopyDict_m7790FEDBE3D286560BB01F3F645416BC30C31994 (LZ4FastChainEncoder_tA8E2AA971E4BCBDD9359BA50ECC7BE5041C1907D* __this, uint8_t* ___0_target, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LZ4_stream_t_tC3D3BBC441AD1E876AB7E60515882FD9E2879497* L_0 = __this->____context_6;
		uint8_t* L_1 = ___0_target;
		int32_t L_2 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = LL_LZ4_saveDict_mD246DF12474146A72485AE8E11818C62C7CF0D76(L_0, L_1, L_2, NULL);
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
// System.Void K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder::.ctor(K4os.Compression.LZ4.LZ4Level,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4HighChainEncoder__ctor_m4BA63E48B473B5A9B4F64E19AA3FD3835D88FAC1 (LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF* __this, int32_t ___0_level, int32_t ___1_blockSize, int32_t ___2_extraBlocks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_blockSize;
		int32_t L_1 = ___2_extraBlocks;
		LZ4EncoderBase__ctor_m0C63FEEE505D8A357D20D312D44DDDAD1B916334(__this, (bool)1, L_0, L_1, NULL);
		int32_t L_2 = ___0_level;
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_0010;
		}
	}
	{
		___0_level = 3;
	}

IL_0010:
	{
		int32_t L_3 = ___0_level;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0019;
		}
	}
	{
		___0_level = ((int32_t)12);
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* L_4;
		L_4 = LL_LZ4_createStreamHC_m977323C5603627E18468F7CF6FA53297DAEBD007(NULL);
		__this->____context_6 = L_4;
		LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* L_5 = __this->____context_6;
		int32_t L_6 = ___0_level;
		LL_LZ4_resetStreamHC_fast_m585120F8027F9ECEBFB292AB6D365D6C2002BFC6(L_5, L_6, NULL);
		return;
	}
}
// System.Void K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder::ReleaseUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4HighChainEncoder_ReleaseUnmanaged_m0419CFF2F5184B29CBEE9FF5D49F1107EEF61DF8 (LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LZ4EncoderBase_ReleaseUnmanaged_m7FDADC86AB43E37F7B674643E201B8CB0D881A55(__this, NULL);
		LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* L_0 = __this->____context_6;
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = LL_LZ4_freeStreamHC_mFDF7B41516CB59A1637186E1AE1446C398AD75BA(L_0, NULL);
		return;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder::EncodeBlock(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4HighChainEncoder_EncodeBlock_mD6168B06381B4D76493074E859BB1FF4F2D7D86F (LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF* __this, uint8_t* ___0_source, int32_t ___1_sourceLength, uint8_t* ___2_target, int32_t ___3_targetLength, const RuntimeMethod* method) 
{
	{
		LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* L_0 = __this->____context_6;
		uint8_t* L_1 = ___0_source;
		uint8_t* L_2 = ___2_target;
		int32_t L_3 = ___1_sourceLength;
		int32_t L_4 = ___3_targetLength;
		int32_t L_5;
		L_5 = LLxx_LZ4_compress_HC_continue_m36936AFC6D51FBDA0C85D8586B2EF74149292FDE(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 K4os.Compression.LZ4.Encoders.LZ4HighChainEncoder::CopyDict(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4HighChainEncoder_CopyDict_m9E5389B573105D455245BC6D5BB343F31826C867 (LZ4HighChainEncoder_t5887BC56E5B245E73F92F69A51EF0E06FDD21AEF* __this, uint8_t* ___0_target, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LZ4_streamHC_t_t79671014DF0CD8C6909D5EAEF1E340845A8B20E6* L_0 = __this->____context_6;
		uint8_t* L_1 = ___0_target;
		int32_t L_2 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(LL_t2FCED7E0482C3649B02B64B81A4C02FABF83D94D_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = LL_LZ4_saveDictHC_m9826A48FA1ED2E021BEC45337B792B3C9631333B(L_0, L_1, L_2, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mem_RoundUp_mC8AF34452FA058367333A3E09A5AFC7CC99ECE2F_inline (int32_t ___0_value, int32_t ___1_step, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_step;
		int32_t L_2 = ___1_step;
		int32_t L_3 = ___1_step;
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_0, L_1)), 1))/L_2)), L_3));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* Mem_Alloc_m89C700C8964607A69B7DEF63A79AD15BE7CFD055_inline (int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_0, NULL);
		V_0 = L_1;
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mem_Move_m52A997797E0B97015D4A0F1E6CA0D404C692C4C3_inline (uint8_t* ___0_target, uint8_t* ___1_source, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___1_source;
		uint8_t* L_1 = ___0_target;
		int32_t L_2 = ___2_length;
		int32_t L_3 = ___2_length;
		Buffer_MemoryCopy_mC1717FCF88DEBC2DAEA8B51C352628F4D2402F69((void*)L_0, (void*)L_1, ((int64_t)L_2), ((int64_t)L_3), NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mem_Free_mD9BF0F345E3D5DB8AB84B480B7116E35FB02E159_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___0_ptr;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), L_0, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_1, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
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
