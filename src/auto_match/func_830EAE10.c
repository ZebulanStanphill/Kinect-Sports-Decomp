typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);
__vector4 __vsplth(__vector4 v, unsigned int i);

typedef struct Context_830EAE10 {
    char pad000[0x478];
    int rounding;   // 0x478
} Context_830EAE10;

extern int fn_830E2788(unsigned char *src, int stride, unsigned char *dst, int dstStride,
                       int count, int shift, int height, __vector4 weight, __vector4 rounding);

int fn_830EAE10(unsigned char *src, int stride, unsigned char *dst, int dstStride,
                Context_830EAE10 *context, int unused6, int unused7, int shift, int height)
{
    __vector4 rounding;
    *(int *)&rounding = context->rounding;

    fn_830E2788(src - stride, stride, dst, dstStride, 2 << shift, shift, height, __vspltish(4),
                __vsplth(rounding, 1));
    return 0;
}
