// XMVector4Transform with the matrix first, passed by value (8 GPR slots), the vector in v1:
// transpose the matrix in place, then one dot product per column.

#include "xdk/vectorintrinsics.h"

typedef __declspec(align(16)) struct Matrix_8307D7A8 {
    __vector4 r[4];
} Matrix_8307D7A8;

__vector4 fn_8307D7A8(Matrix_8307D7A8 m, __vector4 v)
{
    __vector4 p0, p1, p2, p3;
    __vector4 x, y, z, w;

    p0 = __vmrghw(m.r[0], m.r[2]);
    p1 = __vmrghw(m.r[1], m.r[3]);
    p2 = __vmrglw(m.r[0], m.r[2]);
    p3 = __vmrglw(m.r[1], m.r[3]);
    m.r[0] = __vmrghw(p0, p1);
    m.r[1] = __vmrglw(p0, p1);
    m.r[2] = __vmrghw(p2, p3);
    m.r[3] = __vmrglw(p2, p3);
    x = __vmsum4fp(v, m.r[0]);
    y = __vmsum4fp(v, m.r[1]);
    z = __vmsum4fp(v, m.r[2]);
    w = __vmsum4fp(v, m.r[3]);
    x = __vmrghw(x, z);
    y = __vmrghw(y, w);
    return __vmrghw(x, y);
}
