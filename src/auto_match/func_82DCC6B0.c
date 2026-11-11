// out = (a * b < 0) as a per-component mask.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);

void fn_82DCC6B0(__vector4 *out, const __vector4 *a, const __vector4 *b)
{
    *out = __vcmpgtfp(__vspltisw(0), __vmulfp(*a, *b));
}
