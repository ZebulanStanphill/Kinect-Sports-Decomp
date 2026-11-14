typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

void fn_82DD3730(__vector4 *distance, const __vector4 *a, const __vector4 *b, const __vector4 *normal,
                 __vector4 *normalOut)
{
    __vector4 diff = __vsubfp(*a, *b);
    __vector4 n = *normal;

    *normalOut = n;
    *distance = __vmsum3fp(n, diff);
}
