typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 fn_8306EDB0(__vector4 v);
extern __vector4 fn_830762A0(__vector4 a, __vector4 b);

__vector4 fn_83076CB0(__vector4 a, __vector4 b)
{
    return fn_830762A0(fn_8306EDB0(a), fn_8306EDB0(b));
}
