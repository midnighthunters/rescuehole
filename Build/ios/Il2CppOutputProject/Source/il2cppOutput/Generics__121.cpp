#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
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
		method->invoker_method(methodPtr, method, obj, params, params[1]);
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
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E;
struct Func_2_t8A062405B39BD0F3BF43E567694018E5080B6F26;
struct PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5;
struct PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC;
struct PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA;
struct Tensor_1_t32474E941CB35672DFCB1269F4D78143D87621FF;
struct Tensor_1_t0C31849F8BD32BA5F18DCDE3D00D25BADB38003C;
struct Tensor_1_t65B864E8272AE642C573473CC6901460AD6A3379;
struct PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF;
struct PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F;
struct PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ITensorData_tC05D8C97C500A9F7A45E2DB029C9AE2CDAA1D1CF;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062A6E32AA8D50093BC3CE21ADEAD0EEA6E5C429;
IL2CPP_EXTERN_C String_t* _stringLiteral2E2EA1DA8641F3AC7819A8D76EE243E8C115150F;
IL2CPP_EXTERN_C String_t* _stringLiteral642A30CBE3FDAC4E8BAB8D2817132F6CA926C1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral660A1A2C1ED97169DD5B080B3C546C65565890E1;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral8C7B4877FC53973ED4AB40213D55E994309CD6C5;
IL2CPP_EXTERN_C String_t* _stringLiteralB7506E2E628394598494A749AA7EC051FC3C3AAE;
IL2CPP_EXTERN_C String_t* _stringLiteralCB52D68102DE6860A24B95C701AB761F54B70F5D;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE0DDE215FE64239F241B30EC241F47E5B268E9BE;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE2F0B48DCDDFA223545B5736EDEFF2ACCB30D887;
IL2CPP_EXTERN_C String_t* _stringLiteralE3B08EA942992A306FA82994179F80FC8658CEAB;
IL2CPP_EXTERN_C String_t* _stringLiteralF291E74C21B8B40550C8052DDF9B62343BC4516E;
IL2CPP_EXTERN_C const RuntimeMethod* HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF;
struct PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F;
struct PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 
{
	int32_t ___m_D7;
	int32_t ___m_D6;
	int32_t ___m_D5;
	int32_t ___m_D4;
	int32_t ___m_D3;
	int32_t ___m_D2;
	int32_t ___m_D1;
	int32_t ___m_D0;
	int32_t ___m_Rank;
	int32_t ___m_Length;
};
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
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct DataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct DimType_t8AAED79C7D7848EADE36682E2BB78078A5816FBE 
{
	int32_t ___value__;
};
struct ElementType_tEB6A0613EEB254ABA7D12BEFB4803017A6B26E94 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD 
{
	int32_t ___m_ElementType;
	uint8_t ___m_Param;
	uint8_t ___m_Value;
};
struct PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 
{
	int32_t ___m_ElementType;
	uint8_t ___m_Param;
	int16_t ___m_Value;
};
struct PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 
{
	int32_t ___m_ElementType;
	uint8_t ___m_Param;
	int32_t ___m_Value;
};
struct PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 
{
	int32_t ___m_ElementType;
	uint8_t ___m_Param;
	float ___m_Value;
};
typedef Il2CppFullySharedGenericStruct PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC;
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 
{
	int32_t ___m_DimType;
	uint8_t ___m_Param;
	int32_t ___m_Value;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C  : public RuntimeObject
{
	RuntimeObject* ___m_DataOnBackend;
	TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___m_Shape;
	bool ___m_Disposed;
	int32_t ___m_Count;
	int32_t ___m_DataType;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E  : public MulticastDelegate_t
{
};
struct Func_2_t8A062405B39BD0F3BF43E567694018E5080B6F26  : public MulticastDelegate_t
{
};
struct Tensor_1_t32474E941CB35672DFCB1269F4D78143D87621FF  : public Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C
{
};
struct Tensor_1_t0C31849F8BD32BA5F18DCDE3D00D25BADB38003C  : public Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C
{
};
struct Tensor_1_t65B864E8272AE642C573473CC6901460AD6A3379  : public Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E 
{
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D7;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D6;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D5;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D4;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D3;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D2;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D1;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D0;
	bool ___m_IsRankDynamic;
	int32_t ___m_Rank;
};
struct DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_marshaled_pinvoke
{
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D7;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D6;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D5;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D4;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D3;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D2;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D1;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D0;
	int32_t ___m_IsRankDynamic;
	int32_t ___m_Rank;
};
struct DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_marshaled_com
{
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D7;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D6;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D5;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D4;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D3;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D2;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D1;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___m_D0;
	int32_t ___m_IsRankDynamic;
	int32_t ___m_Rank;
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F  : public RuntimeObject
{
	int32_t ___m_DataType;
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___m_Shape;
};
struct PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5  : public PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F
{
	PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* ___m_Elements;
};
struct PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC  : public PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F
{
	PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* ___m_Elements;
};
struct PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA  : public PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F
{
	PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* ___m_Elements;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF  : public RuntimeArray
{
	ALIGN_FIELD (8) PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD m_Items[1];

	inline PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD value)
	{
		m_Items[index] = value;
	}
};
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
struct PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F  : public RuntimeArray
{
	ALIGN_FIELD (8) PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 m_Items[1];

	inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663  : public RuntimeArray
{
	ALIGN_FIELD (8) PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 m_Items[1];

	inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isUnknown_m90A18DDB9B38D8B16773142D78629A69B5258C1F_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isParam_m13B7331999D54743756EFD64CA99C0D144E26684_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_gshared_inline (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_gshared_inline (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m5D2031C164E472792EF0F28B973BAE92E726BE85_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m701B8731756B976779D70FA9705B0FC2DFEAA0B6_gshared_inline (Func_2_t8A062405B39BD0F3BF43E567694018E5080B6F26* __this, uint8_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m67B9156A702ADEEEB6A3CEC65FC174F49957569E_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m3DC3A60BC3B1DADF398763E7AFE6F564C926A3C5_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, int16_t ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m72E57CD84F51A957732F8048B0F3A9344277925A_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_mDBAF6D00E7586708AA6D1C14A2FF4687B01EDA5D_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Eq_mB202EC75D1C36BCC39AFA62E04C298BCA08F24CB_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Ge_m789F9F2D761A888CE3E53822FE18F19AC415FFE3_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Le_mA43CB0474B22B23E8E9D4D1094F79B1ABE1633B9_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Gt_m6FFCA8DCA3C86EC06ACC7B7DFD11F6EB493D7CC8_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Lt_mA95F8093D156875609B83090894C8F14000B14B2_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_BitwiseAnd_m009E7D5B3B99D7F47EFF358A2E6DBC381F360D40_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4_gshared (int16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_BitwiseOr_mF2BD629B4D947159A6B40B601A23EBB8B8A2CDC5_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_BitwiseXor_mA756E11B0FCB54B78F6A68632796E35317DD1B60_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_BitwiseNot_m76F3829FE2B7FE022DDAB56E5BFA4AE855487637_gshared (int16_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Neg_mBACB4AB7A14E13B95E23E37D11662A322F320018_gshared (int16_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Add_m52DE3CB734A271606E38AD7F6EF704DB3AD64BE9_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Sub_m45FCF57F4714A82138B244E3548C064DADE3A1A1_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Mul_mE5CBA3B481D8FF28FD61480912E6A4D6DE78CEFF_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Div_m308E451761C70688CF784B4051787B7678F11789_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Sign_m86772926A29D0A3F367D43145F9FC435D6D2255C_gshared (int16_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Pow_m4FAA90C13CB37ADAEFB10CFD1FDE1CF4377C01AF_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Mod_mD98111690441BCB67FC08D1B26B4C2AE6A917B20_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_FMod_mE744283F4F9758E04EFE6984330A98FDFD244EE1_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Min_mF4C9AC31858773761D884FAD23B6971C8AE3B904_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Max_mDEBDE9D04A4222E9DE3853DDCFD9C56701E177E3_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_gshared (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Inequality_m4A744AFAA7AFAE454104F1EA82307C78EA4222D7_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_m718196B315B3EC9B685B3A733003BFD54AE273B1_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_m607C2128826AF679554E6CC8765039720427FB8C_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2F3D197EDE8FB1866B2FB0B0DC4B52ABDC76BBC7_gshared (int32_t ___0_value1, uint8_t ___1_value2, int16_t ___2_value3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_GetHashCode_mECD04F0BC1C2F37E40C1BD13E582270D25F330CF_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isUnknown_m6BD84A537288F85E58C73C260FB75FE29BFF8800_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isParam_m606956C799372B55B3F4DB0121CFD212A80009CF_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_gshared_inline (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_gshared_inline (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_mB0A6763E4631DEEE3C10471F6BE6B13548EED176_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_mD3F7B1FDCE0A9C42F67848AED19B33AC917CC382_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_mBC8E66FD7B29CB12247A057CE158A9311FF29A4C_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, int32_t ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m1D96E287AF4D2B188701297D3C3895C9A8234D51_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m9299D4E42910DAEBF33F3EB434079E7DB9D1B8ED_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Eq_m8887AB216ACB1BA814D6BAFC37571CAF6E678E5E_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Ge_m8BDF3D81EE7ACED649B93FA322A594DF1A919CC1_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Le_mCA7CDCD54DFE5489815558DB921C805022124C91_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Gt_m3E0D693A83E9A7E7D75FC4A0C64845ECF1E5B3F0_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Lt_m2ECB7FE9F31BBEC48DD494AAF00101DDFAB587D8_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_BitwiseAnd_m092DD66557949F020017541C045894DE992BAED2_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_BitwiseOr_m8BD4ECFB21DE896A7D654E37BEC9A2816BD90F7C_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_BitwiseXor_mA1E00C9ED1E7C4C0709A44F86AB9FB333FAD865F_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_BitwiseNot_m67D70D61C49E362CE98F45F8B8E9F04EA2AECB5A_gshared (int32_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Neg_mB5BFFDD9226AF51687EAEFAF6293496F6D4736CE_gshared (int32_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Add_mD76E79A6954B552C1B2A09A06D52493A4044FA52_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Sub_m07EB34610AE04BB412061BC49EE3171BB71C3B30_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Mul_m94386F77623E4FD8D63F3ECB790AA4858658685F_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Div_m08600FDEB0AFBF4A0A737CF049BA3AF62A222856_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Sign_mF33775CC00008293947484CEEB85AD29C31B8BA5_gshared (int32_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Pow_m9E717B21D8009823D8D25523601A33ADBE1483A5_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Mod_m29BF372DA954F8A7B56A92E7CDB0F4721A66EAC8_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_FMod_mB9DDE3A58B6D87B82317FE2C86C0DA1C9D5AF116_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Min_mD13FD101B0E117154786B5C3B2AF4BF779DA1F3D_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Max_mA2D71CB9A87CE1745394134336B8E20DDE05D280_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Inequality_m75DE442B872ED61AF4BEB3D433C28692AA611AF1_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_mB0A1E48449E427B516D5F3F821E8647F15FE8C38_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_mCD03DC85FE77E76E91B87CE91971AEBDEACB36FA_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC502FDDE8E91D26ED71C082C7309522F826AA0B_gshared (int32_t ___0_value1, uint8_t ___1_value2, int32_t ___2_value3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_GetHashCode_mFE6F2F12A2E0E8D8E748A951C3319568613C7645_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isUnknown_mB6AD5F88AE1B7B2FFCE6EA6494A38A44D6654701_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isParam_m414393843CD945BD7973B2CC5EB08DE1A062BAC1_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3_gshared (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_gshared_inline (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_gshared_inline (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m17EADF9E737347D305917C867BAF0712D454C632_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m1FE1004E999B5E2CA25B4469B7994E9323106B25_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m31695DDAD67094E53A3D868DF4D643EE9C4017FE_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, float ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_mD0A0F9ABFC75DF3884545FAF7C91BDD0024A9545_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m9E6A44E67BF24680C9A43D08A42FB506211D072B_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Eq_m1ECE8A9F03FB44B9035EACF7DBA48BB1D3BBF966_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Ge_mF01C944B8B0ABD60340FA74CE70DB1A545EC003E_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Le_mF00FD5C9226820A6CA724FCE9DAE6772F15F1189_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Gt_m51183E2FBF428C572CED1D3440AA075CC7648891_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Lt_m90AC622721F3D9D5CC3C8BC21A996CB22B91FE4B_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_BitwiseAnd_m6A948A7950AFBD040B5C34034477BA232B45C3D9_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_BitwiseOr_m53C5B8C91A4A5D3FA05DB3629F98688D17EDA041_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_BitwiseXor_m61AED6BEC191CC6A4BFB4D1379E24C0A96E503C8_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_BitwiseNot_mCB6320DA842964CB74F991F9B9DA7DE3E90635EC_gshared (float ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Neg_mA298AF6377E0D1EC084AE91CEB443FD7D0948670_gshared (float ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Add_mB23A8306AFD9760850C517E17D411BD4EBD694DA_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Sub_m00AFC9865F47A4DFA1D8A5DFB8E2FBB6A1627D97_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Mul_m98A292FFB661A454C57C276675EE91FD0B153597_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Div_mD37869918E8D019D9236FFF812D795787E09E458_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Sign_mE8FC209D133404F664C2F162E5906A5AB67F3C48_gshared (float ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Pow_m29A68C720FD6B4181BD79CE2F622A3321180B790_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Mod_m9E737A0F1F2677A7470CB8DE1EA71A3B523748CD_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_FMod_mF4B1C072F6E8D2809FC80354A329F60654E008D9_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Min_mAC4ADF583A8149F6970B967EA217991F21707416_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Max_mD4EE7C9B024683C2BBF542647122C62B502E0340_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Inequality_m82162E35073E9AF9B3F45230D7BEB55B9BFF9F55_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_mC0F3B885A66149186500EA8F6C18E2EB66CD9978_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_mC389771AAA42E8923DFD441B4176C0FFBC63727A_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m04A4FE8747D9A75A919DC17CC234D9B833844C28_gshared (int32_t ___0_value1, uint8_t ___1_value2, float ___2_value3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_GetHashCode_m1F1318B629A5A9AB2C31697B1DB3D1409C7F64CA_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isUnknown_m8BDA52B059F9295FCC96E897A18D612F29C92E04_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isValue_m8D8096FDA16E14222B1007D89EAFFBC9FDD1271D_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isParam_m1BD14282AF94C1F610BBBCF94A5A464516A2861B_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartialTensorElement_1_get_value_m6508EA2B99149218FE1C7186B612FA99C6142756_gshared_inline (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_mE92368251B6A3D1BB0E70270C653536EF1DC8435_gshared_inline (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m3E886AF17718BE22260C6931AD5B3A84BCD3E8B7_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_mA23D773CBAF651779616E9F9C903B81FF8C2BBC5_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m7A3A53DD6CBE909375B43486CC2B2291019B7354_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Il2CppFullySharedGenericStruct ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m8EFC3315936A7FE81DDC26B0B9C048AC9A7F1A5D_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m49FFF9CA8F9666BE12C7FFF01616813A6F94336A_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_GetHashCode_mAE28ECA700BB4E64093B8A60E7A9011231E5FD61_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorUtils_ToDataType_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE87ABD88E054DC20D2E8F983C2F9900E810836BD_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_shape, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensorElement_1_Value_mCBE3F751AF3B278D296D60D8699B9B5BC7EC6C62_gshared (uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1_set_Item_m3AF393C6B15E59240E4A33ECB8C575F0A62E0913_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, int32_t ___0_d0, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, int32_t ___0_d0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensorElement_1_MaxDefinedElement_mD7DCCB3EB6D280EF70B7569365F442A1C9E070F9_gshared (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___0_a, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isValue_m7389516003FEA9656DBE189B9402C5F72FEABF07_gshared (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensorElement_1_get_Unknown_mFF102D7989E2D8943EC374F2A9D2EC5BC9F93B13_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PartialTensor_1_ToArray_mE6648684A1E20CA5754DD9D36535C27ADCCA7AFB_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tensor_1__ctor_mAD78C6473A79346E78EA2A02F0C7BA3C3D8F1482_gshared (Tensor_1_t32474E941CB35672DFCB1269F4D78143D87621FF* __this, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_shape, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_srcData, int32_t ___2_dataStartIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_value_m2530B78347A992656D164951085D073D5E499CF0_gshared_inline (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensor_Get_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC0BA59FB32DF433F9D8466A22264FCF846736733_gshared (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_Set_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m657DDE8748B268B6A9507D7F69C9C36B6ED92C47_gshared (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___1_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_mB3A4F956EC878E3C0206C1884D42E04B785D7B49_gshared (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Equality_m815EFE07CCC904A24A887C3EEC02E07B428D64CA_gshared (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___0_a, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_mD89C2C26770C99E317E538EE135303974A53BE3B_gshared (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_mBFD124CED27E5AA726D77FBC781CC697C9A18C79_gshared (int32_t ___0_value1, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_GetHashCode_mC42BE2A52C4F6D3A2585B4633CD7B444C9A7D5F5_gshared (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277_gshared (int32_t ___0_value1, int32_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorUtils_ToDataType_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mEFD86FE16E49498B8CCE16009652442C0B93DF46_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_shape, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1_set_Item_mF104C924F4447F86162D60B9E025BD465B0455F4_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, int32_t ___0_d0, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, int32_t ___0_d0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_MaxDefinedElement_m663CE9E679337880AE3D12204B48E6BFA20E38F9_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* PartialTensor_1_ToArray_m1EFE5336B44F7AA27DC1C6EFE424723491667E79_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tensor_1__ctor_m06A441C24DB6F409C8CA578A95206669DD4B4795_gshared (Tensor_1_t0C31849F8BD32BA5F18DCDE3D00D25BADB38003C* __this, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_shape, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___1_srcData, int32_t ___2_dataStartIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensor_Get_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA41D5822AB23A229EE61C3D43B7B4F0FAC9C3C06_gshared (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_Set_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m991BDEAF33E8D27D725A18557C0F3C5E5AA6E367_gshared (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorUtils_ToDataType_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB27289BBFD368204C674E7166683EA312575FF48_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_shape, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1_set_Item_m2440A8D3F3E4A934D7AD5CDFEE12C7CE029E8E31_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, int32_t ___0_d0, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, int32_t ___0_d0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_MaxDefinedElement_mF5569DC38EA6984CE093B49E0F527AEE7B270FD2_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* PartialTensor_1_ToArray_m4472C488A5BF071A6F6111EE96182F8BB6D12A43_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tensor_1__ctor_mD6D1CDD15C1163DDE3EB938CB12EBE3898E28003_gshared (Tensor_1_t65B864E8272AE642C573473CC6901460AD6A3379* __this, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_shape, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_srcData, int32_t ___2_dataStartIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensor_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0FF091B145BF0BF2470F8B49FC3EA00281A8956C_gshared (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA33429A3B6E5356408FCE0D0A20E724A24A5694E_gshared (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_element, const RuntimeMethod* method) ;

inline bool PartialTensorElement_1_get_isUnknown_m90A18DDB9B38D8B16773142D78629A69B5258C1F (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, const RuntimeMethod*))PartialTensorElement_1_get_isUnknown_m90A18DDB9B38D8B16773142D78629A69B5258C1F_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02 (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, const RuntimeMethod*))PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isParam_m13B7331999D54743756EFD64CA99C0D144E26684 (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, const RuntimeMethod*))PartialTensorElement_1_get_isParam_m13B7331999D54743756EFD64CA99C0D144E26684_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
inline int16_t PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, const RuntimeMethod*))PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_gshared_inline)(__this, method);
}
inline uint8_t PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_inline (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, const RuntimeMethod*))PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23 (int16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline String_t* PartialTensorElement_1_ToString_m5D2031C164E472792EF0F28B973BAE92E726BE85 (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, const RuntimeMethod*))PartialTensorElement_1_ToString_m5D2031C164E472792EF0F28B973BAE92E726BE85_gshared)(__this, method);
}
inline String_t* Func_2_Invoke_mD7E298F192DECA9DAE0850030B0DF28BAFBB01B5_inline (Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* __this, uint8_t ___0_arg, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, uint8_t, const RuntimeMethod*))Func_2_Invoke_m701B8731756B976779D70FA9705B0FC2DFEAA0B6_gshared_inline)(__this, ___0_arg, method);
}
inline String_t* PartialTensorElement_1_ToString_m67B9156A702ADEEEB6A3CEC65FC174F49957569E (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, const RuntimeMethod*))PartialTensorElement_1_ToString_m67B9156A702ADEEEB6A3CEC65FC174F49957569E_gshared)(__this, ___0_SymbolicDimNaming, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
inline bool PartialTensorElement_1_Equals_m3DC3A60BC3B1DADF398763E7AFE6F564C926A3C5 (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, int16_t ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, int16_t, const RuntimeMethod*))PartialTensorElement_1_Equals_m3DC3A60BC3B1DADF398763E7AFE6F564C926A3C5_gshared)(__this, ___0_other, method);
}
inline bool PartialTensorElement_1_Equals_m72E57CD84F51A957732F8048B0F3A9344277925A (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, const RuntimeMethod*))PartialTensorElement_1_Equals_m72E57CD84F51A957732F8048B0F3A9344277925A_gshared)(__this, ___0_other, method);
}
inline bool PartialTensorElement_1_Equals_mDBAF6D00E7586708AA6D1C14A2FF4687B01EDA5D (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, RuntimeObject*, const RuntimeMethod*))PartialTensorElement_1_Equals_mDBAF6D00E7586708AA6D1C14A2FF4687B01EDA5D_gshared)(__this, ___0_obj, method);
}
inline bool PartialTensorElement_1_Eq_mB202EC75D1C36BCC39AFA62E04C298BCA08F24CB (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Eq_mB202EC75D1C36BCC39AFA62E04C298BCA08F24CB_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Ge_m789F9F2D761A888CE3E53822FE18F19AC415FFE3 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Ge_m789F9F2D761A888CE3E53822FE18F19AC415FFE3_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9 (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, const RuntimeMethod*))PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Le_mA43CB0474B22B23E8E9D4D1094F79B1ABE1633B9 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Le_mA43CB0474B22B23E8E9D4D1094F79B1ABE1633B9_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Gt_m6FFCA8DCA3C86EC06ACC7B7DFD11F6EB493D7CC8 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Gt_m6FFCA8DCA3C86EC06ACC7B7DFD11F6EB493D7CC8_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Lt_mA95F8093D156875609B83090894C8F14000B14B2 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Lt_mA95F8093D156875609B83090894C8F14000B14B2_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9 (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 (*) (const RuntimeMethod*))PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9_gshared)(method);
}
inline int16_t PartialTensorElement_1_BitwiseAnd_m009E7D5B3B99D7F47EFF358A2E6DBC381F360D40 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_BitwiseAnd_m009E7D5B3B99D7F47EFF358A2E6DBC381F360D40_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4 (int16_t ___0_value, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 (*) (int16_t, const RuntimeMethod*))PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4_gshared)(___0_value, method);
}
inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2 (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 (*) (const RuntimeMethod*))PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2_gshared)(method);
}
inline int16_t PartialTensorElement_1_BitwiseOr_mF2BD629B4D947159A6B40B601A23EBB8B8A2CDC5 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_BitwiseOr_mF2BD629B4D947159A6B40B601A23EBB8B8A2CDC5_gshared)(___0_a, ___1_b, method);
}
inline int16_t PartialTensorElement_1_BitwiseXor_mA756E11B0FCB54B78F6A68632796E35317DD1B60 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_BitwiseXor_mA756E11B0FCB54B78F6A68632796E35317DD1B60_gshared)(___0_a, ___1_b, method);
}
inline int16_t PartialTensorElement_1_BitwiseNot_m76F3829FE2B7FE022DDAB56E5BFA4AE855487637 (int16_t ___0_a, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, const RuntimeMethod*))PartialTensorElement_1_BitwiseNot_m76F3829FE2B7FE022DDAB56E5BFA4AE855487637_gshared)(___0_a, method);
}
inline int16_t PartialTensorElement_1_Neg_mBACB4AB7A14E13B95E23E37D11662A322F320018 (int16_t ___0_a, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, const RuntimeMethod*))PartialTensorElement_1_Neg_mBACB4AB7A14E13B95E23E37D11662A322F320018_gshared)(___0_a, method);
}
inline int16_t PartialTensorElement_1_Add_m52DE3CB734A271606E38AD7F6EF704DB3AD64BE9 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Add_m52DE3CB734A271606E38AD7F6EF704DB3AD64BE9_gshared)(___0_a, ___1_b, method);
}
inline int16_t PartialTensorElement_1_Sub_m45FCF57F4714A82138B244E3548C064DADE3A1A1 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Sub_m45FCF57F4714A82138B244E3548C064DADE3A1A1_gshared)(___0_a, ___1_b, method);
}
inline int16_t PartialTensorElement_1_Mul_mE5CBA3B481D8FF28FD61480912E6A4D6DE78CEFF (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Mul_mE5CBA3B481D8FF28FD61480912E6A4D6DE78CEFF_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1 (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 (*) (const RuntimeMethod*))PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, const RuntimeMethod* method) ;
inline int16_t PartialTensorElement_1_Div_m308E451761C70688CF784B4051787B7678F11789 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Div_m308E451761C70688CF784B4051787B7678F11789_gshared)(___0_a, ___1_b, method);
}
inline int16_t PartialTensorElement_1_Sign_m86772926A29D0A3F367D43145F9FC435D6D2255C (int16_t ___0_a, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, const RuntimeMethod*))PartialTensorElement_1_Sign_m86772926A29D0A3F367D43145F9FC435D6D2255C_gshared)(___0_a, method);
}
inline int16_t PartialTensorElement_1_Pow_m4FAA90C13CB37ADAEFB10CFD1FDE1CF4377C01AF (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Pow_m4FAA90C13CB37ADAEFB10CFD1FDE1CF4377C01AF_gshared)(___0_a, ___1_b, method);
}
inline int16_t PartialTensorElement_1_Mod_mD98111690441BCB67FC08D1B26B4C2AE6A917B20 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Mod_mD98111690441BCB67FC08D1B26B4C2AE6A917B20_gshared)(___0_a, ___1_b, method);
}
inline int16_t PartialTensorElement_1_FMod_mE744283F4F9758E04EFE6984330A98FDFD244EE1 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_FMod_mE744283F4F9758E04EFE6984330A98FDFD244EE1_gshared)(___0_a, ___1_b, method);
}
inline int16_t PartialTensorElement_1_Min_mF4C9AC31858773761D884FAD23B6971C8AE3B904 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Min_mF4C9AC31858773761D884FAD23B6971C8AE3B904_gshared)(___0_a, ___1_b, method);
}
inline int16_t PartialTensorElement_1_Max_mDEBDE9D04A4222E9DE3853DDCFD9C56701E177E3 (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int16_t, int16_t, const RuntimeMethod*))PartialTensorElement_1_Max_mDEBDE9D04A4222E9DE3853DDCFD9C56701E177E3_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E (int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (int32_t, const RuntimeMethod*))PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_gshared)(___0_value, method);
}
inline bool PartialTensorElement_1_op_Inequality_m4A744AFAA7AFAE454104F1EA82307C78EA4222D7 (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, const RuntimeMethod*))PartialTensorElement_1_op_Inequality_m4A744AFAA7AFAE454104F1EA82307C78EA4222D7_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (const RuntimeMethod*))PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_gshared)(method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_m718196B315B3EC9B685B3A733003BFD54AE273B1 (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, const RuntimeMethod*))PartialTensorElement_1_Gt_m718196B315B3EC9B685B3A733003BFD54AE273B1_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_m607C2128826AF679554E6CC8765039720427FB8C (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, const RuntimeMethod*))PartialTensorElement_1_Ge_m607C2128826AF679554E6CC8765039720427FB8C_gshared)(___0_a, ___1_b, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
inline int32_t HashCode_Combine_TisElementType_tEB6A0613EEB254ABA7D12BEFB4803017A6B26E94_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mBA8061DCF3D8E648A0FD8F1D200A3692D36CCFB2 (int32_t ___0_value1, uint8_t ___1_value2, int16_t ___2_value3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, uint8_t, int16_t, const RuntimeMethod*))HashCode_Combine_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2F3D197EDE8FB1866B2FB0B0DC4B52ABDC76BBC7_gshared)(___0_value1, ___1_value2, ___2_value3, method);
}
inline int32_t PartialTensorElement_1_GetHashCode_mECD04F0BC1C2F37E40C1BD13E582270D25F330CF (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*, const RuntimeMethod*))PartialTensorElement_1_GetHashCode_mECD04F0BC1C2F37E40C1BD13E582270D25F330CF_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isUnknown_m6BD84A537288F85E58C73C260FB75FE29BFF8800 (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, const RuntimeMethod*))PartialTensorElement_1_get_isUnknown_m6BD84A537288F85E58C73C260FB75FE29BFF8800_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, const RuntimeMethod*))PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isParam_m606956C799372B55B3F4DB0121CFD212A80009CF (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, const RuntimeMethod*))PartialTensorElement_1_get_isParam_m606956C799372B55B3F4DB0121CFD212A80009CF_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
inline int32_t PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, const RuntimeMethod*))PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_gshared_inline)(__this, method);
}
inline uint8_t PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_inline (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, const RuntimeMethod*))PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
inline String_t* PartialTensorElement_1_ToString_mB0A6763E4631DEEE3C10471F6BE6B13548EED176 (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, const RuntimeMethod*))PartialTensorElement_1_ToString_mB0A6763E4631DEEE3C10471F6BE6B13548EED176_gshared)(__this, method);
}
inline String_t* PartialTensorElement_1_ToString_mD3F7B1FDCE0A9C42F67848AED19B33AC917CC382 (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, const RuntimeMethod*))PartialTensorElement_1_ToString_mD3F7B1FDCE0A9C42F67848AED19B33AC917CC382_gshared)(__this, ___0_SymbolicDimNaming, method);
}
inline bool PartialTensorElement_1_Equals_mBC8E66FD7B29CB12247A057CE158A9311FF29A4C (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, int32_t ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, int32_t, const RuntimeMethod*))PartialTensorElement_1_Equals_mBC8E66FD7B29CB12247A057CE158A9311FF29A4C_gshared)(__this, ___0_other, method);
}
inline bool PartialTensorElement_1_Equals_m1D96E287AF4D2B188701297D3C3895C9A8234D51 (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, const RuntimeMethod*))PartialTensorElement_1_Equals_m1D96E287AF4D2B188701297D3C3895C9A8234D51_gshared)(__this, ___0_other, method);
}
inline bool PartialTensorElement_1_Equals_m9299D4E42910DAEBF33F3EB434079E7DB9D1B8ED (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, RuntimeObject*, const RuntimeMethod*))PartialTensorElement_1_Equals_m9299D4E42910DAEBF33F3EB434079E7DB9D1B8ED_gshared)(__this, ___0_obj, method);
}
inline bool PartialTensorElement_1_Eq_m8887AB216ACB1BA814D6BAFC37571CAF6E678E5E (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Eq_m8887AB216ACB1BA814D6BAFC37571CAF6E678E5E_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Ge_m8BDF3D81EE7ACED649B93FA322A594DF1A919CC1 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Ge_m8BDF3D81EE7ACED649B93FA322A594DF1A919CC1_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607 (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, const RuntimeMethod*))PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Le_mCA7CDCD54DFE5489815558DB921C805022124C91 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Le_mCA7CDCD54DFE5489815558DB921C805022124C91_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Gt_m3E0D693A83E9A7E7D75FC4A0C64845ECF1E5B3F0 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Gt_m3E0D693A83E9A7E7D75FC4A0C64845ECF1E5B3F0_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Lt_m2ECB7FE9F31BBEC48DD494AAF00101DDFAB587D8 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Lt_m2ECB7FE9F31BBEC48DD494AAF00101DDFAB587D8_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33 (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (const RuntimeMethod*))PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33_gshared)(method);
}
inline int32_t PartialTensorElement_1_BitwiseAnd_m092DD66557949F020017541C045894DE992BAED2 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_BitwiseAnd_m092DD66557949F020017541C045894DE992BAED2_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_BitwiseOr_m8BD4ECFB21DE896A7D654E37BEC9A2816BD90F7C (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_BitwiseOr_m8BD4ECFB21DE896A7D654E37BEC9A2816BD90F7C_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_BitwiseXor_mA1E00C9ED1E7C4C0709A44F86AB9FB333FAD865F (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_BitwiseXor_mA1E00C9ED1E7C4C0709A44F86AB9FB333FAD865F_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_BitwiseNot_m67D70D61C49E362CE98F45F8B8E9F04EA2AECB5A (int32_t ___0_a, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))PartialTensorElement_1_BitwiseNot_m67D70D61C49E362CE98F45F8B8E9F04EA2AECB5A_gshared)(___0_a, method);
}
inline int32_t PartialTensorElement_1_Neg_mB5BFFDD9226AF51687EAEFAF6293496F6D4736CE (int32_t ___0_a, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))PartialTensorElement_1_Neg_mB5BFFDD9226AF51687EAEFAF6293496F6D4736CE_gshared)(___0_a, method);
}
inline int32_t PartialTensorElement_1_Add_mD76E79A6954B552C1B2A09A06D52493A4044FA52 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Add_mD76E79A6954B552C1B2A09A06D52493A4044FA52_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_Sub_m07EB34610AE04BB412061BC49EE3171BB71C3B30 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Sub_m07EB34610AE04BB412061BC49EE3171BB71C3B30_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_Mul_m94386F77623E4FD8D63F3ECB790AA4858658685F (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Mul_m94386F77623E4FD8D63F3ECB790AA4858658685F_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61 (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (const RuntimeMethod*))PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61_gshared)(method);
}
inline int32_t PartialTensorElement_1_Div_m08600FDEB0AFBF4A0A737CF049BA3AF62A222856 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Div_m08600FDEB0AFBF4A0A737CF049BA3AF62A222856_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_Sign_mF33775CC00008293947484CEEB85AD29C31B8BA5 (int32_t ___0_a, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))PartialTensorElement_1_Sign_mF33775CC00008293947484CEEB85AD29C31B8BA5_gshared)(___0_a, method);
}
inline int32_t PartialTensorElement_1_Pow_m9E717B21D8009823D8D25523601A33ADBE1483A5 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Pow_m9E717B21D8009823D8D25523601A33ADBE1483A5_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_Mod_m29BF372DA954F8A7B56A92E7CDB0F4721A66EAC8 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Mod_m29BF372DA954F8A7B56A92E7CDB0F4721A66EAC8_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_FMod_mB9DDE3A58B6D87B82317FE2C86C0DA1C9D5AF116 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_FMod_mB9DDE3A58B6D87B82317FE2C86C0DA1C9D5AF116_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_Min_mD13FD101B0E117154786B5C3B2AF4BF779DA1F3D (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Min_mD13FD101B0E117154786B5C3B2AF4BF779DA1F3D_gshared)(___0_a, ___1_b, method);
}
inline int32_t PartialTensorElement_1_Max_mA2D71CB9A87CE1745394134336B8E20DDE05D280 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))PartialTensorElement_1_Max_mA2D71CB9A87CE1745394134336B8E20DDE05D280_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_op_Inequality_m75DE442B872ED61AF4BEB3D433C28692AA611AF1 (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, const RuntimeMethod*))PartialTensorElement_1_op_Inequality_m75DE442B872ED61AF4BEB3D433C28692AA611AF1_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_mB0A1E48449E427B516D5F3F821E8647F15FE8C38 (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, const RuntimeMethod*))PartialTensorElement_1_Gt_mB0A1E48449E427B516D5F3F821E8647F15FE8C38_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_mCD03DC85FE77E76E91B87CE91971AEBDEACB36FA (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, const RuntimeMethod*))PartialTensorElement_1_Ge_mCD03DC85FE77E76E91B87CE91971AEBDEACB36FA_gshared)(___0_a, ___1_b, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
inline int32_t HashCode_Combine_TisElementType_tEB6A0613EEB254ABA7D12BEFB4803017A6B26E94_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m820291463ECAB55CD9316E1BA1559A35783D898F (int32_t ___0_value1, uint8_t ___1_value2, int32_t ___2_value3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, uint8_t, int32_t, const RuntimeMethod*))HashCode_Combine_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC502FDDE8E91D26ED71C082C7309522F826AA0B_gshared)(___0_value1, ___1_value2, ___2_value3, method);
}
inline int32_t PartialTensorElement_1_GetHashCode_mFE6F2F12A2E0E8D8E748A951C3319568613C7645 (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*, const RuntimeMethod*))PartialTensorElement_1_GetHashCode_mFE6F2F12A2E0E8D8E748A951C3319568613C7645_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isUnknown_mB6AD5F88AE1B7B2FFCE6EA6494A38A44D6654701 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, const RuntimeMethod*))PartialTensorElement_1_get_isUnknown_mB6AD5F88AE1B7B2FFCE6EA6494A38A44D6654701_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, const RuntimeMethod*))PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isParam_m414393843CD945BD7973B2CC5EB08DE1A062BAC1 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, const RuntimeMethod*))PartialTensorElement_1_get_isParam_m414393843CD945BD7973B2CC5EB08DE1A062BAC1_gshared)(__this, method);
}
inline PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3 (float ___0_value, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 (*) (float, const RuntimeMethod*))PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3_gshared)(___0_value, method);
}
inline float PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method)
{
	return ((  float (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, const RuntimeMethod*))PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_gshared_inline)(__this, method);
}
inline uint8_t PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_inline (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, const RuntimeMethod*))PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
inline String_t* PartialTensorElement_1_ToString_m17EADF9E737347D305917C867BAF0712D454C632 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, const RuntimeMethod*))PartialTensorElement_1_ToString_m17EADF9E737347D305917C867BAF0712D454C632_gshared)(__this, method);
}
inline String_t* PartialTensorElement_1_ToString_m1FE1004E999B5E2CA25B4469B7994E9323106B25 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, const RuntimeMethod*))PartialTensorElement_1_ToString_m1FE1004E999B5E2CA25B4469B7994E9323106B25_gshared)(__this, ___0_SymbolicDimNaming, method);
}
inline bool PartialTensorElement_1_Equals_m31695DDAD67094E53A3D868DF4D643EE9C4017FE (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, float ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, float, const RuntimeMethod*))PartialTensorElement_1_Equals_m31695DDAD67094E53A3D868DF4D643EE9C4017FE_gshared)(__this, ___0_other, method);
}
inline bool PartialTensorElement_1_Equals_mD0A0F9ABFC75DF3884545FAF7C91BDD0024A9545 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, const RuntimeMethod*))PartialTensorElement_1_Equals_mD0A0F9ABFC75DF3884545FAF7C91BDD0024A9545_gshared)(__this, ___0_other, method);
}
inline bool PartialTensorElement_1_Equals_m9E6A44E67BF24680C9A43D08A42FB506211D072B (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, RuntimeObject*, const RuntimeMethod*))PartialTensorElement_1_Equals_m9E6A44E67BF24680C9A43D08A42FB506211D072B_gshared)(__this, ___0_obj, method);
}
inline bool PartialTensorElement_1_Eq_m1ECE8A9F03FB44B9035EACF7DBA48BB1D3BBF966 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Eq_m1ECE8A9F03FB44B9035EACF7DBA48BB1D3BBF966_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Ge_mF01C944B8B0ABD60340FA74CE70DB1A545EC003E (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Ge_mF01C944B8B0ABD60340FA74CE70DB1A545EC003E_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, const RuntimeMethod*))PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Le_mF00FD5C9226820A6CA724FCE9DAE6772F15F1189 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Le_mF00FD5C9226820A6CA724FCE9DAE6772F15F1189_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Gt_m51183E2FBF428C572CED1D3440AA075CC7648891 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Gt_m51183E2FBF428C572CED1D3440AA075CC7648891_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_Lt_m90AC622721F3D9D5CC3C8BC21A996CB22B91FE4B (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Lt_m90AC622721F3D9D5CC3C8BC21A996CB22B91FE4B_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102 (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 (*) (const RuntimeMethod*))PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102_gshared)(method);
}
inline float PartialTensorElement_1_BitwiseAnd_m6A948A7950AFBD040B5C34034477BA232B45C3D9 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_BitwiseAnd_m6A948A7950AFBD040B5C34034477BA232B45C3D9_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 (*) (const RuntimeMethod*))PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD_gshared)(method);
}
inline float PartialTensorElement_1_BitwiseOr_m53C5B8C91A4A5D3FA05DB3629F98688D17EDA041 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_BitwiseOr_m53C5B8C91A4A5D3FA05DB3629F98688D17EDA041_gshared)(___0_a, ___1_b, method);
}
inline float PartialTensorElement_1_BitwiseXor_m61AED6BEC191CC6A4BFB4D1379E24C0A96E503C8 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_BitwiseXor_m61AED6BEC191CC6A4BFB4D1379E24C0A96E503C8_gshared)(___0_a, ___1_b, method);
}
inline float PartialTensorElement_1_BitwiseNot_mCB6320DA842964CB74F991F9B9DA7DE3E90635EC (float ___0_a, const RuntimeMethod* method)
{
	return ((  float (*) (float, const RuntimeMethod*))PartialTensorElement_1_BitwiseNot_mCB6320DA842964CB74F991F9B9DA7DE3E90635EC_gshared)(___0_a, method);
}
inline float PartialTensorElement_1_Neg_mA298AF6377E0D1EC084AE91CEB443FD7D0948670 (float ___0_a, const RuntimeMethod* method)
{
	return ((  float (*) (float, const RuntimeMethod*))PartialTensorElement_1_Neg_mA298AF6377E0D1EC084AE91CEB443FD7D0948670_gshared)(___0_a, method);
}
inline float PartialTensorElement_1_Add_mB23A8306AFD9760850C517E17D411BD4EBD694DA (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Add_mB23A8306AFD9760850C517E17D411BD4EBD694DA_gshared)(___0_a, ___1_b, method);
}
inline float PartialTensorElement_1_Sub_m00AFC9865F47A4DFA1D8A5DFB8E2FBB6A1627D97 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Sub_m00AFC9865F47A4DFA1D8A5DFB8E2FBB6A1627D97_gshared)(___0_a, ___1_b, method);
}
inline float PartialTensorElement_1_Mul_m98A292FFB661A454C57C276675EE91FD0B153597 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Mul_m98A292FFB661A454C57C276675EE91FD0B153597_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295 (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 (*) (const RuntimeMethod*))PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295_gshared)(method);
}
inline float PartialTensorElement_1_Div_mD37869918E8D019D9236FFF812D795787E09E458 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Div_mD37869918E8D019D9236FFF812D795787E09E458_gshared)(___0_a, ___1_b, method);
}
inline float PartialTensorElement_1_Sign_mE8FC209D133404F664C2F162E5906A5AB67F3C48 (float ___0_a, const RuntimeMethod* method)
{
	return ((  float (*) (float, const RuntimeMethod*))PartialTensorElement_1_Sign_mE8FC209D133404F664C2F162E5906A5AB67F3C48_gshared)(___0_a, method);
}
inline float PartialTensorElement_1_Pow_m29A68C720FD6B4181BD79CE2F622A3321180B790 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Pow_m29A68C720FD6B4181BD79CE2F622A3321180B790_gshared)(___0_a, ___1_b, method);
}
inline float PartialTensorElement_1_Mod_m9E737A0F1F2677A7470CB8DE1EA71A3B523748CD (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Mod_m9E737A0F1F2677A7470CB8DE1EA71A3B523748CD_gshared)(___0_a, ___1_b, method);
}
inline float PartialTensorElement_1_FMod_mF4B1C072F6E8D2809FC80354A329F60654E008D9 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_FMod_mF4B1C072F6E8D2809FC80354A329F60654E008D9_gshared)(___0_a, ___1_b, method);
}
inline float PartialTensorElement_1_Min_mAC4ADF583A8149F6970B967EA217991F21707416 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Min_mAC4ADF583A8149F6970B967EA217991F21707416_gshared)(___0_a, ___1_b, method);
}
inline float PartialTensorElement_1_Max_mD4EE7C9B024683C2BBF542647122C62B502E0340 (float ___0_a, float ___1_b, const RuntimeMethod* method)
{
	return ((  float (*) (float, float, const RuntimeMethod*))PartialTensorElement_1_Max_mD4EE7C9B024683C2BBF542647122C62B502E0340_gshared)(___0_a, ___1_b, method);
}
inline bool PartialTensorElement_1_op_Inequality_m82162E35073E9AF9B3F45230D7BEB55B9BFF9F55 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, const RuntimeMethod*))PartialTensorElement_1_op_Inequality_m82162E35073E9AF9B3F45230D7BEB55B9BFF9F55_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_mC0F3B885A66149186500EA8F6C18E2EB66CD9978 (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, const RuntimeMethod*))PartialTensorElement_1_Gt_mC0F3B885A66149186500EA8F6C18E2EB66CD9978_gshared)(___0_a, ___1_b, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_mC389771AAA42E8923DFD441B4176C0FFBC63727A (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5, const RuntimeMethod*))PartialTensorElement_1_Ge_mC389771AAA42E8923DFD441B4176C0FFBC63727A_gshared)(___0_a, ___1_b, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_fmod_mB41974736F5A2C3914BCEE03D01664819361782A_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
inline int32_t HashCode_Combine_TisElementType_tEB6A0613EEB254ABA7D12BEFB4803017A6B26E94_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA06B85B688DD80503E501FC5CA8F82B148A3CF20 (int32_t ___0_value1, uint8_t ___1_value2, float ___2_value3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, uint8_t, float, const RuntimeMethod*))HashCode_Combine_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m04A4FE8747D9A75A919DC17CC234D9B833844C28_gshared)(___0_value1, ___1_value2, ___2_value3, method);
}
inline int32_t PartialTensorElement_1_GetHashCode_m1F1318B629A5A9AB2C31697B1DB3D1409C7F64CA (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*, const RuntimeMethod*))PartialTensorElement_1_GetHashCode_m1F1318B629A5A9AB2C31697B1DB3D1409C7F64CA_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isUnknown_m8BDA52B059F9295FCC96E897A18D612F29C92E04 (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))PartialTensorElement_1_get_isUnknown_m8BDA52B059F9295FCC96E897A18D612F29C92E04_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isValue_m8D8096FDA16E14222B1007D89EAFFBC9FDD1271D (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))PartialTensorElement_1_get_isValue_m8D8096FDA16E14222B1007D89EAFFBC9FDD1271D_gshared)(__this, method);
}
inline bool PartialTensorElement_1_get_isParam_m1BD14282AF94C1F610BBBCF94A5A464516A2861B (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))PartialTensorElement_1_get_isParam_m1BD14282AF94C1F610BBBCF94A5A464516A2861B_gshared)(__this, method);
}
inline void PartialTensorElement_1_get_value_m6508EA2B99149218FE1C7186B612FA99C6142756_inline (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))PartialTensorElement_1_get_value_m6508EA2B99149218FE1C7186B612FA99C6142756_gshared_inline)((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)__this, il2cppRetVal, method);
}
inline uint8_t PartialTensorElement_1_get_param_mE92368251B6A3D1BB0E70270C653536EF1DC8435_inline (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))PartialTensorElement_1_get_param_mE92368251B6A3D1BB0E70270C653536EF1DC8435_gshared_inline)(__this, method);
}
inline String_t* PartialTensorElement_1_ToString_m3E886AF17718BE22260C6931AD5B3A84BCD3E8B7 (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))PartialTensorElement_1_ToString_m3E886AF17718BE22260C6931AD5B3A84BCD3E8B7_gshared)(__this, method);
}
inline String_t* PartialTensorElement_1_ToString_mA23D773CBAF651779616E9F9C903B81FF8C2BBC5 (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, const RuntimeMethod*))PartialTensorElement_1_ToString_mA23D773CBAF651779616E9F9C903B81FF8C2BBC5_gshared)(__this, ___0_SymbolicDimNaming, method);
}
inline bool PartialTensorElement_1_Equals_m7A3A53DD6CBE909375B43486CC2B2291019B7354 (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Il2CppFullySharedGenericStruct ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))PartialTensorElement_1_Equals_m7A3A53DD6CBE909375B43486CC2B2291019B7354_gshared)((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)__this, ___0_other, method);
}
inline bool PartialTensorElement_1_Equals_m8EFC3315936A7FE81DDC26B0B9C048AC9A7F1A5D (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, const RuntimeMethod*))PartialTensorElement_1_Equals_m8EFC3315936A7FE81DDC26B0B9C048AC9A7F1A5D_gshared)((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)__this, ___0_other, method);
}
inline bool PartialTensorElement_1_Equals_m49FFF9CA8F9666BE12C7FFF01616813A6F94336A (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, RuntimeObject*, const RuntimeMethod*))PartialTensorElement_1_Equals_m49FFF9CA8F9666BE12C7FFF01616813A6F94336A_gshared)(__this, ___0_obj, method);
}
inline int32_t PartialTensorElement_1_GetHashCode_mAE28ECA700BB4E64093B8A60E7A9011231E5FD61 (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))PartialTensorElement_1_GetHashCode_mAE28ECA700BB4E64093B8A60E7A9011231E5FD61_gshared)(__this, method);
}
inline int32_t AllocatorUtils_ToDataType_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE87ABD88E054DC20D2E8F983C2F9900E810836BD (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))AllocatorUtils_ToDataType_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE87ABD88E054DC20D2E8F983C2F9900E810836BD_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor__ctor_m6238FD98606E33612500826063946157BB4451D3 (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_dataType, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___1_shape, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicTensorShape_IsStatic_m39BBEB1B63848E7E96864C1759039F6C36EDEC4F (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicTensorDim_op_LessThanOrEqual_m8D7D4138A386B73F28BAC3D94658A4DA1664B344 (DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___0_d, int32_t ___1_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline (DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E DynamicTensorShape_get_DynamicRank_m8F1FD8E6DEF8096A8C7AF1798A039EB0DFF1A658 (const RuntimeMethod* method) ;
inline void PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7 (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_shape, const RuntimeMethod* method)
{
	((  void (*) (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E, const RuntimeMethod*))PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7_gshared)(__this, ___0_shape, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicTensorShape__ctor_mFF2F2E7D762213871A73FA122A4A651D92D480D2 (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_other, const RuntimeMethod* method) ;
inline PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensorElement_1_Value_mCBE3F751AF3B278D296D60D8699B9B5BC7EC6C62 (uint8_t ___0_value, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD (*) (uint8_t, const RuntimeMethod*))PartialTensorElement_1_Value_mCBE3F751AF3B278D296D60D8699B9B5BC7EC6C62_gshared)(___0_value, method);
}
inline void PartialTensor_1_set_Item_m3AF393C6B15E59240E4A33ECB8C575F0A62E0913 (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, int32_t ___0_d0, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___1_value, const RuntimeMethod* method)
{
	((  void (*) (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*, int32_t, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD, const RuntimeMethod*))PartialTensor_1_set_Item_m3AF393C6B15E59240E4A33ECB8C575F0A62E0913_gshared)(__this, ___0_d0, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E DynamicTensorShape_MaxDefinedShape_mF7AE60427721FDCC1E01E195CA7CA0EF236E0DE9 (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_a, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___1_b, const RuntimeMethod* method) ;
inline PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849 (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, int32_t ___0_d0, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD (*) (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*, int32_t, const RuntimeMethod*))PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849_gshared)(__this, ___0_d0, method);
}
inline PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensorElement_1_MaxDefinedElement_mD7DCCB3EB6D280EF70B7569365F442A1C9E070F9 (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___0_a, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___1_b, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD (*) (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD, const RuntimeMethod*))PartialTensorElement_1_MaxDefinedElement_mD7DCCB3EB6D280EF70B7569365F442A1C9E070F9_gshared)(___0_a, ___1_b, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0 (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicTensorShape_ReduceCommonFactors_mB1961AD7BF8F82AE725D07AD95C4AC306D17425B (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_a, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___1_b, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* ___2_reducedA, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* ___3_reducedB, bool ___4_reduceParams, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicTensorDim_get_isUnknown_mCA231982134E9614FF61489DA87C65C01D895D1B (DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 DynamicTensorDim_get_One_mCCE3BEC388900FAF48997076247EDBD60884038C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8 (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, int32_t ___0_axis, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicTensorDim_op_Equality_m410D5EFF0915012355AC6CADBA4074ED362C78AF (DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___0_a, DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 DynamicTensorDim_op_Multiply_mBEE9559613E02CDAB6BE2381B69742B25D05A19B (DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___0_a, DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicTensorDim_get_isValue_m012693C8E5922412211FCA74AE185900893AAD8D (DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicTensorShape_set_Item_mF33039B5CFB8387C708D159805116AFD2B70B709 (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, int32_t ___0_axis, DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 ___1_value, const RuntimeMethod* method) ;
inline bool PartialTensorElement_1_get_isValue_m7389516003FEA9656DBE189B9402C5F72FEABF07 (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD*, const RuntimeMethod*))PartialTensorElement_1_get_isValue_m7389516003FEA9656DBE189B9402C5F72FEABF07_gshared)(__this, method);
}
inline PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensorElement_1_get_Unknown_mFF102D7989E2D8943EC374F2A9D2EC5BC9F93B13 (const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD (*) (const RuntimeMethod*))PartialTensorElement_1_get_Unknown_mFF102D7989E2D8943EC374F2A9D2EC5BC9F93B13_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 DynamicTensorShape_ToTensorShape_m9C6807E3951BFFB7210A5438BF87E774BAF12A35 (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, const RuntimeMethod* method) ;
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PartialTensor_1_ToArray_mE6648684A1E20CA5754DD9D36535C27ADCCA7AFB (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*, const RuntimeMethod*))PartialTensor_1_ToArray_mE6648684A1E20CA5754DD9D36535C27ADCCA7AFB_gshared)(__this, method);
}
inline void Tensor_1__ctor_mAD78C6473A79346E78EA2A02F0C7BA3C3D8F1482 (Tensor_1_t32474E941CB35672DFCB1269F4D78143D87621FF* __this, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_shape, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_srcData, int32_t ___2_dataStartIndex, const RuntimeMethod* method)
{
	((  void (*) (Tensor_1_t32474E941CB35672DFCB1269F4D78143D87621FF*, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))Tensor_1__ctor_mAD78C6473A79346E78EA2A02F0C7BA3C3D8F1482_gshared)(__this, ___0_shape, ___1_srcData, ___2_dataStartIndex, method);
}
inline uint8_t PartialTensorElement_1_get_value_m2530B78347A992656D164951085D073D5E499CF0_inline (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD*, const RuntimeMethod*))PartialTensorElement_1_get_value_m2530B78347A992656D164951085D073D5E499CF0_gshared_inline)(__this, method);
}
inline PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensor_Get_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC0BA59FB32DF433F9D8466A22264FCF846736733 (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD (*) (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*, int32_t, const RuntimeMethod*))PartialTensor_Get_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC0BA59FB32DF433F9D8466A22264FCF846736733_gshared)(__this, ___0_index, method);
}
inline void PartialTensor_Set_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m657DDE8748B268B6A9507D7F69C9C36B6ED92C47 (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___1_element, const RuntimeMethod* method)
{
	((  void (*) (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*, int32_t, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD, const RuntimeMethod*))PartialTensor_Set_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m657DDE8748B268B6A9507D7F69C9C36B6ED92C47_gshared)(__this, ___0_index, ___1_element, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicTensorShape_op_Inequality_mCCA9433FAEF48A6167FD41B38E372E309E5789E7 (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_a, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___1_b, const RuntimeMethod* method) ;
inline bool PartialTensorElement_1_Equals_mB3A4F956EC878E3C0206C1884D42E04B785D7B49 (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD*, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD, const RuntimeMethod*))PartialTensorElement_1_Equals_mB3A4F956EC878E3C0206C1884D42E04B785D7B49_gshared)(__this, ___0_other, method);
}
inline bool PartialTensorElement_1_op_Equality_m815EFE07CCC904A24A887C3EEC02E07B428D64CA (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___0_a, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD, const RuntimeMethod*))PartialTensorElement_1_op_Equality_m815EFE07CCC904A24A887C3EEC02E07B428D64CA_gshared)(___0_a, ___1_b, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline String_t* PartialTensorElement_1_ToString_mD89C2C26770C99E317E538EE135303974A53BE3B (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD*, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, const RuntimeMethod*))PartialTensorElement_1_ToString_mD89C2C26770C99E317E538EE135303974A53BE3B_gshared)(__this, ___0_SymbolicDimNaming, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DynamicTensorShape_ToString_m3D90ADD327BB61433892DD46A674A3E7C7FD566A (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_GetParamName, const RuntimeMethod* method) ;
inline int32_t HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE (int32_t ___0_value1, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___1_value2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E, const RuntimeMethod*))HashCode_Combine_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_mBFD124CED27E5AA726D77FBC781CC697C9A18C79_gshared)(___0_value1, ___1_value2, method);
}
inline int32_t PartialTensorElement_1_GetHashCode_mC42BE2A52C4F6D3A2585B4633CD7B444C9A7D5F5 (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD*, const RuntimeMethod*))PartialTensorElement_1_GetHashCode_mC42BE2A52C4F6D3A2585B4633CD7B444C9A7D5F5_gshared)(__this, method);
}
inline int32_t HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277 (int32_t ___0_value1, int32_t ___1_value2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277_gshared)(___0_value1, ___1_value2, method);
}
inline int32_t AllocatorUtils_ToDataType_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mEFD86FE16E49498B8CCE16009652442C0B93DF46 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))AllocatorUtils_ToDataType_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mEFD86FE16E49498B8CCE16009652442C0B93DF46_gshared)(method);
}
inline void PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_shape, const RuntimeMethod* method)
{
	((  void (*) (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E, const RuntimeMethod*))PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F_gshared)(__this, ___0_shape, method);
}
inline void PartialTensor_1_set_Item_mF104C924F4447F86162D60B9E025BD465B0455F4 (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, int32_t ___0_d0, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*, int32_t, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, const RuntimeMethod*))PartialTensor_1_set_Item_mF104C924F4447F86162D60B9E025BD465B0455F4_gshared)(__this, ___0_d0, ___1_value, method);
}
inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8 (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, int32_t ___0_d0, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 (*) (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*, int32_t, const RuntimeMethod*))PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8_gshared)(__this, ___0_d0, method);
}
inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_MaxDefinedElement_m663CE9E679337880AE3D12204B48E6BFA20E38F9 (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 (*) (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, const RuntimeMethod*))PartialTensorElement_1_MaxDefinedElement_m663CE9E679337880AE3D12204B48E6BFA20E38F9_gshared)(___0_a, ___1_b, method);
}
inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* PartialTensor_1_ToArray_m1EFE5336B44F7AA27DC1C6EFE424723491667E79 (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* (*) (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*, const RuntimeMethod*))PartialTensor_1_ToArray_m1EFE5336B44F7AA27DC1C6EFE424723491667E79_gshared)(__this, method);
}
inline void Tensor_1__ctor_m06A441C24DB6F409C8CA578A95206669DD4B4795 (Tensor_1_t0C31849F8BD32BA5F18DCDE3D00D25BADB38003C* __this, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_shape, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___1_srcData, int32_t ___2_dataStartIndex, const RuntimeMethod* method)
{
	((  void (*) (Tensor_1_t0C31849F8BD32BA5F18DCDE3D00D25BADB38003C*, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, const RuntimeMethod*))Tensor_1__ctor_m06A441C24DB6F409C8CA578A95206669DD4B4795_gshared)(__this, ___0_shape, ___1_srcData, ___2_dataStartIndex, method);
}
inline PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensor_Get_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA41D5822AB23A229EE61C3D43B7B4F0FAC9C3C06 (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 (*) (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*, int32_t, const RuntimeMethod*))PartialTensor_Get_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA41D5822AB23A229EE61C3D43B7B4F0FAC9C3C06_gshared)(__this, ___0_index, method);
}
inline void PartialTensor_Set_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m991BDEAF33E8D27D725A18557C0F3C5E5AA6E367 (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_element, const RuntimeMethod* method)
{
	((  void (*) (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*, int32_t, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815, const RuntimeMethod*))PartialTensor_Set_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m991BDEAF33E8D27D725A18557C0F3C5E5AA6E367_gshared)(__this, ___0_index, ___1_element, method);
}
inline int32_t AllocatorUtils_ToDataType_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB27289BBFD368204C674E7166683EA312575FF48 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))AllocatorUtils_ToDataType_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB27289BBFD368204C674E7166683EA312575FF48_gshared)(method);
}
inline void PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9 (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_shape, const RuntimeMethod* method)
{
	((  void (*) (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E, const RuntimeMethod*))PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9_gshared)(__this, ___0_shape, method);
}
inline void PartialTensor_1_set_Item_m2440A8D3F3E4A934D7AD5CDFEE12C7CE029E8E31 (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, int32_t ___0_d0, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*, int32_t, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, const RuntimeMethod*))PartialTensor_1_set_Item_m2440A8D3F3E4A934D7AD5CDFEE12C7CE029E8E31_gshared)(__this, ___0_d0, ___1_value, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64 (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, int32_t ___0_d0, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*, int32_t, const RuntimeMethod*))PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64_gshared)(__this, ___0_d0, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_MaxDefinedElement_mF5569DC38EA6984CE093B49E0F527AEE7B270FD2 (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, const RuntimeMethod*))PartialTensorElement_1_MaxDefinedElement_mF5569DC38EA6984CE093B49E0F527AEE7B270FD2_gshared)(___0_a, ___1_b, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* PartialTensor_1_ToArray_m4472C488A5BF071A6F6111EE96182F8BB6D12A43 (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*, const RuntimeMethod*))PartialTensor_1_ToArray_m4472C488A5BF071A6F6111EE96182F8BB6D12A43_gshared)(__this, method);
}
inline void Tensor_1__ctor_mD6D1CDD15C1163DDE3EB938CB12EBE3898E28003 (Tensor_1_t65B864E8272AE642C573473CC6901460AD6A3379* __this, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_shape, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_srcData, int32_t ___2_dataStartIndex, const RuntimeMethod* method)
{
	((  void (*) (Tensor_1_t65B864E8272AE642C573473CC6901460AD6A3379*, TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))Tensor_1__ctor_mD6D1CDD15C1163DDE3EB938CB12EBE3898E28003_gshared)(__this, ___0_shape, ___1_srcData, ___2_dataStartIndex, method);
}
inline PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensor_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0FF091B145BF0BF2470F8B49FC3EA00281A8956C (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 (*) (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*, int32_t, const RuntimeMethod*))PartialTensor_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0FF091B145BF0BF2470F8B49FC3EA00281A8956C_gshared)(__this, ___0_index, method);
}
inline void PartialTensor_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA33429A3B6E5356408FCE0D0A20E724A24A5694E (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, int32_t ___0_index, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_element, const RuntimeMethod* method)
{
	((  void (*) (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*, int32_t, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, const RuntimeMethod*))PartialTensor_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA33429A3B6E5356408FCE0D0A20E724A24A5694E_gshared)(__this, ___0_index, ___1_element, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 27227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4_gshared (int16_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815));
		(&V_0)->___m_ElementType = (int32_t)1;
		(&V_0)->___m_Param = (uint8_t)0;
		int16_t L_0 = ___0_value;
		(&V_0)->___m_Value = L_0;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 27228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_Param_mDED210BEFC785EF0305C6F69C021F627A1976F53_gshared (uint8_t ___0_param, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815));
		(&V_0)->___m_ElementType = (int32_t)2;
		uint8_t L_0 = ___0_param;
		(&V_0)->___m_Param = L_0;
		int16_t* L_1 = (int16_t*)(&(&V_0)->___m_Value);
		il2cpp_codegen_initobj(L_1, sizeof(int16_t));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 27229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isUnknown_m90A18DDB9B38D8B16773142D78629A69B5258C1F_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isUnknown_m90A18DDB9B38D8B16773142D78629A69B5258C1F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isUnknown_m90A18DDB9B38D8B16773142D78629A69B5258C1F(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isParam_m13B7331999D54743756EFD64CA99C0D144E26684_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isParam_m13B7331999D54743756EFD64CA99C0D144E26684_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isParam_m13B7331999D54743756EFD64CA99C0D144E26684(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_003b;
	}

IL_003b:
	{
		goto IL_007a;
	}

IL_007a:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 27233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_003b;
	}

IL_003b:
	{
		goto IL_007a;
	}

IL_007a:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 27234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int16_t PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	int16_t _returnValue;
	_returnValue = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___m_Param;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	uint8_t _returnValue;
	_returnValue = PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27237
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m5D2031C164E472792EF0F28B973BAE92E726BE85_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		int32_t L_0 = __this->___m_ElementType;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_001b:
	{
		V_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		goto IL_0051;
	}

IL_0023:
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_2 = L_2;
		String_t* L_3;
		L_3 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23((&V_2), NULL);
		V_0 = L_3;
		goto IL_0051;
	}

IL_003a:
	{
		uint8_t L_4;
		L_4 = PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_3 = L_4;
		String_t* L_5;
		L_5 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_3), NULL);
		V_0 = L_5;
		goto IL_0051;
	}

IL_004b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0051:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* PartialTensorElement_1_ToString_m5D2031C164E472792EF0F28B973BAE92E726BE85_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	String_t* _returnValue;
	_returnValue = PartialTensorElement_1_ToString_m5D2031C164E472792EF0F28B973BAE92E726BE85(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m67B9156A702ADEEEB6A3CEC65FC174F49957569E_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		int32_t L_0 = __this->___m_ElementType;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_001b:
	{
		V_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		goto IL_004f;
	}

IL_0023:
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_2 = L_2;
		String_t* L_3;
		L_3 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23((&V_2), NULL);
		V_0 = L_3;
		goto IL_004f;
	}

IL_003a:
	{
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_4 = ___0_SymbolicDimNaming;
		uint8_t L_5;
		L_5 = PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		NullCheck(L_4);
		String_t* L_6;
		L_6 = Func_2_Invoke_mD7E298F192DECA9DAE0850030B0DF28BAFBB01B5_inline(L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_004f;
	}

IL_0049:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_004f:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* PartialTensorElement_1_ToString_m67B9156A702ADEEEB6A3CEC65FC174F49957569E_AdjustorThunk (RuntimeObject* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	String_t* _returnValue;
	_returnValue = PartialTensorElement_1_ToString_m67B9156A702ADEEEB6A3CEC65FC174F49957569E(_thisAdjusted, ___0_SymbolicDimNaming, method);
	return _returnValue;
}
// Method Definition Index: 27239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m3DC3A60BC3B1DADF398763E7AFE6F564C926A3C5_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, int16_t ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		int16_t L_1 = __this->___m_Value;
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		int16_t L_4 = ___0_other;
		int16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		bool L_7;
		L_7 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, L_6, NULL);
		return L_7;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_m3DC3A60BC3B1DADF398763E7AFE6F564C926A3C5_AdjustorThunk (RuntimeObject* __this, int16_t ___0_other, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_m3DC3A60BC3B1DADF398763E7AFE6F564C926A3C5(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 27240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m72E57CD84F51A957732F8048B0F3A9344277925A_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_ElementType;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_003a;
		}
	}
	{
		int16_t L_3 = __this->___m_Value;
		int16_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_4);
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_other;
		int16_t L_7 = L_6.___m_Value;
		int16_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_8);
		bool L_10;
		L_10 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_5, L_9, NULL);
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		uint8_t L_11 = __this->___m_Param;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_12 = ___0_other;
		uint8_t L_13 = L_12.___m_Param;
		return (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}

IL_003a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_m72E57CD84F51A957732F8048B0F3A9344277925A_AdjustorThunk (RuntimeObject* __this, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_other, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_m72E57CD84F51A957732F8048B0F3A9344277925A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 27241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_mDBAF6D00E7586708AA6D1C14A2FF4687B01EDA5D_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_2 = V_0;
		bool L_3;
		L_3 = PartialTensorElement_1_Equals_m72E57CD84F51A957732F8048B0F3A9344277925A(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_mDBAF6D00E7586708AA6D1C14A2FF4687B01EDA5D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_mDBAF6D00E7586708AA6D1C14A2FF4687B01EDA5D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 27242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Eq_mB202EC75D1C36BCC39AFA62E04C298BCA08F24CB(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_4;
	}

IL_0026:
	{
		bool L_5;
		L_5 = PartialTensorElement_1_get_isParam_m13B7331999D54743756EFD64CA99C0D144E26684((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		bool L_6;
		L_6 = PartialTensorElement_1_get_isParam_m13B7331999D54743756EFD64CA99C0D144E26684((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		uint8_t L_7;
		L_7 = PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		uint8_t L_8;
		L_8 = PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_0049:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Inequality_m4A744AFAA7AFAE454104F1EA82307C78EA4222D7_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Eq_mB202EC75D1C36BCC39AFA62E04C298BCA08F24CB(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_GreaterThanOrEqual_m8D485E1DE225462D1BFA6428E0524295DE239596_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Ge_m789F9F2D761A888CE3E53822FE18F19AC415FFE3(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}

IL_0026:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___1_b;
		bool L_7;
		L_7 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_7;
	}
}
// Method Definition Index: 27245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_LessThanOrEqual_m0AFA9D447798CE0896063491520FFECDFC134637_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Le_mA43CB0474B22B23E8E9D4D1094F79B1ABE1633B9(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}

IL_0026:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___1_b;
		bool L_7;
		L_7 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_7;
	}
}
// Method Definition Index: 27246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_GreaterThan_m6E67B9D60F727F75F6A4109C5EC54BB781CFFF54_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Gt_m6FFCA8DCA3C86EC06ACC7B7DFD11F6EB493D7CC8(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_4;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_LessThan_m10069D7E00000135730592EBCE2D34DF13797DCD_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Lt_mA95F8093D156875609B83090894C8F14000B14B2(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_4;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_op_BitwiseAnd_m3F3716B40D59E99D8DF6BDC9E01B5B04AE69CB30_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_0 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3 = ___0_a;
		return L_3;
	}

IL_000b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_4 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_8;
		L_8 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_9;
		L_9 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_9)
		{
			goto IL_002b;
		}
	}

IL_0025:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10;
		L_10 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}

IL_002b:
	{
		bool L_11;
		L_11 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		bool L_12;
		L_12 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		int16_t L_13;
		L_13 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_14;
		L_14 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_15;
		L_15 = PartialTensorElement_1_BitwiseAnd_m009E7D5B3B99D7F47EFF358A2E6DBC381F360D40(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_16;
		L_16 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_16;
	}

IL_0056:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_17;
		L_17 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_17;
	}
}
// Method Definition Index: 27249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_op_BitwiseOr_m3CE47804D76D2E124ADC7D63A0B706BC9476942C_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_0 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3 = ___0_a;
		return L_3;
	}

IL_000b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_4 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_6)
		{
			goto IL_001a;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7 = ___1_b;
		return L_7;
	}

IL_001a:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_8 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_10;
		L_10 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_10)
		{
			goto IL_0029;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_11 = ___0_a;
		return L_11;
	}

IL_0029:
	{
		bool L_12;
		L_12 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		bool L_13;
		L_13 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		int16_t L_14;
		L_14 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_15;
		L_15 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_16;
		L_16 = PartialTensorElement_1_BitwiseOr_mF2BD629B4D947159A6B40B601A23EBB8B8A2CDC5(L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_17;
		L_17 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_17;
	}

IL_0054:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_18;
		L_18 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_18;
	}
}
// Method Definition Index: 27250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_op_ExclusiveOr_m97FD018E9AAC388E9E2F16F261316E78C31D0538_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_0 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3;
		L_3 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_3;
	}

IL_000f:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_4 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7 = ___1_b;
		return L_7;
	}

IL_001e:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_8 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_10;
		L_10 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_11 = ___0_a;
		return L_11;
	}

IL_002d:
	{
		bool L_12;
		L_12 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		bool L_13;
		L_13 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		int16_t L_14;
		L_14 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_15;
		L_15 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_16;
		L_16 = PartialTensorElement_1_BitwiseXor_mA756E11B0FCB54B78F6A68632796E35317DD1B60(L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_17;
		L_17 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_17;
	}

IL_0058:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_18;
		L_18 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_18;
	}
}
// Method Definition Index: 27251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_op_OnesComplement_m7F72BF24E24EC94D39AE0BCBF3CC0FB452F0334B_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int16_t L_1;
		L_1 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_2;
		L_2 = PartialTensorElement_1_BitwiseNot_m76F3829FE2B7FE022DDAB56E5BFA4AE855487637(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3;
		L_3 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_001b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_4;
		L_4 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_4;
	}
}
// Method Definition Index: 27252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_op_UnaryNegation_mBDFB2126DEBB55BC2AE45F2442FAE568FFA9A9E3_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int16_t L_1;
		L_1 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_2;
		L_2 = PartialTensorElement_1_Neg_mBACB4AB7A14E13B95E23E37D11662A322F320018(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3;
		L_3 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_001b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_4;
		L_4 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_4;
	}
}
// Method Definition Index: 27253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_op_Addition_m50E490A070E8F46FDB321E67D1D5BF262529FF97_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_4;
		L_4 = PartialTensorElement_1_Add_m52DE3CB734A271606E38AD7F6EF704DB3AD64BE9(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9 = ___1_b;
		return L_9;
	}

IL_003a:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_11;
		L_11 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_13 = ___0_a;
		return L_13;
	}

IL_0049:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_14;
		L_14 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_14;
	}
}
// Method Definition Index: 27254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_op_Subtraction_mE9255E5C4B2068C02B0F5531F229B14F75968C48_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_4;
		L_4 = PartialTensorElement_1_Sub_m45FCF57F4714A82138B244E3548C064DADE3A1A1(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9 = ___0_a;
		return L_9;
	}

IL_003a:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_11 = ___1_b;
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_13;
		L_13 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_13;
	}

IL_0049:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_14;
		L_14 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_14;
	}
}
// Method Definition Index: 27255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_op_Multiply_mD88CAF14AA5F10A16E3966C7F354C4E8AF8F184F_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_4;
		L_4 = PartialTensorElement_1_Mul_mE5CBA3B481D8FF28FD61480912E6A4D6DE78CEFF(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10;
		L_10 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_11;
		L_11 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_11)
		{
			goto IL_004b;
		}
	}

IL_0045:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_12;
		L_12 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_12;
	}

IL_004b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_13 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_14;
		L_14 = PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_15;
		L_15 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_15)
		{
			goto IL_005a;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_16 = ___1_b;
		return L_16;
	}

IL_005a:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_17 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_18;
		L_18 = PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_19;
		L_19 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_19)
		{
			goto IL_0069;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_20 = ___0_a;
		return L_20;
	}

IL_0069:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_21;
		L_21 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_21;
	}
}
// Method Definition Index: 27256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_op_Division_m831544668E1E6FD0F2ED52FB8597CCFC240733A7_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_0 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1;
		L_1 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_3 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0013:
	{
		bool L_4;
		L_4 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		bool L_5;
		L_5 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		int16_t L_6;
		L_6 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_7;
		L_7 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_8;
		L_8 = PartialTensorElement_1_Div_m308E451761C70688CF784B4051787B7678F11789(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9;
		L_9 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_11;
		L_11 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_13;
		L_13 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_13;
	}

IL_0051:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_14 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_15;
		L_15 = PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_16;
		L_16 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_17 = ___0_a;
		return L_17;
	}

IL_0060:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_18 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_19 = ___1_b;
		bool L_20;
		L_20 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_18, L_19, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_21;
		L_21 = PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		return L_21;
	}

IL_006f:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_22;
		L_22 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_22;
	}
}
// Method Definition Index: 27257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_Sign_m804F82674E4716E04BDE732AA16AC34D4BB6E671_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int16_t L_1;
		L_1 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_2;
		L_2 = PartialTensorElement_1_Sign_m86772926A29D0A3F367D43145F9FC435D6D2255C(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3;
		L_3 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_001b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_4;
		L_4 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_4;
	}
}
// Method Definition Index: 27258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_Pow_m59B1A12D0042A0CD54894A69A79FB2756BCC6FDC_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_4;
		L_4 = PartialTensorElement_1_Pow_m4FAA90C13CB37ADAEFB10CFD1FDE1CF4377C01AF(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9;
		L_9 = PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_11;
		L_11 = PartialTensorElement_1_get_One_mD798EF100AADE4915D3C93E0A20E2AF851262AB1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_13 = ___0_a;
		return L_13;
	}

IL_004d:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_14;
		L_14 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_14;
	}
}
// Method Definition Index: 27259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_Mod_mDE8AA7A538BE72029FF9CCB7DA13F32235DA728D_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_4;
		L_4 = PartialTensorElement_1_Mod_mD98111690441BCB67FC08D1B26B4C2AE6A917B20(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_FMod_mC62F22F612B10CEDD2C93D6E4DA6F8C74B324DEF_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_4;
		L_4 = PartialTensorElement_1_FMod_mE744283F4F9758E04EFE6984330A98FDFD244EE1(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mEE73AA4A4641A8ACCECF1AB6C860A5E24F1485C9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_MaxDefinedElement_m663CE9E679337880AE3D12204B48E6BFA20E38F9_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isUnknown_m90A18DDB9B38D8B16773142D78629A69B5258C1F((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = ___1_b;
		return L_1;
	}

IL_000b:
	{
		bool L_2;
		L_2 = PartialTensorElement_1_get_isUnknown_m90A18DDB9B38D8B16773142D78629A69B5258C1F((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3 = ___0_a;
		return L_3;
	}

IL_0016:
	{
		bool L_4;
		L_4 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5 = ___1_b;
		return L_5;
	}

IL_0021:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_a;
		return L_6;
	}
}
// Method Definition Index: 27262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_Min_m74D03F9EAACAF23A5336A6AF3AB6B39F2F16AE4F_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_4;
		L_4 = PartialTensorElement_1_Min_mF4C9AC31858773761D884FAD23B6971C8AE3B904(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9 = ___0_a;
		return L_9;
	}

IL_0036:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensorElement_1_Max_m66892170A25F257578252657F762B0FFECF3E3DE_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_4;
		L_4 = PartialTensorElement_1_Max_mDEBDE9D04A4222E9DE3853DDCFD9C56701E177E3(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5;
		L_5 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_9 = ___0_a;
		return L_9;
	}

IL_0036:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Eq_m334EB4C9DA7CDF76E06713436219763B43E85BCB_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_0 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_3;
	}

IL_0010:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_4 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5 = ___1_b;
		bool L_6;
		L_6 = PartialTensorElement_1_op_Inequality_m4A744AFAA7AFAE454104F1EA82307C78EA4222D7(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_7;
	}

IL_0020:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8;
		L_8 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 27265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ne_m2755B553790369E31C24CF4C9ADC284041E7055A_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_0 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Inequality_m4A744AFAA7AFAE454104F1EA82307C78EA4222D7(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_3;
	}

IL_0010:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_4 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5 = ___1_b;
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_7;
	}

IL_0020:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8;
		L_8 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 27266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_m718196B315B3EC9B685B3A733003BFD54AE273B1_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Gt_m6FFCA8DCA3C86EC06ACC7B7DFD11F6EB493D7CC8(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_5;
	}

IL_002e:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 27267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_m607C2128826AF679554E6CC8765039720427FB8C_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int16_t L_2;
		L_2 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int16_t L_3;
		L_3 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Ge_m789F9F2D761A888CE3E53822FE18F19AC415FFE3(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_5;
	}

IL_002e:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_6 = ___0_a;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 27268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Lt_m47BE5B7136F3CF9A631B5B77250DDDAF42F2C9BA_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_0 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2;
		L_2 = PartialTensorElement_1_Gt_m718196B315B3EC9B685B3A733003BFD54AE273B1(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		return L_2;
	}
}
// Method Definition Index: 27269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Le_m1330BAB1A2FEA8BA714A2E355B8ACAB51092D8DD_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___0_a, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_0 = ___1_b;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2;
		L_2 = PartialTensorElement_1_Ge_m607C2128826AF679554E6CC8765039720427FB8C(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return L_2;
	}
}
// Method Definition Index: 27270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Eq_mB202EC75D1C36BCC39AFA62E04C298BCA08F24CB_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_0041;
	}

IL_0041:
	{
		int16_t L_1 = ___0_a;
		goto IL_0082;
	}

IL_0082:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2F0B48DCDDFA223545B5736EDEFF2ACCB30D887)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Gt_m6FFCA8DCA3C86EC06ACC7B7DFD11F6EB493D7CC8_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_0041;
	}

IL_0041:
	{
		int16_t L_1 = ___0_a;
		goto IL_0082;
	}

IL_0082:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2F0B48DCDDFA223545B5736EDEFF2ACCB30D887)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Ge_m789F9F2D761A888CE3E53822FE18F19AC415FFE3_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_0044;
	}

IL_0044:
	{
		int16_t L_1 = ___0_a;
		goto IL_0088;
	}

IL_0088:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2F0B48DCDDFA223545B5736EDEFF2ACCB30D887)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Lt_mA95F8093D156875609B83090894C8F14000B14B2_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___1_b;
		int16_t L_1 = ___0_a;
		bool L_2;
		L_2 = PartialTensorElement_1_Gt_m6FFCA8DCA3C86EC06ACC7B7DFD11F6EB493D7CC8(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_2;
	}
}
// Method Definition Index: 27274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Le_mA43CB0474B22B23E8E9D4D1094F79B1ABE1633B9_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___1_b;
		int16_t L_1 = ___0_a;
		bool L_2;
		L_2 = PartialTensorElement_1_Ge_m789F9F2D761A888CE3E53822FE18F19AC415FFE3(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_2;
	}
}
// Method Definition Index: 27275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_BitwiseAnd_m009E7D5B3B99D7F47EFF358A2E6DBC381F360D40_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int16_t L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		int16_t L_1 = ___0_a;
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		int16_t L_4 = ___1_b;
		int16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E2EA1DA8641F3AC7819A8D76EE243E8C115150F)), L_3, L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}
}
// Method Definition Index: 27276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_BitwiseOr_mF2BD629B4D947159A6B40B601A23EBB8B8A2CDC5_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int16_t L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		int16_t L_1 = ___0_a;
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		int16_t L_4 = ___1_b;
		int16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C7B4877FC53973ED4AB40213D55E994309CD6C5)), L_3, L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}
}
// Method Definition Index: 27277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_BitwiseXor_mA756E11B0FCB54B78F6A68632796E35317DD1B60_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int16_t L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		int16_t L_1 = ___0_a;
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		int16_t L_4 = ___1_b;
		int16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C7B4877FC53973ED4AB40213D55E994309CD6C5)), L_3, L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}
}
// Method Definition Index: 27278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_BitwiseNot_m76F3829FE2B7FE022DDAB56E5BFA4AE855487637_gshared (int16_t ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int16_t L_0 = ___0_a;
		goto IL_003a;
	}

IL_003a:
	{
		int16_t L_1 = ___0_a;
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral642A30CBE3FDAC4E8BAB8D2817132F6CA926C1FE)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
// Method Definition Index: 27279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Mul_mE5CBA3B481D8FF28FD61480912E6A4D6DE78CEFF_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		int16_t L_1 = ___0_a;
		goto IL_00b2;
	}

IL_00b2:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7506E2E628394598494A749AA7EC051FC3C3AAE)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Div_m308E451761C70688CF784B4051787B7678F11789_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		int16_t L_1 = ___0_a;
		goto IL_00b2;
	}

IL_00b2:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7506E2E628394598494A749AA7EC051FC3C3AAE)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Sign_m86772926A29D0A3F367D43145F9FC435D6D2255C_gshared (int16_t ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_0040;
	}

IL_0040:
	{
		int16_t L_1 = ___0_a;
		goto IL_007e;
	}

IL_007e:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062A6E32AA8D50093BC3CE21ADEAD0EEA6E5C429)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}
}
// Method Definition Index: 27282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Neg_mBACB4AB7A14E13B95E23E37D11662A322F320018_gshared (int16_t ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_003a;
	}

IL_003a:
	{
		int16_t L_1 = ___0_a;
		goto IL_0074;
	}

IL_0074:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062A6E32AA8D50093BC3CE21ADEAD0EEA6E5C429)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}
}
// Method Definition Index: 27283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Add_m52DE3CB734A271606E38AD7F6EF704DB3AD64BE9_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		int16_t L_1 = ___0_a;
		goto IL_00b2;
	}

IL_00b2:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0DDE215FE64239F241B30EC241F47E5B268E9BE)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Sub_m45FCF57F4714A82138B244E3548C064DADE3A1A1_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		int16_t L_1 = ___0_a;
		goto IL_00b2;
	}

IL_00b2:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3B08EA942992A306FA82994179F80FC8658CEAB)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Max_mDEBDE9D04A4222E9DE3853DDCFD9C56701E177E3_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_005d;
	}

IL_005d:
	{
		int16_t L_1 = ___0_a;
		goto IL_00ba;
	}

IL_00ba:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral660A1A2C1ED97169DD5B080B3C546C65565890E1)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Min_mF4C9AC31858773761D884FAD23B6971C8AE3B904_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_005d;
	}

IL_005d:
	{
		int16_t L_1 = ___0_a;
		goto IL_00ba;
	}

IL_00ba:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB52D68102DE6860A24B95C701AB761F54B70F5D)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Pow_m4FAA90C13CB37ADAEFB10CFD1FDE1CF4377C01AF_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_005f;
	}

IL_005f:
	{
		int16_t L_1 = ___0_a;
		goto IL_00bc;
	}

IL_00bc:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF291E74C21B8B40550C8052DDF9B62343BC4516E)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_Mod_mD98111690441BCB67FC08D1B26B4C2AE6A917B20_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_005d;
	}

IL_005d:
	{
		int16_t L_1 = ___0_a;
		goto IL_00ba;
	}

IL_00ba:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF291E74C21B8B40550C8052DDF9B62343BC4516E)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_FMod_mE744283F4F9758E04EFE6984330A98FDFD244EE1_gshared (int16_t ___0_a, int16_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int16_t L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		int16_t L_1 = ___0_a;
		goto IL_00b6;
	}

IL_00b6:
	{
		int16_t L_2 = ___0_a;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		int16_t L_5 = ___1_b;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF291E74C21B8B40550C8052DDF9B62343BC4516E)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 27290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_GetHashCode_mECD04F0BC1C2F37E40C1BD13E582270D25F330CF_gshared (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		uint8_t L_1 = __this->___m_Param;
		int16_t L_2 = __this->___m_Value;
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashCode_Combine_TisElementType_tEB6A0613EEB254ABA7D12BEFB4803017A6B26E94_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mBA8061DCF3D8E648A0FD8F1D200A3692D36CCFB2(L_0, L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t PartialTensorElement_1_GetHashCode_mECD04F0BC1C2F37E40C1BD13E582270D25F330CF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815>(__this);
	int32_t _returnValue;
	_returnValue = PartialTensorElement_1_GetHashCode_mECD04F0BC1C2F37E40C1BD13E582270D25F330CF(_thisAdjusted, method);
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
// Method Definition Index: 27226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 27227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_gshared (int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1));
		(&V_0)->___m_ElementType = (int32_t)1;
		(&V_0)->___m_Param = (uint8_t)0;
		int32_t L_0 = ___0_value;
		(&V_0)->___m_Value = L_0;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 27228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Param_mA782DDE5368E214EEF746C761F6ED82601896517_gshared (uint8_t ___0_param, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1));
		(&V_0)->___m_ElementType = (int32_t)2;
		uint8_t L_0 = ___0_param;
		(&V_0)->___m_Param = L_0;
		int32_t* L_1 = (int32_t*)(&(&V_0)->___m_Value);
		il2cpp_codegen_initobj(L_1, sizeof(int32_t));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 27229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isUnknown_m6BD84A537288F85E58C73C260FB75FE29BFF8800_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isUnknown_m6BD84A537288F85E58C73C260FB75FE29BFF8800_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isUnknown_m6BD84A537288F85E58C73C260FB75FE29BFF8800(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isParam_m606956C799372B55B3F4DB0121CFD212A80009CF_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isParam_m606956C799372B55B3F4DB0121CFD212A80009CF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isParam_m606956C799372B55B3F4DB0121CFD212A80009CF(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
	}
	{
		int32_t L_0 = 0;
		RuntimeObject* L_1 = Box(il2cpp_defaults.int32_class, &L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_1, L_3, NULL);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((*(int32_t*)UnBox(L_4, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}
}
// Method Definition Index: 27233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
	}
	{
		int32_t L_0 = 1;
		RuntimeObject* L_1 = Box(il2cpp_defaults.int32_class, &L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_1, L_3, NULL);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((*(int32_t*)UnBox(L_4, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}
}
// Method Definition Index: 27234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	int32_t _returnValue;
	_returnValue = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___m_Param;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	uint8_t _returnValue;
	_returnValue = PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27237
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_mB0A6763E4631DEEE3C10471F6BE6B13548EED176_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		int32_t L_0 = __this->___m_ElementType;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_001b:
	{
		V_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		goto IL_0051;
	}

IL_0023:
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_2 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		V_0 = L_3;
		goto IL_0051;
	}

IL_003a:
	{
		uint8_t L_4;
		L_4 = PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_3 = L_4;
		String_t* L_5;
		L_5 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_3), NULL);
		V_0 = L_5;
		goto IL_0051;
	}

IL_004b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0051:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* PartialTensorElement_1_ToString_mB0A6763E4631DEEE3C10471F6BE6B13548EED176_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	String_t* _returnValue;
	_returnValue = PartialTensorElement_1_ToString_mB0A6763E4631DEEE3C10471F6BE6B13548EED176(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_mD3F7B1FDCE0A9C42F67848AED19B33AC917CC382_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___m_ElementType;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_001b:
	{
		V_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		goto IL_004f;
	}

IL_0023:
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_2 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		V_0 = L_3;
		goto IL_004f;
	}

IL_003a:
	{
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_4 = ___0_SymbolicDimNaming;
		uint8_t L_5;
		L_5 = PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		NullCheck(L_4);
		String_t* L_6;
		L_6 = Func_2_Invoke_mD7E298F192DECA9DAE0850030B0DF28BAFBB01B5_inline(L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_004f;
	}

IL_0049:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_004f:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* PartialTensorElement_1_ToString_mD3F7B1FDCE0A9C42F67848AED19B33AC917CC382_AdjustorThunk (RuntimeObject* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	String_t* _returnValue;
	_returnValue = PartialTensorElement_1_ToString_mD3F7B1FDCE0A9C42F67848AED19B33AC917CC382(_thisAdjusted, ___0_SymbolicDimNaming, method);
	return _returnValue;
}
// Method Definition Index: 27239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_mBC8E66FD7B29CB12247A057CE158A9311FF29A4C_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, int32_t ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = __this->___m_Value;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		int32_t L_4 = ___0_other;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		bool L_7;
		L_7 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, L_6, NULL);
		return L_7;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_mBC8E66FD7B29CB12247A057CE158A9311FF29A4C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_other, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_mBC8E66FD7B29CB12247A057CE158A9311FF29A4C(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 27240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m1D96E287AF4D2B188701297D3C3895C9A8234D51_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_ElementType;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = __this->___m_Value;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_4);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_other;
		int32_t L_7 = L_6.___m_Value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_8);
		bool L_10;
		L_10 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_5, L_9, NULL);
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		uint8_t L_11 = __this->___m_Param;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_12 = ___0_other;
		uint8_t L_13 = L_12.___m_Param;
		return (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}

IL_003a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_m1D96E287AF4D2B188701297D3C3895C9A8234D51_AdjustorThunk (RuntimeObject* __this, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_other, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_m1D96E287AF4D2B188701297D3C3895C9A8234D51(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 27241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m9299D4E42910DAEBF33F3EB434079E7DB9D1B8ED_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2 = V_0;
		bool L_3;
		L_3 = PartialTensorElement_1_Equals_m1D96E287AF4D2B188701297D3C3895C9A8234D51(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_m9299D4E42910DAEBF33F3EB434079E7DB9D1B8ED_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_m9299D4E42910DAEBF33F3EB434079E7DB9D1B8ED(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 27242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Eq_m8887AB216ACB1BA814D6BAFC37571CAF6E678E5E(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_4;
	}

IL_0026:
	{
		bool L_5;
		L_5 = PartialTensorElement_1_get_isParam_m606956C799372B55B3F4DB0121CFD212A80009CF((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		bool L_6;
		L_6 = PartialTensorElement_1_get_isParam_m606956C799372B55B3F4DB0121CFD212A80009CF((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		uint8_t L_7;
		L_7 = PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		uint8_t L_8;
		L_8 = PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_0049:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Inequality_m75DE442B872ED61AF4BEB3D433C28692AA611AF1_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Eq_m8887AB216ACB1BA814D6BAFC37571CAF6E678E5E(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_GreaterThanOrEqual_m493CB27E4196F1312078D28B88473D6B06B5A51B_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Ge_m8BDF3D81EE7ACED649B93FA322A594DF1A919CC1(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}

IL_0026:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___1_b;
		bool L_7;
		L_7 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_7;
	}
}
// Method Definition Index: 27245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_LessThanOrEqual_mAA0A1539C31A7AFBDFAC04DAC2571D78D0D497FE_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Le_mCA7CDCD54DFE5489815558DB921C805022124C91(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}

IL_0026:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___1_b;
		bool L_7;
		L_7 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_7;
	}
}
// Method Definition Index: 27246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_GreaterThan_m47879F698EA26997F9D1AE95EAEA21D6BA143544_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Gt_m3E0D693A83E9A7E7D75FC4A0C64845ECF1E5B3F0(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_4;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_LessThan_mB9BC5220C33B8421B6BD5B3F9CA565CA5186420C_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Lt_m2ECB7FE9F31BBEC48DD494AAF00101DDFAB587D8(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_4;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_op_BitwiseAnd_m7AA2F435EBCDEA51172D2FA0AF0D48AE59904D7E_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3 = ___0_a;
		return L_3;
	}

IL_000b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_4 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8;
		L_8 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_9;
		L_9 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_9)
		{
			goto IL_002b;
		}
	}

IL_0025:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}

IL_002b:
	{
		bool L_11;
		L_11 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		bool L_12;
		L_12 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_13;
		L_13 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_14;
		L_14 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_15;
		L_15 = PartialTensorElement_1_BitwiseAnd_m092DD66557949F020017541C045894DE992BAED2(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_16;
		L_16 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_16;
	}

IL_0056:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_17;
		L_17 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_17;
	}
}
// Method Definition Index: 27249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_op_BitwiseOr_m808AB2642026E014C95D3328F504F8438C82D21B_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3 = ___0_a;
		return L_3;
	}

IL_000b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_4 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_6)
		{
			goto IL_001a;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7 = ___1_b;
		return L_7;
	}

IL_001a:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_10;
		L_10 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_10)
		{
			goto IL_0029;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_11 = ___0_a;
		return L_11;
	}

IL_0029:
	{
		bool L_12;
		L_12 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		bool L_13;
		L_13 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_14;
		L_14 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_15;
		L_15 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_16;
		L_16 = PartialTensorElement_1_BitwiseOr_m8BD4ECFB21DE896A7D654E37BEC9A2816BD90F7C(L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_17;
		L_17 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_17;
	}

IL_0054:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_18;
		L_18 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_18;
	}
}
// Method Definition Index: 27250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_op_ExclusiveOr_mC43B928DC53776F9E4FDEEA8B9C3239EA0C1DD02_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_3;
	}

IL_000f:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_4 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7 = ___1_b;
		return L_7;
	}

IL_001e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_10;
		L_10 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_11 = ___0_a;
		return L_11;
	}

IL_002d:
	{
		bool L_12;
		L_12 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		bool L_13;
		L_13 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_14;
		L_14 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_15;
		L_15 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_16;
		L_16 = PartialTensorElement_1_BitwiseXor_mA1E00C9ED1E7C4C0709A44F86AB9FB333FAD865F(L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_17;
		L_17 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_17;
	}

IL_0058:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_18;
		L_18 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_18;
	}
}
// Method Definition Index: 27251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_op_OnesComplement_m79162724337ACAA9BC008FEFC9065344637C4383_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1;
		L_1 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_2;
		L_2 = PartialTensorElement_1_BitwiseNot_m67D70D61C49E362CE98F45F8B8E9F04EA2AECB5A(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_001b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_4;
		L_4 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_4;
	}
}
// Method Definition Index: 27252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_op_UnaryNegation_mAF36BA724F0793CDADDE7A2AFC39D4E18A5889A4_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1;
		L_1 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_2;
		L_2 = PartialTensorElement_1_Neg_mB5BFFDD9226AF51687EAEFAF6293496F6D4736CE(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_001b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_4;
		L_4 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_4;
	}
}
// Method Definition Index: 27253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_op_Addition_m87805F8B8DAFAD9F787F3EC8B9420A616A7370DB_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_4;
		L_4 = PartialTensorElement_1_Add_mD76E79A6954B552C1B2A09A06D52493A4044FA52(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9 = ___1_b;
		return L_9;
	}

IL_003a:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_11;
		L_11 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_13 = ___0_a;
		return L_13;
	}

IL_0049:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_14;
		L_14 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_14;
	}
}
// Method Definition Index: 27254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_op_Subtraction_m87FCFDFD8FA6D2C62EC4CD7284AC22538983473E_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_4;
		L_4 = PartialTensorElement_1_Sub_m07EB34610AE04BB412061BC49EE3171BB71C3B30(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9 = ___0_a;
		return L_9;
	}

IL_003a:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_11 = ___1_b;
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_13;
		L_13 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_13;
	}

IL_0049:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_14;
		L_14 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_14;
	}
}
// Method Definition Index: 27255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_op_Multiply_m3217D66CD6E0E0534C28DAE564D8E7729DAB4FCA_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_4;
		L_4 = PartialTensorElement_1_Mul_m94386F77623E4FD8D63F3ECB790AA4858658685F(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_11;
		L_11 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_11)
		{
			goto IL_004b;
		}
	}

IL_0045:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_12;
		L_12 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_12;
	}

IL_004b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_13 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_14;
		L_14 = PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_15;
		L_15 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_15)
		{
			goto IL_005a;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_16 = ___1_b;
		return L_16;
	}

IL_005a:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_17 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_18;
		L_18 = PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_19;
		L_19 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_19)
		{
			goto IL_0069;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_20 = ___0_a;
		return L_20;
	}

IL_0069:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_21;
		L_21 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_21;
	}
}
// Method Definition Index: 27256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_op_Division_m71F299422B3A679C27B7C2877692CB1D167BF1CB_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1;
		L_1 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_3 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0013:
	{
		bool L_4;
		L_4 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		bool L_5;
		L_5 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_6;
		L_6 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_7;
		L_7 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_8;
		L_8 = PartialTensorElement_1_Div_m08600FDEB0AFBF4A0A737CF049BA3AF62A222856(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_11;
		L_11 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_13;
		L_13 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_13;
	}

IL_0051:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_14 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_15;
		L_15 = PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_16;
		L_16 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_17 = ___0_a;
		return L_17;
	}

IL_0060:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_18 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_19 = ___1_b;
		bool L_20;
		L_20 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_18, L_19, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_21;
		L_21 = PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		return L_21;
	}

IL_006f:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_22;
		L_22 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_22;
	}
}
// Method Definition Index: 27257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Sign_mE06AC5C28ED68B6497988A72BDBD86D205EFCEFD_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1;
		L_1 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_2;
		L_2 = PartialTensorElement_1_Sign_mF33775CC00008293947484CEEB85AD29C31B8BA5(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_001b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_4;
		L_4 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_4;
	}
}
// Method Definition Index: 27258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Pow_m8DB65F347B5F5BFA62623D36A481513E3A53B5BD_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_4;
		L_4 = PartialTensorElement_1_Pow_m9E717B21D8009823D8D25523601A33ADBE1483A5(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_11;
		L_11 = PartialTensorElement_1_get_One_mC88EFFD4DA77012A9C8141807324DB7630CD6D61(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_13 = ___0_a;
		return L_13;
	}

IL_004d:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_14;
		L_14 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_14;
	}
}
// Method Definition Index: 27259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Mod_m3DA9CCE26079566E790AB9A49C7A5136416B07A0_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_4;
		L_4 = PartialTensorElement_1_Mod_m29BF372DA954F8A7B56A92E7CDB0F4721A66EAC8(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_FMod_m00E1ABF51B6CA7F44ADA01233DF5A3CBB8829859_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_4;
		L_4 = PartialTensorElement_1_FMod_mB9DDE3A58B6D87B82317FE2C86C0DA1C9D5AF116(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mD8FCF16170EA8109096A8916C4022C1E9E62AC33(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_MaxDefinedElement_mF5569DC38EA6984CE093B49E0F527AEE7B270FD2_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isUnknown_m6BD84A537288F85E58C73C260FB75FE29BFF8800((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = ___1_b;
		return L_1;
	}

IL_000b:
	{
		bool L_2;
		L_2 = PartialTensorElement_1_get_isUnknown_m6BD84A537288F85E58C73C260FB75FE29BFF8800((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3 = ___0_a;
		return L_3;
	}

IL_0016:
	{
		bool L_4;
		L_4 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5 = ___1_b;
		return L_5;
	}

IL_0021:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_a;
		return L_6;
	}
}
// Method Definition Index: 27262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Min_mB3E8C2294FD66B22196C919DBF50556994ED0050_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_4;
		L_4 = PartialTensorElement_1_Min_mD13FD101B0E117154786B5C3B2AF4BF779DA1F3D(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9 = ___0_a;
		return L_9;
	}

IL_0036:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Max_m26BEEBD65607D91FD350D76BE845309DE7C6EE05_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_4;
		L_4 = PartialTensorElement_1_Max_mA2D71CB9A87CE1745394134336B8E20DDE05D280(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9 = ___0_a;
		return L_9;
	}

IL_0036:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Eq_m50306E4015AE3FE5A76C337475CDA5CE957DF4B3_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_3;
	}

IL_0010:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_4 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5 = ___1_b;
		bool L_6;
		L_6 = PartialTensorElement_1_op_Inequality_m75DE442B872ED61AF4BEB3D433C28692AA611AF1(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_7;
	}

IL_0020:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8;
		L_8 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 27265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ne_m5A4BAECFD04CEF9CD472D2422DBB2E4F36E7ACAB_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Inequality_m75DE442B872ED61AF4BEB3D433C28692AA611AF1(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_3;
	}

IL_0010:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_4 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5 = ___1_b;
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_7;
	}

IL_0020:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8;
		L_8 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 27266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_mB0A1E48449E427B516D5F3F821E8647F15FE8C38_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Gt_m3E0D693A83E9A7E7D75FC4A0C64845ECF1E5B3F0(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_5;
	}

IL_002e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 27267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_mCD03DC85FE77E76E91B87CE91971AEBDEACB36FA_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2;
		L_2 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3;
		L_3 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Ge_m8BDF3D81EE7ACED649B93FA322A594DF1A919CC1(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_5;
	}

IL_002e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_6 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 27268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Lt_m231E5E4C598E0A265D526AEA3188F5515D7358F5_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2;
		L_2 = PartialTensorElement_1_Gt_mB0A1E48449E427B516D5F3F821E8647F15FE8C38(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		return L_2;
	}
}
// Method Definition Index: 27269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Le_mAE63D63DAF94F93104E464E72D7E7EA705C13A7E_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_a, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_0 = ___1_b;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2;
		L_2 = PartialTensorElement_1_Ge_mCD03DC85FE77E76E91B87CE91971AEBDEACB36FA(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return L_2;
	}
}
// Method Definition Index: 27270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Eq_m8887AB216ACB1BA814D6BAFC37571CAF6E678E5E_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}
}
// Method Definition Index: 27271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Gt_m3E0D693A83E9A7E7D75FC4A0C64845ECF1E5B3F0_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0);
	}
}
// Method Definition Index: 27272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Ge_m8BDF3D81EE7ACED649B93FA322A594DF1A919CC1_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 27273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Lt_m2ECB7FE9F31BBEC48DD494AAF00101DDFAB587D8_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_b;
		int32_t L_1 = ___0_a;
		bool L_2;
		L_2 = PartialTensorElement_1_Gt_m3E0D693A83E9A7E7D75FC4A0C64845ECF1E5B3F0(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_2;
	}
}
// Method Definition Index: 27274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Le_mCA7CDCD54DFE5489815558DB921C805022124C91_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_b;
		int32_t L_1 = ___0_a;
		bool L_2;
		L_2 = PartialTensorElement_1_Ge_m8BDF3D81EE7ACED649B93FA322A594DF1A919CC1(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_2;
	}
}
// Method Definition Index: 27275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_BitwiseAnd_m092DD66557949F020017541C045894DE992BAED2_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8&L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		return ((*(int32_t*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_BitwiseOr_m8BD4ECFB21DE896A7D654E37BEC9A2816BD90F7C_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8|L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		return ((*(int32_t*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_BitwiseXor_mA1E00C9ED1E7C4C0709A44F86AB9FB333FAD865F_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8^L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		return ((*(int32_t*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_BitwiseNot_m67D70D61C49E362CE98F45F8B8E9F04EA2AECB5A_gshared (int32_t ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = V_0;
		int32_t L_5 = ((~L_4));
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_6, L_8, NULL);
		return ((*(int32_t*)UnBox(L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Mul_m94386F77623E4FD8D63F3ECB790AA4858658685F_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply(L_8, L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		return ((*(int32_t*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Div_m08600FDEB0AFBF4A0A737CF049BA3AF62A222856_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8/L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		return ((*(int32_t*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Sign_mF33775CC00008293947484CEEB85AD29C31B8BA5_gshared (int32_t ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = V_0;
		float L_5 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_4,NULL));
		float L_6;
		L_6 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_5, NULL);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,float,float,false,false>(L_6,NULL));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_9, L_11, NULL);
		return ((*(int32_t*)UnBox(L_12, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Neg_mB5BFFDD9226AF51687EAEFAF6293496F6D4736CE_gshared (int32_t ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = V_0;
		int32_t L_5 = ((-L_4));
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_6, L_8, NULL);
		return ((*(int32_t*)UnBox(L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Add_mD76E79A6954B552C1B2A09A06D52493A4044FA52_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		return ((*(int32_t*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Sub_m07EB34610AE04BB412061BC49EE3171BB71C3B30_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		return ((*(int32_t*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Max_mA2D71CB9A87CE1745394134336B8E20DDE05D280_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_8, L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_12, L_14, NULL);
		return ((*(int32_t*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Min_mD13FD101B0E117154786B5C3B2AF4BF779DA1F3D_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_8, L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_12, L_14, NULL);
		return ((*(int32_t*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Pow_m9E717B21D8009823D8D25523601A33ADBE1483A5_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		float L_9 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = V_1;
		float L_11 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_10,NULL));
		float L_12;
		L_12 = powf(L_9, L_11);
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.single_class, &L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_14, L_16, NULL);
		return ((*(int32_t*)UnBox(L_17, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_Mod_m29BF372DA954F8A7B56A92E7CDB0F4721A66EAC8_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_8%L_9)), L_10))%L_11));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_16;
		L_16 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_13, L_15, NULL);
		return ((*(int32_t*)UnBox(L_16, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_FMod_mB9DDE3A58B6D87B82317FE2C86C0DA1C9D5AF116_gshared (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___0_a;
	}
	{
		int32_t L_1 = ___0_a;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = ___1_b;
	}
	{
		int32_t L_5 = ___1_b;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		return ((*(int32_t*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_GetHashCode_mFE6F2F12A2E0E8D8E748A951C3319568613C7645_gshared (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		uint8_t L_1 = __this->___m_Param;
		int32_t L_2 = __this->___m_Value;
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashCode_Combine_TisElementType_tEB6A0613EEB254ABA7D12BEFB4803017A6B26E94_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m820291463ECAB55CD9316E1BA1559A35783D898F(L_0, L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t PartialTensorElement_1_GetHashCode_mFE6F2F12A2E0E8D8E748A951C3319568613C7645_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1>(__this);
	int32_t _returnValue;
	_returnValue = PartialTensorElement_1_GetHashCode_mFE6F2F12A2E0E8D8E748A951C3319568613C7645(_thisAdjusted, method);
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
// Method Definition Index: 27226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 27227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3_gshared (float ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5));
		(&V_0)->___m_ElementType = (int32_t)1;
		(&V_0)->___m_Param = (uint8_t)0;
		float L_0 = ___0_value;
		(&V_0)->___m_Value = L_0;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 27228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Param_mBB1BFE8C2FF26D7CB691B8DF4FF651944CF4B4AC_gshared (uint8_t ___0_param, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5));
		(&V_0)->___m_ElementType = (int32_t)2;
		uint8_t L_0 = ___0_param;
		(&V_0)->___m_Param = L_0;
		float* L_1 = (float*)(&(&V_0)->___m_Value);
		il2cpp_codegen_initobj(L_1, sizeof(float));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 27229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isUnknown_mB6AD5F88AE1B7B2FFCE6EA6494A38A44D6654701_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isUnknown_mB6AD5F88AE1B7B2FFCE6EA6494A38A44D6654701_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isUnknown_mB6AD5F88AE1B7B2FFCE6EA6494A38A44D6654701(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isParam_m414393843CD945BD7973B2CC5EB08DE1A062BAC1_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isParam_m414393843CD945BD7973B2CC5EB08DE1A062BAC1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isParam_m414393843CD945BD7973B2CC5EB08DE1A062BAC1(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		goto IL_003b;
	}

IL_003b:
	{
	}
	{
		float L_0 = (0.0f);
		RuntimeObject* L_1 = Box(il2cpp_defaults.single_class, &L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_1, L_3, NULL);
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(((*(float*)UnBox(L_4, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}
}
// Method Definition Index: 27233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		goto IL_003b;
	}

IL_003b:
	{
	}
	{
		float L_0 = (1.0f);
		RuntimeObject* L_1 = Box(il2cpp_defaults.single_class, &L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_1, L_3, NULL);
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(((*(float*)UnBox(L_4, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}
}
// Method Definition Index: 27234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	float _returnValue;
	_returnValue = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___m_Param;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	uint8_t _returnValue;
	_returnValue = PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27237
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m17EADF9E737347D305917C867BAF0712D454C632_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	uint8_t V_3 = 0x0;
	{
		int32_t L_0 = __this->___m_ElementType;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_001b:
	{
		V_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		goto IL_0051;
	}

IL_0023:
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_2 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		V_0 = L_3;
		goto IL_0051;
	}

IL_003a:
	{
		uint8_t L_4;
		L_4 = PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_3 = L_4;
		String_t* L_5;
		L_5 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_3), NULL);
		V_0 = L_5;
		goto IL_0051;
	}

IL_004b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0051:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* PartialTensorElement_1_ToString_m17EADF9E737347D305917C867BAF0712D454C632_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	String_t* _returnValue;
	_returnValue = PartialTensorElement_1_ToString_m17EADF9E737347D305917C867BAF0712D454C632(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m1FE1004E999B5E2CA25B4469B7994E9323106B25_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___m_ElementType;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_001b:
	{
		V_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		goto IL_004f;
	}

IL_0023:
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_2 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		V_0 = L_3;
		goto IL_004f;
	}

IL_003a:
	{
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_4 = ___0_SymbolicDimNaming;
		uint8_t L_5;
		L_5 = PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		NullCheck(L_4);
		String_t* L_6;
		L_6 = Func_2_Invoke_mD7E298F192DECA9DAE0850030B0DF28BAFBB01B5_inline(L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_004f;
	}

IL_0049:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_004f:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* PartialTensorElement_1_ToString_m1FE1004E999B5E2CA25B4469B7994E9323106B25_AdjustorThunk (RuntimeObject* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	String_t* _returnValue;
	_returnValue = PartialTensorElement_1_ToString_m1FE1004E999B5E2CA25B4469B7994E9323106B25(_thisAdjusted, ___0_SymbolicDimNaming, method);
	return _returnValue;
}
// Method Definition Index: 27239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m31695DDAD67094E53A3D868DF4D643EE9C4017FE_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, float ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		float L_1 = __this->___m_Value;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		float L_4 = ___0_other;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		bool L_7;
		L_7 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, L_6, NULL);
		return L_7;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_m31695DDAD67094E53A3D868DF4D643EE9C4017FE_AdjustorThunk (RuntimeObject* __this, float ___0_other, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_m31695DDAD67094E53A3D868DF4D643EE9C4017FE(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 27240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_mD0A0F9ABFC75DF3884545FAF7C91BDD0024A9545_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_ElementType;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_003a;
		}
	}
	{
		float L_3 = __this->___m_Value;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_4);
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_other;
		float L_7 = L_6.___m_Value;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_8);
		bool L_10;
		L_10 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_5, L_9, NULL);
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		uint8_t L_11 = __this->___m_Param;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_12 = ___0_other;
		uint8_t L_13 = L_12.___m_Param;
		return (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}

IL_003a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_mD0A0F9ABFC75DF3884545FAF7C91BDD0024A9545_AdjustorThunk (RuntimeObject* __this, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_other, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_mD0A0F9ABFC75DF3884545FAF7C91BDD0024A9545(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 27241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m9E6A44E67BF24680C9A43D08A42FB506211D072B_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_2 = V_0;
		bool L_3;
		L_3 = PartialTensorElement_1_Equals_mD0A0F9ABFC75DF3884545FAF7C91BDD0024A9545(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_m9E6A44E67BF24680C9A43D08A42FB506211D072B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_m9E6A44E67BF24680C9A43D08A42FB506211D072B(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 27242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Eq_m1ECE8A9F03FB44B9035EACF7DBA48BB1D3BBF966(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_4;
	}

IL_0026:
	{
		bool L_5;
		L_5 = PartialTensorElement_1_get_isParam_m414393843CD945BD7973B2CC5EB08DE1A062BAC1((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		bool L_6;
		L_6 = PartialTensorElement_1_get_isParam_m414393843CD945BD7973B2CC5EB08DE1A062BAC1((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		uint8_t L_7;
		L_7 = PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		uint8_t L_8;
		L_8 = PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_0049:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Inequality_m82162E35073E9AF9B3F45230D7BEB55B9BFF9F55_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Eq_m1ECE8A9F03FB44B9035EACF7DBA48BB1D3BBF966(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_GreaterThanOrEqual_m5F4C7C91BA07707887630CE89AB08E77AEE2CB22_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Ge_mF01C944B8B0ABD60340FA74CE70DB1A545EC003E(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}

IL_0026:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___1_b;
		bool L_7;
		L_7 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_7;
	}
}
// Method Definition Index: 27245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_LessThanOrEqual_mAF5C99F7D580346AF058785F8ED074D65CDEF156_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Le_mF00FD5C9226820A6CA724FCE9DAE6772F15F1189(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}

IL_0026:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___1_b;
		bool L_7;
		L_7 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_7;
	}
}
// Method Definition Index: 27246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_GreaterThan_mC482FBC3B24285437FB8CC958411BE35058EA937_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Gt_m51183E2FBF428C572CED1D3440AA075CC7648891(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_4;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_LessThan_m3B9CF9E73D94FE8C24F9AB82580FE34A35971811_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Lt_m90AC622721F3D9D5CC3C8BC21A996CB22B91FE4B(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_4;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_op_BitwiseAnd_m946FCE25FCE44882D53348DC1736363C961B16F7_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_3 = ___0_a;
		return L_3;
	}

IL_000b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_4 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_8;
		L_8 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_9;
		L_9 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_9)
		{
			goto IL_002b;
		}
	}

IL_0025:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10;
		L_10 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}

IL_002b:
	{
		bool L_11;
		L_11 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		bool L_12;
		L_12 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		float L_13;
		L_13 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_14;
		L_14 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_15;
		L_15 = PartialTensorElement_1_BitwiseAnd_m6A948A7950AFBD040B5C34034477BA232B45C3D9(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_16;
		L_16 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_16;
	}

IL_0056:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_17;
		L_17 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_17;
	}
}
// Method Definition Index: 27249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_op_BitwiseOr_m9B618B3EA74FDC2367259674367E0B30DE25D8F3_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_3 = ___0_a;
		return L_3;
	}

IL_000b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_4 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_6)
		{
			goto IL_001a;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7 = ___1_b;
		return L_7;
	}

IL_001a:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_8 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_10;
		L_10 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_10)
		{
			goto IL_0029;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_11 = ___0_a;
		return L_11;
	}

IL_0029:
	{
		bool L_12;
		L_12 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		bool L_13;
		L_13 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		float L_14;
		L_14 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_15;
		L_15 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_16;
		L_16 = PartialTensorElement_1_BitwiseOr_m53C5B8C91A4A5D3FA05DB3629F98688D17EDA041(L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_17;
		L_17 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_17;
	}

IL_0054:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_18;
		L_18 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_18;
	}
}
// Method Definition Index: 27250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_op_ExclusiveOr_m1B0B442E138049AAD97AAC21313A73D74BD5B5F2_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_3;
		L_3 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_3;
	}

IL_000f:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_4 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7 = ___1_b;
		return L_7;
	}

IL_001e:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_8 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_10;
		L_10 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_11 = ___0_a;
		return L_11;
	}

IL_002d:
	{
		bool L_12;
		L_12 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		bool L_13;
		L_13 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		float L_14;
		L_14 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_15;
		L_15 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_16;
		L_16 = PartialTensorElement_1_BitwiseXor_m61AED6BEC191CC6A4BFB4D1379E24C0A96E503C8(L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_17;
		L_17 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_17;
	}

IL_0058:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_18;
		L_18 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_18;
	}
}
// Method Definition Index: 27251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_op_OnesComplement_m666F977CC440F76531A30712A7E3455435DDE0C5_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1;
		L_1 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_2;
		L_2 = PartialTensorElement_1_BitwiseNot_mCB6320DA842964CB74F991F9B9DA7DE3E90635EC(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_3;
		L_3 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_001b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_4;
		L_4 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_4;
	}
}
// Method Definition Index: 27252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_op_UnaryNegation_m0A62165E29F744E7DD9663845E2278F8B8AD917E_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1;
		L_1 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_2;
		L_2 = PartialTensorElement_1_Neg_mA298AF6377E0D1EC084AE91CEB443FD7D0948670(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_3;
		L_3 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_001b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_4;
		L_4 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_4;
	}
}
// Method Definition Index: 27253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_op_Addition_m79C5244F4FD85BBC2922D53324E842498CC48C4A_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_4;
		L_4 = PartialTensorElement_1_Add_mB23A8306AFD9760850C517E17D411BD4EBD694DA(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9 = ___1_b;
		return L_9;
	}

IL_003a:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_11;
		L_11 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_13 = ___0_a;
		return L_13;
	}

IL_0049:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_14;
		L_14 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_14;
	}
}
// Method Definition Index: 27254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_op_Subtraction_m67F24AD3C653D7C24AAC169557533A56A019FDDF_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_4;
		L_4 = PartialTensorElement_1_Sub_m00AFC9865F47A4DFA1D8A5DFB8E2FBB6A1627D97(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9 = ___0_a;
		return L_9;
	}

IL_003a:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_11 = ___1_b;
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_13;
		L_13 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_13;
	}

IL_0049:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_14;
		L_14 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_14;
	}
}
// Method Definition Index: 27255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_op_Multiply_mE2560B7E54763F01CA934F6435F81F0F7B40407C_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_4;
		L_4 = PartialTensorElement_1_Mul_m98A292FFB661A454C57C276675EE91FD0B153597(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10;
		L_10 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_11;
		L_11 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_11)
		{
			goto IL_004b;
		}
	}

IL_0045:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_12;
		L_12 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_12;
	}

IL_004b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_13 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_14;
		L_14 = PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_15;
		L_15 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_15)
		{
			goto IL_005a;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_16 = ___1_b;
		return L_16;
	}

IL_005a:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_17 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_18;
		L_18 = PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_19;
		L_19 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_19)
		{
			goto IL_0069;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_20 = ___0_a;
		return L_20;
	}

IL_0069:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_21;
		L_21 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_21;
	}
}
// Method Definition Index: 27256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_op_Division_mFAE5DA8DABE3519245544C4050A5CFC998FD33A8_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1;
		L_1 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_3 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0013:
	{
		bool L_4;
		L_4 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		bool L_5;
		L_5 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		float L_6;
		L_6 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_7;
		L_7 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_8;
		L_8 = PartialTensorElement_1_Div_mD37869918E8D019D9236FFF812D795787E09E458(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9;
		L_9 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_11;
		L_11 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_13;
		L_13 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_13;
	}

IL_0051:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_14 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_15;
		L_15 = PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_16;
		L_16 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_17 = ___0_a;
		return L_17;
	}

IL_0060:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_18 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_19 = ___1_b;
		bool L_20;
		L_20 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_18, L_19, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_21;
		L_21 = PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		return L_21;
	}

IL_006f:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_22;
		L_22 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_22;
	}
}
// Method Definition Index: 27257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Sign_m8B397EDAF69D7CC970B7E5047EA39CD43746E8C7_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1;
		L_1 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_2;
		L_2 = PartialTensorElement_1_Sign_mE8FC209D133404F664C2F162E5906A5AB67F3C48(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_3;
		L_3 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_3;
	}

IL_001b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_4;
		L_4 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_4;
	}
}
// Method Definition Index: 27258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Pow_m5424AEB401F985FC8C35700A325370106D80F54F_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_4;
		L_4 = PartialTensorElement_1_Pow_m29A68C720FD6B4181BD79CE2F622A3321180B790(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9;
		L_9 = PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_11;
		L_11 = PartialTensorElement_1_get_One_m13A0DB597247A4ABA6603154AA9CAB2729391295(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		bool L_12;
		L_12 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_13 = ___0_a;
		return L_13;
	}

IL_004d:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_14;
		L_14 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_14;
	}
}
// Method Definition Index: 27259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Mod_m9812927CB4B8A611B47FF0AE83B96A8749780DDE_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_4;
		L_4 = PartialTensorElement_1_Mod_m9E737A0F1F2677A7470CB8DE1EA71A3B523748CD(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_FMod_m82780111256F0295928281F364C797E7836E05B0_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_4;
		L_4 = PartialTensorElement_1_FMod_mF4B1C072F6E8D2809FC80354A329F60654E008D9(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7;
		L_7 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9;
		L_9 = PartialTensorElement_1_get_Zero_mA8C196255EE5EF25D5CA85F605C6D04F73AFA102(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_MaxDefinedElement_m81D7EA082290D9D655C1012112C9029F8E40AA86_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isUnknown_mB6AD5F88AE1B7B2FFCE6EA6494A38A44D6654701((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = ___1_b;
		return L_1;
	}

IL_000b:
	{
		bool L_2;
		L_2 = PartialTensorElement_1_get_isUnknown_mB6AD5F88AE1B7B2FFCE6EA6494A38A44D6654701((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_3 = ___0_a;
		return L_3;
	}

IL_0016:
	{
		bool L_4;
		L_4 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5 = ___1_b;
		return L_5;
	}

IL_0021:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_a;
		return L_6;
	}
}
// Method Definition Index: 27262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Min_m0E7A0F9B56584BC7722A686683C4E1001777CDF3_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_4;
		L_4 = PartialTensorElement_1_Min_mAC4ADF583A8149F6970B967EA217991F21707416(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9 = ___0_a;
		return L_9;
	}

IL_0036:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 PartialTensorElement_1_Max_m0DD27F1B05B0B933DAE4CD03CFA7A81320DD46B6_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_4;
		L_4 = PartialTensorElement_1_Max_mD4EE7C9B024683C2BBF542647122C62B502E0340(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5;
		L_5 = PartialTensorElement_1_Value_m76874CA0934B3645FFE167566467B8AF1FD25EF3(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}

IL_002b:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_9 = ___0_a;
		return L_9;
	}

IL_0036:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m89CFE6729A9CD7217987CF3D37083A629AB6BCBD(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
// Method Definition Index: 27264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Eq_mBB95EBFBB24EFCD9C87F970D2C9737272A215AE8_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_3;
	}

IL_0010:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_4 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5 = ___1_b;
		bool L_6;
		L_6 = PartialTensorElement_1_op_Inequality_m82162E35073E9AF9B3F45230D7BEB55B9BFF9F55(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_7;
	}

IL_0020:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8;
		L_8 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 27265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ne_m4FDA59D1621D1F644AEB4D4FA85EA8AB5C6F195F_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = ___1_b;
		bool L_2;
		L_2 = PartialTensorElement_1_op_Inequality_m82162E35073E9AF9B3F45230D7BEB55B9BFF9F55(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_3;
	}

IL_0010:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_4 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_5 = ___1_b;
		bool L_6;
		L_6 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_7;
	}

IL_0020:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8;
		L_8 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 27266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_mC0F3B885A66149186500EA8F6C18E2EB66CD9978_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Gt_m51183E2FBF428C572CED1D3440AA075CC7648891(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_5;
	}

IL_002e:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 27267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_mC389771AAA42E8923DFD441B4176C0FFBC63727A_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = PartialTensorElement_1_get_isValue_m3A2B9FCEA3CF0C889DFB3F37E9297FF528EFDD30((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		float L_2;
		L_2 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___0_a), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		float L_3;
		L_3 = PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_inline((&___1_b), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		bool L_4;
		L_4 = PartialTensorElement_1_Ge_mF01C944B8B0ABD60340FA74CE70DB1A545EC003E(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_5;
	}

IL_002e:
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_6 = ___0_a;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_7 = ___1_b;
		bool L_8;
		L_8 = PartialTensorElement_1_op_Equality_m03F397E509CF9365E59A6A46B82D71D84C43B133(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 27268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Lt_m946402D85B27234A09D59A506BEA8DA2C5059B56_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2;
		L_2 = PartialTensorElement_1_Gt_mC0F3B885A66149186500EA8F6C18E2EB66CD9978(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		return L_2;
	}
}
// Method Definition Index: 27269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Le_m6223B2C6230B7DB4ECB9E85F788C88983CBBF653_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___0_a, PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_0 = ___1_b;
		PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5 L_1 = ___0_a;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2;
		L_2 = PartialTensorElement_1_Ge_mC389771AAA42E8923DFD441B4176C0FFBC63727A(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return L_2;
	}
}
// Method Definition Index: 27270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Eq_m1ECE8A9F03FB44B9035EACF7DBA48BB1D3BBF966_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_0041;
	}

IL_0041:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		return (bool)((((float)L_9) == ((float)L_10))? 1 : 0);
	}
}
// Method Definition Index: 27271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Gt_m51183E2FBF428C572CED1D3440AA075CC7648891_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_0041;
	}

IL_0041:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		return (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
	}
}
// Method Definition Index: 27272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Ge_mF01C944B8B0ABD60340FA74CE70DB1A545EC003E_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_0044;
	}

IL_0044:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		return (bool)((((int32_t)((!(((float)L_9) >= ((float)L_10)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 27273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Lt_m90AC622721F3D9D5CC3C8BC21A996CB22B91FE4B_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		bool L_2;
		L_2 = PartialTensorElement_1_Gt_m51183E2FBF428C572CED1D3440AA075CC7648891(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_2;
	}
}
// Method Definition Index: 27274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Le_mF00FD5C9226820A6CA724FCE9DAE6772F15F1189_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		bool L_2;
		L_2 = PartialTensorElement_1_Ge_mF01C944B8B0ABD60340FA74CE70DB1A545EC003E(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_2;
	}
}
// Method Definition Index: 27275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_BitwiseAnd_m6A948A7950AFBD040B5C34034477BA232B45C3D9_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		float L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		float L_1 = ___0_a;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		float L_4 = ___1_b;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E2EA1DA8641F3AC7819A8D76EE243E8C115150F)), L_3, L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}
}
// Method Definition Index: 27276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_BitwiseOr_m53C5B8C91A4A5D3FA05DB3629F98688D17EDA041_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		float L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		float L_1 = ___0_a;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		float L_4 = ___1_b;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C7B4877FC53973ED4AB40213D55E994309CD6C5)), L_3, L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}
}
// Method Definition Index: 27277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_BitwiseXor_m61AED6BEC191CC6A4BFB4D1379E24C0A96E503C8_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		float L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		float L_1 = ___0_a;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		float L_4 = ___1_b;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C7B4877FC53973ED4AB40213D55E994309CD6C5)), L_3, L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}
}
// Method Definition Index: 27278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_BitwiseNot_mCB6320DA842964CB74F991F9B9DA7DE3E90635EC_gshared (float ___0_a, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		float L_0 = ___0_a;
		goto IL_003a;
	}

IL_003a:
	{
		float L_1 = ___0_a;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral642A30CBE3FDAC4E8BAB8D2817132F6CA926C1FE)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
// Method Definition Index: 27279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Mul_m98A292FFB661A454C57C276675EE91FD0B153597_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11 = ((float)il2cpp_codegen_multiply(L_9, L_10));
		RuntimeObject* L_12 = Box(il2cpp_defaults.single_class, &L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_12, L_14, NULL);
		return ((*(float*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Div_mD37869918E8D019D9236FFF812D795787E09E458_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11 = ((float)(L_9/L_10));
		RuntimeObject* L_12 = Box(il2cpp_defaults.single_class, &L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_12, L_14, NULL);
		return ((*(float*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Sign_mE8FC209D133404F664C2F162E5906A5AB67F3C48_gshared (float ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_0040;
	}

IL_0040:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_1 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = V_1;
		float L_6;
		L_6 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_5, NULL);
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.single_class, &L_7);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_8, L_10, NULL);
		return ((*(float*)UnBox(L_11, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Neg_mA298AF6377E0D1EC084AE91CEB443FD7D0948670_gshared (float ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_003a;
	}

IL_003a:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_1 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = V_1;
		float L_6 = ((-L_5));
		RuntimeObject* L_7 = Box(il2cpp_defaults.single_class, &L_6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_7, L_9, NULL);
		return ((*(float*)UnBox(L_10, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Add_mB23A8306AFD9760850C517E17D411BD4EBD694DA_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11 = ((float)il2cpp_codegen_add(L_9, L_10));
		RuntimeObject* L_12 = Box(il2cpp_defaults.single_class, &L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_12, L_14, NULL);
		return ((*(float*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Sub_m00AFC9865F47A4DFA1D8A5DFB8E2FBB6A1627D97_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11 = ((float)il2cpp_codegen_subtract(L_9, L_10));
		RuntimeObject* L_12 = Box(il2cpp_defaults.single_class, &L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_12, L_14, NULL);
		return ((*(float*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Max_mD4EE7C9B024683C2BBF542647122C62B502E0340_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_005d;
	}

IL_005d:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11;
		L_11 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_9, L_10, NULL);
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_defaults.single_class, &L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_16;
		L_16 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_13, L_15, NULL);
		return ((*(float*)UnBox(L_16, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Min_mAC4ADF583A8149F6970B967EA217991F21707416_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_005d;
	}

IL_005d:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11;
		L_11 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_9, L_10, NULL);
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_defaults.single_class, &L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_16;
		L_16 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_13, L_15, NULL);
		return ((*(float*)UnBox(L_16, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Pow_m29A68C720FD6B4181BD79CE2F622A3321180B790_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_005f;
	}

IL_005f:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11;
		L_11 = powf(L_9, L_10);
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_defaults.single_class, &L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_16;
		L_16 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_13, L_15, NULL);
		return ((*(float*)UnBox(L_16, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_Mod_m9E737A0F1F2677A7470CB8DE1EA71A3B523748CD_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_005d;
	}

IL_005d:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11 = V_3;
		float L_12 = V_3;
		float L_13 = (fmodf(((float)il2cpp_codegen_add((fmodf(L_9, L_10)), L_11)), L_12));
		RuntimeObject* L_14 = Box(il2cpp_defaults.single_class, &L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_14, L_16, NULL);
		return ((*(float*)UnBox(L_17, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PartialTensorElement_1_FMod_mF4B1C072F6E8D2809FC80354A329F60654E008D9_gshared (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___0_a;
		goto IL_0059;
	}

IL_0059:
	{
		float L_1 = ___0_a;
	}
	{
		float L_2 = ___0_a;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_3);
		V_2 = ((*(float*)UnBox(L_4, il2cpp_defaults.single_class)));
		float L_5 = ___1_b;
	}
	{
		float L_6 = ___1_b;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_7);
		V_3 = ((*(float*)UnBox(L_8, il2cpp_defaults.single_class)));
		float L_9 = V_2;
		float L_10 = V_3;
		float L_11;
		L_11 = math_fmod_mB41974736F5A2C3914BCEE03D01664819361782A_inline(L_9, L_10, NULL);
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_defaults.single_class, &L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_16;
		L_16 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_13, L_15, NULL);
		return ((*(float*)UnBox(L_16, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
	}
}
// Method Definition Index: 27290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_GetHashCode_m1F1318B629A5A9AB2C31697B1DB3D1409C7F64CA_gshared (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ElementType;
		uint8_t L_1 = __this->___m_Param;
		float L_2 = __this->___m_Value;
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashCode_Combine_TisElementType_tEB6A0613EEB254ABA7D12BEFB4803017A6B26E94_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA06B85B688DD80503E501FC5CA8F82B148A3CF20(L_0, L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t PartialTensorElement_1_GetHashCode_m1F1318B629A5A9AB2C31697B1DB3D1409C7F64CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5>(__this);
	int32_t _returnValue;
	_returnValue = PartialTensorElement_1_GetHashCode_m1F1318B629A5A9AB2C31697B1DB3D1409C7F64CA(_thisAdjusted, method);
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
// Method Definition Index: 27226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_get_Unknown_m392060961086221BEBC70067BAD8027CDD68C87A_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC V_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	memset(V_0, 0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	{
		il2cpp_codegen_initobj((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)V_0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Value_mB759345D1C61F520605271842686C23739BC11E1_gshared (Il2CppFullySharedGenericStruct ___0_value, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC V_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	memset(V_0, 0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	{
		il2cpp_codegen_initobj((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)V_0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_write_instance_field_data<int32_t>((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), (int32_t)1);
		il2cpp_codegen_write_instance_field_data<uint8_t>((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2), (uint8_t)0);
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		il2cpp_codegen_write_instance_field_data((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3), L_0, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Param_m981A4ACDF7B69D46DC6579BBE063DEEBDE981847_gshared (uint8_t ___0_param, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC V_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	memset(V_0, 0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	{
		il2cpp_codegen_initobj((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)V_0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_write_instance_field_data<int32_t>((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), (int32_t)2);
		uint8_t L_0 = ___0_param;
		il2cpp_codegen_write_instance_field_data<uint8_t>((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2), L_0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isUnknown_m8BDA52B059F9295FCC96E897A18D612F29C92E04_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isUnknown_m8BDA52B059F9295FCC96E897A18D612F29C92E04_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isUnknown_m8BDA52B059F9295FCC96E897A18D612F29C92E04(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isValue_m8D8096FDA16E14222B1007D89EAFFBC9FDD1271D_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isValue_m8D8096FDA16E14222B1007D89EAFFBC9FDD1271D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isValue_m8D8096FDA16E14222B1007D89EAFFBC9FDD1271D(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_get_isParam_m1BD14282AF94C1F610BBBCF94A5A464516A2861B_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_get_isParam_m1BD14282AF94C1F610BBBCF94A5A464516A2861B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_get_isParam_m1BD14282AF94C1F610BBBCF94A5A464516A2861B(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_get_Zero_m84FFB4DD6638C5BEDD694F3AE38273474D467275_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_13 = L_6;
	//<source_info:<no-source>:1>
	{
		bool L_0 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_1 = 0;
		RuntimeObject* L_2 = Box(il2cpp_defaults.int32_class, &L_1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_2, L_4, NULL);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_5, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_003b:
	{
		bool L_7 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = (0.0f);
		RuntimeObject* L_9 = Box(il2cpp_defaults.single_class, &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_9, L_11, NULL);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_12, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_007a:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_14 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}
}
// Method Definition Index: 27233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_get_One_m0E991785398B91FB451A53D480894758FA9E7FC6_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_13 = L_6;
	//<source_info:<no-source>:1>
	{
		bool L_0 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_1 = 1;
		RuntimeObject* L_2 = Box(il2cpp_defaults.int32_class, &L_1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_2, L_4, NULL);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_5, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_003b:
	{
		bool L_7 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = (1.0f);
		RuntimeObject* L_9 = Box(il2cpp_defaults.single_class, &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_9, L_11, NULL);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_12, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_007a:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_14 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}
}
// Method Definition Index: 27234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_get_value_m6508EA2B99149218FE1C7186B612FA99C6142756_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3)), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}
}
IL2CPP_EXTERN_C  void PartialTensorElement_1_get_value_m6508EA2B99149218FE1C7186B612FA99C6142756_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	PartialTensorElement_1_get_value_m6508EA2B99149218FE1C7186B612FA99C6142756_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
// Method Definition Index: 27235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_mE92368251B6A3D1BB0E70270C653536EF1DC8435_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t PartialTensorElement_1_get_param_mE92368251B6A3D1BB0E70270C653536EF1DC8435_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	uint8_t _returnValue;
	_returnValue = PartialTensorElement_1_get_param_mE92368251B6A3D1BB0E70270C653536EF1DC8435_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27237
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_m3E886AF17718BE22260C6931AD5B3A84BCD3E8B7_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	memset(V_2, 0, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	uint8_t V_3 = 0x0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_001b:
	{
		V_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		goto IL_0051;
	}

IL_0023:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), __this, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_2, L_2, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		Il2CppConstrainedCallData L_4;
		Il2CppMethodPointer L_5 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void*)(Il2CppFullySharedGenericStruct*)V_2, &L_4, L_3);
		typedef String_t* ( *func_L_6)(void*,const RuntimeMethod*);
		String_t* L_7 = ((func_L_6)L_5)(L_4.thisPtr,L_4.method);
		V_0 = L_7;
		goto IL_0051;
	}

IL_003a:
	{
		uint8_t L_8;
		L_8 = ((  uint8_t (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_3 = L_8;
		String_t* L_9;
		L_9 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_3), NULL);
		V_0 = L_9;
		goto IL_0051;
	}

IL_004b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0051:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  String_t* PartialTensorElement_1_ToString_m3E886AF17718BE22260C6931AD5B3A84BCD3E8B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	String_t* _returnValue;
	_returnValue = PartialTensorElement_1_ToString_m3E886AF17718BE22260C6931AD5B3A84BCD3E8B7(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 27238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensorElement_1_ToString_mA23D773CBAF651779616E9F9C903B81FF8C2BBC5_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	memset(V_2, 0, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_001b:
	{
		V_0 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		goto IL_004f;
	}

IL_0023:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), __this, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_2, L_2, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		Il2CppConstrainedCallData L_4;
		Il2CppMethodPointer L_5 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (void*)(Il2CppFullySharedGenericStruct*)V_2, &L_4, L_3);
		typedef String_t* ( *func_L_6)(void*,const RuntimeMethod*);
		String_t* L_7 = ((func_L_6)L_5)(L_4.thisPtr,L_4.method);
		V_0 = L_7;
		goto IL_004f;
	}

IL_003a:
	{
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_8 = ___0_SymbolicDimNaming;
		uint8_t L_9;
		L_9 = ((  uint8_t (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		NullCheck(L_8);
		String_t* L_10;
		L_10 = Func_2_Invoke_mD7E298F192DECA9DAE0850030B0DF28BAFBB01B5_inline(L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_004f;
	}

IL_0049:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_004f:
	{
		String_t* L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* PartialTensorElement_1_ToString_mA23D773CBAF651779616E9F9C903B81FF8C2BBC5_AdjustorThunk (RuntimeObject* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_SymbolicDimNaming, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	String_t* _returnValue;
	_returnValue = PartialTensorElement_1_ToString_mA23D773CBAF651779616E9F9C903B81FF8C2BBC5(_thisAdjusted, ___0_SymbolicDimNaming, method);
	return _returnValue;
}
// Method Definition Index: 27239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m7A3A53DD6CBE909375B43486CC2B2291019B7354_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Il2CppFullySharedGenericStruct ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3)), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_1);
		il2cpp_codegen_memcpy(L_3, ___0_other, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3);
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_2, L_4, NULL);
		return L_5;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_m7A3A53DD6CBE909375B43486CC2B2291019B7354_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_other, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_m7A3A53DD6CBE909375B43486CC2B2291019B7354(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 27240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m8EFC3315936A7FE81DDC26B0B9C048AC9A7F1A5D_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = L_1;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_1;
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		il2cpp_codegen_memcpy(L_1, ___0_other, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3)), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3);
		il2cpp_codegen_memcpy(L_5, ___0_other, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3)), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_6);
		bool L_8;
		L_8 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		uint8_t L_9 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		il2cpp_codegen_memcpy(L_10, ___0_other, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		uint8_t L_11 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		return (bool)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0);
	}

IL_003a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_m8EFC3315936A7FE81DDC26B0B9C048AC9A7F1A5D_AdjustorThunk (RuntimeObject* __this, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_other, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_m8EFC3315936A7FE81DDC26B0B9C048AC9A7F1A5D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 27241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Equals_m49FFF9CA8F9666BE12C7FFF01616813A6F94336A_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_2 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC V_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	memset(V_0, 0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_memcpy(V_0, (((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC)(PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))), SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), __this, L_2);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PartialTensorElement_1_Equals_m49FFF9CA8F9666BE12C7FFF01616813A6F94336A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	bool _returnValue;
	_returnValue = PartialTensorElement_1_Equals_m49FFF9CA8F9666BE12C7FFF01616813A6F94336A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 27242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Equality_m498E561461B50CD7C50028B294A4A660EDA9EE44_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12), NULL, L_2, L_3);
		return L_4;
	}

IL_0026:
	{
		bool L_5;
		L_5 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		bool L_6;
		L_6 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		uint8_t L_7;
		L_7 = ((  uint8_t (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		uint8_t L_8;
		L_8 = ((  uint8_t (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_0049:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_Inequality_mC0EED326E6D9616D71E0803853DC344567D7612A_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12), NULL, L_2, L_3);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_GreaterThanOrEqual_mB00FDCCFAA3A4061AC69070966850B3E15D943D0_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, L_2, L_3);
		return L_4;
	}

IL_0026:
	{
		il2cpp_codegen_memcpy(L_5, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_7;
		L_7 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_5, L_6);
		return L_7;
	}
}
// Method Definition Index: 27245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_LessThanOrEqual_mF312C0428F110F00D44B4B56087D5DBD86B6E0AF_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), NULL, L_2, L_3);
		return L_4;
	}

IL_0026:
	{
		il2cpp_codegen_memcpy(L_5, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_7;
		L_7 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_5, L_6);
		return L_7;
	}
}
// Method Definition Index: 27246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_GreaterThan_m25D991256471C943A7FBD31ECD2687D018A20913_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, L_2, L_3);
		return L_4;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_op_LessThan_m2EFC86389253D3823C5376536E4DE024688FF21D_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, L_2, L_3);
		return L_4;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_op_BitwiseAnd_m407D62205B5F81DCBE8FBBF52C024EA66C20A088_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_3 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_4 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_16 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_17 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = L_1;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_8 = L_1;
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_1, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_0, L_1);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_4, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		bool L_6;
		L_6 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_4, L_5);
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_memcpy(L_7, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_8);
		bool L_9;
		L_9 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_7, L_8);
		if (!L_9)
		{
			goto IL_002b;
		}
	}

IL_0025:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002b:
	{
		bool L_11;
		L_11 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		bool L_12;
		L_12 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_13);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_14);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19), NULL, L_13, L_14, (Il2CppFullySharedGenericStruct*)L_15);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_15, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_16);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0056:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_op_BitwiseOr_m0D509B39FB63F65C7B1D9A0D41D590DCC1980C19_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_3 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_4 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_8 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_11 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_17 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_18 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = L_1;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_1;
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_1, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_0, L_1);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_4, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		bool L_6;
		L_6 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_4, L_5);
		if (!L_6)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_7, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_001a:
	{
		il2cpp_codegen_memcpy(L_8, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_9);
		bool L_10;
		L_10 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_8, L_9);
		if (!L_10)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_memcpy(L_11, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0029:
	{
		bool L_12;
		L_12 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		bool L_13;
		L_13 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_14);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_15);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21), NULL, L_14, L_15, (Il2CppFullySharedGenericStruct*)L_16);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_16, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0054:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_18);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_op_ExclusiveOr_m5BC7D365ED121130E295953ACA6DC5D38276B46D_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_3 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_4 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_8 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_11 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_17 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_18 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = L_1;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_1;
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_1, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_0, L_1);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_000f:
	{
		il2cpp_codegen_memcpy(L_4, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		bool L_6;
		L_6 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_4, L_5);
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_7, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_8, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_9);
		bool L_10;
		L_10 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_8, L_9);
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_11, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002d:
	{
		bool L_12;
		L_12 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		bool L_13;
		L_13 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_14);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_15);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22), NULL, L_14, L_15, (Il2CppFullySharedGenericStruct*)L_16);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_16, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0058:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_18);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_op_OnesComplement_m5D37A79B69D973495171316EB163324DCA4BE4CF_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_3 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_4 = L_3;
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23), NULL, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_2, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_001b:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_op_UnaryNegation_mBF90599FAC99A5A20226E3B2DBF637485D85B466_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_3 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_4 = L_3;
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24), NULL, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_2, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_001b:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_op_Addition_m2522703AC61DE54EB52E37B16FA8567BEF3A68A4_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_13 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_14 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_11 = L_7;
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_4, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002b:
	{
		il2cpp_codegen_memcpy(L_6, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_7);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_003a:
	{
		il2cpp_codegen_memcpy(L_10, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_11);
		bool L_12;
		L_12 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_10, L_11);
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_memcpy(L_13, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0049:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_op_Subtraction_m71BEF9BFE54B95E207CF474043D1B753BC4BCD7B_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_13 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_14 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_11 = L_7;
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_4, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002b:
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_7);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_003a:
	{
		il2cpp_codegen_memcpy(L_10, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_11, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_12;
		L_12 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_10, L_11);
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0049:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_op_Multiply_m9510E4B3921097A2F052141436C7B659BD4C8A20_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_12 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_13 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_16 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_17 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_20 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_21 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_7;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_14 = L_7;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_18 = L_7;
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_4, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002b:
	{
		il2cpp_codegen_memcpy(L_6, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_7);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_10);
		bool L_11;
		L_11 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_9, L_10);
		if (!L_11)
		{
			goto IL_004b;
		}
	}

IL_0045:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_004b:
	{
		il2cpp_codegen_memcpy(L_13, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_14);
		bool L_15;
		L_15 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_13, L_14);
		if (!L_15)
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_16, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_005a:
	{
		il2cpp_codegen_memcpy(L_17, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_18);
		bool L_19;
		L_19 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_17, L_18);
		if (!L_19)
		{
			goto IL_0069;
		}
	}
	{
		il2cpp_codegen_memcpy(L_20, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_20, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0069:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_21);
		il2cpp_codegen_memcpy(il2cppRetVal, L_21, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_op_Division_mF2D2AA98D0E3EB8AF8C81D0554E9E128D9BA295C_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_13 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_14 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_17 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_18 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_21 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_22 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_11 = L_1;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_15 = L_1;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_19 = L_1;
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_1);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_0, L_1);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_3 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0013:
	{
		bool L_4;
		L_4 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		bool L_5;
		L_5 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_7);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29), NULL, L_6, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_8, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_003e:
	{
		il2cpp_codegen_memcpy(L_10, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_11);
		bool L_12;
		L_12 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_10, L_11);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0051:
	{
		il2cpp_codegen_memcpy(L_14, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_15);
		bool L_16;
		L_16 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_14, L_15);
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_memcpy(L_17, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0060:
	{
		il2cpp_codegen_memcpy(L_18, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_19, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_20;
		L_20 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_18, L_19);
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_21);
		il2cpp_codegen_memcpy(il2cppRetVal, L_21, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_006f:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_22);
		il2cpp_codegen_memcpy(il2cppRetVal, L_22, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Sign_m5CBB36DF767F52D3483DA84BEF2445F9D5B1D2A6_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_3 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_4 = L_3;
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30), NULL, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_2, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_001b:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Pow_m7C77D6C31EB216171D8ECE8592CF16137F1A1ADA_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_13 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_14 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_11 = L_7;
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_4, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002b:
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_7);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_003e:
	{
		il2cpp_codegen_memcpy(L_10, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_11);
		bool L_12;
		L_12 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_10, L_11);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_13, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_004d:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Mod_m4572BF8BBBF7427C557B9287ECADF4EC41AA83ED_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_4, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002b:
	{
		il2cpp_codegen_memcpy(L_6, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_7);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_003e:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_FMod_m71FCA756A2E1A58C7445F68BED2B846C7594B5E8_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_4, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002b:
	{
		il2cpp_codegen_memcpy(L_6, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_7);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_003e:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_MaxDefinedElement_mC8BFD86564BDEC349D9E941337BBCD8B599180F6_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_3 = L_1;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = L_1;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = L_1;
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_000b:
	{
		bool L_2;
		L_2 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0016:
	{
		bool L_4;
		L_4 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_memcpy(L_5, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0021:
	{
		il2cpp_codegen_memcpy(L_6, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Min_m2612B5AA9A65DC7FE0D9D16A8E769F03B92709F3_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_4, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002b:
	{
		il2cpp_codegen_memcpy(L_6, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_7, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0036:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Max_m9F582860530B89A4D71C6C814C3B88B39CED066E_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_9 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_10 = L_5;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		InvokerActionInvoker3< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35), NULL, L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), NULL, L_4, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_002b:
	{
		il2cpp_codegen_memcpy(L_6, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_7, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}

IL_0036:
	{
		InvokerActionInvoker1< PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), NULL, (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		return;
	}
}
// Method Definition Index: 27264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Eq_m21353DE3371646AE4DE642194CBC96670F820251_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_4 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = L_1;
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_1, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_0, L_1);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_3;
	}

IL_0010:
	{
		il2cpp_codegen_memcpy(L_4, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_5, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_6;
		L_6 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36), NULL, L_4, L_5);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_7;
	}

IL_0020:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8;
		L_8 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 27265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ne_mFE9AB5BAEEBA8C8B48C2D6410FC103CCEE8678E4_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_4 = L_0;
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_5 = L_1;
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_1, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 36), NULL, L_0, L_1);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_3;
	}

IL_0010:
	{
		il2cpp_codegen_memcpy(L_4, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_5, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_6;
		L_6 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_4, L_5);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_7;
		L_7 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_7;
	}

IL_0020:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_8;
		L_8 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 27266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Gt_m2C240164571407B997FF7D3850FB3EEA64454FE8_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, L_2, L_3);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_5;
	}

IL_002e:
	{
		il2cpp_codegen_memcpy(L_6, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_7, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(0, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 27267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Ge_m87BA82694AD4BA305399B8A8ECF39F092663EA49_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_6 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_7 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___0_a, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC*)___1_b, (Il2CppFullySharedGenericStruct*)L_3);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, L_2, L_3);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5;
		L_5 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_5;
	}

IL_002e:
	{
		il2cpp_codegen_memcpy(L_6, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_7, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		bool L_8;
		L_8 = InvokerFuncInvoker2< bool, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), NULL, L_6, L_7);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_9;
		L_9 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(1, PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 27268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Lt_m5D55F4D3020664869000125E1C40C2DF83ACF3BB_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_1, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2;
		L_2 = InvokerFuncInvoker2< PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 37), NULL, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 27269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensorElement_1_Le_mB0178D715ED9482F2050B0D89C2CB4A1C4A1E16C_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___0_a, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_0 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	const PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC L_1 = alloca(SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___1_b, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		il2cpp_codegen_memcpy(L_1, ___0_a, SizeOf_PartialTensorElement_1_t005656D038519578152C3A0EC603242D0D285C70);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2;
		L_2 = InvokerFuncInvoker2< PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC, PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 38), NULL, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 27270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Eq_m5F973A35648D02D2EA308B8C78C0B6C6A9EAA946_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_10 = L_0;
	const Il2CppFullySharedGenericStruct L_12 = L_0;
	const Il2CppFullySharedGenericStruct L_16 = L_0;
	const Il2CppFullySharedGenericStruct L_20 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_14 = L_4;
	const Il2CppFullySharedGenericStruct L_22 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0041:
	{
		il2cpp_codegen_memcpy(L_10, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_11 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_10);
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		il2cpp_codegen_memcpy(L_12, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_13 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_12);;
		V_2 = ((*(float*)UnBox(L_13, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_14, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_15 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_14);
		if (!L_15)
		{
			goto IL_0082;
		}
	}
	{
		il2cpp_codegen_memcpy(L_16, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_17 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_16);;
		V_3 = ((*(float*)UnBox(L_17, il2cpp_defaults.single_class)));
		float L_18 = V_2;
		float L_19 = V_3;
		return (bool)((((float)L_18) == ((float)L_19))? 1 : 0);
	}

IL_0082:
	{
		il2cpp_codegen_memcpy(L_20, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_20);
		il2cpp_codegen_memcpy(L_22, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_22);
		String_t* L_24;
		L_24 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2F0B48DCDDFA223545B5736EDEFF2ACCB30D887)), L_21, L_23, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}
}
// Method Definition Index: 27271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Gt_m5A82EBBDB5021AC9454A5F25395AF23846C49681_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_10 = L_0;
	const Il2CppFullySharedGenericStruct L_12 = L_0;
	const Il2CppFullySharedGenericStruct L_16 = L_0;
	const Il2CppFullySharedGenericStruct L_20 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_14 = L_4;
	const Il2CppFullySharedGenericStruct L_22 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0);
	}

IL_0041:
	{
		il2cpp_codegen_memcpy(L_10, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_11 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_10);
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		il2cpp_codegen_memcpy(L_12, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_13 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_12);;
		V_2 = ((*(float*)UnBox(L_13, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_14, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_15 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_14);
		if (!L_15)
		{
			goto IL_0082;
		}
	}
	{
		il2cpp_codegen_memcpy(L_16, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_17 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_16);;
		V_3 = ((*(float*)UnBox(L_17, il2cpp_defaults.single_class)));
		float L_18 = V_2;
		float L_19 = V_3;
		return (bool)((((float)L_18) > ((float)L_19))? 1 : 0);
	}

IL_0082:
	{
		il2cpp_codegen_memcpy(L_20, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_20);
		il2cpp_codegen_memcpy(L_22, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_22);
		String_t* L_24;
		L_24 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2F0B48DCDDFA223545B5736EDEFF2ACCB30D887)), L_21, L_23, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}
}
// Method Definition Index: 27272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Ge_mCC441367CBA187178814BF3F350C4E02B08BD6A5_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_10 = L_0;
	const Il2CppFullySharedGenericStruct L_12 = L_0;
	const Il2CppFullySharedGenericStruct L_16 = L_0;
	const Il2CppFullySharedGenericStruct L_20 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_14 = L_4;
	const Il2CppFullySharedGenericStruct L_22 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_10, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_11 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_10);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		il2cpp_codegen_memcpy(L_12, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_13 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_12);;
		V_2 = ((*(float*)UnBox(L_13, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_14, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_15 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_14);
		if (!L_15)
		{
			goto IL_0088;
		}
	}
	{
		il2cpp_codegen_memcpy(L_16, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_17 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_16);;
		V_3 = ((*(float*)UnBox(L_17, il2cpp_defaults.single_class)));
		float L_18 = V_2;
		float L_19 = V_3;
		return (bool)((((int32_t)((!(((float)L_18) >= ((float)L_19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0088:
	{
		il2cpp_codegen_memcpy(L_20, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_20);
		il2cpp_codegen_memcpy(L_22, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_22);
		String_t* L_24;
		L_24 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2F0B48DCDDFA223545B5736EDEFF2ACCB30D887)), L_21, L_23, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}
}
// Method Definition Index: 27273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Lt_m0C5945D6F3F2785B2A1ADC0DAB4E9C62DD01FF96_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		il2cpp_codegen_memcpy(L_1, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 27274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensorElement_1_Le_m932279C51A20D7F87E890E5F2B36B9B6A583E952_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		il2cpp_codegen_memcpy(L_1, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 27275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_BitwiseAnd_m2B94E3F9010A6AA967037DF31FD75876B3CA648A_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_15 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_17 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8&L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0059:
	{
		il2cpp_codegen_memcpy(L_15, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_15);
		il2cpp_codegen_memcpy(L_17, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_17);
		String_t* L_19;
		L_19 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E2EA1DA8641F3AC7819A8D76EE243E8C115150F)), L_16, L_18, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}
}
// Method Definition Index: 27276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_BitwiseOr_mEEEDA956FD2814540AD086E62F45B4C8FCAFD8FE_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_15 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_17 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8|L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0059:
	{
		il2cpp_codegen_memcpy(L_15, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_15);
		il2cpp_codegen_memcpy(L_17, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_17);
		String_t* L_19;
		L_19 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C7B4877FC53973ED4AB40213D55E994309CD6C5)), L_16, L_18, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}
}
// Method Definition Index: 27277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_BitwiseXor_m2A00AD018626E864D17B5514A2041555DF053DC6_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_15 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_17 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8^L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0059:
	{
		il2cpp_codegen_memcpy(L_15, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_15);
		il2cpp_codegen_memcpy(L_17, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_17);
		String_t* L_19;
		L_19 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C7B4877FC53973ED4AB40213D55E994309CD6C5)), L_16, L_18, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}
}
// Method Definition Index: 27278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_BitwiseNot_m679BA0C1EDFE430BD318B5AAA97C1E4336C3E4E9_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_10 = L_0;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = V_0;
		int32_t L_5 = ((~L_4));
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_6, L_8, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_003a:
	{
		il2cpp_codegen_memcpy(L_10, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral642A30CBE3FDAC4E8BAB8D2817132F6CA926C1FE)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}
}
// Method Definition Index: 27279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Mul_m96FDD134158A6CB0B3750D01F10123B56CF274C7_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_15 = L_0;
	const Il2CppFullySharedGenericStruct L_17 = L_0;
	const Il2CppFullySharedGenericStruct L_21 = L_0;
	const Il2CppFullySharedGenericStruct L_30 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_19 = L_4;
	const Il2CppFullySharedGenericStruct L_32 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply(L_8, L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0059:
	{
		il2cpp_codegen_memcpy(L_15, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_16 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_15);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_17, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_18 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_17);;
		V_2 = ((*(float*)UnBox(L_18, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_19, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_20 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_19);
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_21, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_22 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_21);;
		V_3 = ((*(float*)UnBox(L_22, il2cpp_defaults.single_class)));
		float L_23 = V_2;
		float L_24 = V_3;
		float L_25 = ((float)il2cpp_codegen_multiply(L_23, L_24));
		RuntimeObject* L_26 = Box(il2cpp_defaults.single_class, &L_25);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_29;
		L_29 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_26, L_28, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_29, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_00b2:
	{
		il2cpp_codegen_memcpy(L_30, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_30);
		il2cpp_codegen_memcpy(L_32, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_32);
		String_t* L_34;
		L_34 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7506E2E628394598494A749AA7EC051FC3C3AAE)), L_31, L_33, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}
}
// Method Definition Index: 27280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Div_m33D2CD5F725AF7F66088B2FAC4DE4A9AD422200A_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_15 = L_0;
	const Il2CppFullySharedGenericStruct L_17 = L_0;
	const Il2CppFullySharedGenericStruct L_21 = L_0;
	const Il2CppFullySharedGenericStruct L_30 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_19 = L_4;
	const Il2CppFullySharedGenericStruct L_32 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8/L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0059:
	{
		il2cpp_codegen_memcpy(L_15, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_16 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_15);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_17, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_18 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_17);;
		V_2 = ((*(float*)UnBox(L_18, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_19, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_20 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_19);
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_21, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_22 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_21);;
		V_3 = ((*(float*)UnBox(L_22, il2cpp_defaults.single_class)));
		float L_23 = V_2;
		float L_24 = V_3;
		float L_25 = ((float)(L_23/L_24));
		RuntimeObject* L_26 = Box(il2cpp_defaults.single_class, &L_25);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_29;
		L_29 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_26, L_28, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_29, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_00b2:
	{
		il2cpp_codegen_memcpy(L_30, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_30);
		il2cpp_codegen_memcpy(L_32, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_32);
		String_t* L_34;
		L_34 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7506E2E628394598494A749AA7EC051FC3C3AAE)), L_31, L_33, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}
}
// Method Definition Index: 27281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Sign_m15904DA45C8C3108C2156B23195441E2AEF56E8D_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_13 = L_0;
	const Il2CppFullySharedGenericStruct L_15 = L_0;
	const Il2CppFullySharedGenericStruct L_24 = L_0;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = V_0;
		float L_5 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_4,NULL));
		float L_6;
		L_6 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_5, NULL);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,float,float,false,false>(L_6,NULL));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_9, L_11, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_12, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0040:
	{
		il2cpp_codegen_memcpy(L_13, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_14 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_13);
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_15, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_16 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_15);;
		V_1 = ((*(float*)UnBox(L_16, il2cpp_defaults.single_class)));
		float L_17 = V_1;
		float L_18;
		L_18 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_17, NULL);
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_defaults.single_class, &L_19);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_23;
		L_23 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_20, L_22, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_007e:
	{
		il2cpp_codegen_memcpy(L_24, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_24);
		String_t* L_26;
		L_26 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062A6E32AA8D50093BC3CE21ADEAD0EEA6E5C429)), L_25, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_27, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
	}
}
// Method Definition Index: 27282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Neg_m414196024FDA9F0AD1FA92ED972E0D37C1873918_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_10 = L_0;
	const Il2CppFullySharedGenericStruct L_12 = L_0;
	const Il2CppFullySharedGenericStruct L_20 = L_0;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		int32_t L_4 = V_0;
		int32_t L_5 = ((-L_4));
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_6, L_8, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_003a:
	{
		il2cpp_codegen_memcpy(L_10, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_11 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_10);
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		il2cpp_codegen_memcpy(L_12, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_13 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_12);;
		V_1 = ((*(float*)UnBox(L_13, il2cpp_defaults.single_class)));
		float L_14 = V_1;
		float L_15 = ((-L_14));
		RuntimeObject* L_16 = Box(il2cpp_defaults.single_class, &L_15);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_19;
		L_19 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_16, L_18, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_19, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0074:
	{
		il2cpp_codegen_memcpy(L_20, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_20);
		String_t* L_22;
		L_22 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062A6E32AA8D50093BC3CE21ADEAD0EEA6E5C429)), L_21, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}
}
// Method Definition Index: 27283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Add_m9B36D57991C8314CF9CC3BF8288C07CCD9DD200C_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_15 = L_0;
	const Il2CppFullySharedGenericStruct L_17 = L_0;
	const Il2CppFullySharedGenericStruct L_21 = L_0;
	const Il2CppFullySharedGenericStruct L_30 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_19 = L_4;
	const Il2CppFullySharedGenericStruct L_32 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0059:
	{
		il2cpp_codegen_memcpy(L_15, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_16 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_15);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_17, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_18 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_17);;
		V_2 = ((*(float*)UnBox(L_18, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_19, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_20 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_19);
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_21, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_22 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_21);;
		V_3 = ((*(float*)UnBox(L_22, il2cpp_defaults.single_class)));
		float L_23 = V_2;
		float L_24 = V_3;
		float L_25 = ((float)il2cpp_codegen_add(L_23, L_24));
		RuntimeObject* L_26 = Box(il2cpp_defaults.single_class, &L_25);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_29;
		L_29 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_26, L_28, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_29, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_00b2:
	{
		il2cpp_codegen_memcpy(L_30, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_30);
		il2cpp_codegen_memcpy(L_32, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_32);
		String_t* L_34;
		L_34 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0DDE215FE64239F241B30EC241F47E5B268E9BE)), L_31, L_33, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}
}
// Method Definition Index: 27284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Sub_mC42288438E919AF26009D92FA9B7A4669ECF99A4_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_15 = L_0;
	const Il2CppFullySharedGenericStruct L_17 = L_0;
	const Il2CppFullySharedGenericStruct L_21 = L_0;
	const Il2CppFullySharedGenericStruct L_30 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_19 = L_4;
	const Il2CppFullySharedGenericStruct L_32 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0059:
	{
		il2cpp_codegen_memcpy(L_15, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_16 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_15);
		if (!L_16)
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_17, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_18 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_17);;
		V_2 = ((*(float*)UnBox(L_18, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_19, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_20 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_19);
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_21, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_22 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_21);;
		V_3 = ((*(float*)UnBox(L_22, il2cpp_defaults.single_class)));
		float L_23 = V_2;
		float L_24 = V_3;
		float L_25 = ((float)il2cpp_codegen_subtract(L_23, L_24));
		RuntimeObject* L_26 = Box(il2cpp_defaults.single_class, &L_25);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_29;
		L_29 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_26, L_28, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_29, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_00b2:
	{
		il2cpp_codegen_memcpy(L_30, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_30);
		il2cpp_codegen_memcpy(L_32, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_32);
		String_t* L_34;
		L_34 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3B08EA942992A306FA82994179F80FC8658CEAB)), L_31, L_33, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}
}
// Method Definition Index: 27285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Max_m7816E3B90574EA574DFD6804BF3913679801F37D_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_16 = L_0;
	const Il2CppFullySharedGenericStruct L_18 = L_0;
	const Il2CppFullySharedGenericStruct L_22 = L_0;
	const Il2CppFullySharedGenericStruct L_32 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_20 = L_4;
	const Il2CppFullySharedGenericStruct L_34 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_8, L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_12, L_14, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_005d:
	{
		il2cpp_codegen_memcpy(L_16, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_17 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_16);
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_memcpy(L_18, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_19 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_18);;
		V_2 = ((*(float*)UnBox(L_19, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_20, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_21 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_20);
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_memcpy(L_22, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_23 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_22);;
		V_3 = ((*(float*)UnBox(L_23, il2cpp_defaults.single_class)));
		float L_24 = V_2;
		float L_25 = V_3;
		float L_26;
		L_26 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_24, L_25, NULL);
		float L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_defaults.single_class, &L_27);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_31;
		L_31 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_28, L_30, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_00ba:
	{
		il2cpp_codegen_memcpy(L_32, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_32);
		il2cpp_codegen_memcpy(L_34, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_34);
		String_t* L_36;
		L_36 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral660A1A2C1ED97169DD5B080B3C546C65565890E1)), L_33, L_35, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_37 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_37, L_36, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, method);
	}
}
// Method Definition Index: 27286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Min_m7603C32ACE2C41FD19A262557226A9F4F0B8FD0E_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_16 = L_0;
	const Il2CppFullySharedGenericStruct L_18 = L_0;
	const Il2CppFullySharedGenericStruct L_22 = L_0;
	const Il2CppFullySharedGenericStruct L_32 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_20 = L_4;
	const Il2CppFullySharedGenericStruct L_34 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_8, L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_12, L_14, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_005d:
	{
		il2cpp_codegen_memcpy(L_16, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_17 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_16);
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_memcpy(L_18, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_19 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_18);;
		V_2 = ((*(float*)UnBox(L_19, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_20, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_21 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_20);
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_memcpy(L_22, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_23 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_22);;
		V_3 = ((*(float*)UnBox(L_23, il2cpp_defaults.single_class)));
		float L_24 = V_2;
		float L_25 = V_3;
		float L_26;
		L_26 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_24, L_25, NULL);
		float L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_defaults.single_class, &L_27);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_31;
		L_31 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_28, L_30, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_00ba:
	{
		il2cpp_codegen_memcpy(L_32, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_32);
		il2cpp_codegen_memcpy(L_34, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_34);
		String_t* L_36;
		L_36 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB52D68102DE6860A24B95C701AB761F54B70F5D)), L_33, L_35, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_37 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_37, L_36, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, method);
	}
}
// Method Definition Index: 27287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Pow_mE8461A58A1E0246F6079DDB5C79233D0D2A24E68_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_18 = L_0;
	const Il2CppFullySharedGenericStruct L_20 = L_0;
	const Il2CppFullySharedGenericStruct L_24 = L_0;
	const Il2CppFullySharedGenericStruct L_34 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_22 = L_4;
	const Il2CppFullySharedGenericStruct L_36 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		float L_9 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = V_1;
		float L_11 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_10,NULL));
		float L_12;
		L_12 = powf(L_9, L_11);
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.single_class, &L_13);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_14, L_16, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_17, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_005f:
	{
		il2cpp_codegen_memcpy(L_18, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_19 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_18);
		if (!L_19)
		{
			goto IL_00bc;
		}
	}
	{
		il2cpp_codegen_memcpy(L_20, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_21 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_20);;
		V_2 = ((*(float*)UnBox(L_21, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_22, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_23 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_22);
		if (!L_23)
		{
			goto IL_00bc;
		}
	}
	{
		il2cpp_codegen_memcpy(L_24, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_25 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_24);;
		V_3 = ((*(float*)UnBox(L_25, il2cpp_defaults.single_class)));
		float L_26 = V_2;
		float L_27 = V_3;
		float L_28;
		L_28 = powf(L_26, L_27);
		float L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_defaults.single_class, &L_29);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_33;
		L_33 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_30, L_32, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_33, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_00bc:
	{
		il2cpp_codegen_memcpy(L_34, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_34);
		il2cpp_codegen_memcpy(L_36, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_36);
		String_t* L_38;
		L_38 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF291E74C21B8B40550C8052DDF9B62343BC4516E)), L_35, L_37, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_39 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_39, L_38, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, method);
	}
}
// Method Definition Index: 27288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_Mod_m486E4DD502C95FD7A2F3A1EF6F11626A5E768A7A_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_17 = L_0;
	const Il2CppFullySharedGenericStruct L_19 = L_0;
	const Il2CppFullySharedGenericStruct L_23 = L_0;
	const Il2CppFullySharedGenericStruct L_34 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_21 = L_4;
	const Il2CppFullySharedGenericStruct L_36 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_8%L_9)), L_10))%L_11));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_16;
		L_16 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_13, L_15, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_16, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_005d:
	{
		il2cpp_codegen_memcpy(L_17, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_18 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_17);
		if (!L_18)
		{
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_memcpy(L_19, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_20 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_19);;
		V_2 = ((*(float*)UnBox(L_20, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_21, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_22 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_21);
		if (!L_22)
		{
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_memcpy(L_23, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_24 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_23);;
		V_3 = ((*(float*)UnBox(L_24, il2cpp_defaults.single_class)));
		float L_25 = V_2;
		float L_26 = V_3;
		float L_27 = V_3;
		float L_28 = V_3;
		float L_29 = (fmodf(((float)il2cpp_codegen_add((fmodf(L_25, L_26)), L_27)), L_28));
		RuntimeObject* L_30 = Box(il2cpp_defaults.single_class, &L_29);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_33;
		L_33 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_30, L_32, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_33, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_00ba:
	{
		il2cpp_codegen_memcpy(L_34, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_34);
		il2cpp_codegen_memcpy(L_36, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_36);
		String_t* L_38;
		L_38 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF291E74C21B8B40550C8052DDF9B62343BC4516E)), L_35, L_37, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_39 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_39, L_38, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, method);
	}
}
// Method Definition Index: 27289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensorElement_1_FMod_m5F78BF4DF1F818853C553409B894D01871ED7281_gshared (Il2CppFullySharedGenericStruct ___0_a, Il2CppFullySharedGenericStruct ___1_b, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_2 = L_0;
	const Il2CppFullySharedGenericStruct L_6 = L_0;
	const Il2CppFullySharedGenericStruct L_15 = L_0;
	const Il2CppFullySharedGenericStruct L_17 = L_0;
	const Il2CppFullySharedGenericStruct L_21 = L_0;
	const Il2CppFullySharedGenericStruct L_31 = L_0;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	const Il2CppFullySharedGenericStruct L_19 = L_4;
	const Il2CppFullySharedGenericStruct L_33 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		il2cpp_codegen_memcpy(L_0, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_0);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_2);;
		V_0 = ((*(int32_t*)UnBox(L_3, il2cpp_defaults.int32_class)));
		il2cpp_codegen_memcpy(L_4, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_5 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_4);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_7 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.int32_class, L_6);;
		V_1 = ((*(int32_t*)UnBox(L_7, il2cpp_defaults.int32_class)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%L_9));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_14, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_0059:
	{
		il2cpp_codegen_memcpy(L_15, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_16 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_15);
		if (!L_16)
		{
			goto IL_00b6;
		}
	}
	{
		il2cpp_codegen_memcpy(L_17, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_18 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_17);;
		V_2 = ((*(float*)UnBox(L_18, il2cpp_defaults.single_class)));
		il2cpp_codegen_memcpy(L_19, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		bool L_20 = il2cpp_codegen_isinst_runtime_check_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_19);
		if (!L_20)
		{
			goto IL_00b6;
		}
	}
	{
		il2cpp_codegen_memcpy(L_21, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_22 = il2cpp_codegen_isinst_runtime_sealed(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_defaults.single_class, L_21);;
		V_3 = ((*(float*)UnBox(L_22, il2cpp_defaults.single_class)));
		float L_23 = V_2;
		float L_24 = V_3;
		float L_25;
		L_25 = math_fmod_mB41974736F5A2C3914BCEE03D01664819361782A_inline(L_23, L_24, NULL);
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_defaults.single_class, &L_26);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_30;
		L_30 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_27, L_29, NULL);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_30, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}

IL_00b6:
	{
		il2cpp_codegen_memcpy(L_31, ___0_a, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_31);
		il2cpp_codegen_memcpy(L_33, ___1_b, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_33);
		String_t* L_35;
		L_35 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF291E74C21B8B40550C8052DDF9B62343BC4516E)), L_32, L_34, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_36, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
	}
}
// Method Definition Index: 27290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_GetHashCode_mAE28ECA700BB4E64093B8A60E7A9011231E5FD61_gshared (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		uint8_t L_1 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3)), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, int32_t, uint8_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t PartialTensorElement_1_GetHashCode_mAE28ECA700BB4E64093B8A60E7A9011231E5FD61_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC>(__this);
	int32_t _returnValue;
	_returnValue = PartialTensorElement_1_GetHashCode_mAE28ECA700BB4E64093B8A60E7A9011231E5FD61(_thisAdjusted, method);
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
// Method Definition Index: 27206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensor_1_get_length_mDFCE44C06DE010780BCAB2CBC3E2D8BB0D2EAD64_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_0 = __this->___m_Elements;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
// Method Definition Index: 27207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_get_isPartiallyKnown_mB5623C4B1C72AF3AFDCF54187E6B04350D747C59_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_0 = __this->___m_Elements;
		return (bool)((!(((RuntimeObject*)(PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 27208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_shape, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = AllocatorUtils_ToDataType_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE87ABD88E054DC20D2E8F983C2F9900E810836BD(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1 = ___0_shape;
		PartialTensor__ctor_m6238FD98606E33612500826063946157BB4451D3((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, L_0, L_1, NULL);
		bool L_2;
		L_2 = DynamicTensorShape_IsStatic_m39BBEB1B63848E7E96864C1759039F6C36EDEC4F((&___0_shape), NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_3;
		L_3 = DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E((&___0_shape), NULL);
		bool L_4;
		L_4 = DynamicTensorDim_op_LessThanOrEqual_m8D7D4138A386B73F28BAC3D94658A4DA1664B344(L_3, ((int32_t)16), NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_5;
		L_5 = DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E((&___0_shape), NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline((&V_0), NULL);
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_7 = (PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF*)(PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_6);
		__this->___m_Elements = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Elements), (void*)L_7);
	}

IL_003f:
	{
		return;
	}
}
// Method Definition Index: 27209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1__ctor_m2B1BCCFAAE4EF267DB0D60B75DA35D95A7F3D253_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0;
		L_0 = DynamicTensorShape_get_DynamicRank_m8F1FD8E6DEF8096A8C7AF1798A039EB0DFF1A658(NULL);
		PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// Method Definition Index: 27210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* PartialTensor_1_FromValues_m5765A22A9E642BA88AA06CAA0A0460575A1B4B94_gshared (TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_shape, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_values, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 L_0 = ___0_shape;
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1;
		memset((&L_1), 0, sizeof(L_1));
		DynamicTensorShape__ctor_mFF2F2E7D762213871A73FA122A4A651D92D480D2((&L_1), L_0, NULL);
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_2 = (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7(L_2, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_2;
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_3 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_3);
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_5 = V_0;
		return L_5;
	}

IL_0016:
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_values))->____pointer))->value, (L_8), ((&___1_values))->____length);
		uint8_t L_10 = (*(uint8_t*)L_9);
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_11;
		L_11 = PartialTensorElement_1_Value_mCBE3F751AF3B278D296D60D8699B9B5BC7EC6C62(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		NullCheck(L_6);
		PartialTensor_1_set_Item_m3AF393C6B15E59240E4A33ECB8C575F0A62E0913(L_6, L_7, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0037:
	{
		int32_t L_13 = V_1;
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_14 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001a;
		}
	}
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_16 = V_0;
		return L_16;
	}
}
// Method Definition Index: 27211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* PartialTensor_1_Copy_m2A6C1147C00D3ED49DE5926352548759003107E7_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_1 = (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_2 = __this->___m_Elements;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_3 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_3;
	}

IL_0016:
	{
		V_1 = 0;
		goto IL_0036;
	}

IL_001a:
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_4 = V_0;
		NullCheck(L_4);
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_5 = L_4->___m_Elements;
		int32_t L_6 = V_1;
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_7 = __this->___m_Elements;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0036:
	{
		int32_t L_12 = V_1;
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_13 = __this->___m_Elements;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_001a;
		}
	}
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_15 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_15;
	}
}
// Method Definition Index: 27212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* PartialTensor_1_MaxDefinedPartialTensor_m49EBADFB53F745E14E9236D31CA9666B61586D00_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this;
	}

IL_0005:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_2 = ___0_other;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(4, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_4;
		L_4 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_5 = ___0_other;
		NullCheck(L_5);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_6;
		L_6 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline(L_5, NULL);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_7;
		L_7 = DynamicTensorShape_MaxDefinedShape_mF7AE60427721FDCC1E01E195CA7CA0EF236E0DE9(L_4, L_6, NULL);
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_8 = (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7(L_8, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_8;
	}

IL_002c:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_10 = ___0_other;
		return L_10;
	}

IL_0036:
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_11 = ___0_other;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(4, L_11);
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this;
	}

IL_0040:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_13;
		L_13 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_14 = (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7(L_14, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_14;
		V_1 = 0;
		goto IL_0073;
	}

IL_0050:
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = V_1;
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_18;
		L_18 = PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_19 = ___0_other;
		int32_t L_20 = V_1;
		NullCheck(((PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)IsInstClass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_21;
		L_21 = PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849(((PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)IsInstClass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_22;
		L_22 = PartialTensorElement_1_MaxDefinedElement_mD7DCCB3EB6D280EF70B7569365F442A1C9E070F9(L_18, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_15);
		PartialTensor_1_set_Item_m3AF393C6B15E59240E4A33ECB8C575F0A62E0913(L_15, L_16, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0073:
	{
		int32_t L_24 = V_1;
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_25 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_27 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_27;
	}
}
// Method Definition Index: 27213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* PartialTensor_1_Reshape_m90B86A2E8340FE33566629790E0F9564AE1C45B5_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_newShape, bool ___1_allowZeroLength, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* V_0 = NULL;
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_1;
	memset((&V_1), 0, sizeof(V_1));
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_2;
	memset((&V_2), 0, sizeof(V_2));
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	{
		bool L_0;
		L_0 = DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0((&___0_newShape), NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1 = ___0_newShape;
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_2 = (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7(L_2, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_2;
	}

IL_0010:
	{
		bool L_3;
		L_3 = DynamicTensorShape_IsStatic_m39BBEB1B63848E7E96864C1759039F6C36EDEC4F((&___0_newShape), NULL);
		if (L_3)
		{
			goto IL_0130;
		}
	}
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_4;
		L_4 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_5 = ___0_newShape;
		bool L_6 = ___1_allowZeroLength;
		DynamicTensorShape_ReduceCommonFactors_mB1961AD7BF8F82AE725D07AD95C4AC306D17425B(L_4, L_5, (&V_1), (&V_2), (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), NULL);
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_7;
		L_7 = DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E((&V_1), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = DynamicTensorDim_get_isUnknown_mCA231982134E9614FF61489DA87C65C01D895D1B((&V_3), NULL);
		if (L_8)
		{
			goto IL_0130;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_9;
		L_9 = DynamicTensorDim_get_One_mCCE3BEC388900FAF48997076247EDBD60884038C(NULL);
		V_4 = L_9;
		V_9 = 0;
		goto IL_007d;
	}

IL_0050:
	{
		int32_t L_10 = V_9;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_11;
		L_11 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_1), L_10, NULL);
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_12;
		L_12 = DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB(NULL);
		bool L_13;
		L_13 = DynamicTensorDim_op_Equality_m410D5EFF0915012355AC6CADBA4074ED362C78AF(L_11, L_12, NULL);
		if (L_13)
		{
			goto IL_0077;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_14 = V_4;
		int32_t L_15 = V_9;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_16;
		L_16 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_1), L_15, NULL);
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_17;
		L_17 = DynamicTensorDim_op_Multiply_mBEE9559613E02CDAB6BE2381B69742B25D05A19B(L_14, L_16, NULL);
		V_4 = L_17;
	}

IL_0077:
	{
		int32_t L_18 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007d:
	{
		int32_t L_19 = V_9;
		int32_t L_20;
		L_20 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_1), NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0050;
		}
	}
	{
		V_5 = (bool)0;
		V_6 = 1;
		V_7 = 0;
		V_8 = 0;
		V_10 = 0;
		goto IL_00ef;
	}

IL_0099:
	{
		int32_t L_21 = V_10;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_22;
		L_22 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_2), L_21, NULL);
		V_11 = L_22;
		bool L_23;
		L_23 = DynamicTensorDim_get_isValue_m012693C8E5922412211FCA74AE185900893AAD8D((&V_11), NULL);
		if (!L_23)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_24 = V_10;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_25;
		L_25 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_2), L_24, NULL);
		V_11 = L_25;
		int32_t L_26;
		L_26 = DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline((&V_11), NULL);
		if (L_26)
		{
			goto IL_00c6;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_00e9;
	}

IL_00c6:
	{
		int32_t L_27 = V_6;
		int32_t L_28 = V_10;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_29;
		L_29 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_2), L_28, NULL);
		V_11 = L_29;
		int32_t L_30;
		L_30 = DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline((&V_11), NULL);
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_27, L_30));
		goto IL_00e9;
	}

IL_00df:
	{
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_10;
		V_8 = L_32;
	}

IL_00e9:
	{
		int32_t L_33 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ef:
	{
		int32_t L_34 = V_10;
		int32_t L_35;
		L_35 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_2), NULL);
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_36 = V_6;
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_37 = V_7;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0130;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_38 = V_3;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_39;
		L_39 = DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB(NULL);
		bool L_40;
		L_40 = DynamicTensorDim_op_Equality_m410D5EFF0915012355AC6CADBA4074ED362C78AF(L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_0125;
		}
	}
	{
		bool L_41 = V_5;
		if (L_41)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_42 = V_8;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_43;
		L_43 = DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB(NULL);
		DynamicTensorShape_set_Item_mF33039B5CFB8387C708D159805116AFD2B70B709((&___0_newShape), L_42, L_43, NULL);
		goto IL_0130;
	}

IL_0125:
	{
		int32_t L_44 = V_8;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_45 = V_4;
		DynamicTensorShape_set_Item_mF33039B5CFB8387C708D159805116AFD2B70B709((&___0_newShape), L_44, L_45, NULL);
	}

IL_0130:
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_46 = ___0_newShape;
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_47 = (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m779C7C2FB204F797E2F1FD17427DB4068912C6D7(L_47, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_47;
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_48 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_48);
		bool L_49;
		L_49 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_48);
		if (!L_49)
		{
			goto IL_0147;
		}
	}
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_50;
		L_50 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_50)
		{
			goto IL_0149;
		}
	}

IL_0147:
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_51 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_51;
	}

IL_0149:
	{
		V_12 = 0;
		goto IL_016e;
	}

IL_014e:
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_52 = V_0;
		NullCheck(L_52);
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_53 = L_52->___m_Elements;
		int32_t L_54 = V_12;
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_55 = __this->___m_Elements;
		int32_t L_56 = V_12;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD)L_58);
		int32_t L_59 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_016e:
	{
		int32_t L_60 = V_12;
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_61 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_61);
		int32_t L_62;
		L_62 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_61);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_014e;
		}
	}
	{
		PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* L_63 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_63;
	}
}
// Method Definition Index: 27215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_IsStatic_m11A0E9305EA5FE3012BFA19A0B2E96E57FE80967_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_1 = __this->___m_Elements;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = PartialTensorElement_1_get_isValue_m7389516003FEA9656DBE189B9402C5F72FEABF07(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0027:
	{
		int32_t L_5 = V_0;
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_6 = __this->___m_Elements;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 27216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, int32_t ___0_d0, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_0 = __this->___m_Elements;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_1;
		L_1 = PartialTensorElement_1_get_Unknown_mFF102D7989E2D8943EC374F2A9D2EC5BC9F93B13(il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_1;
	}

IL_000e:
	{
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_2 = __this->___m_Elements;
		int32_t L_3 = ___0_d0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// Method Definition Index: 27217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1_set_Item_m3AF393C6B15E59240E4A33ECB8C575F0A62E0913_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, int32_t ___0_d0, PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_0 = __this->___m_Elements;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_1 = __this->___m_Elements;
		int32_t L_2 = ___0_d0;
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_3 = ___1_value;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD)L_3);
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 27218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD PartialTensor_1_get_Item_mBDD74BF8B6DBED5E4801A16770949A7550430805_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_d0), PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1;
		L_1 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_d0), PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_RuntimeMethod_var);
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_2;
		L_2 = PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_2;
	}

IL_0017:
	{
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_3;
		L_3 = PartialTensorElement_1_get_Unknown_mFF102D7989E2D8943EC374F2A9D2EC5BC9F93B13(il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_3;
	}
}
// Method Definition Index: 27219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C* PartialTensor_1_ToTensor_m8C7DC9E2127B6CF8815C63D61AAEDB626F7D70FE_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0;
		L_0 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		V_0 = L_0;
		TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 L_1;
		L_1 = DynamicTensorShape_ToTensorShape_m9C6807E3951BFFB7210A5438BF87E774BAF12A35((&V_0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = PartialTensor_1_ToArray_mE6648684A1E20CA5754DD9D36535C27ADCCA7AFB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Tensor_1_t32474E941CB35672DFCB1269F4D78143D87621FF* L_3 = (Tensor_1_t32474E941CB35672DFCB1269F4D78143D87621FF*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
		Tensor_1__ctor_mAD78C6473A79346E78EA2A02F0C7BA3C3D8F1482(L_3, L_1, L_2, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C*)L_3;
	}
}
// Method Definition Index: 27220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PartialTensor_1_ToArray_mE6648684A1E20CA5754DD9D36535C27ADCCA7AFB_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(8, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_000a:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_004f;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_5 = __this->___m_Elements;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint8_t L_7;
		L_7 = PartialTensorElement_1_get_value_m2530B78347A992656D164951085D073D5E499CF0_inline(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		uint8_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 24)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_9, L_11, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((*(uint8_t*)UnBox(L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004f:
	{
		int32_t L_14 = V_1;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		return L_16;
	}
}
// Method Definition Index: 27221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1_CopyElement_m9D54AAFFE1EF8FE4FCC7931ABA2C46647AE559F2_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, int32_t ___0_dstIndex, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___1_src, int32_t ___2_srcIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_dstIndex;
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_1 = ___1_src;
		int32_t L_2 = ___2_srcIndex;
		NullCheck(L_1);
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_3;
		L_3 = PartialTensor_Get_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC0BA59FB32DF433F9D8466A22264FCF846736733(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		PartialTensor_Set_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m657DDE8748B268B6A9507D7F69C9C36B6ED92C47((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
// Method Definition Index: 27222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_IsEquivalent_m74205D7C45A02D013D66D097FA69FDEBA4035D2B_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_0 = ___0_other;
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
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_1;
		L_1 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_4;
		L_4 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0((&V_0), NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_6 = ___0_other;
		NullCheck(L_6);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_7;
		L_7 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline(L_6, NULL);
		V_0 = L_7;
		bool L_8;
		L_8 = DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0((&V_0), NULL);
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_9;
		L_9 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_10 = ___0_other;
		NullCheck(L_10);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_11;
		L_11 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline(L_10, NULL);
		bool L_12;
		L_12 = DynamicTensorShape_op_Inequality_mCCA9433FAEF48A6167FD41B38E372E309E5789E7(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_14 = ___0_other;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(4, L_14);
		if (L_15)
		{
			goto IL_005e;
		}
	}
	{
		return (bool)1;
	}

IL_005e:
	{
		V_1 = 0;
		goto IL_0085;
	}

IL_0062:
	{
		int32_t L_16 = V_1;
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_17;
		L_17 = PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_17;
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_18 = ___0_other;
		int32_t L_19 = V_1;
		NullCheck(((PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)IsInstClass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_20;
		L_20 = PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849(((PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)IsInstClass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_21;
		L_21 = PartialTensorElement_1_Equals_mB3A4F956EC878E3C0206C1884D42E04B785D7B49((&V_2), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		return (bool)0;
	}

IL_0081:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0085:
	{
		int32_t L_23 = V_1;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 27223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_IsEqual_m9EDD0B929DD2C20FA7C75FDD0663CF2492D23AD2_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_0 = ___0_other;
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
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_1;
		L_1 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_5 = ___0_other;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(4, L_5);
		if (L_6)
		{
			goto IL_0027;
		}
	}

IL_0025:
	{
		return (bool)0;
	}

IL_0027:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_8 = ___0_other;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5, L_8);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003b:
	{
		int32_t L_10 = V_0;
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_11;
		L_11 = PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_12 = ___0_other;
		int32_t L_13 = V_0;
		NullCheck(((PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)IsInstClass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_14;
		L_14 = PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849(((PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5*)IsInstClass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_15;
		L_15 = PartialTensorElement_1_op_Equality_m815EFE07CCC904A24A887C3EEC02E07B428D64CA(L_11, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_15)
		{
			goto IL_0057;
		}
	}
	{
		return (bool)0;
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 27224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensor_1_ToString_m34223C036C8E8BDA3FA6379D9D20166DF59041FA_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_GetParamName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (!L_1)
		{
			goto IL_0083;
		}
	}
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_2 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		V_1 = L_2;
		int32_t L_3;
		L_3 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_1), NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
	}

IL_002b:
	{
		V_2 = 0;
		goto IL_0059;
	}

IL_002f:
	{
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_003e:
	{
		int32_t L_9 = V_2;
		PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD L_10;
		L_10 = PartialTensor_1_get_Item_m3300EEF69A29E25A5CA9C6DB18B152AEAF255849(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_3 = L_10;
		StringBuilder_t* L_11 = V_0;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_12 = ___0_GetParamName;
		String_t* L_13;
		L_13 = PartialTensorElement_1_ToString_mD89C2C26770C99E317E538EE135303974A53BE3B((&V_3), L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0059:
	{
		int32_t L_16 = V_2;
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_17 = __this->___m_Elements;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_002f;
		}
	}
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_19 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		V_1 = L_19;
		int32_t L_20;
		L_20 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_1), NULL);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		goto IL_00ba;
	}

IL_0083:
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_24;
		L_24 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		V_4 = L_24;
		Il2CppFakeBox<int32_t> L_25(DataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_il2cpp_TypeInfo_var, V_4);
		String_t* L_26;
		L_26 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_25), NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_26, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_30 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		V_1 = L_30;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_31 = ___0_GetParamName;
		String_t* L_32;
		L_32 = DynamicTensorShape_ToString_m3D90ADD327BB61433892DD46A674A3E7C7FD566A((&V_1), L_31, NULL);
		NullCheck(L_29);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, L_32, NULL);
	}

IL_00ba:
	{
		StringBuilder_t* L_34 = V_0;
		NullCheck((RuntimeObject*)L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_34);
		return L_35;
	}
}
// Method Definition Index: 27225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensor_1_GetHashCode_m6AFDE8F3EE8F5DFAB69D8444C94FB3B0C7892398_gshared (PartialTensor_1_tE8A2A27A4B8C09F1F20D7FB870E3D96BAB0F43A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_DataType;
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE(L_0, L_1, HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE_RuntimeMethod_var);
		V_0 = L_2;
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_3 = __this->___m_Elements;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_001c:
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		PartialTensorElement_1U5BU5D_t06260B78535B56E297C0AFF871B08AB57A9155CF* L_6 = __this->___m_Elements;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = PartialTensorElement_1_GetHashCode_mC42BE2A52C4F6D3A2585B4633CD7B444C9A7D5F5(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277(L_5, L_8, HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277_RuntimeMethod_var);
		V_0 = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0042:
	{
		int32_t L_11 = V_1;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_13 = V_0;
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
// Method Definition Index: 27206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensor_1_get_length_m2E09AA3EBEC618C6CCCEF1A0A3DABA445FF47E28_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_0 = __this->___m_Elements;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
// Method Definition Index: 27207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_get_isPartiallyKnown_mAD32727FAB7B8A4881D06FF5FD0A410A8822B24B_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_0 = __this->___m_Elements;
		return (bool)((!(((RuntimeObject*)(PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 27208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_shape, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = AllocatorUtils_ToDataType_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mEFD86FE16E49498B8CCE16009652442C0B93DF46(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1 = ___0_shape;
		PartialTensor__ctor_m6238FD98606E33612500826063946157BB4451D3((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, L_0, L_1, NULL);
		bool L_2;
		L_2 = DynamicTensorShape_IsStatic_m39BBEB1B63848E7E96864C1759039F6C36EDEC4F((&___0_shape), NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_3;
		L_3 = DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E((&___0_shape), NULL);
		bool L_4;
		L_4 = DynamicTensorDim_op_LessThanOrEqual_m8D7D4138A386B73F28BAC3D94658A4DA1664B344(L_3, ((int32_t)16), NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_5;
		L_5 = DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E((&___0_shape), NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline((&V_0), NULL);
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_7 = (PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F*)(PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_6);
		__this->___m_Elements = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Elements), (void*)L_7);
	}

IL_003f:
	{
		return;
	}
}
// Method Definition Index: 27209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1__ctor_m57CF58C9E54562457A9397FDA50F71C1985DC081_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0;
		L_0 = DynamicTensorShape_get_DynamicRank_m8F1FD8E6DEF8096A8C7AF1798A039EB0DFF1A658(NULL);
		PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// Method Definition Index: 27210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* PartialTensor_1_FromValues_m706F7B634981F925BF8F7242A9D7B1B0656DB194_gshared (TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_shape, ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 ___1_values, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 L_0 = ___0_shape;
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1;
		memset((&L_1), 0, sizeof(L_1));
		DynamicTensorShape__ctor_mFF2F2E7D762213871A73FA122A4A651D92D480D2((&L_1), L_0, NULL);
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_2 = (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F(L_2, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_2;
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_3 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_3);
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_5 = V_0;
		return L_5;
	}

IL_0016:
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_1;
		int16_t* L_9;
		L_9 = il2cpp_span_get_item((int16_t*)((Il2CppByReference*)&(((&___1_values))->____pointer))->value, (L_8), ((&___1_values))->____length);
		int16_t L_10 = (*(int16_t*)L_9);
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_11;
		L_11 = PartialTensorElement_1_Value_mD69DBF92BCFC75114EA197740F64B7FA134AB6F4(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		NullCheck(L_6);
		PartialTensor_1_set_Item_mF104C924F4447F86162D60B9E025BD465B0455F4(L_6, L_7, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0037:
	{
		int32_t L_13 = V_1;
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_14 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001a;
		}
	}
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_16 = V_0;
		return L_16;
	}
}
// Method Definition Index: 27211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* PartialTensor_1_Copy_m507C42958857E4F697570A606816D640921EDDE0_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_1 = (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_2 = __this->___m_Elements;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_3 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_3;
	}

IL_0016:
	{
		V_1 = 0;
		goto IL_0036;
	}

IL_001a:
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_4 = V_0;
		NullCheck(L_4);
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_5 = L_4->___m_Elements;
		int32_t L_6 = V_1;
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_7 = __this->___m_Elements;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0036:
	{
		int32_t L_12 = V_1;
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_13 = __this->___m_Elements;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_001a;
		}
	}
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_15 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_15;
	}
}
// Method Definition Index: 27212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* PartialTensor_1_MaxDefinedPartialTensor_m0BEFDFC717C1AD9FA820EA5B73A065B3DD48D90E_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this;
	}

IL_0005:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_2 = ___0_other;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(4, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_4;
		L_4 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_5 = ___0_other;
		NullCheck(L_5);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_6;
		L_6 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline(L_5, NULL);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_7;
		L_7 = DynamicTensorShape_MaxDefinedShape_mF7AE60427721FDCC1E01E195CA7CA0EF236E0DE9(L_4, L_6, NULL);
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_8 = (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F(L_8, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_8;
	}

IL_002c:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_10 = ___0_other;
		return L_10;
	}

IL_0036:
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_11 = ___0_other;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(4, L_11);
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this;
	}

IL_0040:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_13;
		L_13 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_14 = (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F(L_14, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_14;
		V_1 = 0;
		goto IL_0073;
	}

IL_0050:
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = V_1;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_18;
		L_18 = PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_19 = ___0_other;
		int32_t L_20 = V_1;
		NullCheck(((PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)IsInstClass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_21;
		L_21 = PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8(((PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)IsInstClass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_22;
		L_22 = PartialTensorElement_1_MaxDefinedElement_m663CE9E679337880AE3D12204B48E6BFA20E38F9(L_18, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_15);
		PartialTensor_1_set_Item_mF104C924F4447F86162D60B9E025BD465B0455F4(L_15, L_16, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0073:
	{
		int32_t L_24 = V_1;
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_25 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_27 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_27;
	}
}
// Method Definition Index: 27213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* PartialTensor_1_Reshape_m777D6F8FC7A59DFF958CE29CC8E7F95F481ED501_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_newShape, bool ___1_allowZeroLength, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* V_0 = NULL;
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_1;
	memset((&V_1), 0, sizeof(V_1));
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_2;
	memset((&V_2), 0, sizeof(V_2));
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	{
		bool L_0;
		L_0 = DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0((&___0_newShape), NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1 = ___0_newShape;
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_2 = (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F(L_2, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_2;
	}

IL_0010:
	{
		bool L_3;
		L_3 = DynamicTensorShape_IsStatic_m39BBEB1B63848E7E96864C1759039F6C36EDEC4F((&___0_newShape), NULL);
		if (L_3)
		{
			goto IL_0130;
		}
	}
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_4;
		L_4 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_5 = ___0_newShape;
		bool L_6 = ___1_allowZeroLength;
		DynamicTensorShape_ReduceCommonFactors_mB1961AD7BF8F82AE725D07AD95C4AC306D17425B(L_4, L_5, (&V_1), (&V_2), (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), NULL);
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_7;
		L_7 = DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E((&V_1), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = DynamicTensorDim_get_isUnknown_mCA231982134E9614FF61489DA87C65C01D895D1B((&V_3), NULL);
		if (L_8)
		{
			goto IL_0130;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_9;
		L_9 = DynamicTensorDim_get_One_mCCE3BEC388900FAF48997076247EDBD60884038C(NULL);
		V_4 = L_9;
		V_9 = 0;
		goto IL_007d;
	}

IL_0050:
	{
		int32_t L_10 = V_9;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_11;
		L_11 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_1), L_10, NULL);
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_12;
		L_12 = DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB(NULL);
		bool L_13;
		L_13 = DynamicTensorDim_op_Equality_m410D5EFF0915012355AC6CADBA4074ED362C78AF(L_11, L_12, NULL);
		if (L_13)
		{
			goto IL_0077;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_14 = V_4;
		int32_t L_15 = V_9;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_16;
		L_16 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_1), L_15, NULL);
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_17;
		L_17 = DynamicTensorDim_op_Multiply_mBEE9559613E02CDAB6BE2381B69742B25D05A19B(L_14, L_16, NULL);
		V_4 = L_17;
	}

IL_0077:
	{
		int32_t L_18 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007d:
	{
		int32_t L_19 = V_9;
		int32_t L_20;
		L_20 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_1), NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0050;
		}
	}
	{
		V_5 = (bool)0;
		V_6 = 1;
		V_7 = 0;
		V_8 = 0;
		V_10 = 0;
		goto IL_00ef;
	}

IL_0099:
	{
		int32_t L_21 = V_10;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_22;
		L_22 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_2), L_21, NULL);
		V_11 = L_22;
		bool L_23;
		L_23 = DynamicTensorDim_get_isValue_m012693C8E5922412211FCA74AE185900893AAD8D((&V_11), NULL);
		if (!L_23)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_24 = V_10;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_25;
		L_25 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_2), L_24, NULL);
		V_11 = L_25;
		int32_t L_26;
		L_26 = DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline((&V_11), NULL);
		if (L_26)
		{
			goto IL_00c6;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_00e9;
	}

IL_00c6:
	{
		int32_t L_27 = V_6;
		int32_t L_28 = V_10;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_29;
		L_29 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_2), L_28, NULL);
		V_11 = L_29;
		int32_t L_30;
		L_30 = DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline((&V_11), NULL);
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_27, L_30));
		goto IL_00e9;
	}

IL_00df:
	{
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_10;
		V_8 = L_32;
	}

IL_00e9:
	{
		int32_t L_33 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ef:
	{
		int32_t L_34 = V_10;
		int32_t L_35;
		L_35 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_2), NULL);
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_36 = V_6;
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_37 = V_7;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0130;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_38 = V_3;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_39;
		L_39 = DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB(NULL);
		bool L_40;
		L_40 = DynamicTensorDim_op_Equality_m410D5EFF0915012355AC6CADBA4074ED362C78AF(L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_0125;
		}
	}
	{
		bool L_41 = V_5;
		if (L_41)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_42 = V_8;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_43;
		L_43 = DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB(NULL);
		DynamicTensorShape_set_Item_mF33039B5CFB8387C708D159805116AFD2B70B709((&___0_newShape), L_42, L_43, NULL);
		goto IL_0130;
	}

IL_0125:
	{
		int32_t L_44 = V_8;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_45 = V_4;
		DynamicTensorShape_set_Item_mF33039B5CFB8387C708D159805116AFD2B70B709((&___0_newShape), L_44, L_45, NULL);
	}

IL_0130:
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_46 = ___0_newShape;
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_47 = (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_m0DD1E38F4B0BC0298594195E4392CDACAFBC7D9F(L_47, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_47;
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_48 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_48);
		bool L_49;
		L_49 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_48);
		if (!L_49)
		{
			goto IL_0147;
		}
	}
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_50;
		L_50 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_50)
		{
			goto IL_0149;
		}
	}

IL_0147:
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_51 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_51;
	}

IL_0149:
	{
		V_12 = 0;
		goto IL_016e;
	}

IL_014e:
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_52 = V_0;
		NullCheck(L_52);
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_53 = L_52->___m_Elements;
		int32_t L_54 = V_12;
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_55 = __this->___m_Elements;
		int32_t L_56 = V_12;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815)L_58);
		int32_t L_59 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_016e:
	{
		int32_t L_60 = V_12;
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_61 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_61);
		int32_t L_62;
		L_62 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_61);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_014e;
		}
	}
	{
		PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* L_63 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_63;
	}
}
// Method Definition Index: 27215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_IsStatic_m6CA7B61C38093A5C5CE9BC07365A9084C69AC4F3_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_1 = __this->___m_Elements;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = PartialTensorElement_1_get_isValue_m652C66826F50033952EBE2DB113C8775693B6D02(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0027:
	{
		int32_t L_5 = V_0;
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_6 = __this->___m_Elements;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 27216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, int32_t ___0_d0, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_0 = __this->___m_Elements;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_1;
		L_1 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_1;
	}

IL_000e:
	{
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_2 = __this->___m_Elements;
		int32_t L_3 = ___0_d0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// Method Definition Index: 27217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1_set_Item_mF104C924F4447F86162D60B9E025BD465B0455F4_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, int32_t ___0_d0, PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_0 = __this->___m_Elements;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_1 = __this->___m_Elements;
		int32_t L_2 = ___0_d0;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3 = ___1_value;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815)L_3);
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 27218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 PartialTensor_1_get_Item_m30FBA4CB2CAA0BBA79DBBB2F06CDB02AD481E622_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_d0), PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1;
		L_1 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_d0), PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_RuntimeMethod_var);
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_2;
		L_2 = PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_2;
	}

IL_0017:
	{
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3;
		L_3 = PartialTensorElement_1_get_Unknown_m9C6C7C1E37B2FBF8D8EE6DD03CB915C78A9CA8F2(il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_3;
	}
}
// Method Definition Index: 27219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C* PartialTensor_1_ToTensor_mF768CBC2368EC0DDADEF09B0166F8FCD66C40FB2_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0;
		L_0 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		V_0 = L_0;
		TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 L_1;
		L_1 = DynamicTensorShape_ToTensorShape_m9C6807E3951BFFB7210A5438BF87E774BAF12A35((&V_0), NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2;
		L_2 = PartialTensor_1_ToArray_m1EFE5336B44F7AA27DC1C6EFE424723491667E79(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Tensor_1_t0C31849F8BD32BA5F18DCDE3D00D25BADB38003C* L_3 = (Tensor_1_t0C31849F8BD32BA5F18DCDE3D00D25BADB38003C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
		Tensor_1__ctor_m06A441C24DB6F409C8CA578A95206669DD4B4795(L_3, L_1, L_2, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C*)L_3;
	}
}
// Method Definition Index: 27220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* PartialTensor_1_ToArray_m1EFE5336B44F7AA27DC1C6EFE424723491667E79_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(8, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL;
	}

IL_000a:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_004f;
	}

IL_001a:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = V_0;
		int32_t L_4 = V_1;
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_5 = __this->___m_Elements;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int16_t L_7;
		L_7 = PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_inline(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int16_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 24)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_9, L_11, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int16_t)((*(int16_t*)UnBox(L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004f:
	{
		int32_t L_14 = V_1;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_001a;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = V_0;
		return L_16;
	}
}
// Method Definition Index: 27221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1_CopyElement_m9254686C68CF0C91596E27A48FE24ED1E04D7AE8_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, int32_t ___0_dstIndex, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___1_src, int32_t ___2_srcIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_dstIndex;
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_1 = ___1_src;
		int32_t L_2 = ___2_srcIndex;
		NullCheck(L_1);
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_3;
		L_3 = PartialTensor_Get_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA41D5822AB23A229EE61C3D43B7B4F0FAC9C3C06(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		PartialTensor_Set_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m991BDEAF33E8D27D725A18557C0F3C5E5AA6E367((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
// Method Definition Index: 27222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_IsEquivalent_m7DF790EC078F944CB5F718930C7FFCF7B16C0B49_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_0 = ___0_other;
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
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_1;
		L_1 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_4;
		L_4 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0((&V_0), NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_6 = ___0_other;
		NullCheck(L_6);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_7;
		L_7 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline(L_6, NULL);
		V_0 = L_7;
		bool L_8;
		L_8 = DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0((&V_0), NULL);
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_9;
		L_9 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_10 = ___0_other;
		NullCheck(L_10);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_11;
		L_11 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline(L_10, NULL);
		bool L_12;
		L_12 = DynamicTensorShape_op_Inequality_mCCA9433FAEF48A6167FD41B38E372E309E5789E7(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_14 = ___0_other;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(4, L_14);
		if (L_15)
		{
			goto IL_005e;
		}
	}
	{
		return (bool)1;
	}

IL_005e:
	{
		V_1 = 0;
		goto IL_0085;
	}

IL_0062:
	{
		int32_t L_16 = V_1;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_17;
		L_17 = PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_17;
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_18 = ___0_other;
		int32_t L_19 = V_1;
		NullCheck(((PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)IsInstClass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_20;
		L_20 = PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8(((PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)IsInstClass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_21;
		L_21 = PartialTensorElement_1_Equals_m72E57CD84F51A957732F8048B0F3A9344277925A((&V_2), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		return (bool)0;
	}

IL_0081:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0085:
	{
		int32_t L_23 = V_1;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 27223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_IsEqual_m3ED629ED5934EC469CCDEC8DC971B5F01F00B2E6_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_0 = ___0_other;
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
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_1;
		L_1 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_5 = ___0_other;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(4, L_5);
		if (L_6)
		{
			goto IL_0027;
		}
	}

IL_0025:
	{
		return (bool)0;
	}

IL_0027:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_8 = ___0_other;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5, L_8);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003b:
	{
		int32_t L_10 = V_0;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_11;
		L_11 = PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_12 = ___0_other;
		int32_t L_13 = V_0;
		NullCheck(((PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)IsInstClass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_14;
		L_14 = PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8(((PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC*)IsInstClass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_15;
		L_15 = PartialTensorElement_1_op_Equality_m5F0564F2421EB1F7DD0A1518F33A119F8FE640F9(L_11, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_15)
		{
			goto IL_0057;
		}
	}
	{
		return (bool)0;
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 27224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensor_1_ToString_mC7108212AE75426D2A9DD2FF0E771861D5EE2A09_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_GetParamName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (!L_1)
		{
			goto IL_0083;
		}
	}
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_2 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		V_1 = L_2;
		int32_t L_3;
		L_3 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_1), NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
	}

IL_002b:
	{
		V_2 = 0;
		goto IL_0059;
	}

IL_002f:
	{
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_003e:
	{
		int32_t L_9 = V_2;
		PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815 L_10;
		L_10 = PartialTensor_1_get_Item_m5F9E33C00CDA0E004CB7F96C3F48CD0CF62B15E8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_3 = L_10;
		StringBuilder_t* L_11 = V_0;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_12 = ___0_GetParamName;
		String_t* L_13;
		L_13 = PartialTensorElement_1_ToString_m67B9156A702ADEEEB6A3CEC65FC174F49957569E((&V_3), L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0059:
	{
		int32_t L_16 = V_2;
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_17 = __this->___m_Elements;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_002f;
		}
	}
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_19 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		V_1 = L_19;
		int32_t L_20;
		L_20 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_1), NULL);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		goto IL_00ba;
	}

IL_0083:
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_24;
		L_24 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		V_4 = L_24;
		Il2CppFakeBox<int32_t> L_25(DataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_il2cpp_TypeInfo_var, V_4);
		String_t* L_26;
		L_26 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_25), NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_26, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_30 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		V_1 = L_30;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_31 = ___0_GetParamName;
		String_t* L_32;
		L_32 = DynamicTensorShape_ToString_m3D90ADD327BB61433892DD46A674A3E7C7FD566A((&V_1), L_31, NULL);
		NullCheck(L_29);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, L_32, NULL);
	}

IL_00ba:
	{
		StringBuilder_t* L_34 = V_0;
		NullCheck((RuntimeObject*)L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_34);
		return L_35;
	}
}
// Method Definition Index: 27225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensor_1_GetHashCode_mC0F2F91112CADD05D1EA8B50AF1E1390ED9C5738_gshared (PartialTensor_1_t12EB1D0EE715594E9DF451951BDFFC3E37B263CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_DataType;
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE(L_0, L_1, HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE_RuntimeMethod_var);
		V_0 = L_2;
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_3 = __this->___m_Elements;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_001c:
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		PartialTensorElement_1U5BU5D_t40FB80E829AC3D5FB6BA70756E4D4870EABFDE6F* L_6 = __this->___m_Elements;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = PartialTensorElement_1_GetHashCode_mECD04F0BC1C2F37E40C1BD13E582270D25F330CF(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277(L_5, L_8, HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277_RuntimeMethod_var);
		V_0 = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0042:
	{
		int32_t L_11 = V_1;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_13 = V_0;
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
// Method Definition Index: 27206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensor_1_get_length_m82B1F95B24BBA031139F4D4FCA84A1E6D230B5F6_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_0 = __this->___m_Elements;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
// Method Definition Index: 27207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_get_isPartiallyKnown_m259455662C015BC9437CAB5069D2CE25C000197D_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_0 = __this->___m_Elements;
		return (bool)((!(((RuntimeObject*)(PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 27208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_shape, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = AllocatorUtils_ToDataType_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB27289BBFD368204C674E7166683EA312575FF48(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1 = ___0_shape;
		PartialTensor__ctor_m6238FD98606E33612500826063946157BB4451D3((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, L_0, L_1, NULL);
		bool L_2;
		L_2 = DynamicTensorShape_IsStatic_m39BBEB1B63848E7E96864C1759039F6C36EDEC4F((&___0_shape), NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_3;
		L_3 = DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E((&___0_shape), NULL);
		bool L_4;
		L_4 = DynamicTensorDim_op_LessThanOrEqual_m8D7D4138A386B73F28BAC3D94658A4DA1664B344(L_3, ((int32_t)16), NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_5;
		L_5 = DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E((&___0_shape), NULL);
		V_0 = L_5;
		int32_t L_6;
		L_6 = DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline((&V_0), NULL);
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_7 = (PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663*)(PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), (uint32_t)L_6);
		__this->___m_Elements = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Elements), (void*)L_7);
	}

IL_003f:
	{
		return;
	}
}
// Method Definition Index: 27209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1__ctor_m86DD8A405F9143F4DB41EA42E9C011A59B7C2647_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0;
		L_0 = DynamicTensorShape_get_DynamicRank_m8F1FD8E6DEF8096A8C7AF1798A039EB0DFF1A658(NULL);
		PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// Method Definition Index: 27210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* PartialTensor_1_FromValues_m5A9DA15F45F8B8159F847E9CCC0683339550C9A7_gshared (TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 ___0_shape, ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ___1_values, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 L_0 = ___0_shape;
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1;
		memset((&L_1), 0, sizeof(L_1));
		DynamicTensorShape__ctor_mFF2F2E7D762213871A73FA122A4A651D92D480D2((&L_1), L_0, NULL);
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_2 = (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9(L_2, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_2;
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_3 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_3);
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_5 = V_0;
		return L_5;
	}

IL_0016:
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_1;
		int32_t* L_9;
		L_9 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&(((&___1_values))->____pointer))->value, (L_8), ((&___1_values))->____length);
		int32_t L_10 = (*(int32_t*)L_9);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_11;
		L_11 = PartialTensorElement_1_Value_m0B7FFF058551B11971965537B153FC662852CC5E(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		NullCheck(L_6);
		PartialTensor_1_set_Item_m2440A8D3F3E4A934D7AD5CDFEE12C7CE029E8E31(L_6, L_7, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0037:
	{
		int32_t L_13 = V_1;
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_14 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001a;
		}
	}
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_16 = V_0;
		return L_16;
	}
}
// Method Definition Index: 27211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* PartialTensor_1_Copy_mF8E9E8BB7EF6BB7040F2CC78E79FB98B5BBACD9D_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_1 = (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_2 = __this->___m_Elements;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_3 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_3;
	}

IL_0016:
	{
		V_1 = 0;
		goto IL_0036;
	}

IL_001a:
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_4 = V_0;
		NullCheck(L_4);
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_5 = L_4->___m_Elements;
		int32_t L_6 = V_1;
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_7 = __this->___m_Elements;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0036:
	{
		int32_t L_12 = V_1;
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_13 = __this->___m_Elements;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_001a;
		}
	}
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_15 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_15;
	}
}
// Method Definition Index: 27212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* PartialTensor_1_MaxDefinedPartialTensor_m56F25ECF38322502D5B6EF42182E498DE6B2786A_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this;
	}

IL_0005:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_2 = ___0_other;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(4, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_4;
		L_4 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_5 = ___0_other;
		NullCheck(L_5);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_6;
		L_6 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline(L_5, NULL);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_7;
		L_7 = DynamicTensorShape_MaxDefinedShape_mF7AE60427721FDCC1E01E195CA7CA0EF236E0DE9(L_4, L_6, NULL);
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_8 = (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9(L_8, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_8;
	}

IL_002c:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_10 = ___0_other;
		return L_10;
	}

IL_0036:
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_11 = ___0_other;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(4, L_11);
		if (L_12)
		{
			goto IL_0040;
		}
	}
	{
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this;
	}

IL_0040:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_13;
		L_13 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_14 = (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9(L_14, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_14;
		V_1 = 0;
		goto IL_0073;
	}

IL_0050:
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = V_1;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_18;
		L_18 = PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_19 = ___0_other;
		int32_t L_20 = V_1;
		NullCheck(((PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)IsInstClass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_21;
		L_21 = PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64(((PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)IsInstClass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_22;
		L_22 = PartialTensorElement_1_MaxDefinedElement_mF5569DC38EA6984CE093B49E0F527AEE7B270FD2(L_18, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_15);
		PartialTensor_1_set_Item_m2440A8D3F3E4A934D7AD5CDFEE12C7CE029E8E31(L_15, L_16, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0073:
	{
		int32_t L_24 = V_1;
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_25 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_27 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_27;
	}
}
// Method Definition Index: 27213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* PartialTensor_1_Reshape_mDD77E51302F0F3E58A3605CE4145EE5626EE9C42_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E ___0_newShape, bool ___1_allowZeroLength, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* V_0 = NULL;
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_1;
	memset((&V_1), 0, sizeof(V_1));
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_2;
	memset((&V_2), 0, sizeof(V_2));
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	{
		bool L_0;
		L_0 = DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0((&___0_newShape), NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1 = ___0_newShape;
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_2 = (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9(L_2, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_2;
	}

IL_0010:
	{
		bool L_3;
		L_3 = DynamicTensorShape_IsStatic_m39BBEB1B63848E7E96864C1759039F6C36EDEC4F((&___0_newShape), NULL);
		if (L_3)
		{
			goto IL_0130;
		}
	}
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_4;
		L_4 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_5 = ___0_newShape;
		bool L_6 = ___1_allowZeroLength;
		DynamicTensorShape_ReduceCommonFactors_mB1961AD7BF8F82AE725D07AD95C4AC306D17425B(L_4, L_5, (&V_1), (&V_2), (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), NULL);
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_7;
		L_7 = DynamicTensorShape_Length_mE51037E72DF5426675A43B012B2FECF6A96FB80E((&V_1), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = DynamicTensorDim_get_isUnknown_mCA231982134E9614FF61489DA87C65C01D895D1B((&V_3), NULL);
		if (L_8)
		{
			goto IL_0130;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_9;
		L_9 = DynamicTensorDim_get_One_mCCE3BEC388900FAF48997076247EDBD60884038C(NULL);
		V_4 = L_9;
		V_9 = 0;
		goto IL_007d;
	}

IL_0050:
	{
		int32_t L_10 = V_9;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_11;
		L_11 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_1), L_10, NULL);
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_12;
		L_12 = DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB(NULL);
		bool L_13;
		L_13 = DynamicTensorDim_op_Equality_m410D5EFF0915012355AC6CADBA4074ED362C78AF(L_11, L_12, NULL);
		if (L_13)
		{
			goto IL_0077;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_14 = V_4;
		int32_t L_15 = V_9;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_16;
		L_16 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_1), L_15, NULL);
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_17;
		L_17 = DynamicTensorDim_op_Multiply_mBEE9559613E02CDAB6BE2381B69742B25D05A19B(L_14, L_16, NULL);
		V_4 = L_17;
	}

IL_0077:
	{
		int32_t L_18 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007d:
	{
		int32_t L_19 = V_9;
		int32_t L_20;
		L_20 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_1), NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0050;
		}
	}
	{
		V_5 = (bool)0;
		V_6 = 1;
		V_7 = 0;
		V_8 = 0;
		V_10 = 0;
		goto IL_00ef;
	}

IL_0099:
	{
		int32_t L_21 = V_10;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_22;
		L_22 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_2), L_21, NULL);
		V_11 = L_22;
		bool L_23;
		L_23 = DynamicTensorDim_get_isValue_m012693C8E5922412211FCA74AE185900893AAD8D((&V_11), NULL);
		if (!L_23)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_24 = V_10;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_25;
		L_25 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_2), L_24, NULL);
		V_11 = L_25;
		int32_t L_26;
		L_26 = DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline((&V_11), NULL);
		if (L_26)
		{
			goto IL_00c6;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_00e9;
	}

IL_00c6:
	{
		int32_t L_27 = V_6;
		int32_t L_28 = V_10;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_29;
		L_29 = DynamicTensorShape_get_Item_mFDD73EB2CF136F25D54BD21BB2E53D0D8E09FAA8((&V_2), L_28, NULL);
		V_11 = L_29;
		int32_t L_30;
		L_30 = DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline((&V_11), NULL);
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_27, L_30));
		goto IL_00e9;
	}

IL_00df:
	{
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_10;
		V_8 = L_32;
	}

IL_00e9:
	{
		int32_t L_33 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ef:
	{
		int32_t L_34 = V_10;
		int32_t L_35;
		L_35 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_2), NULL);
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_36 = V_6;
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_37 = V_7;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0130;
		}
	}
	{
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_38 = V_3;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_39;
		L_39 = DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB(NULL);
		bool L_40;
		L_40 = DynamicTensorDim_op_Equality_m410D5EFF0915012355AC6CADBA4074ED362C78AF(L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_0125;
		}
	}
	{
		bool L_41 = V_5;
		if (L_41)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_42 = V_8;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_43;
		L_43 = DynamicTensorDim_get_Zero_m8B8FCFE745FDD4A1162541452B446EF6997743BB(NULL);
		DynamicTensorShape_set_Item_mF33039B5CFB8387C708D159805116AFD2B70B709((&___0_newShape), L_42, L_43, NULL);
		goto IL_0130;
	}

IL_0125:
	{
		int32_t L_44 = V_8;
		DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023 L_45 = V_4;
		DynamicTensorShape_set_Item_mF33039B5CFB8387C708D159805116AFD2B70B709((&___0_newShape), L_44, L_45, NULL);
	}

IL_0130:
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_46 = ___0_newShape;
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_47 = (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		PartialTensor_1__ctor_mE3F6A84A9082E2D7813BEE51CCC313B6438B73F9(L_47, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_47;
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_48 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_48);
		bool L_49;
		L_49 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_48);
		if (!L_49)
		{
			goto IL_0147;
		}
	}
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_50;
		L_50 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_50)
		{
			goto IL_0149;
		}
	}

IL_0147:
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_51 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_51;
	}

IL_0149:
	{
		V_12 = 0;
		goto IL_016e;
	}

IL_014e:
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_52 = V_0;
		NullCheck(L_52);
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_53 = L_52->___m_Elements;
		int32_t L_54 = V_12;
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_55 = __this->___m_Elements;
		int32_t L_56 = V_12;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1)L_58);
		int32_t L_59 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_016e:
	{
		int32_t L_60 = V_12;
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_61 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_61);
		int32_t L_62;
		L_62 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_61);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_014e;
		}
	}
	{
		PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* L_63 = V_0;
		return (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)L_63;
	}
}
// Method Definition Index: 27215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_IsStatic_mCCEC2133AB54A554A6A59639B57520C7015B559C_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_1 = __this->___m_Elements;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0027:
	{
		int32_t L_5 = V_0;
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_6 = __this->___m_Elements;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 27216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, int32_t ___0_d0, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_0 = __this->___m_Elements;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_1;
		L_1 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_1;
	}

IL_000e:
	{
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_2 = __this->___m_Elements;
		int32_t L_3 = ___0_d0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// Method Definition Index: 27217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1_set_Item_m2440A8D3F3E4A934D7AD5CDFEE12C7CE029E8E31_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, int32_t ___0_d0, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_0 = __this->___m_Elements;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_1 = __this->___m_Elements;
		int32_t L_2 = ___0_d0;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3 = ___1_value;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1)L_3);
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 27218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 PartialTensor_1_get_Item_mCD61CDAA87AE04272C9FAFCF068CEDFB2F364C0A_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 ___0_d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E((&___0_d0), PartialTensorElement_1_get_isValue_mC0D1B6FD224961865FE254D7E6A3A6FB0599531E_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1;
		L_1 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline((&___0_d0), PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_RuntimeMethod_var);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_2;
		L_2 = PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_2;
	}

IL_0017:
	{
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensorElement_1_get_Unknown_m97307A800C9A28B775D29CEE20C20168AB65A16C(il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_3;
	}
}
// Method Definition Index: 27219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C* PartialTensor_1_ToTensor_m162307B774CD150A8271B71DCCD216DC2570CC2E_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0;
		L_0 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		V_0 = L_0;
		TensorShape_t262F74805ED00A4B71BBAE6C0766049D944ACE34 L_1;
		L_1 = DynamicTensorShape_ToTensorShape_m9C6807E3951BFFB7210A5438BF87E774BAF12A35((&V_0), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = PartialTensor_1_ToArray_m4472C488A5BF071A6F6111EE96182F8BB6D12A43(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Tensor_1_t65B864E8272AE642C573473CC6901460AD6A3379* L_3 = (Tensor_1_t65B864E8272AE642C573473CC6901460AD6A3379*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
		Tensor_1__ctor_mD6D1CDD15C1163DDE3EB938CB12EBE3898E28003(L_3, L_1, L_2, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return (Tensor_t605E6A43129BE2702B0B01D58A3AE82242D41B2C*)L_3;
	}
}
// Method Definition Index: 27220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* PartialTensor_1_ToArray_m4472C488A5BF071A6F6111EE96182F8BB6D12A43_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(8, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
	}

IL_000a:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 22), (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_004f;
	}

IL_001a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		int32_t L_4 = V_1;
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_5 = __this->___m_Elements;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_inline(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 24)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_9, L_11, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)((*(int32_t*)UnBox(L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004f:
	{
		int32_t L_14 = V_1;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		return L_16;
	}
}
// Method Definition Index: 27221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialTensor_1_CopyElement_mBA7C931B8F766DC3F3717708D6D6E279C52A99A3_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, int32_t ___0_dstIndex, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___1_src, int32_t ___2_srcIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_dstIndex;
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_1 = ___1_src;
		int32_t L_2 = ___2_srcIndex;
		NullCheck(L_1);
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_3;
		L_3 = PartialTensor_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0FF091B145BF0BF2470F8B49FC3EA00281A8956C(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		PartialTensor_Set_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA33429A3B6E5356408FCE0D0A20E724A24A5694E((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
// Method Definition Index: 27222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_IsEquivalent_mE210C75960502EDF0C3FFCBB445256780DD5CC42_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_0 = ___0_other;
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
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_1;
		L_1 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_4;
		L_4 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0((&V_0), NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_6 = ___0_other;
		NullCheck(L_6);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_7;
		L_7 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline(L_6, NULL);
		V_0 = L_7;
		bool L_8;
		L_8 = DynamicTensorShape_get_hasRank_mE5A550785E1503452BB459877402DFB36D5AF9A0((&V_0), NULL);
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_9;
		L_9 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_10 = ___0_other;
		NullCheck(L_10);
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_11;
		L_11 = PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline(L_10, NULL);
		bool L_12;
		L_12 = DynamicTensorShape_op_Inequality_mCCA9433FAEF48A6167FD41B38E372E309E5789E7(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_14 = ___0_other;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(4, L_14);
		if (L_15)
		{
			goto IL_005e;
		}
	}
	{
		return (bool)1;
	}

IL_005e:
	{
		V_1 = 0;
		goto IL_0085;
	}

IL_0062:
	{
		int32_t L_16 = V_1;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_17;
		L_17 = PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_17;
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_18 = ___0_other;
		int32_t L_19 = V_1;
		NullCheck(((PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)IsInstClass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_20;
		L_20 = PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64(((PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)IsInstClass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_21;
		L_21 = PartialTensorElement_1_Equals_m1D96E287AF4D2B188701297D3C3895C9A8234D51((&V_2), L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		return (bool)0;
	}

IL_0081:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0085:
	{
		int32_t L_23 = V_1;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 27223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartialTensor_1_IsEqual_mB87189D1ACE5760228535BD11B2F0C014879145F_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_0 = ___0_other;
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
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_1;
		L_1 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_5 = ___0_other;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(4, L_5);
		if (L_6)
		{
			goto IL_0027;
		}
	}

IL_0025:
	{
		return (bool)0;
	}

IL_0027:
	{
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_8 = ___0_other;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5, L_8);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003b:
	{
		int32_t L_10 = V_0;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_11;
		L_11 = PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* L_12 = ___0_other;
		int32_t L_13 = V_0;
		NullCheck(((PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)IsInstClass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_14;
		L_14 = PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64(((PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA*)IsInstClass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_15;
		L_15 = PartialTensorElement_1_op_Equality_m0EB7073F1DFA5CFE0C80C29EFD1FFB3A3943C607(L_11, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_15)
		{
			goto IL_0057;
		}
	}
	{
		return (bool)0;
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 27224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartialTensor_1_ToString_mD7DBCB15B70BA99D53A1DEB1B72D2CF1173BC9B2_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___0_GetParamName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if (!L_1)
		{
			goto IL_0083;
		}
	}
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_2 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		V_1 = L_2;
		int32_t L_3;
		L_3 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_1), NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
	}

IL_002b:
	{
		V_2 = 0;
		goto IL_0059;
	}

IL_002f:
	{
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_003e:
	{
		int32_t L_9 = V_2;
		PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1 L_10;
		L_10 = PartialTensor_1_get_Item_m7504AE5273F04970FF440CC7F7D71CB760115C64(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_3 = L_10;
		StringBuilder_t* L_11 = V_0;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_12 = ___0_GetParamName;
		String_t* L_13;
		L_13 = PartialTensorElement_1_ToString_mD3F7B1FDCE0A9C42F67848AED19B33AC917CC382((&V_3), L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_11);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0059:
	{
		int32_t L_16 = V_2;
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_17 = __this->___m_Elements;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_002f;
		}
	}
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_19 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		V_1 = L_19;
		int32_t L_20;
		L_20 = DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline((&V_1), NULL);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		goto IL_00ba;
	}

IL_0083:
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_24;
		L_24 = PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this, NULL);
		V_4 = L_24;
		Il2CppFakeBox<int32_t> L_25(DataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_il2cpp_TypeInfo_var, V_4);
		String_t* L_26;
		L_26 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_25), NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_26, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_30 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		V_1 = L_30;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_31 = ___0_GetParamName;
		String_t* L_32;
		L_32 = DynamicTensorShape_ToString_m3D90ADD327BB61433892DD46A674A3E7C7FD566A((&V_1), L_31, NULL);
		NullCheck(L_29);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, L_32, NULL);
	}

IL_00ba:
	{
		StringBuilder_t* L_34 = V_0;
		NullCheck((RuntimeObject*)L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_34);
		return L_35;
	}
}
// Method Definition Index: 27225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PartialTensor_1_GetHashCode_m9F8659726AD96109DB883956E1DD17BA896AB64D_gshared (PartialTensor_1_t3459D8F922E47F0180ADDAE3CE3F28730C0439EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_DataType;
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_1 = ((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this)->___m_Shape;
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE(L_0, L_1, HashCode_Combine_TisDataType_t465FE87B58C13D0EFE69CECA5741ADC8CF3FECC7_TisDynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E_m80820E3F50192FB4833D509399126161938076AE_RuntimeMethod_var);
		V_0 = L_2;
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_3 = __this->___m_Elements;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_001c:
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		PartialTensorElement_1U5BU5D_tE7999B7524C6C1C799C6B6BF70863A3139647663* L_6 = __this->___m_Elements;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = PartialTensorElement_1_GetHashCode_mFE6F2F12A2E0E8D8E748A951C3319568613C7645(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277(L_5, L_8, HashCode_Combine_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F632FDF60D480601CF5707925D5C10EB9D73277_RuntimeMethod_var);
		V_0 = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0042:
	{
		int32_t L_11 = V_1;
		NullCheck((PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5, (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F*)__this);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 56317
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_000e;
		}
	}
	{
		return (-1.0f);
	}

IL_000e:
	{
		return (1.0f);
	}
}
// Method Definition Index: 56305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
// Method Definition Index: 56303
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
// Method Definition Index: 56304
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		float L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		float L_3 = ___0_a;
		return L_3;
	}
}
// Method Definition Index: 56302
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		float L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		float L_3 = ___0_a;
		return L_3;
	}
}
// Method Definition Index: 88734
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_fmod_mB41974736F5A2C3914BCEE03D01664819361782A_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		return (fmodf(L_0, L_1));
	}
}
// Method Definition Index: 27058
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicTensorDim_get_value_mA936C2C62375821AE77E3EFDE2B699530DF2ECB0_inline (DynamicTensorDim_t004A3B1D3635966B50480F2366C3665C29269023* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Value;
		return L_0;
	}
}
// Method Definition Index: 27171
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E PartialTensor_get_shape_m49066131BB4F93BFB14B8A2BF39D4809C188A758_inline (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E L_0 = __this->___m_Shape;
		return L_0;
	}
}
// Method Definition Index: 27106
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicTensorShape_get_rank_m285A20972E42742DEAC01AB061F210568C2271EB_inline (DynamicTensorShape_t9059EB40BCBB9F8684F49C974C1F56D34E79038E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Rank;
		return L_0;
	}
}
// Method Definition Index: 27170
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartialTensor_get_dataType_mAEFDFD8C9EF2835DACA5320EA27A96E9EB205895_inline (PartialTensor_t6E971891A0465DA5A53927F6347414C94678959F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_DataType;
		return L_0;
	}
}
// Method Definition Index: 27234
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t PartialTensorElement_1_get_value_m6F314AE0E63017F8D5E8E21B40142207270CB091_gshared_inline (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->___m_Value;
		return L_0;
	}
}
// Method Definition Index: 27235
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_mACFDEC9FFCBC01736F477462DF14F0FC85CA204A_gshared_inline (PartialTensorElement_1_tC91B485638D12379CAFEBE6F7B9AD5E15C0B7815* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___m_Param;
		return L_0;
	}
}
// Method Definition Index: 894
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m701B8731756B976779D70FA9705B0FC2DFEAA0B6_gshared_inline (Func_2_t8A062405B39BD0F3BF43E567694018E5080B6F26* __this, uint8_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, uint8_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 27234
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartialTensorElement_1_get_value_m858F61247030501E65500B53D67355CA62BAD5C0_gshared_inline (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Value;
		return L_0;
	}
}
// Method Definition Index: 27235
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_m092DC698FC97B7E20EBE8EA80B15C547DA29A5CE_gshared_inline (PartialTensorElement_1_tF308668B53F6B5287F31C7DE523C0368FE72FAC1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___m_Param;
		return L_0;
	}
}
// Method Definition Index: 27234
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PartialTensorElement_1_get_value_m94450D8C263868A53B39BF1D8258FA5B51886A4E_gshared_inline (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Value;
		return L_0;
	}
}
// Method Definition Index: 27235
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_mBB6C778890F8B7304179D4604AC380307DEAB9FF_gshared_inline (PartialTensorElement_1_t4C3F37793F30F1FF0D78827CE1ACCB9CFF53E8B5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___m_Param;
		return L_0;
	}
}
// Method Definition Index: 27234
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartialTensorElement_1_get_value_m6508EA2B99149218FE1C7186B612FA99C6142756_gshared_inline (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),3)), SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t93C3D4C9CEC0280583D934DA89751CB1B60DC7D0);
		return;
	}
}
// Method Definition Index: 27235
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_param_mE92368251B6A3D1BB0E70270C653536EF1DC8435_gshared_inline (PartialTensorElement_1_tAC8EF5CA4249D35ED1824DAFA982AD54B9443CFC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2));
		return L_0;
	}
}
// Method Definition Index: 27234
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PartialTensorElement_1_get_value_m2530B78347A992656D164951085D073D5E499CF0_gshared_inline (PartialTensorElement_1_tA9F8F40B3DE37134B768A68E89CD70225D9F3CCD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___m_Value;
		return L_0;
	}
}
