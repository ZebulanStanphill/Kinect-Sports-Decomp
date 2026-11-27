// XNA Math XMVector3Transform(V, M) with the matrix passed by value (8 GPR slots).

#include "xdk/vectorintrinsics.h"

typedef __declspec(align(16)) struct Matrix_82F597F0 {
    __vector4 r[4];
} Matrix_82F597F0;

__vector4 fn_82F597F0(__vector4 v, Matrix_82F597F0 m)
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
