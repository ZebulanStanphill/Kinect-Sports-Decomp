typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);
__vector4 __vsrh(__vector4 a, __vector4 b);
__vector4 __vaddshs(__vector4 a, __vector4 b);

typedef struct Context_830E2C20 {
    char pad000[0x460];
    __vector4 rounding;     /* 0x460 */
} Context_830E2C20;

extern int fn_830E2530(unsigned char *src, int stride, unsigned char *dst, int dstStride,
                       int count, int shift, __vector4 weight, __vector4 rounding, int height);

/* splat(31): vspltish takes -16..15, so 31 is built as 0xfffb >> 11 in each halfword. */
int fn_830E2C20(unsigned char *src, int stride, unsigned char *dst, Context_830E2C20 *context, int shift)
{
    fn_830E2530(src - stride, stride, dst, stride, 2 << shift, shift, __vspltish(6),
                __vaddshs(__vsrh(__vspltish(-5), __vspltish(-5)), context->rounding), 0);
    return 0;
}
