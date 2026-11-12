typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rot);

extern const __vector4 lbl_82132D70;    /* 0.5 */

typedef struct Triangle_82D76368 {
    __vector4 v[3];
} Triangle_82D76368;

typedef struct Result_82D76368 {
    float invEdgeLength[3];
    float invNormalLength;
    float normalLength;
} Result_82D76368;

static __forceinline __vector4 Cross(__vector4 a, __vector4 b)
{
    __vector4 t0 = __vmulfp(__vpermwi(a, 135), __vpermwi(b, 99));
    __vector4 t1 = __vmulfp(__vpermwi(a, 99), __vpermwi(b, 135));
    return __vsubfp(t1, t0);
}

void fn_82D76368(const Triangle_82D76368 *tri, Result_82D76368 *out)
{
    __vector4 e0, e1, e2, n, l, rsq, h, s;

    e0 = __vsubfp(tri->v[1], tri->v[0]);
    e1 = __vsubfp(tri->v[2], tri->v[1]);
    e2 = __vsubfp(tri->v[0], tri->v[2]);
    n = Cross(e1, e2);
    l = __vmsum3fp(e1, e1);
    l = __vrlimi(l, __vmsum3fp(e2, e2), 4, 0);
    l = __vrlimi(l, __vmsum3fp(e0, e0), 2, 0);
    l = __vrlimi(l, __vmsum3fp(n, n), 1, 0);
    rsq = __vrsqrtefp(l);
    h = __vmulfp(l, lbl_82132D70);
    rsq = __vmaddfp(rsq, __vnmsubfp(h, __vmulfp(rsq, rsq), lbl_82132D70), rsq);
    s = rsq;
    out->invEdgeLength[0] = s.vector4_f32[0];
    out->invEdgeLength[1] = s.vector4_f32[1];
    out->invEdgeLength[2] = s.vector4_f32[2];
    out->invNormalLength = s.vector4_f32[3];
    out->normalLength = l.vector4_f32[3] * s.vector4_f32[3];
}
