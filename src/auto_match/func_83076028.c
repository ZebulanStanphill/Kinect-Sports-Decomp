#include "xdk/vectorintrinsics.h"

__vector4 fn_83076028(__vector4 q1, __vector4 q2)
{
    __vector4 signMask, q2wzyx, q2zwxy, q2yxwz, negated;
    __vector4 nx, ny, nz, nw, x, y, z, w;

    signMask = __vspltisw(-1);
    q2zwxy = __vpermwi(q2, 177);
    q2yxwz = __vpermwi(q2, 78);
    q2wzyx = __vpermwi(q2, 228);
    signMask = __vslw(signMask, signMask);
    negated = __vxor(q1, signMask);
    nx = __vrlimi(negated, q1, 0xb, 0);
    nw = __vrlimi(negated, q1, 0x1, 0);
    ny = __vrlimi(negated, q1, 0xd, 0);
    nz = __vrlimi(negated, q1, 0x7, 0);
    x = __vmsum4fp(nx, q2wzyx);
    w = __vmsum4fp(nw, q2);
    y = __vmsum4fp(ny, q2zwxy);
    z = __vmsum4fp(nz, q2yxwz);
    return __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
}
