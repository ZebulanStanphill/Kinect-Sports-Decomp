#include "xdk/vectorintrinsics.h"

typedef struct Context_830DD668 {
    char pad000[0x460];
    __vector4 rounding;   // 0x460
} Context_830DD668;

extern int fn_830DC6A8(unsigned char *src, int stride, unsigned char *dst, int count, int height,
                       int unused, __vector4 shift, __vector4 rounding);

/* splat(31): vspltish takes -16..15, so 31 is built as 0xfffb >> 11 in each halfword. */
void fn_830DD668(unsigned char *src, int stride, unsigned char *dst, Context_830DD668 *context,
                 int height)
{
    fn_830DC6A8(src - stride, stride, dst, (height + 1) * 2, height, 0, __vspltish(6),
                __vaddshs(__vsrh(__vspltish(-5), __vspltish(-5)), context->rounding));
}
