typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);
__vector4 __vsplth(__vector4 v, unsigned int i);

typedef struct Context_830EADB8 {
    char pad000[0x470];
    int rounding;   // 0x470
} Context_830EADB8;

extern int fn_830E2530(unsigned char *src, int stride, unsigned char *dst, int dstStride,
                       int count, int shift, __vector4 weight, __vector4 rounding, int height);

int fn_830EADB8(unsigned char *src, int stride, unsigned char *dst, int dstStride,
                Context_830EADB8 *context, int unused6, int unused7, int shift, int height)
{
    __vector4 rounding;
    *(int *)&rounding = context->rounding;

    fn_830E2530(src - stride, stride, dst, dstStride, 2 << shift, shift, __vspltish(6),
                __vsplth(rounding, 1), height);
    return 0;
}
