typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmsum3fp(__vector4 a, __vector4 b);

float fn_82F534A0(__vector4 a, __vector4 b)
{
    __vector4 dot;

    dot = __vmsum3fp(a, b);
    return dot.vector4_f32[0];
}
