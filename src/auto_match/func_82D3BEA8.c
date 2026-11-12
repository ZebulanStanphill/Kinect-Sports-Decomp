// Havok capsule-style getAabb: both end points transformed by the transform (count-down loop of
// transformPoints), then min/max widened by radius + tolerance. /O2 /QVMXReserve.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);

typedef struct Transform_82D3BEA8 {
    __vector4 col[3];
    __vector4 translation;
} Transform_82D3BEA8;

typedef struct Aabb_82D3BEA8 {
    __vector4 min;
    __vector4 max;
} Aabb_82D3BEA8;

typedef struct Shape_82D3BEA8 {
    char pad0[0x10];
    float radius;               /* 0x10 */
    char pad14[0xc];
    __vector4 vertices[2];      /* 0x20 */
} Shape_82D3BEA8;

static __forceinline void TransformPoints(const Transform_82D3BEA8 *t, const __vector4 *in, int n, __vector4 *out)
{
    __vector4 c0 = t->col[0];
    __vector4 c1 = t->col[1];
    __vector4 c2 = t->col[2];
    __vector4 tr = t->translation;
    int i;

    i = n - 1;
    do {
        __vector4 v = in[i];
        __vector4 r = __vmulfp(c0, __vspltw(v, 0));
        r = __vmaddfp(c1, __vspltw(v, 1), r);
        r = __vmaddfp(c2, __vspltw(v, 2), r);
        out[i] = __vaddfp(r, tr);
    } while (--i >= 0);
}

static __forceinline void SetMin4(__vector4 *r, const __vector4 *a, const __vector4 *b) { *r = __vminfp(*a, *b); }
static __forceinline void SetMax4(__vector4 *r, const __vector4 *a, const __vector4 *b) { *r = __vmaxfp(*a, *b); }
static __forceinline void Sub4(__vector4 *r, const __vector4 *a) { *r = __vsubfp(*r, *a); }
static __forceinline void Add4(__vector4 *r, const __vector4 *a) { *r = __vaddfp(*r, *a); }

void fn_82D3BEA8(const Shape_82D3BEA8 *self, const Transform_82D3BEA8 *t, float tolerance, Aabb_82D3BEA8 *out)
{
    __vector4 tol4;
    __vector4 points[2];

    tol4.vector4_f32[0] = self->radius + tolerance;
    tol4 = __vspltw(tol4, 0);
    TransformPoints(t, self->vertices, 2, points);
    {
        Aabb_82D3BEA8 *o = out;
        SetMin4(&o->min, &points[0], &points[1]);
        SetMax4(&o->max, &points[0], &points[1]);
        Sub4(&o->min, &tol4);
        Add4(&o->max, &tol4);
    }
}
