typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_82273A20 {
    __vector4 r[4];
} Matrix_82273A20;

__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, rcp;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    return __vmulfp(v, rsq);
}

static __forceinline __vector4 Cross3(__vector4 a, __vector4 b)
{
    __vector4 t;

    t = __vmulfp(__vpermwi(a, 99), __vpermwi(b, 135));
    return __vnmsubfp(__vpermwi(a, 135), __vpermwi(b, 99), t);
}

static __forceinline __vector4 Negate(__vector4 v)
{
    __vector4 s;

    s = __vspltisw(-1);
    s = __vslw(s, s);
    return __vxor(v, s);
}

static __forceinline void Transpose(Matrix_82273A20 *mt, Matrix_82273A20 m)
{
    Matrix_82273A20 p;

    p.r[0] = __vmrghw(m.r[0], m.r[2]);
    p.r[1] = __vmrghw(m.r[1], m.r[3]);
    p.r[2] = __vmrglw(m.r[0], m.r[2]);
    p.r[3] = __vmrglw(m.r[1], m.r[3]);
    mt->r[0] = __vmrghw(p.r[0], p.r[1]);
    mt->r[1] = __vmrglw(p.r[0], p.r[1]);
    mt->r[2] = __vmrghw(p.r[2], p.r[3]);
    mt->r[3] = __vmrglw(p.r[2], p.r[3]);
}

/* View matrix looking from eye along direction (left-handed). */
Matrix_82273A20 *fn_82273A20(Matrix_82273A20 *result, __vector4 eye, __vector4 direction, __vector4 up)
{
    __vector4 r0, r1, r2, negEye, d0, d1, d2;
    Matrix_82273A20 m;

    r2 = Normalize3(direction);
    r0 = Cross3(up, r2);
    r0 = Normalize3(r0);
    r1 = Cross3(r2, r0);
    negEye = Negate(eye);
    d0 = __vmsum3fp(r0, negEye);
    d1 = __vmsum3fp(r1, negEye);
    d2 = __vmsum3fp(r2, negEye);
    m.r[0] = __vrlimi(d0, r0, 0xe, 0);
    m.r[1] = __vrlimi(d1, r1, 0xe, 0);
    m.r[2] = __vrlimi(d2, r2, 0xe, 0);
    m.r[3] = __vpermwi(__vupkd3d(__vspltisw(0), 1), 171);
    Transpose(result, m);
    return result;
}
