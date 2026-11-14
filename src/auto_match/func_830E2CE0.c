typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);
__vector4 __vaddshs(__vector4 a, __vector4 b);

typedef struct Context_830E2CE0 {
    char pad000[0x460];
    __vector4 rounding;     /* 0x460 */
} Context_830E2CE0;

extern int fn_830E2788(unsigned char *src, int stride, unsigned char *dst, int dstStride,
                       int count, int shift, __vector4 weight, __vector4 rounding, int height);

int fn_830E2CE0(unsigned char *src, int stride, unsigned char *dst, Context_830E2CE0 *context, int shift)
{
    fn_830E2788(src - stride, stride, dst, stride, 2 << shift, shift, __vspltish(4),
                __vaddshs(__vspltish(7), context->rounding), 0);
    return 0;
}
