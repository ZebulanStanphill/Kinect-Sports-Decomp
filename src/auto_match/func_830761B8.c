// Negates x, y and z of a vector and keeps w (quaternion conjugate).

#include "xdk/vectorintrinsics.h"

__vector4 fn_830761B8(__vector4 q)
{
    __vector4 sign;
    __vector4 result;

    sign = __vspltisw(-1);
    sign = __vslw(sign, sign);
    result = __vxor(q, sign);
    return __vrlimi(result, q, 1, 0);
}
