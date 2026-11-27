#include "xdk/vectorintrinsics.h"

typedef __declspec(align(16)) struct Matrix_8307D828 {
    __vector4 r[4];
} Matrix_8307D828;

/* XMVector3TransformNormal-like: rotate v by the upper 3x3 of m (matrix by value). */
__vector4 fn_8307D828(Matrix_8307D828 m, __vector4 v)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmulfp(z, m.r[2]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}
