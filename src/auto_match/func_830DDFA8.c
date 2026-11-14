typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);
__vector4 __vsubshs(__vector4 a, __vector4 b);

typedef struct Context_830DDFA8 {
    char pad000[0x460];
    __vector4 rounding;   // 0x460
} Context_830DDFA8;

extern void fn_830DC560(unsigned char *src, int stride, unsigned char *dst, int height, int unused);
extern void fn_830DD210(unsigned char *dst, int height, int unused, __vector4 shift,
                        __vector4 rounding);

void fn_830DDFA8(unsigned char *src, int stride, unsigned char *dst, Context_830DDFA8 *context,
                 int height)
{
    __vector4 rounding = __vsubshs(__vspltish(8), context->rounding);
    fn_830DC560(src - 1, stride, dst, height, 0);
    fn_830DD210(dst, height, 0, __vspltish(4), rounding);
}
