typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vrefp(__vector4 v);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);
void __stvewx(__vector4 v, void *p, int offset);

extern const __vector4 lbl_82132D10;
extern const __vector4 lbl_8323B230[16];

typedef struct Simplex_82DD7898 {
    char pad0[0x100];
    __vector4 lastDir;                      /* 0x100 */
    char pad110[0xc];
    float scale;                            /* 0x11c */
} Simplex_82DD7898;

typedef struct Edge_82DD7898 {
    char pad0[4];
    unsigned char vertex[3];                /* 0x04: byte offsets into the simplex */
} Edge_82DD7898;

typedef struct Result_82DD7898 {
    __vector4 point;                        /* 0x00 */
    __vector4 dir;                          /* 0x10 */
    __vector4 lastDir;                      /* 0x20 */
} Result_82DD7898;

static __forceinline float GetReal(__vector4 v)
{
    float r;
    __stvewx(v, &r, 0);
    return r;
}

static __forceinline __vector4 Cross(__vector4 a, __vector4 b)
{
    __vector4 c0 = __vmulfp(__vpermwi(a, 99), __vpermwi(b, 135));
    __vector4 c1 = __vmulfp(__vpermwi(a, 135), __vpermwi(b, 99));
    return __vsubfp(c0, c1);
}

static __forceinline int AnyIsSet(__vector4 c, int mask)
{
    unsigned int cr;
    __vcmpequwR(__vand(c, lbl_8323B230[mask]), __vspltisw(0), &cr);
    return (int)(~cr & 0x80);
}

int fn_82DD7898(const Simplex_82DD7898 *self, const Edge_82DD7898 *edge, Result_82DD7898 *out)
{
    const __vector4 *a, *b, *c;
    __vector4 ab, cb, ca, n, t, d0, d1, sum, r, f, w, p;
    float lenSq;
    int neg;

    a = (const __vector4 *)((const char *)self + edge->vertex[0]);
    b = (const __vector4 *)((const char *)self + edge->vertex[1]);
    c = (const __vector4 *)((const char *)self + edge->vertex[2]);
    out->point = *a;
    out->lastDir = self->lastDir;
    ab = __vsubfp(*a, *b);
    cb = __vsubfp(*c, *b);
    ca = __vsubfp(*c, *a);
    n = Cross(cb, ca);
    t.vector4_f32[0] = GetReal(__vmsum3fp(ca, cb));
    t.vector4_f32[1] = GetReal(__vmsum3fp(ab, cb));
    t.vector4_f32[2] = GetReal(__vmsum3fp(n, n));
    t.vector4_f32[3] = 0.0f;
    lenSq = GetReal(__vmsum3fp(cb, cb));
    neg = AnyIsSet(__vcmpgtfp(__vspltisw(0), t), 12);
    if (self->scale * lenSq < 0.0f || neg)
        return 1;
    d0 = __vspltw(t, 0);
    d1 = __vspltw(t, 1);
    sum = __vaddfp(d0, d1);
    r = __vrefp(sum);
    r = __vmaddfp(__vnmsubfp(r, sum, lbl_82132D10), r, r);
    f = __vspltw(__vmulfp(d0, r), 0);
    w = __vsubfp(lbl_82132D10, f);
    p = __vmaddfp(f, *c, __vmulfp(w, *b));
    out->dir = __vsubfp(*a, p);
    return 0;
}
