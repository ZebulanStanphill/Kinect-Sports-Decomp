// Quaternion lerp along the shorter arc (not normalised): q0 * (1 - t) + q1 * (+-t), the
// sign of t flipped when the two quaternions point into opposite half spaces (dot <= 0).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vcmpgefp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

#define VPACK_D3DCOLOR 0

__vector4 fn_828042C0(__vector4 q0, __vector4 q1, __vector4 t)
{
    __vector4 dot, zero, one, signMask, negT, oneMinusT, control, a, s;

    dot = __vmsum4fp(q0, q1);
    zero = __vspltisw(0);
    signMask = __vspltisw(-1);
    signMask = __vslw(signMask, signMask);
    one = __vupkd3d(zero, VPACK_D3DCOLOR);       /* 1.0f in every component */
    negT = __vxor(t, signMask);
    oneMinusT = __vaddfp(negT, one);
    control = __vcmpgefp(zero, dot);
    a = __vmulfp(oneMinusT, q0);
    s = __vsel(t, negT, control);
    return __vmaddfp(s, q1, a);
}
