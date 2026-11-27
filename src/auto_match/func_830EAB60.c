#include "xdk/vectorintrinsics.h"

extern void fn_830DF2D0(const void *, unsigned int, void *, unsigned int, unsigned int);
extern void fn_830E6E38(void *, unsigned int, void *, unsigned int, unsigned int, __vector4);

void fn_830EAB60(const void *source, unsigned int stride, void *out, unsigned int outStride, int unused5,
                 int unused6, unsigned char depth, unsigned int shift, int mode)
{
    __declspec(align(16)) unsigned char block[768];
    __declspec(align(16)) unsigned int rounding[4];
    unsigned int width = 4u << shift;
    unsigned int height = 1u << (((mode == 0) & shift) + 2);
    rounding[0] = 8 - depth;
    fn_830DF2D0(source, stride, block, width, height);
    fn_830E6E38(block, outStride, out, width, height, __vsplth(*(const __vector4 *)rounding, 1));
}
