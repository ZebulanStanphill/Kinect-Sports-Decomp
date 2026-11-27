// dst[i] = saturate(a[i] + b[i] + bias - 128) over count bytes: 16 bytes at a time in
// 16-bit lanes (vpkshus saturates), then the remaining bytes one by one.

#include "xdk/vectorintrinsics.h"

void fn_82C6EB90(unsigned char *dst, const unsigned char *a, const unsigned char *b, int count, int bias)
{
    __vector4 vbias;
    __vector4 k128;
    __vector4 zero;
    int blocks = count >> 4;
    int rest = count & 15;
    int i;

    k128 = __vspltish(15);
    zero = __vspltisb(0);
    k128 = __vslb(k128, k128);
    ((short *)&vbias)[0] = (short)bias;
    vbias = __vsplth(vbias, 0);
    for (i = 0; i < blocks; i++) {
        __vector4 va = *(const __vector4 *)a;
        __vector4 vb = *(const __vector4 *)b;
        __vector4 offset = __vsubuhm(vbias, k128);
        __vector4 lo = __vadduhm(__vadduhm(__vmrglb(zero, va), __vmrglb(zero, vb)), offset);
        __vector4 hi = __vadduhm(__vadduhm(__vmrghb(zero, va), __vmrghb(zero, vb)), offset);
        *(__vector4 *)dst = __vpkshus(hi, lo);
        dst += 16;
        a += 16;
        b += 16;
    }
    for (i = 0; i < rest; i++) {
        int sum = a[i] + b[i] + bias - 128;
        if (sum < 0) {
            sum = 0;
        } else if (sum > 255) {
            sum = 255;
        }
        dst[i] = (unsigned char)sum;
    }
}
