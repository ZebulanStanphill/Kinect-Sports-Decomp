typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Channel_822370D8 {
    int bits;
    int exponent;
} Channel_822370D8;

typedef struct Curve_822370D8 {
    char pad0[8];
    Channel_822370D8 x;
    Channel_822370D8 y;
    Channel_822370D8 z;
} Curve_822370D8;

extern float fn_828E5538(void *reader, int bits, int exponent);

void fn_822370D8(Curve_822370D8 *self, void *reader, __vector4 *out)
{
    __vector4 v = __VMXGetReg(77);
    v.vector4_f32[0] = fn_828E5538(reader, self->x.bits, self->x.exponent);
    v.vector4_f32[1] = fn_828E5538(reader, self->y.bits, self->y.exponent);
    v.vector4_f32[2] = fn_828E5538(reader, self->z.bits, self->z.exponent);
    if (out != 0)
        *out = v;
}
