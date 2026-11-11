typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vslb(__vector4 a, __vector4 b);
__vector4 __vsrb(__vector4 a, __vector4 b);
__vector4 __vsr(__vector4 a, __vector4 b);
__vector4 __vaddubs(__vector4 a, __vector4 b);
__vector4 __vaddsbs(__vector4 a, __vector4 b);
__vector4 __vspltb(__vector4 v, unsigned int i);
__vector4 __vxor(__vector4 a, __vector4 b);

__vector4 fn_82803348(__vector4 *a, __vector4 *b, __vector4 *c, int *counter, __vector4 shift, __vector4 add)
{
    __vector4 t = *a;
    __vector4 sign;
    t = __vslb(t, shift);
    t = __vsrb(t, shift);
    t = __vaddubs(t, add);
    sign = __vspltb(t, 15);
    *c = __vaddsbs(*c, sign);
    *b = __vxor(*b, shift);
    *a = __vsr(*a, shift);
    (*counter)++;
    return sign;
}
