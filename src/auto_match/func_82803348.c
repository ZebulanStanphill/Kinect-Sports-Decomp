#include "xdk/vectorintrinsics.h"

__vector4 fn_82803348(__vector4 *a, __vector4 *b, __vector4 *c, int *counter, __vector4 shift, __vector4 add)
{
    __vector4 t = *a;
    __vector4 sign;
    t = __vslb(t, shift);
    t = __vsrb(t, shift);
    t = __vaddubs(t, add);
    sign = __vspltb(t, 15);
    *c = __vaddsbs(*c, sign);
    *b = __vxor(*b, shift);
    *a = __vsr(*a, shift);
    (*counter)++;
    return sign;
}
