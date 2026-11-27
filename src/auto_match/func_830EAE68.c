#include "xdk/vectorintrinsics.h"

typedef struct Context_830EAE68 {
    char pad000[0x470];
    int rounding;   // 0x470
} Context_830EAE68;

extern int fn_830E29C0(unsigned char *src, int stride, unsigned char *dst, int dstStride,
                       int count, int shift, __vector4 weight, __vector4 rounding, int height);

int fn_830EAE68(unsigned char *src, int stride, unsigned char *dst, int dstStride,
                Context_830EAE68 *context, int unused6, int unused7, int shift, int height)
{
    __vector4 rounding;
    *(int *)&rounding = context->rounding;

    fn_830E29C0(src - stride, stride, dst, dstStride, 2 << shift, shift, __vspltish(6),
                __vsplth(rounding, 1), height);
    return 0;
}
