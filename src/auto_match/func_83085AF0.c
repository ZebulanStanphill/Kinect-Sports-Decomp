#include "xdk/vectorintrinsics.h"

void fn_83085AF0(__vector4 *out)
{
    __vector4 zero;
    zero = __vxor(zero, zero);
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out = zero;
}
