typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);

typedef struct Transform_82CE5088 {
    __vector4 rotation[3];
    __vector4 translation;
} Transform_82CE5088;

extern const __vector4 lbl_82132D00;

/* self = transpose(rotation) * (p - translation) */
void fn_82CE5088(__vector4 *self, const Transform_82CE5088 *t, const __vector4 *p)
{
    __vector4 d = __vsubfp(*p, t->translation);
    __vector4 d0, d1, d2, xz, yw;
    d1 = __vmsum3fp(t->rotation[1], d);
    d2 = __vmsum3fp(t->rotation[2], d);
    d0 = __vmsum3fp(t->rotation[0], d);
    yw = __vmrghw(d1, lbl_82132D00);
    xz = __vmrghw(d0, d2);
    *self = __vmrghw(xz, yw);
}
