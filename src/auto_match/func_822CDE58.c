typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern int fn_822CF710(void *self, __vector4 point, float scale, short first, short second, float radius,
                       int strict);

unsigned char fn_822CDE58(void *self, __vector4 point, float scale, int strict)
{
    float radius;

    if (strict != 0) {
        radius = 0.2f;
    } else {
        radius = 0.05f;
    }
    if (fn_822CF710(self, point, scale, 0xb, 0xd, radius, strict) != 0) {
        return 1;
    }
    return fn_822CF710(self, point, scale, 0xa, 0xc, radius, strict) != 0;
}
