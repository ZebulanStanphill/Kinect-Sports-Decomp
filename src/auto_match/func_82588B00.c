typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);
__vector4 __VMXGetReg(int n);

typedef struct Plane_82588B00 {
    float a, b, c, d;
} Plane_82588B00;

typedef struct Frustum_82588B00 {
    char pad0[0x48];
    Plane_82588B00 planes[6];   /* 0x48 */
} Frustum_82588B00;

extern __vector4 lbl_8329E9E0;
extern const __vector4 lbl_82196750;

int fn_82588B00(Frustum_82588B00 *self, const __vector4 *center, float radius)
{
    __vector4 planes[6];
    __vector4 dist[6];
    __vector4 p, r, outside, mask;
    unsigned int cr;
    int i;

    mask = __VMXGetReg(67);
    p = __vsel(*center, lbl_82196750, mask);
    r = __vspltw(__lvlx(&radius, 0), 0);
    outside = lbl_8329E9E0;
    for (i = 0; i < 6; i++) {
        planes[i].vector4_f32[0] = self->planes[i].a;
        planes[i].vector4_f32[1] = self->planes[i].b;
        planes[i].vector4_f32[2] = self->planes[i].c;
        planes[i].vector4_f32[3] = -self->planes[i].d;
    }
    for (i = 0; i < 6; i++) {
        dist[i] = __vmsum4fp(p, planes[i]);
        outside = __vor(outside, __vcmpgtfp(dist[i], r));
    }
    cr = 0;
    __vcmpequwR(outside, lbl_8329E9E0, &cr);
    return (cr & 0x80) != 0;
}
