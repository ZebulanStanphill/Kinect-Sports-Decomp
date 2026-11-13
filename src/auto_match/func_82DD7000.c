/* Havok GSK-style triangle step (sibling of func_82DD73F0): with the simplex vertices a, b, c, d
   (byte offsets into the simplex), stores a, a - b and the normalised normal of the triangle (b, c, d),
   then builds the four region signs (the edge-plane distances of a against the three edges and the
   last search direction) and flips the normal when bit 0 is set. Returns the negated sign code & 0xe. */
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    int vector4_i32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vctsxs(__vector4 v, int shift);
void __stvewx(__vector4 v, void *p, int offset);

extern const __vector4 lbl_82132D70;   /* (0.5, 0.5, 0.5, 0.5) */
extern const __vector4 lbl_8217D960;   /* (1, 1, 1, 1) */
extern const __vector4 lbl_8209AB20;   /* sign mask */

typedef struct Simplex_82DD7000 {
    char pad0[0x100];
    __vector4 lastDir;                      /* 0x100 */
} Simplex_82DD7000;

typedef struct Edge_82DD7000 {
    char pad0[4];
    unsigned char vertex[4];                /* 0x04: byte offsets into the simplex */
} Edge_82DD7000;

typedef struct Result_82DD7000 {
    __vector4 point;                        /* 0x00 */
    __vector4 dir;                          /* 0x10 */
    __vector4 normal;                       /* 0x20 */
} Result_82DD7000;

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

static __forceinline __vector4 Normalize3(__vector4 v, __vector4 zero)
{
    __vector4 len2 = __vmsum3fp(v, v);
    __vector4 e = __vrsqrtefp(len2);
    __vector4 halfLen2 = __vmulfp(len2, lbl_82132D70);
    e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
    e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
    e = __vsel(e, zero, __vcmpeqfp(zero, len2));
    return __vmulfp(v, __vspltw(e, 0));
}

static __forceinline __vector4 SignBits(__vector4 v)
{
    const __vector4 ones = {{1.0f, 1.0f, 1.0f, 1.0f}};
    const __vector4 bits = {{8.0f, 4.0f, 2.0f, 1.0f}};
    return __vctsxs(__vmsum4fp(__vand(__vcmpgtfp(__vspltisw(0), v), ones), bits), 0);
}

int fn_82DD7000(const Simplex_82DD7000 *self, const Edge_82DD7000 *edge, Result_82DD7000 *out)
{
    const __vector4 *a, *b, *c, *d;
    __vector4 zero, bd, dc, ac, ad, cb, ab, n, c1, c2, c3, t;
    int mask;

    a = (const __vector4 *)((const char *)self + edge->vertex[0]);
    b = (const __vector4 *)((const char *)self + edge->vertex[1]);
    c = (const __vector4 *)((const char *)self + edge->vertex[2]);
    d = (const __vector4 *)((const char *)self + edge->vertex[3]);
    zero = __vspltisw(0);
    out->point = *a;
    out->dir = __vsubfp(*a, *b);
    dc = __vsubfp(*d, *c);
    bd = __vsubfp(*b, *d);
    ac = __vsubfp(*a, *c);
    ad = __vsubfp(*a, *d);
    cb = __vsubfp(*c, *b);
    ab = __vsubfp(*a, *b);
    n = Cross(dc, bd);
    c1 = Cross(ac, dc);
    c2 = Cross(ad, bd);
    c3 = Cross(ab, cb);
    n = Normalize3(n, zero);
    t.vector4_f32[0] = GetReal(__vmsum3fp(c1, n));
    t.vector4_f32[1] = GetReal(__vmsum3fp(c2, n));
    t.vector4_f32[2] = GetReal(__vmsum3fp(c3, n));
    t.vector4_f32[3] = GetReal(__vmsum3fp(self->lastDir, n));
    out->normal = n;
    {
        __vector4 m = SignBits(t);
        mask = m.vector4_i32[0];
    }
    if (mask & 1) {
        out->normal = __vxor(n, lbl_8209AB20);
    }
    return ~mask & 0xe;
}
