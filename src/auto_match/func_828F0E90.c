#include "xdk/vectorintrinsics.h"

static __forceinline unsigned short FloatToHalf(float value)
{
    __vector4 v;
    unsigned short result;

    v = __vperm(*(__vector4 *)&value, *(__vector4 *)&value, __lvsl(&value, 0));
    v = __vpkd3d(v, v, 5, 2, 2);
    v = __vsplth(v, 0);
    __stvehx(v, &result, 0);
    return result;
}

void fn_828F0E90(unsigned short *out, unsigned int outStride, const float *in, unsigned int inStride, unsigned int count)
{
    unsigned int i;
    const unsigned char *src = (const unsigned char *)in;
    unsigned char *dst = (unsigned char *)out;

    for (i = 0; i < count; i++) {
        *(unsigned short *)dst = FloatToHalf(*(const float *)src);
        src += inStride;
        dst += outStride;
    }
}
