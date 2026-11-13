typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_8260DAF8 {
    __vector4 r[4];
} Matrix_8260DAF8;

typedef struct Shape_8260DAF8 {
    unsigned int type;                   /* 0x00 */
    int size;                   /* 0x04 */
    int count;                  /* 0x08 */
    int pad0c;
    __vector4 v[3];             /* 0x10 */
} Shape_8260DAF8;

static __forceinline __vector4 TransformCoord(__vector4 v, Matrix_8260DAF8 m)
{
    __vector4 r, zero, mask;

    r = __vmaddfp(m.r[2], __vspltw(v, 2), m.r[3]);
    r = __vmaddfp(__vspltw(v, 1), m.r[1], r);
    r = __vmaddfp(__vspltw(v, 0), m.r[0], r);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(r, zero, mask);
}

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline Matrix_8260DAF8 Transpose(Matrix_8260DAF8 m)
{
    Matrix_8260DAF8 p, t;

    p.r[1] = __vmrghw(m.r[1], m.r[3]);
    p.r[0] = __vmrghw(m.r[0], m.r[2]);
    p.r[2] = __vmrglw(m.r[0], m.r[2]);
    p.r[3] = __vmrglw(m.r[1], m.r[3]);
    t.r[0] = __vmrghw(p.r[0], p.r[1]);
    t.r[1] = __vmrglw(p.r[0], p.r[1]);
    t.r[2] = __vmrghw(p.r[2], p.r[3]);
    t.r[3] = __vmrglw(p.r[2], p.r[3]);
    return t;
}

void fn_8260DAF8(Shape_8260DAF8 *shape, const Matrix_8260DAF8 *m)
{
    switch (shape->type) {
    case 0:
        shape->v[0] = TransformCoord(shape->v[0], *m);
        shape->v[1] = TransformCoord(shape->v[1], *m);
        shape->v[2] = TransformCoord(shape->v[2], *m);
        break;
    case 1:
        {
        __vector4 x, l;

        /* sphere: v[0] = center, v[1].x = radius */
        shape->v[0] = TransformCoord(shape->v[0], *m);
        x = Transpose(*m).r[0];
        l = Length3(x);
        shape->v[1].vector4_f32[0] = l.vector4_f32[0] * shape->v[1].vector4_f32[0];
        }
        break;
    }
}
