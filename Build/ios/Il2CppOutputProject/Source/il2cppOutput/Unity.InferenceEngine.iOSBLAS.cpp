#include "pch-cpp.hpp"






struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct String_t;
struct iOSBLAS_t497CC6E877D62028CF11AF2DFCAC6064B4BD4E61;

IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t5D82623FA6748CF7971CDD7589C1E628188A3367 
{
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
struct iOSBLAS_t497CC6E877D62028CF11AF2DFCAC6064B4BD4E61  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
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
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	int32_t ___value__;
};
struct CBLAS_ORDER_tC2D543AB78C689E6ED22AF758360166DB5DEEDF7 
{
	int32_t ___value__;
};
struct CBLAS_TRANSPOSE_t7C2769B94AFBBC94DFFFE6BCBC7CEFC4DBD1FA24 
{
	int32_t ___value__;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBLAS_ios_sgemm_mB6A7E33F3FA7EB6265BFB9EB5ABA2BCA8697E99E (int32_t ___0_Order, int32_t ___1_TransA, int32_t ___2_TransB, int32_t ___3_M, int32_t ___4_N, int32_t ___5_K, float ___6_alpha, float* ___7_A, int32_t ___8_lda, float* ___9_B, int32_t ___10_ldb, float ___11_beta, float* ___12_C, int32_t ___13_ldc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void STDCALL ios_sgemm(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, float*, int32_t, float*, int32_t, float, float*, int32_t);
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
// Method Definition Index: 91593
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBLAS_ios_sgemm_mB6A7E33F3FA7EB6265BFB9EB5ABA2BCA8697E99E (int32_t ___0_Order, int32_t ___1_TransA, int32_t ___2_TransB, int32_t ___3_M, int32_t ___4_N, int32_t ___5_K, float ___6_alpha, float* ___7_A, int32_t ___8_lda, float* ___9_B, int32_t ___10_ldb, float ___11_beta, float* ___12_C, int32_t ___13_ldc, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (STDCALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, float*, int32_t, float*, int32_t, float, float*, int32_t);

	reinterpret_cast<PInvokeFunc>(ios_sgemm)(___0_Order, ___1_TransA, ___2_TransB, ___3_M, ___4_N, ___5_K, ___6_alpha, ___7_A, ___8_lda, ___9_B, ___10_ldb, ___11_beta, ___12_C, ___13_ldc);

}
// Method Definition Index: 91594
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSBLAS_IsCurrentPlatformSupported_mDB5D722E81015817651D289F57E472BB0E281D95 (iOSBLAS_t497CC6E877D62028CF11AF2DFCAC6064B4BD4E61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
	}
}
// Method Definition Index: 91595
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBLAS_SGEMM_mDE26CCE0CF3F9B664BD220C5EEB2B3D4FFE3FB79 (iOSBLAS_t497CC6E877D62028CF11AF2DFCAC6064B4BD4E61* __this, int32_t ___0_M, int32_t ___1_N, int32_t ___2_K, float* ___3_A, int32_t ___4_lda, float* ___5_B, int32_t ___6_ldb, float* ___7_C, int32_t ___8_ldc, float ___9_beta, bool ___10_transposeA, bool ___11_transposeB, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B6_2 = 0;
	{
		bool L_0 = ___10_transposeA;
		if (L_0)
		{
			G_B2_0 = ((int32_t)101);
			goto IL_000a;
		}
		G_B1_0 = ((int32_t)101);
	}
	{
		G_B3_0 = ((int32_t)111);
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_000a:
	{
		G_B3_0 = ((int32_t)112);
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		bool L_1 = ___11_transposeB;
		if (L_1)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0014;
		}
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}
	{
		G_B6_0 = ((int32_t)111);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0016;
	}

IL_0014:
	{
		G_B6_0 = ((int32_t)112);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0016:
	{
		int32_t L_2 = ___0_M;
		int32_t L_3 = ___1_N;
		int32_t L_4 = ___2_K;
		float* L_5 = ___3_A;
		int32_t L_6 = ___4_lda;
		float* L_7 = ___5_B;
		int32_t L_8 = ___6_ldb;
		float L_9 = ___9_beta;
		float* L_10 = ___7_C;
		int32_t L_11 = ___8_ldc;
		iOSBLAS_ios_sgemm_mB6A7E33F3FA7EB6265BFB9EB5ABA2BCA8697E99E(G_B6_2, G_B6_1, G_B6_0, L_2, L_3, L_4, (1.0f), L_5, L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return;
	}
}
// Method Definition Index: 91596
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSBLAS__ctor_m6601AF28D1642B2ECA37E0A671503F6F3E8B90F8 (iOSBLAS_t497CC6E877D62028CF11AF2DFCAC6064B4BD4E61* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
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
