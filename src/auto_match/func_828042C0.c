// Quaternion lerp along the shorter arc (not normalised): q0 * (1 - t) + q1 * (+-t), the
// sign of t flipped when the two quaternions point into opposite half spaces (dot <= 0).

#include "xdk/vectorintrinsics.h"

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
