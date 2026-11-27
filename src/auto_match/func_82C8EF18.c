#include "xdk/vectorintrinsics.h"

void fn_82C8EF18(__vector4 *packed, __vector4 *left, __vector4 *right, int count)
{
    __vector4 shift = __vspltisb(15);
    __vector4 sign = __vslb(shift, shift);
    int blocks = count >> 4;
    int i;

    for (i = 0; i < blocks; ++i) {
        __vector4 a = __vxor(packed[0], sign);
        __vector4 b = __vxor(packed[1], sign);
        __vector4 c = __vxor(packed[2], sign);
        __vector4 d = __vxor(packed[3], sign);
        __vector4 l = __vxor(*left, sign);
        __vector4 r = __vxor(*right, sign);

        a = __vaddsbs(a, a);
        b = __vaddsbs(b, b);
        c = __vaddsbs(c, c);
        d = __vaddsbs(d, d);
        l = __vaddsbs(l, l);
        r = __vaddsbs(r, r);

        packed[0] = __vxor(a, sign);
        packed[1] = __vxor(b, sign);
        packed[2] = __vxor(c, sign);
        packed[3] = __vxor(d, sign);
        *left++ = __vxor(l, sign);
        *right++ = __vxor(r, sign);
        packed += 4;
    }
}
