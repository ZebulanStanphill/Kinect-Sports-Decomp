// XMVector3Transform with the matrix first, passed by value (8 GPR slots), the vector in v1.

#include "xdk/vectorintrinsics.h"

typedef __declspec(align(16)) struct Matrix_8307D748 {
    __vector4 r[4];
} Matrix_8307D748;

__vector4 fn_8307D748(Matrix_8307D748 m, __vector4 v)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmaddfp(m.r[2], z, m.r[3]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}
