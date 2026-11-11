// Video decoder block filter wrapper: runs fn_830E6390 on a square block of (size + 1) * 8
// pixels, source and destination sharing one stride, with the rounding vector kept at +0x450
// of the decoder context.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Context_830E78F8 {
    char pad000[0x450];
    __vector4 rounding;   // 0x450
} Context_830E78F8;

extern void fn_830E6390(unsigned char *src, int srcStride, unsigned char *dst, int dstStride,
                        int width, int height, __vector4 rounding);

void fn_830E78F8(unsigned char *src, int stride, unsigned char *dst, Context_830E78F8 *context,
                 int size)
{
    int extent = (size + 1) * 8;

    fn_830E6390(src, stride, dst, stride, extent, extent, context->rounding);
}
