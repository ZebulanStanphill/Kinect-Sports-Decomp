#include "xdk/vectorintrinsics.h"

typedef struct Context_830E2C80 {
    char pad000[0x460];
    __vector4 rounding;     /* 0x460 */
} Context_830E2C80;

extern int fn_830E29C0(unsigned char *src, int stride, unsigned char *dst, int dstStride,
                       int count, int shift, __vector4 weight, __vector4 rounding, int height);

/* splat(31): vspltish takes -16..15, so 31 is built as 0xfffb >> 11 in each halfword. */
int fn_830E2C80(unsigned char *src, int stride, unsigned char *dst, Context_830E2C80 *context, int shift)
{
    fn_830E29C0(src - stride, stride, dst, stride, 2 << shift, shift, __vspltish(6),
                __vaddshs(__vsrh(__vspltish(-5), __vspltish(-5)), context->rounding), 0);
    return 0;
}
