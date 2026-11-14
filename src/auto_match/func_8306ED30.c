typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __vsubfp(__vector4 a, __vector4 b);

__vector4 fn_8306ED30(__vector4 a, __vector4 b)
{
    return __vsubfp(a, b);
}
