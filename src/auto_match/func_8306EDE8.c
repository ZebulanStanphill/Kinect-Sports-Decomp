#include "xdk/vectorintrinsics.h"

__vector4 fn_8306EDE8(__vector4 v)
{
    __vector4 signMask, z, y, zero, x, sum, diff, negX, ySign, zSign, same;

    signMask = __vspltisw(-1);
    z = __vspltw(v, 2);
    y = __vpermwi(v, 101);
    zero = __vspltisw(0);
    signMask = __vslw(signMask, signMask);
    x = __vspltw(v, 0);
    sum = __vaddfp(y, z);
    diff = __vsubfp(y, z);
    negX = __vxor(v, signMask);
    ySign = __vcmpgtfp(zero, y);
    zSign = __vcmpgtfp(zero, z);
    negX = __vspltw(negX, 0);
    negX = __vrlimi(negX, sum, 8, 0);
    x = __vrlimi(x, diff, 8, 0);
    same = __vcmpequw(zSign, ySign);
    return __vsel(x, negX, same);
}
