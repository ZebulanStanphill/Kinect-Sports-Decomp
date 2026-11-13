typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);
__vector4 __vaddshs(__vector4 a, __vector4 b);

typedef struct Context_830DD6B8 {
    char pad000[0x460];
    __vector4 rounding;   // 0x460
} Context_830DD6B8;

extern int fn_830DC918(unsigned char *src, int stride, unsigned char *dst, int count, int height,
                       int unused, __vector4 four, __vector4 rounding);

void fn_830DD6B8(unsigned char *src, int stride, unsigned char *dst, Context_830DD6B8 *context,
                 int height)
{
    fn_830DC918(src - stride, stride, dst, (height + 1) * 2, height, 0, __vspltish(4),
                __vaddshs(__vspltish(7), context->rounding));
}
