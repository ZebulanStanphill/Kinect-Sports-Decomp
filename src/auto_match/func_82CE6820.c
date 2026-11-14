typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Transform_82CE6820 {
    __vector4 col[3];           /* rotation */
    __vector4 translation;      /* 0x30 */
} Transform_82CE6820;

extern const __vector4 lbl_82132D00;

/* this = inverse(a) * b */
void fn_82CE6820(Transform_82CE6820 *self, const Transform_82CE6820 *a, const Transform_82CE6820 *b)
{
    int i = 2;

    {
        __vector4 c0 = a->col[0];
        __vector4 c1 = a->col[1];
        __vector4 c2 = a->col[2];

        do {
            __vector4 d0, d1, d2, xz, yw, r;
            d1 = __vmsum3fp(c1, b->col[i]);
            d2 = __vmsum3fp(c2, b->col[i]);
            d0 = __vmsum3fp(c0, b->col[i]);
            yw = __vmrghw(d1, lbl_82132D00);
            xz = __vmrghw(d0, d2);
            r = __vmrghw(xz, yw);
            self->col[i] = r;
            i--;
        } while (i >= 0);
    }
    {
        __vector4 d = __vsubfp(b->translation, a->translation);
        __vector4 d0, d1, d2, xz, yw, r;
        d1 = __vmsum3fp(a->col[1], d);
        d2 = __vmsum3fp(a->col[2], d);
        d0 = __vmsum3fp(a->col[0], d);
        yw = __vmrghw(d1, lbl_82132D00);
        xz = __vmrghw(d0, d2);
        r = __vmrghw(xz, yw);
        self->translation = r;
    }
}
